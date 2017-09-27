/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "globecontrol/textboxwidget.h"
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
			namespace Controls
			{
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_LatitudeLonitudeTextBoxVisibleEvent_setVisableMode_1VisibleMode(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint visableMode_j)
				{
					EarthView::World::Spatial3D::Controls::VisibleMode visableMode = (EarthView::World::Spatial3D::Controls::VisibleMode) visableMode_j;
					EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBoxVisibleEvent *pObjectX = (EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBoxVisibleEvent*) pObjXXXX;
					pObjectX->setVisableMode(visableMode);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_controls_LatitudeLonitudeTextBoxVisibleEvent_getVisableMode_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBoxVisibleEvent *pObjectX = (EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBoxVisibleEvent*) pObjXXXX;
					EarthView::World::Spatial3D::Controls::VisibleMode __values1 = pObjectX->getVisableMode();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_LatitudeLonitudeTextBoxVisibleEventPtr_get_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBoxVisibleEventPtr *pObjectX = (EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBoxVisibleEventPtr*) pObjXXXX;
					EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBoxVisibleEvent* __values1 = pObjectX->get();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_LatitudeLonitudeTextBoxVisibleEventPtr_OperatorAssign_1CLatitudeLonitudeTextBoxVisibleEventPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong r_j )
				{
					EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBoxVisibleEventPtr& pObjectX = *(EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBoxVisibleEventPtr*) pObjXXXX;
					const EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBoxVisibleEventPtr &r = *(EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBoxVisibleEventPtr*) r_j;
					pObjectX = r;
					EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBoxVisibleEventPtr& __values1 = pObjectX;
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_LatitudeLonitudeTextBoxVisibleEventPtr_OperatorAssign_1CLatitudeLonitudeTextBoxVisibleEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rep_j )
				{
					EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBoxVisibleEventPtr& pObjectX = *(EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBoxVisibleEventPtr*) pObjXXXX;
					EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBoxVisibleEvent *rep = (EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBoxVisibleEvent*) rep_j;
					pObjectX = rep;
					EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBoxVisibleEventPtr& __values1 = pObjectX;
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_LatitudeLonitudeTextBoxVisibleEventPtr_toCGUIEventPtr_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBoxVisibleEventPtr *pObjectX = (EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBoxVisibleEventPtr*) pObjXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr __values1 = pObjectX->toCGUIEventPtr();
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *returnvalues = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_LatitudeLonitudeTextBoxVisibleEventPtr_OperatorConvertionCGUIEventPtr_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX )
				{
					EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBoxVisibleEventPtr& pObjectX = *(EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBoxVisibleEventPtr*) pObjXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr __values1 = pObjectX ;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *returnvalues = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_TextBoxEventPtr_get_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Controls::CTextBoxEventPtr *pObjectX = (EarthView::World::Spatial3D::Controls::CTextBoxEventPtr*) pObjXXXX;
					EarthView::World::Spatial3D::Controls::CTextBoxEvent* __values1 = pObjectX->get();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_TextBoxEventPtr_OperatorAssign_1CTextBoxEventPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong r_j )
				{
					EarthView::World::Spatial3D::Controls::CTextBoxEventPtr& pObjectX = *(EarthView::World::Spatial3D::Controls::CTextBoxEventPtr*) pObjXXXX;
					const EarthView::World::Spatial3D::Controls::CTextBoxEventPtr &r = *(EarthView::World::Spatial3D::Controls::CTextBoxEventPtr*) r_j;
					pObjectX = r;
					EarthView::World::Spatial3D::Controls::CTextBoxEventPtr& __values1 = pObjectX;
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_TextBoxEventPtr_OperatorAssign_1CTextBoxEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rep_j )
				{
					EarthView::World::Spatial3D::Controls::CTextBoxEventPtr& pObjectX = *(EarthView::World::Spatial3D::Controls::CTextBoxEventPtr*) pObjXXXX;
					EarthView::World::Spatial3D::Controls::CTextBoxEvent *rep = (EarthView::World::Spatial3D::Controls::CTextBoxEvent*) rep_j;
					pObjectX = rep;
					EarthView::World::Spatial3D::Controls::CTextBoxEventPtr& __values1 = pObjectX;
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_TextBoxEventPtr_toCGUIEventPtr_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CTextBoxEventPtr *pObjectX = (EarthView::World::Spatial3D::Controls::CTextBoxEventPtr*) pObjXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr __values1 = pObjectX->toCGUIEventPtr();
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *returnvalues = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_TextBoxEventPtr_OperatorConvertionCGUIEventPtr_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX )
				{
					EarthView::World::Spatial3D::Controls::CTextBoxEventPtr& pObjectX = *(EarthView::World::Spatial3D::Controls::CTextBoxEventPtr*) pObjXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr __values1 = pObjectX ;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *returnvalues = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_EnableTextBoxEvent_setEnabled_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enabled_j)
				{
					ev_bool enabled = (ev_bool) enabled_j;
					EarthView::World::Spatial3D::Controls::CEnableTextBoxEvent *pObjectX = (EarthView::World::Spatial3D::Controls::CEnableTextBoxEvent*) pObjXXXX;
					pObjectX->setEnabled(enabled);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_EnableTextBoxEvent_getEnabled_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Controls::CEnableTextBoxEvent *pObjectX = (EarthView::World::Spatial3D::Controls::CEnableTextBoxEvent*) pObjXXXX;
					ev_bool __values1 = pObjectX->getEnabled();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_EnableTextBoxEventPtr_get_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Controls::CEnableTextBoxEventPtr *pObjectX = (EarthView::World::Spatial3D::Controls::CEnableTextBoxEventPtr*) pObjXXXX;
					EarthView::World::Spatial3D::Controls::CEnableTextBoxEvent* __values1 = pObjectX->get();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_EnableTextBoxEventPtr_OperatorAssign_1CEnableTextBoxEventPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong r_j )
				{
					EarthView::World::Spatial3D::Controls::CEnableTextBoxEventPtr& pObjectX = *(EarthView::World::Spatial3D::Controls::CEnableTextBoxEventPtr*) pObjXXXX;
					const EarthView::World::Spatial3D::Controls::CEnableTextBoxEventPtr &r = *(EarthView::World::Spatial3D::Controls::CEnableTextBoxEventPtr*) r_j;
					pObjectX = r;
					EarthView::World::Spatial3D::Controls::CEnableTextBoxEventPtr& __values1 = pObjectX;
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_EnableTextBoxEventPtr_OperatorAssign_1CEnableTextBoxEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rep_j )
				{
					EarthView::World::Spatial3D::Controls::CEnableTextBoxEventPtr& pObjectX = *(EarthView::World::Spatial3D::Controls::CEnableTextBoxEventPtr*) pObjXXXX;
					EarthView::World::Spatial3D::Controls::CEnableTextBoxEvent *rep = (EarthView::World::Spatial3D::Controls::CEnableTextBoxEvent*) rep_j;
					pObjectX = rep;
					EarthView::World::Spatial3D::Controls::CEnableTextBoxEventPtr& __values1 = pObjectX;
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_EnableTextBoxEventPtr_toCGUIEventPtr_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CEnableTextBoxEventPtr *pObjectX = (EarthView::World::Spatial3D::Controls::CEnableTextBoxEventPtr*) pObjXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr __values1 = pObjectX->toCGUIEventPtr();
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *returnvalues = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_EnableTextBoxEventPtr_OperatorConvertionCGUIEventPtr_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX )
				{
					EarthView::World::Spatial3D::Controls::CEnableTextBoxEventPtr& pObjectX = *(EarthView::World::Spatial3D::Controls::CEnableTextBoxEventPtr*) pObjXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr __values1 = pObjectX ;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *returnvalues = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_TextBoxSetPositionEvent_setPosition_1Real_1Real_1Real_1Real_1Real_1Real_1GuiHorizontalAlignment_1GuiVerticalAlignment(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble x_j, jdouble y_j, jdouble width_j, jdouble height_j, jdouble textOffsetX_j, jdouble textOffsetY_j, jint gha_j, jint gva_j)
				{
					Real x = (Real) x_j;
					Real y = (Real) y_j;
					Real width = (Real) width_j;
					Real height = (Real) height_j;
					Real textOffsetX = (Real) textOffsetX_j;
					Real textOffsetY = (Real) textOffsetY_j;
					EarthView::World::Graphic::GuiHorizontalAlignment gha = (EarthView::World::Graphic::GuiHorizontalAlignment) gha_j;
					EarthView::World::Graphic::GuiVerticalAlignment gva = (EarthView::World::Graphic::GuiVerticalAlignment) gva_j;
					EarthView::World::Spatial3D::Controls::CTextBoxSetPositionEvent *pObjectX = (EarthView::World::Spatial3D::Controls::CTextBoxSetPositionEvent*) pObjXXXX;
					pObjectX->setPosition(x, y, width, height, textOffsetX, textOffsetY, gha, gva);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_TextBoxSetPositionEvent_getPosition_1Real_1Real_1Real_1Real_1Real_1Real_1GuiHorizontalAlignment_1GuiVerticalAlignment(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong x_j, jlong y_j, jlong width_j, jlong height_j, jlong textOffsetX_j, jlong textOffsetY_j, jlong gha_j, jlong gva_j)
				{
					Real &x = *(Real*) x_j;
					Real &y = *(Real*) y_j;
					Real &width = *(Real*) width_j;
					Real &height = *(Real*) height_j;
					Real &textOffsetX = *(Real*) textOffsetX_j;
					Real &textOffsetY = *(Real*) textOffsetY_j;
					EarthView::World::Graphic::GuiHorizontalAlignment &gha = *(EarthView::World::Graphic::GuiHorizontalAlignment*) gha_j;
					EarthView::World::Graphic::GuiVerticalAlignment &gva = *(EarthView::World::Graphic::GuiVerticalAlignment*) gva_j;
					EarthView::World::Spatial3D::Controls::CTextBoxSetPositionEvent *pObjectX = (EarthView::World::Spatial3D::Controls::CTextBoxSetPositionEvent*) pObjXXXX;
					pObjectX->getPosition(x, y, width, height, textOffsetX, textOffsetY, gha, gva);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_TextBoxSetPositionEventPtr_get_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Controls::CTextBoxSetPositionEventPtr *pObjectX = (EarthView::World::Spatial3D::Controls::CTextBoxSetPositionEventPtr*) pObjXXXX;
					EarthView::World::Spatial3D::Controls::CTextBoxSetPositionEvent* __values1 = pObjectX->get();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_TextBoxSetPositionEventPtr_OperatorAssign_1CTextBoxSetPositionEventPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong r_j )
				{
					EarthView::World::Spatial3D::Controls::CTextBoxSetPositionEventPtr& pObjectX = *(EarthView::World::Spatial3D::Controls::CTextBoxSetPositionEventPtr*) pObjXXXX;
					const EarthView::World::Spatial3D::Controls::CTextBoxSetPositionEventPtr &r = *(EarthView::World::Spatial3D::Controls::CTextBoxSetPositionEventPtr*) r_j;
					pObjectX = r;
					EarthView::World::Spatial3D::Controls::CTextBoxSetPositionEventPtr& __values1 = pObjectX;
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_TextBoxSetPositionEventPtr_OperatorAssign_1CTextBoxSetPositionEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rep_j )
				{
					EarthView::World::Spatial3D::Controls::CTextBoxSetPositionEventPtr& pObjectX = *(EarthView::World::Spatial3D::Controls::CTextBoxSetPositionEventPtr*) pObjXXXX;
					EarthView::World::Spatial3D::Controls::CTextBoxSetPositionEvent *rep = (EarthView::World::Spatial3D::Controls::CTextBoxSetPositionEvent*) rep_j;
					pObjectX = rep;
					EarthView::World::Spatial3D::Controls::CTextBoxSetPositionEventPtr& __values1 = pObjectX;
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_TextBoxSetPositionEventPtr_toCGUIEventPtr_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CTextBoxSetPositionEventPtr *pObjectX = (EarthView::World::Spatial3D::Controls::CTextBoxSetPositionEventPtr*) pObjXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr __values1 = pObjectX->toCGUIEventPtr();
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *returnvalues = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_TextBoxSetPositionEventPtr_OperatorConvertionCGUIEventPtr_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX )
				{
					EarthView::World::Spatial3D::Controls::CTextBoxSetPositionEventPtr& pObjectX = *(EarthView::World::Spatial3D::Controls::CTextBoxSetPositionEventPtr*) pObjXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr __values1 = pObjectX ;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *returnvalues = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_TextBoxSetTextEvent_setText_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring text_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* text_ch = (const ev_char*)__env->GetStringUTFChars(text_j,JNI_FALSE);
					const EVString text = text_ch;
					__env->ReleaseStringUTFChars(text_j, (const char *)text_ch);
					#else
					const ev_wchar* text_ch = (const ev_wchar*)__env->GetStringChars(text_j,JNI_FALSE);
					const EVString text = text_ch;
					__env->ReleaseStringChars(text_j, (const jchar *)text_ch);
					#endif
					EarthView::World::Spatial3D::Controls::CTextBoxSetTextEvent *pObjectX = (EarthView::World::Spatial3D::Controls::CTextBoxSetTextEvent*) pObjXXXX;
					pObjectX->setText(text);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_controls_TextBoxSetTextEvent_getText_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Controls::CTextBoxSetTextEvent *pObjectX = (EarthView::World::Spatial3D::Controls::CTextBoxSetTextEvent*) pObjXXXX;
					EVString __values1 = pObjectX->getText();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_TextBoxSetTextEvent_getTextSeted_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Controls::CTextBoxSetTextEvent *pObjectX = (EarthView::World::Spatial3D::Controls::CTextBoxSetTextEvent*) pObjXXXX;
					ev_bool __values1 = pObjectX->getTextSeted();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_TextBoxSetTextEvent_setFontName_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring fontName_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* fontName_ch = (const ev_char*)__env->GetStringUTFChars(fontName_j,JNI_FALSE);
					const EVString fontName = fontName_ch;
					__env->ReleaseStringUTFChars(fontName_j, (const char *)fontName_ch);
					#else
					const ev_wchar* fontName_ch = (const ev_wchar*)__env->GetStringChars(fontName_j,JNI_FALSE);
					const EVString fontName = fontName_ch;
					__env->ReleaseStringChars(fontName_j, (const jchar *)fontName_ch);
					#endif
					EarthView::World::Spatial3D::Controls::CTextBoxSetTextEvent *pObjectX = (EarthView::World::Spatial3D::Controls::CTextBoxSetTextEvent*) pObjXXXX;
					pObjectX->setFontName(fontName);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_controls_TextBoxSetTextEvent_getFontName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Controls::CTextBoxSetTextEvent *pObjectX = (EarthView::World::Spatial3D::Controls::CTextBoxSetTextEvent*) pObjXXXX;
					EVString __values1 = pObjectX->getFontName();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_TextBoxSetTextEvent_getFontSeted_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Controls::CTextBoxSetTextEvent *pObjectX = (EarthView::World::Spatial3D::Controls::CTextBoxSetTextEvent*) pObjXXXX;
					ev_bool __values1 = pObjectX->getFontSeted();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_TextBoxSetTextEvent_setFontColor_1CColourValue(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong color_j)
				{
					const EarthView::World::Graphic::CColourValue &color = *(EarthView::World::Graphic::CColourValue*) color_j;
					EarthView::World::Spatial3D::Controls::CTextBoxSetTextEvent *pObjectX = (EarthView::World::Spatial3D::Controls::CTextBoxSetTextEvent*) pObjXXXX;
					pObjectX->setFontColor(color);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_TextBoxSetTextEvent_getFontColor_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Controls::CTextBoxSetTextEvent *pObjectX = (EarthView::World::Spatial3D::Controls::CTextBoxSetTextEvent*) pObjXXXX;
					EarthView::World::Graphic::CColourValue __values1 = pObjectX->getFontColor();
					EarthView::World::Graphic::CColourValue *returnvalues = new EarthView::World::Graphic::CColourValue(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_TextBoxSetTextEvent_getFontColorHasSeted_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Controls::CTextBoxSetTextEvent *pObjectX = (EarthView::World::Spatial3D::Controls::CTextBoxSetTextEvent*) pObjXXXX;
					ev_bool __values1 = pObjectX->getFontColorHasSeted();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_TextBoxSetTextEventPtr_get_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Controls::CTextBoxSetTextEventPtr *pObjectX = (EarthView::World::Spatial3D::Controls::CTextBoxSetTextEventPtr*) pObjXXXX;
					EarthView::World::Spatial3D::Controls::CTextBoxSetTextEvent* __values1 = pObjectX->get();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_TextBoxSetTextEventPtr_OperatorAssign_1CTextBoxSetTextEventPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong r_j )
				{
					EarthView::World::Spatial3D::Controls::CTextBoxSetTextEventPtr& pObjectX = *(EarthView::World::Spatial3D::Controls::CTextBoxSetTextEventPtr*) pObjXXXX;
					const EarthView::World::Spatial3D::Controls::CTextBoxSetTextEventPtr &r = *(EarthView::World::Spatial3D::Controls::CTextBoxSetTextEventPtr*) r_j;
					pObjectX = r;
					EarthView::World::Spatial3D::Controls::CTextBoxSetTextEventPtr& __values1 = pObjectX;
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_TextBoxSetTextEventPtr_OperatorAssign_1CTextBoxSetTextEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rep_j )
				{
					EarthView::World::Spatial3D::Controls::CTextBoxSetTextEventPtr& pObjectX = *(EarthView::World::Spatial3D::Controls::CTextBoxSetTextEventPtr*) pObjXXXX;
					EarthView::World::Spatial3D::Controls::CTextBoxSetTextEvent *rep = (EarthView::World::Spatial3D::Controls::CTextBoxSetTextEvent*) rep_j;
					pObjectX = rep;
					EarthView::World::Spatial3D::Controls::CTextBoxSetTextEventPtr& __values1 = pObjectX;
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_TextBoxSetTextEventPtr_toCGUIEventPtr_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CTextBoxSetTextEventPtr *pObjectX = (EarthView::World::Spatial3D::Controls::CTextBoxSetTextEventPtr*) pObjXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr __values1 = pObjectX->toCGUIEventPtr();
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *returnvalues = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_TextBoxSetTextEventPtr_OperatorConvertionCGUIEventPtr_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX )
				{
					EarthView::World::Spatial3D::Controls::CTextBoxSetTextEventPtr& pObjectX = *(EarthView::World::Spatial3D::Controls::CTextBoxSetTextEventPtr*) pObjXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr __values1 = pObjectX ;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *returnvalues = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				class JCTextBoxWidgetProxy : public EarthView::World::Spatial3D::Controls::CTextBoxWidget
				{
				 private:
					EarthView::World::Core::ev_string m_additionMouseUp_void_callback;
					EarthView::World::Core::ev_string m_handleMouseUpEvent_CGUIEvent_callback;
					EarthView::World::Core::ev_string m_handleMouseMoveEvent_CGUIEvent_callback;
					EarthView::World::Core::ev_string m_handleMouseDownEvent_CGUIEvent_callback;
					EarthView::World::Core::ev_string m_handeMouseDbClickEvent_CGUIEvent_callback;
					EarthView::World::Core::ev_string m_handleKeyDownEvent_CGUIEvent_callback;
					EarthView::World::Core::ev_string m_handleKeyUpEvent_CGUIEvent_callback;
					EarthView::World::Core::ev_string m_handleUserEvent_CGUIEvent_callback;
					EarthView::World::Core::ev_string m_handleFrameEvent_CGUIEvent_CViewport_callback;
				public:
					JCTextBoxWidgetProxy(EarthView::World::Core::CNameValuePairList *pList) : CTextBoxWidget(pList)
					{
					}
					ev_void unRegisterJavaReference()
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						if(__gr != NULL)
						{
							delete __gr;
							this->registerJavaReference(NULL);
						}
					}
				public:
					void register_additionMouseUp_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_additionMouseUp_void_callback = __method;
					}
					void register_handleMouseUpEvent_CGUIEvent_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_handleMouseUpEvent_CGUIEvent_callback = __method;
					}
					void register_handleMouseMoveEvent_CGUIEvent_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_handleMouseMoveEvent_CGUIEvent_callback = __method;
					}
					void register_handleMouseDownEvent_CGUIEvent_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_handleMouseDownEvent_CGUIEvent_callback = __method;
					}
					void register_handeMouseDbClickEvent_CGUIEvent_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_handeMouseDbClickEvent_CGUIEvent_callback = __method;
					}
					void register_handleKeyDownEvent_CGUIEvent_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_handleKeyDownEvent_CGUIEvent_callback = __method;
					}
					void register_handleKeyUpEvent_CGUIEvent_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_handleKeyUpEvent_CGUIEvent_callback = __method;
					}
					void register_handleUserEvent_CGUIEvent_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_handleUserEvent_CGUIEvent_callback = __method;
					}
					void register_handleFrameEvent_CGUIEvent_CViewport_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_handleFrameEvent_CGUIEvent_CViewport_callback = __method;
					}
					virtual ev_bool handleFrameEvent(EarthView::World::Spatial::SystemUI::CGUIEvent* event, EarthView::World::Graphic::CViewport* viewport)
					{
						if (this->_gRef != NULL && this->m_handleFrameEvent_CGUIEvent_CViewport_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong event_j = (jlong) event;
							jlong viewport_j = (jlong) viewport;
							jmethodID __method = __gr->getMethod("handleFrameEvent_CGUIEvent_CViewport_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , event_j, viewport_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_bool __values1 = (ev_bool) __values1_j;
							return __values1;
						}
						else
						{
							return this->CTextBoxWidget::handleFrameEvent(event, viewport);
						}
					}
					virtual ev_bool handleUserEvent(EarthView::World::Spatial::SystemUI::CGUIEvent* event)
					{
						if (this->_gRef != NULL && this->m_handleUserEvent_CGUIEvent_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong event_j = (jlong) event;
							jmethodID __method = __gr->getMethod("handleUserEvent_CGUIEvent_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , event_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_bool __values1 = (ev_bool) __values1_j;
							return __values1;
						}
						else
						{
							return this->CTextBoxWidget::handleUserEvent(event);
						}
					}
					virtual void additionMouseUp()
					{
						if (this->_gRef != NULL && this->m_additionMouseUp_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("additionMouseUp_void_callback");
							__env->CallVoidMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
						}
						else
						{
							return this->CTextBoxWidget::additionMouseUp();
						}
					}
					virtual ev_bool handleMouseUpEvent(EarthView::World::Spatial::SystemUI::CGUIEvent* event)
					{
						if (this->_gRef != NULL && this->m_handleMouseUpEvent_CGUIEvent_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong event_j = (jlong) event;
							jmethodID __method = __gr->getMethod("handleMouseUpEvent_CGUIEvent_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , event_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_bool __values1 = (ev_bool) __values1_j;
							return __values1;
						}
						else
						{
							return this->CTextBoxWidget::handleMouseUpEvent(event);
						}
					}
					virtual ev_bool handleMouseMoveEvent(EarthView::World::Spatial::SystemUI::CGUIEvent* event)
					{
						if (this->_gRef != NULL && this->m_handleMouseMoveEvent_CGUIEvent_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong event_j = (jlong) event;
							jmethodID __method = __gr->getMethod("handleMouseMoveEvent_CGUIEvent_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , event_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_bool __values1 = (ev_bool) __values1_j;
							return __values1;
						}
						else
						{
							return this->CTextBoxWidget::handleMouseMoveEvent(event);
						}
					}
					virtual ev_bool handleMouseDownEvent(EarthView::World::Spatial::SystemUI::CGUIEvent* event)
					{
						if (this->_gRef != NULL && this->m_handleMouseDownEvent_CGUIEvent_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong event_j = (jlong) event;
							jmethodID __method = __gr->getMethod("handleMouseDownEvent_CGUIEvent_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , event_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_bool __values1 = (ev_bool) __values1_j;
							return __values1;
						}
						else
						{
							return this->CTextBoxWidget::handleMouseDownEvent(event);
						}
					}
					virtual ev_bool handeMouseDbClickEvent(EarthView::World::Spatial::SystemUI::CGUIEvent* event)
					{
						if (this->_gRef != NULL && this->m_handeMouseDbClickEvent_CGUIEvent_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong event_j = (jlong) event;
							jmethodID __method = __gr->getMethod("handeMouseDbClickEvent_CGUIEvent_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , event_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_bool __values1 = (ev_bool) __values1_j;
							return __values1;
						}
						else
						{
							return this->CTextBoxWidget::handeMouseDbClickEvent(event);
						}
					}
					virtual ev_bool handleKeyDownEvent(EarthView::World::Spatial::SystemUI::CGUIEvent* event)
					{
						if (this->_gRef != NULL && this->m_handleKeyDownEvent_CGUIEvent_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong event_j = (jlong) event;
							jmethodID __method = __gr->getMethod("handleKeyDownEvent_CGUIEvent_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , event_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_bool __values1 = (ev_bool) __values1_j;
							return __values1;
						}
						else
						{
							return this->CTextBoxWidget::handleKeyDownEvent(event);
						}
					}
					virtual ev_bool handleKeyUpEvent(EarthView::World::Spatial::SystemUI::CGUIEvent* event)
					{
						if (this->_gRef != NULL && this->m_handleKeyUpEvent_CGUIEvent_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong event_j = (jlong) event;
							jmethodID __method = __gr->getMethod("handleKeyUpEvent_CGUIEvent_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , event_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_bool __values1 = (ev_bool) __values1_j;
							return __values1;
						}
						else
						{
							return this->CTextBoxWidget::handleKeyUpEvent(event);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCTextBoxWidgetProxy);
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_TextBoxWidget_setText_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring text_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* text_ch = (const ev_char*)__env->GetStringUTFChars(text_j,JNI_FALSE);
					const EVString text = text_ch;
					__env->ReleaseStringUTFChars(text_j, (const char *)text_ch);
					#else
					const ev_wchar* text_ch = (const ev_wchar*)__env->GetStringChars(text_j,JNI_FALSE);
					const EVString text = text_ch;
					__env->ReleaseStringChars(text_j, (const jchar *)text_ch);
					#endif
					EarthView::World::Spatial3D::Controls::CTextBoxWidget *pObjectX = (EarthView::World::Spatial3D::Controls::CTextBoxWidget*) pObjXXXX;
					pObjectX->setText(text);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_TextBoxWidget_setPanelMatrial_1EVString_1ev_1real32_1ev_1real32_1ev_1real32_1ev_1real32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring matrialName_j, jfloat u1_j, jfloat v1_j, jfloat u2_j, jfloat v2_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* matrialName_ch = (const ev_char*)__env->GetStringUTFChars(matrialName_j,JNI_FALSE);
					const EVString matrialName = matrialName_ch;
					__env->ReleaseStringUTFChars(matrialName_j, (const char *)matrialName_ch);
					#else
					const ev_wchar* matrialName_ch = (const ev_wchar*)__env->GetStringChars(matrialName_j,JNI_FALSE);
					const EVString matrialName = matrialName_ch;
					__env->ReleaseStringChars(matrialName_j, (const jchar *)matrialName_ch);
					#endif
					ev_real32 u1 = (ev_real32) u1_j;
					ev_real32 v1 = (ev_real32) v1_j;
					ev_real32 u2 = (ev_real32) u2_j;
					ev_real32 v2 = (ev_real32) v2_j;
					EarthView::World::Spatial3D::Controls::CTextBoxWidget *pObjectX = (EarthView::World::Spatial3D::Controls::CTextBoxWidget*) pObjXXXX;
					pObjectX->setPanelMatrial(matrialName, u1, v1, u2, v2);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_TextBoxWidget_setPanelMatrial_1EVString_1ev_1real32_1ev_1real32_1ev_1real32_1ev_1real32_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring matrialName_j, jfloat u1_j, jfloat v1_j, jfloat u2_j, jfloat v2_j, jboolean transparent_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* matrialName_ch = (const ev_char*)__env->GetStringUTFChars(matrialName_j,JNI_FALSE);
					const EVString matrialName = matrialName_ch;
					__env->ReleaseStringUTFChars(matrialName_j, (const char *)matrialName_ch);
					#else
					const ev_wchar* matrialName_ch = (const ev_wchar*)__env->GetStringChars(matrialName_j,JNI_FALSE);
					const EVString matrialName = matrialName_ch;
					__env->ReleaseStringChars(matrialName_j, (const jchar *)matrialName_ch);
					#endif
					ev_real32 u1 = (ev_real32) u1_j;
					ev_real32 v1 = (ev_real32) v1_j;
					ev_real32 u2 = (ev_real32) u2_j;
					ev_real32 v2 = (ev_real32) v2_j;
					ev_bool transparent = (ev_bool) transparent_j;
					EarthView::World::Spatial3D::Controls::CTextBoxWidget *pObjectX = (EarthView::World::Spatial3D::Controls::CTextBoxWidget*) pObjXXXX;
					pObjectX->setPanelMatrial(matrialName, u1, v1, u2, v2, transparent);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_TextBoxWidget_handleFrameEvent_1CGUIEvent_1CViewport(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong event_j, jlong viewport_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *event = (EarthView::World::Spatial::SystemUI::CGUIEvent*) event_j;
					EarthView::World::Graphic::CViewport *viewport = (EarthView::World::Graphic::CViewport*) viewport_j;
					EarthView::World::Spatial3D::Controls::CTextBoxWidget *pObjectX = (EarthView::World::Spatial3D::Controls::CTextBoxWidget*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCTextBoxWidgetProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CTextBoxWidget::handleFrameEvent(event, viewport);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->handleFrameEvent(event, viewport);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_TextBoxWidget_register_1handleFrameEvent_1CGUIEvent_1CViewport(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTextBoxWidgetProxy *pObjectX = (JCTextBoxWidgetProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_handleFrameEvent_CGUIEvent_CViewport_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"handleFrameEvent_CGUIEvent_CViewport_callback", "(JJ)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_TextBoxWidget_handleFrameEvent_1CGUIEvent_1CViewport_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong event_j, jlong viewport_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *event = (EarthView::World::Spatial::SystemUI::CGUIEvent*) event_j;
					EarthView::World::Graphic::CViewport *viewport = (EarthView::World::Graphic::CViewport*) viewport_j;
					EarthView::World::Spatial3D::Controls::CTextBoxWidget *pObjectX = (EarthView::World::Spatial3D::Controls::CTextBoxWidget*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CTextBoxWidget::handleFrameEvent(event, viewport);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_TextBoxWidget_handleUserEvent_1CGUIEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong event_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *event = (EarthView::World::Spatial::SystemUI::CGUIEvent*) event_j;
					EarthView::World::Spatial3D::Controls::CTextBoxWidget *pObjectX = (EarthView::World::Spatial3D::Controls::CTextBoxWidget*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCTextBoxWidgetProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CTextBoxWidget::handleUserEvent(event);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->handleUserEvent(event);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_TextBoxWidget_register_1handleUserEvent_1CGUIEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTextBoxWidgetProxy *pObjectX = (JCTextBoxWidgetProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_handleUserEvent_CGUIEvent_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"handleUserEvent_CGUIEvent_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_TextBoxWidget_handleUserEvent_1CGUIEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong event_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *event = (EarthView::World::Spatial::SystemUI::CGUIEvent*) event_j;
					EarthView::World::Spatial3D::Controls::CTextBoxWidget *pObjectX = (EarthView::World::Spatial3D::Controls::CTextBoxWidget*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CTextBoxWidget::handleUserEvent(event);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_TextBoxWidget_OperatorAssign_1CTextBoxWidget(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rhs_j )
				{
					EarthView::World::Spatial3D::Controls::CTextBoxWidget& pObjectX = *(EarthView::World::Spatial3D::Controls::CTextBoxWidget*) pObjXXXX;
					const EarthView::World::Spatial3D::Controls::CTextBoxWidget &rhs = *(EarthView::World::Spatial3D::Controls::CTextBoxWidget*) rhs_j;
					pObjectX = rhs;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_controls_TextBoxWidget_get_1mtext_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CTextBoxWidget *pObjectX = (EarthView::World::Spatial3D::Controls::CTextBoxWidget*)pObjXXXX;
					EarthView::World::Core::ev_wstring __values1_ch = pObjectX->mtext;
					jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_TextBoxWidget_set_1mtext_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
				{
					EarthView::World::Spatial3D::Controls::CTextBoxWidget *pObjectX = (EarthView::World::Spatial3D::Controls::CTextBoxWidget*)pObjXXXX;
					const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
					pObjectX->mtext = __values1_ch;
					__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_TextBoxWidget_get_1mTextArea_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CTextBoxWidget *pObjectX = (EarthView::World::Spatial3D::Controls::CTextBoxWidget*)pObjXXXX;
					jlong __values1_j = (jlong)(pObjectX->mTextArea);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_TextBoxWidget_set_1mTextArea_1CTextAreaOverlayElement(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial3D::Controls::CTextBoxWidget *pObjectX = (EarthView::World::Spatial3D::Controls::CTextBoxWidget*)pObjXXXX;
					pObjectX->mTextArea = (EarthView::World::Graphic::CTextAreaOverlayElement*) __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_TextBoxWidget_get_1mPanel_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CTextBoxWidget *pObjectX = (EarthView::World::Spatial3D::Controls::CTextBoxWidget*)pObjXXXX;
					jlong __values1_j = (jlong)(pObjectX->mPanel);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_TextBoxWidget_set_1mPanel_1CPanelOverlayElement(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial3D::Controls::CTextBoxWidget *pObjectX = (EarthView::World::Spatial3D::Controls::CTextBoxWidget*)pObjXXXX;
					pObjectX->mPanel = (EarthView::World::Graphic::CPanelOverlayElement*) __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_controls_TextBoxWidget_get_1mcharHeight_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CTextBoxWidget *pObjectX = (EarthView::World::Spatial3D::Controls::CTextBoxWidget*)pObjXXXX;
					jint __values1_j = (jint)(pObjectX->mcharHeight);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_TextBoxWidget_set_1mcharHeight_1int(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
				{
					EarthView::World::Spatial3D::Controls::CTextBoxWidget *pObjectX = (EarthView::World::Spatial3D::Controls::CTextBoxWidget*)pObjXXXX;
					pObjectX->mcharHeight = (int)__values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_TextBoxWidget_register_1additionMouseUp_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTextBoxWidgetProxy *pObjectX = (JCTextBoxWidgetProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_additionMouseUp_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"additionMouseUp_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_TextBoxWidget_register_1handleMouseUpEvent_1CGUIEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTextBoxWidgetProxy *pObjectX = (JCTextBoxWidgetProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_handleMouseUpEvent_CGUIEvent_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"handleMouseUpEvent_CGUIEvent_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_TextBoxWidget_register_1handleMouseMoveEvent_1CGUIEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTextBoxWidgetProxy *pObjectX = (JCTextBoxWidgetProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_handleMouseMoveEvent_CGUIEvent_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"handleMouseMoveEvent_CGUIEvent_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_TextBoxWidget_register_1handleMouseDownEvent_1CGUIEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTextBoxWidgetProxy *pObjectX = (JCTextBoxWidgetProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_handleMouseDownEvent_CGUIEvent_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"handleMouseDownEvent_CGUIEvent_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_TextBoxWidget_register_1handeMouseDbClickEvent_1CGUIEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTextBoxWidgetProxy *pObjectX = (JCTextBoxWidgetProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_handeMouseDbClickEvent_CGUIEvent_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"handeMouseDbClickEvent_CGUIEvent_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_TextBoxWidget_register_1handleKeyDownEvent_1CGUIEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTextBoxWidgetProxy *pObjectX = (JCTextBoxWidgetProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_handleKeyDownEvent_CGUIEvent_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"handleKeyDownEvent_CGUIEvent_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_TextBoxWidget_register_1handleKeyUpEvent_1CGUIEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTextBoxWidgetProxy *pObjectX = (JCTextBoxWidgetProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_handleKeyUpEvent_CGUIEvent_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"handleKeyUpEvent_CGUIEvent_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				class JCLatitudeLonitudeTextBoxProxy : public EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox
				{
				 private:
					EarthView::World::Core::ev_string m_additionMouseUp_void_callback;
					EarthView::World::Core::ev_string m_handleMouseUpEvent_CGUIEvent_callback;
					EarthView::World::Core::ev_string m_handleMouseMoveEvent_CGUIEvent_callback;
					EarthView::World::Core::ev_string m_handleMouseDownEvent_CGUIEvent_callback;
					EarthView::World::Core::ev_string m_handeMouseDbClickEvent_CGUIEvent_callback;
					EarthView::World::Core::ev_string m_handleKeyDownEvent_CGUIEvent_callback;
					EarthView::World::Core::ev_string m_handleKeyUpEvent_CGUIEvent_callback;
					EarthView::World::Core::ev_string m_handleUserEvent_CGUIEvent_callback;
					EarthView::World::Core::ev_string m_handleFrameEvent_CGUIEvent_CViewport_callback;
				public:
					JCLatitudeLonitudeTextBoxProxy(EarthView::World::Core::CNameValuePairList *pList) : CLatitudeLonitudeTextBox(pList)
					{
					}
					ev_void unRegisterJavaReference()
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						if(__gr != NULL)
						{
							delete __gr;
							this->registerJavaReference(NULL);
						}
					}
				public:
					void register_additionMouseUp_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_additionMouseUp_void_callback = __method;
					}
					void register_handleMouseUpEvent_CGUIEvent_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_handleMouseUpEvent_CGUIEvent_callback = __method;
					}
					void register_handleMouseMoveEvent_CGUIEvent_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_handleMouseMoveEvent_CGUIEvent_callback = __method;
					}
					void register_handleMouseDownEvent_CGUIEvent_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_handleMouseDownEvent_CGUIEvent_callback = __method;
					}
					void register_handeMouseDbClickEvent_CGUIEvent_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_handeMouseDbClickEvent_CGUIEvent_callback = __method;
					}
					void register_handleKeyDownEvent_CGUIEvent_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_handleKeyDownEvent_CGUIEvent_callback = __method;
					}
					void register_handleKeyUpEvent_CGUIEvent_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_handleKeyUpEvent_CGUIEvent_callback = __method;
					}
					void register_handleUserEvent_CGUIEvent_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_handleUserEvent_CGUIEvent_callback = __method;
					}
					void register_handleFrameEvent_CGUIEvent_CViewport_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_handleFrameEvent_CGUIEvent_CViewport_callback = __method;
					}
					virtual ev_bool handleUserEvent(EarthView::World::Spatial::SystemUI::CGUIEvent* event)
					{
						if (this->_gRef != NULL && this->m_handleUserEvent_CGUIEvent_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong event_j = (jlong) event;
							jmethodID __method = __gr->getMethod("handleUserEvent_CGUIEvent_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , event_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_bool __values1 = (ev_bool) __values1_j;
							return __values1;
						}
						else
						{
							return this->CLatitudeLonitudeTextBox::handleUserEvent(event);
						}
					}
					virtual ev_bool handleFrameEvent(EarthView::World::Spatial::SystemUI::CGUIEvent* event, EarthView::World::Graphic::CViewport* viewport)
					{
						if (this->_gRef != NULL && this->m_handleFrameEvent_CGUIEvent_CViewport_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong event_j = (jlong) event;
							jlong viewport_j = (jlong) viewport;
							jmethodID __method = __gr->getMethod("handleFrameEvent_CGUIEvent_CViewport_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , event_j, viewport_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_bool __values1 = (ev_bool) __values1_j;
							return __values1;
						}
						else
						{
							return this->CLatitudeLonitudeTextBox::handleFrameEvent(event, viewport);
						}
					}
					virtual void additionMouseUp()
					{
						if (this->_gRef != NULL && this->m_additionMouseUp_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("additionMouseUp_void_callback");
							__env->CallVoidMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
						}
						else
						{
							return this->CLatitudeLonitudeTextBox::additionMouseUp();
						}
					}
					virtual ev_bool handleMouseUpEvent(EarthView::World::Spatial::SystemUI::CGUIEvent* event)
					{
						if (this->_gRef != NULL && this->m_handleMouseUpEvent_CGUIEvent_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong event_j = (jlong) event;
							jmethodID __method = __gr->getMethod("handleMouseUpEvent_CGUIEvent_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , event_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_bool __values1 = (ev_bool) __values1_j;
							return __values1;
						}
						else
						{
							return this->CLatitudeLonitudeTextBox::handleMouseUpEvent(event);
						}
					}
					virtual ev_bool handleMouseMoveEvent(EarthView::World::Spatial::SystemUI::CGUIEvent* event)
					{
						if (this->_gRef != NULL && this->m_handleMouseMoveEvent_CGUIEvent_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong event_j = (jlong) event;
							jmethodID __method = __gr->getMethod("handleMouseMoveEvent_CGUIEvent_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , event_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_bool __values1 = (ev_bool) __values1_j;
							return __values1;
						}
						else
						{
							return this->CLatitudeLonitudeTextBox::handleMouseMoveEvent(event);
						}
					}
					virtual ev_bool handleMouseDownEvent(EarthView::World::Spatial::SystemUI::CGUIEvent* event)
					{
						if (this->_gRef != NULL && this->m_handleMouseDownEvent_CGUIEvent_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong event_j = (jlong) event;
							jmethodID __method = __gr->getMethod("handleMouseDownEvent_CGUIEvent_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , event_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_bool __values1 = (ev_bool) __values1_j;
							return __values1;
						}
						else
						{
							return this->CLatitudeLonitudeTextBox::handleMouseDownEvent(event);
						}
					}
					virtual ev_bool handeMouseDbClickEvent(EarthView::World::Spatial::SystemUI::CGUIEvent* event)
					{
						if (this->_gRef != NULL && this->m_handeMouseDbClickEvent_CGUIEvent_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong event_j = (jlong) event;
							jmethodID __method = __gr->getMethod("handeMouseDbClickEvent_CGUIEvent_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , event_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_bool __values1 = (ev_bool) __values1_j;
							return __values1;
						}
						else
						{
							return this->CLatitudeLonitudeTextBox::handeMouseDbClickEvent(event);
						}
					}
					virtual ev_bool handleKeyDownEvent(EarthView::World::Spatial::SystemUI::CGUIEvent* event)
					{
						if (this->_gRef != NULL && this->m_handleKeyDownEvent_CGUIEvent_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong event_j = (jlong) event;
							jmethodID __method = __gr->getMethod("handleKeyDownEvent_CGUIEvent_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , event_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_bool __values1 = (ev_bool) __values1_j;
							return __values1;
						}
						else
						{
							return this->CLatitudeLonitudeTextBox::handleKeyDownEvent(event);
						}
					}
					virtual ev_bool handleKeyUpEvent(EarthView::World::Spatial::SystemUI::CGUIEvent* event)
					{
						if (this->_gRef != NULL && this->m_handleKeyUpEvent_CGUIEvent_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong event_j = (jlong) event;
							jmethodID __method = __gr->getMethod("handleKeyUpEvent_CGUIEvent_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , event_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_bool __values1 = (ev_bool) __values1_j;
							return __values1;
						}
						else
						{
							return this->CLatitudeLonitudeTextBox::handleKeyUpEvent(event);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCLatitudeLonitudeTextBoxProxy);
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_LatitudeLonitudeTextBox_addGlobeControlListener_1CGlobeControlListener(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_listener_j)
				{
					EarthView::World::Spatial3D::Controls::CGlobeControlListener *ref_listener = (EarthView::World::Spatial3D::Controls::CGlobeControlListener*) ref_listener_j;
					EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox *pObjectX = (EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox*) pObjXXXX;
					pObjectX->addGlobeControlListener(ref_listener);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_LatitudeLonitudeTextBox_removeGlobeControlListener_1CGlobeControlListener(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong listener_j)
				{
					EarthView::World::Spatial3D::Controls::CGlobeControlListener *listener = (EarthView::World::Spatial3D::Controls::CGlobeControlListener*) listener_j;
					EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox *pObjectX = (EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox*) pObjXXXX;
					pObjectX->removeGlobeControlListener(listener);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_LatitudeLonitudeTextBox_setShowLayerInfo_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean show_j)
				{
					ev_bool show = (ev_bool) show_j;
					EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox *pObjectX = (EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox*) pObjXXXX;
					pObjectX->setShowLayerInfo(show);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_LatitudeLonitudeTextBox_handleUserEvent_1CGUIEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong event_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *event = (EarthView::World::Spatial::SystemUI::CGUIEvent*) event_j;
					EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox *pObjectX = (EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCLatitudeLonitudeTextBoxProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox::handleUserEvent(event);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->handleUserEvent(event);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_LatitudeLonitudeTextBox_register_1handleUserEvent_1CGUIEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCLatitudeLonitudeTextBoxProxy *pObjectX = (JCLatitudeLonitudeTextBoxProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_handleUserEvent_CGUIEvent_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"handleUserEvent_CGUIEvent_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_LatitudeLonitudeTextBox_handleUserEvent_1CGUIEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong event_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *event = (EarthView::World::Spatial::SystemUI::CGUIEvent*) event_j;
					EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox *pObjectX = (EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox::handleUserEvent(event);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_LatitudeLonitudeTextBox_handleFrameEvent_1CGUIEvent_1CViewport(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong event_j, jlong viewport_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *event = (EarthView::World::Spatial::SystemUI::CGUIEvent*) event_j;
					EarthView::World::Graphic::CViewport *viewport = (EarthView::World::Graphic::CViewport*) viewport_j;
					EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox *pObjectX = (EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCLatitudeLonitudeTextBoxProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox::handleFrameEvent(event, viewport);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->handleFrameEvent(event, viewport);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_LatitudeLonitudeTextBox_register_1handleFrameEvent_1CGUIEvent_1CViewport(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCLatitudeLonitudeTextBoxProxy *pObjectX = (JCLatitudeLonitudeTextBoxProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_handleFrameEvent_CGUIEvent_CViewport_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"handleFrameEvent_CGUIEvent_CViewport_callback", "(JJ)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_LatitudeLonitudeTextBox_handleFrameEvent_1CGUIEvent_1CViewport_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong event_j, jlong viewport_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *event = (EarthView::World::Spatial::SystemUI::CGUIEvent*) event_j;
					EarthView::World::Graphic::CViewport *viewport = (EarthView::World::Graphic::CViewport*) viewport_j;
					EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox *pObjectX = (EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox::handleFrameEvent(event, viewport);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_LatitudeLonitudeTextBox_OperatorAssign_1CTextBoxWidget(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rhs_j )
				{
					EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox& pObjectX = *(EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox*) pObjXXXX;
					const EarthView::World::Spatial3D::Controls::CTextBoxWidget &rhs = *(EarthView::World::Spatial3D::Controls::CTextBoxWidget*) rhs_j;
					pObjectX = rhs;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_LatitudeLonitudeTextBox_setGlobelControl_1CGlobeControl(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong globeContorl_j)
				{
					EarthView::World::Spatial3D::Controls::CGlobeControl *globeContorl = (EarthView::World::Spatial3D::Controls::CGlobeControl*) globeContorl_j;
					EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox *pObjectX = (EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox*) pObjXXXX;
					pObjectX->setGlobelControl(globeContorl);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_LatitudeLonitudeTextBox_setMousetPickInterval_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong intervalTime_j)
				{
					ev_uint32 intervalTime = (ev_uint32) intervalTime_j;
					EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox *pObjectX = (EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox*) pObjXXXX;
					pObjectX->setMousetPickInterval(intervalTime);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_LatitudeLonitudeTextBox_get_1mGlobeCamera_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox *pObjectX = (EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox*)pObjXXXX;
					jlong __values1_j = (jlong)(pObjectX->mGlobeCamera);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_LatitudeLonitudeTextBox_set_1mGlobeCamera_1CGlobeCamera(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox *pObjectX = (EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox*)pObjXXXX;
					pObjectX->mGlobeCamera = (EarthView::World::Spatial3D::CGlobeCamera*) __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_controls_LatitudeLonitudeTextBox_get_1mlastWidth_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox *pObjectX = (EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox*)pObjXXXX;
					jint __values1_j = (jint)(pObjectX->mlastWidth);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_LatitudeLonitudeTextBox_set_1mlastWidth_1int(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
				{
					EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox *pObjectX = (EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox*)pObjXXXX;
					pObjectX->mlastWidth = (int)__values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_LatitudeLonitudeTextBox_get_1mtextInformation_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox *pObjectX = (EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox*)pObjXXXX;
					jlong __values1_j = (jlong)(pObjectX->mtextInformation);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_LatitudeLonitudeTextBox_set_1mtextInformation_1char(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox *pObjectX = (EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox*)pObjXXXX;
					pObjectX->mtextInformation = (char*) __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_controls_LatitudeLonitudeTextBox_get_1mCurrentEventX_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox *pObjectX = (EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox*)pObjXXXX;
					jint __values1_j = (jint)(pObjectX->mCurrentEventX);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_LatitudeLonitudeTextBox_set_1mCurrentEventX_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
				{
					EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox *pObjectX = (EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox*)pObjXXXX;
					pObjectX->mCurrentEventX = (ev_int32)__values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_controls_LatitudeLonitudeTextBox_get_1mCurrentEventY_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox *pObjectX = (EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox*)pObjXXXX;
					jint __values1_j = (jint)(pObjectX->mCurrentEventY);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_LatitudeLonitudeTextBox_set_1mCurrentEventY_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
				{
					EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox *pObjectX = (EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox*)pObjXXXX;
					pObjectX->mCurrentEventY = (ev_int32)__values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_controls_LatitudeLonitudeTextBox_get_1mPreEventX_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox *pObjectX = (EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox*)pObjXXXX;
					jint __values1_j = (jint)(pObjectX->mPreEventX);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_LatitudeLonitudeTextBox_set_1mPreEventX_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
				{
					EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox *pObjectX = (EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox*)pObjXXXX;
					pObjectX->mPreEventX = (ev_int32)__values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_controls_LatitudeLonitudeTextBox_get_1mPreEventY_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox *pObjectX = (EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox*)pObjXXXX;
					jint __values1_j = (jint)(pObjectX->mPreEventY);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_LatitudeLonitudeTextBox_set_1mPreEventY_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
				{
					EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox *pObjectX = (EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox*)pObjXXXX;
					pObjectX->mPreEventY = (ev_int32)__values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_LatitudeLonitudeTextBox_get_1mStartTime_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox *pObjectX = (EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox*)pObjXXXX;
					jlong __values1_j = (jlong) (pObjectX->mStartTime);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_LatitudeLonitudeTextBox_set_1mStartTime_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox *pObjectX = (EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox*)pObjXXXX;
					pObjectX->mStartTime = (ev_uint32)__values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_LatitudeLonitudeTextBox_get_1mStopTime_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox *pObjectX = (EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox*)pObjXXXX;
					jlong __values1_j = (jlong) (pObjectX->mStopTime);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_LatitudeLonitudeTextBox_set_1mStopTime_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox *pObjectX = (EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox*)pObjXXXX;
					pObjectX->mStopTime = (ev_uint32)__values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_LatitudeLonitudeTextBox_get_1mIsStartTime_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox *pObjectX = (EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox*)pObjXXXX;
					jboolean __values1_j = (jboolean)(pObjectX->mIsStartTime);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_LatitudeLonitudeTextBox_set_1mIsStartTime_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
				{
					EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox *pObjectX = (EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox*)pObjXXXX;
					pObjectX->mIsStartTime = (ev_bool)__values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_LatitudeLonitudeTextBox_get_1mIntervalTime_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox *pObjectX = (EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox*)pObjXXXX;
					jlong __values1_j = (jlong) (pObjectX->mIntervalTime);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_LatitudeLonitudeTextBox_set_1mIntervalTime_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox *pObjectX = (EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox*)pObjXXXX;
					pObjectX->mIntervalTime = (ev_uint32)__values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_LatitudeLonitudeTextBox_get_1mpGlobelControl_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox *pObjectX = (EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox*)pObjXXXX;
					jlong __values1_j = (jlong)(pObjectX->mpGlobelControl);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_LatitudeLonitudeTextBox_set_1mpGlobelControl_1CGlobeControl(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox *pObjectX = (EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox*)pObjXXXX;
					pObjectX->mpGlobelControl = (EarthView::World::Spatial3D::Controls::CGlobeControl*) __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_controls_LatitudeLonitudeTextBox_get_1mouseLatitudeString_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox *pObjectX = (EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox*)pObjXXXX;
					EarthView::World::Core::ev_wstring __values1_ch = pObjectX->mouseLatitudeString;
					jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_LatitudeLonitudeTextBox_set_1mouseLatitudeString_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
				{
					EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox *pObjectX = (EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox*)pObjXXXX;
					const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
					pObjectX->mouseLatitudeString = __values1_ch;
					__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_controls_LatitudeLonitudeTextBox_get_1mouseLongitudeString_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox *pObjectX = (EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox*)pObjXXXX;
					EarthView::World::Core::ev_wstring __values1_ch = pObjectX->mouseLongitudeString;
					jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_LatitudeLonitudeTextBox_set_1mouseLongitudeString_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
				{
					EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox *pObjectX = (EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox*)pObjXXXX;
					const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
					pObjectX->mouseLongitudeString = __values1_ch;
					__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_controls_LatitudeLonitudeTextBox_get_1mouseAltitudeString_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox *pObjectX = (EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox*)pObjXXXX;
					EarthView::World::Core::ev_wstring __values1_ch = pObjectX->mouseAltitudeString;
					jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_LatitudeLonitudeTextBox_set_1mouseAltitudeString_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
				{
					EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox *pObjectX = (EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox*)pObjXXXX;
					const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
					pObjectX->mouseAltitudeString = __values1_ch;
					__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_controls_LatitudeLonitudeTextBox_get_1mLat_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox *pObjectX = (EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->mLat);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_LatitudeLonitudeTextBox_set_1mLat_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox *pObjectX = (EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox*)pObjXXXX;
					pObjectX->mLat = (ev_real64)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_controls_LatitudeLonitudeTextBox_get_1mLon_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox *pObjectX = (EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->mLon);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_LatitudeLonitudeTextBox_set_1mLon_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox *pObjectX = (EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox*)pObjXXXX;
					pObjectX->mLon = (ev_real64)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_controls_LatitudeLonitudeTextBox_get_1mAltitude_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox *pObjectX = (EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->mAltitude);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_LatitudeLonitudeTextBox_set_1mAltitude_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox *pObjectX = (EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox*)pObjXXXX;
					pObjectX->mAltitude = (ev_real64)__values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_LatitudeLonitudeTextBox_register_1additionMouseUp_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCLatitudeLonitudeTextBoxProxy *pObjectX = (JCLatitudeLonitudeTextBoxProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_additionMouseUp_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"additionMouseUp_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_LatitudeLonitudeTextBox_register_1handleMouseUpEvent_1CGUIEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCLatitudeLonitudeTextBoxProxy *pObjectX = (JCLatitudeLonitudeTextBoxProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_handleMouseUpEvent_CGUIEvent_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"handleMouseUpEvent_CGUIEvent_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_LatitudeLonitudeTextBox_register_1handleMouseMoveEvent_1CGUIEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCLatitudeLonitudeTextBoxProxy *pObjectX = (JCLatitudeLonitudeTextBoxProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_handleMouseMoveEvent_CGUIEvent_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"handleMouseMoveEvent_CGUIEvent_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_LatitudeLonitudeTextBox_register_1handleMouseDownEvent_1CGUIEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCLatitudeLonitudeTextBoxProxy *pObjectX = (JCLatitudeLonitudeTextBoxProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_handleMouseDownEvent_CGUIEvent_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"handleMouseDownEvent_CGUIEvent_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_LatitudeLonitudeTextBox_register_1handeMouseDbClickEvent_1CGUIEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCLatitudeLonitudeTextBoxProxy *pObjectX = (JCLatitudeLonitudeTextBoxProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_handeMouseDbClickEvent_CGUIEvent_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"handeMouseDbClickEvent_CGUIEvent_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_LatitudeLonitudeTextBox_register_1handleKeyDownEvent_1CGUIEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCLatitudeLonitudeTextBoxProxy *pObjectX = (JCLatitudeLonitudeTextBoxProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_handleKeyDownEvent_CGUIEvent_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"handleKeyDownEvent_CGUIEvent_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_LatitudeLonitudeTextBox_register_1handleKeyUpEvent_1CGUIEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCLatitudeLonitudeTextBoxProxy *pObjectX = (JCLatitudeLonitudeTextBoxProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_handleKeyUpEvent_CGUIEvent_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"handleKeyUpEvent_CGUIEvent_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
			}
		}
	}
}
