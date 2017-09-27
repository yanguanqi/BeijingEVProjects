/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/latticetextstyle.h"
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
			class JCLatticeTextStyleProxy : public EarthView::World::Graphic::CLatticeTextStyle
			{
			 private:
				EarthView::World::Core::ev_string m_toDefaultVal_void_callback;
			public:
				JCLatticeTextStyleProxy(EarthView::World::Core::CNameValuePairList *pList) : CLatticeTextStyle(pList)
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
				void register_toDefaultVal_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_toDefaultVal_void_callback = __method;
				}
				virtual void toDefaultVal()
				{
					if (this->_gRef != NULL && this->m_toDefaultVal_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("toDefaultVal_void_callback");
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
						return this->CLatticeTextStyle::toDefaultVal();
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCLatticeTextStyleProxy);
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_graphic_LatticeTextStyle_00024EShadeModeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					CLatticeTextStyle::HIGHLIGHT,
					CLatticeTextStyle::OUTLINE,
					CLatticeTextStyle::SHADOW,
					CLatticeTextStyle::NORMAL
				};
				jintArray array = __env->NewIntArray(4);
				__env->SetIntArrayRegion(array, 0, 4, enum_values);
				return array;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_LatticeTextStyle_setColor_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong rgbVal_j)
			{
				ev_uint32 rgbVal = (ev_uint32) rgbVal_j;
				EarthView::World::Graphic::CLatticeTextStyle *pObjectX = (EarthView::World::Graphic::CLatticeTextStyle*) pObjXXXX;
				pObjectX->setColor(rgbVal);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_LatticeTextStyle_setColor_1CColourValue(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong color_j)
			{
				const EarthView::World::Graphic::CColourValue &color = *(EarthView::World::Graphic::CColourValue*) color_j;
				EarthView::World::Graphic::CLatticeTextStyle *pObjectX = (EarthView::World::Graphic::CLatticeTextStyle*) pObjXXXX;
				pObjectX->setColor(color);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_LatticeTextStyle_setUnderline_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean bUnderline_j)
			{
				ev_bool bUnderline = (ev_bool) bUnderline_j;
				EarthView::World::Graphic::CLatticeTextStyle *pObjectX = (EarthView::World::Graphic::CLatticeTextStyle*) pObjXXXX;
				pObjectX->setUnderline(bUnderline);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_LatticeTextStyle_setStrikeOut_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean bStrikeOut_j)
			{
				ev_bool bStrikeOut = (ev_bool) bStrikeOut_j;
				EarthView::World::Graphic::CLatticeTextStyle *pObjectX = (EarthView::World::Graphic::CLatticeTextStyle*) pObjXXXX;
				pObjectX->setStrikeOut(bStrikeOut);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_LatticeTextStyle_setBold_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean bBold_j)
			{
				ev_bool bBold = (ev_bool) bBold_j;
				EarthView::World::Graphic::CLatticeTextStyle *pObjectX = (EarthView::World::Graphic::CLatticeTextStyle*) pObjXXXX;
				pObjectX->setBold(bBold);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_LatticeTextStyle_setItalic_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean bItalic_j)
			{
				ev_bool bItalic = (ev_bool) bItalic_j;
				EarthView::World::Graphic::CLatticeTextStyle *pObjectX = (EarthView::World::Graphic::CLatticeTextStyle*) pObjXXXX;
				pObjectX->setItalic(bItalic);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_LatticeTextStyle_setFont_1EarthView_1World_1Core_1ev_1string(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring fontFamily_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* fontFamily_ch = (const ev_char*)__env->GetStringUTFChars(fontFamily_j,JNI_FALSE);
				const EarthView::World::Core::ev_string fontFamily = fontFamily_ch;
				__env->ReleaseStringUTFChars(fontFamily_j, (const char *)fontFamily_ch);
				#else
				const ev_wchar* fontFamily_ch = (const ev_wchar*)__env->GetStringChars(fontFamily_j,JNI_FALSE);
				const EarthView::World::Core::ev_string fontFamily = fontFamily_ch;
				__env->ReleaseStringChars(fontFamily_j, (const jchar *)fontFamily_ch);
				#endif
				EarthView::World::Graphic::CLatticeTextStyle *pObjectX = (EarthView::World::Graphic::CLatticeTextStyle*) pObjXXXX;
				pObjectX->setFont(fontFamily);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_LatticeTextStyle_setFontSize_1ev_1byte(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jshort size_j)
			{
				ev_byte size = (ev_byte) size_j;
				EarthView::World::Graphic::CLatticeTextStyle *pObjectX = (EarthView::World::Graphic::CLatticeTextStyle*) pObjXXXX;
				pObjectX->setFontSize(size);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_LatticeTextStyle_setTransparence_1ev_1real32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jfloat rate_j)
			{
				ev_real32 rate = (ev_real32) rate_j;
				EarthView::World::Graphic::CLatticeTextStyle *pObjectX = (EarthView::World::Graphic::CLatticeTextStyle*) pObjXXXX;
				pObjectX->setTransparence(rate);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_LatticeTextStyle_setShadeMode_1EShadeMode(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint mode_j)
			{
				EarthView::World::Graphic::CLatticeTextStyle::EShadeMode mode = (EarthView::World::Graphic::CLatticeTextStyle::EShadeMode) mode_j;
				EarthView::World::Graphic::CLatticeTextStyle *pObjectX = (EarthView::World::Graphic::CLatticeTextStyle*) pObjXXXX;
				pObjectX->setShadeMode(mode);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_LatticeTextStyle_toDefaultVal_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CLatticeTextStyle *pObjectX = (EarthView::World::Graphic::CLatticeTextStyle*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCLatticeTextStyleProxy))
				{
					pObjectX->EarthView::World::Graphic::CLatticeTextStyle::toDefaultVal();
				}
				else
				{
					pObjectX->toDefaultVal();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_LatticeTextStyle_register_1toDefaultVal_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCLatticeTextStyleProxy *pObjectX = (JCLatticeTextStyleProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_toDefaultVal_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"toDefaultVal_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_LatticeTextStyle_toDefaultVal_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CLatticeTextStyle *pObjectX = (EarthView::World::Graphic::CLatticeTextStyle*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CLatticeTextStyle::toDefaultVal();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_LatticeTextStyle_create_1void(JNIEnv *__env , jclass __clazz)
			{
				EarthView::World::Graphic::CLatticeTextStyle* __values1 = EarthView::World::Graphic::CLatticeTextStyle::create();
				if(__values1 != NULL) {					((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
				}				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_LatticeTextStyle_create_1EarthView_1World_1Core_1ev_1string_1ev_1byte_1CColourValue(JNIEnv *__env , jclass __clazz, jstring fontFamily_j, jshort fontSize_j, jlong color_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* fontFamily_ch = (const ev_char*)__env->GetStringUTFChars(fontFamily_j,JNI_FALSE);
				const EarthView::World::Core::ev_string fontFamily = fontFamily_ch;
				__env->ReleaseStringUTFChars(fontFamily_j, (const char *)fontFamily_ch);
				#else
				const ev_wchar* fontFamily_ch = (const ev_wchar*)__env->GetStringChars(fontFamily_j,JNI_FALSE);
				const EarthView::World::Core::ev_string fontFamily = fontFamily_ch;
				__env->ReleaseStringChars(fontFamily_j, (const jchar *)fontFamily_ch);
				#endif
				ev_byte fontSize = (ev_byte) fontSize_j;
				const EarthView::World::Graphic::CColourValue &color = *(EarthView::World::Graphic::CColourValue*) color_j;
				EarthView::World::Graphic::CLatticeTextStyle* __values1 = EarthView::World::Graphic::CLatticeTextStyle::create(fontFamily, fontSize, color);
				if(__values1 != NULL) {					((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
				}				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_LatticeTextStyle_destroy_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CLatticeTextStyle *pObjectX = (EarthView::World::Graphic::CLatticeTextStyle*) pObjXXXX;
				pObjectX->destroy();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_LatticeTextStyle_getRGB_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CLatticeTextStyle *pObjectX = (EarthView::World::Graphic::CLatticeTextStyle*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getRGB();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_LatticeTextStyle_getColor_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CLatticeTextStyle *pObjectX = (EarthView::World::Graphic::CLatticeTextStyle*) pObjXXXX;
				EarthView::World::Graphic::CColourValue __values1 = pObjectX->getColor();
				EarthView::World::Graphic::CColourValue *returnvalues = new EarthView::World::Graphic::CColourValue(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_LatticeTextStyle_isUnderline_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CLatticeTextStyle *pObjectX = (EarthView::World::Graphic::CLatticeTextStyle*) pObjXXXX;
				ev_bool __values1 = pObjectX->isUnderline();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_LatticeTextStyle_isStrikeOut_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CLatticeTextStyle *pObjectX = (EarthView::World::Graphic::CLatticeTextStyle*) pObjXXXX;
				ev_bool __values1 = pObjectX->isStrikeOut();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_LatticeTextStyle_isBold_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CLatticeTextStyle *pObjectX = (EarthView::World::Graphic::CLatticeTextStyle*) pObjXXXX;
				ev_bool __values1 = pObjectX->isBold();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_LatticeTextStyle_isItalic_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CLatticeTextStyle *pObjectX = (EarthView::World::Graphic::CLatticeTextStyle*) pObjXXXX;
				ev_bool __values1 = pObjectX->isItalic();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_LatticeTextStyle_getFont_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CLatticeTextStyle *pObjectX = (EarthView::World::Graphic::CLatticeTextStyle*) pObjXXXX;
				ev_uint16 __values1 = pObjectX->getFont();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jshort JNICALL Java_com_earthview_world_graphic_LatticeTextStyle_getFontSize_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CLatticeTextStyle *pObjectX = (EarthView::World::Graphic::CLatticeTextStyle*) pObjXXXX;
				ev_byte __values1 = pObjectX->getFontSize();
				jshort __values1_j = (jshort) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_graphic_LatticeTextStyle_getTransparence_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CLatticeTextStyle *pObjectX = (EarthView::World::Graphic::CLatticeTextStyle*) pObjXXXX;
				ev_real32 __values1 = pObjectX->getTransparence();
				jfloat __values1_j = (jfloat)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_LatticeTextStyle_getKey_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CLatticeTextStyle *pObjectX = (EarthView::World::Graphic::CLatticeTextStyle*) pObjXXXX;
				const ev_int64& __values1 = pObjectX->getKey();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
		}
	}
}
