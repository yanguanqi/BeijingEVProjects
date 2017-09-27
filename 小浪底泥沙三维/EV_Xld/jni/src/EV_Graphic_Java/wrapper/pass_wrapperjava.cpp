/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/pass.h"
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
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_graphic_IlluminationStageHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					IS_AMBIENT,
					IS_PER_LIGHT,
					IS_DECAL,
					IS_UNKNOWN
				};
				jintArray array = __env->NewIntArray(4);
				__env->SetIntArrayRegion(array, 0, 4, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_graphic_RecompileMethodHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					CT_Recompile,
					CT_NoRecompile
				};
				jintArray array = __env->NewIntArray(2);
				__env->SetIntArrayRegion(array, 0, 2, enum_values);
				return array;
			}
			class JCPassProxy : public EarthView::World::Graphic::CPass
			{
			 private:
				EarthView::World::Core::ev_string m_setPolygonModeOverrideable_ev_bool_callback;
				EarthView::World::Core::ev_string m_getPolygonModeOverrideable_void_callback;
			public:
				JCPassProxy(EarthView::World::Core::CNameValuePairList *pList) : CPass(pList)
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
				void register_setPolygonModeOverrideable_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setPolygonModeOverrideable_ev_bool_callback = __method;
				}
				void register_getPolygonModeOverrideable_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getPolygonModeOverrideable_void_callback = __method;
				}
				virtual void setPolygonModeOverrideable(ev_bool val)
				{
					if (this->_gRef != NULL && this->m_setPolygonModeOverrideable_ev_bool_callback != "" && this->isCustomExtend())
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
						jboolean val_j = (jboolean) val;
						jmethodID __method = __gr->getMethod("setPolygonModeOverrideable_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , val_j);
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
						return this->CPass::setPolygonModeOverrideable(val);
					}
				}
				virtual ev_bool getPolygonModeOverrideable() const
				{
					if (this->_gRef != NULL && this->m_getPolygonModeOverrideable_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getPolygonModeOverrideable_void_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method );
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
						return this->CPass::getPolygonModeOverrideable();
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCPassProxy);
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass_00024TextureUnitStates_push_1back_1CTextureUnitState(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_t_j)
			{
				EarthView::World::Graphic::CTextureUnitState *&ref_t = *(EarthView::World::Graphic::CTextureUnitState**) ref_t_j;
				EarthView::World::Graphic::CPass::TextureUnitStates *pObjectX = (EarthView::World::Graphic::CPass::TextureUnitStates*) pObjXXXX;
				pObjectX->push_back(ref_t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass_00024TextureUnitStates_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_size_t pos = (ev_size_t) pos_j;
				EarthView::World::Graphic::CPass::TextureUnitStates *pObjectX = (EarthView::World::Graphic::CPass::TextureUnitStates*) pObjXXXX;
				pObjectX->remove(pos);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Pass_00024TextureUnitStates_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPass::TextureUnitStates *pObjectX = (EarthView::World::Graphic::CPass::TextureUnitStates*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Pass_00024TextureUnitStates_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong n_j )
			{
				EarthView::World::Graphic::CPass::TextureUnitStates& pObjectX = *(EarthView::World::Graphic::CPass::TextureUnitStates*) pObjXXXX;
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Graphic::CTextureUnitState*& __values1 = pObjectX[n];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Pass_00024TextureUnitStates_at_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
			{
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Graphic::CPass::TextureUnitStates *pObjectX = (EarthView::World::Graphic::CPass::TextureUnitStates*) pObjXXXX;
				EarthView::World::Graphic::CTextureUnitState*& __values1 = pObjectX->at(n);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Pass_00024TextureUnitStates_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPass::TextureUnitStates *pObjectX = (EarthView::World::Graphic::CPass::TextureUnitStates*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass_00024TextureUnitStates_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
			{
				ev_size_t newSize = (ev_size_t) newSize_j;
				EarthView::World::Graphic::CPass::TextureUnitStates *pObjectX = (EarthView::World::Graphic::CPass::TextureUnitStates*) pObjXXXX;
				pObjectX->resize(newSize);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass_00024TextureUnitStates_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
			{
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Graphic::CPass::TextureUnitStates *pObjectX = (EarthView::World::Graphic::CPass::TextureUnitStates*) pObjXXXX;
				pObjectX->reserve(count);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass_00024TextureUnitStates_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CPass::TextureUnitStates *pObjectX = (EarthView::World::Graphic::CPass::TextureUnitStates*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass_00024PassSet_insert_1CPass(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_val_j)
			{
				EarthView::World::Graphic::CPass *&ref_val = *(EarthView::World::Graphic::CPass**) ref_val_j;
				EarthView::World::Graphic::CPass::PassSet *pObjectX = (EarthView::World::Graphic::CPass::PassSet*) pObjXXXX;
				pObjectX->insert(ref_val);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Pass_00024PassSet_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CPass::PassSet *pObjectX = (EarthView::World::Graphic::CPass::PassSet*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Pass_00024PassSet_erase_1CPass(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong key_j)
			{
				EarthView::World::Graphic::CPass *&key = *(EarthView::World::Graphic::CPass**) key_j;
				EarthView::World::Graphic::CPass::PassSet *pObjectX = (EarthView::World::Graphic::CPass::PassSet*) pObjXXXX;
				ev_size_t __values1 = pObjectX->erase(key);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Pass_00024PassSet_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CPass::PassSet *pObjectX = (EarthView::World::Graphic::CPass::PassSet*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass_00024PassSet_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CPass::PassSet *pObjectX = (EarthView::World::Graphic::CPass::PassSet*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Pass_00024PassSet_count_1CPass(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong key_j)
			{
				EarthView::World::Graphic::CPass *&key = *(EarthView::World::Graphic::CPass**) key_j;
				EarthView::World::Graphic::CPass::PassSet *pObjectX = (EarthView::World::Graphic::CPass::PassSet*) pObjXXXX;
				ev_size_t __values1 = pObjectX->count(key);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Pass_00024PassSet_max_1size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CPass::PassSet *pObjectX = (EarthView::World::Graphic::CPass::PassSet*) pObjXXXX;
				ev_size_t __values1 = pObjectX->max_size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass_00024PassSet_swap_1PassSet(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong other_j)
			{
				EarthView::World::Graphic::CPass::PassSet &other = *(EarthView::World::Graphic::CPass::PassSet*) other_j;
				EarthView::World::Graphic::CPass::PassSet *pObjectX = (EarthView::World::Graphic::CPass::PassSet*) pObjXXXX;
				pObjectX->swap(other);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Pass_OperatorAssign_1CPass(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong oth_j )
			{
				EarthView::World::Graphic::CPass& pObjectX = *(EarthView::World::Graphic::CPass*) pObjXXXX;
				const EarthView::World::Graphic::CPass &oth = *(EarthView::World::Graphic::CPass*) oth_j;
				pObjectX = oth;
				EarthView::World::Graphic::CPass& __values1 = pObjectX;
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Pass_isProgrammable_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				ev_bool __values1 = pObjectX->isProgrammable();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Pass_hasVertexProgram_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				ev_bool __values1 = pObjectX->hasVertexProgram();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Pass_hasFragmentProgram_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				ev_bool __values1 = pObjectX->hasFragmentProgram();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Pass_hasGeometryProgram_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				ev_bool __values1 = pObjectX->hasGeometryProgram();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Pass_hasShadowCasterVertexProgram_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				ev_bool __values1 = pObjectX->hasShadowCasterVertexProgram();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Pass_hasShadowCasterFragmentProgram_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				bool __values1 = pObjectX->hasShadowCasterFragmentProgram();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Pass_hasShadowReceiverVertexProgram_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				ev_bool __values1 = pObjectX->hasShadowReceiverVertexProgram();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Pass_hasShadowReceiverFragmentProgram_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				ev_bool __values1 = pObjectX->hasShadowReceiverFragmentProgram();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_Pass_getIndex_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				ev_uint16 __values1 = pObjectX->getIndex();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass_setName_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				pObjectX->setName(name);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Pass_getName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				const EVString& __values1 = pObjectX->getName();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass_setAmbient_1Real_1Real_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble red_j, jdouble green_j, jdouble blue_j)
			{
				Real red = (Real) red_j;
				Real green = (Real) green_j;
				Real blue = (Real) blue_j;
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				pObjectX->setAmbient(red, green, blue);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass_setAmbient_1CColourValue(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ambient_j)
			{
				const EarthView::World::Graphic::CColourValue &ambient = *(EarthView::World::Graphic::CColourValue*) ambient_j;
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				pObjectX->setAmbient(ambient);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass_setDiffuse_1Real_1Real_1Real_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble red_j, jdouble green_j, jdouble blue_j, jdouble alpha_j)
			{
				Real red = (Real) red_j;
				Real green = (Real) green_j;
				Real blue = (Real) blue_j;
				Real alpha = (Real) alpha_j;
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				pObjectX->setDiffuse(red, green, blue, alpha);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass_setDiffuse_1CColourValue(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong diffuse_j)
			{
				const EarthView::World::Graphic::CColourValue &diffuse = *(EarthView::World::Graphic::CColourValue*) diffuse_j;
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				pObjectX->setDiffuse(diffuse);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass_setSpecular_1Real_1Real_1Real_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble red_j, jdouble green_j, jdouble blue_j, jdouble alpha_j)
			{
				Real red = (Real) red_j;
				Real green = (Real) green_j;
				Real blue = (Real) blue_j;
				Real alpha = (Real) alpha_j;
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				pObjectX->setSpecular(red, green, blue, alpha);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass_setSpecular_1CColourValue(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong specular_j)
			{
				const EarthView::World::Graphic::CColourValue &specular = *(EarthView::World::Graphic::CColourValue*) specular_j;
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				pObjectX->setSpecular(specular);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass_setShininess_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble val_j)
			{
				Real val = (Real) val_j;
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				pObjectX->setShininess(val);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass_setSelfIllumination_1Real_1Real_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble red_j, jdouble green_j, jdouble blue_j)
			{
				Real red = (Real) red_j;
				Real green = (Real) green_j;
				Real blue = (Real) blue_j;
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				pObjectX->setSelfIllumination(red, green, blue);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass_setSelfIllumination_1CColourValue(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong selfIllum_j)
			{
				const EarthView::World::Graphic::CColourValue &selfIllum = *(EarthView::World::Graphic::CColourValue*) selfIllum_j;
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				pObjectX->setSelfIllumination(selfIllum);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass_setEmissive_1Real_1Real_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble red_j, jdouble green_j, jdouble blue_j)
			{
				Real red = (Real) red_j;
				Real green = (Real) green_j;
				Real blue = (Real) blue_j;
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				pObjectX->setEmissive(red, green, blue);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass_setEmissive_1CColourValue(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong emissive_j)
			{
				const EarthView::World::Graphic::CColourValue &emissive = *(EarthView::World::Graphic::CColourValue*) emissive_j;
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				pObjectX->setEmissive(emissive);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass_setVertexColourTracking_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint tracking_j)
			{
				ev_int32 tracking = (ev_int32) tracking_j;
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				pObjectX->setVertexColourTracking(tracking);
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_Pass_getPointSize_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				Real __values1 = pObjectX->getPointSize();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass_setPointSize_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble ps_j)
			{
				Real ps = (Real) ps_j;
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				pObjectX->setPointSize(ps);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass_setPointSpritesEnabled_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enabled_j)
			{
				ev_bool enabled = (ev_bool) enabled_j;
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				pObjectX->setPointSpritesEnabled(enabled);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Pass_getPointSpritesEnabled_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				ev_bool __values1 = pObjectX->getPointSpritesEnabled();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass_setPointAttenuation_1ev_1bool_1Real_1Real_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enabled_j, jdouble constant_j, jdouble linear_j, jdouble quadratic_j)
			{
				ev_bool enabled = (ev_bool) enabled_j;
				Real constant = (Real) constant_j;
				Real linear = (Real) linear_j;
				Real quadratic = (Real) quadratic_j;
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				pObjectX->setPointAttenuation(enabled, constant, linear, quadratic);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass_setPointAttenuation_1ev_1bool_1Real_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enabled_j, jdouble constant_j, jdouble linear_j)
			{
				ev_bool enabled = (ev_bool) enabled_j;
				Real constant = (Real) constant_j;
				Real linear = (Real) linear_j;
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				pObjectX->setPointAttenuation(enabled, constant, linear);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass_setPointAttenuation_1ev_1bool_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enabled_j, jdouble constant_j)
			{
				ev_bool enabled = (ev_bool) enabled_j;
				Real constant = (Real) constant_j;
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				pObjectX->setPointAttenuation(enabled, constant);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass_setPointAttenuation_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enabled_j)
			{
				ev_bool enabled = (ev_bool) enabled_j;
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				pObjectX->setPointAttenuation(enabled);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Pass_isPointAttenuationEnabled_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				ev_bool __values1 = pObjectX->isPointAttenuationEnabled();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_Pass_getPointAttenuationConstant_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				Real __values1 = pObjectX->getPointAttenuationConstant();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_Pass_getPointAttenuationLinear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				Real __values1 = pObjectX->getPointAttenuationLinear();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_Pass_getPointAttenuationQuadratic_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				Real __values1 = pObjectX->getPointAttenuationQuadratic();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass_setPointMinSize_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble min_j)
			{
				Real min = (Real) min_j;
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				pObjectX->setPointMinSize(min);
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_Pass_getPointMinSize_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				Real __values1 = pObjectX->getPointMinSize();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass_setPointMaxSize_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble max_j)
			{
				Real max = (Real) max_j;
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				pObjectX->setPointMaxSize(max);
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_Pass_getPointMaxSize_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				Real __values1 = pObjectX->getPointMaxSize();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Pass_getAmbient_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				const EarthView::World::Graphic::CColourValue& __values1 = pObjectX->getAmbient();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Pass_getDiffuse_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				const EarthView::World::Graphic::CColourValue& __values1 = pObjectX->getDiffuse();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Pass_getSpecular_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				const EarthView::World::Graphic::CColourValue& __values1 = pObjectX->getSpecular();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Pass_getSelfIllumination_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				const EarthView::World::Graphic::CColourValue& __values1 = pObjectX->getSelfIllumination();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Pass_getEmissive_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				const EarthView::World::Graphic::CColourValue& __values1 = pObjectX->getEmissive();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_Pass_getShininess_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				Real __values1 = pObjectX->getShininess();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_Pass_getVertexColourTracking_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				ev_int32 __values1 = pObjectX->getVertexColourTracking();
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Pass_createTextureUnitState_1RecompileMethod(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint recompile_j)
			{
				EarthView::World::Graphic::RecompileMethod recompile = (EarthView::World::Graphic::RecompileMethod) recompile_j;
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				EarthView::World::Graphic::CTextureUnitState* __values1 = pObjectX->createTextureUnitState(recompile);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Pass_createTextureUnitState_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				EarthView::World::Graphic::CTextureUnitState* __values1 = pObjectX->createTextureUnitState();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Pass_createTextureUnitState_1ev_1uint32_1RecompileMethod(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong toWhere_j, jint recompile_j)
			{
				ev_uint32 toWhere = (ev_uint32) toWhere_j;
				EarthView::World::Graphic::RecompileMethod recompile = (EarthView::World::Graphic::RecompileMethod) recompile_j;
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				EarthView::World::Graphic::CTextureUnitState* __values1 = pObjectX->createTextureUnitState(toWhere, recompile);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Pass_createTextureUnitState_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong toWhere_j)
			{
				ev_uint32 toWhere = (ev_uint32) toWhere_j;
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				EarthView::World::Graphic::CTextureUnitState* __values1 = pObjectX->createTextureUnitState(toWhere);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Pass_createTextureUnitState_1EVString_1ev_1uint16_1RecompileMethod(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring textureName_j, jint texCoordSet_j, jint recompile_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* textureName_ch = (const ev_char*)__env->GetStringUTFChars(textureName_j,JNI_FALSE);
				const EVString textureName = textureName_ch;
				__env->ReleaseStringUTFChars(textureName_j, (const char *)textureName_ch);
				#else
				const ev_wchar* textureName_ch = (const ev_wchar*)__env->GetStringChars(textureName_j,JNI_FALSE);
				const EVString textureName = textureName_ch;
				__env->ReleaseStringChars(textureName_j, (const jchar *)textureName_ch);
				#endif
				ev_uint16 texCoordSet = (ev_uint16) texCoordSet_j;
				EarthView::World::Graphic::RecompileMethod recompile = (EarthView::World::Graphic::RecompileMethod) recompile_j;
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				EarthView::World::Graphic::CTextureUnitState* __values1 = pObjectX->createTextureUnitState(textureName, texCoordSet, recompile);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Pass_createTextureUnitState_1EVString_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring textureName_j, jint texCoordSet_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* textureName_ch = (const ev_char*)__env->GetStringUTFChars(textureName_j,JNI_FALSE);
				const EVString textureName = textureName_ch;
				__env->ReleaseStringUTFChars(textureName_j, (const char *)textureName_ch);
				#else
				const ev_wchar* textureName_ch = (const ev_wchar*)__env->GetStringChars(textureName_j,JNI_FALSE);
				const EVString textureName = textureName_ch;
				__env->ReleaseStringChars(textureName_j, (const jchar *)textureName_ch);
				#endif
				ev_uint16 texCoordSet = (ev_uint16) texCoordSet_j;
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				EarthView::World::Graphic::CTextureUnitState* __values1 = pObjectX->createTextureUnitState(textureName, texCoordSet);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Pass_createTextureUnitState_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring textureName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* textureName_ch = (const ev_char*)__env->GetStringUTFChars(textureName_j,JNI_FALSE);
				const EVString textureName = textureName_ch;
				__env->ReleaseStringUTFChars(textureName_j, (const char *)textureName_ch);
				#else
				const ev_wchar* textureName_ch = (const ev_wchar*)__env->GetStringChars(textureName_j,JNI_FALSE);
				const EVString textureName = textureName_ch;
				__env->ReleaseStringChars(textureName_j, (const jchar *)textureName_ch);
				#endif
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				EarthView::World::Graphic::CTextureUnitState* __values1 = pObjectX->createTextureUnitState(textureName);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass_addTextureUnitState_1CTextureUnitState_1RecompileMethod(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong state_j, jint recompile_j)
			{
				EarthView::World::Graphic::CTextureUnitState *state = (EarthView::World::Graphic::CTextureUnitState*) state_j;
				EarthView::World::Graphic::RecompileMethod recompile = (EarthView::World::Graphic::RecompileMethod) recompile_j;
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				pObjectX->addTextureUnitState(state, recompile);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass_addTextureUnitState_1CTextureUnitState(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong state_j)
			{
				EarthView::World::Graphic::CTextureUnitState *state = (EarthView::World::Graphic::CTextureUnitState*) state_j;
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				pObjectX->addTextureUnitState(state);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass_insertTextureUnitState_1CTextureUnitState_1ev_1uint32_1RecompileMethod(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong state_j, jlong toWhere_j, jint recompile_j)
			{
				EarthView::World::Graphic::CTextureUnitState *state = (EarthView::World::Graphic::CTextureUnitState*) state_j;
				ev_uint32 toWhere = (ev_uint32) toWhere_j;
				EarthView::World::Graphic::RecompileMethod recompile = (EarthView::World::Graphic::RecompileMethod) recompile_j;
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				pObjectX->insertTextureUnitState(state, toWhere, recompile);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass_insertTextureUnitState_1CTextureUnitState_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong state_j, jlong toWhere_j)
			{
				EarthView::World::Graphic::CTextureUnitState *state = (EarthView::World::Graphic::CTextureUnitState*) state_j;
				ev_uint32 toWhere = (ev_uint32) toWhere_j;
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				pObjectX->insertTextureUnitState(state, toWhere);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Pass_getTextureUnitState_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint index_j)
			{
				ev_uint16 index = (ev_uint16) index_j;
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				EarthView::World::Graphic::CTextureUnitState* __values1 = pObjectX->getTextureUnitState(index);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Pass_getTextureUnitState_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				EarthView::World::Graphic::CTextureUnitState* __values1 = pObjectX->getTextureUnitState(name);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_Pass_getTextureUnitStateIndex_1CTextureUnitState(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong state_j)
			{
				const EarthView::World::Graphic::CTextureUnitState *state = (const EarthView::World::Graphic::CTextureUnitState*) state_j;
				const 				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				ev_uint16 __values1 = pObjectX->getTextureUnitStateIndex(state);
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Pass_00024TextureUnitStateIterator_hasMoreElements_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPass::TextureUnitStateIterator *pObjectX = (EarthView::World::Graphic::CPass::TextureUnitStateIterator*) pObjXXXX;
				ev_bool __values1 = pObjectX->hasMoreElements();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass_00024TextureUnitStateIterator_moveNext_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CPass::TextureUnitStateIterator *pObjectX = (EarthView::World::Graphic::CPass::TextureUnitStateIterator*) pObjXXXX;
				pObjectX->moveNext();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Pass_00024TextureUnitStateIterator_getCurrent_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CPass::TextureUnitStateIterator *pObjectX = (EarthView::World::Graphic::CPass::TextureUnitStateIterator*) pObjXXXX;
				EarthView::World::Graphic::CTextureUnitState* __values1 = pObjectX->getCurrent();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Pass_00024TextureUnitStateIterator_next_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CPass::TextureUnitStateIterator *pObjectX = (EarthView::World::Graphic::CPass::TextureUnitStateIterator*) pObjXXXX;
				EarthView::World::Graphic::CTextureUnitState* __values1 = pObjectX->next();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Pass_00024TextureUnitStateIterator_getBegin_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CPass::TextureUnitStateIterator *pObjectX = (EarthView::World::Graphic::CPass::TextureUnitStateIterator*) pObjXXXX;
				EarthView::World::Graphic::CTextureUnitState* __values1 = pObjectX->getBegin();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Pass_00024TextureUnitStateIterator_getEnd_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CPass::TextureUnitStateIterator *pObjectX = (EarthView::World::Graphic::CPass::TextureUnitStateIterator*) pObjXXXX;
				EarthView::World::Graphic::CTextureUnitState* __values1 = pObjectX->getEnd();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Pass_00024ConstTextureUnitStateIterator_hasMoreElements_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPass::ConstTextureUnitStateIterator *pObjectX = (EarthView::World::Graphic::CPass::ConstTextureUnitStateIterator*) pObjXXXX;
				ev_bool __values1 = pObjectX->hasMoreElements();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass_00024ConstTextureUnitStateIterator_moveNext_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CPass::ConstTextureUnitStateIterator *pObjectX = (EarthView::World::Graphic::CPass::ConstTextureUnitStateIterator*) pObjXXXX;
				pObjectX->moveNext();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Pass_00024ConstTextureUnitStateIterator_getCurrent_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CPass::ConstTextureUnitStateIterator *pObjectX = (EarthView::World::Graphic::CPass::ConstTextureUnitStateIterator*) pObjXXXX;
				const EarthView::World::Graphic::CTextureUnitState* __values1 = pObjectX->getCurrent();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Pass_00024ConstTextureUnitStateIterator_next_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CPass::ConstTextureUnitStateIterator *pObjectX = (EarthView::World::Graphic::CPass::ConstTextureUnitStateIterator*) pObjXXXX;
				const EarthView::World::Graphic::CTextureUnitState* __values1 = pObjectX->next();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Pass_00024ConstTextureUnitStateIterator_getBegin_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CPass::ConstTextureUnitStateIterator *pObjectX = (EarthView::World::Graphic::CPass::ConstTextureUnitStateIterator*) pObjXXXX;
				const EarthView::World::Graphic::CTextureUnitState* __values1 = pObjectX->getBegin();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Pass_00024ConstTextureUnitStateIterator_getEnd_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CPass::ConstTextureUnitStateIterator *pObjectX = (EarthView::World::Graphic::CPass::ConstTextureUnitStateIterator*) pObjXXXX;
				const EarthView::World::Graphic::CTextureUnitState* __values1 = pObjectX->getEnd();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Pass_getTextureUnitStateIterator_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				EarthView::World::Graphic::CPass::TextureUnitStateIterator __values1 = pObjectX->getTextureUnitStateIterator();
				EarthView::World::Graphic::CPass::TextureUnitStateIterator *returnvalues = new EarthView::World::Graphic::CPass::TextureUnitStateIterator(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass_removeTextureUnitState_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint index_j)
			{
				ev_uint16 index = (ev_uint16) index_j;
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				pObjectX->removeTextureUnitState(index);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass_removeTextureUnitState_1ev_1uint16_1RecompileMethod(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint index_j, jint recompile_j)
			{
				ev_uint16 index = (ev_uint16) index_j;
				EarthView::World::Graphic::RecompileMethod recompile = (EarthView::World::Graphic::RecompileMethod) recompile_j;
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				pObjectX->removeTextureUnitState(index, recompile);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass_removeAllTextureUnitStates_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				pObjectX->removeAllTextureUnitStates();
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_Pass_getNumTextureUnitStates_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				ev_uint16 __values1 = pObjectX->getNumTextureUnitStates();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass_setSceneBlending_1SceneBlendType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint sbt_j)
			{
				const EarthView::World::Graphic::SceneBlendType sbt = (EarthView::World::Graphic::SceneBlendType) sbt_j;
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				pObjectX->setSceneBlending(sbt);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass_setSeparateSceneBlending_1SceneBlendType_1SceneBlendType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint sbt_j, jint sbta_j)
			{
				const EarthView::World::Graphic::SceneBlendType sbt = (EarthView::World::Graphic::SceneBlendType) sbt_j;
				const EarthView::World::Graphic::SceneBlendType sbta = (EarthView::World::Graphic::SceneBlendType) sbta_j;
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				pObjectX->setSeparateSceneBlending(sbt, sbta);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass_setSceneBlending_1SceneBlendFactor_1SceneBlendFactor(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint sourceFactor_j, jint destFactor_j)
			{
				const EarthView::World::Graphic::SceneBlendFactor sourceFactor = (EarthView::World::Graphic::SceneBlendFactor) sourceFactor_j;
				const EarthView::World::Graphic::SceneBlendFactor destFactor = (EarthView::World::Graphic::SceneBlendFactor) destFactor_j;
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				pObjectX->setSceneBlending(sourceFactor, destFactor);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass_setSeparateSceneBlending_1SceneBlendFactor_1SceneBlendFactor_1SceneBlendFactor_1SceneBlendFactor(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint sourceFactor_j, jint destFactor_j, jint sourceFactorAlpha_j, jint destFactorAlpha_j)
			{
				const EarthView::World::Graphic::SceneBlendFactor sourceFactor = (EarthView::World::Graphic::SceneBlendFactor) sourceFactor_j;
				const EarthView::World::Graphic::SceneBlendFactor destFactor = (EarthView::World::Graphic::SceneBlendFactor) destFactor_j;
				const EarthView::World::Graphic::SceneBlendFactor sourceFactorAlpha = (EarthView::World::Graphic::SceneBlendFactor) sourceFactorAlpha_j;
				const EarthView::World::Graphic::SceneBlendFactor destFactorAlpha = (EarthView::World::Graphic::SceneBlendFactor) destFactorAlpha_j;
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				pObjectX->setSeparateSceneBlending(sourceFactor, destFactor, sourceFactorAlpha, destFactorAlpha);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Pass_hasSeparateSceneBlending_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				ev_bool __values1 = pObjectX->hasSeparateSceneBlending();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_Pass_getSourceBlendFactor_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				EarthView::World::Graphic::SceneBlendFactor __values1 = pObjectX->getSourceBlendFactor();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_Pass_getDestBlendFactor_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				EarthView::World::Graphic::SceneBlendFactor __values1 = pObjectX->getDestBlendFactor();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_Pass_getSourceBlendFactorAlpha_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				EarthView::World::Graphic::SceneBlendFactor __values1 = pObjectX->getSourceBlendFactorAlpha();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_Pass_getDestBlendFactorAlpha_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				EarthView::World::Graphic::SceneBlendFactor __values1 = pObjectX->getDestBlendFactorAlpha();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass_setSceneBlendingOperation_1SceneBlendOperation(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint op_j)
			{
				EarthView::World::Graphic::SceneBlendOperation op = (EarthView::World::Graphic::SceneBlendOperation) op_j;
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				pObjectX->setSceneBlendingOperation(op);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass_setSeparateSceneBlendingOperation_1SceneBlendOperation_1SceneBlendOperation(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint op_j, jint alphaOp_j)
			{
				EarthView::World::Graphic::SceneBlendOperation op = (EarthView::World::Graphic::SceneBlendOperation) op_j;
				EarthView::World::Graphic::SceneBlendOperation alphaOp = (EarthView::World::Graphic::SceneBlendOperation) alphaOp_j;
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				pObjectX->setSeparateSceneBlendingOperation(op, alphaOp);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Pass_hasSeparateSceneBlendingOperations_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				ev_bool __values1 = pObjectX->hasSeparateSceneBlendingOperations();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_Pass_getSceneBlendingOperation_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				EarthView::World::Graphic::SceneBlendOperation __values1 = pObjectX->getSceneBlendingOperation();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_Pass_getSceneBlendingOperationAlpha_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				EarthView::World::Graphic::SceneBlendOperation __values1 = pObjectX->getSceneBlendingOperationAlpha();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Pass_isTransparent_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				ev_bool __values1 = pObjectX->isTransparent();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass_setDepthCheckEnabled_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enabled_j)
			{
				ev_bool enabled = (ev_bool) enabled_j;
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				pObjectX->setDepthCheckEnabled(enabled);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Pass_getDepthCheckEnabled_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				ev_bool __values1 = pObjectX->getDepthCheckEnabled();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass_setDepthWriteEnabled_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enabled_j)
			{
				ev_bool enabled = (ev_bool) enabled_j;
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				pObjectX->setDepthWriteEnabled(enabled);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Pass_getDepthWriteEnabled_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				ev_bool __values1 = pObjectX->getDepthWriteEnabled();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass_setDepthFunction_1CompareFunction(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint func_j)
			{
				EarthView::World::Graphic::CompareFunction func = (EarthView::World::Graphic::CompareFunction) func_j;
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				pObjectX->setDepthFunction(func);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_Pass_getDepthFunction_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				EarthView::World::Graphic::CompareFunction __values1 = pObjectX->getDepthFunction();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass_setColourWriteEnabled_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enabled_j)
			{
				ev_bool enabled = (ev_bool) enabled_j;
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				pObjectX->setColourWriteEnabled(enabled);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Pass_getColourWriteEnabled_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				ev_bool __values1 = pObjectX->getColourWriteEnabled();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass_setCullingMode_1CullingMode(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint mode_j)
			{
				EarthView::World::Graphic::CullingMode mode = (EarthView::World::Graphic::CullingMode) mode_j;
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				pObjectX->setCullingMode(mode);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_Pass_getCullingMode_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				EarthView::World::Graphic::CullingMode __values1 = pObjectX->getCullingMode();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass_setManualCullingMode_1ManualCullingMode(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint mode_j)
			{
				EarthView::World::Graphic::ManualCullingMode mode = (EarthView::World::Graphic::ManualCullingMode) mode_j;
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				pObjectX->setManualCullingMode(mode);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_Pass_getManualCullingMode_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				EarthView::World::Graphic::ManualCullingMode __values1 = pObjectX->getManualCullingMode();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass_setLightingEnabled_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enabled_j)
			{
				ev_bool enabled = (ev_bool) enabled_j;
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				pObjectX->setLightingEnabled(enabled);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Pass_getLightingEnabled_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				ev_bool __values1 = pObjectX->getLightingEnabled();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass_setMaxSimultaneousLights_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint maxLights_j)
			{
				ev_uint16 maxLights = (ev_uint16) maxLights_j;
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				pObjectX->setMaxSimultaneousLights(maxLights);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_Pass_getMaxSimultaneousLights_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				ev_uint16 __values1 = pObjectX->getMaxSimultaneousLights();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass_setStartLight_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint startLight_j)
			{
				ev_uint16 startLight = (ev_uint16) startLight_j;
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				pObjectX->setStartLight(startLight);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_Pass_getStartLight_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				ev_uint16 __values1 = pObjectX->getStartLight();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass_setLightMask_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong mask_j)
			{
				ev_uint32 mask = (ev_uint32) mask_j;
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				pObjectX->setLightMask(mask);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Pass_getLightMask_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getLightMask();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass_setShadingMode_1ShadeOptions(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint mode_j)
			{
				EarthView::World::Graphic::ShadeOptions mode = (EarthView::World::Graphic::ShadeOptions) mode_j;
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				pObjectX->setShadingMode(mode);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_Pass_getShadingMode_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				EarthView::World::Graphic::ShadeOptions __values1 = pObjectX->getShadingMode();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass_setPolygonMode_1PolygonMode(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint mode_j)
			{
				EarthView::World::Graphic::PolygonMode mode = (EarthView::World::Graphic::PolygonMode) mode_j;
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				pObjectX->setPolygonMode(mode);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_Pass_getPolygonMode_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				EarthView::World::Graphic::PolygonMode __values1 = pObjectX->getPolygonMode();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass_setPolygonModeOverrideable_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean val_j)
			{
				ev_bool val = (ev_bool) val_j;
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCPassProxy))
				{
					pObjectX->EarthView::World::Graphic::CPass::setPolygonModeOverrideable(val);
				}
				else
				{
					pObjectX->setPolygonModeOverrideable(val);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass_register_1setPolygonModeOverrideable_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCPassProxy *pObjectX = (JCPassProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setPolygonModeOverrideable_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setPolygonModeOverrideable_ev_bool_callback", "(Z)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass_setPolygonModeOverrideable_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean val_j)
			{
				ev_bool val = (ev_bool) val_j;
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CPass::setPolygonModeOverrideable(val);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Pass_getPolygonModeOverrideable_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCPassProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Graphic::CPass::getPolygonModeOverrideable();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->getPolygonModeOverrideable();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass_register_1getPolygonModeOverrideable_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCPassProxy *pObjectX = (JCPassProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getPolygonModeOverrideable_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getPolygonModeOverrideable_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Pass_getPolygonModeOverrideable_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Graphic::CPass::getPolygonModeOverrideable();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass_setFog_1ev_1bool_1FogMode_1CColourValue_1Real_1Real_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean overrideScene_j, jint mode_j, jlong colour_j, jdouble expDensity_j, jdouble linearStart_j, jdouble linearEnd_j)
			{
				ev_bool overrideScene = (ev_bool) overrideScene_j;
				EarthView::World::Graphic::FogMode mode = (EarthView::World::Graphic::FogMode) mode_j;
				const EarthView::World::Graphic::CColourValue &colour = *(EarthView::World::Graphic::CColourValue*) colour_j;
				Real expDensity = (Real) expDensity_j;
				Real linearStart = (Real) linearStart_j;
				Real linearEnd = (Real) linearEnd_j;
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				pObjectX->setFog(overrideScene, mode, colour, expDensity, linearStart, linearEnd);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass_setFog_1ev_1bool_1FogMode_1CColourValue_1Real_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean overrideScene_j, jint mode_j, jlong colour_j, jdouble expDensity_j, jdouble linearStart_j)
			{
				ev_bool overrideScene = (ev_bool) overrideScene_j;
				EarthView::World::Graphic::FogMode mode = (EarthView::World::Graphic::FogMode) mode_j;
				const EarthView::World::Graphic::CColourValue &colour = *(EarthView::World::Graphic::CColourValue*) colour_j;
				Real expDensity = (Real) expDensity_j;
				Real linearStart = (Real) linearStart_j;
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				pObjectX->setFog(overrideScene, mode, colour, expDensity, linearStart);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass_setFog_1ev_1bool_1FogMode_1CColourValue_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean overrideScene_j, jint mode_j, jlong colour_j, jdouble expDensity_j)
			{
				ev_bool overrideScene = (ev_bool) overrideScene_j;
				EarthView::World::Graphic::FogMode mode = (EarthView::World::Graphic::FogMode) mode_j;
				const EarthView::World::Graphic::CColourValue &colour = *(EarthView::World::Graphic::CColourValue*) colour_j;
				Real expDensity = (Real) expDensity_j;
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				pObjectX->setFog(overrideScene, mode, colour, expDensity);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass_setFog_1ev_1bool_1FogMode_1CColourValue(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean overrideScene_j, jint mode_j, jlong colour_j)
			{
				ev_bool overrideScene = (ev_bool) overrideScene_j;
				EarthView::World::Graphic::FogMode mode = (EarthView::World::Graphic::FogMode) mode_j;
				const EarthView::World::Graphic::CColourValue &colour = *(EarthView::World::Graphic::CColourValue*) colour_j;
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				pObjectX->setFog(overrideScene, mode, colour);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass_setFog_1ev_1bool_1FogMode(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean overrideScene_j, jint mode_j)
			{
				ev_bool overrideScene = (ev_bool) overrideScene_j;
				EarthView::World::Graphic::FogMode mode = (EarthView::World::Graphic::FogMode) mode_j;
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				pObjectX->setFog(overrideScene, mode);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass_setFog_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean overrideScene_j)
			{
				ev_bool overrideScene = (ev_bool) overrideScene_j;
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				pObjectX->setFog(overrideScene);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Pass_getFogOverride_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				ev_bool __values1 = pObjectX->getFogOverride();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_Pass_getFogMode_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				EarthView::World::Graphic::FogMode __values1 = pObjectX->getFogMode();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Pass_getFogColour_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				const EarthView::World::Graphic::CColourValue& __values1 = pObjectX->getFogColour();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_Pass_getFogStart_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				Real __values1 = pObjectX->getFogStart();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_Pass_getFogEnd_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				Real __values1 = pObjectX->getFogEnd();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_Pass_getFogDensity_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				Real __values1 = pObjectX->getFogDensity();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass_setDepthBias_1ev_1real32_1ev_1real32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jfloat constantBias_j, jfloat slopeScaleBias_j)
			{
				ev_real32 constantBias = (ev_real32) constantBias_j;
				ev_real32 slopeScaleBias = (ev_real32) slopeScaleBias_j;
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				pObjectX->setDepthBias(constantBias, slopeScaleBias);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass_setDepthBias_1ev_1real32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jfloat constantBias_j)
			{
				ev_real32 constantBias = (ev_real32) constantBias_j;
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				pObjectX->setDepthBias(constantBias);
			}
			extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_graphic_Pass_getDepthBiasConstant_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				ev_real32 __values1 = pObjectX->getDepthBiasConstant();
				jfloat __values1_j = (jfloat)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_graphic_Pass_getDepthBiasSlopeScale_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				ev_real32 __values1 = pObjectX->getDepthBiasSlopeScale();
				jfloat __values1_j = (jfloat)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass_setIterationDepthBias_1ev_1real32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jfloat biasPerIteration_j)
			{
				ev_real32 biasPerIteration = (ev_real32) biasPerIteration_j;
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				pObjectX->setIterationDepthBias(biasPerIteration);
			}
			extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_graphic_Pass_getIterationDepthBias_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				ev_real32 __values1 = pObjectX->getIterationDepthBias();
				jfloat __values1_j = (jfloat)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass_setAlphaRejectSettings_1CompareFunction_1ev_1uchar_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint func_j, jshort value_j, jboolean alphaToCoverageEnabled_j)
			{
				EarthView::World::Graphic::CompareFunction func = (EarthView::World::Graphic::CompareFunction) func_j;
				ev_uchar value = (ev_uchar) value_j;
				ev_bool alphaToCoverageEnabled = (ev_bool) alphaToCoverageEnabled_j;
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				pObjectX->setAlphaRejectSettings(func, value, alphaToCoverageEnabled);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass_setAlphaRejectSettings_1CompareFunction_1ev_1uchar(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint func_j, jshort value_j)
			{
				EarthView::World::Graphic::CompareFunction func = (EarthView::World::Graphic::CompareFunction) func_j;
				ev_uchar value = (ev_uchar) value_j;
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				pObjectX->setAlphaRejectSettings(func, value);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass_setAlphaRejectFunction_1CompareFunction(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint func_j)
			{
				EarthView::World::Graphic::CompareFunction func = (EarthView::World::Graphic::CompareFunction) func_j;
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				pObjectX->setAlphaRejectFunction(func);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass_setAlphaRejectValue_1ev_1uchar(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jshort val_j)
			{
				ev_uchar val = (ev_uchar) val_j;
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				pObjectX->setAlphaRejectValue(val);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_Pass_getAlphaRejectFunction_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				EarthView::World::Graphic::CompareFunction __values1 = pObjectX->getAlphaRejectFunction();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jshort JNICALL Java_com_earthview_world_graphic_Pass_getAlphaRejectValue_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				ev_uchar __values1 = pObjectX->getAlphaRejectValue();
				jshort __values1_j = (jshort) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass_setAlphaToCoverageEnabled_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enabled_j)
			{
				ev_bool enabled = (ev_bool) enabled_j;
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				pObjectX->setAlphaToCoverageEnabled(enabled);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Pass_isAlphaToCoverageEnabled_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				ev_bool __values1 = pObjectX->isAlphaToCoverageEnabled();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass_setTransparentSortingEnabled_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enabled_j)
			{
				ev_bool enabled = (ev_bool) enabled_j;
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				pObjectX->setTransparentSortingEnabled(enabled);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Pass_getTransparentSortingEnabled_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				ev_bool __values1 = pObjectX->getTransparentSortingEnabled();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass_setTransparentSortingForced_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enabled_j)
			{
				ev_bool enabled = (ev_bool) enabled_j;
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				pObjectX->setTransparentSortingForced(enabled);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Pass_getTransparentSortingForced_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				ev_bool __values1 = pObjectX->getTransparentSortingForced();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass_setIteratePerLight_1ev_1bool_1ev_1bool_1LightTypes(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enabled_j, jboolean onlyForOneLightType_j, jint lightType_j)
			{
				ev_bool enabled = (ev_bool) enabled_j;
				ev_bool onlyForOneLightType = (ev_bool) onlyForOneLightType_j;
				EarthView::World::Graphic::CLight::LightTypes lightType = (EarthView::World::Graphic::CLight::LightTypes) lightType_j;
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				pObjectX->setIteratePerLight(enabled, onlyForOneLightType, lightType);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass_setIteratePerLight_1ev_1bool_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enabled_j, jboolean onlyForOneLightType_j)
			{
				ev_bool enabled = (ev_bool) enabled_j;
				ev_bool onlyForOneLightType = (ev_bool) onlyForOneLightType_j;
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				pObjectX->setIteratePerLight(enabled, onlyForOneLightType);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass_setIteratePerLight_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enabled_j)
			{
				ev_bool enabled = (ev_bool) enabled_j;
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				pObjectX->setIteratePerLight(enabled);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Pass_getIteratePerLight_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				ev_bool __values1 = pObjectX->getIteratePerLight();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Pass_getRunOnlyForOneLightType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				ev_bool __values1 = pObjectX->getRunOnlyForOneLightType();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_Pass_getOnlyLightType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				EarthView::World::Graphic::CLight::LightTypes __values1 = pObjectX->getOnlyLightType();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass_setLightCountPerIteration_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint c_j)
			{
				ev_uint16 c = (ev_uint16) c_j;
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				pObjectX->setLightCountPerIteration(c);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_Pass_getLightCountPerIteration_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				ev_uint16 __values1 = pObjectX->getLightCountPerIteration();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Pass_getParent_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				EarthView::World::Graphic::CTechnique* __values1 = pObjectX->getParent();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_Pass_getResourceGroup_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				EVString __values1 = pObjectX->getResourceGroup();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass_setVertexProgram_1EVString_1ev_1bool_1RecompileMethod(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jboolean resetParams_j, jint recompile_j)
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
				ev_bool resetParams = (ev_bool) resetParams_j;
				EarthView::World::Graphic::RecompileMethod recompile = (EarthView::World::Graphic::RecompileMethod) recompile_j;
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				pObjectX->setVertexProgram(name, resetParams, recompile);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass_setVertexProgram_1CGpuProgramPtr_1RecompileMethod(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong gpuPtr_j, jint recompile_j)
			{
				EarthView::World::Graphic::CGpuProgramPtr &gpuPtr = *(EarthView::World::Graphic::CGpuProgramPtr*) gpuPtr_j;
				EarthView::World::Graphic::RecompileMethod recompile = (EarthView::World::Graphic::RecompileMethod) recompile_j;
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				pObjectX->setVertexProgram(gpuPtr, recompile);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass_setVertexProgram_1EVString_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jboolean resetParams_j)
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
				ev_bool resetParams = (ev_bool) resetParams_j;
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				pObjectX->setVertexProgram(name, resetParams);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass_setVertexProgram_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				pObjectX->setVertexProgram(name);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass_setVertexProgram_1CGpuProgramPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong gpuPtr_j)
			{
				EarthView::World::Graphic::CGpuProgramPtr &gpuPtr = *(EarthView::World::Graphic::CGpuProgramPtr*) gpuPtr_j;
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				pObjectX->setVertexProgram(gpuPtr);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass_setVertexProgramParameters_1GpuProgramParametersSharedPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong params_j)
			{
				EarthView::World::Graphic::GpuProgramParametersSharedPtr params = *(EarthView::World::Graphic::GpuProgramParametersSharedPtr*) params_j;
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				pObjectX->setVertexProgramParameters(params);
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_Pass_getVertexProgramName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				EVString __values1 = pObjectX->getVertexProgramName();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Pass_getVertexProgramParameters_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				EarthView::World::Graphic::GpuProgramParametersSharedPtr __values1 = pObjectX->getVertexProgramParameters();
				EarthView::World::Graphic::GpuProgramParametersSharedPtr *returnvalues = new EarthView::World::Graphic::GpuProgramParametersSharedPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Pass_getVertexProgram_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				const EarthView::World::Graphic::CGpuProgramPtr& __values1 = pObjectX->getVertexProgram();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass_setShadowCasterVertexProgram_1EVString_1RecompileMethod(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jint recompile_j)
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
				EarthView::World::Graphic::RecompileMethod recompile = (EarthView::World::Graphic::RecompileMethod) recompile_j;
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				pObjectX->setShadowCasterVertexProgram(name, recompile);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass_setShadowCasterVertexProgram_1CGpuProgramPtr_1RecompileMethod(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong gpuPtr_j, jint recompile_j)
			{
				EarthView::World::Graphic::CGpuProgramPtr &gpuPtr = *(EarthView::World::Graphic::CGpuProgramPtr*) gpuPtr_j;
				EarthView::World::Graphic::RecompileMethod recompile = (EarthView::World::Graphic::RecompileMethod) recompile_j;
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				pObjectX->setShadowCasterVertexProgram(gpuPtr, recompile);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass_setShadowCasterVertexProgram_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				pObjectX->setShadowCasterVertexProgram(name);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass_setShadowCasterVertexProgram_1CGpuProgramPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong gpuPtr_j)
			{
				EarthView::World::Graphic::CGpuProgramPtr &gpuPtr = *(EarthView::World::Graphic::CGpuProgramPtr*) gpuPtr_j;
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				pObjectX->setShadowCasterVertexProgram(gpuPtr);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass_setShadowCasterVertexProgramParameters_1GpuProgramParametersSharedPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong params_j)
			{
				EarthView::World::Graphic::GpuProgramParametersSharedPtr params = *(EarthView::World::Graphic::GpuProgramParametersSharedPtr*) params_j;
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				pObjectX->setShadowCasterVertexProgramParameters(params);
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_Pass_getShadowCasterVertexProgramName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				EVString __values1 = pObjectX->getShadowCasterVertexProgramName();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Pass_getShadowCasterVertexProgramParameters_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				EarthView::World::Graphic::GpuProgramParametersSharedPtr __values1 = pObjectX->getShadowCasterVertexProgramParameters();
				EarthView::World::Graphic::GpuProgramParametersSharedPtr *returnvalues = new EarthView::World::Graphic::GpuProgramParametersSharedPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Pass_getShadowCasterVertexProgram_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				const EarthView::World::Graphic::CGpuProgramPtr& __values1 = pObjectX->getShadowCasterVertexProgram();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass_setShadowCasterFragmentProgram_1EVString_1RecompileMethod(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jint recompile_j)
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
				EarthView::World::Graphic::RecompileMethod recompile = (EarthView::World::Graphic::RecompileMethod) recompile_j;
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				pObjectX->setShadowCasterFragmentProgram(name, recompile);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass_setShadowCasterFragmentProgram_1CGpuProgramPtr_1RecompileMethod(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong gpuPtr_j, jint recompile_j)
			{
				EarthView::World::Graphic::CGpuProgramPtr &gpuPtr = *(EarthView::World::Graphic::CGpuProgramPtr*) gpuPtr_j;
				EarthView::World::Graphic::RecompileMethod recompile = (EarthView::World::Graphic::RecompileMethod) recompile_j;
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				pObjectX->setShadowCasterFragmentProgram(gpuPtr, recompile);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass_setShadowCasterFragmentProgram_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				pObjectX->setShadowCasterFragmentProgram(name);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass_setShadowCasterFragmentProgram_1CGpuProgramPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong gpuPtr_j)
			{
				EarthView::World::Graphic::CGpuProgramPtr &gpuPtr = *(EarthView::World::Graphic::CGpuProgramPtr*) gpuPtr_j;
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				pObjectX->setShadowCasterFragmentProgram(gpuPtr);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass_setShadowCasterFragmentProgramParameters_1GpuProgramParametersSharedPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong params_j)
			{
				EarthView::World::Graphic::GpuProgramParametersSharedPtr params = *(EarthView::World::Graphic::GpuProgramParametersSharedPtr*) params_j;
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				pObjectX->setShadowCasterFragmentProgramParameters(params);
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_Pass_getShadowCasterFragmentProgramName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				EVString __values1 = pObjectX->getShadowCasterFragmentProgramName();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Pass_getShadowCasterFragmentProgramParameters_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				EarthView::World::Graphic::GpuProgramParametersSharedPtr __values1 = pObjectX->getShadowCasterFragmentProgramParameters();
				EarthView::World::Graphic::GpuProgramParametersSharedPtr *returnvalues = new EarthView::World::Graphic::GpuProgramParametersSharedPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Pass_getShadowCasterFragmentProgram_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				const EarthView::World::Graphic::CGpuProgramPtr& __values1 = pObjectX->getShadowCasterFragmentProgram();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass_setShadowReceiverVertexProgram_1EVString_1RecompileMethod(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jint recompile_j)
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
				EarthView::World::Graphic::RecompileMethod recompile = (EarthView::World::Graphic::RecompileMethod) recompile_j;
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				pObjectX->setShadowReceiverVertexProgram(name, recompile);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass_setShadowReceiverVertexProgram_1CGpuProgramPtr_1RecompileMethod(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong gpuPtr_j, jint recompile_j)
			{
				EarthView::World::Graphic::CGpuProgramPtr &gpuPtr = *(EarthView::World::Graphic::CGpuProgramPtr*) gpuPtr_j;
				EarthView::World::Graphic::RecompileMethod recompile = (EarthView::World::Graphic::RecompileMethod) recompile_j;
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				pObjectX->setShadowReceiverVertexProgram(gpuPtr, recompile);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass_setShadowReceiverVertexProgram_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				pObjectX->setShadowReceiverVertexProgram(name);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass_setShadowReceiverVertexProgram_1CGpuProgramPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong gpuPtr_j)
			{
				EarthView::World::Graphic::CGpuProgramPtr &gpuPtr = *(EarthView::World::Graphic::CGpuProgramPtr*) gpuPtr_j;
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				pObjectX->setShadowReceiverVertexProgram(gpuPtr);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass_setShadowReceiverVertexProgramParameters_1GpuProgramParametersSharedPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong params_j)
			{
				EarthView::World::Graphic::GpuProgramParametersSharedPtr params = *(EarthView::World::Graphic::GpuProgramParametersSharedPtr*) params_j;
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				pObjectX->setShadowReceiverVertexProgramParameters(params);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass_setShadowReceiverFragmentProgram_1EVString_1RecompileMethod(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jint recompile_j)
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
				EarthView::World::Graphic::RecompileMethod recompile = (EarthView::World::Graphic::RecompileMethod) recompile_j;
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				pObjectX->setShadowReceiverFragmentProgram(name, recompile);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass_setShadowReceiverFragmentProgram_1CGpuProgramPtr_1RecompileMethod(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong gpuPtr_j, jint recompile_j)
			{
				EarthView::World::Graphic::CGpuProgramPtr &gpuPtr = *(EarthView::World::Graphic::CGpuProgramPtr*) gpuPtr_j;
				EarthView::World::Graphic::RecompileMethod recompile = (EarthView::World::Graphic::RecompileMethod) recompile_j;
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				pObjectX->setShadowReceiverFragmentProgram(gpuPtr, recompile);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass_setShadowReceiverFragmentProgram_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				pObjectX->setShadowReceiverFragmentProgram(name);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass_setShadowReceiverFragmentProgram_1CGpuProgramPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong gpuPtr_j)
			{
				EarthView::World::Graphic::CGpuProgramPtr &gpuPtr = *(EarthView::World::Graphic::CGpuProgramPtr*) gpuPtr_j;
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				pObjectX->setShadowReceiverFragmentProgram(gpuPtr);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass_setShadowReceiverFragmentProgramParameters_1GpuProgramParametersSharedPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong params_j)
			{
				EarthView::World::Graphic::GpuProgramParametersSharedPtr params = *(EarthView::World::Graphic::GpuProgramParametersSharedPtr*) params_j;
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				pObjectX->setShadowReceiverFragmentProgramParameters(params);
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_Pass_getShadowReceiverVertexProgramName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				EVString __values1 = pObjectX->getShadowReceiverVertexProgramName();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Pass_getShadowReceiverVertexProgramParameters_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				EarthView::World::Graphic::GpuProgramParametersSharedPtr __values1 = pObjectX->getShadowReceiverVertexProgramParameters();
				EarthView::World::Graphic::GpuProgramParametersSharedPtr *returnvalues = new EarthView::World::Graphic::GpuProgramParametersSharedPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Pass_getShadowReceiverVertexProgram_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				const EarthView::World::Graphic::CGpuProgramPtr& __values1 = pObjectX->getShadowReceiverVertexProgram();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_Pass_getShadowReceiverFragmentProgramName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				EVString __values1 = pObjectX->getShadowReceiverFragmentProgramName();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Pass_getShadowReceiverFragmentProgramParameters_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				EarthView::World::Graphic::GpuProgramParametersSharedPtr __values1 = pObjectX->getShadowReceiverFragmentProgramParameters();
				EarthView::World::Graphic::GpuProgramParametersSharedPtr *returnvalues = new EarthView::World::Graphic::GpuProgramParametersSharedPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Pass_getShadowReceiverFragmentProgram_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				const EarthView::World::Graphic::CGpuProgramPtr& __values1 = pObjectX->getShadowReceiverFragmentProgram();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass_setFragmentProgram_1EVString_1ev_1bool_1RecompileMethod(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jboolean resetParams_j, jint recompile_j)
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
				ev_bool resetParams = (ev_bool) resetParams_j;
				EarthView::World::Graphic::RecompileMethod recompile = (EarthView::World::Graphic::RecompileMethod) recompile_j;
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				pObjectX->setFragmentProgram(name, resetParams, recompile);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass_setFragmentProgram_1CGpuProgramPtr_1RecompileMethod(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong gpuPtr_j, jint recompile_j)
			{
				EarthView::World::Graphic::CGpuProgramPtr &gpuPtr = *(EarthView::World::Graphic::CGpuProgramPtr*) gpuPtr_j;
				EarthView::World::Graphic::RecompileMethod recompile = (EarthView::World::Graphic::RecompileMethod) recompile_j;
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				pObjectX->setFragmentProgram(gpuPtr, recompile);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass_setFragmentProgram_1EVString_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jboolean resetParams_j)
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
				ev_bool resetParams = (ev_bool) resetParams_j;
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				pObjectX->setFragmentProgram(name, resetParams);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass_setFragmentProgram_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				pObjectX->setFragmentProgram(name);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass_setFragmentProgram_1CGpuProgramPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong gpuPtr_j)
			{
				EarthView::World::Graphic::CGpuProgramPtr &gpuPtr = *(EarthView::World::Graphic::CGpuProgramPtr*) gpuPtr_j;
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				pObjectX->setFragmentProgram(gpuPtr);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass_setFragmentProgramParameters_1GpuProgramParametersSharedPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong params_j)
			{
				EarthView::World::Graphic::GpuProgramParametersSharedPtr params = *(EarthView::World::Graphic::GpuProgramParametersSharedPtr*) params_j;
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				pObjectX->setFragmentProgramParameters(params);
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_Pass_getFragmentProgramName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				EVString __values1 = pObjectX->getFragmentProgramName();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Pass_getFragmentProgramParameters_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				EarthView::World::Graphic::GpuProgramParametersSharedPtr __values1 = pObjectX->getFragmentProgramParameters();
				EarthView::World::Graphic::GpuProgramParametersSharedPtr *returnvalues = new EarthView::World::Graphic::GpuProgramParametersSharedPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Pass_getFragmentProgram_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				const EarthView::World::Graphic::CGpuProgramPtr& __values1 = pObjectX->getFragmentProgram();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass_setGeometryProgram_1EVString_1ev_1bool_1RecompileMethod(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jboolean resetParams_j, jint recompile_j)
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
				ev_bool resetParams = (ev_bool) resetParams_j;
				EarthView::World::Graphic::RecompileMethod recompile = (EarthView::World::Graphic::RecompileMethod) recompile_j;
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				pObjectX->setGeometryProgram(name, resetParams, recompile);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass_setGeometryProgram_1CGpuProgramPtr_1RecompileMethod(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong gpuPtr_j, jint recompile_j)
			{
				EarthView::World::Graphic::CGpuProgramPtr &gpuPtr = *(EarthView::World::Graphic::CGpuProgramPtr*) gpuPtr_j;
				EarthView::World::Graphic::RecompileMethod recompile = (EarthView::World::Graphic::RecompileMethod) recompile_j;
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				pObjectX->setGeometryProgram(gpuPtr, recompile);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass_setGeometryProgram_1EVString_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jboolean resetParams_j)
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
				ev_bool resetParams = (ev_bool) resetParams_j;
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				pObjectX->setGeometryProgram(name, resetParams);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass_setGeometryProgram_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				pObjectX->setGeometryProgram(name);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass_setGeometryProgram_1CGpuProgramPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong gpuPtr_j)
			{
				EarthView::World::Graphic::CGpuProgramPtr &gpuPtr = *(EarthView::World::Graphic::CGpuProgramPtr*) gpuPtr_j;
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				pObjectX->setGeometryProgram(gpuPtr);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass_setGeometryProgramParameters_1GpuProgramParametersSharedPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong params_j)
			{
				EarthView::World::Graphic::GpuProgramParametersSharedPtr params = *(EarthView::World::Graphic::GpuProgramParametersSharedPtr*) params_j;
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				pObjectX->setGeometryProgramParameters(params);
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_Pass_getGeometryProgramName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				EVString __values1 = pObjectX->getGeometryProgramName();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Pass_getGeometryProgramParameters_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				EarthView::World::Graphic::GpuProgramParametersSharedPtr __values1 = pObjectX->getGeometryProgramParameters();
				EarthView::World::Graphic::GpuProgramParametersSharedPtr *returnvalues = new EarthView::World::Graphic::GpuProgramParametersSharedPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Pass_getGeometryProgram_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				const EarthView::World::Graphic::CGpuProgramPtr& __values1 = pObjectX->getGeometryProgram();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Pass__1split_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint numUnits_j)
			{
				ev_uint16 numUnits = (ev_uint16) numUnits_j;
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				EarthView::World::Graphic::CPass* __values1 = pObjectX->_split(numUnits);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass__1notifyIndex_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint index_j)
			{
				ev_uint16 index = (ev_uint16) index_j;
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				pObjectX->_notifyIndex(index);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass__1prepare_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				pObjectX->_prepare();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass__1unprepare_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				pObjectX->_unprepare();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass__1load_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				pObjectX->_load();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass__1unload_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				pObjectX->_unload();
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Pass_isLoaded_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				ev_bool __values1 = pObjectX->isLoaded();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Pass_getHash_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getHash();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass__1dirtyHash_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				pObjectX->_dirtyHash();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass__1recalculateHash_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				pObjectX->_recalculateHash();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass__1notifyNeedsRecompile_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				pObjectX->_notifyNeedsRecompile();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass__1updateAutoParams_1CAutoParamDataSource_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong source_j, jint variabilityMask_j)
			{
				const EarthView::World::Graphic::CAutoParamDataSource *source = (const EarthView::World::Graphic::CAutoParamDataSource*) source_j;
				ev_uint16 variabilityMask = (ev_uint16) variabilityMask_j;
				const 				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				pObjectX->_updateAutoParams(source, variabilityMask);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_Pass__1getTextureUnitWithContentTypeIndex_1ContentType_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint contentType_j, jint index_j)
			{
				EarthView::World::Graphic::CTextureUnitState::ContentType contentType = (EarthView::World::Graphic::CTextureUnitState::ContentType) contentType_j;
				ev_uint16 index = (ev_uint16) index_j;
				const 				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				ev_uint16 __values1 = pObjectX->_getTextureUnitWithContentTypeIndex(contentType, index);
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass_setTextureFiltering_1TextureFilterOptions(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint filterType_j)
			{
				EarthView::World::Graphic::TextureFilterOptions filterType = (EarthView::World::Graphic::TextureFilterOptions) filterType_j;
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				pObjectX->setTextureFiltering(filterType);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass_setTextureAnisotropy_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong maxAniso_j)
			{
				ev_uint32 maxAniso = (ev_uint32) maxAniso_j;
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				pObjectX->setTextureAnisotropy(maxAniso);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass_setNormaliseNormals_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean normalise_j)
			{
				ev_bool normalise = (ev_bool) normalise_j;
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				pObjectX->setNormaliseNormals(normalise);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Pass_getNormaliseNormals_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				ev_bool __values1 = pObjectX->getNormaliseNormals();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Pass_getDirtyHashList_1void(JNIEnv *__env , jclass __clazz)
			{
				const EarthView::World::Graphic::CPass::PassSet& __values1 = EarthView::World::Graphic::CPass::getDirtyHashList();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Pass_getPassGraveyard_1void(JNIEnv *__env , jclass __clazz)
			{
				const EarthView::World::Graphic::CPass::PassSet& __values1 = EarthView::World::Graphic::CPass::getPassGraveyard();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass_clearDirtyHashList_1void(JNIEnv *__env , jclass __clazz)
			{
				EarthView::World::Graphic::CPass::clearDirtyHashList();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass_processPendingPassUpdates_1void(JNIEnv *__env , jclass __clazz)
			{
				EarthView::World::Graphic::CPass::processPendingPassUpdates();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass_queueForDeletion_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				pObjectX->queueForDeletion();
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Pass_isAmbientOnly_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				ev_bool __values1 = pObjectX->isAmbientOnly();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass_setPassIterationCount_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
			{
				const ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				pObjectX->setPassIterationCount(count);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Pass_getPassIterationCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				ev_size_t __values1 = pObjectX->getPassIterationCount();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Pass_applyTextureAliases_1CommonStringPairList_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong aliasList_j, jboolean apply_j)
			{
				const EarthView::World::Core::CommonStringPairList &aliasList = *(EarthView::World::Core::CommonStringPairList*) aliasList_j;
				const ev_bool apply = (ev_bool) apply_j;
				const 				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				ev_bool __values1 = pObjectX->applyTextureAliases(aliasList, apply);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Pass_applyTextureAliases_1CommonStringPairList(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong aliasList_j)
			{
				const EarthView::World::Core::CommonStringPairList &aliasList = *(EarthView::World::Core::CommonStringPairList*) aliasList_j;
				const 				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				ev_bool __values1 = pObjectX->applyTextureAliases(aliasList);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass_setLightScissoringEnabled_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enabled_j)
			{
				ev_bool enabled = (ev_bool) enabled_j;
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				pObjectX->setLightScissoringEnabled(enabled);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Pass_getLightScissoringEnabled_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				ev_bool __values1 = pObjectX->getLightScissoringEnabled();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass_setLightClipPlanesEnabled_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enabled_j)
			{
				ev_bool enabled = (ev_bool) enabled_j;
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				pObjectX->setLightClipPlanesEnabled(enabled);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Pass_getLightClipPlanesEnabled_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				ev_bool __values1 = pObjectX->getLightClipPlanesEnabled();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass_setIlluminationStage_1IlluminationStage(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint is_j)
			{
				EarthView::World::Graphic::IlluminationStage is = (EarthView::World::Graphic::IlluminationStage) is_j;
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				pObjectX->setIlluminationStage(is);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_Pass_getIlluminationStage_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				EarthView::World::Graphic::IlluminationStage __values1 = pObjectX->getIlluminationStage();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_graphic_Pass_00024BuiltinHashFunctionHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					CPass::MIN_TEXTURE_CHANGE,
					CPass::MIN_GPU_PROGRAM_CHANGE
				};
				jintArray array = __env->NewIntArray(2);
				__env->SetIntArrayRegion(array, 0, 2, enum_values);
				return array;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass_setHashFunction_1BuiltinHashFunction(JNIEnv *__env , jclass __clazz, jint builtin_j)
			{
				EarthView::World::Graphic::CPass::BuiltinHashFunction builtin = (EarthView::World::Graphic::CPass::BuiltinHashFunction) builtin_j;
				EarthView::World::Graphic::CPass::setHashFunction(builtin);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Pass_setHashFunction_1HashFunc(JNIEnv *__env , jclass __clazz, jlong hashFunc_j)
			{
				EarthView::World::Graphic::CPass::HashFunc *hashFunc = (EarthView::World::Graphic::CPass::HashFunc*) hashFunc_j;
				EarthView::World::Graphic::CPass::setHashFunction(hashFunc);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Pass_getHashFunction_1void(JNIEnv *__env , jclass __clazz)
			{
				EarthView::World::Graphic::CPass::HashFunc* __values1 = EarthView::World::Graphic::CPass::getHashFunction();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Pass_getBuiltinHashFunction_1BuiltinHashFunction(JNIEnv *__env , jclass __clazz, jint builtin_j)
			{
				EarthView::World::Graphic::CPass::BuiltinHashFunction builtin = (EarthView::World::Graphic::CPass::BuiltinHashFunction) builtin_j;
				EarthView::World::Graphic::CPass::HashFunc* __values1 = EarthView::World::Graphic::CPass::getBuiltinHashFunction(builtin);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Pass_getUserObjectBindings_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CPass *pObjectX = (EarthView::World::Graphic::CPass*) pObjXXXX;
				EarthView::World::Graphic::CUserObjectBindings& __values1 = pObjectX->getUserObjectBindings();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_IlluminationPass_get_1stage_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::IlluminationPass *pObjectX = (EarthView::World::Graphic::IlluminationPass*)pObjXXXX;
				jint __values1_j = (jint)(pObjectX->stage);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_IlluminationPass_set_1stage_1IlluminationStage(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
			{
				EarthView::World::Graphic::IlluminationPass *pObjectX = (EarthView::World::Graphic::IlluminationPass*)pObjXXXX;
				pObjectX->stage = (EarthView::World::Graphic::IlluminationStage)__values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_IlluminationPass_get_1pass_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::IlluminationPass *pObjectX = (EarthView::World::Graphic::IlluminationPass*)pObjXXXX;
				jlong __values1_j = (jlong)(pObjectX->pass);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_IlluminationPass_set_1pass_1CPass(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::IlluminationPass *pObjectX = (EarthView::World::Graphic::IlluminationPass*)pObjXXXX;
				pObjectX->pass = (EarthView::World::Graphic::CPass*) __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_IlluminationPass_get_1destroyOnShutdown_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::IlluminationPass *pObjectX = (EarthView::World::Graphic::IlluminationPass*)pObjXXXX;
				jboolean __values1_j = (jboolean)(pObjectX->destroyOnShutdown);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_IlluminationPass_set_1destroyOnShutdown_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
			{
				EarthView::World::Graphic::IlluminationPass *pObjectX = (EarthView::World::Graphic::IlluminationPass*)pObjXXXX;
				pObjectX->destroyOnShutdown = (ev_bool)__values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_IlluminationPass_get_1originalPass_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::IlluminationPass *pObjectX = (EarthView::World::Graphic::IlluminationPass*)pObjXXXX;
				jlong __values1_j = (jlong)(pObjectX->originalPass);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_IlluminationPass_set_1originalPass_1CPass(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::IlluminationPass *pObjectX = (EarthView::World::Graphic::IlluminationPass*)pObjXXXX;
				pObjectX->originalPass = (EarthView::World::Graphic::CPass*) __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_IlluminationPassList_push_1back_1IlluminationPass(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
			{
				EarthView::World::Graphic::IlluminationPass *&t = *(EarthView::World::Graphic::IlluminationPass**) t_j;
				EarthView::World::Graphic::IlluminationPassList *pObjectX = (EarthView::World::Graphic::IlluminationPassList*) pObjXXXX;
				pObjectX->push_back(t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_IlluminationPassList_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::IlluminationPassList *pObjectX = (EarthView::World::Graphic::IlluminationPassList*) pObjXXXX;
				pObjectX->pop_back();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_IlluminationPassList_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::IlluminationPassList *pObjectX = (EarthView::World::Graphic::IlluminationPassList*) pObjXXXX;
				EarthView::World::Graphic::IlluminationPass*& __values1 = pObjectX->front();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_IlluminationPassList_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::IlluminationPassList *pObjectX = (EarthView::World::Graphic::IlluminationPassList*) pObjXXXX;
				EarthView::World::Graphic::IlluminationPass*& __values1 = pObjectX->back();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_IlluminationPassList_insert_1ev_1uint32_1IlluminationPass(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong t_j)
			{
				ev_uint32 pos = (ev_uint32) pos_j;
				EarthView::World::Graphic::IlluminationPass *&t = *(EarthView::World::Graphic::IlluminationPass**) t_j;
				EarthView::World::Graphic::IlluminationPassList *pObjectX = (EarthView::World::Graphic::IlluminationPassList*) pObjXXXX;
				pObjectX->insert(pos, t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_IlluminationPassList_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_size_t pos = (ev_size_t) pos_j;
				EarthView::World::Graphic::IlluminationPassList *pObjectX = (EarthView::World::Graphic::IlluminationPassList*) pObjXXXX;
				pObjectX->remove(pos);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_IlluminationPassList_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::IlluminationPassList *pObjectX = (EarthView::World::Graphic::IlluminationPassList*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_IlluminationPassList_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong n_j )
			{
				EarthView::World::Graphic::IlluminationPassList& pObjectX = *(EarthView::World::Graphic::IlluminationPassList*) pObjXXXX;
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Graphic::IlluminationPass*& __values1 = pObjectX[n];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_IlluminationPassList_at_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
			{
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Graphic::IlluminationPassList *pObjectX = (EarthView::World::Graphic::IlluminationPassList*) pObjXXXX;
				EarthView::World::Graphic::IlluminationPass*& __values1 = pObjectX->at(n);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_IlluminationPassList_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::IlluminationPassList *pObjectX = (EarthView::World::Graphic::IlluminationPassList*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_IlluminationPassList_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
			{
				ev_size_t newSize = (ev_size_t) newSize_j;
				EarthView::World::Graphic::IlluminationPassList *pObjectX = (EarthView::World::Graphic::IlluminationPassList*) pObjXXXX;
				pObjectX->resize(newSize);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_IlluminationPassList_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
			{
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Graphic::IlluminationPassList *pObjectX = (EarthView::World::Graphic::IlluminationPassList*) pObjXXXX;
				pObjectX->reserve(count);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_IlluminationPassList_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::IlluminationPassList *pObjectX = (EarthView::World::Graphic::IlluminationPassList*) pObjXXXX;
				pObjectX->clear();
			}
		}
	}
}
