/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialframeworkproxy/viewmanager.h"
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
			namespace Controls
			{
			}
		}
		namespace Spatial3D
		{
			namespace Controls
			{
			}
		}
	}
}
extern "C" JNIEXPORT jintArray JNICALL Java_global_ViewManager_00024ViewTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
{
	jint enum_values[] = {
		CViewManager::Globe,
		CViewManager::Map,
		CViewManager::None
	};
	jintArray array = __env->NewIntArray(3);
	__env->SetIntArrayRegion(array, 0, 3, enum_values);
	return array;
}
extern "C" JNIEXPORT jlong JNICALL Java_global_ViewManager_openGlobe_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring windowHandle_j)
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
	const ev_char* windowHandle_ch = (const ev_char*)__env->GetStringUTFChars(windowHandle_j,JNI_FALSE);
	const EVString windowHandle = windowHandle_ch;
	__env->ReleaseStringUTFChars(windowHandle_j, (const char *)windowHandle_ch);
	#else
	const ev_wchar* windowHandle_ch = (const ev_wchar*)__env->GetStringChars(windowHandle_j,JNI_FALSE);
	const EVString windowHandle = windowHandle_ch;
	__env->ReleaseStringChars(windowHandle_j, (const jchar *)windowHandle_ch);
	#endif
	CViewManager *pObjectX = (CViewManager*) pObjXXXX;
	CControlSpace* __values1 = pObjectX->openGlobe(name, windowHandle);
	jlong __values1_j = (jlong) __values1;
	return __values1_j;
}
extern "C" JNIEXPORT jlong JNICALL Java_global_ViewManager_openGlobe_1EVString_1ev_1uint32_1ev_1uint32_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jlong winWidth_j, jlong winHeight_j, jstring windowHandle_j)
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
	ev_uint32 winWidth = (ev_uint32) winWidth_j;
	ev_uint32 winHeight = (ev_uint32) winHeight_j;
	#if EV_PLATFORM == EV_PLATFORM_ANDROID
	const ev_char* windowHandle_ch = (const ev_char*)__env->GetStringUTFChars(windowHandle_j,JNI_FALSE);
	const EVString windowHandle = windowHandle_ch;
	__env->ReleaseStringUTFChars(windowHandle_j, (const char *)windowHandle_ch);
	#else
	const ev_wchar* windowHandle_ch = (const ev_wchar*)__env->GetStringChars(windowHandle_j,JNI_FALSE);
	const EVString windowHandle = windowHandle_ch;
	__env->ReleaseStringChars(windowHandle_j, (const jchar *)windowHandle_ch);
	#endif
	CViewManager *pObjectX = (CViewManager*) pObjXXXX;
	CControlSpace* __values1 = pObjectX->openGlobe(name, winWidth, winHeight, windowHandle);
	jlong __values1_j = (jlong) __values1;
	return __values1_j;
}
extern "C" JNIEXPORT jlong JNICALL Java_global_ViewManager_openGlobe_1EVString_1EVString_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring windowHandle_j, jlong toolbarEnabled_j)
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
	const ev_char* windowHandle_ch = (const ev_char*)__env->GetStringUTFChars(windowHandle_j,JNI_FALSE);
	const EVString windowHandle = windowHandle_ch;
	__env->ReleaseStringUTFChars(windowHandle_j, (const char *)windowHandle_ch);
	#else
	const ev_wchar* windowHandle_ch = (const ev_wchar*)__env->GetStringChars(windowHandle_j,JNI_FALSE);
	const EVString windowHandle = windowHandle_ch;
	__env->ReleaseStringChars(windowHandle_j, (const jchar *)windowHandle_ch);
	#endif
	ev_uint32 toolbarEnabled = (ev_uint32) toolbarEnabled_j;
	CViewManager *pObjectX = (CViewManager*) pObjXXXX;
	CControlSpace* __values1 = pObjectX->openGlobe(name, windowHandle, toolbarEnabled);
	jlong __values1_j = (jlong) __values1;
	return __values1_j;
}
extern "C" JNIEXPORT jint JNICALL Java_global_ViewManager_getViewType_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
	const 	CViewManager *pObjectX = (CViewManager*) pObjXXXX;
	CViewManager::ViewType __values1 = pObjectX->getViewType(name);
	jint __values1_j = (jint) __values1;
	return __values1_j;
}
extern "C" JNIEXPORT jint JNICALL Java_global_ViewManager_getActiveViewType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
{
	const 	CViewManager *pObjectX = (CViewManager*) pObjXXXX;
	CViewManager::ViewType __values1 = pObjectX->getActiveViewType();
	jint __values1_j = (jint) __values1;
	return __values1_j;
}
extern "C" JNIEXPORT void JNICALL Java_global_ViewManager_closeGlobe_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
	CViewManager *pObjectX = (CViewManager*) pObjXXXX;
	pObjectX->closeGlobe(name);
}
extern "C" JNIEXPORT jlong JNICALL Java_global_ViewManager_openMap_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
	CViewManager *pObjectX = (CViewManager*) pObjXXXX;
	CControlSpace* __values1 = pObjectX->openMap(name);
	jlong __values1_j = (jlong) __values1;
	return __values1_j;
}
extern "C" JNIEXPORT jlong JNICALL Java_global_ViewManager_openMap_1EVString_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jlong toolbarEnabled_j)
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
	ev_uint32 toolbarEnabled = (ev_uint32) toolbarEnabled_j;
	CViewManager *pObjectX = (CViewManager*) pObjXXXX;
	CControlSpace* __values1 = pObjectX->openMap(name, toolbarEnabled);
	jlong __values1_j = (jlong) __values1;
	return __values1_j;
}
extern "C" JNIEXPORT void JNICALL Java_global_ViewManager_closeMap_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
	CViewManager *pObjectX = (CViewManager*) pObjXXXX;
	pObjectX->closeMap(name);
}
extern "C" JNIEXPORT jlong JNICALL Java_global_ViewManager_openLayout_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
	CViewManager *pObjectX = (CViewManager*) pObjXXXX;
	CControlSpace* __values1 = pObjectX->openLayout(name);
	jlong __values1_j = (jlong) __values1;
	return __values1_j;
}
extern "C" JNIEXPORT void JNICALL Java_global_ViewManager_closeLayout_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
	CViewManager *pObjectX = (CViewManager*) pObjXXXX;
	pObjectX->closeLayout(name);
}
extern "C" JNIEXPORT jlong JNICALL Java_global_ViewManager_getActiveControlSpace_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
{
	const 	CViewManager *pObjectX = (CViewManager*) pObjXXXX;
	CControlSpace* __values1 = pObjectX->getActiveControlSpace();
	jlong __values1_j = (jlong) __values1;
	return __values1_j;
}
extern "C" JNIEXPORT jlong JNICALL Java_global_ViewManager_getLastActiveControlSpace_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
{
	const 	CViewManager *pObjectX = (CViewManager*) pObjXXXX;
	CControlSpace* __values1 = pObjectX->getLastActiveControlSpace();
	jlong __values1_j = (jlong) __values1;
	return __values1_j;
}
extern "C" JNIEXPORT jstring JNICALL Java_global_ViewManager_getActiveControlName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
{
	const 	CViewManager *pObjectX = (CViewManager*) pObjXXXX;
	EVString __values1 = pObjectX->getActiveControlName();
	EarthView::World::Core::ev_wstring valuesw1 = __values1;
	jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
	return __values1_j;
}
extern "C" JNIEXPORT jstring JNICALL Java_global_ViewManager_getLastActiveControlName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
{
	const 	CViewManager *pObjectX = (CViewManager*) pObjXXXX;
	EVString __values1 = pObjectX->getLastActiveControlName();
	EarthView::World::Core::ev_wstring valuesw1 = __values1;
	jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
	return __values1_j;
}
extern "C" JNIEXPORT jlong JNICALL Java_global_ViewManager_getActiveSpatialControl_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
{
	const 	CViewManager *pObjectX = (CViewManager*) pObjXXXX;
	EarthView::World::Spatial::Atlas::ISpatialControl* __values1 = pObjectX->getActiveSpatialControl();
	jlong __values1_j = (jlong) __values1;
	return __values1_j;
}
extern "C" JNIEXPORT jlong JNICALL Java_global_ViewManager_getLastActiveSpatialControl_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
{
	const 	CViewManager *pObjectX = (CViewManager*) pObjXXXX;
	EarthView::World::Spatial::Atlas::ISpatialControl* __values1 = pObjectX->getLastActiveSpatialControl();
	jlong __values1_j = (jlong) __values1;
	return __values1_j;
}
extern "C" JNIEXPORT jlong JNICALL Java_global_ViewManager_getSpatialControlByName_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring spatialControlName_j)
{
	#if EV_PLATFORM == EV_PLATFORM_ANDROID
	const ev_char* spatialControlName_ch = (const ev_char*)__env->GetStringUTFChars(spatialControlName_j,JNI_FALSE);
	const EVString spatialControlName = spatialControlName_ch;
	__env->ReleaseStringUTFChars(spatialControlName_j, (const char *)spatialControlName_ch);
	#else
	const ev_wchar* spatialControlName_ch = (const ev_wchar*)__env->GetStringChars(spatialControlName_j,JNI_FALSE);
	const EVString spatialControlName = spatialControlName_ch;
	__env->ReleaseStringChars(spatialControlName_j, (const jchar *)spatialControlName_ch);
	#endif
	const 	CViewManager *pObjectX = (CViewManager*) pObjXXXX;
	EarthView::World::Spatial::Atlas::ISpatialControl* __values1 = pObjectX->getSpatialControlByName(spatialControlName);
	jlong __values1_j = (jlong) __values1;
	return __values1_j;
}
extern "C" JNIEXPORT jlong JNICALL Java_global_ViewManager_getControlSpaceByName_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring spatialControlName_j)
{
	#if EV_PLATFORM == EV_PLATFORM_ANDROID
	const ev_char* spatialControlName_ch = (const ev_char*)__env->GetStringUTFChars(spatialControlName_j,JNI_FALSE);
	const EVString spatialControlName = spatialControlName_ch;
	__env->ReleaseStringUTFChars(spatialControlName_j, (const char *)spatialControlName_ch);
	#else
	const ev_wchar* spatialControlName_ch = (const ev_wchar*)__env->GetStringChars(spatialControlName_j,JNI_FALSE);
	const EVString spatialControlName = spatialControlName_ch;
	__env->ReleaseStringChars(spatialControlName_j, (const jchar *)spatialControlName_ch);
	#endif
	const 	CViewManager *pObjectX = (CViewManager*) pObjXXXX;
	CControlSpace* __values1 = pObjectX->getControlSpaceByName(spatialControlName);
	jlong __values1_j = (jlong) __values1;
	return __values1_j;
}
extern "C" JNIEXPORT jlong JNICALL Java_global_ViewManager_getControlSpaceByControl_1ISpatialControl(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ctrl_j)
{
	EarthView::World::Spatial::Atlas::ISpatialControl *ctrl = (EarthView::World::Spatial::Atlas::ISpatialControl*) ctrl_j;
	const 	CViewManager *pObjectX = (CViewManager*) pObjXXXX;
	CControlSpace* __values1 = pObjectX->getControlSpaceByControl(ctrl);
	jlong __values1_j = (jlong) __values1;
	return __values1_j;
}
extern "C" JNIEXPORT jboolean JNICALL Java_global_ViewManager_setActiveSpatialControl_1ISpatialControl(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong spatialControl_j)
{
	EarthView::World::Spatial::Atlas::ISpatialControl *spatialControl = (EarthView::World::Spatial::Atlas::ISpatialControl*) spatialControl_j;
	CViewManager *pObjectX = (CViewManager*) pObjXXXX;
	ev_bool __values1 = pObjectX->setActiveSpatialControl(spatialControl);
	jboolean __values1_j = (jboolean)__values1;
	return __values1_j;
}
extern "C" JNIEXPORT jboolean JNICALL Java_global_ViewManager_setActiveSpatialControl_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring spatialControlName_j)
{
	#if EV_PLATFORM == EV_PLATFORM_ANDROID
	const ev_char* spatialControlName_ch = (const ev_char*)__env->GetStringUTFChars(spatialControlName_j,JNI_FALSE);
	const EVString spatialControlName = spatialControlName_ch;
	__env->ReleaseStringUTFChars(spatialControlName_j, (const char *)spatialControlName_ch);
	#else
	const ev_wchar* spatialControlName_ch = (const ev_wchar*)__env->GetStringChars(spatialControlName_j,JNI_FALSE);
	const EVString spatialControlName = spatialControlName_ch;
	__env->ReleaseStringChars(spatialControlName_j, (const jchar *)spatialControlName_ch);
	#endif
	CViewManager *pObjectX = (CViewManager*) pObjXXXX;
	ev_bool __values1 = pObjectX->setActiveSpatialControl(spatialControlName);
	jboolean __values1_j = (jboolean)__values1;
	return __values1_j;
}
extern "C" JNIEXPORT jint JNICALL Java_global_ViewManager_getControlCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
{
	const 	CViewManager *pObjectX = (CViewManager*) pObjXXXX;
	ev_int32 __values1 = pObjectX->getControlCount();
	jint __values1_j = (jint)__values1;
	return __values1_j;
}
extern "C" JNIEXPORT jint JNICALL Java_global_ViewManager_getMapControlCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
{
	const 	CViewManager *pObjectX = (CViewManager*) pObjXXXX;
	ev_int32 __values1 = pObjectX->getMapControlCount();
	jint __values1_j = (jint)__values1;
	return __values1_j;
}
extern "C" JNIEXPORT jint JNICALL Java_global_ViewManager_getGlobeControlCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
{
	const 	CViewManager *pObjectX = (CViewManager*) pObjXXXX;
	ev_int32 __values1 = pObjectX->getGlobeControlCount();
	jint __values1_j = (jint)__values1;
	return __values1_j;
}
extern "C" JNIEXPORT jint JNICALL Java_global_ViewManager_getLayoutControlCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
{
	const 	CViewManager *pObjectX = (CViewManager*) pObjXXXX;
	ev_int32 __values1 = pObjectX->getLayoutControlCount();
	jint __values1_j = (jint)__values1;
	return __values1_j;
}
extern "C" JNIEXPORT jlong JNICALL Java_global_ViewManager_getControl_1int(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint index_j)
{
	int index = (int) index_j;
	const 	CViewManager *pObjectX = (CViewManager*) pObjXXXX;
	EarthView::World::Spatial::Atlas::ISpatialControl* __values1 = pObjectX->getControl(index);
	jlong __values1_j = (jlong) __values1;
	return __values1_j;
}
extern "C" JNIEXPORT jboolean JNICALL Java_global_ViewManager_isSpatialExists_1ISpatialControl(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ctrl_j)
{
	EarthView::World::Spatial::Atlas::ISpatialControl *ctrl = (EarthView::World::Spatial::Atlas::ISpatialControl*) ctrl_j;
	const 	CViewManager *pObjectX = (CViewManager*) pObjXXXX;
	ev_bool __values1 = pObjectX->isSpatialExists(ctrl);
	jboolean __values1_j = (jboolean)__values1;
	return __values1_j;
}
extern "C" JNIEXPORT jlong JNICALL Java_global_ViewManager_getSingleton_1void(JNIEnv *__env , jclass __clazz)
{
	CViewManager& __values1 = CViewManager::getSingleton();
	jlong __values1_j = (jlong) &__values1;
	return __values1_j;
}
extern "C" JNIEXPORT jlong JNICALL Java_global_ViewManager_getSingletonPtr_1void(JNIEnv *__env , jclass __clazz)
{
	CViewManager* __values1 = CViewManager::getSingletonPtr();
	jlong __values1_j = (jlong) __values1;
	return __values1_j;
}
