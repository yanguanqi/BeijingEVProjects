/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "industryengine/industrygraphic/scutcheontextevent.h"
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
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_industryengine_industrygraphic_ScutcheonTextEvent_00024ScutcheonTextEventTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					CScutcheonTextEvent::STET_MouseDown,
					CScutcheonTextEvent::STET_MouseMove,
					CScutcheonTextEvent::STET_MouseUp,
					CScutcheonTextEvent::STET_KeyDown,
					CScutcheonTextEvent::STET_KeyUp,
					CScutcheonTextEvent::STET_Selected
				};
				jintArray array = __env->NewIntArray(6);
				__env->SetIntArrayRegion(array, 0, 6, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_industrygraphic_ScutcheonTextEvent_getSelectedScutcheon_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEvent *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEvent*) pObjXXXX;
				EarthView::IndustryEngine::IndustryGraphic::CScutcheonText* __values1 = pObjectX->getSelectedScutcheon();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_ScutcheonTextEvent_setSelectedScutcheon_1CScutcheonText(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong scutcheon_j)
			{
				EarthView::IndustryEngine::IndustryGraphic::CScutcheonText *scutcheon = (EarthView::IndustryEngine::IndustryGraphic::CScutcheonText*) scutcheon_j;
				EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEvent *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEvent*) pObjXXXX;
				pObjectX->setSelectedScutcheon(scutcheon);
			}
		}
	}
}
