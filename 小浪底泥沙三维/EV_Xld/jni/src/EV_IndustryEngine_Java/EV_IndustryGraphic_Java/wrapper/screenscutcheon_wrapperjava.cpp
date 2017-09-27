/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "industryengine/industrygraphic/screenscutcheon.h"
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_ScreenScutcheon_setSelected_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean value_j)
			{
				const ev_bool value = (const ev_bool) value_j;
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon*) pObjXXXX;
				pObjectX->setSelected(value);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_industrygraphic_ScreenScutcheon_getSelected_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon*) pObjXXXX;
				bool __values1 = pObjectX->getSelected();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_ScreenScutcheon_setSelectable_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean value_j)
			{
				const ev_bool value = (const ev_bool) value_j;
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon*) pObjXXXX;
				pObjectX->setSelectable(value);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_industrygraphic_ScreenScutcheon_getSelectable_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon*) pObjXXXX;
				bool __values1 = pObjectX->getSelectable();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_ScreenScutcheon_setDraggable_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean value_j)
			{
				const ev_bool value = (const ev_bool) value_j;
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon*) pObjXXXX;
				pObjectX->setDraggable(value);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_industrygraphic_ScreenScutcheon_getDraggable_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon*) pObjXXXX;
				bool __values1 = pObjectX->getDraggable();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_ScreenScutcheon_setVisible_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean visible_j)
			{
				const bool visible = (const bool) visible_j;
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon*) pObjXXXX;
				pObjectX->setVisible(visible);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_industrygraphic_ScreenScutcheon_getVisible_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon*) pObjXXXX;
				bool __values1 = pObjectX->getVisible();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_industryengine_industrygraphic_ScreenScutcheon_getName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon*) pObjXXXX;
				EVString __values1 = pObjectX->getName();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_ScreenScutcheon_setPanelElementHeight_1EVString_1int(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring panelElementName_j, jint height_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* panelElementName_ch = (const ev_char*)__env->GetStringUTFChars(panelElementName_j,JNI_FALSE);
				const EVString panelElementName = panelElementName_ch;
				__env->ReleaseStringUTFChars(panelElementName_j, (const char *)panelElementName_ch);
				#else
				const ev_wchar* panelElementName_ch = (const ev_wchar*)__env->GetStringChars(panelElementName_j,JNI_FALSE);
				const EVString panelElementName = panelElementName_ch;
				__env->ReleaseStringChars(panelElementName_j, (const jchar *)panelElementName_ch);
				#endif
				const int height = (const int) height_j;
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon*) pObjXXXX;
				pObjectX->setPanelElementHeight(panelElementName, height);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_industryengine_industrygraphic_ScreenScutcheon_getPanelElementHeight_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring panelElementName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* panelElementName_ch = (const ev_char*)__env->GetStringUTFChars(panelElementName_j,JNI_FALSE);
				const EVString panelElementName = panelElementName_ch;
				__env->ReleaseStringUTFChars(panelElementName_j, (const char *)panelElementName_ch);
				#else
				const ev_wchar* panelElementName_ch = (const ev_wchar*)__env->GetStringChars(panelElementName_j,JNI_FALSE);
				const EVString panelElementName = panelElementName_ch;
				__env->ReleaseStringChars(panelElementName_j, (const jchar *)panelElementName_ch);
				#endif
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon*) pObjXXXX;
				int __values1 = pObjectX->getPanelElementHeight(panelElementName);
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_ScreenScutcheon_setPanelElementWidth_1EVString_1int(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring panelElementName_j, jint width_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* panelElementName_ch = (const ev_char*)__env->GetStringUTFChars(panelElementName_j,JNI_FALSE);
				const EVString panelElementName = panelElementName_ch;
				__env->ReleaseStringUTFChars(panelElementName_j, (const char *)panelElementName_ch);
				#else
				const ev_wchar* panelElementName_ch = (const ev_wchar*)__env->GetStringChars(panelElementName_j,JNI_FALSE);
				const EVString panelElementName = panelElementName_ch;
				__env->ReleaseStringChars(panelElementName_j, (const jchar *)panelElementName_ch);
				#endif
				const int width = (const int) width_j;
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon*) pObjXXXX;
				pObjectX->setPanelElementWidth(panelElementName, width);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_industryengine_industrygraphic_ScreenScutcheon_getPanelElementWidth_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring panelElementName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* panelElementName_ch = (const ev_char*)__env->GetStringUTFChars(panelElementName_j,JNI_FALSE);
				const EVString panelElementName = panelElementName_ch;
				__env->ReleaseStringUTFChars(panelElementName_j, (const char *)panelElementName_ch);
				#else
				const ev_wchar* panelElementName_ch = (const ev_wchar*)__env->GetStringChars(panelElementName_j,JNI_FALSE);
				const EVString panelElementName = panelElementName_ch;
				__env->ReleaseStringChars(panelElementName_j, (const jchar *)panelElementName_ch);
				#endif
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon*) pObjXXXX;
				int __values1 = pObjectX->getPanelElementWidth(panelElementName);
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_ScreenScutcheon_setPanelElementPostion_1EVString_1CVector2(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring panelElementName_j, jlong pos_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* panelElementName_ch = (const ev_char*)__env->GetStringUTFChars(panelElementName_j,JNI_FALSE);
				const EVString panelElementName = panelElementName_ch;
				__env->ReleaseStringUTFChars(panelElementName_j, (const char *)panelElementName_ch);
				#else
				const ev_wchar* panelElementName_ch = (const ev_wchar*)__env->GetStringChars(panelElementName_j,JNI_FALSE);
				const EVString panelElementName = panelElementName_ch;
				__env->ReleaseStringChars(panelElementName_j, (const jchar *)panelElementName_ch);
				#endif
				const EarthView::World::Spatial::Math::CVector2 &pos = *(EarthView::World::Spatial::Math::CVector2*) pos_j;
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon*) pObjXXXX;
				pObjectX->setPanelElementPostion(panelElementName, pos);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_industrygraphic_ScreenScutcheon_getPanelElementPostion_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring panelElementName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* panelElementName_ch = (const ev_char*)__env->GetStringUTFChars(panelElementName_j,JNI_FALSE);
				const EVString panelElementName = panelElementName_ch;
				__env->ReleaseStringUTFChars(panelElementName_j, (const char *)panelElementName_ch);
				#else
				const ev_wchar* panelElementName_ch = (const ev_wchar*)__env->GetStringChars(panelElementName_j,JNI_FALSE);
				const EVString panelElementName = panelElementName_ch;
				__env->ReleaseStringChars(panelElementName_j, (const jchar *)panelElementName_ch);
				#endif
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon*) pObjXXXX;
				EarthView::World::Spatial::Math::CVector2 __values1 = pObjectX->getPanelElementPostion(panelElementName);
				EarthView::World::Spatial::Math::CVector2 *returnvalues = new EarthView::World::Spatial::Math::CVector2(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_ScreenScutcheon_setTextElementFontName_1EVString_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring panelElementName_j, jstring textAreaName_j, jstring fontName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* panelElementName_ch = (const ev_char*)__env->GetStringUTFChars(panelElementName_j,JNI_FALSE);
				const EVString panelElementName = panelElementName_ch;
				__env->ReleaseStringUTFChars(panelElementName_j, (const char *)panelElementName_ch);
				#else
				const ev_wchar* panelElementName_ch = (const ev_wchar*)__env->GetStringChars(panelElementName_j,JNI_FALSE);
				const EVString panelElementName = panelElementName_ch;
				__env->ReleaseStringChars(panelElementName_j, (const jchar *)panelElementName_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* textAreaName_ch = (const ev_char*)__env->GetStringUTFChars(textAreaName_j,JNI_FALSE);
				const EVString textAreaName = textAreaName_ch;
				__env->ReleaseStringUTFChars(textAreaName_j, (const char *)textAreaName_ch);
				#else
				const ev_wchar* textAreaName_ch = (const ev_wchar*)__env->GetStringChars(textAreaName_j,JNI_FALSE);
				const EVString textAreaName = textAreaName_ch;
				__env->ReleaseStringChars(textAreaName_j, (const jchar *)textAreaName_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* fontName_ch = (const ev_char*)__env->GetStringUTFChars(fontName_j,JNI_FALSE);
				const EVString fontName = fontName_ch;
				__env->ReleaseStringUTFChars(fontName_j, (const char *)fontName_ch);
				#else
				const ev_wchar* fontName_ch = (const ev_wchar*)__env->GetStringChars(fontName_j,JNI_FALSE);
				const EVString fontName = fontName_ch;
				__env->ReleaseStringChars(fontName_j, (const jchar *)fontName_ch);
				#endif
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon*) pObjXXXX;
				pObjectX->setTextElementFontName(panelElementName, textAreaName, fontName);
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_industryengine_industrygraphic_ScreenScutcheon_getTextElementFontName_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring panelElementName_j, jstring textAreaName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* panelElementName_ch = (const ev_char*)__env->GetStringUTFChars(panelElementName_j,JNI_FALSE);
				const EVString panelElementName = panelElementName_ch;
				__env->ReleaseStringUTFChars(panelElementName_j, (const char *)panelElementName_ch);
				#else
				const ev_wchar* panelElementName_ch = (const ev_wchar*)__env->GetStringChars(panelElementName_j,JNI_FALSE);
				const EVString panelElementName = panelElementName_ch;
				__env->ReleaseStringChars(panelElementName_j, (const jchar *)panelElementName_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* textAreaName_ch = (const ev_char*)__env->GetStringUTFChars(textAreaName_j,JNI_FALSE);
				const EVString textAreaName = textAreaName_ch;
				__env->ReleaseStringUTFChars(textAreaName_j, (const char *)textAreaName_ch);
				#else
				const ev_wchar* textAreaName_ch = (const ev_wchar*)__env->GetStringChars(textAreaName_j,JNI_FALSE);
				const EVString textAreaName = textAreaName_ch;
				__env->ReleaseStringChars(textAreaName_j, (const jchar *)textAreaName_ch);
				#endif
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon*) pObjXXXX;
				EVString __values1 = pObjectX->getTextElementFontName(panelElementName, textAreaName);
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_ScreenScutcheon_setTextElementFontColor_1EVString_1EVString_1CColourValue(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring panelElementName_j, jstring textAreaName_j, jlong color_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* panelElementName_ch = (const ev_char*)__env->GetStringUTFChars(panelElementName_j,JNI_FALSE);
				const EVString panelElementName = panelElementName_ch;
				__env->ReleaseStringUTFChars(panelElementName_j, (const char *)panelElementName_ch);
				#else
				const ev_wchar* panelElementName_ch = (const ev_wchar*)__env->GetStringChars(panelElementName_j,JNI_FALSE);
				const EVString panelElementName = panelElementName_ch;
				__env->ReleaseStringChars(panelElementName_j, (const jchar *)panelElementName_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* textAreaName_ch = (const ev_char*)__env->GetStringUTFChars(textAreaName_j,JNI_FALSE);
				const EVString textAreaName = textAreaName_ch;
				__env->ReleaseStringUTFChars(textAreaName_j, (const char *)textAreaName_ch);
				#else
				const ev_wchar* textAreaName_ch = (const ev_wchar*)__env->GetStringChars(textAreaName_j,JNI_FALSE);
				const EVString textAreaName = textAreaName_ch;
				__env->ReleaseStringChars(textAreaName_j, (const jchar *)textAreaName_ch);
				#endif
				const EarthView::World::Graphic::CColourValue &color = *(EarthView::World::Graphic::CColourValue*) color_j;
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon*) pObjXXXX;
				pObjectX->setTextElementFontColor(panelElementName, textAreaName, color);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_industrygraphic_ScreenScutcheon_getTextElementFontColor_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring panelElementName_j, jstring textAreaName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* panelElementName_ch = (const ev_char*)__env->GetStringUTFChars(panelElementName_j,JNI_FALSE);
				const EVString panelElementName = panelElementName_ch;
				__env->ReleaseStringUTFChars(panelElementName_j, (const char *)panelElementName_ch);
				#else
				const ev_wchar* panelElementName_ch = (const ev_wchar*)__env->GetStringChars(panelElementName_j,JNI_FALSE);
				const EVString panelElementName = panelElementName_ch;
				__env->ReleaseStringChars(panelElementName_j, (const jchar *)panelElementName_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* textAreaName_ch = (const ev_char*)__env->GetStringUTFChars(textAreaName_j,JNI_FALSE);
				const EVString textAreaName = textAreaName_ch;
				__env->ReleaseStringUTFChars(textAreaName_j, (const char *)textAreaName_ch);
				#else
				const ev_wchar* textAreaName_ch = (const ev_wchar*)__env->GetStringChars(textAreaName_j,JNI_FALSE);
				const EVString textAreaName = textAreaName_ch;
				__env->ReleaseStringChars(textAreaName_j, (const jchar *)textAreaName_ch);
				#endif
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon*) pObjXXXX;
				EarthView::World::Graphic::CColourValue __values1 = pObjectX->getTextElementFontColor(panelElementName, textAreaName);
				EarthView::World::Graphic::CColourValue *returnvalues = new EarthView::World::Graphic::CColourValue(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_ScreenScutcheon_setTextElementFontColorTop_1EVString_1EVString_1CColourValue(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring panelElementName_j, jstring textAreaName_j, jlong color_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* panelElementName_ch = (const ev_char*)__env->GetStringUTFChars(panelElementName_j,JNI_FALSE);
				const EVString panelElementName = panelElementName_ch;
				__env->ReleaseStringUTFChars(panelElementName_j, (const char *)panelElementName_ch);
				#else
				const ev_wchar* panelElementName_ch = (const ev_wchar*)__env->GetStringChars(panelElementName_j,JNI_FALSE);
				const EVString panelElementName = panelElementName_ch;
				__env->ReleaseStringChars(panelElementName_j, (const jchar *)panelElementName_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* textAreaName_ch = (const ev_char*)__env->GetStringUTFChars(textAreaName_j,JNI_FALSE);
				const EVString textAreaName = textAreaName_ch;
				__env->ReleaseStringUTFChars(textAreaName_j, (const char *)textAreaName_ch);
				#else
				const ev_wchar* textAreaName_ch = (const ev_wchar*)__env->GetStringChars(textAreaName_j,JNI_FALSE);
				const EVString textAreaName = textAreaName_ch;
				__env->ReleaseStringChars(textAreaName_j, (const jchar *)textAreaName_ch);
				#endif
				const EarthView::World::Graphic::CColourValue &color = *(EarthView::World::Graphic::CColourValue*) color_j;
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon*) pObjXXXX;
				pObjectX->setTextElementFontColorTop(panelElementName, textAreaName, color);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_industrygraphic_ScreenScutcheon_getTextElementFontColorTop_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring panelElementName_j, jstring textAreaName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* panelElementName_ch = (const ev_char*)__env->GetStringUTFChars(panelElementName_j,JNI_FALSE);
				const EVString panelElementName = panelElementName_ch;
				__env->ReleaseStringUTFChars(panelElementName_j, (const char *)panelElementName_ch);
				#else
				const ev_wchar* panelElementName_ch = (const ev_wchar*)__env->GetStringChars(panelElementName_j,JNI_FALSE);
				const EVString panelElementName = panelElementName_ch;
				__env->ReleaseStringChars(panelElementName_j, (const jchar *)panelElementName_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* textAreaName_ch = (const ev_char*)__env->GetStringUTFChars(textAreaName_j,JNI_FALSE);
				const EVString textAreaName = textAreaName_ch;
				__env->ReleaseStringUTFChars(textAreaName_j, (const char *)textAreaName_ch);
				#else
				const ev_wchar* textAreaName_ch = (const ev_wchar*)__env->GetStringChars(textAreaName_j,JNI_FALSE);
				const EVString textAreaName = textAreaName_ch;
				__env->ReleaseStringChars(textAreaName_j, (const jchar *)textAreaName_ch);
				#endif
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon*) pObjXXXX;
				EarthView::World::Graphic::CColourValue __values1 = pObjectX->getTextElementFontColorTop(panelElementName, textAreaName);
				EarthView::World::Graphic::CColourValue *returnvalues = new EarthView::World::Graphic::CColourValue(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_ScreenScutcheon_setTextElementFontColorBottom_1EVString_1EVString_1CColourValue(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring panelElementName_j, jstring textAreaName_j, jlong color_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* panelElementName_ch = (const ev_char*)__env->GetStringUTFChars(panelElementName_j,JNI_FALSE);
				const EVString panelElementName = panelElementName_ch;
				__env->ReleaseStringUTFChars(panelElementName_j, (const char *)panelElementName_ch);
				#else
				const ev_wchar* panelElementName_ch = (const ev_wchar*)__env->GetStringChars(panelElementName_j,JNI_FALSE);
				const EVString panelElementName = panelElementName_ch;
				__env->ReleaseStringChars(panelElementName_j, (const jchar *)panelElementName_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* textAreaName_ch = (const ev_char*)__env->GetStringUTFChars(textAreaName_j,JNI_FALSE);
				const EVString textAreaName = textAreaName_ch;
				__env->ReleaseStringUTFChars(textAreaName_j, (const char *)textAreaName_ch);
				#else
				const ev_wchar* textAreaName_ch = (const ev_wchar*)__env->GetStringChars(textAreaName_j,JNI_FALSE);
				const EVString textAreaName = textAreaName_ch;
				__env->ReleaseStringChars(textAreaName_j, (const jchar *)textAreaName_ch);
				#endif
				const EarthView::World::Graphic::CColourValue &color = *(EarthView::World::Graphic::CColourValue*) color_j;
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon*) pObjXXXX;
				pObjectX->setTextElementFontColorBottom(panelElementName, textAreaName, color);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_industrygraphic_ScreenScutcheon_getTextElementFontColorBottom_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring panelElementName_j, jstring textAreaName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* panelElementName_ch = (const ev_char*)__env->GetStringUTFChars(panelElementName_j,JNI_FALSE);
				const EVString panelElementName = panelElementName_ch;
				__env->ReleaseStringUTFChars(panelElementName_j, (const char *)panelElementName_ch);
				#else
				const ev_wchar* panelElementName_ch = (const ev_wchar*)__env->GetStringChars(panelElementName_j,JNI_FALSE);
				const EVString panelElementName = panelElementName_ch;
				__env->ReleaseStringChars(panelElementName_j, (const jchar *)panelElementName_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* textAreaName_ch = (const ev_char*)__env->GetStringUTFChars(textAreaName_j,JNI_FALSE);
				const EVString textAreaName = textAreaName_ch;
				__env->ReleaseStringUTFChars(textAreaName_j, (const char *)textAreaName_ch);
				#else
				const ev_wchar* textAreaName_ch = (const ev_wchar*)__env->GetStringChars(textAreaName_j,JNI_FALSE);
				const EVString textAreaName = textAreaName_ch;
				__env->ReleaseStringChars(textAreaName_j, (const jchar *)textAreaName_ch);
				#endif
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon*) pObjXXXX;
				EarthView::World::Graphic::CColourValue __values1 = pObjectX->getTextElementFontColorBottom(panelElementName, textAreaName);
				EarthView::World::Graphic::CColourValue *returnvalues = new EarthView::World::Graphic::CColourValue(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_ScreenScutcheon_setTextElementFontSize_1EVString_1EVString_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring panelElementName_j, jstring textAreaName_j, jdouble size_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* panelElementName_ch = (const ev_char*)__env->GetStringUTFChars(panelElementName_j,JNI_FALSE);
				const EVString panelElementName = panelElementName_ch;
				__env->ReleaseStringUTFChars(panelElementName_j, (const char *)panelElementName_ch);
				#else
				const ev_wchar* panelElementName_ch = (const ev_wchar*)__env->GetStringChars(panelElementName_j,JNI_FALSE);
				const EVString panelElementName = panelElementName_ch;
				__env->ReleaseStringChars(panelElementName_j, (const jchar *)panelElementName_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* textAreaName_ch = (const ev_char*)__env->GetStringUTFChars(textAreaName_j,JNI_FALSE);
				const EVString textAreaName = textAreaName_ch;
				__env->ReleaseStringUTFChars(textAreaName_j, (const char *)textAreaName_ch);
				#else
				const ev_wchar* textAreaName_ch = (const ev_wchar*)__env->GetStringChars(textAreaName_j,JNI_FALSE);
				const EVString textAreaName = textAreaName_ch;
				__env->ReleaseStringChars(textAreaName_j, (const jchar *)textAreaName_ch);
				#endif
				const Real size = (const Real) size_j;
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon*) pObjXXXX;
				pObjectX->setTextElementFontSize(panelElementName, textAreaName, size);
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_industryengine_industrygraphic_ScreenScutcheon_getTextElementFontSize_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring panelElementName_j, jstring textAreaName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* panelElementName_ch = (const ev_char*)__env->GetStringUTFChars(panelElementName_j,JNI_FALSE);
				const EVString panelElementName = panelElementName_ch;
				__env->ReleaseStringUTFChars(panelElementName_j, (const char *)panelElementName_ch);
				#else
				const ev_wchar* panelElementName_ch = (const ev_wchar*)__env->GetStringChars(panelElementName_j,JNI_FALSE);
				const EVString panelElementName = panelElementName_ch;
				__env->ReleaseStringChars(panelElementName_j, (const jchar *)panelElementName_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* textAreaName_ch = (const ev_char*)__env->GetStringUTFChars(textAreaName_j,JNI_FALSE);
				const EVString textAreaName = textAreaName_ch;
				__env->ReleaseStringUTFChars(textAreaName_j, (const char *)textAreaName_ch);
				#else
				const ev_wchar* textAreaName_ch = (const ev_wchar*)__env->GetStringChars(textAreaName_j,JNI_FALSE);
				const EVString textAreaName = textAreaName_ch;
				__env->ReleaseStringChars(textAreaName_j, (const jchar *)textAreaName_ch);
				#endif
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon*) pObjXXXX;
				Real __values1 = pObjectX->getTextElementFontSize(panelElementName, textAreaName);
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_ScreenScutcheon_setTextElementFontHasShadow_1EVString_1EVString_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring panelElementName_j, jstring textAreaName_j, jboolean hasShadow_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* panelElementName_ch = (const ev_char*)__env->GetStringUTFChars(panelElementName_j,JNI_FALSE);
				const EVString panelElementName = panelElementName_ch;
				__env->ReleaseStringUTFChars(panelElementName_j, (const char *)panelElementName_ch);
				#else
				const ev_wchar* panelElementName_ch = (const ev_wchar*)__env->GetStringChars(panelElementName_j,JNI_FALSE);
				const EVString panelElementName = panelElementName_ch;
				__env->ReleaseStringChars(panelElementName_j, (const jchar *)panelElementName_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* textAreaName_ch = (const ev_char*)__env->GetStringUTFChars(textAreaName_j,JNI_FALSE);
				const EVString textAreaName = textAreaName_ch;
				__env->ReleaseStringUTFChars(textAreaName_j, (const char *)textAreaName_ch);
				#else
				const ev_wchar* textAreaName_ch = (const ev_wchar*)__env->GetStringChars(textAreaName_j,JNI_FALSE);
				const EVString textAreaName = textAreaName_ch;
				__env->ReleaseStringChars(textAreaName_j, (const jchar *)textAreaName_ch);
				#endif
				const ev_bool hasShadow = (const ev_bool) hasShadow_j;
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon*) pObjXXXX;
				pObjectX->setTextElementFontHasShadow(panelElementName, textAreaName, hasShadow);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_ScreenScutcheon_setTextElementCaption_1EVString_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring panelElementName_j, jstring textAreaName_j, jstring value_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* panelElementName_ch = (const ev_char*)__env->GetStringUTFChars(panelElementName_j,JNI_FALSE);
				const EVString panelElementName = panelElementName_ch;
				__env->ReleaseStringUTFChars(panelElementName_j, (const char *)panelElementName_ch);
				#else
				const ev_wchar* panelElementName_ch = (const ev_wchar*)__env->GetStringChars(panelElementName_j,JNI_FALSE);
				const EVString panelElementName = panelElementName_ch;
				__env->ReleaseStringChars(panelElementName_j, (const jchar *)panelElementName_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* textAreaName_ch = (const ev_char*)__env->GetStringUTFChars(textAreaName_j,JNI_FALSE);
				const EVString textAreaName = textAreaName_ch;
				__env->ReleaseStringUTFChars(textAreaName_j, (const char *)textAreaName_ch);
				#else
				const ev_wchar* textAreaName_ch = (const ev_wchar*)__env->GetStringChars(textAreaName_j,JNI_FALSE);
				const EVString textAreaName = textAreaName_ch;
				__env->ReleaseStringChars(textAreaName_j, (const jchar *)textAreaName_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* value_ch = (const ev_char*)__env->GetStringUTFChars(value_j,JNI_FALSE);
				const EVString value = value_ch;
				__env->ReleaseStringUTFChars(value_j, (const char *)value_ch);
				#else
				const ev_wchar* value_ch = (const ev_wchar*)__env->GetStringChars(value_j,JNI_FALSE);
				const EVString value = value_ch;
				__env->ReleaseStringChars(value_j, (const jchar *)value_ch);
				#endif
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon*) pObjXXXX;
				pObjectX->setTextElementCaption(panelElementName, textAreaName, value);
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_industryengine_industrygraphic_ScreenScutcheon_getTextElementCaption_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring panelElementName_j, jstring textAreaName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* panelElementName_ch = (const ev_char*)__env->GetStringUTFChars(panelElementName_j,JNI_FALSE);
				const EVString panelElementName = panelElementName_ch;
				__env->ReleaseStringUTFChars(panelElementName_j, (const char *)panelElementName_ch);
				#else
				const ev_wchar* panelElementName_ch = (const ev_wchar*)__env->GetStringChars(panelElementName_j,JNI_FALSE);
				const EVString panelElementName = panelElementName_ch;
				__env->ReleaseStringChars(panelElementName_j, (const jchar *)panelElementName_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* textAreaName_ch = (const ev_char*)__env->GetStringUTFChars(textAreaName_j,JNI_FALSE);
				const EVString textAreaName = textAreaName_ch;
				__env->ReleaseStringUTFChars(textAreaName_j, (const char *)textAreaName_ch);
				#else
				const ev_wchar* textAreaName_ch = (const ev_wchar*)__env->GetStringChars(textAreaName_j,JNI_FALSE);
				const EVString textAreaName = textAreaName_ch;
				__env->ReleaseStringChars(textAreaName_j, (const jchar *)textAreaName_ch);
				#endif
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon*) pObjXXXX;
				EVString __values1 = pObjectX->getTextElementCaption(panelElementName, textAreaName);
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_ScreenScutcheon_addChildName_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon*) pObjXXXX;
				pObjectX->addChildName(name);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_ScreenScutcheon_setPanelElementMaterial_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring panelElementName_j, jstring materialName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* panelElementName_ch = (const ev_char*)__env->GetStringUTFChars(panelElementName_j,JNI_FALSE);
				const EVString panelElementName = panelElementName_ch;
				__env->ReleaseStringUTFChars(panelElementName_j, (const char *)panelElementName_ch);
				#else
				const ev_wchar* panelElementName_ch = (const ev_wchar*)__env->GetStringChars(panelElementName_j,JNI_FALSE);
				const EVString panelElementName = panelElementName_ch;
				__env->ReleaseStringChars(panelElementName_j, (const jchar *)panelElementName_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* materialName_ch = (const ev_char*)__env->GetStringUTFChars(materialName_j,JNI_FALSE);
				const EVString materialName = materialName_ch;
				__env->ReleaseStringUTFChars(materialName_j, (const char *)materialName_ch);
				#else
				const ev_wchar* materialName_ch = (const ev_wchar*)__env->GetStringChars(materialName_j,JNI_FALSE);
				const EVString materialName = materialName_ch;
				__env->ReleaseStringChars(materialName_j, (const jchar *)materialName_ch);
				#endif
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon*) pObjXXXX;
				pObjectX->setPanelElementMaterial(panelElementName, materialName);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_ScreenScutcheon_setEventObject_1CScreenScutcheonEventObject(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong object_j)
			{
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEventObject *object = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEventObject*) object_j;
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon*) pObjXXXX;
				pObjectX->setEventObject(object);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_industrygraphic_ScreenScutcheon_getEventObject_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon*) pObjXXXX;
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEventObject* __values1 = pObjectX->getEventObject();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_ScreenScutcheon_setPanelElementTexture_1EVString_1CTexturePtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring panelElementName_j, jlong texturePtr_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* panelElementName_ch = (const ev_char*)__env->GetStringUTFChars(panelElementName_j,JNI_FALSE);
				const EVString panelElementName = panelElementName_ch;
				__env->ReleaseStringUTFChars(panelElementName_j, (const char *)panelElementName_ch);
				#else
				const ev_wchar* panelElementName_ch = (const ev_wchar*)__env->GetStringChars(panelElementName_j,JNI_FALSE);
				const EVString panelElementName = panelElementName_ch;
				__env->ReleaseStringChars(panelElementName_j, (const jchar *)panelElementName_ch);
				#endif
				const EarthView::World::Graphic::CTexturePtr &texturePtr = *(EarthView::World::Graphic::CTexturePtr*) texturePtr_j;
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon*) pObjXXXX;
				pObjectX->setPanelElementTexture(panelElementName, texturePtr);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_ScreenScutcheon_setPanelElementBorderTexture_1EVString_1CTexturePtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring panelElementName_j, jlong texturePtr_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* panelElementName_ch = (const ev_char*)__env->GetStringUTFChars(panelElementName_j,JNI_FALSE);
				const EVString panelElementName = panelElementName_ch;
				__env->ReleaseStringUTFChars(panelElementName_j, (const char *)panelElementName_ch);
				#else
				const ev_wchar* panelElementName_ch = (const ev_wchar*)__env->GetStringChars(panelElementName_j,JNI_FALSE);
				const EVString panelElementName = panelElementName_ch;
				__env->ReleaseStringChars(panelElementName_j, (const jchar *)panelElementName_ch);
				#endif
				const EarthView::World::Graphic::CTexturePtr &texturePtr = *(EarthView::World::Graphic::CTexturePtr*) texturePtr_j;
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon*) pObjXXXX;
				pObjectX->setPanelElementBorderTexture(panelElementName, texturePtr);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_ScreenScutcheon_calculateWidth_1CTextAreaOverlayElement_1Real_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pTextArea_j, jlong width_j, jlong height_j)
			{
				EarthView::World::Graphic::CTextAreaOverlayElement *pTextArea = (EarthView::World::Graphic::CTextAreaOverlayElement*) pTextArea_j;
				Real &width = *(Real*) width_j;
				Real &height = *(Real*) height_j;
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon*) pObjXXXX;
				pObjectX->calculateWidth(pTextArea, width, height);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_ScreenScutcheon_setPanelElementVisible_1EVString_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring panelElementName_j, jboolean isVisible_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* panelElementName_ch = (const ev_char*)__env->GetStringUTFChars(panelElementName_j,JNI_FALSE);
				const EVString panelElementName = panelElementName_ch;
				__env->ReleaseStringUTFChars(panelElementName_j, (const char *)panelElementName_ch);
				#else
				const ev_wchar* panelElementName_ch = (const ev_wchar*)__env->GetStringChars(panelElementName_j,JNI_FALSE);
				const EVString panelElementName = panelElementName_ch;
				__env->ReleaseStringChars(panelElementName_j, (const jchar *)panelElementName_ch);
				#endif
				ev_bool isVisible = (ev_bool) isVisible_j;
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon*) pObjXXXX;
				pObjectX->setPanelElementVisible(panelElementName, isVisible);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_industrygraphic_ScreenScutcheon_getPanelElementVisible_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring panelElementName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* panelElementName_ch = (const ev_char*)__env->GetStringUTFChars(panelElementName_j,JNI_FALSE);
				const EVString panelElementName = panelElementName_ch;
				__env->ReleaseStringUTFChars(panelElementName_j, (const char *)panelElementName_ch);
				#else
				const ev_wchar* panelElementName_ch = (const ev_wchar*)__env->GetStringChars(panelElementName_j,JNI_FALSE);
				const EVString panelElementName = panelElementName_ch;
				__env->ReleaseStringChars(panelElementName_j, (const jchar *)panelElementName_ch);
				#endif
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon*) pObjXXXX;
				ev_bool __values1 = pObjectX->getPanelElementVisible(panelElementName);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_ScreenScutcheon_setTextElementVisible_1EVString_1EVString_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring panelElementName_j, jstring textAreaName_j, jboolean isVisible_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* panelElementName_ch = (const ev_char*)__env->GetStringUTFChars(panelElementName_j,JNI_FALSE);
				const EVString panelElementName = panelElementName_ch;
				__env->ReleaseStringUTFChars(panelElementName_j, (const char *)panelElementName_ch);
				#else
				const ev_wchar* panelElementName_ch = (const ev_wchar*)__env->GetStringChars(panelElementName_j,JNI_FALSE);
				const EVString panelElementName = panelElementName_ch;
				__env->ReleaseStringChars(panelElementName_j, (const jchar *)panelElementName_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* textAreaName_ch = (const ev_char*)__env->GetStringUTFChars(textAreaName_j,JNI_FALSE);
				const EVString textAreaName = textAreaName_ch;
				__env->ReleaseStringUTFChars(textAreaName_j, (const char *)textAreaName_ch);
				#else
				const ev_wchar* textAreaName_ch = (const ev_wchar*)__env->GetStringChars(textAreaName_j,JNI_FALSE);
				const EVString textAreaName = textAreaName_ch;
				__env->ReleaseStringChars(textAreaName_j, (const jchar *)textAreaName_ch);
				#endif
				ev_bool isVisible = (ev_bool) isVisible_j;
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon*) pObjXXXX;
				pObjectX->setTextElementVisible(panelElementName, textAreaName, isVisible);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_industrygraphic_ScreenScutcheon_getTextElementVisible_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring panelElementName_j, jstring textAreaName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* panelElementName_ch = (const ev_char*)__env->GetStringUTFChars(panelElementName_j,JNI_FALSE);
				const EVString panelElementName = panelElementName_ch;
				__env->ReleaseStringUTFChars(panelElementName_j, (const char *)panelElementName_ch);
				#else
				const ev_wchar* panelElementName_ch = (const ev_wchar*)__env->GetStringChars(panelElementName_j,JNI_FALSE);
				const EVString panelElementName = panelElementName_ch;
				__env->ReleaseStringChars(panelElementName_j, (const jchar *)panelElementName_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* textAreaName_ch = (const ev_char*)__env->GetStringUTFChars(textAreaName_j,JNI_FALSE);
				const EVString textAreaName = textAreaName_ch;
				__env->ReleaseStringUTFChars(textAreaName_j, (const char *)textAreaName_ch);
				#else
				const ev_wchar* textAreaName_ch = (const ev_wchar*)__env->GetStringChars(textAreaName_j,JNI_FALSE);
				const EVString textAreaName = textAreaName_ch;
				__env->ReleaseStringChars(textAreaName_j, (const jchar *)textAreaName_ch);
				#endif
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon*) pObjXXXX;
				ev_bool __values1 = pObjectX->getTextElementVisible(panelElementName, textAreaName);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_industrygraphic_ScreenScutcheon_getGlobeControl_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon*) pObjXXXX;
				EarthView::World::Spatial3D::Controls::CGlobeControl* __values1 = pObjectX->getGlobeControl();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
		}
	}
}
