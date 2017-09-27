/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "rtshadersystem/shadersubrenderstate.h"
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_SubRenderStateAccessorPtr_get_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Graphic::RTShaderSystem::SubRenderStateAccessorPtr *pObjectX = (EarthView::World::Graphic::RTShaderSystem::SubRenderStateAccessorPtr*) pObjXXXX;
					EarthView::World::Graphic::RTShaderSystem::CSubRenderStateAccessor* __values1 = pObjectX->get();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				class JCSubRenderStateProxy : public EarthView::World::Graphic::RTShaderSystem::CSubRenderState
				{
				 private:
					EarthView::World::Core::ev_string m_getType_void_callback;
					EarthView::World::Core::ev_string m_getExecutionOrder_void_callback;
					EarthView::World::Core::ev_string m_copyFrom_CSubRenderState_callback;
					EarthView::World::Core::ev_string m_createCpuSubPrograms_CProgramSet_callback;
					EarthView::World::Core::ev_string m_updateGpuProgramsParams_CRenderable_CPass_CAutoParamDataSource_LightList_callback;
					EarthView::World::Core::ev_string m_preAddToRenderState_CRenderState_CPass_CPass_callback;
					EarthView::World::Core::ev_string m_resolveParameters_CProgramSet_callback;
					EarthView::World::Core::ev_string m_resolveDependencies_CProgramSet_callback;
					EarthView::World::Core::ev_string m_addFunctionInvocations_CProgramSet_callback;
				public:
					JCSubRenderStateProxy(EarthView::World::Core::CNameValuePairList *pList) : CSubRenderState(pList)
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
					void register_getType_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getType_void_callback = __method;
					}
					void register_getExecutionOrder_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getExecutionOrder_void_callback = __method;
					}
					void register_copyFrom_CSubRenderState_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_copyFrom_CSubRenderState_callback = __method;
					}
					void register_createCpuSubPrograms_CProgramSet_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_createCpuSubPrograms_CProgramSet_callback = __method;
					}
					void register_updateGpuProgramsParams_CRenderable_CPass_CAutoParamDataSource_LightList_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_updateGpuProgramsParams_CRenderable_CPass_CAutoParamDataSource_LightList_callback = __method;
					}
					void register_preAddToRenderState_CRenderState_CPass_CPass_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_preAddToRenderState_CRenderState_CPass_CPass_callback = __method;
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
					virtual EVString getType() const
					{
						if (this->_gRef != NULL && this->m_getType_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getType_void_callback");
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
							return this->CSubRenderState::getType();
						}
					}
					virtual int getExecutionOrder() const
					{
						if (this->_gRef != NULL && this->m_getExecutionOrder_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getExecutionOrder_void_callback");
							jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							int __values1 = (int) __values1_j;
							return __values1;
						}
						else
						{
							return this->CSubRenderState::getExecutionOrder();
						}
					}
					virtual void copyFrom(const EarthView::World::Graphic::RTShaderSystem::CSubRenderState& rhs)
					{
						if (this->_gRef != NULL && this->m_copyFrom_CSubRenderState_callback != "" && this->isCustomExtend())
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
							jlong rhs_j = (jlong) &rhs;
							jmethodID __method = __gr->getMethod("copyFrom_CSubRenderState_callback");
							__env->CallVoidMethod(__obj, __method , rhs_j);
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
							return this->CSubRenderState::copyFrom(rhs);
						}
					}
					virtual bool createCpuSubPrograms(EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet)
					{
						if (this->_gRef != NULL && this->m_createCpuSubPrograms_CProgramSet_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("createCpuSubPrograms_CProgramSet_callback");
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
							return this->CSubRenderState::createCpuSubPrograms(programSet);
						}
					}
					virtual void updateGpuProgramsParams(EarthView::World::Graphic::CRenderable* rend, EarthView::World::Graphic::CPass* pass, const EarthView::World::Graphic::CAutoParamDataSource* source, const EarthView::World::Graphic::LightList* pLightList)
					{
						if (this->_gRef != NULL && this->m_updateGpuProgramsParams_CRenderable_CPass_CAutoParamDataSource_LightList_callback != "" && this->isCustomExtend())
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
							jlong rend_j = (jlong) rend;
							jlong pass_j = (jlong) pass;
							jlong source_j = (jlong) source;
							jlong pLightList_j = (jlong) pLightList;
							jmethodID __method = __gr->getMethod("updateGpuProgramsParams_CRenderable_CPass_CAutoParamDataSource_LightList_callback");
							__env->CallVoidMethod(__obj, __method , rend_j, pass_j, source_j, pLightList_j);
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
							return this->CSubRenderState::updateGpuProgramsParams(rend, pass, source, pLightList);
						}
					}
					virtual bool preAddToRenderState(const EarthView::World::Graphic::RTShaderSystem::CRenderState* renderState, EarthView::World::Graphic::CPass* srcPass, EarthView::World::Graphic::CPass* dstPass)
					{
						if (this->_gRef != NULL && this->m_preAddToRenderState_CRenderState_CPass_CPass_callback != "" && this->isCustomExtend())
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
							jlong renderState_j = (jlong) renderState;
							jlong srcPass_j = (jlong) srcPass;
							jlong dstPass_j = (jlong) dstPass;
							jmethodID __method = __gr->getMethod("preAddToRenderState_CRenderState_CPass_CPass_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , renderState_j, srcPass_j, dstPass_j);
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
							return this->CSubRenderState::preAddToRenderState(renderState, srcPass, dstPass);
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
							return this->CSubRenderState::resolveParameters(programSet);
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
							return this->CSubRenderState::resolveDependencies(programSet);
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
							return this->CSubRenderState::addFunctionInvocations(programSet);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCSubRenderStateProxy);
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_rtshadersystem_SubRenderState_getType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Graphic::RTShaderSystem::CSubRenderState *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CSubRenderState*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCSubRenderStateProxy))
					{
						EVString __values1 = pObjectX->EarthView::World::Graphic::RTShaderSystem::CSubRenderState::getType();
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
					else
					{
						EVString __values1 = pObjectX->getType();
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_SubRenderState_register_1getType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCSubRenderStateProxy *pObjectX = (JCSubRenderStateProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getType_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getType_void_callback", "()Ljava/lang/String;");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_rtshadersystem_SubRenderState_getType_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Graphic::RTShaderSystem::CSubRenderState *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CSubRenderState*) pObjXXXX;
					EVString __values1 = pObjectX->EarthView::World::Graphic::RTShaderSystem::CSubRenderState::getType();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_rtshadersystem_SubRenderState_getExecutionOrder_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Graphic::RTShaderSystem::CSubRenderState *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CSubRenderState*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCSubRenderStateProxy))
					{
						int __values1 = pObjectX->EarthView::World::Graphic::RTShaderSystem::CSubRenderState::getExecutionOrder();
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
					else
					{
						int __values1 = pObjectX->getExecutionOrder();
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_SubRenderState_register_1getExecutionOrder_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCSubRenderStateProxy *pObjectX = (JCSubRenderStateProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getExecutionOrder_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getExecutionOrder_void_callback", "()I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_rtshadersystem_SubRenderState_getExecutionOrder_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Graphic::RTShaderSystem::CSubRenderState *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CSubRenderState*) pObjXXXX;
					int __values1 = pObjectX->EarthView::World::Graphic::RTShaderSystem::CSubRenderState::getExecutionOrder();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_SubRenderState_copyFrom_1CSubRenderState(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong rhs_j)
				{
					const EarthView::World::Graphic::RTShaderSystem::CSubRenderState &rhs = *(EarthView::World::Graphic::RTShaderSystem::CSubRenderState*) rhs_j;
					EarthView::World::Graphic::RTShaderSystem::CSubRenderState *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CSubRenderState*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCSubRenderStateProxy))
					{
						pObjectX->EarthView::World::Graphic::RTShaderSystem::CSubRenderState::copyFrom(rhs);
					}
					else
					{
						pObjectX->copyFrom(rhs);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_SubRenderState_register_1copyFrom_1CSubRenderState(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCSubRenderStateProxy *pObjectX = (JCSubRenderStateProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_copyFrom_CSubRenderState_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"copyFrom_CSubRenderState_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_SubRenderState_copyFrom_1CSubRenderState_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong rhs_j)
				{
					const EarthView::World::Graphic::RTShaderSystem::CSubRenderState &rhs = *(EarthView::World::Graphic::RTShaderSystem::CSubRenderState*) rhs_j;
					EarthView::World::Graphic::RTShaderSystem::CSubRenderState *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CSubRenderState*) pObjXXXX;
					pObjectX->EarthView::World::Graphic::RTShaderSystem::CSubRenderState::copyFrom(rhs);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_SubRenderState_OperatorAssign_1CSubRenderState(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rhs_j )
				{
					EarthView::World::Graphic::RTShaderSystem::CSubRenderState& pObjectX = *(EarthView::World::Graphic::RTShaderSystem::CSubRenderState*) pObjXXXX;
					const EarthView::World::Graphic::RTShaderSystem::CSubRenderState &rhs = *(EarthView::World::Graphic::RTShaderSystem::CSubRenderState*) rhs_j;
					pObjectX = rhs;
					EarthView::World::Graphic::RTShaderSystem::CSubRenderState& __values1 = pObjectX;
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_rtshadersystem_SubRenderState_createCpuSubPrograms_1CProgramSet(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong programSet_j)
				{
					EarthView::World::Graphic::RTShaderSystem::CProgramSet *programSet = (EarthView::World::Graphic::RTShaderSystem::CProgramSet*) programSet_j;
					EarthView::World::Graphic::RTShaderSystem::CSubRenderState *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CSubRenderState*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCSubRenderStateProxy))
					{
						bool __values1 = pObjectX->EarthView::World::Graphic::RTShaderSystem::CSubRenderState::createCpuSubPrograms(programSet);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						bool __values1 = pObjectX->createCpuSubPrograms(programSet);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_SubRenderState_register_1createCpuSubPrograms_1CProgramSet(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCSubRenderStateProxy *pObjectX = (JCSubRenderStateProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_createCpuSubPrograms_CProgramSet_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"createCpuSubPrograms_CProgramSet_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_rtshadersystem_SubRenderState_createCpuSubPrograms_1CProgramSet_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong programSet_j)
				{
					EarthView::World::Graphic::RTShaderSystem::CProgramSet *programSet = (EarthView::World::Graphic::RTShaderSystem::CProgramSet*) programSet_j;
					EarthView::World::Graphic::RTShaderSystem::CSubRenderState *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CSubRenderState*) pObjXXXX;
					bool __values1 = pObjectX->EarthView::World::Graphic::RTShaderSystem::CSubRenderState::createCpuSubPrograms(programSet);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_SubRenderState_updateGpuProgramsParams_1CRenderable_1CPass_1CAutoParamDataSource_1LightList(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong rend_j, jlong pass_j, jlong source_j, jlong pLightList_j)
				{
					EarthView::World::Graphic::CRenderable *rend = (EarthView::World::Graphic::CRenderable*) rend_j;
					EarthView::World::Graphic::CPass *pass = (EarthView::World::Graphic::CPass*) pass_j;
					const EarthView::World::Graphic::CAutoParamDataSource *source = (const EarthView::World::Graphic::CAutoParamDataSource*) source_j;
					const EarthView::World::Graphic::LightList *pLightList = (const EarthView::World::Graphic::LightList*) pLightList_j;
					EarthView::World::Graphic::RTShaderSystem::CSubRenderState *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CSubRenderState*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCSubRenderStateProxy))
					{
						pObjectX->EarthView::World::Graphic::RTShaderSystem::CSubRenderState::updateGpuProgramsParams(rend, pass, source, pLightList);
					}
					else
					{
						pObjectX->updateGpuProgramsParams(rend, pass, source, pLightList);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_SubRenderState_register_1updateGpuProgramsParams_1CRenderable_1CPass_1CAutoParamDataSource_1LightList(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCSubRenderStateProxy *pObjectX = (JCSubRenderStateProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_updateGpuProgramsParams_CRenderable_CPass_CAutoParamDataSource_LightList_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"updateGpuProgramsParams_CRenderable_CPass_CAutoParamDataSource_LightList_callback", "(JJJJ)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_SubRenderState_updateGpuProgramsParams_1CRenderable_1CPass_1CAutoParamDataSource_1LightList_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong rend_j, jlong pass_j, jlong source_j, jlong pLightList_j)
				{
					EarthView::World::Graphic::CRenderable *rend = (EarthView::World::Graphic::CRenderable*) rend_j;
					EarthView::World::Graphic::CPass *pass = (EarthView::World::Graphic::CPass*) pass_j;
					const EarthView::World::Graphic::CAutoParamDataSource *source = (const EarthView::World::Graphic::CAutoParamDataSource*) source_j;
					const EarthView::World::Graphic::LightList *pLightList = (const EarthView::World::Graphic::LightList*) pLightList_j;
					EarthView::World::Graphic::RTShaderSystem::CSubRenderState *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CSubRenderState*) pObjXXXX;
					pObjectX->EarthView::World::Graphic::RTShaderSystem::CSubRenderState::updateGpuProgramsParams(rend, pass, source, pLightList);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_rtshadersystem_SubRenderState_preAddToRenderState_1CRenderState_1CPass_1CPass(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong renderState_j, jlong srcPass_j, jlong dstPass_j)
				{
					const EarthView::World::Graphic::RTShaderSystem::CRenderState *renderState = (const EarthView::World::Graphic::RTShaderSystem::CRenderState*) renderState_j;
					EarthView::World::Graphic::CPass *srcPass = (EarthView::World::Graphic::CPass*) srcPass_j;
					EarthView::World::Graphic::CPass *dstPass = (EarthView::World::Graphic::CPass*) dstPass_j;
					EarthView::World::Graphic::RTShaderSystem::CSubRenderState *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CSubRenderState*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCSubRenderStateProxy))
					{
						bool __values1 = pObjectX->EarthView::World::Graphic::RTShaderSystem::CSubRenderState::preAddToRenderState(renderState, srcPass, dstPass);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						bool __values1 = pObjectX->preAddToRenderState(renderState, srcPass, dstPass);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_SubRenderState_register_1preAddToRenderState_1CRenderState_1CPass_1CPass(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCSubRenderStateProxy *pObjectX = (JCSubRenderStateProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_preAddToRenderState_CRenderState_CPass_CPass_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"preAddToRenderState_CRenderState_CPass_CPass_callback", "(JJJ)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_rtshadersystem_SubRenderState_preAddToRenderState_1CRenderState_1CPass_1CPass_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong renderState_j, jlong srcPass_j, jlong dstPass_j)
				{
					const EarthView::World::Graphic::RTShaderSystem::CRenderState *renderState = (const EarthView::World::Graphic::RTShaderSystem::CRenderState*) renderState_j;
					EarthView::World::Graphic::CPass *srcPass = (EarthView::World::Graphic::CPass*) srcPass_j;
					EarthView::World::Graphic::CPass *dstPass = (EarthView::World::Graphic::CPass*) dstPass_j;
					EarthView::World::Graphic::RTShaderSystem::CSubRenderState *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CSubRenderState*) pObjXXXX;
					bool __values1 = pObjectX->EarthView::World::Graphic::RTShaderSystem::CSubRenderState::preAddToRenderState(renderState, srcPass, dstPass);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_SubRenderState_getAccessor_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::CSubRenderState *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CSubRenderState*) pObjXXXX;
					EarthView::World::Graphic::RTShaderSystem::SubRenderStateAccessorPtr __values1 = pObjectX->getAccessor();
					EarthView::World::Graphic::RTShaderSystem::SubRenderStateAccessorPtr *returnvalues = new EarthView::World::Graphic::RTShaderSystem::SubRenderStateAccessorPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_rtshadersystem_SubRenderState_resolveParameters_1CProgramSet(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong programSet_j)
				{
					EarthView::World::Graphic::RTShaderSystem::CProgramSet *programSet = (EarthView::World::Graphic::RTShaderSystem::CProgramSet*) programSet_j;
					EarthView::World::Graphic::RTShaderSystem::CSubRenderState *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CSubRenderState*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCSubRenderStateProxy))
					{
						bool __values1 = pObjectX->EarthView::World::Graphic::RTShaderSystem::CSubRenderState::resolveParameters(programSet);
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_SubRenderState_register_1resolveParameters_1CProgramSet(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCSubRenderStateProxy *pObjectX = (JCSubRenderStateProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_rtshadersystem_SubRenderState_resolveParameters_1CProgramSet_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong programSet_j)
				{
					EarthView::World::Graphic::RTShaderSystem::CProgramSet *programSet = (EarthView::World::Graphic::RTShaderSystem::CProgramSet*) programSet_j;
					EarthView::World::Graphic::RTShaderSystem::CSubRenderState *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CSubRenderState*) pObjXXXX;
					bool __values1 = pObjectX->EarthView::World::Graphic::RTShaderSystem::CSubRenderState::resolveParameters(programSet);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_rtshadersystem_SubRenderState_resolveDependencies_1CProgramSet(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong programSet_j)
				{
					EarthView::World::Graphic::RTShaderSystem::CProgramSet *programSet = (EarthView::World::Graphic::RTShaderSystem::CProgramSet*) programSet_j;
					EarthView::World::Graphic::RTShaderSystem::CSubRenderState *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CSubRenderState*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCSubRenderStateProxy))
					{
						bool __values1 = pObjectX->EarthView::World::Graphic::RTShaderSystem::CSubRenderState::resolveDependencies(programSet);
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_SubRenderState_register_1resolveDependencies_1CProgramSet(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCSubRenderStateProxy *pObjectX = (JCSubRenderStateProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_rtshadersystem_SubRenderState_resolveDependencies_1CProgramSet_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong programSet_j)
				{
					EarthView::World::Graphic::RTShaderSystem::CProgramSet *programSet = (EarthView::World::Graphic::RTShaderSystem::CProgramSet*) programSet_j;
					EarthView::World::Graphic::RTShaderSystem::CSubRenderState *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CSubRenderState*) pObjXXXX;
					bool __values1 = pObjectX->EarthView::World::Graphic::RTShaderSystem::CSubRenderState::resolveDependencies(programSet);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_rtshadersystem_SubRenderState_addFunctionInvocations_1CProgramSet(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong programSet_j)
				{
					EarthView::World::Graphic::RTShaderSystem::CProgramSet *programSet = (EarthView::World::Graphic::RTShaderSystem::CProgramSet*) programSet_j;
					EarthView::World::Graphic::RTShaderSystem::CSubRenderState *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CSubRenderState*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCSubRenderStateProxy))
					{
						bool __values1 = pObjectX->EarthView::World::Graphic::RTShaderSystem::CSubRenderState::addFunctionInvocations(programSet);
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_SubRenderState_register_1addFunctionInvocations_1CProgramSet(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCSubRenderStateProxy *pObjectX = (JCSubRenderStateProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_rtshadersystem_SubRenderState_addFunctionInvocations_1CProgramSet_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong programSet_j)
				{
					EarthView::World::Graphic::RTShaderSystem::CProgramSet *programSet = (EarthView::World::Graphic::RTShaderSystem::CProgramSet*) programSet_j;
					EarthView::World::Graphic::RTShaderSystem::CSubRenderState *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CSubRenderState*) pObjXXXX;
					bool __values1 = pObjectX->EarthView::World::Graphic::RTShaderSystem::CSubRenderState::addFunctionInvocations(programSet);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_SubRenderStateList_push_1back_1CSubRenderState(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
				{
					EarthView::World::Graphic::RTShaderSystem::CSubRenderState *t = (EarthView::World::Graphic::RTShaderSystem::CSubRenderState*) t_j;
					EarthView::World::Graphic::RTShaderSystem::SubRenderStateList *pObjectX = (EarthView::World::Graphic::RTShaderSystem::SubRenderStateList*) pObjXXXX;
					pObjectX->push_back(t);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_SubRenderStateList_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::SubRenderStateList *pObjectX = (EarthView::World::Graphic::RTShaderSystem::SubRenderStateList*) pObjXXXX;
					pObjectX->pop_back();
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_SubRenderStateList_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::SubRenderStateList *pObjectX = (EarthView::World::Graphic::RTShaderSystem::SubRenderStateList*) pObjXXXX;
					EarthView::World::Graphic::RTShaderSystem::CSubRenderState*& __values1 = pObjectX->front();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_SubRenderStateList_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::SubRenderStateList *pObjectX = (EarthView::World::Graphic::RTShaderSystem::SubRenderStateList*) pObjXXXX;
					EarthView::World::Graphic::RTShaderSystem::CSubRenderState*& __values1 = pObjectX->back();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_SubRenderStateList_insert_1ev_1uint32_1CSubRenderState(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong t_j)
				{
					ev_uint32 pos = (ev_uint32) pos_j;
					EarthView::World::Graphic::RTShaderSystem::CSubRenderState *&t = *(EarthView::World::Graphic::RTShaderSystem::CSubRenderState**) t_j;
					EarthView::World::Graphic::RTShaderSystem::SubRenderStateList *pObjectX = (EarthView::World::Graphic::RTShaderSystem::SubRenderStateList*) pObjXXXX;
					pObjectX->insert(pos, t);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_SubRenderStateList_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
				{
					ev_size_t pos = (ev_size_t) pos_j;
					EarthView::World::Graphic::RTShaderSystem::SubRenderStateList *pObjectX = (EarthView::World::Graphic::RTShaderSystem::SubRenderStateList*) pObjXXXX;
					pObjectX->remove(pos);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_rtshadersystem_SubRenderStateList_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Graphic::RTShaderSystem::SubRenderStateList *pObjectX = (EarthView::World::Graphic::RTShaderSystem::SubRenderStateList*) pObjXXXX;
					ev_bool __values1 = pObjectX->empty();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_SubRenderStateList_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong n_j )
				{
					EarthView::World::Graphic::RTShaderSystem::SubRenderStateList& pObjectX = *(EarthView::World::Graphic::RTShaderSystem::SubRenderStateList*) pObjXXXX;
					ev_size_t n = (ev_size_t) n_j;
					EarthView::World::Graphic::RTShaderSystem::CSubRenderState*& __values1 = pObjectX[n];
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_SubRenderStateList_at_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
				{
					ev_size_t n = (ev_size_t) n_j;
					EarthView::World::Graphic::RTShaderSystem::SubRenderStateList *pObjectX = (EarthView::World::Graphic::RTShaderSystem::SubRenderStateList*) pObjXXXX;
					EarthView::World::Graphic::RTShaderSystem::CSubRenderState*& __values1 = pObjectX->at(n);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_SubRenderStateList_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Graphic::RTShaderSystem::SubRenderStateList *pObjectX = (EarthView::World::Graphic::RTShaderSystem::SubRenderStateList*) pObjXXXX;
					ev_size_t __values1 = pObjectX->size();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_SubRenderStateList_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
				{
					ev_size_t newSize = (ev_size_t) newSize_j;
					EarthView::World::Graphic::RTShaderSystem::SubRenderStateList *pObjectX = (EarthView::World::Graphic::RTShaderSystem::SubRenderStateList*) pObjXXXX;
					pObjectX->resize(newSize);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_SubRenderStateList_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
				{
					ev_size_t count = (ev_size_t) count_j;
					EarthView::World::Graphic::RTShaderSystem::SubRenderStateList *pObjectX = (EarthView::World::Graphic::RTShaderSystem::SubRenderStateList*) pObjXXXX;
					pObjectX->reserve(count);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_SubRenderStateList_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::SubRenderStateList *pObjectX = (EarthView::World::Graphic::RTShaderSystem::SubRenderStateList*) pObjXXXX;
					pObjectX->clear();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_SubRenderStateSet_insert_1CSubRenderState(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong val_j)
				{
					EarthView::World::Graphic::RTShaderSystem::CSubRenderState *val = (EarthView::World::Graphic::RTShaderSystem::CSubRenderState*) val_j;
					EarthView::World::Graphic::RTShaderSystem::SubRenderStateSet *pObjectX = (EarthView::World::Graphic::RTShaderSystem::SubRenderStateSet*) pObjXXXX;
					pObjectX->insert(val);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_SubRenderStateSet_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::SubRenderStateSet *pObjectX = (EarthView::World::Graphic::RTShaderSystem::SubRenderStateSet*) pObjXXXX;
					ev_size_t __values1 = pObjectX->size();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_SubRenderStateSet_erase_1CSubRenderState(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong key_j)
				{
					EarthView::World::Graphic::RTShaderSystem::CSubRenderState *&key = *(EarthView::World::Graphic::RTShaderSystem::CSubRenderState**) key_j;
					EarthView::World::Graphic::RTShaderSystem::SubRenderStateSet *pObjectX = (EarthView::World::Graphic::RTShaderSystem::SubRenderStateSet*) pObjXXXX;
					ev_size_t __values1 = pObjectX->erase(key);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_rtshadersystem_SubRenderStateSet_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::SubRenderStateSet *pObjectX = (EarthView::World::Graphic::RTShaderSystem::SubRenderStateSet*) pObjXXXX;
					ev_bool __values1 = pObjectX->empty();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_SubRenderStateSet_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::SubRenderStateSet *pObjectX = (EarthView::World::Graphic::RTShaderSystem::SubRenderStateSet*) pObjXXXX;
					pObjectX->clear();
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_SubRenderStateSet_count_1CSubRenderState(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong key_j)
				{
					EarthView::World::Graphic::RTShaderSystem::CSubRenderState *&key = *(EarthView::World::Graphic::RTShaderSystem::CSubRenderState**) key_j;
					EarthView::World::Graphic::RTShaderSystem::SubRenderStateSet *pObjectX = (EarthView::World::Graphic::RTShaderSystem::SubRenderStateSet*) pObjXXXX;
					ev_size_t __values1 = pObjectX->count(key);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_SubRenderStateSet_max_1size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::SubRenderStateSet *pObjectX = (EarthView::World::Graphic::RTShaderSystem::SubRenderStateSet*) pObjXXXX;
					ev_size_t __values1 = pObjectX->max_size();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_SubRenderStateSet_swap_1SubRenderStateSet(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong other_j)
				{
					EarthView::World::Graphic::RTShaderSystem::SubRenderStateSet &other = *(EarthView::World::Graphic::RTShaderSystem::SubRenderStateSet*) other_j;
					EarthView::World::Graphic::RTShaderSystem::SubRenderStateSet *pObjectX = (EarthView::World::Graphic::RTShaderSystem::SubRenderStateSet*) pObjXXXX;
					pObjectX->swap(other);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_SubRenderStateAccessor_addSubRenderStateInstance_1CSubRenderState(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong subRenderState_j)
				{
					EarthView::World::Graphic::RTShaderSystem::CSubRenderState *subRenderState = (EarthView::World::Graphic::RTShaderSystem::CSubRenderState*) subRenderState_j;
					const 					EarthView::World::Graphic::RTShaderSystem::CSubRenderStateAccessor *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CSubRenderStateAccessor*) pObjXXXX;
					pObjectX->addSubRenderStateInstance(subRenderState);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_SubRenderStateAccessor_removeSubRenderStateInstance_1CSubRenderState(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong subRenderState_j)
				{
					EarthView::World::Graphic::RTShaderSystem::CSubRenderState *subRenderState = (EarthView::World::Graphic::RTShaderSystem::CSubRenderState*) subRenderState_j;
					const 					EarthView::World::Graphic::RTShaderSystem::CSubRenderStateAccessor *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CSubRenderStateAccessor*) pObjXXXX;
					pObjectX->removeSubRenderStateInstance(subRenderState);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_SubRenderStateAccessor_getSubRenderStateInstanceSet_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::CSubRenderStateAccessor *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CSubRenderStateAccessor*) pObjXXXX;
					EarthView::World::Graphic::RTShaderSystem::SubRenderStateSet& __values1 = pObjectX->getSubRenderStateInstanceSet();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				class JCSubRenderStateFactoryProxy : public EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory
				{
				 private:
					EarthView::World::Core::ev_string m_getType_void_callback;
					EarthView::World::Core::ev_string m_createInstance_void_callback;
					EarthView::World::Core::ev_string m_createInstance_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator_callback;
					EarthView::World::Core::ev_string m_createInstance_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator_callback;
					EarthView::World::Core::ev_string m_createOrRetrieveInstance_CSGScriptTranslator_callback;
					EarthView::World::Core::ev_string m_destroyInstance_CSubRenderState_callback;
					EarthView::World::Core::ev_string m_destroyAllInstances_void_callback;
					EarthView::World::Core::ev_string m_writeInstance_CMaterialSerializer_CSubRenderState_CPass_CPass_callback;
					EarthView::World::Core::ev_string m_writeInstance_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState_callback;
					EarthView::World::Core::ev_string m_createInstanceImpl_void_callback;
				public:
					JCSubRenderStateFactoryProxy(EarthView::World::Core::CNameValuePairList *pList) : CSubRenderStateFactory(pList)
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
					void register_getType_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getType_void_callback = __method;
					}
					void register_createInstance_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_createInstance_void_callback = __method;
					}
					void register_createInstance_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_createInstance_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator_callback = __method;
					}
					void register_createInstance_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_createInstance_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator_callback = __method;
					}
					void register_createOrRetrieveInstance_CSGScriptTranslator_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_createOrRetrieveInstance_CSGScriptTranslator_callback = __method;
					}
					void register_destroyInstance_CSubRenderState_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_destroyInstance_CSubRenderState_callback = __method;
					}
					void register_destroyAllInstances_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_destroyAllInstances_void_callback = __method;
					}
					void register_writeInstance_CMaterialSerializer_CSubRenderState_CPass_CPass_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_writeInstance_CMaterialSerializer_CSubRenderState_CPass_CPass_callback = __method;
					}
					void register_writeInstance_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_writeInstance_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState_callback = __method;
					}
					void register_createInstanceImpl_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_createInstanceImpl_void_callback = __method;
					}
					virtual EVString getType() const
					{
						if (this->_gRef != NULL && this->m_getType_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getType_void_callback");
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
							return this->CSubRenderStateFactory::getType();
						}
					}
					virtual EarthView::World::Graphic::RTShaderSystem::CSubRenderState* createInstance()
					{
						if (this->_gRef != NULL && this->m_createInstance_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("createInstance_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Graphic::RTShaderSystem::CSubRenderState *__values1 = (EarthView::World::Graphic::RTShaderSystem::CSubRenderState*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CSubRenderStateFactory::createInstance();
						}
					}
					virtual EarthView::World::Graphic::RTShaderSystem::CSubRenderState* createInstance(EarthView::World::Graphic::CScriptCompiler* compiler, EarthView::World::Graphic::CPropertyAbstractNode* prop, EarthView::World::Graphic::CPass* pass, EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator* translator)
					{
						if (this->_gRef != NULL && this->m_createInstance_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator_callback != "" && this->isCustomExtend())
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
							jlong compiler_j = (jlong) compiler;
							jlong prop_j = (jlong) prop;
							jlong pass_j = (jlong) pass;
							jlong translator_j = (jlong) translator;
							jmethodID __method = __gr->getMethod("createInstance_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , compiler_j, prop_j, pass_j, translator_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Graphic::RTShaderSystem::CSubRenderState *__values1 = (EarthView::World::Graphic::RTShaderSystem::CSubRenderState*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CSubRenderStateFactory::createInstance(compiler, prop, pass, translator);
						}
					}
					virtual EarthView::World::Graphic::RTShaderSystem::CSubRenderState* createInstance(EarthView::World::Graphic::CScriptCompiler* compiler, EarthView::World::Graphic::CPropertyAbstractNode* prop, EarthView::World::Graphic::CTextureUnitState* texState, EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator* translator)
					{
						if (this->_gRef != NULL && this->m_createInstance_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator_callback != "" && this->isCustomExtend())
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
							jlong compiler_j = (jlong) compiler;
							jlong prop_j = (jlong) prop;
							jlong texState_j = (jlong) texState;
							jlong translator_j = (jlong) translator;
							jmethodID __method = __gr->getMethod("createInstance_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , compiler_j, prop_j, texState_j, translator_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Graphic::RTShaderSystem::CSubRenderState *__values1 = (EarthView::World::Graphic::RTShaderSystem::CSubRenderState*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CSubRenderStateFactory::createInstance(compiler, prop, texState, translator);
						}
					}
					virtual EarthView::World::Graphic::RTShaderSystem::CSubRenderState* createOrRetrieveInstance(EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator* translator)
					{
						if (this->_gRef != NULL && this->m_createOrRetrieveInstance_CSGScriptTranslator_callback != "" && this->isCustomExtend())
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
							jlong translator_j = (jlong) translator;
							jmethodID __method = __gr->getMethod("createOrRetrieveInstance_CSGScriptTranslator_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , translator_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Graphic::RTShaderSystem::CSubRenderState *__values1 = (EarthView::World::Graphic::RTShaderSystem::CSubRenderState*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CSubRenderStateFactory::createOrRetrieveInstance(translator);
						}
					}
					virtual void destroyInstance(EarthView::World::Graphic::RTShaderSystem::CSubRenderState* subRenderState)
					{
						if (this->_gRef != NULL && this->m_destroyInstance_CSubRenderState_callback != "" && this->isCustomExtend())
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
							jlong subRenderState_j = (jlong) subRenderState;
							jmethodID __method = __gr->getMethod("destroyInstance_CSubRenderState_callback");
							__env->CallVoidMethod(__obj, __method , subRenderState_j);
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
							return this->CSubRenderStateFactory::destroyInstance(subRenderState);
						}
					}
					virtual void destroyAllInstances()
					{
						if (this->_gRef != NULL && this->m_destroyAllInstances_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("destroyAllInstances_void_callback");
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
							return this->CSubRenderStateFactory::destroyAllInstances();
						}
					}
					virtual void writeInstance(EarthView::World::Graphic::CMaterialSerializer* ser, EarthView::World::Graphic::RTShaderSystem::CSubRenderState* subRenderState, EarthView::World::Graphic::CPass* srcPass, EarthView::World::Graphic::CPass* dstPass)
					{
						if (this->_gRef != NULL && this->m_writeInstance_CMaterialSerializer_CSubRenderState_CPass_CPass_callback != "" && this->isCustomExtend())
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
							jlong ser_j = (jlong) ser;
							jlong subRenderState_j = (jlong) subRenderState;
							jlong srcPass_j = (jlong) srcPass;
							jlong dstPass_j = (jlong) dstPass;
							jmethodID __method = __gr->getMethod("writeInstance_CMaterialSerializer_CSubRenderState_CPass_CPass_callback");
							__env->CallVoidMethod(__obj, __method , ser_j, subRenderState_j, srcPass_j, dstPass_j);
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
							return this->CSubRenderStateFactory::writeInstance(ser, subRenderState, srcPass, dstPass);
						}
					}
					virtual void writeInstance(EarthView::World::Graphic::CMaterialSerializer* ser, EarthView::World::Graphic::RTShaderSystem::CSubRenderState* subRenderState, const EarthView::World::Graphic::CTextureUnitState* srcTextureUnit, const EarthView::World::Graphic::CTextureUnitState* dstTextureUnit)
					{
						if (this->_gRef != NULL && this->m_writeInstance_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState_callback != "" && this->isCustomExtend())
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
							jlong ser_j = (jlong) ser;
							jlong subRenderState_j = (jlong) subRenderState;
							jlong srcTextureUnit_j = (jlong) srcTextureUnit;
							jlong dstTextureUnit_j = (jlong) dstTextureUnit;
							jmethodID __method = __gr->getMethod("writeInstance_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState_callback");
							__env->CallVoidMethod(__obj, __method , ser_j, subRenderState_j, srcTextureUnit_j, dstTextureUnit_j);
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
							return this->CSubRenderStateFactory::writeInstance(ser, subRenderState, srcTextureUnit, dstTextureUnit);
						}
					}
					virtual EarthView::World::Graphic::RTShaderSystem::CSubRenderState* createInstanceImpl()
					{
						if (this->_gRef != NULL && this->m_createInstanceImpl_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("createInstanceImpl_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Graphic::RTShaderSystem::CSubRenderState *__values1 = (EarthView::World::Graphic::RTShaderSystem::CSubRenderState*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CSubRenderStateFactory::createInstanceImpl();
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCSubRenderStateFactoryProxy);
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_rtshadersystem_SubRenderStateFactory_getType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCSubRenderStateFactoryProxy))
					{
						EVString __values1 = pObjectX->EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory::getType();
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
					else
					{
						EVString __values1 = pObjectX->getType();
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_SubRenderStateFactory_register_1getType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCSubRenderStateFactoryProxy *pObjectX = (JCSubRenderStateFactoryProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getType_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getType_void_callback", "()Ljava/lang/String;");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_rtshadersystem_SubRenderStateFactory_getType_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory*) pObjXXXX;
					EVString __values1 = pObjectX->EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory::getType();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_SubRenderStateFactory_createInstance_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCSubRenderStateFactoryProxy))
					{
						EarthView::World::Graphic::RTShaderSystem::CSubRenderState* __values1 = pObjectX->EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory::createInstance();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Graphic::RTShaderSystem::CSubRenderState* __values1 = pObjectX->createInstance();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_SubRenderStateFactory_register_1createInstance_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCSubRenderStateFactoryProxy *pObjectX = (JCSubRenderStateFactoryProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_createInstance_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"createInstance_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_SubRenderStateFactory_createInstance_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory*) pObjXXXX;
					EarthView::World::Graphic::RTShaderSystem::CSubRenderState* __values1 = pObjectX->EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory::createInstance();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_SubRenderStateFactory_createInstance_1CScriptCompiler_1CPropertyAbstractNode_1CPass_1CSGScriptTranslator(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong compiler_j, jlong prop_j, jlong pass_j, jlong translator_j)
				{
					EarthView::World::Graphic::CScriptCompiler *compiler = (EarthView::World::Graphic::CScriptCompiler*) compiler_j;
					EarthView::World::Graphic::CPropertyAbstractNode *prop = (EarthView::World::Graphic::CPropertyAbstractNode*) prop_j;
					EarthView::World::Graphic::CPass *pass = (EarthView::World::Graphic::CPass*) pass_j;
					EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator *translator = (EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator*) translator_j;
					EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCSubRenderStateFactoryProxy))
					{
						EarthView::World::Graphic::RTShaderSystem::CSubRenderState* __values1 = pObjectX->EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory::createInstance(compiler, prop, pass, translator);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Graphic::RTShaderSystem::CSubRenderState* __values1 = pObjectX->createInstance(compiler, prop, pass, translator);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_SubRenderStateFactory_register_1createInstance_1CScriptCompiler_1CPropertyAbstractNode_1CPass_1CSGScriptTranslator(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCSubRenderStateFactoryProxy *pObjectX = (JCSubRenderStateFactoryProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_createInstance_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"createInstance_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator_callback", "(JJJJ)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_SubRenderStateFactory_createInstance_1CScriptCompiler_1CPropertyAbstractNode_1CPass_1CSGScriptTranslator_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong compiler_j, jlong prop_j, jlong pass_j, jlong translator_j)
				{
					EarthView::World::Graphic::CScriptCompiler *compiler = (EarthView::World::Graphic::CScriptCompiler*) compiler_j;
					EarthView::World::Graphic::CPropertyAbstractNode *prop = (EarthView::World::Graphic::CPropertyAbstractNode*) prop_j;
					EarthView::World::Graphic::CPass *pass = (EarthView::World::Graphic::CPass*) pass_j;
					EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator *translator = (EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator*) translator_j;
					EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory*) pObjXXXX;
					EarthView::World::Graphic::RTShaderSystem::CSubRenderState* __values1 = pObjectX->EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory::createInstance(compiler, prop, pass, translator);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_SubRenderStateFactory_createInstance_1CScriptCompiler_1CPropertyAbstractNode_1CTextureUnitState_1CSGScriptTranslator(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong compiler_j, jlong prop_j, jlong texState_j, jlong translator_j)
				{
					EarthView::World::Graphic::CScriptCompiler *compiler = (EarthView::World::Graphic::CScriptCompiler*) compiler_j;
					EarthView::World::Graphic::CPropertyAbstractNode *prop = (EarthView::World::Graphic::CPropertyAbstractNode*) prop_j;
					EarthView::World::Graphic::CTextureUnitState *texState = (EarthView::World::Graphic::CTextureUnitState*) texState_j;
					EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator *translator = (EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator*) translator_j;
					EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCSubRenderStateFactoryProxy))
					{
						EarthView::World::Graphic::RTShaderSystem::CSubRenderState* __values1 = pObjectX->EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory::createInstance(compiler, prop, texState, translator);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Graphic::RTShaderSystem::CSubRenderState* __values1 = pObjectX->createInstance(compiler, prop, texState, translator);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_SubRenderStateFactory_register_1createInstance_1CScriptCompiler_1CPropertyAbstractNode_1CTextureUnitState_1CSGScriptTranslator(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCSubRenderStateFactoryProxy *pObjectX = (JCSubRenderStateFactoryProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_createInstance_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"createInstance_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator_callback", "(JJJJ)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_SubRenderStateFactory_createInstance_1CScriptCompiler_1CPropertyAbstractNode_1CTextureUnitState_1CSGScriptTranslator_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong compiler_j, jlong prop_j, jlong texState_j, jlong translator_j)
				{
					EarthView::World::Graphic::CScriptCompiler *compiler = (EarthView::World::Graphic::CScriptCompiler*) compiler_j;
					EarthView::World::Graphic::CPropertyAbstractNode *prop = (EarthView::World::Graphic::CPropertyAbstractNode*) prop_j;
					EarthView::World::Graphic::CTextureUnitState *texState = (EarthView::World::Graphic::CTextureUnitState*) texState_j;
					EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator *translator = (EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator*) translator_j;
					EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory*) pObjXXXX;
					EarthView::World::Graphic::RTShaderSystem::CSubRenderState* __values1 = pObjectX->EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory::createInstance(compiler, prop, texState, translator);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_SubRenderStateFactory_createOrRetrieveInstance_1CSGScriptTranslator(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong translator_j)
				{
					EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator *translator = (EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator*) translator_j;
					EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCSubRenderStateFactoryProxy))
					{
						EarthView::World::Graphic::RTShaderSystem::CSubRenderState* __values1 = pObjectX->EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory::createOrRetrieveInstance(translator);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Graphic::RTShaderSystem::CSubRenderState* __values1 = pObjectX->createOrRetrieveInstance(translator);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_SubRenderStateFactory_register_1createOrRetrieveInstance_1CSGScriptTranslator(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCSubRenderStateFactoryProxy *pObjectX = (JCSubRenderStateFactoryProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_createOrRetrieveInstance_CSGScriptTranslator_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"createOrRetrieveInstance_CSGScriptTranslator_callback", "(J)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_SubRenderStateFactory_createOrRetrieveInstance_1CSGScriptTranslator_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong translator_j)
				{
					EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator *translator = (EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator*) translator_j;
					EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory*) pObjXXXX;
					EarthView::World::Graphic::RTShaderSystem::CSubRenderState* __values1 = pObjectX->EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory::createOrRetrieveInstance(translator);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_SubRenderStateFactory_destroyInstance_1CSubRenderState(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong subRenderState_j)
				{
					EarthView::World::Graphic::RTShaderSystem::CSubRenderState *subRenderState = (EarthView::World::Graphic::RTShaderSystem::CSubRenderState*) subRenderState_j;
					EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCSubRenderStateFactoryProxy))
					{
						pObjectX->EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory::destroyInstance(subRenderState);
					}
					else
					{
						pObjectX->destroyInstance(subRenderState);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_SubRenderStateFactory_register_1destroyInstance_1CSubRenderState(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCSubRenderStateFactoryProxy *pObjectX = (JCSubRenderStateFactoryProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_destroyInstance_CSubRenderState_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"destroyInstance_CSubRenderState_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_SubRenderStateFactory_destroyInstance_1CSubRenderState_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong subRenderState_j)
				{
					EarthView::World::Graphic::RTShaderSystem::CSubRenderState *subRenderState = (EarthView::World::Graphic::RTShaderSystem::CSubRenderState*) subRenderState_j;
					EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory*) pObjXXXX;
					pObjectX->EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory::destroyInstance(subRenderState);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_SubRenderStateFactory_destroyAllInstances_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCSubRenderStateFactoryProxy))
					{
						pObjectX->EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory::destroyAllInstances();
					}
					else
					{
						pObjectX->destroyAllInstances();
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_SubRenderStateFactory_register_1destroyAllInstances_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCSubRenderStateFactoryProxy *pObjectX = (JCSubRenderStateFactoryProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_destroyAllInstances_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"destroyAllInstances_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_SubRenderStateFactory_destroyAllInstances_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory*) pObjXXXX;
					pObjectX->EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory::destroyAllInstances();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_SubRenderStateFactory_writeInstance_1CMaterialSerializer_1CSubRenderState_1CPass_1CPass(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ser_j, jlong subRenderState_j, jlong srcPass_j, jlong dstPass_j)
				{
					EarthView::World::Graphic::CMaterialSerializer *ser = (EarthView::World::Graphic::CMaterialSerializer*) ser_j;
					EarthView::World::Graphic::RTShaderSystem::CSubRenderState *subRenderState = (EarthView::World::Graphic::RTShaderSystem::CSubRenderState*) subRenderState_j;
					EarthView::World::Graphic::CPass *srcPass = (EarthView::World::Graphic::CPass*) srcPass_j;
					EarthView::World::Graphic::CPass *dstPass = (EarthView::World::Graphic::CPass*) dstPass_j;
					EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCSubRenderStateFactoryProxy))
					{
						pObjectX->EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory::writeInstance(ser, subRenderState, srcPass, dstPass);
					}
					else
					{
						pObjectX->writeInstance(ser, subRenderState, srcPass, dstPass);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_SubRenderStateFactory_register_1writeInstance_1CMaterialSerializer_1CSubRenderState_1CPass_1CPass(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCSubRenderStateFactoryProxy *pObjectX = (JCSubRenderStateFactoryProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_writeInstance_CMaterialSerializer_CSubRenderState_CPass_CPass_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"writeInstance_CMaterialSerializer_CSubRenderState_CPass_CPass_callback", "(JJJJ)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_SubRenderStateFactory_writeInstance_1CMaterialSerializer_1CSubRenderState_1CPass_1CPass_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ser_j, jlong subRenderState_j, jlong srcPass_j, jlong dstPass_j)
				{
					EarthView::World::Graphic::CMaterialSerializer *ser = (EarthView::World::Graphic::CMaterialSerializer*) ser_j;
					EarthView::World::Graphic::RTShaderSystem::CSubRenderState *subRenderState = (EarthView::World::Graphic::RTShaderSystem::CSubRenderState*) subRenderState_j;
					EarthView::World::Graphic::CPass *srcPass = (EarthView::World::Graphic::CPass*) srcPass_j;
					EarthView::World::Graphic::CPass *dstPass = (EarthView::World::Graphic::CPass*) dstPass_j;
					EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory*) pObjXXXX;
					pObjectX->EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory::writeInstance(ser, subRenderState, srcPass, dstPass);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_SubRenderStateFactory_writeInstance_1CMaterialSerializer_1CSubRenderState_1CTextureUnitState_1CTextureUnitState(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ser_j, jlong subRenderState_j, jlong srcTextureUnit_j, jlong dstTextureUnit_j)
				{
					EarthView::World::Graphic::CMaterialSerializer *ser = (EarthView::World::Graphic::CMaterialSerializer*) ser_j;
					EarthView::World::Graphic::RTShaderSystem::CSubRenderState *subRenderState = (EarthView::World::Graphic::RTShaderSystem::CSubRenderState*) subRenderState_j;
					const EarthView::World::Graphic::CTextureUnitState *srcTextureUnit = (const EarthView::World::Graphic::CTextureUnitState*) srcTextureUnit_j;
					const EarthView::World::Graphic::CTextureUnitState *dstTextureUnit = (const EarthView::World::Graphic::CTextureUnitState*) dstTextureUnit_j;
					EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCSubRenderStateFactoryProxy))
					{
						pObjectX->EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory::writeInstance(ser, subRenderState, srcTextureUnit, dstTextureUnit);
					}
					else
					{
						pObjectX->writeInstance(ser, subRenderState, srcTextureUnit, dstTextureUnit);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_SubRenderStateFactory_register_1writeInstance_1CMaterialSerializer_1CSubRenderState_1CTextureUnitState_1CTextureUnitState(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCSubRenderStateFactoryProxy *pObjectX = (JCSubRenderStateFactoryProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_writeInstance_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"writeInstance_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState_callback", "(JJJJ)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_SubRenderStateFactory_writeInstance_1CMaterialSerializer_1CSubRenderState_1CTextureUnitState_1CTextureUnitState_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ser_j, jlong subRenderState_j, jlong srcTextureUnit_j, jlong dstTextureUnit_j)
				{
					EarthView::World::Graphic::CMaterialSerializer *ser = (EarthView::World::Graphic::CMaterialSerializer*) ser_j;
					EarthView::World::Graphic::RTShaderSystem::CSubRenderState *subRenderState = (EarthView::World::Graphic::RTShaderSystem::CSubRenderState*) subRenderState_j;
					const EarthView::World::Graphic::CTextureUnitState *srcTextureUnit = (const EarthView::World::Graphic::CTextureUnitState*) srcTextureUnit_j;
					const EarthView::World::Graphic::CTextureUnitState *dstTextureUnit = (const EarthView::World::Graphic::CTextureUnitState*) dstTextureUnit_j;
					EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory*) pObjXXXX;
					pObjectX->EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory::writeInstance(ser, subRenderState, srcTextureUnit, dstTextureUnit);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_SubRenderStateFactory_createInstanceImpl_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCSubRenderStateFactoryProxy))
					{
						EarthView::World::Graphic::RTShaderSystem::CSubRenderState* __values1 = pObjectX->EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory::createInstanceImpl();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Graphic::RTShaderSystem::CSubRenderState* __values1 = pObjectX->createInstanceImpl();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_SubRenderStateFactory_register_1createInstanceImpl_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCSubRenderStateFactoryProxy *pObjectX = (JCSubRenderStateFactoryProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_createInstanceImpl_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"createInstanceImpl_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_SubRenderStateFactory_createInstanceImpl_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory*) pObjXXXX;
					EarthView::World::Graphic::RTShaderSystem::CSubRenderState* __values1 = pObjectX->EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory::createInstanceImpl();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
		}
	}
}
