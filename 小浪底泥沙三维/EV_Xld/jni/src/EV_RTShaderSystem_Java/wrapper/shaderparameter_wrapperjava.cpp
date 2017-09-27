/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "rtshadersystem/shaderparameter.h"
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
			namespace RTShaderSystem
			{
				class JCParameterProxy : public EarthView::World::Graphic::RTShaderSystem::CParameter
				{
				 private:
					EarthView::World::Core::ev_string m_isConstParameter_void_callback;
					EarthView::World::Core::ev_string m_ev_toString_void_callback;
				public:
					JCParameterProxy(EarthView::World::Core::CNameValuePairList *pList) : CParameter(pList)
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
					void register_isConstParameter_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_isConstParameter_void_callback = __method;
					}
					void register_ev_toString_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_ev_toString_void_callback = __method;
					}
					virtual ev_bool isConstParameter() const
					{
						if (this->_gRef != NULL && this->m_isConstParameter_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("isConstParameter_void_callback");
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
							return this->CParameter::isConstParameter();
						}
					}
					virtual EVString toString() const
					{
						if (this->_gRef != NULL && this->m_ev_toString_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("ev_toString_void_callback");
							jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							const char* values_ch = __env->GetStringUTFChars(__values1_j,JNI_FALSE);
							EVString __values1 = values_ch;
							__env->ReleaseStringUTFChars(__values1_j,values_ch);
							#else
							const ev_wchar* values_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
							EVString __values1 = values_ch;
							__env->ReleaseStringChars(__values1_j,(const jchar *)values_ch);
							#endif
							return __values1;
						}
						else
						{
							return this->CParameter::toString();
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCParameterProxy);
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_graphic_rtshadersystem_Parameter_00024SemanticHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						CParameter::SPS_UNKNOWN,
						CParameter::SPS_POSITION,
						CParameter::SPS_BLEND_WEIGHTS,
						CParameter::SPS_BLEND_INDICES,
						CParameter::SPS_NORMAL,
						CParameter::SPS_COLOR,
						CParameter::SPS_TEXTURE_COORDINATES,
						CParameter::SPS_BINORMAL,
						CParameter::SPS_TANGENT
					};
					jintArray array = __env->NewIntArray(9);
					__env->SetIntArrayRegion(array, 0, 9, enum_values);
					return array;
				}
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_graphic_rtshadersystem_Parameter_00024ContentHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						CParameter::SPC_UNKNOWN,
						CParameter::SPC_POSITION_OBJECT_SPACE,
						CParameter::SPC_POSITION_WORLD_SPACE,
						CParameter::SPC_POSITION_VIEW_SPACE,
						CParameter::SPC_POSITION_PROJECTIVE_SPACE,
						CParameter::SPC_POSITION_LIGHT_SPACE0,
						CParameter::SPC_POSITION_LIGHT_SPACE1,
						CParameter::SPC_POSITION_LIGHT_SPACE2,
						CParameter::SPC_POSITION_LIGHT_SPACE3,
						CParameter::SPC_POSITION_LIGHT_SPACE4,
						CParameter::SPC_POSITION_LIGHT_SPACE5,
						CParameter::SPC_POSITION_LIGHT_SPACE6,
						CParameter::SPC_POSITION_LIGHT_SPACE7,
						CParameter::SPC_NORMAL_OBJECT_SPACE,
						CParameter::SPC_NORMAL_WORLD_SPACE,
						CParameter::SPC_NORMAL_VIEW_SPACE,
						CParameter::SPC_NORMAL_TANGENT_SPACE,
						CParameter::SPC_POSTOCAMERA_OBJECT_SPACE,
						CParameter::SPC_POSTOCAMERA_WORLD_SPACE,
						CParameter::SPC_POSTOCAMERA_VIEW_SPACE,
						CParameter::SPC_POSTOCAMERA_TANGENT_SPACE,
						CParameter::SPC_POSTOLIGHT_OBJECT_SPACE0,
						CParameter::SPC_POSTOLIGHT_OBJECT_SPACE1,
						CParameter::SPC_POSTOLIGHT_OBJECT_SPACE2,
						CParameter::SPC_POSTOLIGHT_OBJECT_SPACE3,
						CParameter::SPC_POSTOLIGHT_OBJECT_SPACE4,
						CParameter::SPC_POSTOLIGHT_OBJECT_SPACE5,
						CParameter::SPC_POSTOLIGHT_OBJECT_SPACE6,
						CParameter::SPC_POSTOLIGHT_OBJECT_SPACE7,
						CParameter::SPC_POSTOLIGHT_WORLD_SPACE0,
						CParameter::SPC_POSTOLIGHT_WORLD_SPACE1,
						CParameter::SPC_POSTOLIGHT_WORLD_SPACE2,
						CParameter::SPC_POSTOLIGHT_WORLD_SPACE3,
						CParameter::SPC_POSTOLIGHT_WORLD_SPACE4,
						CParameter::SPC_POSTOLIGHT_WORLD_SPACE5,
						CParameter::SPC_POSTOLIGHT_WORLD_SPACE6,
						CParameter::SPC_POSTOLIGHT_WORLD_SPACE7,
						CParameter::SPC_POSTOLIGHT_VIEW_SPACE0,
						CParameter::SPC_POSTOLIGHT_VIEW_SPACE1,
						CParameter::SPC_POSTOLIGHT_VIEW_SPACE2,
						CParameter::SPC_POSTOLIGHT_VIEW_SPACE3,
						CParameter::SPC_POSTOLIGHT_VIEW_SPACE4,
						CParameter::SPC_POSTOLIGHT_VIEW_SPACE5,
						CParameter::SPC_POSTOLIGHT_VIEW_SPACE6,
						CParameter::SPC_POSTOLIGHT_VIEW_SPACE7,
						CParameter::SPC_POSTOLIGHT_TANGENT_SPACE0,
						CParameter::SPC_POSTOLIGHT_TANGENT_SPACE1,
						CParameter::SPC_POSTOLIGHT_TANGENT_SPACE2,
						CParameter::SPC_POSTOLIGHT_TANGENT_SPACE3,
						CParameter::SPC_POSTOLIGHT_TANGENT_SPACE4,
						CParameter::SPC_POSTOLIGHT_TANGENT_SPACE5,
						CParameter::SPC_POSTOLIGHT_TANGENT_SPACE6,
						CParameter::SPC_POSTOLIGHT_TANGENT_SPACE7,
						CParameter::SPC_LIGHTDIRECTION_OBJECT_SPACE0,
						CParameter::SPC_LIGHTDIRECTION_OBJECT_SPACE1,
						CParameter::SPC_LIGHTDIRECTION_OBJECT_SPACE2,
						CParameter::SPC_LIGHTDIRECTION_OBJECT_SPACE3,
						CParameter::SPC_LIGHTDIRECTION_OBJECT_SPACE4,
						CParameter::SPC_LIGHTDIRECTION_OBJECT_SPACE5,
						CParameter::SPC_LIGHTDIRECTION_OBJECT_SPACE6,
						CParameter::SPC_LIGHTDIRECTION_OBJECT_SPACE7,
						CParameter::SPC_LIGHTDIRECTION_WORLD_SPACE0,
						CParameter::SPC_LIGHTDIRECTION_WORLD_SPACE1,
						CParameter::SPC_LIGHTDIRECTION_WORLD_SPACE2,
						CParameter::SPC_LIGHTDIRECTION_WORLD_SPACE3,
						CParameter::SPC_LIGHTDIRECTION_WORLD_SPACE4,
						CParameter::SPC_LIGHTDIRECTION_WORLD_SPACE5,
						CParameter::SPC_LIGHTDIRECTION_WORLD_SPACE6,
						CParameter::SPC_LIGHTDIRECTION_WORLD_SPACE7,
						CParameter::SPC_LIGHTDIRECTION_VIEW_SPACE0,
						CParameter::SPC_LIGHTDIRECTION_VIEW_SPACE1,
						CParameter::SPC_LIGHTDIRECTION_VIEW_SPACE2,
						CParameter::SPC_LIGHTDIRECTION_VIEW_SPACE3,
						CParameter::SPC_LIGHTDIRECTION_VIEW_SPACE4,
						CParameter::SPC_LIGHTDIRECTION_VIEW_SPACE5,
						CParameter::SPC_LIGHTDIRECTION_VIEW_SPACE6,
						CParameter::SPC_LIGHTDIRECTION_VIEW_SPACE7,
						CParameter::SPC_LIGHTDIRECTION_TANGENT_SPACE0,
						CParameter::SPC_LIGHTDIRECTION_TANGENT_SPACE1,
						CParameter::SPC_LIGHTDIRECTION_TANGENT_SPACE2,
						CParameter::SPC_LIGHTDIRECTION_TANGENT_SPACE3,
						CParameter::SPC_LIGHTDIRECTION_TANGENT_SPACE4,
						CParameter::SPC_LIGHTDIRECTION_TANGENT_SPACE5,
						CParameter::SPC_LIGHTDIRECTION_TANGENT_SPACE6,
						CParameter::SPC_LIGHTDIRECTION_TANGENT_SPACE7,
						CParameter::SPC_LIGHTPOSITION_OBJECT_SPACE0,
						CParameter::SPC_LIGHTPOSITION_OBJECT_SPACE1,
						CParameter::SPC_LIGHTPOSITION_OBJECT_SPACE2,
						CParameter::SPC_LIGHTPOSITION_OBJECT_SPACE3,
						CParameter::SPC_LIGHTPOSITION_OBJECT_SPACE4,
						CParameter::SPC_LIGHTPOSITION_OBJECT_SPACE5,
						CParameter::SPC_LIGHTPOSITION_OBJECT_SPACE6,
						CParameter::SPC_LIGHTPOSITION_OBJECT_SPACE7,
						CParameter::SPC_LIGHTPOSITION_WORLD_SPACE0,
						CParameter::SPC_LIGHTPOSITION_WORLD_SPACE1,
						CParameter::SPC_LIGHTPOSITION_WORLD_SPACE2,
						CParameter::SPC_LIGHTPOSITION_WORLD_SPACE3,
						CParameter::SPC_LIGHTPOSITION_WORLD_SPACE4,
						CParameter::SPC_LIGHTPOSITION_WORLD_SPACE5,
						CParameter::SPC_LIGHTPOSITION_WORLD_SPACE6,
						CParameter::SPC_LIGHTPOSITION_WORLD_SPACE7,
						CParameter::SPC_LIGHTPOSITIONVIEW_SPACE0,
						CParameter::SPC_LIGHTPOSITIONVIEW_SPACE1,
						CParameter::SPC_LIGHTPOSITIONVIEW_SPACE2,
						CParameter::SPC_LIGHTPOSITIONVIEW_SPACE3,
						CParameter::SPC_LIGHTPOSITIONVIEW_SPACE4,
						CParameter::SPC_LIGHTPOSITIONVIEW_SPACE5,
						CParameter::SPC_LIGHTPOSITIONVIEW_SPACE6,
						CParameter::SPC_LIGHTPOSITIONVIEW_SPACE7,
						CParameter::SPC_LIGHTPOSITION_TANGENT_SPACE,
						CParameter::SPC_BLEND_WEIGHTS,
						CParameter::SPC_BLEND_INDICES,
						CParameter::SPC_TANGENT_OBJECT_SPACE,
						CParameter::SPC_TANGENT_WORLD_SPACE,
						CParameter::SPC_TANGENT_VIEW_SPACE,
						CParameter::SPC_TANGENT_TANGENT_SPACE,
						CParameter::SPC_BINORMAL_OBJECT_SPACE,
						CParameter::SPC_BINORMAL_WORLD_SPACE,
						CParameter::SPC_BINORMAL_VIEW_SPACE,
						CParameter::SPC_BINORMAL_TANGENT_SPACE,
						CParameter::SPC_COLOR_DIFFUSE,
						CParameter::SPC_COLOR_SPECULAR,
						CParameter::SPC_DEPTH_OBJECT_SPACE,
						CParameter::SPC_DEPTH_WORLD_SPACE,
						CParameter::SPC_DEPTH_VIEW_SPACE,
						CParameter::SPC_DEPTH_PROJECTIVE_SPACE,
						CParameter::SPC_TEXTURE_COORDINATE0,
						CParameter::SPC_TEXTURE_COORDINATE1,
						CParameter::SPC_TEXTURE_COORDINATE2,
						CParameter::SPC_TEXTURE_COORDINATE3,
						CParameter::SPC_TEXTURE_COORDINATE4,
						CParameter::SPC_TEXTURE_COORDINATE5,
						CParameter::SPC_TEXTURE_COORDINATE6,
						CParameter::SPC_TEXTURE_COORDINATE7,
						CParameter::SPC_CUSTOM_CONTENT_BEGIN,
						CParameter::SPC_CUSTOM_CONTENT_END
					};
					jintArray array = __env->NewIntArray(136);
					__env->SetIntArrayRegion(array, 0, 136, enum_values);
					return array;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_Parameter_getName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Graphic::RTShaderSystem::CParameter *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CParameter*) pObjXXXX;
					const EVString& __values1 = pObjectX->getName();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_rtshadersystem_Parameter_getType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Graphic::RTShaderSystem::CParameter *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CParameter*) pObjXXXX;
					EarthView::World::Graphic::GpuConstantType __values1 = pObjectX->getType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_Parameter_getSemantic_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Graphic::RTShaderSystem::CParameter *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CParameter*) pObjXXXX;
					const EarthView::World::Graphic::RTShaderSystem::CParameter::Semantic& __values1 = pObjectX->getSemantic();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_rtshadersystem_Parameter_getIndex_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Graphic::RTShaderSystem::CParameter *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CParameter*) pObjXXXX;
					ev_int32 __values1 = pObjectX->getIndex();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_rtshadersystem_Parameter_getContent_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Graphic::RTShaderSystem::CParameter *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CParameter*) pObjXXXX;
					EarthView::World::Graphic::RTShaderSystem::CParameter::Content __values1 = pObjectX->getContent();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_rtshadersystem_Parameter_isConstParameter_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Graphic::RTShaderSystem::CParameter *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CParameter*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCParameterProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Graphic::RTShaderSystem::CParameter::isConstParameter();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->isConstParameter();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_Parameter_register_1isConstParameter_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCParameterProxy *pObjectX = (JCParameterProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_isConstParameter_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"isConstParameter_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_rtshadersystem_Parameter_isConstParameter_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Graphic::RTShaderSystem::CParameter *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CParameter*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Graphic::RTShaderSystem::CParameter::isConstParameter();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_rtshadersystem_Parameter_ev_1toString_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Graphic::RTShaderSystem::CParameter *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CParameter*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCParameterProxy))
					{
						EVString __values1 = pObjectX->EarthView::World::Graphic::RTShaderSystem::CParameter::toString();
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
					else
					{
						EVString __values1 = pObjectX->toString();
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_Parameter_register_1ev_1toString_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCParameterProxy *pObjectX = (JCParameterProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_ev_toString_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"ev_toString_void_callback", "()Ljava/lang/String;");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_rtshadersystem_Parameter_ev_1toString_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Graphic::RTShaderSystem::CParameter *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CParameter*) pObjXXXX;
					EVString __values1 = pObjectX->EarthView::World::Graphic::RTShaderSystem::CParameter::toString();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_rtshadersystem_Parameter_isArray_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Graphic::RTShaderSystem::CParameter *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CParameter*) pObjXXXX;
					ev_bool __values1 = pObjectX->isArray();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_Parameter_getSize_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Graphic::RTShaderSystem::CParameter *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CParameter*) pObjXXXX;
					ev_size_t __values1 = pObjectX->getSize();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_Parameter_setSize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong size_j)
				{
					ev_size_t size = (ev_size_t) size_j;
					EarthView::World::Graphic::RTShaderSystem::CParameter *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CParameter*) pObjXXXX;
					pObjectX->setSize(size);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_ParameterPtr_get_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Graphic::RTShaderSystem::ParameterPtr *pObjectX = (EarthView::World::Graphic::RTShaderSystem::ParameterPtr*) pObjXXXX;
					EarthView::World::Graphic::RTShaderSystem::CParameter* __values1 = pObjectX->get();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderParameterList_push_1back_1ParameterPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
				{
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr t = *(EarthView::World::Graphic::RTShaderSystem::ParameterPtr*) t_j;
					EarthView::World::Graphic::RTShaderSystem::ShaderParameterList *pObjectX = (EarthView::World::Graphic::RTShaderSystem::ShaderParameterList*) pObjXXXX;
					pObjectX->push_back(t);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderParameterList_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::ShaderParameterList *pObjectX = (EarthView::World::Graphic::RTShaderSystem::ShaderParameterList*) pObjXXXX;
					pObjectX->pop_back();
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderParameterList_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::ShaderParameterList *pObjectX = (EarthView::World::Graphic::RTShaderSystem::ShaderParameterList*) pObjXXXX;
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr& __values1 = pObjectX->front();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderParameterList_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::ShaderParameterList *pObjectX = (EarthView::World::Graphic::RTShaderSystem::ShaderParameterList*) pObjXXXX;
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr& __values1 = pObjectX->back();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderParameterList_insert_1ev_1uint32_1ParameterPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong t_j)
				{
					ev_uint32 pos = (ev_uint32) pos_j;
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr &t = *(EarthView::World::Graphic::RTShaderSystem::ParameterPtr*) t_j;
					EarthView::World::Graphic::RTShaderSystem::ShaderParameterList *pObjectX = (EarthView::World::Graphic::RTShaderSystem::ShaderParameterList*) pObjXXXX;
					pObjectX->insert(pos, t);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderParameterList_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
				{
					ev_size_t pos = (ev_size_t) pos_j;
					EarthView::World::Graphic::RTShaderSystem::ShaderParameterList *pObjectX = (EarthView::World::Graphic::RTShaderSystem::ShaderParameterList*) pObjXXXX;
					pObjectX->remove(pos);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderParameterList_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Graphic::RTShaderSystem::ShaderParameterList *pObjectX = (EarthView::World::Graphic::RTShaderSystem::ShaderParameterList*) pObjXXXX;
					ev_bool __values1 = pObjectX->empty();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderParameterList_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong n_j )
				{
					EarthView::World::Graphic::RTShaderSystem::ShaderParameterList& pObjectX = *(EarthView::World::Graphic::RTShaderSystem::ShaderParameterList*) pObjXXXX;
					ev_size_t n = (ev_size_t) n_j;
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr& __values1 = pObjectX[n];
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderParameterList_at_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
				{
					ev_size_t n = (ev_size_t) n_j;
					EarthView::World::Graphic::RTShaderSystem::ShaderParameterList *pObjectX = (EarthView::World::Graphic::RTShaderSystem::ShaderParameterList*) pObjXXXX;
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr& __values1 = pObjectX->at(n);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderParameterList_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Graphic::RTShaderSystem::ShaderParameterList *pObjectX = (EarthView::World::Graphic::RTShaderSystem::ShaderParameterList*) pObjXXXX;
					ev_size_t __values1 = pObjectX->size();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderParameterList_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
				{
					ev_size_t newSize = (ev_size_t) newSize_j;
					EarthView::World::Graphic::RTShaderSystem::ShaderParameterList *pObjectX = (EarthView::World::Graphic::RTShaderSystem::ShaderParameterList*) pObjXXXX;
					pObjectX->resize(newSize);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderParameterList_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
				{
					ev_size_t count = (ev_size_t) count_j;
					EarthView::World::Graphic::RTShaderSystem::ShaderParameterList *pObjectX = (EarthView::World::Graphic::RTShaderSystem::ShaderParameterList*) pObjXXXX;
					pObjectX->reserve(count);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderParameterList_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::ShaderParameterList *pObjectX = (EarthView::World::Graphic::RTShaderSystem::ShaderParameterList*) pObjXXXX;
					pObjectX->clear();
				}
				class JCUniformParameterProxy : public EarthView::World::Graphic::RTShaderSystem::CUniformParameter
				{
				 private:
					EarthView::World::Core::ev_string m_isConstParameter_void_callback;
					EarthView::World::Core::ev_string m_ev_toString_void_callback;
				public:
					JCUniformParameterProxy(EarthView::World::Core::CNameValuePairList *pList) : CUniformParameter(pList)
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
					void register_isConstParameter_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_isConstParameter_void_callback = __method;
					}
					void register_ev_toString_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_ev_toString_void_callback = __method;
					}
					virtual ev_bool isConstParameter() const
					{
						if (this->_gRef != NULL && this->m_isConstParameter_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("isConstParameter_void_callback");
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
							return this->CUniformParameter::isConstParameter();
						}
					}
					virtual EVString toString() const
					{
						if (this->_gRef != NULL && this->m_ev_toString_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("ev_toString_void_callback");
							jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							const char* values_ch = __env->GetStringUTFChars(__values1_j,JNI_FALSE);
							EVString __values1 = values_ch;
							__env->ReleaseStringUTFChars(__values1_j,values_ch);
							#else
							const ev_wchar* values_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
							EVString __values1 = values_ch;
							__env->ReleaseStringChars(__values1_j,(const jchar *)values_ch);
							#endif
							return __values1;
						}
						else
						{
							return this->CUniformParameter::toString();
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCUniformParameterProxy);
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_UniformParameter_getAutoConstantIntData_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Graphic::RTShaderSystem::CUniformParameter *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CUniformParameter*) pObjXXXX;
					ev_size_t __values1 = pObjectX->getAutoConstantIntData();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_rtshadersystem_UniformParameter_getAutoConstantRealData_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Graphic::RTShaderSystem::CUniformParameter *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CUniformParameter*) pObjXXXX;
					Real __values1 = pObjectX->getAutoConstantRealData();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_rtshadersystem_UniformParameter_isFloat_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Graphic::RTShaderSystem::CUniformParameter *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CUniformParameter*) pObjXXXX;
					ev_bool __values1 = pObjectX->isFloat();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_rtshadersystem_UniformParameter_isSampler_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Graphic::RTShaderSystem::CUniformParameter *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CUniformParameter*) pObjXXXX;
					ev_bool __values1 = pObjectX->isSampler();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_rtshadersystem_UniformParameter_isAutoConstantParameter_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Graphic::RTShaderSystem::CUniformParameter *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CUniformParameter*) pObjXXXX;
					ev_bool __values1 = pObjectX->isAutoConstantParameter();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_rtshadersystem_UniformParameter_isAutoConstantIntParameter_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Graphic::RTShaderSystem::CUniformParameter *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CUniformParameter*) pObjXXXX;
					ev_bool __values1 = pObjectX->isAutoConstantIntParameter();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_rtshadersystem_UniformParameter_isAutoConstantRealParameter_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Graphic::RTShaderSystem::CUniformParameter *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CUniformParameter*) pObjXXXX;
					ev_bool __values1 = pObjectX->isAutoConstantRealParameter();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_rtshadersystem_UniformParameter_getAutoConstantType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Graphic::RTShaderSystem::CUniformParameter *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CUniformParameter*) pObjXXXX;
					EarthView::World::Graphic::CGpuProgramParameters::AutoConstantType __values1 = pObjectX->getAutoConstantType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_rtshadersystem_UniformParameter_getVariability_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Graphic::RTShaderSystem::CUniformParameter *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CUniformParameter*) pObjXXXX;
					ev_uint16 __values1 = pObjectX->getVariability();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_UniformParameter_bind_1GpuProgramParametersSharedPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong paramsPtr_j)
				{
					EarthView::World::Graphic::GpuProgramParametersSharedPtr paramsPtr = *(EarthView::World::Graphic::GpuProgramParametersSharedPtr*) paramsPtr_j;
					EarthView::World::Graphic::RTShaderSystem::CUniformParameter *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CUniformParameter*) pObjXXXX;
					pObjectX->bind(paramsPtr);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_UniformParameter_setGpuParameter_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint val_j)
				{
					ev_int32 val = (ev_int32) val_j;
					EarthView::World::Graphic::RTShaderSystem::CUniformParameter *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CUniformParameter*) pObjXXXX;
					pObjectX->setGpuParameter(val);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_UniformParameter_setGpuParameter_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble val_j)
				{
					Real val = (Real) val_j;
					EarthView::World::Graphic::RTShaderSystem::CUniformParameter *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CUniformParameter*) pObjXXXX;
					pObjectX->setGpuParameter(val);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_UniformParameter_setGpuParameter_1CColourValue(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong val_j)
				{
					const EarthView::World::Graphic::CColourValue &val = *(EarthView::World::Graphic::CColourValue*) val_j;
					EarthView::World::Graphic::RTShaderSystem::CUniformParameter *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CUniformParameter*) pObjXXXX;
					pObjectX->setGpuParameter(val);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_UniformParameter_setGpuParameter_1CVector2(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong val_j)
				{
					const EarthView::World::Spatial::Math::CVector2 &val = *(EarthView::World::Spatial::Math::CVector2*) val_j;
					EarthView::World::Graphic::RTShaderSystem::CUniformParameter *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CUniformParameter*) pObjXXXX;
					pObjectX->setGpuParameter(val);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_UniformParameter_setGpuParameter_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong val_j)
				{
					const EarthView::World::Spatial::Math::CVector3 &val = *(EarthView::World::Spatial::Math::CVector3*) val_j;
					EarthView::World::Graphic::RTShaderSystem::CUniformParameter *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CUniformParameter*) pObjXXXX;
					pObjectX->setGpuParameter(val);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_UniformParameter_setGpuParameter_1CVector4(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong val_j)
				{
					const EarthView::World::Spatial::Math::CVector4 &val = *(EarthView::World::Spatial::Math::CVector4*) val_j;
					EarthView::World::Graphic::RTShaderSystem::CUniformParameter *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CUniformParameter*) pObjXXXX;
					pObjectX->setGpuParameter(val);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_UniformParameter_setGpuParameter_1CMatrix4(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong val_j)
				{
					const EarthView::World::Spatial::Math::CMatrix4 &val = *(EarthView::World::Spatial::Math::CMatrix4*) val_j;
					EarthView::World::Graphic::RTShaderSystem::CUniformParameter *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CUniformParameter*) pObjXXXX;
					pObjectX->setGpuParameter(val);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_UniformParameter_setGpuParameter_1float_1ev_1size_1t_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong val_j, jlong count_j, jlong multiple_j)
				{
					const float *val = (const float*) val_j;
					ev_size_t count = (ev_size_t) count_j;
					ev_size_t multiple = (ev_size_t) multiple_j;
					EarthView::World::Graphic::RTShaderSystem::CUniformParameter *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CUniformParameter*) pObjXXXX;
					pObjectX->setGpuParameter(val, count, multiple);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_UniformParameter_setGpuParameter_1float_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong val_j, jlong count_j)
				{
					const float *val = (const float*) val_j;
					ev_size_t count = (ev_size_t) count_j;
					EarthView::World::Graphic::RTShaderSystem::CUniformParameter *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CUniformParameter*) pObjXXXX;
					pObjectX->setGpuParameter(val, count);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_UniformParameter_setGpuParameter_1double_1ev_1size_1t_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong val_j, jlong count_j, jlong multiple_j)
				{
					const double *val = (const double*) val_j;
					ev_size_t count = (ev_size_t) count_j;
					ev_size_t multiple = (ev_size_t) multiple_j;
					EarthView::World::Graphic::RTShaderSystem::CUniformParameter *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CUniformParameter*) pObjXXXX;
					pObjectX->setGpuParameter(val, count, multiple);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_UniformParameter_setGpuParameter_1double_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong val_j, jlong count_j)
				{
					const double *val = (const double*) val_j;
					ev_size_t count = (ev_size_t) count_j;
					EarthView::World::Graphic::RTShaderSystem::CUniformParameter *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CUniformParameter*) pObjXXXX;
					pObjectX->setGpuParameter(val, count);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_UniformParameter_setGpuParameter_1ev_1int32_1ev_1size_1t_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong val_j, jlong count_j, jlong multiple_j)
				{
					const ev_int32 *val = (const ev_int32*) val_j;
					ev_size_t count = (ev_size_t) count_j;
					ev_size_t multiple = (ev_size_t) multiple_j;
					EarthView::World::Graphic::RTShaderSystem::CUniformParameter *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CUniformParameter*) pObjXXXX;
					pObjectX->setGpuParameter(val, count, multiple);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_UniformParameter_setGpuParameter_1ev_1int32_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong val_j, jlong count_j)
				{
					const ev_int32 *val = (const ev_int32*) val_j;
					ev_size_t count = (ev_size_t) count_j;
					EarthView::World::Graphic::RTShaderSystem::CUniformParameter *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CUniformParameter*) pObjXXXX;
					pObjectX->setGpuParameter(val, count);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_UniformParameter_register_1isConstParameter_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCUniformParameterProxy *pObjectX = (JCUniformParameterProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_isConstParameter_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"isConstParameter_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_UniformParameter_register_1ev_1toString_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCUniformParameterProxy *pObjectX = (JCUniformParameterProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_ev_toString_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"ev_toString_void_callback", "()Ljava/lang/String;");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_UniformParameterPtr_get_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr *pObjectX = (EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr*) pObjXXXX;
					EarthView::World::Graphic::RTShaderSystem::CUniformParameter* __values1 = pObjectX->get();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_UniformParameterPtr_OperatorConvertionParameterPtr_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr& pObjectX = *(EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr*) pObjXXXX;
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr __values1 = pObjectX ;
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr *returnvalues = new EarthView::World::Graphic::RTShaderSystem::ParameterPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_UniformParameterList_push_1back_1UniformParameterPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
				{
					EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr t = *(EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr*) t_j;
					EarthView::World::Graphic::RTShaderSystem::UniformParameterList *pObjectX = (EarthView::World::Graphic::RTShaderSystem::UniformParameterList*) pObjXXXX;
					pObjectX->push_back(t);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_UniformParameterList_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::UniformParameterList *pObjectX = (EarthView::World::Graphic::RTShaderSystem::UniformParameterList*) pObjXXXX;
					pObjectX->pop_back();
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_UniformParameterList_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::UniformParameterList *pObjectX = (EarthView::World::Graphic::RTShaderSystem::UniformParameterList*) pObjXXXX;
					EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr& __values1 = pObjectX->front();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_UniformParameterList_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::UniformParameterList *pObjectX = (EarthView::World::Graphic::RTShaderSystem::UniformParameterList*) pObjXXXX;
					EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr& __values1 = pObjectX->back();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_UniformParameterList_insert_1ev_1uint32_1UniformParameterPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong t_j)
				{
					ev_uint32 pos = (ev_uint32) pos_j;
					EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr &t = *(EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr*) t_j;
					EarthView::World::Graphic::RTShaderSystem::UniformParameterList *pObjectX = (EarthView::World::Graphic::RTShaderSystem::UniformParameterList*) pObjXXXX;
					pObjectX->insert(pos, t);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_UniformParameterList_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
				{
					ev_size_t pos = (ev_size_t) pos_j;
					EarthView::World::Graphic::RTShaderSystem::UniformParameterList *pObjectX = (EarthView::World::Graphic::RTShaderSystem::UniformParameterList*) pObjXXXX;
					pObjectX->remove(pos);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_rtshadersystem_UniformParameterList_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Graphic::RTShaderSystem::UniformParameterList *pObjectX = (EarthView::World::Graphic::RTShaderSystem::UniformParameterList*) pObjXXXX;
					ev_bool __values1 = pObjectX->empty();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_UniformParameterList_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong n_j )
				{
					EarthView::World::Graphic::RTShaderSystem::UniformParameterList& pObjectX = *(EarthView::World::Graphic::RTShaderSystem::UniformParameterList*) pObjXXXX;
					ev_size_t n = (ev_size_t) n_j;
					EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr& __values1 = pObjectX[n];
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_UniformParameterList_at_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
				{
					ev_size_t n = (ev_size_t) n_j;
					EarthView::World::Graphic::RTShaderSystem::UniformParameterList *pObjectX = (EarthView::World::Graphic::RTShaderSystem::UniformParameterList*) pObjXXXX;
					EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr& __values1 = pObjectX->at(n);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_UniformParameterList_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Graphic::RTShaderSystem::UniformParameterList *pObjectX = (EarthView::World::Graphic::RTShaderSystem::UniformParameterList*) pObjXXXX;
					ev_size_t __values1 = pObjectX->size();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_UniformParameterList_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
				{
					ev_size_t newSize = (ev_size_t) newSize_j;
					EarthView::World::Graphic::RTShaderSystem::UniformParameterList *pObjectX = (EarthView::World::Graphic::RTShaderSystem::UniformParameterList*) pObjXXXX;
					pObjectX->resize(newSize);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_UniformParameterList_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
				{
					ev_size_t count = (ev_size_t) count_j;
					EarthView::World::Graphic::RTShaderSystem::UniformParameterList *pObjectX = (EarthView::World::Graphic::RTShaderSystem::UniformParameterList*) pObjXXXX;
					pObjectX->reserve(count);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_UniformParameterList_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::UniformParameterList *pObjectX = (EarthView::World::Graphic::RTShaderSystem::UniformParameterList*) pObjXXXX;
					pObjectX->clear();
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_ParameterFactory_createInPosition_1ev_1int32(JNIEnv *__env , jclass __clazz, jint index_j)
				{
					ev_int32 index = (ev_int32) index_j;
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr __values1 = EarthView::World::Graphic::RTShaderSystem::CParameterFactory::createInPosition(index);
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr *returnvalues = new EarthView::World::Graphic::RTShaderSystem::ParameterPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_ParameterFactory_createOutPosition_1ev_1int32(JNIEnv *__env , jclass __clazz, jint index_j)
				{
					ev_int32 index = (ev_int32) index_j;
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr __values1 = EarthView::World::Graphic::RTShaderSystem::CParameterFactory::createOutPosition(index);
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr *returnvalues = new EarthView::World::Graphic::RTShaderSystem::ParameterPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_ParameterFactory_createInNormal_1ev_1int32(JNIEnv *__env , jclass __clazz, jint index_j)
				{
					ev_int32 index = (ev_int32) index_j;
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr __values1 = EarthView::World::Graphic::RTShaderSystem::CParameterFactory::createInNormal(index);
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr *returnvalues = new EarthView::World::Graphic::RTShaderSystem::ParameterPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_ParameterFactory_createInWeights_1ev_1int32(JNIEnv *__env , jclass __clazz, jint index_j)
				{
					ev_int32 index = (ev_int32) index_j;
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr __values1 = EarthView::World::Graphic::RTShaderSystem::CParameterFactory::createInWeights(index);
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr *returnvalues = new EarthView::World::Graphic::RTShaderSystem::ParameterPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_ParameterFactory_createInIndices_1ev_1int32(JNIEnv *__env , jclass __clazz, jint index_j)
				{
					ev_int32 index = (ev_int32) index_j;
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr __values1 = EarthView::World::Graphic::RTShaderSystem::CParameterFactory::createInIndices(index);
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr *returnvalues = new EarthView::World::Graphic::RTShaderSystem::ParameterPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_ParameterFactory_createOutNormal_1ev_1int32(JNIEnv *__env , jclass __clazz, jint index_j)
				{
					ev_int32 index = (ev_int32) index_j;
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr __values1 = EarthView::World::Graphic::RTShaderSystem::CParameterFactory::createOutNormal(index);
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr *returnvalues = new EarthView::World::Graphic::RTShaderSystem::ParameterPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_ParameterFactory_createInBiNormal_1ev_1int32(JNIEnv *__env , jclass __clazz, jint index_j)
				{
					ev_int32 index = (ev_int32) index_j;
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr __values1 = EarthView::World::Graphic::RTShaderSystem::CParameterFactory::createInBiNormal(index);
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr *returnvalues = new EarthView::World::Graphic::RTShaderSystem::ParameterPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_ParameterFactory_createOutBiNormal_1ev_1int32(JNIEnv *__env , jclass __clazz, jint index_j)
				{
					ev_int32 index = (ev_int32) index_j;
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr __values1 = EarthView::World::Graphic::RTShaderSystem::CParameterFactory::createOutBiNormal(index);
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr *returnvalues = new EarthView::World::Graphic::RTShaderSystem::ParameterPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_ParameterFactory_createInTangent_1ev_1int32(JNIEnv *__env , jclass __clazz, jint index_j)
				{
					ev_int32 index = (ev_int32) index_j;
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr __values1 = EarthView::World::Graphic::RTShaderSystem::CParameterFactory::createInTangent(index);
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr *returnvalues = new EarthView::World::Graphic::RTShaderSystem::ParameterPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_ParameterFactory_createOutTangent_1ev_1int32(JNIEnv *__env , jclass __clazz, jint index_j)
				{
					ev_int32 index = (ev_int32) index_j;
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr __values1 = EarthView::World::Graphic::RTShaderSystem::CParameterFactory::createOutTangent(index);
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr *returnvalues = new EarthView::World::Graphic::RTShaderSystem::ParameterPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_ParameterFactory_createInColor_1ev_1int32(JNIEnv *__env , jclass __clazz, jint index_j)
				{
					ev_int32 index = (ev_int32) index_j;
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr __values1 = EarthView::World::Graphic::RTShaderSystem::CParameterFactory::createInColor(index);
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr *returnvalues = new EarthView::World::Graphic::RTShaderSystem::ParameterPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_ParameterFactory_createOutColor_1ev_1int32(JNIEnv *__env , jclass __clazz, jint index_j)
				{
					ev_int32 index = (ev_int32) index_j;
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr __values1 = EarthView::World::Graphic::RTShaderSystem::CParameterFactory::createOutColor(index);
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr *returnvalues = new EarthView::World::Graphic::RTShaderSystem::ParameterPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_ParameterFactory_createInTexcoord_1GpuConstantType_1ev_1int32_1Content(JNIEnv *__env , jclass __clazz, jint type_j, jint index_j, jint content_j)
				{
					EarthView::World::Graphic::GpuConstantType type = (EarthView::World::Graphic::GpuConstantType) type_j;
					ev_int32 index = (ev_int32) index_j;
					EarthView::World::Graphic::RTShaderSystem::CParameter::Content content = (EarthView::World::Graphic::RTShaderSystem::CParameter::Content) content_j;
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr __values1 = EarthView::World::Graphic::RTShaderSystem::CParameterFactory::createInTexcoord(type, index, content);
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr *returnvalues = new EarthView::World::Graphic::RTShaderSystem::ParameterPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_ParameterFactory_createOutTexcoord_1GpuConstantType_1ev_1int32_1Content(JNIEnv *__env , jclass __clazz, jint type_j, jint index_j, jint content_j)
				{
					EarthView::World::Graphic::GpuConstantType type = (EarthView::World::Graphic::GpuConstantType) type_j;
					ev_int32 index = (ev_int32) index_j;
					EarthView::World::Graphic::RTShaderSystem::CParameter::Content content = (EarthView::World::Graphic::RTShaderSystem::CParameter::Content) content_j;
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr __values1 = EarthView::World::Graphic::RTShaderSystem::CParameterFactory::createOutTexcoord(type, index, content);
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr *returnvalues = new EarthView::World::Graphic::RTShaderSystem::ParameterPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_ParameterFactory_createInTexcoord1_1ev_1int32_1Content(JNIEnv *__env , jclass __clazz, jint index_j, jint content_j)
				{
					ev_int32 index = (ev_int32) index_j;
					EarthView::World::Graphic::RTShaderSystem::CParameter::Content content = (EarthView::World::Graphic::RTShaderSystem::CParameter::Content) content_j;
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr __values1 = EarthView::World::Graphic::RTShaderSystem::CParameterFactory::createInTexcoord1(index, content);
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr *returnvalues = new EarthView::World::Graphic::RTShaderSystem::ParameterPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_ParameterFactory_createOutTexcoord1_1ev_1int32_1Content(JNIEnv *__env , jclass __clazz, jint index_j, jint content_j)
				{
					ev_int32 index = (ev_int32) index_j;
					EarthView::World::Graphic::RTShaderSystem::CParameter::Content content = (EarthView::World::Graphic::RTShaderSystem::CParameter::Content) content_j;
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr __values1 = EarthView::World::Graphic::RTShaderSystem::CParameterFactory::createOutTexcoord1(index, content);
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr *returnvalues = new EarthView::World::Graphic::RTShaderSystem::ParameterPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_ParameterFactory_createInTexcoord2_1ev_1int32_1Content(JNIEnv *__env , jclass __clazz, jint index_j, jint content_j)
				{
					ev_int32 index = (ev_int32) index_j;
					EarthView::World::Graphic::RTShaderSystem::CParameter::Content content = (EarthView::World::Graphic::RTShaderSystem::CParameter::Content) content_j;
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr __values1 = EarthView::World::Graphic::RTShaderSystem::CParameterFactory::createInTexcoord2(index, content);
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr *returnvalues = new EarthView::World::Graphic::RTShaderSystem::ParameterPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_ParameterFactory_createOutTexcoord2_1ev_1int32_1Content(JNIEnv *__env , jclass __clazz, jint index_j, jint content_j)
				{
					ev_int32 index = (ev_int32) index_j;
					EarthView::World::Graphic::RTShaderSystem::CParameter::Content content = (EarthView::World::Graphic::RTShaderSystem::CParameter::Content) content_j;
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr __values1 = EarthView::World::Graphic::RTShaderSystem::CParameterFactory::createOutTexcoord2(index, content);
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr *returnvalues = new EarthView::World::Graphic::RTShaderSystem::ParameterPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_ParameterFactory_createInTexcoord3_1ev_1int32_1Content(JNIEnv *__env , jclass __clazz, jint index_j, jint content_j)
				{
					ev_int32 index = (ev_int32) index_j;
					EarthView::World::Graphic::RTShaderSystem::CParameter::Content content = (EarthView::World::Graphic::RTShaderSystem::CParameter::Content) content_j;
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr __values1 = EarthView::World::Graphic::RTShaderSystem::CParameterFactory::createInTexcoord3(index, content);
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr *returnvalues = new EarthView::World::Graphic::RTShaderSystem::ParameterPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_ParameterFactory_createOutTexcoord3_1ev_1int32_1Content(JNIEnv *__env , jclass __clazz, jint index_j, jint content_j)
				{
					ev_int32 index = (ev_int32) index_j;
					EarthView::World::Graphic::RTShaderSystem::CParameter::Content content = (EarthView::World::Graphic::RTShaderSystem::CParameter::Content) content_j;
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr __values1 = EarthView::World::Graphic::RTShaderSystem::CParameterFactory::createOutTexcoord3(index, content);
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr *returnvalues = new EarthView::World::Graphic::RTShaderSystem::ParameterPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_ParameterFactory_createInTexcoord4_1ev_1int32_1Content(JNIEnv *__env , jclass __clazz, jint index_j, jint content_j)
				{
					ev_int32 index = (ev_int32) index_j;
					EarthView::World::Graphic::RTShaderSystem::CParameter::Content content = (EarthView::World::Graphic::RTShaderSystem::CParameter::Content) content_j;
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr __values1 = EarthView::World::Graphic::RTShaderSystem::CParameterFactory::createInTexcoord4(index, content);
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr *returnvalues = new EarthView::World::Graphic::RTShaderSystem::ParameterPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_ParameterFactory_createOutTexcoord4_1ev_1int32_1Content(JNIEnv *__env , jclass __clazz, jint index_j, jint content_j)
				{
					ev_int32 index = (ev_int32) index_j;
					EarthView::World::Graphic::RTShaderSystem::CParameter::Content content = (EarthView::World::Graphic::RTShaderSystem::CParameter::Content) content_j;
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr __values1 = EarthView::World::Graphic::RTShaderSystem::CParameterFactory::createOutTexcoord4(index, content);
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr *returnvalues = new EarthView::World::Graphic::RTShaderSystem::ParameterPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_ParameterFactory_createConstParamVector2_1CVector2(JNIEnv *__env , jclass __clazz, jlong val_j)
				{
					EarthView::World::Spatial::Math::CVector2 val = *(EarthView::World::Spatial::Math::CVector2*) val_j;
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr __values1 = EarthView::World::Graphic::RTShaderSystem::CParameterFactory::createConstParamVector2(val);
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr *returnvalues = new EarthView::World::Graphic::RTShaderSystem::ParameterPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_ParameterFactory_createConstParamVector3_1CVector3(JNIEnv *__env , jclass __clazz, jlong val_j)
				{
					EarthView::World::Spatial::Math::CVector3 val = *(EarthView::World::Spatial::Math::CVector3*) val_j;
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr __values1 = EarthView::World::Graphic::RTShaderSystem::CParameterFactory::createConstParamVector3(val);
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr *returnvalues = new EarthView::World::Graphic::RTShaderSystem::ParameterPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_ParameterFactory_createConstParamVector4_1CVector4(JNIEnv *__env , jclass __clazz, jlong val_j)
				{
					EarthView::World::Spatial::Math::CVector4 val = *(EarthView::World::Spatial::Math::CVector4*) val_j;
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr __values1 = EarthView::World::Graphic::RTShaderSystem::CParameterFactory::createConstParamVector4(val);
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr *returnvalues = new EarthView::World::Graphic::RTShaderSystem::ParameterPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_ParameterFactory_createConstParamFloat_1float(JNIEnv *__env , jclass __clazz, jfloat val_j)
				{
					float val = (float) val_j;
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr __values1 = EarthView::World::Graphic::RTShaderSystem::CParameterFactory::createConstParamFloat(val);
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr *returnvalues = new EarthView::World::Graphic::RTShaderSystem::ParameterPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_ParameterFactory_createSampler_1GpuConstantType_1ev_1int32(JNIEnv *__env , jclass __clazz, jint type_j, jint index_j)
				{
					EarthView::World::Graphic::GpuConstantType type = (EarthView::World::Graphic::GpuConstantType) type_j;
					ev_int32 index = (ev_int32) index_j;
					EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr __values1 = EarthView::World::Graphic::RTShaderSystem::CParameterFactory::createSampler(type, index);
					EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr *returnvalues = new EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_ParameterFactory_createSampler1D_1ev_1int32(JNIEnv *__env , jclass __clazz, jint index_j)
				{
					ev_int32 index = (ev_int32) index_j;
					EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr __values1 = EarthView::World::Graphic::RTShaderSystem::CParameterFactory::createSampler1D(index);
					EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr *returnvalues = new EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_ParameterFactory_createSampler2D_1ev_1int32(JNIEnv *__env , jclass __clazz, jint index_j)
				{
					ev_int32 index = (ev_int32) index_j;
					EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr __values1 = EarthView::World::Graphic::RTShaderSystem::CParameterFactory::createSampler2D(index);
					EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr *returnvalues = new EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_ParameterFactory_createSampler2DArray_1ev_1int32(JNIEnv *__env , jclass __clazz, jint index_j)
				{
					ev_int32 index = (ev_int32) index_j;
					EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr __values1 = EarthView::World::Graphic::RTShaderSystem::CParameterFactory::createSampler2DArray(index);
					EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr *returnvalues = new EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_ParameterFactory_createSampler3D_1ev_1int32(JNIEnv *__env , jclass __clazz, jint index_j)
				{
					ev_int32 index = (ev_int32) index_j;
					EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr __values1 = EarthView::World::Graphic::RTShaderSystem::CParameterFactory::createSampler3D(index);
					EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr *returnvalues = new EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_ParameterFactory_createSamplerCUBE_1ev_1int32(JNIEnv *__env , jclass __clazz, jint index_j)
				{
					ev_int32 index = (ev_int32) index_j;
					EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr __values1 = EarthView::World::Graphic::RTShaderSystem::CParameterFactory::createSamplerCUBE(index);
					EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr *returnvalues = new EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_ParameterFactory_createUniform_1GpuConstantType_1ev_1int32_1ev_1uint16_1EVString_1ev_1size_1t(JNIEnv *__env , jclass __clazz, jint type_j, jint index_j, jint variability_j, jstring suggestedName_j, jlong size_j)
				{
					EarthView::World::Graphic::GpuConstantType type = (EarthView::World::Graphic::GpuConstantType) type_j;
					ev_int32 index = (ev_int32) index_j;
					ev_uint16 variability = (ev_uint16) variability_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* suggestedName_ch = (const ev_char*)__env->GetStringUTFChars(suggestedName_j,JNI_FALSE);
					const EVString suggestedName = suggestedName_ch;
					__env->ReleaseStringUTFChars(suggestedName_j, (const char *)suggestedName_ch);
					#else
					const ev_wchar* suggestedName_ch = (const ev_wchar*)__env->GetStringChars(suggestedName_j,JNI_FALSE);
					const EVString suggestedName = suggestedName_ch;
					__env->ReleaseStringChars(suggestedName_j, (const jchar *)suggestedName_ch);
					#endif
					ev_size_t size = (ev_size_t) size_j;
					EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr __values1 = EarthView::World::Graphic::RTShaderSystem::CParameterFactory::createUniform(type, index, variability, suggestedName, size);
					EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr *returnvalues = new EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
		}
	}
}
