/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "globecontrol/globecontrolmanager.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace RenderSystem
		{
			namespace GLES2
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Plugin
		{
			namespace ParticleFX
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
		}
		namespace Spatial3D
		{
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Controls
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Core
		{
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Controls
			{
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControlMap_push_1EVString_1C3DControl(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j, jlong val_j)
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
					EarthView::World::Spatial3D::Controls::C3DControl *&val = *(EarthView::World::Spatial3D::Controls::C3DControl**) val_j;
					EarthView::World::Spatial3D::Controls::CGlobeControlMap *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControlMap*) pObjXXXX;
					ev_bool __values1 = pObjectX->push(key, val);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControlMap_exist_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
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
					EarthView::World::Spatial3D::Controls::CGlobeControlMap *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControlMap*) pObjXXXX;
					ev_bool __values1 = pObjectX->exist(key);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControlMap_OperatorIndex_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring key_j )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControlMap& pObjectX = *(EarthView::World::Spatial3D::Controls::CGlobeControlMap*) pObjXXXX;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
					const EVString key = key_ch;
					__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
					#else
					const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
					const EVString key = key_ch;
					__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
					#endif
					EarthView::World::Spatial3D::Controls::C3DControl*& __values1 = pObjectX[key];
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControlMap_get_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
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
					EarthView::World::Spatial3D::Controls::CGlobeControlMap *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControlMap*) pObjXXXX;
					EarthView::World::Spatial3D::Controls::C3DControl*& __values1 = pObjectX->get(key);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControlMap_erase_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
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
					EarthView::World::Spatial3D::Controls::CGlobeControlMap *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControlMap*) pObjXXXX;
					pObjectX->erase(key);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControlMap_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Controls::CGlobeControlMap *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControlMap*) pObjXXXX;
					ev_size_t __values1 = pObjectX->size();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControlMap_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CGlobeControlMap *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControlMap*) pObjXXXX;
					pObjectX->clear();
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControlMap_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Controls::CGlobeControlMap *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControlMap*) pObjXXXX;
					ev_bool __values1 = pObjectX->empty();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControlManager_getSingleton_1void(JNIEnv *__env , jclass __clazz)
				{
					EarthView::World::Spatial3D::Controls::CGlobeControlManager& __values1 = EarthView::World::Spatial3D::Controls::CGlobeControlManager::getSingleton();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControlManager_getSingletonPtr_1void(JNIEnv *__env , jclass __clazz)
				{
					EarthView::World::Spatial3D::Controls::CGlobeControlManager* __values1 = EarthView::World::Spatial3D::Controls::CGlobeControlManager::getSingletonPtr();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControlManager_setup_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CGlobeControlManager *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControlManager*) pObjXXXX;
					bool __values1 = pObjectX->setup();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControlManager_setup_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean externalWindowHandle_j)
				{
					bool externalWindowHandle = (bool) externalWindowHandle_j;
					EarthView::World::Spatial3D::Controls::CGlobeControlManager *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControlManager*) pObjXXXX;
					bool __values1 = pObjectX->setup(externalWindowHandle);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControlManager_createGlobeControl_1EVString_1int_1int_1CommonStringPairList(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring windowName_j, jint windowWidth_j, jint windowHeight_j, jlong miscParams_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* windowName_ch = (const ev_char*)__env->GetStringUTFChars(windowName_j,JNI_FALSE);
					const EVString windowName = windowName_ch;
					__env->ReleaseStringUTFChars(windowName_j, (const char *)windowName_ch);
					#else
					const ev_wchar* windowName_ch = (const ev_wchar*)__env->GetStringChars(windowName_j,JNI_FALSE);
					const EVString windowName = windowName_ch;
					__env->ReleaseStringChars(windowName_j, (const jchar *)windowName_ch);
					#endif
					int windowWidth = (int) windowWidth_j;
					int windowHeight = (int) windowHeight_j;
					EarthView::World::Core::CommonStringPairList *miscParams = (EarthView::World::Core::CommonStringPairList*) miscParams_j;
					EarthView::World::Spatial3D::Controls::CGlobeControlManager *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControlManager*) pObjXXXX;
					EarthView::World::Spatial3D::Controls::CGlobeControl* __values1 = pObjectX->createGlobeControl(windowName, windowWidth, windowHeight, miscParams);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControlManager_removeGlobeControl_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring globeGlobeName_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* globeGlobeName_ch = (const ev_char*)__env->GetStringUTFChars(globeGlobeName_j,JNI_FALSE);
					const EVString globeGlobeName = globeGlobeName_ch;
					__env->ReleaseStringUTFChars(globeGlobeName_j, (const char *)globeGlobeName_ch);
					#else
					const ev_wchar* globeGlobeName_ch = (const ev_wchar*)__env->GetStringChars(globeGlobeName_j,JNI_FALSE);
					const EVString globeGlobeName = globeGlobeName_ch;
					__env->ReleaseStringChars(globeGlobeName_j, (const jchar *)globeGlobeName_ch);
					#endif
					EarthView::World::Spatial3D::Controls::CGlobeControlManager *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControlManager*) pObjXXXX;
					pObjectX->removeGlobeControl(globeGlobeName);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControlManager_createCommonSceneControl_1ev_1int32_1int_1int(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint windowName_j, jint windowWidth_j, jint windowHeight_j)
				{
					ev_int32 windowName = (ev_int32) windowName_j;
					int windowWidth = (int) windowWidth_j;
					int windowHeight = (int) windowHeight_j;
					EarthView::World::Spatial3D::Controls::CGlobeControlManager *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControlManager*) pObjXXXX;
					EarthView::World::Spatial3D::Controls::CCommonSceneControl* __values1 = pObjectX->createCommonSceneControl(windowName, windowWidth, windowHeight);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControlManager_createCommonSceneControl_1EVString_1int_1int(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring windowName_j, jint windowWidth_j, jint windowHeight_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* windowName_ch = (const ev_char*)__env->GetStringUTFChars(windowName_j,JNI_FALSE);
					const EVString windowName = windowName_ch;
					__env->ReleaseStringUTFChars(windowName_j, (const char *)windowName_ch);
					#else
					const ev_wchar* windowName_ch = (const ev_wchar*)__env->GetStringChars(windowName_j,JNI_FALSE);
					const EVString windowName = windowName_ch;
					__env->ReleaseStringChars(windowName_j, (const jchar *)windowName_ch);
					#endif
					int windowWidth = (int) windowWidth_j;
					int windowHeight = (int) windowHeight_j;
					EarthView::World::Spatial3D::Controls::CGlobeControlManager *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControlManager*) pObjXXXX;
					EarthView::World::Spatial3D::Controls::CCommonSceneControl* __values1 = pObjectX->createCommonSceneControl(windowName, windowWidth, windowHeight);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControlManager_remove3Dcontrol_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring DControlName_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* DControlName_ch = (const ev_char*)__env->GetStringUTFChars(DControlName_j,JNI_FALSE);
					const EVString DControlName = DControlName_ch;
					__env->ReleaseStringUTFChars(DControlName_j, (const char *)DControlName_ch);
					#else
					const ev_wchar* DControlName_ch = (const ev_wchar*)__env->GetStringChars(DControlName_j,JNI_FALSE);
					const EVString DControlName = DControlName_ch;
					__env->ReleaseStringChars(DControlName_j, (const jchar *)DControlName_ch);
					#endif
					EarthView::World::Spatial3D::Controls::CGlobeControlManager *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControlManager*) pObjXXXX;
					pObjectX->remove3Dcontrol(DControlName);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControlManager_getGlobeControl_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring globeControlName_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* globeControlName_ch = (const ev_char*)__env->GetStringUTFChars(globeControlName_j,JNI_FALSE);
					const EVString globeControlName = globeControlName_ch;
					__env->ReleaseStringUTFChars(globeControlName_j, (const char *)globeControlName_ch);
					#else
					const ev_wchar* globeControlName_ch = (const ev_wchar*)__env->GetStringChars(globeControlName_j,JNI_FALSE);
					const EVString globeControlName = globeControlName_ch;
					__env->ReleaseStringChars(globeControlName_j, (const jchar *)globeControlName_ch);
					#endif
					const 					EarthView::World::Spatial3D::Controls::CGlobeControlManager *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControlManager*) pObjXXXX;
					EarthView::World::Spatial3D::Controls::CGlobeControl* __values1 = pObjectX->getGlobeControl(globeControlName);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControlManager_existGlobeControl_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring globeControlName_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* globeControlName_ch = (const ev_char*)__env->GetStringUTFChars(globeControlName_j,JNI_FALSE);
					const EVString globeControlName = globeControlName_ch;
					__env->ReleaseStringUTFChars(globeControlName_j, (const char *)globeControlName_ch);
					#else
					const ev_wchar* globeControlName_ch = (const ev_wchar*)__env->GetStringChars(globeControlName_j,JNI_FALSE);
					const EVString globeControlName = globeControlName_ch;
					__env->ReleaseStringChars(globeControlName_j, (const jchar *)globeControlName_ch);
					#endif
					const 					EarthView::World::Spatial3D::Controls::CGlobeControlManager *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControlManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->existGlobeControl(globeControlName);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControlManager_existGlobeControl_1CGlobeControl(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong globeControl_j)
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl *globeControl = (EarthView::World::Spatial3D::Controls::CGlobeControl*) globeControl_j;
					const 					EarthView::World::Spatial3D::Controls::CGlobeControlManager *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControlManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->existGlobeControl(globeControl);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_GlobeControlManager_frame_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CGlobeControlManager *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeControlManager*) pObjXXXX;
					bool __values1 = pObjectX->frame();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
		}
	}
}
