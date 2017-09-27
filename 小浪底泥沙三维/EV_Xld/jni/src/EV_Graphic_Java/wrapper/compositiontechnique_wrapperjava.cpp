/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/compositiontechnique.h"
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
			class JCCompositionTechniqueProxy : public EarthView::World::Graphic::CCompositionTechnique
			{
			 private:
				EarthView::World::Core::ev_string m_isSupported_ev_bool_callback;
				EarthView::World::Core::ev_string m_setSchemeName_EVString_callback;
			public:
				JCCompositionTechniqueProxy(EarthView::World::Core::CNameValuePairList *pList) : CCompositionTechnique(pList)
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
				void register_isSupported_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_isSupported_ev_bool_callback = __method;
				}
				void register_setSchemeName_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setSchemeName_EVString_callback = __method;
				}
				virtual ev_bool isSupported(ev_bool allowTextureDegradation)
				{
					if (this->_gRef != NULL && this->m_isSupported_ev_bool_callback != "" && this->isCustomExtend())
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
						jboolean allowTextureDegradation_j = (jboolean) allowTextureDegradation;
						jmethodID __method = __gr->getMethod("isSupported_ev_bool_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , allowTextureDegradation_j);
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
						return this->CCompositionTechnique::isSupported(allowTextureDegradation);
					}
				}
				virtual void setSchemeName(const EVString& schemeName)
				{
					if (this->_gRef != NULL && this->m_setSchemeName_EVString_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring schemeName_wch = schemeName;
						jstring schemeName_j = __env->NewString((const jchar*)schemeName_wch.getString(), schemeName_wch.size());
						jmethodID __method = __gr->getMethod("setSchemeName_EVString_callback");
						__env->CallVoidMethod(__obj, __method , schemeName_j);
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
						return this->CCompositionTechnique::setSchemeName(schemeName);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCCompositionTechniqueProxy);
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_graphic_CompositionTechnique_00024TextureScopeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					CCompositionTechnique::TS_LOCAL,
					CCompositionTechnique::TS_CHAIN,
					CCompositionTechnique::TS_GLOBAL
				};
				jintArray array = __env->NewIntArray(3);
				__env->SetIntArrayRegion(array, 0, 3, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_CompositionTechnique_00024TextureDefinition_get_1name_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition *pObjectX = (EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition*)pObjXXXX;
				EarthView::World::Core::ev_wstring __values1_ch = pObjectX->name;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositionTechnique_00024TextureDefinition_set_1name_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
			{
				EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition *pObjectX = (EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition*)pObjXXXX;
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				pObjectX->name = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_CompositionTechnique_00024TextureDefinition_get_1refCompName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition *pObjectX = (EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition*)pObjXXXX;
				EarthView::World::Core::ev_wstring __values1_ch = pObjectX->refCompName;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositionTechnique_00024TextureDefinition_set_1refCompName_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
			{
				EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition *pObjectX = (EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition*)pObjXXXX;
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				pObjectX->refCompName = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_CompositionTechnique_00024TextureDefinition_get_1refTexName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition *pObjectX = (EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition*)pObjXXXX;
				EarthView::World::Core::ev_wstring __values1_ch = pObjectX->refTexName;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositionTechnique_00024TextureDefinition_set_1refTexName_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
			{
				EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition *pObjectX = (EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition*)pObjXXXX;
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				pObjectX->refTexName = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CompositionTechnique_00024TextureDefinition_get_1width_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition *pObjectX = (EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition*)pObjXXXX;
				jlong __values1_j = (jlong) (pObjectX->width);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositionTechnique_00024TextureDefinition_set_1width_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition *pObjectX = (EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition*)pObjXXXX;
				pObjectX->width = (ev_size_t)__values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CompositionTechnique_00024TextureDefinition_get_1height_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition *pObjectX = (EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition*)pObjXXXX;
				jlong __values1_j = (jlong) (pObjectX->height);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositionTechnique_00024TextureDefinition_set_1height_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition *pObjectX = (EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition*)pObjXXXX;
				pObjectX->height = (ev_size_t)__values1_j;
			}
			extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_graphic_CompositionTechnique_00024TextureDefinition_get_1widthFactor_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition *pObjectX = (EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition*)pObjXXXX;
				jfloat __values1_j = (jfloat)(pObjectX->widthFactor);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositionTechnique_00024TextureDefinition_set_1widthFactor_1ev_1real32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jfloat __values1_j)
			{
				EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition *pObjectX = (EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition*)pObjXXXX;
				pObjectX->widthFactor = (ev_real32)__values1_j;
			}
			extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_graphic_CompositionTechnique_00024TextureDefinition_get_1heightFactor_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition *pObjectX = (EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition*)pObjXXXX;
				jfloat __values1_j = (jfloat)(pObjectX->heightFactor);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositionTechnique_00024TextureDefinition_set_1heightFactor_1ev_1real32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jfloat __values1_j)
			{
				EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition *pObjectX = (EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition*)pObjXXXX;
				pObjectX->heightFactor = (ev_real32)__values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CompositionTechnique_00024TextureDefinition_get_1formatList_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition *pObjectX = (EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->formatList);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositionTechnique_00024TextureDefinition_set_1formatList_1PixelFormatList(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition *pObjectX = (EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition*)pObjXXXX;
				pObjectX->formatList = *(EarthView::World::Graphic::PixelFormatList*) __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_CompositionTechnique_00024TextureDefinition_get_1fsaa_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition *pObjectX = (EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition*)pObjXXXX;
				jboolean __values1_j = (jboolean)(pObjectX->fsaa);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositionTechnique_00024TextureDefinition_set_1fsaa_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
			{
				EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition *pObjectX = (EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition*)pObjXXXX;
				pObjectX->fsaa = (ev_bool)__values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_CompositionTechnique_00024TextureDefinition_get_1hwGammaWrite_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition *pObjectX = (EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition*)pObjXXXX;
				jboolean __values1_j = (jboolean)(pObjectX->hwGammaWrite);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositionTechnique_00024TextureDefinition_set_1hwGammaWrite_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
			{
				EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition *pObjectX = (EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition*)pObjXXXX;
				pObjectX->hwGammaWrite = (ev_bool)__values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_CompositionTechnique_00024TextureDefinition_get_1depthBufferId_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition *pObjectX = (EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition*)pObjXXXX;
				jint __values1_j = (jint) (pObjectX->depthBufferId);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositionTechnique_00024TextureDefinition_set_1depthBufferId_1ev_1uint16(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
			{
				EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition *pObjectX = (EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition*)pObjXXXX;
				pObjectX->depthBufferId = (ev_uint16)__values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_CompositionTechnique_00024TextureDefinition_get_1pooled_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition *pObjectX = (EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition*)pObjXXXX;
				jboolean __values1_j = (jboolean)(pObjectX->pooled);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositionTechnique_00024TextureDefinition_set_1pooled_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
			{
				EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition *pObjectX = (EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition*)pObjXXXX;
				pObjectX->pooled = (ev_bool)__values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_CompositionTechnique_00024TextureDefinition_get_1scope_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition *pObjectX = (EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition*)pObjXXXX;
				jint __values1_j = (jint)(pObjectX->scope);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositionTechnique_00024TextureDefinition_set_1scope_1TextureScope(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
			{
				EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition *pObjectX = (EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition*)pObjXXXX;
				pObjectX->scope = (EarthView::World::Graphic::CCompositionTechnique::TextureScope)__values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositionTechnique_00024TargetPasses_push_1back_1CCompositionTargetPass(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_t_j)
			{
				EarthView::World::Graphic::CCompositionTargetPass *&ref_t = *(EarthView::World::Graphic::CCompositionTargetPass**) ref_t_j;
				EarthView::World::Graphic::CCompositionTechnique::TargetPasses *pObjectX = (EarthView::World::Graphic::CCompositionTechnique::TargetPasses*) pObjXXXX;
				pObjectX->push_back(ref_t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositionTechnique_00024TargetPasses_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_size_t pos = (ev_size_t) pos_j;
				EarthView::World::Graphic::CCompositionTechnique::TargetPasses *pObjectX = (EarthView::World::Graphic::CCompositionTechnique::TargetPasses*) pObjXXXX;
				pObjectX->remove(pos);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_CompositionTechnique_00024TargetPasses_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CCompositionTechnique::TargetPasses *pObjectX = (EarthView::World::Graphic::CCompositionTechnique::TargetPasses*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CompositionTechnique_00024TargetPasses_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong n_j )
			{
				EarthView::World::Graphic::CCompositionTechnique::TargetPasses& pObjectX = *(EarthView::World::Graphic::CCompositionTechnique::TargetPasses*) pObjXXXX;
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Graphic::CCompositionTargetPass*& __values1 = pObjectX[n];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CompositionTechnique_00024TargetPasses_at_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
			{
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Graphic::CCompositionTechnique::TargetPasses *pObjectX = (EarthView::World::Graphic::CCompositionTechnique::TargetPasses*) pObjXXXX;
				EarthView::World::Graphic::CCompositionTargetPass*& __values1 = pObjectX->at(n);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CompositionTechnique_00024TargetPasses_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CCompositionTechnique::TargetPasses *pObjectX = (EarthView::World::Graphic::CCompositionTechnique::TargetPasses*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositionTechnique_00024TargetPasses_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
			{
				ev_size_t newSize = (ev_size_t) newSize_j;
				EarthView::World::Graphic::CCompositionTechnique::TargetPasses *pObjectX = (EarthView::World::Graphic::CCompositionTechnique::TargetPasses*) pObjXXXX;
				pObjectX->resize(newSize);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositionTechnique_00024TargetPasses_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
			{
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Graphic::CCompositionTechnique::TargetPasses *pObjectX = (EarthView::World::Graphic::CCompositionTechnique::TargetPasses*) pObjXXXX;
				pObjectX->reserve(count);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositionTechnique_00024TargetPasses_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCompositionTechnique::TargetPasses *pObjectX = (EarthView::World::Graphic::CCompositionTechnique::TargetPasses*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_CompositionTechnique_00024TargetPassIterator_hasMoreElements_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CCompositionTechnique::TargetPassIterator *pObjectX = (EarthView::World::Graphic::CCompositionTechnique::TargetPassIterator*) pObjXXXX;
				ev_bool __values1 = pObjectX->hasMoreElements();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositionTechnique_00024TargetPassIterator_moveNext_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCompositionTechnique::TargetPassIterator *pObjectX = (EarthView::World::Graphic::CCompositionTechnique::TargetPassIterator*) pObjXXXX;
				pObjectX->moveNext();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CompositionTechnique_00024TargetPassIterator_getCurrent_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCompositionTechnique::TargetPassIterator *pObjectX = (EarthView::World::Graphic::CCompositionTechnique::TargetPassIterator*) pObjXXXX;
				EarthView::World::Graphic::CCompositionTargetPass* __values1 = pObjectX->getCurrent();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CompositionTechnique_00024TargetPassIterator_next_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCompositionTechnique::TargetPassIterator *pObjectX = (EarthView::World::Graphic::CCompositionTechnique::TargetPassIterator*) pObjXXXX;
				EarthView::World::Graphic::CCompositionTargetPass* __values1 = pObjectX->next();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CompositionTechnique_00024TargetPassIterator_getBegin_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCompositionTechnique::TargetPassIterator *pObjectX = (EarthView::World::Graphic::CCompositionTechnique::TargetPassIterator*) pObjXXXX;
				EarthView::World::Graphic::CCompositionTargetPass* __values1 = pObjectX->getBegin();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CompositionTechnique_00024TargetPassIterator_getEnd_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCompositionTechnique::TargetPassIterator *pObjectX = (EarthView::World::Graphic::CCompositionTechnique::TargetPassIterator*) pObjXXXX;
				EarthView::World::Graphic::CCompositionTargetPass* __values1 = pObjectX->getEnd();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositionTechnique_00024TextureDefinitions_push_1back_1CTextureDefinition(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_t_j)
			{
				EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition *&ref_t = *(EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition**) ref_t_j;
				EarthView::World::Graphic::CCompositionTechnique::TextureDefinitions *pObjectX = (EarthView::World::Graphic::CCompositionTechnique::TextureDefinitions*) pObjXXXX;
				pObjectX->push_back(ref_t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositionTechnique_00024TextureDefinitions_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_size_t pos = (ev_size_t) pos_j;
				EarthView::World::Graphic::CCompositionTechnique::TextureDefinitions *pObjectX = (EarthView::World::Graphic::CCompositionTechnique::TextureDefinitions*) pObjXXXX;
				pObjectX->remove(pos);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_CompositionTechnique_00024TextureDefinitions_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CCompositionTechnique::TextureDefinitions *pObjectX = (EarthView::World::Graphic::CCompositionTechnique::TextureDefinitions*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CompositionTechnique_00024TextureDefinitions_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong n_j )
			{
				EarthView::World::Graphic::CCompositionTechnique::TextureDefinitions& pObjectX = *(EarthView::World::Graphic::CCompositionTechnique::TextureDefinitions*) pObjXXXX;
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition*& __values1 = pObjectX[n];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CompositionTechnique_00024TextureDefinitions_at_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
			{
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Graphic::CCompositionTechnique::TextureDefinitions *pObjectX = (EarthView::World::Graphic::CCompositionTechnique::TextureDefinitions*) pObjXXXX;
				EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition*& __values1 = pObjectX->at(n);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CompositionTechnique_00024TextureDefinitions_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CCompositionTechnique::TextureDefinitions *pObjectX = (EarthView::World::Graphic::CCompositionTechnique::TextureDefinitions*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositionTechnique_00024TextureDefinitions_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
			{
				ev_size_t newSize = (ev_size_t) newSize_j;
				EarthView::World::Graphic::CCompositionTechnique::TextureDefinitions *pObjectX = (EarthView::World::Graphic::CCompositionTechnique::TextureDefinitions*) pObjXXXX;
				pObjectX->resize(newSize);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositionTechnique_00024TextureDefinitions_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
			{
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Graphic::CCompositionTechnique::TextureDefinitions *pObjectX = (EarthView::World::Graphic::CCompositionTechnique::TextureDefinitions*) pObjXXXX;
				pObjectX->reserve(count);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositionTechnique_00024TextureDefinitions_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCompositionTechnique::TextureDefinitions *pObjectX = (EarthView::World::Graphic::CCompositionTechnique::TextureDefinitions*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_CompositionTechnique_00024TextureDefinitionIterator_hasMoreElements_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CCompositionTechnique::TextureDefinitionIterator *pObjectX = (EarthView::World::Graphic::CCompositionTechnique::TextureDefinitionIterator*) pObjXXXX;
				ev_bool __values1 = pObjectX->hasMoreElements();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositionTechnique_00024TextureDefinitionIterator_moveNext_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCompositionTechnique::TextureDefinitionIterator *pObjectX = (EarthView::World::Graphic::CCompositionTechnique::TextureDefinitionIterator*) pObjXXXX;
				pObjectX->moveNext();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CompositionTechnique_00024TextureDefinitionIterator_getCurrent_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCompositionTechnique::TextureDefinitionIterator *pObjectX = (EarthView::World::Graphic::CCompositionTechnique::TextureDefinitionIterator*) pObjXXXX;
				EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition* __values1 = pObjectX->getCurrent();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CompositionTechnique_00024TextureDefinitionIterator_next_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCompositionTechnique::TextureDefinitionIterator *pObjectX = (EarthView::World::Graphic::CCompositionTechnique::TextureDefinitionIterator*) pObjXXXX;
				EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition* __values1 = pObjectX->next();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CompositionTechnique_00024TextureDefinitionIterator_getBegin_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCompositionTechnique::TextureDefinitionIterator *pObjectX = (EarthView::World::Graphic::CCompositionTechnique::TextureDefinitionIterator*) pObjXXXX;
				EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition* __values1 = pObjectX->getBegin();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CompositionTechnique_00024TextureDefinitionIterator_getEnd_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCompositionTechnique::TextureDefinitionIterator *pObjectX = (EarthView::World::Graphic::CCompositionTechnique::TextureDefinitionIterator*) pObjXXXX;
				EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition* __values1 = pObjectX->getEnd();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CompositionTechnique_createTextureDefinition_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Graphic::CCompositionTechnique *pObjectX = (EarthView::World::Graphic::CCompositionTechnique*) pObjXXXX;
				EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition* __values1 = pObjectX->createTextureDefinition(name);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositionTechnique_removeTextureDefinition_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong idx_j)
			{
				ev_size_t idx = (ev_size_t) idx_j;
				EarthView::World::Graphic::CCompositionTechnique *pObjectX = (EarthView::World::Graphic::CCompositionTechnique*) pObjXXXX;
				pObjectX->removeTextureDefinition(idx);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CompositionTechnique_getTextureDefinition_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong idx_j)
			{
				ev_size_t idx = (ev_size_t) idx_j;
				EarthView::World::Graphic::CCompositionTechnique *pObjectX = (EarthView::World::Graphic::CCompositionTechnique*) pObjXXXX;
				EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition* __values1 = pObjectX->getTextureDefinition(idx);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CompositionTechnique_getTextureDefinition_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Graphic::CCompositionTechnique *pObjectX = (EarthView::World::Graphic::CCompositionTechnique*) pObjXXXX;
				EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition* __values1 = pObjectX->getTextureDefinition(name);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CompositionTechnique_getNumTextureDefinitions_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCompositionTechnique *pObjectX = (EarthView::World::Graphic::CCompositionTechnique*) pObjXXXX;
				ev_size_t __values1 = pObjectX->getNumTextureDefinitions();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositionTechnique_removeAllTextureDefinitions_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCompositionTechnique *pObjectX = (EarthView::World::Graphic::CCompositionTechnique*) pObjXXXX;
				pObjectX->removeAllTextureDefinitions();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CompositionTechnique_getTextureDefinitionIterator_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCompositionTechnique *pObjectX = (EarthView::World::Graphic::CCompositionTechnique*) pObjXXXX;
				EarthView::World::Graphic::CCompositionTechnique::TextureDefinitionIterator __values1 = pObjectX->getTextureDefinitionIterator();
				EarthView::World::Graphic::CCompositionTechnique::TextureDefinitionIterator *returnvalues = new EarthView::World::Graphic::CCompositionTechnique::TextureDefinitionIterator(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CompositionTechnique_createTargetPass_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCompositionTechnique *pObjectX = (EarthView::World::Graphic::CCompositionTechnique*) pObjXXXX;
				EarthView::World::Graphic::CCompositionTargetPass* __values1 = pObjectX->createTargetPass();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositionTechnique_removeTargetPass_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong idx_j)
			{
				ev_size_t idx = (ev_size_t) idx_j;
				EarthView::World::Graphic::CCompositionTechnique *pObjectX = (EarthView::World::Graphic::CCompositionTechnique*) pObjXXXX;
				pObjectX->removeTargetPass(idx);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CompositionTechnique_getTargetPass_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong idx_j)
			{
				ev_size_t idx = (ev_size_t) idx_j;
				EarthView::World::Graphic::CCompositionTechnique *pObjectX = (EarthView::World::Graphic::CCompositionTechnique*) pObjXXXX;
				EarthView::World::Graphic::CCompositionTargetPass* __values1 = pObjectX->getTargetPass(idx);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CompositionTechnique_getNumTargetPasses_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCompositionTechnique *pObjectX = (EarthView::World::Graphic::CCompositionTechnique*) pObjXXXX;
				ev_size_t __values1 = pObjectX->getNumTargetPasses();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositionTechnique_removeAllTargetPasses_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCompositionTechnique *pObjectX = (EarthView::World::Graphic::CCompositionTechnique*) pObjXXXX;
				pObjectX->removeAllTargetPasses();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CompositionTechnique_getTargetPassIterator_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCompositionTechnique *pObjectX = (EarthView::World::Graphic::CCompositionTechnique*) pObjXXXX;
				EarthView::World::Graphic::CCompositionTechnique::TargetPassIterator __values1 = pObjectX->getTargetPassIterator();
				EarthView::World::Graphic::CCompositionTechnique::TargetPassIterator *returnvalues = new EarthView::World::Graphic::CCompositionTechnique::TargetPassIterator(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CompositionTechnique_getOutputTargetPass_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCompositionTechnique *pObjectX = (EarthView::World::Graphic::CCompositionTechnique*) pObjXXXX;
				EarthView::World::Graphic::CCompositionTargetPass* __values1 = pObjectX->getOutputTargetPass();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_CompositionTechnique_isSupported_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean allowTextureDegradation_j)
			{
				ev_bool allowTextureDegradation = (ev_bool) allowTextureDegradation_j;
				EarthView::World::Graphic::CCompositionTechnique *pObjectX = (EarthView::World::Graphic::CCompositionTechnique*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCCompositionTechniqueProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Graphic::CCompositionTechnique::isSupported(allowTextureDegradation);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->isSupported(allowTextureDegradation);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositionTechnique_register_1isSupported_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCCompositionTechniqueProxy *pObjectX = (JCCompositionTechniqueProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_isSupported_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"isSupported_ev_bool_callback", "(Z)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_CompositionTechnique_isSupported_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean allowTextureDegradation_j)
			{
				ev_bool allowTextureDegradation = (ev_bool) allowTextureDegradation_j;
				EarthView::World::Graphic::CCompositionTechnique *pObjectX = (EarthView::World::Graphic::CCompositionTechnique*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Graphic::CCompositionTechnique::isSupported(allowTextureDegradation);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositionTechnique_setSchemeName_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring schemeName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* schemeName_ch = (const ev_char*)__env->GetStringUTFChars(schemeName_j,JNI_FALSE);
				const EVString schemeName = schemeName_ch;
				__env->ReleaseStringUTFChars(schemeName_j, (const char *)schemeName_ch);
				#else
				const ev_wchar* schemeName_ch = (const ev_wchar*)__env->GetStringChars(schemeName_j,JNI_FALSE);
				const EVString schemeName = schemeName_ch;
				__env->ReleaseStringChars(schemeName_j, (const jchar *)schemeName_ch);
				#endif
				EarthView::World::Graphic::CCompositionTechnique *pObjectX = (EarthView::World::Graphic::CCompositionTechnique*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCCompositionTechniqueProxy))
				{
					pObjectX->EarthView::World::Graphic::CCompositionTechnique::setSchemeName(schemeName);
				}
				else
				{
					pObjectX->setSchemeName(schemeName);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositionTechnique_register_1setSchemeName_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCCompositionTechniqueProxy *pObjectX = (JCCompositionTechniqueProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setSchemeName_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setSchemeName_EVString_callback", "(Ljava/lang/String;)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositionTechnique_setSchemeName_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring schemeName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* schemeName_ch = (const ev_char*)__env->GetStringUTFChars(schemeName_j,JNI_FALSE);
				const EVString schemeName = schemeName_ch;
				__env->ReleaseStringUTFChars(schemeName_j, (const char *)schemeName_ch);
				#else
				const ev_wchar* schemeName_ch = (const ev_wchar*)__env->GetStringChars(schemeName_j,JNI_FALSE);
				const EVString schemeName = schemeName_ch;
				__env->ReleaseStringChars(schemeName_j, (const jchar *)schemeName_ch);
				#endif
				EarthView::World::Graphic::CCompositionTechnique *pObjectX = (EarthView::World::Graphic::CCompositionTechnique*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CCompositionTechnique::setSchemeName(schemeName);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CompositionTechnique_getSchemeName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CCompositionTechnique *pObjectX = (EarthView::World::Graphic::CCompositionTechnique*) pObjXXXX;
				const EVString& __values1 = pObjectX->getSchemeName();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CompositionTechnique_setCompositorLogicName_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring compositorLogicName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* compositorLogicName_ch = (const ev_char*)__env->GetStringUTFChars(compositorLogicName_j,JNI_FALSE);
				const EVString compositorLogicName = compositorLogicName_ch;
				__env->ReleaseStringUTFChars(compositorLogicName_j, (const char *)compositorLogicName_ch);
				#else
				const ev_wchar* compositorLogicName_ch = (const ev_wchar*)__env->GetStringChars(compositorLogicName_j,JNI_FALSE);
				const EVString compositorLogicName = compositorLogicName_ch;
				__env->ReleaseStringChars(compositorLogicName_j, (const jchar *)compositorLogicName_ch);
				#endif
				EarthView::World::Graphic::CCompositionTechnique *pObjectX = (EarthView::World::Graphic::CCompositionTechnique*) pObjXXXX;
				pObjectX->setCompositorLogicName(compositorLogicName);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CompositionTechnique_getCompositorLogicName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CCompositionTechnique *pObjectX = (EarthView::World::Graphic::CCompositionTechnique*) pObjXXXX;
				const EVString& __values1 = pObjectX->getCompositorLogicName();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CompositionTechnique_getParent_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCompositionTechnique *pObjectX = (EarthView::World::Graphic::CCompositionTechnique*) pObjXXXX;
				EarthView::World::Graphic::CCompositor* __values1 = pObjectX->getParent();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
		}
	}
}
