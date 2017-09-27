/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/texturetextstyle.h"
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
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_graphic_TextureTextStyle_00024DisplayModeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					CTextureTextStyle::FONT_3D,
					CTextureTextStyle::KEEP_PIXELSIZE,
					CTextureTextStyle::FACETO_CAMERA,
					CTextureTextStyle::STANDARD
				};
				jintArray array = __env->NewIntArray(4);
				__env->SetIntArrayRegion(array, 0, 4, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_graphic_TextureTextStyle_00024HoriLayoutHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					CTextureTextStyle::HORI_LEFT,
					CTextureTextStyle::HORI_MID,
					CTextureTextStyle::HORI_RIGHT
				};
				jintArray array = __env->NewIntArray(3);
				__env->SetIntArrayRegion(array, 0, 3, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_graphic_TextureTextStyle_00024VertLayoutHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					CTextureTextStyle::VERT_TOP,
					CTextureTextStyle::VERT_MID,
					CTextureTextStyle::VERT_BOTTOM
				};
				jintArray array = __env->NewIntArray(3);
				__env->SetIntArrayRegion(array, 0, 3, enum_values);
				return array;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureTextStyle_setFontStyle_1FontStyle(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong style_j)
			{
				const EarthView::World::Graphic::FontStyle &style = *(EarthView::World::Graphic::FontStyle*) style_j;
				EarthView::World::Graphic::CTextureTextStyle *pObjectX = (EarthView::World::Graphic::CTextureTextStyle*) pObjXXXX;
				pObjectX->setFontStyle(style);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureTextStyle_setColor_1CColourValue(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong color_j)
			{
				const EarthView::World::Graphic::CColourValue &color = *(EarthView::World::Graphic::CColourValue*) color_j;
				EarthView::World::Graphic::CTextureTextStyle *pObjectX = (EarthView::World::Graphic::CTextureTextStyle*) pObjXXXX;
				pObjectX->setColor(color);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureTextStyle_setOutlineColor_1CColourValue(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong color_j)
			{
				const EarthView::World::Graphic::CColourValue &color = *(EarthView::World::Graphic::CColourValue*) color_j;
				EarthView::World::Graphic::CTextureTextStyle *pObjectX = (EarthView::World::Graphic::CTextureTextStyle*) pObjXXXX;
				pObjectX->setOutlineColor(color);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureTextStyle_setColorRange_1CColourValue_1CColourValue(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong colorBegin_j, jlong colorEnd_j)
			{
				const EarthView::World::Graphic::CColourValue &colorBegin = *(EarthView::World::Graphic::CColourValue*) colorBegin_j;
				const EarthView::World::Graphic::CColourValue &colorEnd = *(EarthView::World::Graphic::CColourValue*) colorEnd_j;
				EarthView::World::Graphic::CTextureTextStyle *pObjectX = (EarthView::World::Graphic::CTextureTextStyle*) pObjXXXX;
				pObjectX->setColorRange(colorBegin, colorEnd);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureTextStyle_setFontName_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring family_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* family_ch = (const ev_char*)__env->GetStringUTFChars(family_j,JNI_FALSE);
				const EVString family = family_ch;
				__env->ReleaseStringUTFChars(family_j, (const char *)family_ch);
				#else
				const ev_wchar* family_ch = (const ev_wchar*)__env->GetStringChars(family_j,JNI_FALSE);
				const EVString family = family_ch;
				__env->ReleaseStringChars(family_j, (const jchar *)family_ch);
				#endif
				EarthView::World::Graphic::CTextureTextStyle *pObjectX = (EarthView::World::Graphic::CTextureTextStyle*) pObjXXXX;
				pObjectX->setFontName(family);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureTextStyle_setFontSize_1ev_1uint8(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jshort size_j)
			{
				ev_uint8 size = (ev_uint8) size_j;
				EarthView::World::Graphic::CTextureTextStyle *pObjectX = (EarthView::World::Graphic::CTextureTextStyle*) pObjXXXX;
				pObjectX->setFontSize(size);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureTextStyle_setBoldEnabled_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean isBold_j)
			{
				ev_bool isBold = (ev_bool) isBold_j;
				EarthView::World::Graphic::CTextureTextStyle *pObjectX = (EarthView::World::Graphic::CTextureTextStyle*) pObjXXXX;
				pObjectX->setBoldEnabled(isBold);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureTextStyle_setItalicEnabled_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean isItalic_j)
			{
				ev_bool isItalic = (ev_bool) isItalic_j;
				EarthView::World::Graphic::CTextureTextStyle *pObjectX = (EarthView::World::Graphic::CTextureTextStyle*) pObjXXXX;
				pObjectX->setItalicEnabled(isItalic);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureTextStyle_setShadowEnabled_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean hasShadow_j)
			{
				ev_bool hasShadow = (ev_bool) hasShadow_j;
				EarthView::World::Graphic::CTextureTextStyle *pObjectX = (EarthView::World::Graphic::CTextureTextStyle*) pObjXXXX;
				pObjectX->setShadowEnabled(hasShadow);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureTextStyle_setLayout_1HoriLayout_1VertLayout(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint hLayout_j, jint vLayout_j)
			{
				EarthView::World::Graphic::CTextureTextStyle::HoriLayout hLayout = (EarthView::World::Graphic::CTextureTextStyle::HoriLayout) hLayout_j;
				EarthView::World::Graphic::CTextureTextStyle::VertLayout vLayout = (EarthView::World::Graphic::CTextureTextStyle::VertLayout) vLayout_j;
				EarthView::World::Graphic::CTextureTextStyle *pObjectX = (EarthView::World::Graphic::CTextureTextStyle*) pObjXXXX;
				pObjectX->setLayout(hLayout, vLayout);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureTextStyle_setOffset_1Real_1Real_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble offsetX_j, jdouble offsetY_j, jdouble offsetZ_j)
			{
				Real offsetX = (Real) offsetX_j;
				Real offsetY = (Real) offsetY_j;
				Real offsetZ = (Real) offsetZ_j;
				EarthView::World::Graphic::CTextureTextStyle *pObjectX = (EarthView::World::Graphic::CTextureTextStyle*) pObjXXXX;
				pObjectX->setOffset(offsetX, offsetY, offsetZ);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureTextStyle_setRowHeight_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble scale_j)
			{
				Real scale = (Real) scale_j;
				EarthView::World::Graphic::CTextureTextStyle *pObjectX = (EarthView::World::Graphic::CTextureTextStyle*) pObjXXXX;
				pObjectX->setRowHeight(scale);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureTextStyle_setDisplayMode_1DisplayMode(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint mode_j)
			{
				EarthView::World::Graphic::CTextureTextStyle::DisplayMode mode = (EarthView::World::Graphic::CTextureTextStyle::DisplayMode) mode_j;
				EarthView::World::Graphic::CTextureTextStyle *pObjectX = (EarthView::World::Graphic::CTextureTextStyle*) pObjXXXX;
				pObjectX->setDisplayMode(mode);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureTextStyle_commit_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTextureTextStyle *pObjectX = (EarthView::World::Graphic::CTextureTextStyle*) pObjXXXX;
				pObjectX->commit();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureTextStyle_attach_1ITextStyleListener(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong listener_j)
			{
				EarthView::World::Graphic::ITextStyleListener *listener = (EarthView::World::Graphic::ITextStyleListener*) listener_j;
				EarthView::World::Graphic::CTextureTextStyle *pObjectX = (EarthView::World::Graphic::CTextureTextStyle*) pObjXXXX;
				pObjectX->attach(listener);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureTextStyle_remove_1ITextStyleListener(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong listener_j)
			{
				EarthView::World::Graphic::ITextStyleListener *listener = (EarthView::World::Graphic::ITextStyleListener*) listener_j;
				EarthView::World::Graphic::CTextureTextStyle *pObjectX = (EarthView::World::Graphic::CTextureTextStyle*) pObjXXXX;
				pObjectX->remove(listener);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_TextureTextStyle_getFontStyle_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTextureTextStyle *pObjectX = (EarthView::World::Graphic::CTextureTextStyle*) pObjXXXX;
				const EarthView::World::Graphic::FontStyle& __values1 = pObjectX->getFontStyle();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_TextureTextStyle_getFontName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTextureTextStyle *pObjectX = (EarthView::World::Graphic::CTextureTextStyle*) pObjXXXX;
				const EVString& __values1 = pObjectX->getFontName();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jshort JNICALL Java_com_earthview_world_graphic_TextureTextStyle_getFontSize_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTextureTextStyle *pObjectX = (EarthView::World::Graphic::CTextureTextStyle*) pObjXXXX;
				ev_uint8 __values1 = pObjectX->getFontSize();
				jshort __values1_j = (jshort) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_TextureTextStyle_isItalic_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTextureTextStyle *pObjectX = (EarthView::World::Graphic::CTextureTextStyle*) pObjXXXX;
				ev_bool __values1 = pObjectX->isItalic();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_TextureTextStyle_isBold_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTextureTextStyle *pObjectX = (EarthView::World::Graphic::CTextureTextStyle*) pObjXXXX;
				ev_bool __values1 = pObjectX->isBold();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_TextureTextStyle_hasShadow_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTextureTextStyle *pObjectX = (EarthView::World::Graphic::CTextureTextStyle*) pObjXXXX;
				ev_bool __values1 = pObjectX->hasShadow();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_TextureTextStyle_getColorBegin_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTextureTextStyle *pObjectX = (EarthView::World::Graphic::CTextureTextStyle*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getColorBegin();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_TextureTextStyle_getColorEnd_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTextureTextStyle *pObjectX = (EarthView::World::Graphic::CTextureTextStyle*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getColorEnd();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureTextStyle_getColorRange_1CColourValue_1CColourValue(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong beginColor_j, jlong endColor_j)
			{
				EarthView::World::Graphic::CColourValue &beginColor = *(EarthView::World::Graphic::CColourValue*) beginColor_j;
				EarthView::World::Graphic::CColourValue &endColor = *(EarthView::World::Graphic::CColourValue*) endColor_j;
				const 				EarthView::World::Graphic::CTextureTextStyle *pObjectX = (EarthView::World::Graphic::CTextureTextStyle*) pObjXXXX;
				pObjectX->getColorRange(beginColor, endColor);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_TextureTextStyle_getColor_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTextureTextStyle *pObjectX = (EarthView::World::Graphic::CTextureTextStyle*) pObjXXXX;
				EarthView::World::Graphic::CColourValue __values1 = pObjectX->getColor();
				EarthView::World::Graphic::CColourValue *returnvalues = new EarthView::World::Graphic::CColourValue(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_TextureTextStyle_getOutlineColor_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTextureTextStyle *pObjectX = (EarthView::World::Graphic::CTextureTextStyle*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getOutlineColor();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_TextureTextStyle_geometryOutOfDate_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTextureTextStyle *pObjectX = (EarthView::World::Graphic::CTextureTextStyle*) pObjXXXX;
				ev_bool __values1 = pObjectX->geometryOutOfDate();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_TextureTextStyle_colorOutOfDate_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTextureTextStyle *pObjectX = (EarthView::World::Graphic::CTextureTextStyle*) pObjXXXX;
				ev_bool __values1 = pObjectX->colorOutOfDate();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_TextureTextStyle_getHorizontalLayout_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTextureTextStyle *pObjectX = (EarthView::World::Graphic::CTextureTextStyle*) pObjXXXX;
				EarthView::World::Graphic::CTextureTextStyle::HoriLayout __values1 = pObjectX->getHorizontalLayout();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_TextureTextStyle_getVerticalLayout_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTextureTextStyle *pObjectX = (EarthView::World::Graphic::CTextureTextStyle*) pObjXXXX;
				EarthView::World::Graphic::CTextureTextStyle::VertLayout __values1 = pObjectX->getVerticalLayout();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_TextureTextStyle_getOffsetX_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTextureTextStyle *pObjectX = (EarthView::World::Graphic::CTextureTextStyle*) pObjXXXX;
				Real __values1 = pObjectX->getOffsetX();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_TextureTextStyle_getOffsetY_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTextureTextStyle *pObjectX = (EarthView::World::Graphic::CTextureTextStyle*) pObjXXXX;
				Real __values1 = pObjectX->getOffsetY();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_TextureTextStyle_getOffsetZ_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTextureTextStyle *pObjectX = (EarthView::World::Graphic::CTextureTextStyle*) pObjXXXX;
				Real __values1 = pObjectX->getOffsetZ();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_TextureTextStyle_getDisplayMode_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTextureTextStyle *pObjectX = (EarthView::World::Graphic::CTextureTextStyle*) pObjXXXX;
				EarthView::World::Graphic::CTextureTextStyle::DisplayMode __values1 = pObjectX->getDisplayMode();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_TextureTextStyle_getFontResoure_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTextureTextStyle *pObjectX = (EarthView::World::Graphic::CTextureTextStyle*) pObjXXXX;
				const EarthView::World::Graphic::CFontPtr& __values1 = pObjectX->getFontResoure();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_TextureTextStyle_getRowHeight_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTextureTextStyle *pObjectX = (EarthView::World::Graphic::CTextureTextStyle*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getRowHeight();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_TextureTextStyle_getStandardRowHeight_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTextureTextStyle *pObjectX = (EarthView::World::Graphic::CTextureTextStyle*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getStandardRowHeight();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_TextureTextStyle_create_1EVString_1ev_1uint8_1CColourValue_1ev_1bool(JNIEnv *__env , jclass __clazz, jstring famliy_j, jshort fontSize_j, jlong color_j, jboolean hasShadow_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* famliy_ch = (const ev_char*)__env->GetStringUTFChars(famliy_j,JNI_FALSE);
				const EVString famliy = famliy_ch;
				__env->ReleaseStringUTFChars(famliy_j, (const char *)famliy_ch);
				#else
				const ev_wchar* famliy_ch = (const ev_wchar*)__env->GetStringChars(famliy_j,JNI_FALSE);
				const EVString famliy = famliy_ch;
				__env->ReleaseStringChars(famliy_j, (const jchar *)famliy_ch);
				#endif
				ev_uint8 fontSize = (ev_uint8) fontSize_j;
				const EarthView::World::Graphic::CColourValue &color = *(EarthView::World::Graphic::CColourValue*) color_j;
				ev_bool hasShadow = (ev_bool) hasShadow_j;
				EarthView::World::Graphic::CTextureTextStyle* __values1 = EarthView::World::Graphic::CTextureTextStyle::create(famliy, fontSize, color, hasShadow);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_TextureTextStyle_create_1void(JNIEnv *__env , jclass __clazz)
			{
				EarthView::World::Graphic::CTextureTextStyle* __values1 = EarthView::World::Graphic::CTextureTextStyle::create();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureTextStyle_destroy_1CTextureTextStyle(JNIEnv *__env , jclass __clazz, jlong ref_instance_j)
			{
				EarthView::World::Graphic::CTextureTextStyle *ref_instance = (EarthView::World::Graphic::CTextureTextStyle*) ref_instance_j;
				EarthView::World::Graphic::CTextureTextStyle::destroy(ref_instance);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_TextureTextStyle_isToDestroy_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTextureTextStyle *pObjectX = (EarthView::World::Graphic::CTextureTextStyle*) pObjXXXX;
				ev_bool __values1 = pObjectX->isToDestroy();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			class JITextStyleListenerProxy : public EarthView::World::Graphic::ITextStyleListener
			{
			 private:
				EarthView::World::Core::ev_string m_onStyleChanged_CTextureTextStyle_callback;
			public:
				JITextStyleListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : ITextStyleListener(pList)
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
				void register_onStyleChanged_CTextureTextStyle_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_onStyleChanged_CTextureTextStyle_callback = __method;
				}
				virtual void onStyleChanged(EarthView::World::Graphic::CTextureTextStyle* ref_style)
				{
					if (this->_gRef != NULL && this->m_onStyleChanged_CTextureTextStyle_callback != "" && this->isCustomExtend())
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
						jlong ref_style_j = (jlong) ref_style;
						jmethodID __method = __gr->getMethod("onStyleChanged_CTextureTextStyle_callback");
						__env->CallVoidMethod(__obj, __method , ref_style_j);
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
						return this->ITextStyleListener::onStyleChanged(ref_style);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JITextStyleListenerProxy);
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Itextstylelistener_onStyleChanged_1CTextureTextStyle(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_style_j)
			{
				EarthView::World::Graphic::CTextureTextStyle *ref_style = (EarthView::World::Graphic::CTextureTextStyle*) ref_style_j;
				EarthView::World::Graphic::ITextStyleListener *pObjectX = (EarthView::World::Graphic::ITextStyleListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JITextStyleListenerProxy))
				{
					pObjectX->EarthView::World::Graphic::ITextStyleListener::onStyleChanged(ref_style);
				}
				else
				{
					pObjectX->onStyleChanged(ref_style);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Itextstylelistener_register_1onStyleChanged_1CTextureTextStyle(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JITextStyleListenerProxy *pObjectX = (JITextStyleListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_onStyleChanged_CTextureTextStyle_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"onStyleChanged_CTextureTextStyle_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Itextstylelistener_onStyleChanged_1CTextureTextStyle_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_style_j)
			{
				EarthView::World::Graphic::CTextureTextStyle *ref_style = (EarthView::World::Graphic::CTextureTextStyle*) ref_style_j;
				EarthView::World::Graphic::ITextStyleListener *pObjectX = (EarthView::World::Graphic::ITextStyleListener*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::ITextStyleListener::onStyleChanged(ref_style);
			}
		}
	}
}
