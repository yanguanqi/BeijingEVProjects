/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/fontstyle.h"
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_FontStyle_getFontFamily_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::FontStyle *pObjectX = (EarthView::World::Graphic::FontStyle*) pObjXXXX;
				const EVString& __values1 = pObjectX->getFontFamily();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_FontStyle_setFontFamily_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring fontFamily_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* fontFamily_ch = (const ev_char*)__env->GetStringUTFChars(fontFamily_j,JNI_FALSE);
				const EVString fontFamily = fontFamily_ch;
				__env->ReleaseStringUTFChars(fontFamily_j, (const char *)fontFamily_ch);
				#else
				const ev_wchar* fontFamily_ch = (const ev_wchar*)__env->GetStringChars(fontFamily_j,JNI_FALSE);
				const EVString fontFamily = fontFamily_ch;
				__env->ReleaseStringChars(fontFamily_j, (const jchar *)fontFamily_ch);
				#endif
				EarthView::World::Graphic::FontStyle *pObjectX = (EarthView::World::Graphic::FontStyle*) pObjXXXX;
				pObjectX->setFontFamily(fontFamily);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_FontStyle_fontIndex_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::FontStyle *pObjectX = (EarthView::World::Graphic::FontStyle*) pObjXXXX;
				ev_uint16 __values1 = pObjectX->fontIndex();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_FontStyle_isItalic_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::FontStyle *pObjectX = (EarthView::World::Graphic::FontStyle*) pObjXXXX;
				ev_bool __values1 = pObjectX->isItalic();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_FontStyle_setItalic_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean val_j)
			{
				ev_bool val = (ev_bool) val_j;
				EarthView::World::Graphic::FontStyle *pObjectX = (EarthView::World::Graphic::FontStyle*) pObjXXXX;
				pObjectX->setItalic(val);
			}
			extern "C" JNIEXPORT jshort JNICALL Java_com_earthview_world_graphic_FontStyle_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::FontStyle *pObjectX = (EarthView::World::Graphic::FontStyle*) pObjXXXX;
				ev_uint8 __values1 = pObjectX->size();
				jshort __values1_j = (jshort) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_FontStyle_setSize_1ev_1uint8(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jshort val_j)
			{
				ev_uint8 val = (ev_uint8) val_j;
				EarthView::World::Graphic::FontStyle *pObjectX = (EarthView::World::Graphic::FontStyle*) pObjXXXX;
				pObjectX->setSize(val);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_FontStyle_isBold_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::FontStyle *pObjectX = (EarthView::World::Graphic::FontStyle*) pObjXXXX;
				ev_bool __values1 = pObjectX->isBold();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_FontStyle_setBold_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean val_j)
			{
				ev_bool val = (ev_bool) val_j;
				EarthView::World::Graphic::FontStyle *pObjectX = (EarthView::World::Graphic::FontStyle*) pObjXXXX;
				pObjectX->setBold(val);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_FontStyle_hasShadow_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::FontStyle *pObjectX = (EarthView::World::Graphic::FontStyle*) pObjXXXX;
				ev_bool __values1 = pObjectX->hasShadow();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_FontStyle_setShadow_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean val_j)
			{
				ev_bool val = (ev_bool) val_j;
				EarthView::World::Graphic::FontStyle *pObjectX = (EarthView::World::Graphic::FontStyle*) pObjXXXX;
				pObjectX->setShadow(val);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_FontStyle_isAntiAlias_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::FontStyle *pObjectX = (EarthView::World::Graphic::FontStyle*) pObjXXXX;
				ev_bool __values1 = pObjectX->isAntiAlias();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_FontStyle_setAntiAlias_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean val_j)
			{
				ev_bool val = (ev_bool) val_j;
				EarthView::World::Graphic::FontStyle *pObjectX = (EarthView::World::Graphic::FontStyle*) pObjXXXX;
				pObjectX->setAntiAlias(val);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_FontStyle_key_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::FontStyle *pObjectX = (EarthView::World::Graphic::FontStyle*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->key();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_FontStyle_flag_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::FontStyle *pObjectX = (EarthView::World::Graphic::FontStyle*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->flag();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
		}
	}
}
