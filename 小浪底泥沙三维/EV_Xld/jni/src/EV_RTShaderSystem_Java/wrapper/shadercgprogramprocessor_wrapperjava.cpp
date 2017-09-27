/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "rtshadersystem/shadercgprogramprocessor.h"
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
				class JCCGProgramProcessorProxy : public EarthView::World::Graphic::RTShaderSystem::CCGProgramProcessor
				{
				 private:
					EarthView::World::Core::ev_string m_getTargetLanguage_void_callback;
					EarthView::World::Core::ev_string m_preCreateGpuPrograms_CProgramSet_callback;
					EarthView::World::Core::ev_string m_postCreateGpuPrograms_CProgramSet_callback;
					EarthView::World::Core::ev_string m_compactVsOutputs_CFunction_CFunction_callback;
				public:
					JCCGProgramProcessorProxy(EarthView::World::Core::CNameValuePairList *pList) : CCGProgramProcessor(pList)
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
					void register_getTargetLanguage_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getTargetLanguage_void_callback = __method;
					}
					void register_preCreateGpuPrograms_CProgramSet_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_preCreateGpuPrograms_CProgramSet_callback = __method;
					}
					void register_postCreateGpuPrograms_CProgramSet_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_postCreateGpuPrograms_CProgramSet_callback = __method;
					}
					void register_compactVsOutputs_CFunction_CFunction_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_compactVsOutputs_CFunction_CFunction_callback = __method;
					}
					virtual EVString getTargetLanguage() const
					{
						if (this->_gRef != NULL && this->m_getTargetLanguage_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getTargetLanguage_void_callback");
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
							return this->CCGProgramProcessor::getTargetLanguage();
						}
					}
					virtual bool preCreateGpuPrograms(EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet)
					{
						if (this->_gRef != NULL && this->m_preCreateGpuPrograms_CProgramSet_callback != "" && this->isCustomExtend())
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
							jlong programSet_j = (jlong) programSet;
							jmethodID __method = __gr->getMethod("preCreateGpuPrograms_CProgramSet_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , programSet_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							bool __values1 = (bool) __values1_j;
							return __values1;
						}
						else
						{
							return this->CCGProgramProcessor::preCreateGpuPrograms(programSet);
						}
					}
					virtual bool postCreateGpuPrograms(EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet)
					{
						if (this->_gRef != NULL && this->m_postCreateGpuPrograms_CProgramSet_callback != "" && this->isCustomExtend())
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
							jlong programSet_j = (jlong) programSet;
							jmethodID __method = __gr->getMethod("postCreateGpuPrograms_CProgramSet_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , programSet_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							bool __values1 = (bool) __values1_j;
							return __values1;
						}
						else
						{
							return this->CCGProgramProcessor::postCreateGpuPrograms(programSet);
						}
					}
					virtual bool compactVsOutputs(EarthView::World::Graphic::RTShaderSystem::CFunction* vsMain, EarthView::World::Graphic::RTShaderSystem::CFunction* fsMain)
					{
						if (this->_gRef != NULL && this->m_compactVsOutputs_CFunction_CFunction_callback != "" && this->isCustomExtend())
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
							jlong vsMain_j = (jlong) vsMain;
							jlong fsMain_j = (jlong) fsMain;
							jmethodID __method = __gr->getMethod("compactVsOutputs_CFunction_CFunction_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , vsMain_j, fsMain_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							bool __values1 = (bool) __values1_j;
							return __values1;
						}
						else
						{
							return this->CCGProgramProcessor::compactVsOutputs(vsMain, fsMain);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCCGProgramProcessorProxy);
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_rtshadersystem_Cgprogramprocessor_getTargetLanguage_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Graphic::RTShaderSystem::CCGProgramProcessor *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CCGProgramProcessor*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCCGProgramProcessorProxy))
					{
						EVString __values1 = pObjectX->EarthView::World::Graphic::RTShaderSystem::CCGProgramProcessor::getTargetLanguage();
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
					else
					{
						EVString __values1 = pObjectX->getTargetLanguage();
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_Cgprogramprocessor_register_1getTargetLanguage_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCGProgramProcessorProxy *pObjectX = (JCCGProgramProcessorProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getTargetLanguage_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getTargetLanguage_void_callback", "()Ljava/lang/String;");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_rtshadersystem_Cgprogramprocessor_getTargetLanguage_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Graphic::RTShaderSystem::CCGProgramProcessor *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CCGProgramProcessor*) pObjXXXX;
					EVString __values1 = pObjectX->EarthView::World::Graphic::RTShaderSystem::CCGProgramProcessor::getTargetLanguage();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_rtshadersystem_Cgprogramprocessor_preCreateGpuPrograms_1CProgramSet(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong programSet_j)
				{
					EarthView::World::Graphic::RTShaderSystem::CProgramSet *programSet = (EarthView::World::Graphic::RTShaderSystem::CProgramSet*) programSet_j;
					EarthView::World::Graphic::RTShaderSystem::CCGProgramProcessor *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CCGProgramProcessor*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCCGProgramProcessorProxy))
					{
						bool __values1 = pObjectX->EarthView::World::Graphic::RTShaderSystem::CCGProgramProcessor::preCreateGpuPrograms(programSet);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						bool __values1 = pObjectX->preCreateGpuPrograms(programSet);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_Cgprogramprocessor_register_1preCreateGpuPrograms_1CProgramSet(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCGProgramProcessorProxy *pObjectX = (JCCGProgramProcessorProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_preCreateGpuPrograms_CProgramSet_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"preCreateGpuPrograms_CProgramSet_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_rtshadersystem_Cgprogramprocessor_preCreateGpuPrograms_1CProgramSet_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong programSet_j)
				{
					EarthView::World::Graphic::RTShaderSystem::CProgramSet *programSet = (EarthView::World::Graphic::RTShaderSystem::CProgramSet*) programSet_j;
					EarthView::World::Graphic::RTShaderSystem::CCGProgramProcessor *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CCGProgramProcessor*) pObjXXXX;
					bool __values1 = pObjectX->EarthView::World::Graphic::RTShaderSystem::CCGProgramProcessor::preCreateGpuPrograms(programSet);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_rtshadersystem_Cgprogramprocessor_postCreateGpuPrograms_1CProgramSet(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong programSet_j)
				{
					EarthView::World::Graphic::RTShaderSystem::CProgramSet *programSet = (EarthView::World::Graphic::RTShaderSystem::CProgramSet*) programSet_j;
					EarthView::World::Graphic::RTShaderSystem::CCGProgramProcessor *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CCGProgramProcessor*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCCGProgramProcessorProxy))
					{
						bool __values1 = pObjectX->EarthView::World::Graphic::RTShaderSystem::CCGProgramProcessor::postCreateGpuPrograms(programSet);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						bool __values1 = pObjectX->postCreateGpuPrograms(programSet);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_Cgprogramprocessor_register_1postCreateGpuPrograms_1CProgramSet(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCGProgramProcessorProxy *pObjectX = (JCCGProgramProcessorProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_postCreateGpuPrograms_CProgramSet_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"postCreateGpuPrograms_CProgramSet_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_rtshadersystem_Cgprogramprocessor_postCreateGpuPrograms_1CProgramSet_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong programSet_j)
				{
					EarthView::World::Graphic::RTShaderSystem::CProgramSet *programSet = (EarthView::World::Graphic::RTShaderSystem::CProgramSet*) programSet_j;
					EarthView::World::Graphic::RTShaderSystem::CCGProgramProcessor *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CCGProgramProcessor*) pObjXXXX;
					bool __values1 = pObjectX->EarthView::World::Graphic::RTShaderSystem::CCGProgramProcessor::postCreateGpuPrograms(programSet);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_rtshadersystem_Cgprogramprocessor_get_1TargetLanguage_1void(JNIEnv *__env, jclass __clazz)
				{
					EarthView::World::Core::ev_wstring __values1_ch = EarthView::World::Graphic::RTShaderSystem::CCGProgramProcessor::TargetLanguage;
					jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_Cgprogramprocessor_set_1TargetLanguage_1EVString(JNIEnv *__env, jclass __clazz, jstring __values1_j)
				{
					const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
					EarthView::World::Graphic::RTShaderSystem::CCGProgramProcessor::TargetLanguage = __values1_ch;
					__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_Cgprogramprocessor_register_1compactVsOutputs_1CFunction_1CFunction(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCGProgramProcessorProxy *pObjectX = (JCCGProgramProcessorProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_compactVsOutputs_CFunction_CFunction_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"compactVsOutputs_CFunction_CFunction_callback", "(JJ)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
			}
		}
	}
}
