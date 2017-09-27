/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/modelbindinfo.h"
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
		}
		namespace Spatial3D
		{
			namespace ModelManager
			{
			}
			namespace EffectManager
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace ModelManager
			{
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_EffectObject_get_1mpEffect_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::EffectObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::EffectObject*)pObjXXXX;
					jlong __values1_j = (jlong)(pObjectX->mpEffect);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_EffectObject_set_1mpEffect_1CEffect(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial3D::ModelManager::EffectObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::EffectObject*)pObjXXXX;
					pObjectX->mpEffect = (EarthView::World::Spatial3D::EffectManager::CEffect*) __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_EffectObject_get_1mRefInfo_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::EffectObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::EffectObject*)pObjXXXX;
					jlong __values1_j = (jlong) &(pObjectX->mRefInfo);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_EffectObject_set_1mRefInfo_1CMeshEffectRefInfo(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial3D::ModelManager::EffectObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::EffectObject*)pObjXXXX;
					pObjectX->mRefInfo = *(EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo*) __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelObject_get_1mpModel_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::ModelObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::ModelObject*)pObjXXXX;
					jlong __values1_j = (jlong)(pObjectX->mpModel);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelObject_set_1mpModel_1CModelBaseObject(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial3D::ModelManager::ModelObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::ModelObject*)pObjXXXX;
					pObjectX->mpModel = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelObject_get_1mRefInfo_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::ModelObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::ModelObject*)pObjXXXX;
					jlong __values1_j = (jlong) &(pObjectX->mRefInfo);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelObject_set_1mRefInfo_1CMeshEffectRefInfo(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial3D::ModelManager::ModelObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::ModelObject*)pObjXXXX;
					pObjectX->mRefInfo = *(EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo*) __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_LightObject_get_1mpLight_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::LightObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::LightObject*)pObjXXXX;
					jlong __values1_j = (jlong)(pObjectX->mpLight);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_LightObject_set_1mpLight_1CLight(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial3D::ModelManager::LightObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::LightObject*)pObjXXXX;
					pObjectX->mpLight = (EarthView::World::Graphic::CLight*) __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_LightObject_get_1mRefInfo_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::LightObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::LightObject*)pObjXXXX;
					jlong __values1_j = (jlong) &(pObjectX->mRefInfo);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_LightObject_set_1mRefInfo_1CMeshEffectRefInfo(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial3D::ModelManager::LightObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::LightObject*)pObjXXXX;
					pObjectX->mRefInfo = *(EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo*) __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_RibbonTrailObject_get_1mpTrail_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::RibbonTrailObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::RibbonTrailObject*)pObjXXXX;
					jlong __values1_j = (jlong)(pObjectX->mpTrail);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_RibbonTrailObject_set_1mpTrail_1CRibbonTrail(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial3D::ModelManager::RibbonTrailObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::RibbonTrailObject*)pObjXXXX;
					pObjectX->mpTrail = (EarthView::World::Graphic::CRibbonTrail*) __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_RibbonTrailObject_get_1mpRefInfo_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::RibbonTrailObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::RibbonTrailObject*)pObjXXXX;
					jlong __values1_j = (jlong)(pObjectX->mpRefInfo);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_RibbonTrailObject_set_1mpRefInfo_1CMeshEffectRefInfo(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial3D::ModelManager::RibbonTrailObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::RibbonTrailObject*)pObjXXXX;
					pObjectX->mpRefInfo = (EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo*) __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_RibbonTrailObjectMap_push_1EVString_1RibbonTrailObject(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j, jlong val_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
					const EVString key = key_ch;
					__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
					#else
					const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
					const EVString key = key_ch;
					__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
					#endif
					EarthView::World::Spatial3D::ModelManager::RibbonTrailObject &val = *(EarthView::World::Spatial3D::ModelManager::RibbonTrailObject*) val_j;
					EarthView::World::Spatial3D::ModelManager::RibbonTrailObjectMap *pObjectX = (EarthView::World::Spatial3D::ModelManager::RibbonTrailObjectMap*) pObjXXXX;
					ev_bool __values1 = pObjectX->push(key, val);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_RibbonTrailObjectMap_exist_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
					const EVString key = key_ch;
					__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
					#else
					const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
					const EVString key = key_ch;
					__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
					#endif
					EarthView::World::Spatial3D::ModelManager::RibbonTrailObjectMap *pObjectX = (EarthView::World::Spatial3D::ModelManager::RibbonTrailObjectMap*) pObjXXXX;
					ev_bool __values1 = pObjectX->exist(key);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_RibbonTrailObjectMap_OperatorIndex_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring key_j )
				{
					EarthView::World::Spatial3D::ModelManager::RibbonTrailObjectMap& pObjectX = *(EarthView::World::Spatial3D::ModelManager::RibbonTrailObjectMap*) pObjXXXX;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
					const EVString key = key_ch;
					__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
					#else
					const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
					const EVString key = key_ch;
					__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
					#endif
					EarthView::World::Spatial3D::ModelManager::RibbonTrailObject& __values1 = pObjectX[key];
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_RibbonTrailObjectMap_get_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
					const EVString key = key_ch;
					__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
					#else
					const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
					const EVString key = key_ch;
					__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
					#endif
					EarthView::World::Spatial3D::ModelManager::RibbonTrailObjectMap *pObjectX = (EarthView::World::Spatial3D::ModelManager::RibbonTrailObjectMap*) pObjXXXX;
					EarthView::World::Spatial3D::ModelManager::RibbonTrailObject& __values1 = pObjectX->get(key);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_RibbonTrailObjectMap_erase_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
					const EVString key = key_ch;
					__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
					#else
					const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
					const EVString key = key_ch;
					__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
					#endif
					EarthView::World::Spatial3D::ModelManager::RibbonTrailObjectMap *pObjectX = (EarthView::World::Spatial3D::ModelManager::RibbonTrailObjectMap*) pObjXXXX;
					pObjectX->erase(key);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_RibbonTrailObjectMap_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::ModelManager::RibbonTrailObjectMap *pObjectX = (EarthView::World::Spatial3D::ModelManager::RibbonTrailObjectMap*) pObjXXXX;
					ev_size_t __values1 = pObjectX->size();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_RibbonTrailObjectMap_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::RibbonTrailObjectMap *pObjectX = (EarthView::World::Spatial3D::ModelManager::RibbonTrailObjectMap*) pObjXXXX;
					pObjectX->clear();
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_RibbonTrailObjectMap_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::ModelManager::RibbonTrailObjectMap *pObjectX = (EarthView::World::Spatial3D::ModelManager::RibbonTrailObjectMap*) pObjXXXX;
					ev_bool __values1 = pObjectX->empty();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_RibbonTrailObjectMap_getKeys_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::ModelManager::RibbonTrailObjectMap *pObjectX = (EarthView::World::Spatial3D::ModelManager::RibbonTrailObjectMap*) pObjXXXX;
					EarthView::World::Core::StringVector __values1 = pObjectX->getKeys();
					EarthView::World::Core::StringVector *returnvalues = new EarthView::World::Core::StringVector(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_EffectObjectMap_push_1EVString_1EffectObject(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j, jlong val_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
					const EVString key = key_ch;
					__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
					#else
					const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
					const EVString key = key_ch;
					__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
					#endif
					EarthView::World::Spatial3D::ModelManager::EffectObject &val = *(EarthView::World::Spatial3D::ModelManager::EffectObject*) val_j;
					EarthView::World::Spatial3D::ModelManager::EffectObjectMap *pObjectX = (EarthView::World::Spatial3D::ModelManager::EffectObjectMap*) pObjXXXX;
					ev_bool __values1 = pObjectX->push(key, val);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_EffectObjectMap_exist_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
					const EVString key = key_ch;
					__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
					#else
					const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
					const EVString key = key_ch;
					__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
					#endif
					EarthView::World::Spatial3D::ModelManager::EffectObjectMap *pObjectX = (EarthView::World::Spatial3D::ModelManager::EffectObjectMap*) pObjXXXX;
					ev_bool __values1 = pObjectX->exist(key);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_EffectObjectMap_OperatorIndex_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring key_j )
				{
					EarthView::World::Spatial3D::ModelManager::EffectObjectMap& pObjectX = *(EarthView::World::Spatial3D::ModelManager::EffectObjectMap*) pObjXXXX;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
					const EVString key = key_ch;
					__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
					#else
					const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
					const EVString key = key_ch;
					__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
					#endif
					EarthView::World::Spatial3D::ModelManager::EffectObject& __values1 = pObjectX[key];
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_EffectObjectMap_get_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
					const EVString key = key_ch;
					__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
					#else
					const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
					const EVString key = key_ch;
					__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
					#endif
					EarthView::World::Spatial3D::ModelManager::EffectObjectMap *pObjectX = (EarthView::World::Spatial3D::ModelManager::EffectObjectMap*) pObjXXXX;
					EarthView::World::Spatial3D::ModelManager::EffectObject& __values1 = pObjectX->get(key);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_EffectObjectMap_erase_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
					const EVString key = key_ch;
					__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
					#else
					const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
					const EVString key = key_ch;
					__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
					#endif
					EarthView::World::Spatial3D::ModelManager::EffectObjectMap *pObjectX = (EarthView::World::Spatial3D::ModelManager::EffectObjectMap*) pObjXXXX;
					pObjectX->erase(key);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_EffectObjectMap_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::ModelManager::EffectObjectMap *pObjectX = (EarthView::World::Spatial3D::ModelManager::EffectObjectMap*) pObjXXXX;
					ev_size_t __values1 = pObjectX->size();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_EffectObjectMap_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::EffectObjectMap *pObjectX = (EarthView::World::Spatial3D::ModelManager::EffectObjectMap*) pObjXXXX;
					pObjectX->clear();
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_EffectObjectMap_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::ModelManager::EffectObjectMap *pObjectX = (EarthView::World::Spatial3D::ModelManager::EffectObjectMap*) pObjXXXX;
					ev_bool __values1 = pObjectX->empty();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_EffectObjectMap_getKeys_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::ModelManager::EffectObjectMap *pObjectX = (EarthView::World::Spatial3D::ModelManager::EffectObjectMap*) pObjXXXX;
					EarthView::World::Core::StringVector __values1 = pObjectX->getKeys();
					EarthView::World::Core::StringVector *returnvalues = new EarthView::World::Core::StringVector(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_LightObjectMap_push_1EVString_1LightObject(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j, jlong val_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
					const EVString key = key_ch;
					__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
					#else
					const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
					const EVString key = key_ch;
					__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
					#endif
					EarthView::World::Spatial3D::ModelManager::LightObject &val = *(EarthView::World::Spatial3D::ModelManager::LightObject*) val_j;
					EarthView::World::Spatial3D::ModelManager::LightObjectMap *pObjectX = (EarthView::World::Spatial3D::ModelManager::LightObjectMap*) pObjXXXX;
					ev_bool __values1 = pObjectX->push(key, val);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_LightObjectMap_exist_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
					const EVString key = key_ch;
					__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
					#else
					const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
					const EVString key = key_ch;
					__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
					#endif
					EarthView::World::Spatial3D::ModelManager::LightObjectMap *pObjectX = (EarthView::World::Spatial3D::ModelManager::LightObjectMap*) pObjXXXX;
					ev_bool __values1 = pObjectX->exist(key);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_LightObjectMap_OperatorIndex_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring key_j )
				{
					EarthView::World::Spatial3D::ModelManager::LightObjectMap& pObjectX = *(EarthView::World::Spatial3D::ModelManager::LightObjectMap*) pObjXXXX;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
					const EVString key = key_ch;
					__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
					#else
					const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
					const EVString key = key_ch;
					__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
					#endif
					EarthView::World::Spatial3D::ModelManager::LightObject& __values1 = pObjectX[key];
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_LightObjectMap_get_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
					const EVString key = key_ch;
					__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
					#else
					const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
					const EVString key = key_ch;
					__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
					#endif
					EarthView::World::Spatial3D::ModelManager::LightObjectMap *pObjectX = (EarthView::World::Spatial3D::ModelManager::LightObjectMap*) pObjXXXX;
					EarthView::World::Spatial3D::ModelManager::LightObject& __values1 = pObjectX->get(key);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_LightObjectMap_erase_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
					const EVString key = key_ch;
					__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
					#else
					const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
					const EVString key = key_ch;
					__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
					#endif
					EarthView::World::Spatial3D::ModelManager::LightObjectMap *pObjectX = (EarthView::World::Spatial3D::ModelManager::LightObjectMap*) pObjXXXX;
					pObjectX->erase(key);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_LightObjectMap_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::ModelManager::LightObjectMap *pObjectX = (EarthView::World::Spatial3D::ModelManager::LightObjectMap*) pObjXXXX;
					ev_size_t __values1 = pObjectX->size();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_LightObjectMap_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::LightObjectMap *pObjectX = (EarthView::World::Spatial3D::ModelManager::LightObjectMap*) pObjXXXX;
					pObjectX->clear();
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_LightObjectMap_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::ModelManager::LightObjectMap *pObjectX = (EarthView::World::Spatial3D::ModelManager::LightObjectMap*) pObjXXXX;
					ev_bool __values1 = pObjectX->empty();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_LightObjectMap_getKeys_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::ModelManager::LightObjectMap *pObjectX = (EarthView::World::Spatial3D::ModelManager::LightObjectMap*) pObjXXXX;
					EarthView::World::Core::StringVector __values1 = pObjectX->getKeys();
					EarthView::World::Core::StringVector *returnvalues = new EarthView::World::Core::StringVector(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_EffectBindedObjectMap_push_1EVString_1EffectObjectMap(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j, jlong val_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
					const EVString key = key_ch;
					__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
					#else
					const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
					const EVString key = key_ch;
					__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
					#endif
					EarthView::World::Spatial3D::ModelManager::EffectObjectMap *&val = *(EarthView::World::Spatial3D::ModelManager::EffectObjectMap**) val_j;
					EarthView::World::Spatial3D::ModelManager::EffectBindedObjectMap *pObjectX = (EarthView::World::Spatial3D::ModelManager::EffectBindedObjectMap*) pObjXXXX;
					ev_bool __values1 = pObjectX->push(key, val);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_EffectBindedObjectMap_exist_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
					const EVString key = key_ch;
					__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
					#else
					const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
					const EVString key = key_ch;
					__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
					#endif
					EarthView::World::Spatial3D::ModelManager::EffectBindedObjectMap *pObjectX = (EarthView::World::Spatial3D::ModelManager::EffectBindedObjectMap*) pObjXXXX;
					ev_bool __values1 = pObjectX->exist(key);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_EffectBindedObjectMap_OperatorIndex_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring key_j )
				{
					EarthView::World::Spatial3D::ModelManager::EffectBindedObjectMap& pObjectX = *(EarthView::World::Spatial3D::ModelManager::EffectBindedObjectMap*) pObjXXXX;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
					const EVString key = key_ch;
					__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
					#else
					const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
					const EVString key = key_ch;
					__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
					#endif
					EarthView::World::Spatial3D::ModelManager::EffectObjectMap*& __values1 = pObjectX[key];
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_EffectBindedObjectMap_get_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
					const EVString key = key_ch;
					__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
					#else
					const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
					const EVString key = key_ch;
					__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
					#endif
					EarthView::World::Spatial3D::ModelManager::EffectBindedObjectMap *pObjectX = (EarthView::World::Spatial3D::ModelManager::EffectBindedObjectMap*) pObjXXXX;
					EarthView::World::Spatial3D::ModelManager::EffectObjectMap*& __values1 = pObjectX->get(key);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_EffectBindedObjectMap_erase_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
					const EVString key = key_ch;
					__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
					#else
					const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
					const EVString key = key_ch;
					__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
					#endif
					EarthView::World::Spatial3D::ModelManager::EffectBindedObjectMap *pObjectX = (EarthView::World::Spatial3D::ModelManager::EffectBindedObjectMap*) pObjXXXX;
					pObjectX->erase(key);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_EffectBindedObjectMap_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::ModelManager::EffectBindedObjectMap *pObjectX = (EarthView::World::Spatial3D::ModelManager::EffectBindedObjectMap*) pObjXXXX;
					ev_size_t __values1 = pObjectX->size();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_EffectBindedObjectMap_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::EffectBindedObjectMap *pObjectX = (EarthView::World::Spatial3D::ModelManager::EffectBindedObjectMap*) pObjXXXX;
					pObjectX->clear();
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_EffectBindedObjectMap_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::ModelManager::EffectBindedObjectMap *pObjectX = (EarthView::World::Spatial3D::ModelManager::EffectBindedObjectMap*) pObjXXXX;
					ev_bool __values1 = pObjectX->empty();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_EffectBindedObjectMap_getKeys_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::ModelManager::EffectBindedObjectMap *pObjectX = (EarthView::World::Spatial3D::ModelManager::EffectBindedObjectMap*) pObjXXXX;
					EarthView::World::Core::StringVector __values1 = pObjectX->getKeys();
					EarthView::World::Core::StringVector *returnvalues = new EarthView::World::Core::StringVector(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelObjectMap_push_1EVString_1ModelObject(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j, jlong val_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
					const EVString key = key_ch;
					__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
					#else
					const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
					const EVString key = key_ch;
					__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
					#endif
					EarthView::World::Spatial3D::ModelManager::ModelObject &val = *(EarthView::World::Spatial3D::ModelManager::ModelObject*) val_j;
					EarthView::World::Spatial3D::ModelManager::ModelObjectMap *pObjectX = (EarthView::World::Spatial3D::ModelManager::ModelObjectMap*) pObjXXXX;
					ev_bool __values1 = pObjectX->push(key, val);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelObjectMap_exist_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
					const EVString key = key_ch;
					__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
					#else
					const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
					const EVString key = key_ch;
					__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
					#endif
					EarthView::World::Spatial3D::ModelManager::ModelObjectMap *pObjectX = (EarthView::World::Spatial3D::ModelManager::ModelObjectMap*) pObjXXXX;
					ev_bool __values1 = pObjectX->exist(key);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelObjectMap_OperatorIndex_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring key_j )
				{
					EarthView::World::Spatial3D::ModelManager::ModelObjectMap& pObjectX = *(EarthView::World::Spatial3D::ModelManager::ModelObjectMap*) pObjXXXX;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
					const EVString key = key_ch;
					__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
					#else
					const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
					const EVString key = key_ch;
					__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
					#endif
					EarthView::World::Spatial3D::ModelManager::ModelObject& __values1 = pObjectX[key];
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelObjectMap_get_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
					const EVString key = key_ch;
					__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
					#else
					const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
					const EVString key = key_ch;
					__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
					#endif
					EarthView::World::Spatial3D::ModelManager::ModelObjectMap *pObjectX = (EarthView::World::Spatial3D::ModelManager::ModelObjectMap*) pObjXXXX;
					EarthView::World::Spatial3D::ModelManager::ModelObject& __values1 = pObjectX->get(key);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelObjectMap_erase_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
					const EVString key = key_ch;
					__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
					#else
					const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
					const EVString key = key_ch;
					__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
					#endif
					EarthView::World::Spatial3D::ModelManager::ModelObjectMap *pObjectX = (EarthView::World::Spatial3D::ModelManager::ModelObjectMap*) pObjXXXX;
					pObjectX->erase(key);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelObjectMap_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::ModelManager::ModelObjectMap *pObjectX = (EarthView::World::Spatial3D::ModelManager::ModelObjectMap*) pObjXXXX;
					ev_size_t __values1 = pObjectX->size();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelObjectMap_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::ModelObjectMap *pObjectX = (EarthView::World::Spatial3D::ModelManager::ModelObjectMap*) pObjXXXX;
					pObjectX->clear();
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelObjectMap_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::ModelManager::ModelObjectMap *pObjectX = (EarthView::World::Spatial3D::ModelManager::ModelObjectMap*) pObjXXXX;
					ev_bool __values1 = pObjectX->empty();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelObjectMap_getKeys_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::ModelManager::ModelObjectMap *pObjectX = (EarthView::World::Spatial3D::ModelManager::ModelObjectMap*) pObjXXXX;
					EarthView::World::Core::StringVector __values1 = pObjectX->getKeys();
					EarthView::World::Core::StringVector *returnvalues = new EarthView::World::Core::StringVector(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelBindedObjectMap_push_1EVString_1ModelObjectMap(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j, jlong val_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
					const EVString key = key_ch;
					__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
					#else
					const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
					const EVString key = key_ch;
					__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
					#endif
					EarthView::World::Spatial3D::ModelManager::ModelObjectMap *&val = *(EarthView::World::Spatial3D::ModelManager::ModelObjectMap**) val_j;
					EarthView::World::Spatial3D::ModelManager::ModelBindedObjectMap *pObjectX = (EarthView::World::Spatial3D::ModelManager::ModelBindedObjectMap*) pObjXXXX;
					ev_bool __values1 = pObjectX->push(key, val);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelBindedObjectMap_exist_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
					const EVString key = key_ch;
					__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
					#else
					const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
					const EVString key = key_ch;
					__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
					#endif
					EarthView::World::Spatial3D::ModelManager::ModelBindedObjectMap *pObjectX = (EarthView::World::Spatial3D::ModelManager::ModelBindedObjectMap*) pObjXXXX;
					ev_bool __values1 = pObjectX->exist(key);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelBindedObjectMap_OperatorIndex_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring key_j )
				{
					EarthView::World::Spatial3D::ModelManager::ModelBindedObjectMap& pObjectX = *(EarthView::World::Spatial3D::ModelManager::ModelBindedObjectMap*) pObjXXXX;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
					const EVString key = key_ch;
					__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
					#else
					const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
					const EVString key = key_ch;
					__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
					#endif
					EarthView::World::Spatial3D::ModelManager::ModelObjectMap*& __values1 = pObjectX[key];
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelBindedObjectMap_get_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
					const EVString key = key_ch;
					__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
					#else
					const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
					const EVString key = key_ch;
					__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
					#endif
					EarthView::World::Spatial3D::ModelManager::ModelBindedObjectMap *pObjectX = (EarthView::World::Spatial3D::ModelManager::ModelBindedObjectMap*) pObjXXXX;
					EarthView::World::Spatial3D::ModelManager::ModelObjectMap*& __values1 = pObjectX->get(key);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelBindedObjectMap_erase_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
					const EVString key = key_ch;
					__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
					#else
					const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
					const EVString key = key_ch;
					__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
					#endif
					EarthView::World::Spatial3D::ModelManager::ModelBindedObjectMap *pObjectX = (EarthView::World::Spatial3D::ModelManager::ModelBindedObjectMap*) pObjXXXX;
					pObjectX->erase(key);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelBindedObjectMap_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::ModelManager::ModelBindedObjectMap *pObjectX = (EarthView::World::Spatial3D::ModelManager::ModelBindedObjectMap*) pObjXXXX;
					ev_size_t __values1 = pObjectX->size();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelBindedObjectMap_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::ModelBindedObjectMap *pObjectX = (EarthView::World::Spatial3D::ModelManager::ModelBindedObjectMap*) pObjXXXX;
					pObjectX->clear();
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelBindedObjectMap_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::ModelManager::ModelBindedObjectMap *pObjectX = (EarthView::World::Spatial3D::ModelManager::ModelBindedObjectMap*) pObjXXXX;
					ev_bool __values1 = pObjectX->empty();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelBindedObjectMap_getKeys_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::ModelManager::ModelBindedObjectMap *pObjectX = (EarthView::World::Spatial3D::ModelManager::ModelBindedObjectMap*) pObjXXXX;
					EarthView::World::Core::StringVector __values1 = pObjectX->getKeys();
					EarthView::World::Core::StringVector *returnvalues = new EarthView::World::Core::StringVector(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_LightBindedObjectMap_push_1EVString_1LightObjectMap(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j, jlong val_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
					const EVString key = key_ch;
					__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
					#else
					const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
					const EVString key = key_ch;
					__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
					#endif
					EarthView::World::Spatial3D::ModelManager::LightObjectMap *&val = *(EarthView::World::Spatial3D::ModelManager::LightObjectMap**) val_j;
					EarthView::World::Spatial3D::ModelManager::LightBindedObjectMap *pObjectX = (EarthView::World::Spatial3D::ModelManager::LightBindedObjectMap*) pObjXXXX;
					ev_bool __values1 = pObjectX->push(key, val);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_LightBindedObjectMap_exist_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
					const EVString key = key_ch;
					__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
					#else
					const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
					const EVString key = key_ch;
					__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
					#endif
					EarthView::World::Spatial3D::ModelManager::LightBindedObjectMap *pObjectX = (EarthView::World::Spatial3D::ModelManager::LightBindedObjectMap*) pObjXXXX;
					ev_bool __values1 = pObjectX->exist(key);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_LightBindedObjectMap_OperatorIndex_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring key_j )
				{
					EarthView::World::Spatial3D::ModelManager::LightBindedObjectMap& pObjectX = *(EarthView::World::Spatial3D::ModelManager::LightBindedObjectMap*) pObjXXXX;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
					const EVString key = key_ch;
					__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
					#else
					const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
					const EVString key = key_ch;
					__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
					#endif
					EarthView::World::Spatial3D::ModelManager::LightObjectMap*& __values1 = pObjectX[key];
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_LightBindedObjectMap_get_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
					const EVString key = key_ch;
					__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
					#else
					const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
					const EVString key = key_ch;
					__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
					#endif
					EarthView::World::Spatial3D::ModelManager::LightBindedObjectMap *pObjectX = (EarthView::World::Spatial3D::ModelManager::LightBindedObjectMap*) pObjXXXX;
					EarthView::World::Spatial3D::ModelManager::LightObjectMap*& __values1 = pObjectX->get(key);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_LightBindedObjectMap_erase_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
					const EVString key = key_ch;
					__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
					#else
					const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
					const EVString key = key_ch;
					__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
					#endif
					EarthView::World::Spatial3D::ModelManager::LightBindedObjectMap *pObjectX = (EarthView::World::Spatial3D::ModelManager::LightBindedObjectMap*) pObjXXXX;
					pObjectX->erase(key);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_LightBindedObjectMap_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::ModelManager::LightBindedObjectMap *pObjectX = (EarthView::World::Spatial3D::ModelManager::LightBindedObjectMap*) pObjXXXX;
					ev_size_t __values1 = pObjectX->size();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_LightBindedObjectMap_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::LightBindedObjectMap *pObjectX = (EarthView::World::Spatial3D::ModelManager::LightBindedObjectMap*) pObjXXXX;
					pObjectX->clear();
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_LightBindedObjectMap_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::ModelManager::LightBindedObjectMap *pObjectX = (EarthView::World::Spatial3D::ModelManager::LightBindedObjectMap*) pObjXXXX;
					ev_bool __values1 = pObjectX->empty();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_LightBindedObjectMap_getKeys_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::ModelManager::LightBindedObjectMap *pObjectX = (EarthView::World::Spatial3D::ModelManager::LightBindedObjectMap*) pObjXXXX;
					EarthView::World::Core::StringVector __values1 = pObjectX->getKeys();
					EarthView::World::Core::StringVector *returnvalues = new EarthView::World::Core::StringVector(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
		}
	}
}
