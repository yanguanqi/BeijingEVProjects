/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "industryengine/industrygraphic/screenscutcheonmanager.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace IndustryEngine
	{
		namespace IndustryGraphic
		{
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_industrygraphic_ScutcheonMap_push_1EVString_1CScreenScutcheon(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j, jlong val_j)
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
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon *&val = *(EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon**) val_j;
				EarthView::IndustryEngine::IndustryGraphic::CScutcheonMap *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CScutcheonMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->push(key, val);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_industrygraphic_ScutcheonMap_exist_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
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
				const 				EarthView::IndustryEngine::IndustryGraphic::CScutcheonMap *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CScutcheonMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->exist(key);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_industrygraphic_ScutcheonMap_OperatorIndex_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring key_j )
			{
				EarthView::IndustryEngine::IndustryGraphic::CScutcheonMap& pObjectX = *(EarthView::IndustryEngine::IndustryGraphic::CScutcheonMap*) pObjXXXX;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
				#else
				const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
				#endif
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon*& __values1 = pObjectX[key];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_industrygraphic_ScutcheonMap_get_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
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
				EarthView::IndustryEngine::IndustryGraphic::CScutcheonMap *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CScutcheonMap*) pObjXXXX;
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon*& __values1 = pObjectX->get(key);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_ScutcheonMap_erase_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
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
				EarthView::IndustryEngine::IndustryGraphic::CScutcheonMap *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CScutcheonMap*) pObjXXXX;
				pObjectX->erase(key);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_industrygraphic_ScutcheonMap_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::IndustryGraphic::CScutcheonMap *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CScutcheonMap*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_ScutcheonMap_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::IndustryGraphic::CScutcheonMap *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CScutcheonMap*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_industrygraphic_ScutcheonMap_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::IndustryGraphic::CScutcheonMap *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CScutcheonMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_industrygraphic_ScreenScutcheonManager_OperatorIndex_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring name_j )
			{
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonManager& pObjectX = *(EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonManager*) pObjXXXX;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon* __values1 = pObjectX[name];
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_industrygraphic_ScreenScutcheonManager_getScutcheon_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonManager *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonManager*) pObjXXXX;
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon* __values1 = pObjectX->getScutcheon(name);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_ScreenScutcheonManager_destoryScutcheon_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonManager *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonManager*) pObjXXXX;
				pObjectX->destoryScutcheon(name);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_ScreenScutcheonManager_destoryAll_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonManager *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonManager*) pObjXXXX;
				pObjectX->destoryAll();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_industrygraphic_ScreenScutcheonManager_createScutcheon_1EVString_1EVString_1CGlobeControl(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring templateName_j, jlong control_j)
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
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* templateName_ch = (const ev_char*)__env->GetStringUTFChars(templateName_j,JNI_FALSE);
				const EVString templateName = templateName_ch;
				__env->ReleaseStringUTFChars(templateName_j, (const char *)templateName_ch);
				#else
				const ev_wchar* templateName_ch = (const ev_wchar*)__env->GetStringChars(templateName_j,JNI_FALSE);
				const EVString templateName = templateName_ch;
				__env->ReleaseStringChars(templateName_j, (const jchar *)templateName_ch);
				#endif
				EarthView::World::Spatial3D::Controls::CGlobeControl *control = (EarthView::World::Spatial3D::Controls::CGlobeControl*) control_j;
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonManager *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonManager*) pObjXXXX;
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon* __values1 = pObjectX->createScutcheon(name, templateName, control);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_industrygraphic_ScreenScutcheonManager_exist_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonManager *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonManager*) pObjXXXX;
				bool __values1 = pObjectX->exist(name);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_industrygraphic_ScreenScutcheonManager_getSingleton_1void(JNIEnv *__env , jclass __clazz)
			{
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonManager& __values1 = EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonManager::getSingleton();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_industrygraphic_ScreenScutcheonManager_getSingletonPtr_1void(JNIEnv *__env , jclass __clazz)
			{
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonManager* __values1 = EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonManager::getSingletonPtr();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_industrygraphic_ScreenScutcheonManager_getScutcheonMap_1CGlobeControl(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong control_j)
			{
				EarthView::World::Spatial3D::Controls::CGlobeControl *control = (EarthView::World::Spatial3D::Controls::CGlobeControl*) control_j;
				const 				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonManager *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonManager*) pObjXXXX;
				EarthView::IndustryEngine::IndustryGraphic::CScutcheonMap __values1 = pObjectX->getScutcheonMap(control);
				EarthView::IndustryEngine::IndustryGraphic::CScutcheonMap *returnvalues = new EarthView::IndustryEngine::IndustryGraphic::CScutcheonMap(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_ScreenScutcheonManager_setVisible_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean value_j)
			{
				const bool value = (const bool) value_j;
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonManager *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonManager*) pObjXXXX;
				pObjectX->setVisible(value);
			}
		}
	}
}
