/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "rtshadersystem/shaderffptexturing.h"
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
				class JCFFPTexturingProxy : public EarthView::World::Graphic::RTShaderSystem::CFFPTexturing
				{
				 private:
					EarthView::World::Core::ev_string m_addPSSampleTexelInvocation_TextureUnitParams_CFunction_ParameterPtr_int_int_callback;
					EarthView::World::Core::ev_string m_addPSArgumentInvocations_CFunction_ParameterPtr_ParameterPtr_int_LayerBlendSource_CColourValue_Real_bool_int_int_callback;
					EarthView::World::Core::ev_string m_addPSBlendInvocations_CFunction_ParameterPtr_ParameterPtr_ParameterPtr_int_CLayerBlendModeEx_int_int_int_callback;
					EarthView::World::Core::ev_string m_isProcessingNeeded_CTextureUnitState_callback;
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
					JCFFPTexturingProxy(EarthView::World::Core::CNameValuePairList *pList) : CFFPTexturing(pList)
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
					void register_addPSSampleTexelInvocation_TextureUnitParams_CFunction_ParameterPtr_int_int_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_addPSSampleTexelInvocation_TextureUnitParams_CFunction_ParameterPtr_int_int_callback = __method;
					}
					void register_addPSArgumentInvocations_CFunction_ParameterPtr_ParameterPtr_int_LayerBlendSource_CColourValue_Real_bool_int_int_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_addPSArgumentInvocations_CFunction_ParameterPtr_ParameterPtr_int_LayerBlendSource_CColourValue_Real_bool_int_int_callback = __method;
					}
					void register_addPSBlendInvocations_CFunction_ParameterPtr_ParameterPtr_ParameterPtr_int_CLayerBlendModeEx_int_int_int_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_addPSBlendInvocations_CFunction_ParameterPtr_ParameterPtr_ParameterPtr_int_CLayerBlendModeEx_int_int_int_callback = __method;
					}
					void register_isProcessingNeeded_CTextureUnitState_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_isProcessingNeeded_CTextureUnitState_callback = __method;
					}
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
							return this->CFFPTexturing::getType();
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
							return this->CFFPTexturing::getExecutionOrder();
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
							return this->CFFPTexturing::updateGpuProgramsParams(rend, pass, source, pLightList);
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
							return this->CFFPTexturing::copyFrom(rhs);
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
							return this->CFFPTexturing::preAddToRenderState(renderState, srcPass, dstPass);
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
							return this->CFFPTexturing::resolveParameters(programSet);
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
							return this->CFFPTexturing::resolveDependencies(programSet);
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
							return this->CFFPTexturing::addFunctionInvocations(programSet);
						}
					}
					virtual void addPSSampleTexelInvocation(EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::TextureUnitParams* textureUnitParams, EarthView::World::Graphic::RTShaderSystem::CFunction* psMain, const EarthView::World::Graphic::RTShaderSystem::ParameterPtr& texel, int groupOrder, int& internalCounter)
					{
						if (this->_gRef != NULL && this->m_addPSSampleTexelInvocation_TextureUnitParams_CFunction_ParameterPtr_int_int_callback != "" && this->isCustomExtend())
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
							jlong textureUnitParams_j = (jlong) textureUnitParams;
							jlong psMain_j = (jlong) psMain;
							jlong texel_j = (jlong) &texel;
							jint groupOrder_j = (jint) groupOrder;
							jlong internalCounter_j = (jlong) &internalCounter;
							jmethodID __method = __gr->getMethod("addPSSampleTexelInvocation_TextureUnitParams_CFunction_ParameterPtr_int_int_callback");
							__env->CallVoidMethod(__obj, __method , textureUnitParams_j, psMain_j, texel_j, groupOrder_j, internalCounter_j);
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
							return this->CFFPTexturing::addPSSampleTexelInvocation(textureUnitParams, psMain, texel, groupOrder, internalCounter);
						}
					}
					virtual void addPSArgumentInvocations(EarthView::World::Graphic::RTShaderSystem::CFunction* psMain, EarthView::World::Graphic::RTShaderSystem::ParameterPtr arg, EarthView::World::Graphic::RTShaderSystem::ParameterPtr texel, int samplerIndex, EarthView::World::Graphic::LayerBlendSource blendSrc, const EarthView::World::Graphic::CColourValue& colourValue, Real alphaValue, bool isAlphaArgument, const int groupOrder, int& internalCounter)
					{
						if (this->_gRef != NULL && this->m_addPSArgumentInvocations_CFunction_ParameterPtr_ParameterPtr_int_LayerBlendSource_CColourValue_Real_bool_int_int_callback != "" && this->isCustomExtend())
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
							jlong psMain_j = (jlong) psMain;
							jlong arg_j = (jlong) &arg;
							jlong texel_j = (jlong) &texel;
							jint samplerIndex_j = (jint) samplerIndex;
							jint blendSrc_j = (jint) blendSrc;
							jlong colourValue_j = (jlong) &colourValue;
							jdouble alphaValue_j = (jdouble) alphaValue;
							jboolean isAlphaArgument_j = (jboolean) isAlphaArgument;
							jint groupOrder_j = (jint) groupOrder;
							jlong internalCounter_j = (jlong) &internalCounter;
							jmethodID __method = __gr->getMethod("addPSArgumentInvocations_CFunction_ParameterPtr_ParameterPtr_int_LayerBlendSource_CColourValue_Real_bool_int_int_callback");
							__env->CallVoidMethod(__obj, __method , psMain_j, arg_j, texel_j, samplerIndex_j, blendSrc_j, colourValue_j, alphaValue_j, isAlphaArgument_j, groupOrder_j, internalCounter_j);
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
							return this->CFFPTexturing::addPSArgumentInvocations(psMain, arg, texel, samplerIndex, blendSrc, colourValue, alphaValue, isAlphaArgument, groupOrder, internalCounter);
						}
					}
					virtual void addPSBlendInvocations(EarthView::World::Graphic::RTShaderSystem::CFunction* psMain, EarthView::World::Graphic::RTShaderSystem::ParameterPtr arg1, EarthView::World::Graphic::RTShaderSystem::ParameterPtr arg2, EarthView::World::Graphic::RTShaderSystem::ParameterPtr texel, int samplerIndex, const EarthView::World::Graphic::CLayerBlendModeEx& blendMode, const int groupOrder, int& internalCounter, int targetChannels)
					{
						if (this->_gRef != NULL && this->m_addPSBlendInvocations_CFunction_ParameterPtr_ParameterPtr_ParameterPtr_int_CLayerBlendModeEx_int_int_int_callback != "" && this->isCustomExtend())
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
							jlong psMain_j = (jlong) psMain;
							jlong arg1_j = (jlong) &arg1;
							jlong arg2_j = (jlong) &arg2;
							jlong texel_j = (jlong) &texel;
							jint samplerIndex_j = (jint) samplerIndex;
							jlong blendMode_j = (jlong) &blendMode;
							jint groupOrder_j = (jint) groupOrder;
							jlong internalCounter_j = (jlong) &internalCounter;
							jint targetChannels_j = (jint) targetChannels;
							jmethodID __method = __gr->getMethod("addPSBlendInvocations_CFunction_ParameterPtr_ParameterPtr_ParameterPtr_int_CLayerBlendModeEx_int_int_int_callback");
							__env->CallVoidMethod(__obj, __method , psMain_j, arg1_j, arg2_j, texel_j, samplerIndex_j, blendMode_j, groupOrder_j, internalCounter_j, targetChannels_j);
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
							return this->CFFPTexturing::addPSBlendInvocations(psMain, arg1, arg2, texel, samplerIndex, blendMode, groupOrder, internalCounter, targetChannels);
						}
					}
					virtual bool isProcessingNeeded(EarthView::World::Graphic::CTextureUnitState* texUnitState)
					{
						if (this->_gRef != NULL && this->m_isProcessingNeeded_CTextureUnitState_callback != "" && this->isCustomExtend())
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
							jlong texUnitState_j = (jlong) texUnitState;
							jmethodID __method = __gr->getMethod("isProcessingNeeded_CTextureUnitState_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , texUnitState_j);
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
							return this->CFFPTexturing::isProcessingNeeded(texUnitState);
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
							return this->CFFPTexturing::createCpuSubPrograms(programSet);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCFFPTexturingProxy);
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_rtshadersystem_Ffptexturing_getType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Graphic::RTShaderSystem::CFFPTexturing *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CFFPTexturing*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCFFPTexturingProxy))
					{
						EVString __values1 = pObjectX->EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::getType();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_Ffptexturing_register_1getType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCFFPTexturingProxy *pObjectX = (JCFFPTexturingProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_rtshadersystem_Ffptexturing_getType_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Graphic::RTShaderSystem::CFFPTexturing *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CFFPTexturing*) pObjXXXX;
					EVString __values1 = pObjectX->EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::getType();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_rtshadersystem_Ffptexturing_getExecutionOrder_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Graphic::RTShaderSystem::CFFPTexturing *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CFFPTexturing*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCFFPTexturingProxy))
					{
						int __values1 = pObjectX->EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::getExecutionOrder();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_Ffptexturing_register_1getExecutionOrder_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCFFPTexturingProxy *pObjectX = (JCFFPTexturingProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_rtshadersystem_Ffptexturing_getExecutionOrder_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Graphic::RTShaderSystem::CFFPTexturing *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CFFPTexturing*) pObjXXXX;
					int __values1 = pObjectX->EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::getExecutionOrder();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_Ffptexturing_updateGpuProgramsParams_1CRenderable_1CPass_1CAutoParamDataSource_1LightList(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong rend_j, jlong pass_j, jlong source_j, jlong pLightList_j)
				{
					EarthView::World::Graphic::CRenderable *rend = (EarthView::World::Graphic::CRenderable*) rend_j;
					EarthView::World::Graphic::CPass *pass = (EarthView::World::Graphic::CPass*) pass_j;
					const EarthView::World::Graphic::CAutoParamDataSource *source = (const EarthView::World::Graphic::CAutoParamDataSource*) source_j;
					const EarthView::World::Graphic::LightList *pLightList = (const EarthView::World::Graphic::LightList*) pLightList_j;
					EarthView::World::Graphic::RTShaderSystem::CFFPTexturing *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CFFPTexturing*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCFFPTexturingProxy))
					{
						pObjectX->EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::updateGpuProgramsParams(rend, pass, source, pLightList);
					}
					else
					{
						pObjectX->updateGpuProgramsParams(rend, pass, source, pLightList);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_Ffptexturing_register_1updateGpuProgramsParams_1CRenderable_1CPass_1CAutoParamDataSource_1LightList(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCFFPTexturingProxy *pObjectX = (JCFFPTexturingProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_Ffptexturing_updateGpuProgramsParams_1CRenderable_1CPass_1CAutoParamDataSource_1LightList_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong rend_j, jlong pass_j, jlong source_j, jlong pLightList_j)
				{
					EarthView::World::Graphic::CRenderable *rend = (EarthView::World::Graphic::CRenderable*) rend_j;
					EarthView::World::Graphic::CPass *pass = (EarthView::World::Graphic::CPass*) pass_j;
					const EarthView::World::Graphic::CAutoParamDataSource *source = (const EarthView::World::Graphic::CAutoParamDataSource*) source_j;
					const EarthView::World::Graphic::LightList *pLightList = (const EarthView::World::Graphic::LightList*) pLightList_j;
					EarthView::World::Graphic::RTShaderSystem::CFFPTexturing *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CFFPTexturing*) pObjXXXX;
					pObjectX->EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::updateGpuProgramsParams(rend, pass, source, pLightList);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_Ffptexturing_copyFrom_1CSubRenderState(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong rhs_j)
				{
					const EarthView::World::Graphic::RTShaderSystem::CSubRenderState &rhs = *(EarthView::World::Graphic::RTShaderSystem::CSubRenderState*) rhs_j;
					EarthView::World::Graphic::RTShaderSystem::CFFPTexturing *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CFFPTexturing*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCFFPTexturingProxy))
					{
						pObjectX->EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::copyFrom(rhs);
					}
					else
					{
						pObjectX->copyFrom(rhs);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_Ffptexturing_register_1copyFrom_1CSubRenderState(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCFFPTexturingProxy *pObjectX = (JCFFPTexturingProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_Ffptexturing_copyFrom_1CSubRenderState_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong rhs_j)
				{
					const EarthView::World::Graphic::RTShaderSystem::CSubRenderState &rhs = *(EarthView::World::Graphic::RTShaderSystem::CSubRenderState*) rhs_j;
					EarthView::World::Graphic::RTShaderSystem::CFFPTexturing *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CFFPTexturing*) pObjXXXX;
					pObjectX->EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::copyFrom(rhs);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_rtshadersystem_Ffptexturing_preAddToRenderState_1CRenderState_1CPass_1CPass(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong renderState_j, jlong srcPass_j, jlong dstPass_j)
				{
					const EarthView::World::Graphic::RTShaderSystem::CRenderState *renderState = (const EarthView::World::Graphic::RTShaderSystem::CRenderState*) renderState_j;
					EarthView::World::Graphic::CPass *srcPass = (EarthView::World::Graphic::CPass*) srcPass_j;
					EarthView::World::Graphic::CPass *dstPass = (EarthView::World::Graphic::CPass*) dstPass_j;
					EarthView::World::Graphic::RTShaderSystem::CFFPTexturing *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CFFPTexturing*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCFFPTexturingProxy))
					{
						bool __values1 = pObjectX->EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::preAddToRenderState(renderState, srcPass, dstPass);
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_Ffptexturing_register_1preAddToRenderState_1CRenderState_1CPass_1CPass(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCFFPTexturingProxy *pObjectX = (JCFFPTexturingProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_rtshadersystem_Ffptexturing_preAddToRenderState_1CRenderState_1CPass_1CPass_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong renderState_j, jlong srcPass_j, jlong dstPass_j)
				{
					const EarthView::World::Graphic::RTShaderSystem::CRenderState *renderState = (const EarthView::World::Graphic::RTShaderSystem::CRenderState*) renderState_j;
					EarthView::World::Graphic::CPass *srcPass = (EarthView::World::Graphic::CPass*) srcPass_j;
					EarthView::World::Graphic::CPass *dstPass = (EarthView::World::Graphic::CPass*) dstPass_j;
					EarthView::World::Graphic::RTShaderSystem::CFFPTexturing *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CFFPTexturing*) pObjXXXX;
					bool __values1 = pObjectX->EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::preAddToRenderState(renderState, srcPass, dstPass);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_rtshadersystem_Ffptexturing_get_1Type_1void(JNIEnv *__env, jclass __clazz)
				{
					EarthView::World::Core::ev_wstring __values1_ch = EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::Type;
					jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_Ffptexturing_set_1Type_1EVString(JNIEnv *__env, jclass __clazz, jstring __values1_j)
				{
					const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
					EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::Type = __values1_ch;
					__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_Ffptexturing_00024TextureUnitParams_get_1mTextureUnitState_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::TextureUnitParams *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::TextureUnitParams*)pObjXXXX;
					jlong __values1_j = (jlong)(pObjectX->mTextureUnitState);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_Ffptexturing_00024TextureUnitParams_set_1mTextureUnitState_1CTextureUnitState(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::TextureUnitParams *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::TextureUnitParams*)pObjXXXX;
					pObjectX->mTextureUnitState = (EarthView::World::Graphic::CTextureUnitState*) __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_Ffptexturing_00024TextureUnitParams_get_1mTextureProjector_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::TextureUnitParams *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::TextureUnitParams*)pObjXXXX;
					jlong __values1_j = (jlong)(pObjectX->mTextureProjector);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_Ffptexturing_00024TextureUnitParams_set_1mTextureProjector_1CFrustum(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::TextureUnitParams *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::TextureUnitParams*)pObjXXXX;
					pObjectX->mTextureProjector = (EarthView::World::Graphic::CFrustum*) __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_rtshadersystem_Ffptexturing_00024TextureUnitParams_get_1mTextureSamplerIndex_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::TextureUnitParams *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::TextureUnitParams*)pObjXXXX;
					jint __values1_j = (jint) (pObjectX->mTextureSamplerIndex);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_Ffptexturing_00024TextureUnitParams_set_1mTextureSamplerIndex_1ev_1uint16(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
				{
					EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::TextureUnitParams *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::TextureUnitParams*)pObjXXXX;
					pObjectX->mTextureSamplerIndex = (ev_uint16)__values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_rtshadersystem_Ffptexturing_00024TextureUnitParams_get_1mTextureSamplerType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::TextureUnitParams *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::TextureUnitParams*)pObjXXXX;
					jint __values1_j = (jint)(pObjectX->mTextureSamplerType);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_Ffptexturing_00024TextureUnitParams_set_1mTextureSamplerType_1GpuConstantType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
				{
					EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::TextureUnitParams *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::TextureUnitParams*)pObjXXXX;
					pObjectX->mTextureSamplerType = (EarthView::World::Graphic::GpuConstantType)__values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_rtshadersystem_Ffptexturing_00024TextureUnitParams_get_1mVSInTextureCoordinateType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::TextureUnitParams *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::TextureUnitParams*)pObjXXXX;
					jint __values1_j = (jint)(pObjectX->mVSInTextureCoordinateType);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_Ffptexturing_00024TextureUnitParams_set_1mVSInTextureCoordinateType_1GpuConstantType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
				{
					EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::TextureUnitParams *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::TextureUnitParams*)pObjXXXX;
					pObjectX->mVSInTextureCoordinateType = (EarthView::World::Graphic::GpuConstantType)__values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_rtshadersystem_Ffptexturing_00024TextureUnitParams_get_1mVSOutTextureCoordinateType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::TextureUnitParams *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::TextureUnitParams*)pObjXXXX;
					jint __values1_j = (jint)(pObjectX->mVSOutTextureCoordinateType);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_Ffptexturing_00024TextureUnitParams_set_1mVSOutTextureCoordinateType_1GpuConstantType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
				{
					EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::TextureUnitParams *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::TextureUnitParams*)pObjXXXX;
					pObjectX->mVSOutTextureCoordinateType = (EarthView::World::Graphic::GpuConstantType)__values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_rtshadersystem_Ffptexturing_00024TextureUnitParams_get_1mTexCoordCalcMethod_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::TextureUnitParams *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::TextureUnitParams*)pObjXXXX;
					jint __values1_j = (jint)(pObjectX->mTexCoordCalcMethod);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_Ffptexturing_00024TextureUnitParams_set_1mTexCoordCalcMethod_1TexCoordCalcMethod(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
				{
					EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::TextureUnitParams *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::TextureUnitParams*)pObjXXXX;
					pObjectX->mTexCoordCalcMethod = (TexCoordCalcMethod)__values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_Ffptexturing_00024TextureUnitParams_get_1mTextureMatrix_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::TextureUnitParams *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::TextureUnitParams*)pObjXXXX;
					jlong __values1_j = (jlong) &(pObjectX->mTextureMatrix);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_Ffptexturing_00024TextureUnitParams_set_1mTextureMatrix_1UniformParameterPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::TextureUnitParams *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::TextureUnitParams*)pObjXXXX;
					pObjectX->mTextureMatrix = *(EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr*) __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_Ffptexturing_00024TextureUnitParams_get_1mTextureViewProjImageMatrix_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::TextureUnitParams *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::TextureUnitParams*)pObjXXXX;
					jlong __values1_j = (jlong) &(pObjectX->mTextureViewProjImageMatrix);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_Ffptexturing_00024TextureUnitParams_set_1mTextureViewProjImageMatrix_1UniformParameterPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::TextureUnitParams *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::TextureUnitParams*)pObjXXXX;
					pObjectX->mTextureViewProjImageMatrix = *(EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr*) __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_Ffptexturing_00024TextureUnitParams_get_1mTextureSampler_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::TextureUnitParams *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::TextureUnitParams*)pObjXXXX;
					jlong __values1_j = (jlong) &(pObjectX->mTextureSampler);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_Ffptexturing_00024TextureUnitParams_set_1mTextureSampler_1UniformParameterPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::TextureUnitParams *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::TextureUnitParams*)pObjXXXX;
					pObjectX->mTextureSampler = *(EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr*) __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_Ffptexturing_00024TextureUnitParams_get_1mVSInputTexCoord_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::TextureUnitParams *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::TextureUnitParams*)pObjXXXX;
					jlong __values1_j = (jlong) &(pObjectX->mVSInputTexCoord);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_Ffptexturing_00024TextureUnitParams_set_1mVSInputTexCoord_1ParameterPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::TextureUnitParams *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::TextureUnitParams*)pObjXXXX;
					pObjectX->mVSInputTexCoord = *(EarthView::World::Graphic::RTShaderSystem::ParameterPtr*) __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_Ffptexturing_00024TextureUnitParams_get_1mVSOutputTexCoord_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::TextureUnitParams *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::TextureUnitParams*)pObjXXXX;
					jlong __values1_j = (jlong) &(pObjectX->mVSOutputTexCoord);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_Ffptexturing_00024TextureUnitParams_set_1mVSOutputTexCoord_1ParameterPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::TextureUnitParams *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::TextureUnitParams*)pObjXXXX;
					pObjectX->mVSOutputTexCoord = *(EarthView::World::Graphic::RTShaderSystem::ParameterPtr*) __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_Ffptexturing_00024TextureUnitParams_get_1mPSInputTexCoord_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::TextureUnitParams *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::TextureUnitParams*)pObjXXXX;
					jlong __values1_j = (jlong) &(pObjectX->mPSInputTexCoord);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_Ffptexturing_00024TextureUnitParams_set_1mPSInputTexCoord_1ParameterPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::TextureUnitParams *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::TextureUnitParams*)pObjXXXX;
					pObjectX->mPSInputTexCoord = *(EarthView::World::Graphic::RTShaderSystem::ParameterPtr*) __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_rtshadersystem_Ffptexturing_resolveParameters_1CProgramSet(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong programSet_j)
				{
					EarthView::World::Graphic::RTShaderSystem::CProgramSet *programSet = (EarthView::World::Graphic::RTShaderSystem::CProgramSet*) programSet_j;
					EarthView::World::Graphic::RTShaderSystem::CFFPTexturing *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CFFPTexturing*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCFFPTexturingProxy))
					{
						bool __values1 = pObjectX->EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::resolveParameters(programSet);
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_Ffptexturing_register_1resolveParameters_1CProgramSet(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCFFPTexturingProxy *pObjectX = (JCFFPTexturingProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_rtshadersystem_Ffptexturing_resolveParameters_1CProgramSet_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong programSet_j)
				{
					EarthView::World::Graphic::RTShaderSystem::CProgramSet *programSet = (EarthView::World::Graphic::RTShaderSystem::CProgramSet*) programSet_j;
					EarthView::World::Graphic::RTShaderSystem::CFFPTexturing *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CFFPTexturing*) pObjXXXX;
					bool __values1 = pObjectX->EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::resolveParameters(programSet);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_rtshadersystem_Ffptexturing_resolveDependencies_1CProgramSet(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong programSet_j)
				{
					EarthView::World::Graphic::RTShaderSystem::CProgramSet *programSet = (EarthView::World::Graphic::RTShaderSystem::CProgramSet*) programSet_j;
					EarthView::World::Graphic::RTShaderSystem::CFFPTexturing *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CFFPTexturing*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCFFPTexturingProxy))
					{
						bool __values1 = pObjectX->EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::resolveDependencies(programSet);
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_Ffptexturing_register_1resolveDependencies_1CProgramSet(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCFFPTexturingProxy *pObjectX = (JCFFPTexturingProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_rtshadersystem_Ffptexturing_resolveDependencies_1CProgramSet_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong programSet_j)
				{
					EarthView::World::Graphic::RTShaderSystem::CProgramSet *programSet = (EarthView::World::Graphic::RTShaderSystem::CProgramSet*) programSet_j;
					EarthView::World::Graphic::RTShaderSystem::CFFPTexturing *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CFFPTexturing*) pObjXXXX;
					bool __values1 = pObjectX->EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::resolveDependencies(programSet);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_rtshadersystem_Ffptexturing_addFunctionInvocations_1CProgramSet(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong programSet_j)
				{
					EarthView::World::Graphic::RTShaderSystem::CProgramSet *programSet = (EarthView::World::Graphic::RTShaderSystem::CProgramSet*) programSet_j;
					EarthView::World::Graphic::RTShaderSystem::CFFPTexturing *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CFFPTexturing*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCFFPTexturingProxy))
					{
						bool __values1 = pObjectX->EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::addFunctionInvocations(programSet);
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_Ffptexturing_register_1addFunctionInvocations_1CProgramSet(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCFFPTexturingProxy *pObjectX = (JCFFPTexturingProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_rtshadersystem_Ffptexturing_addFunctionInvocations_1CProgramSet_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong programSet_j)
				{
					EarthView::World::Graphic::RTShaderSystem::CProgramSet *programSet = (EarthView::World::Graphic::RTShaderSystem::CProgramSet*) programSet_j;
					EarthView::World::Graphic::RTShaderSystem::CFFPTexturing *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CFFPTexturing*) pObjXXXX;
					bool __values1 = pObjectX->EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::addFunctionInvocations(programSet);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_Ffptexturing_addPSSampleTexelInvocation_1TextureUnitParams_1CFunction_1ParameterPtr_1int_1int(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong textureUnitParams_j, jlong psMain_j, jlong texel_j, jint groupOrder_j, jlong internalCounter_j)
				{
					EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::TextureUnitParams *textureUnitParams = (EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::TextureUnitParams*) textureUnitParams_j;
					EarthView::World::Graphic::RTShaderSystem::CFunction *psMain = (EarthView::World::Graphic::RTShaderSystem::CFunction*) psMain_j;
					const EarthView::World::Graphic::RTShaderSystem::ParameterPtr &texel = *(EarthView::World::Graphic::RTShaderSystem::ParameterPtr*) texel_j;
					int groupOrder = (int) groupOrder_j;
					int &internalCounter = *(int*) internalCounter_j;
					EarthView::World::Graphic::RTShaderSystem::CFFPTexturing *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CFFPTexturing*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCFFPTexturingProxy))
					{
						pObjectX->EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::addPSSampleTexelInvocation(textureUnitParams, psMain, texel, groupOrder, internalCounter);
					}
					else
					{
						pObjectX->addPSSampleTexelInvocation(textureUnitParams, psMain, texel, groupOrder, internalCounter);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_Ffptexturing_register_1addPSSampleTexelInvocation_1TextureUnitParams_1CFunction_1ParameterPtr_1int_1int(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCFFPTexturingProxy *pObjectX = (JCFFPTexturingProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_addPSSampleTexelInvocation_TextureUnitParams_CFunction_ParameterPtr_int_int_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"addPSSampleTexelInvocation_TextureUnitParams_CFunction_ParameterPtr_int_int_callback", "(JJJIJ)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_Ffptexturing_addPSSampleTexelInvocation_1TextureUnitParams_1CFunction_1ParameterPtr_1int_1int_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong textureUnitParams_j, jlong psMain_j, jlong texel_j, jint groupOrder_j, jlong internalCounter_j)
				{
					EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::TextureUnitParams *textureUnitParams = (EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::TextureUnitParams*) textureUnitParams_j;
					EarthView::World::Graphic::RTShaderSystem::CFunction *psMain = (EarthView::World::Graphic::RTShaderSystem::CFunction*) psMain_j;
					const EarthView::World::Graphic::RTShaderSystem::ParameterPtr &texel = *(EarthView::World::Graphic::RTShaderSystem::ParameterPtr*) texel_j;
					int groupOrder = (int) groupOrder_j;
					int &internalCounter = *(int*) internalCounter_j;
					EarthView::World::Graphic::RTShaderSystem::CFFPTexturing *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CFFPTexturing*) pObjXXXX;
					pObjectX->EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::addPSSampleTexelInvocation(textureUnitParams, psMain, texel, groupOrder, internalCounter);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_Ffptexturing_addPSArgumentInvocations_1CFunction_1ParameterPtr_1ParameterPtr_1int_1LayerBlendSource_1CColourValue_1Real_1bool_1int_1int(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong psMain_j, jlong arg_j, jlong texel_j, jint samplerIndex_j, jint blendSrc_j, jlong colourValue_j, jdouble alphaValue_j, jboolean isAlphaArgument_j, jint groupOrder_j, jlong internalCounter_j)
				{
					EarthView::World::Graphic::RTShaderSystem::CFunction *psMain = (EarthView::World::Graphic::RTShaderSystem::CFunction*) psMain_j;
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr arg = *(EarthView::World::Graphic::RTShaderSystem::ParameterPtr*) arg_j;
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr texel = *(EarthView::World::Graphic::RTShaderSystem::ParameterPtr*) texel_j;
					int samplerIndex = (int) samplerIndex_j;
					EarthView::World::Graphic::LayerBlendSource blendSrc = (EarthView::World::Graphic::LayerBlendSource) blendSrc_j;
					const EarthView::World::Graphic::CColourValue &colourValue = *(EarthView::World::Graphic::CColourValue*) colourValue_j;
					Real alphaValue = (Real) alphaValue_j;
					bool isAlphaArgument = (bool) isAlphaArgument_j;
					const int groupOrder = (int) groupOrder_j;
					int &internalCounter = *(int*) internalCounter_j;
					EarthView::World::Graphic::RTShaderSystem::CFFPTexturing *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CFFPTexturing*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCFFPTexturingProxy))
					{
						pObjectX->EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::addPSArgumentInvocations(psMain, arg, texel, samplerIndex, blendSrc, colourValue, alphaValue, isAlphaArgument, groupOrder, internalCounter);
					}
					else
					{
						pObjectX->addPSArgumentInvocations(psMain, arg, texel, samplerIndex, blendSrc, colourValue, alphaValue, isAlphaArgument, groupOrder, internalCounter);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_Ffptexturing_register_1addPSArgumentInvocations_1CFunction_1ParameterPtr_1ParameterPtr_1int_1LayerBlendSource_1CColourValue_1Real_1bool_1int_1int(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCFFPTexturingProxy *pObjectX = (JCFFPTexturingProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_addPSArgumentInvocations_CFunction_ParameterPtr_ParameterPtr_int_LayerBlendSource_CColourValue_Real_bool_int_int_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"addPSArgumentInvocations_CFunction_ParameterPtr_ParameterPtr_int_LayerBlendSource_CColourValue_Real_bool_int_int_callback", "(JJJIIJDZIJ)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_Ffptexturing_addPSArgumentInvocations_1CFunction_1ParameterPtr_1ParameterPtr_1int_1LayerBlendSource_1CColourValue_1Real_1bool_1int_1int_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong psMain_j, jlong arg_j, jlong texel_j, jint samplerIndex_j, jint blendSrc_j, jlong colourValue_j, jdouble alphaValue_j, jboolean isAlphaArgument_j, jint groupOrder_j, jlong internalCounter_j)
				{
					EarthView::World::Graphic::RTShaderSystem::CFunction *psMain = (EarthView::World::Graphic::RTShaderSystem::CFunction*) psMain_j;
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr arg = *(EarthView::World::Graphic::RTShaderSystem::ParameterPtr*) arg_j;
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr texel = *(EarthView::World::Graphic::RTShaderSystem::ParameterPtr*) texel_j;
					int samplerIndex = (int) samplerIndex_j;
					EarthView::World::Graphic::LayerBlendSource blendSrc = (EarthView::World::Graphic::LayerBlendSource) blendSrc_j;
					const EarthView::World::Graphic::CColourValue &colourValue = *(EarthView::World::Graphic::CColourValue*) colourValue_j;
					Real alphaValue = (Real) alphaValue_j;
					bool isAlphaArgument = (bool) isAlphaArgument_j;
					const int groupOrder = (int) groupOrder_j;
					int &internalCounter = *(int*) internalCounter_j;
					EarthView::World::Graphic::RTShaderSystem::CFFPTexturing *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CFFPTexturing*) pObjXXXX;
					pObjectX->EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::addPSArgumentInvocations(psMain, arg, texel, samplerIndex, blendSrc, colourValue, alphaValue, isAlphaArgument, groupOrder, internalCounter);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_Ffptexturing_addPSBlendInvocations_1CFunction_1ParameterPtr_1ParameterPtr_1ParameterPtr_1int_1CLayerBlendModeEx_1int_1int_1int(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong psMain_j, jlong arg1_j, jlong arg2_j, jlong texel_j, jint samplerIndex_j, jlong blendMode_j, jint groupOrder_j, jlong internalCounter_j, jint targetChannels_j)
				{
					EarthView::World::Graphic::RTShaderSystem::CFunction *psMain = (EarthView::World::Graphic::RTShaderSystem::CFunction*) psMain_j;
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr arg1 = *(EarthView::World::Graphic::RTShaderSystem::ParameterPtr*) arg1_j;
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr arg2 = *(EarthView::World::Graphic::RTShaderSystem::ParameterPtr*) arg2_j;
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr texel = *(EarthView::World::Graphic::RTShaderSystem::ParameterPtr*) texel_j;
					int samplerIndex = (int) samplerIndex_j;
					const EarthView::World::Graphic::CLayerBlendModeEx &blendMode = *(EarthView::World::Graphic::CLayerBlendModeEx*) blendMode_j;
					const int groupOrder = (int) groupOrder_j;
					int &internalCounter = *(int*) internalCounter_j;
					int targetChannels = (int) targetChannels_j;
					EarthView::World::Graphic::RTShaderSystem::CFFPTexturing *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CFFPTexturing*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCFFPTexturingProxy))
					{
						pObjectX->EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::addPSBlendInvocations(psMain, arg1, arg2, texel, samplerIndex, blendMode, groupOrder, internalCounter, targetChannels);
					}
					else
					{
						pObjectX->addPSBlendInvocations(psMain, arg1, arg2, texel, samplerIndex, blendMode, groupOrder, internalCounter, targetChannels);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_Ffptexturing_register_1addPSBlendInvocations_1CFunction_1ParameterPtr_1ParameterPtr_1ParameterPtr_1int_1CLayerBlendModeEx_1int_1int_1int(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCFFPTexturingProxy *pObjectX = (JCFFPTexturingProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_addPSBlendInvocations_CFunction_ParameterPtr_ParameterPtr_ParameterPtr_int_CLayerBlendModeEx_int_int_int_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"addPSBlendInvocations_CFunction_ParameterPtr_ParameterPtr_ParameterPtr_int_CLayerBlendModeEx_int_int_int_callback", "(JJJJIJIJI)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_Ffptexturing_addPSBlendInvocations_1CFunction_1ParameterPtr_1ParameterPtr_1ParameterPtr_1int_1CLayerBlendModeEx_1int_1int_1int_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong psMain_j, jlong arg1_j, jlong arg2_j, jlong texel_j, jint samplerIndex_j, jlong blendMode_j, jint groupOrder_j, jlong internalCounter_j, jint targetChannels_j)
				{
					EarthView::World::Graphic::RTShaderSystem::CFunction *psMain = (EarthView::World::Graphic::RTShaderSystem::CFunction*) psMain_j;
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr arg1 = *(EarthView::World::Graphic::RTShaderSystem::ParameterPtr*) arg1_j;
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr arg2 = *(EarthView::World::Graphic::RTShaderSystem::ParameterPtr*) arg2_j;
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr texel = *(EarthView::World::Graphic::RTShaderSystem::ParameterPtr*) texel_j;
					int samplerIndex = (int) samplerIndex_j;
					const EarthView::World::Graphic::CLayerBlendModeEx &blendMode = *(EarthView::World::Graphic::CLayerBlendModeEx*) blendMode_j;
					const int groupOrder = (int) groupOrder_j;
					int &internalCounter = *(int*) internalCounter_j;
					int targetChannels = (int) targetChannels_j;
					EarthView::World::Graphic::RTShaderSystem::CFFPTexturing *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CFFPTexturing*) pObjXXXX;
					pObjectX->EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::addPSBlendInvocations(psMain, arg1, arg2, texel, samplerIndex, blendMode, groupOrder, internalCounter, targetChannels);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_rtshadersystem_Ffptexturing_isProcessingNeeded_1CTextureUnitState(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong texUnitState_j)
				{
					EarthView::World::Graphic::CTextureUnitState *texUnitState = (EarthView::World::Graphic::CTextureUnitState*) texUnitState_j;
					EarthView::World::Graphic::RTShaderSystem::CFFPTexturing *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CFFPTexturing*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCFFPTexturingProxy))
					{
						bool __values1 = pObjectX->EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::isProcessingNeeded(texUnitState);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						bool __values1 = pObjectX->isProcessingNeeded(texUnitState);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_Ffptexturing_register_1isProcessingNeeded_1CTextureUnitState(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCFFPTexturingProxy *pObjectX = (JCFFPTexturingProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_isProcessingNeeded_CTextureUnitState_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"isProcessingNeeded_CTextureUnitState_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_rtshadersystem_Ffptexturing_isProcessingNeeded_1CTextureUnitState_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong texUnitState_j)
				{
					EarthView::World::Graphic::CTextureUnitState *texUnitState = (EarthView::World::Graphic::CTextureUnitState*) texUnitState_j;
					EarthView::World::Graphic::RTShaderSystem::CFFPTexturing *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CFFPTexturing*) pObjXXXX;
					bool __values1 = pObjectX->EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::isProcessingNeeded(texUnitState);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_Ffptexturing_register_1createCpuSubPrograms_1CProgramSet(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCFFPTexturingProxy *pObjectX = (JCFFPTexturingProxy*) pObjXXXX;
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
				class JCFFPTexturingFactoryProxy : public EarthView::World::Graphic::RTShaderSystem::CFFPTexturingFactory
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
					JCFFPTexturingFactoryProxy(EarthView::World::Core::CNameValuePairList *pList) : CFFPTexturingFactory(pList)
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
							return this->CFFPTexturingFactory::getType();
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
							return this->CFFPTexturingFactory::createInstance(compiler, prop, pass, translator);
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
							return this->CFFPTexturingFactory::writeInstance(ser, subRenderState, srcPass, dstPass);
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
							return this->CFFPTexturingFactory::createInstanceImpl();
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
							return this->CFFPTexturingFactory::createOrRetrieveInstance(translator);
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
							return this->CFFPTexturingFactory::destroyInstance(subRenderState);
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
							return this->CFFPTexturingFactory::destroyAllInstances();
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCFFPTexturingFactoryProxy);
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_rtshadersystem_Ffptexturingfactory_getType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Graphic::RTShaderSystem::CFFPTexturingFactory *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CFFPTexturingFactory*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCFFPTexturingFactoryProxy))
					{
						EVString __values1 = pObjectX->EarthView::World::Graphic::RTShaderSystem::CFFPTexturingFactory::getType();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_Ffptexturingfactory_register_1getType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCFFPTexturingFactoryProxy *pObjectX = (JCFFPTexturingFactoryProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_rtshadersystem_Ffptexturingfactory_getType_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Graphic::RTShaderSystem::CFFPTexturingFactory *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CFFPTexturingFactory*) pObjXXXX;
					EVString __values1 = pObjectX->EarthView::World::Graphic::RTShaderSystem::CFFPTexturingFactory::getType();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_Ffptexturingfactory_createInstance_1CScriptCompiler_1CPropertyAbstractNode_1CPass_1CSGScriptTranslator(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong compiler_j, jlong prop_j, jlong pass_j, jlong translator_j)
				{
					EarthView::World::Graphic::CScriptCompiler *compiler = (EarthView::World::Graphic::CScriptCompiler*) compiler_j;
					EarthView::World::Graphic::CPropertyAbstractNode *prop = (EarthView::World::Graphic::CPropertyAbstractNode*) prop_j;
					EarthView::World::Graphic::CPass *pass = (EarthView::World::Graphic::CPass*) pass_j;
					EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator *translator = (EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator*) translator_j;
					EarthView::World::Graphic::RTShaderSystem::CFFPTexturingFactory *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CFFPTexturingFactory*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCFFPTexturingFactoryProxy))
					{
						EarthView::World::Graphic::RTShaderSystem::CSubRenderState* __values1 = pObjectX->EarthView::World::Graphic::RTShaderSystem::CFFPTexturingFactory::createInstance(compiler, prop, pass, translator);
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_Ffptexturingfactory_register_1createInstance_1CScriptCompiler_1CPropertyAbstractNode_1CPass_1CSGScriptTranslator(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCFFPTexturingFactoryProxy *pObjectX = (JCFFPTexturingFactoryProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_Ffptexturingfactory_createInstance_1CScriptCompiler_1CPropertyAbstractNode_1CPass_1CSGScriptTranslator_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong compiler_j, jlong prop_j, jlong pass_j, jlong translator_j)
				{
					EarthView::World::Graphic::CScriptCompiler *compiler = (EarthView::World::Graphic::CScriptCompiler*) compiler_j;
					EarthView::World::Graphic::CPropertyAbstractNode *prop = (EarthView::World::Graphic::CPropertyAbstractNode*) prop_j;
					EarthView::World::Graphic::CPass *pass = (EarthView::World::Graphic::CPass*) pass_j;
					EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator *translator = (EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator*) translator_j;
					EarthView::World::Graphic::RTShaderSystem::CFFPTexturingFactory *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CFFPTexturingFactory*) pObjXXXX;
					EarthView::World::Graphic::RTShaderSystem::CSubRenderState* __values1 = pObjectX->EarthView::World::Graphic::RTShaderSystem::CFFPTexturingFactory::createInstance(compiler, prop, pass, translator);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_Ffptexturingfactory_writeInstance_1CMaterialSerializer_1CSubRenderState_1CPass_1CPass(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ser_j, jlong subRenderState_j, jlong srcPass_j, jlong dstPass_j)
				{
					EarthView::World::Graphic::CMaterialSerializer *ser = (EarthView::World::Graphic::CMaterialSerializer*) ser_j;
					EarthView::World::Graphic::RTShaderSystem::CSubRenderState *subRenderState = (EarthView::World::Graphic::RTShaderSystem::CSubRenderState*) subRenderState_j;
					EarthView::World::Graphic::CPass *srcPass = (EarthView::World::Graphic::CPass*) srcPass_j;
					EarthView::World::Graphic::CPass *dstPass = (EarthView::World::Graphic::CPass*) dstPass_j;
					EarthView::World::Graphic::RTShaderSystem::CFFPTexturingFactory *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CFFPTexturingFactory*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCFFPTexturingFactoryProxy))
					{
						pObjectX->EarthView::World::Graphic::RTShaderSystem::CFFPTexturingFactory::writeInstance(ser, subRenderState, srcPass, dstPass);
					}
					else
					{
						pObjectX->writeInstance(ser, subRenderState, srcPass, dstPass);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_Ffptexturingfactory_register_1writeInstance_1CMaterialSerializer_1CSubRenderState_1CPass_1CPass(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCFFPTexturingFactoryProxy *pObjectX = (JCFFPTexturingFactoryProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_Ffptexturingfactory_writeInstance_1CMaterialSerializer_1CSubRenderState_1CPass_1CPass_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ser_j, jlong subRenderState_j, jlong srcPass_j, jlong dstPass_j)
				{
					EarthView::World::Graphic::CMaterialSerializer *ser = (EarthView::World::Graphic::CMaterialSerializer*) ser_j;
					EarthView::World::Graphic::RTShaderSystem::CSubRenderState *subRenderState = (EarthView::World::Graphic::RTShaderSystem::CSubRenderState*) subRenderState_j;
					EarthView::World::Graphic::CPass *srcPass = (EarthView::World::Graphic::CPass*) srcPass_j;
					EarthView::World::Graphic::CPass *dstPass = (EarthView::World::Graphic::CPass*) dstPass_j;
					EarthView::World::Graphic::RTShaderSystem::CFFPTexturingFactory *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CFFPTexturingFactory*) pObjXXXX;
					pObjectX->EarthView::World::Graphic::RTShaderSystem::CFFPTexturingFactory::writeInstance(ser, subRenderState, srcPass, dstPass);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_Ffptexturingfactory_createInstanceImpl_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::CFFPTexturingFactory *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CFFPTexturingFactory*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCFFPTexturingFactoryProxy))
					{
						EarthView::World::Graphic::RTShaderSystem::CSubRenderState* __values1 = pObjectX->EarthView::World::Graphic::RTShaderSystem::CFFPTexturingFactory::createInstanceImpl();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_Ffptexturingfactory_register_1createInstanceImpl_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCFFPTexturingFactoryProxy *pObjectX = (JCFFPTexturingFactoryProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_Ffptexturingfactory_createInstanceImpl_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::CFFPTexturingFactory *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CFFPTexturingFactory*) pObjXXXX;
					EarthView::World::Graphic::RTShaderSystem::CSubRenderState* __values1 = pObjectX->EarthView::World::Graphic::RTShaderSystem::CFFPTexturingFactory::createInstanceImpl();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_Ffptexturingfactory_register_1createInstance_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCFFPTexturingFactoryProxy *pObjectX = (JCFFPTexturingFactoryProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_Ffptexturingfactory_register_1createInstance_1CScriptCompiler_1CPropertyAbstractNode_1CTextureUnitState_1CSGScriptTranslator(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCFFPTexturingFactoryProxy *pObjectX = (JCFFPTexturingFactoryProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_Ffptexturingfactory_register_1createOrRetrieveInstance_1CSGScriptTranslator(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCFFPTexturingFactoryProxy *pObjectX = (JCFFPTexturingFactoryProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_Ffptexturingfactory_register_1destroyInstance_1CSubRenderState(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCFFPTexturingFactoryProxy *pObjectX = (JCFFPTexturingFactoryProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_Ffptexturingfactory_register_1destroyAllInstances_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCFFPTexturingFactoryProxy *pObjectX = (JCFFPTexturingFactoryProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_Ffptexturingfactory_register_1writeInstance_1CMaterialSerializer_1CSubRenderState_1CTextureUnitState_1CTextureUnitState(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCFFPTexturingFactoryProxy *pObjectX = (JCFFPTexturingFactoryProxy*) pObjXXXX;
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
			}
		}
	}
}
