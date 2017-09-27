/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "industryengine/industrygraphic/screenscutcheonevent.h"
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
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_industryengine_industrygraphic_ScreenScutcheonEvent_00024EVScreenScutcheonEventTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					CScreenScutcheonEvent::STET_MouseDown,
					CScreenScutcheonEvent::STET_MouseMove,
					CScreenScutcheonEvent::STET_MouseUp,
					CScreenScutcheonEvent::STET_KeyDown,
					CScreenScutcheonEvent::STET_KeyUp,
					CScreenScutcheonEvent::STET_Selected,
					CScreenScutcheonEvent::STET_MouseWheel
				};
				jintArray array = __env->NewIntArray(7);
				__env->SetIntArrayRegion(array, 0, 7, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_industrygraphic_ScreenScutcheonEvent_getSelectedScreenScutcheon_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEvent *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEvent*) pObjXXXX;
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon* __values1 = pObjectX->getSelectedScreenScutcheon();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_ScreenScutcheonEvent_setSelectedScreenScutcheon_1CScreenScutcheon(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong scutcheon_j)
			{
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon *scutcheon = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon*) scutcheon_j;
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEvent *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEvent*) pObjXXXX;
				pObjectX->setSelectedScreenScutcheon(scutcheon);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_industryengine_industrygraphic_ScreenScutcheonEvent_getX_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEvent *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEvent*) pObjXXXX;
				int __values1 = pObjectX->getX();
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_industryengine_industrygraphic_ScreenScutcheonEvent_getY_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEvent *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEvent*) pObjXXXX;
				int __values1 = pObjectX->getY();
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
		}
	}
}
