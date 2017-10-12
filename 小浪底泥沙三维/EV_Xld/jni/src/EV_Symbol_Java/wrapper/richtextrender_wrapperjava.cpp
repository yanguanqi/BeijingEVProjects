/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "symbol/richtextrender.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Display
			{
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_RichTextRenderMeasure_measureRichText_1EVString_1ISymbol(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring str_j, jlong symbol_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* str_ch = (const ev_char*)__env->GetStringUTFChars(str_j,JNI_FALSE);
					const EVString str = str_ch;
					__env->ReleaseStringUTFChars(str_j, (const char *)str_ch);
					#else
					const ev_wchar* str_ch = (const ev_wchar*)__env->GetStringChars(str_j,JNI_FALSE);
					const EVString str = str_ch;
					__env->ReleaseStringChars(str_j, (const jchar *)str_ch);
					#endif
					const EarthView::World::Spatial::Display::ISymbol *symbol = (const EarthView::World::Spatial::Display::ISymbol*) symbol_j;
					EarthView::World::Spatial::Display::CRichTextRenderMeasure *pObjectX = (EarthView::World::Spatial::Display::CRichTextRenderMeasure*) pObjXXXX;
					pObjectX->measureRichText(str, symbol);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_RichTextRenderMeasure_getTextSize_1double_1double(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong w_j, jlong h_j)
				{
					double &w = *(double*) w_j;
					double &h = *(double*) h_j;
					EarthView::World::Spatial::Display::CRichTextRenderMeasure *pObjectX = (EarthView::World::Spatial::Display::CRichTextRenderMeasure*) pObjXXXX;
					pObjectX->getTextSize(w, h);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_RichTextRenderMeasure_getTextSize_1EarthView_1World_1Display_1EVDeviceUnits_1double_1double(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong unit_j, jlong w_j, jlong h_j)
				{
					EarthView::World::Display::EVDeviceUnits unit = *(EarthView::World::Display::EVDeviceUnits*) unit_j;
					double &w = *(double*) w_j;
					double &h = *(double*) h_j;
					EarthView::World::Spatial::Display::CRichTextRenderMeasure *pObjectX = (EarthView::World::Spatial::Display::CRichTextRenderMeasure*) pObjXXXX;
					pObjectX->getTextSize(unit, w, h);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_RichTextRender_startDraw_1IDisplay2D_1ISymbol(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong display_j, jlong pSymbol_j)
				{
					EarthView::World::Display::IDisplay2D *display = (EarthView::World::Display::IDisplay2D*) display_j;
					const EarthView::World::Spatial::Display::ISymbol *pSymbol = (const EarthView::World::Spatial::Display::ISymbol*) pSymbol_j;
					EarthView::World::Spatial::Display::CRichTextRender *pObjectX = (EarthView::World::Spatial::Display::CRichTextRender*) pObjXXXX;
					pObjectX->startDraw(display, pSymbol);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_RichTextRender_draw_1ev_1real64_1ev_1real64_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong dx_j, jlong dy_j, jlong pSegments_j, jint nCount_j)
				{
					ev_real64 *dx = (ev_real64*) dx_j;
					ev_real64 *dy = (ev_real64*) dy_j;
					ev_int32 *pSegments = (ev_int32*) pSegments_j;
					ev_int32 nCount = (ev_int32) nCount_j;
					EarthView::World::Spatial::Display::CRichTextRender *pObjectX = (EarthView::World::Spatial::Display::CRichTextRender*) pObjXXXX;
					pObjectX->draw(dx, dy, pSegments, nCount);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_RichTextRender_endDraw_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Display::CRichTextRender *pObjectX = (EarthView::World::Spatial::Display::CRichTextRender*) pObjXXXX;
					pObjectX->endDraw();
				}
			}
		}
	}
}
