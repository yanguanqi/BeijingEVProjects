/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "rtshadersystem/shaderexhardwareskinningtechnique.h"
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
				class JCHardwareSkinningTechniqueProxy : public EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningTechnique
				{
				 private:
					EarthView::World::Core::ev_string m_copyFrom_CHardwareSkinningTechnique_callback;
					EarthView::World::Core::ev_string m_resolveParameters_CProgramSet_callback;
					EarthView::World::Core::ev_string m_resolveDependencies_CProgramSet_callback;
					EarthView::World::Core::ev_string m_addFunctionInvocations_CProgramSet_callback;
				public:
					JCHardwareSkinningTechniqueProxy(EarthView::World::Core::CNameValuePairList *pList) : CHardwareSkinningTechnique(pList)
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
					void register_copyFrom_CHardwareSkinningTechnique_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_copyFrom_CHardwareSkinningTechnique_callback = __method;
					}
					void register_resolveParameters_CProgramSet_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_resolveParameters_CProgramSet_callback = __method;
					}
					void register_resolveDependencies_CProgramSet_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_resolveDependencies_CProgramSet_callback = __method;
					}
					void register_addFunctionInvocations_CProgramSet_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_addFunctionInvocations_CProgramSet_callback = __method;
					}
					virtual void copyFrom(const EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningTechnique* hardSkin)
					{
						if (this->_gRef != NULL && this->m_copyFrom_CHardwareSkinningTechnique_callback != "" && this->isCustomExtend())
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
							jlong hardSkin_j = (jlong) hardSkin;
							jmethodID __method = __gr->getMethod("copyFrom_CHardwareSkinningTechnique_callback");
							__env->CallVoidMethod(__obj, __method , hardSkin_j);
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
							return this->CHardwareSkinningTechnique::copyFrom(hardSkin);
						}
					}
					virtual bool resolveParameters(EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet)
					{
						if (this->_gRef != NULL && this->m_resolveParameters_CProgramSet_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("resolveParameters_CProgramSet_callback");
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
							return this->CHardwareSkinningTechnique::resolveParameters(programSet);
						}
					}
					virtual bool resolveDependencies(EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet)
					{
						if (this->_gRef != NULL && this->m_resolveDependencies_CProgramSet_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("resolveDependencies_CProgramSet_callback");
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
							return this->CHardwareSkinningTechnique::resolveDependencies(programSet);
						}
					}
					virtual bool addFunctionInvocations(EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet)
					{
						if (this->_gRef != NULL && this->m_addFunctionInvocations_CProgramSet_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("addFunctionInvocations_CProgramSet_callback");
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
							return this->CHardwareSkinningTechnique::addFunctionInvocations(programSet);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCHardwareSkinningTechniqueProxy);
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_HardwareSkinningTechnique_copyFrom_1CHardwareSkinningTechnique(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong hardSkin_j)
				{
					const EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningTechnique *hardSkin = (const EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningTechnique*) hardSkin_j;
					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningTechnique *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningTechnique*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCHardwareSkinningTechniqueProxy))
					{
						pObjectX->EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningTechnique::copyFrom(hardSkin);
					}
					else
					{
						pObjectX->copyFrom(hardSkin);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_HardwareSkinningTechnique_register_1copyFrom_1CHardwareSkinningTechnique(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCHardwareSkinningTechniqueProxy *pObjectX = (JCHardwareSkinningTechniqueProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_copyFrom_CHardwareSkinningTechnique_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"copyFrom_CHardwareSkinningTechnique_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_HardwareSkinningTechnique_copyFrom_1CHardwareSkinningTechnique_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong hardSkin_j)
				{
					const EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningTechnique *hardSkin = (const EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningTechnique*) hardSkin_j;
					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningTechnique *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningTechnique*) pObjXXXX;
					pObjectX->EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningTechnique::copyFrom(hardSkin);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_HardwareSkinningTechnique_setHardwareSkinningParam_1ev_1uint16_1ev_1uint16_1bool_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint boneCount_j, jint weightCount_j, jboolean correctAntipodalityHandling_j, jboolean scalingShearingSupport_j)
				{
					ev_uint16 boneCount = (ev_uint16) boneCount_j;
					ev_uint16 weightCount = (ev_uint16) weightCount_j;
					bool correctAntipodalityHandling = (bool) correctAntipodalityHandling_j;
					bool scalingShearingSupport = (bool) scalingShearingSupport_j;
					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningTechnique *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningTechnique*) pObjXXXX;
					pObjectX->setHardwareSkinningParam(boneCount, weightCount, correctAntipodalityHandling, scalingShearingSupport);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_HardwareSkinningTechnique_setHardwareSkinningParam_1ev_1uint16_1ev_1uint16_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint boneCount_j, jint weightCount_j, jboolean correctAntipodalityHandling_j)
				{
					ev_uint16 boneCount = (ev_uint16) boneCount_j;
					ev_uint16 weightCount = (ev_uint16) weightCount_j;
					bool correctAntipodalityHandling = (bool) correctAntipodalityHandling_j;
					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningTechnique *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningTechnique*) pObjXXXX;
					pObjectX->setHardwareSkinningParam(boneCount, weightCount, correctAntipodalityHandling);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_HardwareSkinningTechnique_setHardwareSkinningParam_1ev_1uint16_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint boneCount_j, jint weightCount_j)
				{
					ev_uint16 boneCount = (ev_uint16) boneCount_j;
					ev_uint16 weightCount = (ev_uint16) weightCount_j;
					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningTechnique *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningTechnique*) pObjXXXX;
					pObjectX->setHardwareSkinningParam(boneCount, weightCount);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_rtshadersystem_HardwareSkinningTechnique_getBoneCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningTechnique *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningTechnique*) pObjXXXX;
					ev_uint16 __values1 = pObjectX->getBoneCount();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_rtshadersystem_HardwareSkinningTechnique_getWeightCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningTechnique *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningTechnique*) pObjXXXX;
					ev_uint16 __values1 = pObjectX->getWeightCount();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_rtshadersystem_HardwareSkinningTechnique_hasCorrectAntipodalityHandling_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningTechnique *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningTechnique*) pObjXXXX;
					bool __values1 = pObjectX->hasCorrectAntipodalityHandling();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_rtshadersystem_HardwareSkinningTechnique_hasScalingShearingSupport_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningTechnique *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningTechnique*) pObjXXXX;
					bool __values1 = pObjectX->hasScalingShearingSupport();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_HardwareSkinningTechnique_setDoBoneCalculations_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean doBoneCalculations_j)
				{
					bool doBoneCalculations = (bool) doBoneCalculations_j;
					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningTechnique *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningTechnique*) pObjXXXX;
					pObjectX->setDoBoneCalculations(doBoneCalculations);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_rtshadersystem_HardwareSkinningTechnique_resolveParameters_1CProgramSet(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong programSet_j)
				{
					EarthView::World::Graphic::RTShaderSystem::CProgramSet *programSet = (EarthView::World::Graphic::RTShaderSystem::CProgramSet*) programSet_j;
					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningTechnique *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningTechnique*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCHardwareSkinningTechniqueProxy))
					{
						bool __values1 = pObjectX->EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningTechnique::resolveParameters(programSet);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						bool __values1 = pObjectX->resolveParameters(programSet);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_HardwareSkinningTechnique_register_1resolveParameters_1CProgramSet(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCHardwareSkinningTechniqueProxy *pObjectX = (JCHardwareSkinningTechniqueProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_resolveParameters_CProgramSet_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"resolveParameters_CProgramSet_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_rtshadersystem_HardwareSkinningTechnique_resolveParameters_1CProgramSet_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong programSet_j)
				{
					EarthView::World::Graphic::RTShaderSystem::CProgramSet *programSet = (EarthView::World::Graphic::RTShaderSystem::CProgramSet*) programSet_j;
					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningTechnique *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningTechnique*) pObjXXXX;
					bool __values1 = pObjectX->EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningTechnique::resolveParameters(programSet);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_rtshadersystem_HardwareSkinningTechnique_resolveDependencies_1CProgramSet(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong programSet_j)
				{
					EarthView::World::Graphic::RTShaderSystem::CProgramSet *programSet = (EarthView::World::Graphic::RTShaderSystem::CProgramSet*) programSet_j;
					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningTechnique *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningTechnique*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCHardwareSkinningTechniqueProxy))
					{
						bool __values1 = pObjectX->EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningTechnique::resolveDependencies(programSet);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						bool __values1 = pObjectX->resolveDependencies(programSet);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_HardwareSkinningTechnique_register_1resolveDependencies_1CProgramSet(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCHardwareSkinningTechniqueProxy *pObjectX = (JCHardwareSkinningTechniqueProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_resolveDependencies_CProgramSet_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"resolveDependencies_CProgramSet_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_rtshadersystem_HardwareSkinningTechnique_resolveDependencies_1CProgramSet_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong programSet_j)
				{
					EarthView::World::Graphic::RTShaderSystem::CProgramSet *programSet = (EarthView::World::Graphic::RTShaderSystem::CProgramSet*) programSet_j;
					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningTechnique *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningTechnique*) pObjXXXX;
					bool __values1 = pObjectX->EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningTechnique::resolveDependencies(programSet);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_rtshadersystem_HardwareSkinningTechnique_addFunctionInvocations_1CProgramSet(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong programSet_j)
				{
					EarthView::World::Graphic::RTShaderSystem::CProgramSet *programSet = (EarthView::World::Graphic::RTShaderSystem::CProgramSet*) programSet_j;
					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningTechnique *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningTechnique*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCHardwareSkinningTechniqueProxy))
					{
						bool __values1 = pObjectX->EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningTechnique::addFunctionInvocations(programSet);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						bool __values1 = pObjectX->addFunctionInvocations(programSet);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_HardwareSkinningTechnique_register_1addFunctionInvocations_1CProgramSet(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCHardwareSkinningTechniqueProxy *pObjectX = (JCHardwareSkinningTechniqueProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_addFunctionInvocations_CProgramSet_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"addFunctionInvocations_CProgramSet_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_rtshadersystem_HardwareSkinningTechnique_addFunctionInvocations_1CProgramSet_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong programSet_j)
				{
					EarthView::World::Graphic::RTShaderSystem::CProgramSet *programSet = (EarthView::World::Graphic::RTShaderSystem::CProgramSet*) programSet_j;
					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningTechnique *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningTechnique*) pObjXXXX;
					bool __values1 = pObjectX->EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningTechnique::addFunctionInvocations(programSet);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
		}
	}
}
