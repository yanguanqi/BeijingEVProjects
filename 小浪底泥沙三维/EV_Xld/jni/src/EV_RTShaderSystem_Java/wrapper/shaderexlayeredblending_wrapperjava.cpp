/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "rtshadersystem/shaderexlayeredblending.h"
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
				class JCLayeredBlendingProxy : public EarthView::World::Graphic::RTShaderSystem::CLayeredBlending
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
					JCLayeredBlendingProxy(EarthView::World::Core::CNameValuePairList *pList) : CLayeredBlending(pList)
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
							return this->CLayeredBlending::getType();
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
							return this->CLayeredBlending::copyFrom(rhs);
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
							return this->CLayeredBlending::resolveParameters(programSet);
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
							return this->CLayeredBlending::resolveDependencies(programSet);
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
							return this->CLayeredBlending::addPSBlendInvocations(psMain, arg1, arg2, texel, samplerIndex, blendMode, groupOrder, internalCounter, targetChannels);
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
							return this->CLayeredBlending::getExecutionOrder();
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
							return this->CLayeredBlending::updateGpuProgramsParams(rend, pass, source, pLightList);
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
							return this->CLayeredBlending::preAddToRenderState(renderState, srcPass, dstPass);
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
							return this->CLayeredBlending::addFunctionInvocations(programSet);
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
							return this->CLayeredBlending::addPSSampleTexelInvocation(textureUnitParams, psMain, texel, groupOrder, internalCounter);
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
							return this->CLayeredBlending::addPSArgumentInvocations(psMain, arg, texel, samplerIndex, blendSrc, colourValue, alphaValue, isAlphaArgument, groupOrder, internalCounter);
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
							return this->CLayeredBlending::isProcessingNeeded(texUnitState);
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
							return this->CLayeredBlending::createCpuSubPrograms(programSet);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCLayeredBlendingProxy);
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_graphic_rtshadersystem_LayeredBlending_00024BlendModeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						CLayeredBlending::LB_Invalid,
						CLayeredBlending::LB_FFPBlend,
						CLayeredBlending::LB_BlendNormal,
						CLayeredBlending::LB_BlendLighten,
						CLayeredBlending::LB_BlendDarken,
						CLayeredBlending::LB_BlendMultiply,
						CLayeredBlending::LB_BlendAverage,
						CLayeredBlending::LB_BlendAdd,
						CLayeredBlending::LB_BlendSubtract,
						CLayeredBlending::LB_BlendDifference,
						CLayeredBlending::LB_BlendNegation,
						CLayeredBlending::LB_BlendExclusion,
						CLayeredBlending::LB_BlendScreen,
						CLayeredBlending::LB_BlendOverlay,
						CLayeredBlending::LB_BlendSoftLight,
						CLayeredBlending::LB_BlendHardLight,
						CLayeredBlending::LB_BlendColorDodge,
						CLayeredBlending::LB_BlendColorBurn,
						CLayeredBlending::LB_BlendLinearDodge,
						CLayeredBlending::LB_BlendLinearBurn,
						CLayeredBlending::LB_BlendLinearLight,
						CLayeredBlending::LB_BlendVividLight,
						CLayeredBlending::LB_BlendPinLight,
						CLayeredBlending::LB_BlendHardMix,
						CLayeredBlending::LB_BlendReflect,
						CLayeredBlending::LB_BlendGlow,
						CLayeredBlending::LB_BlendPhoenix,
						CLayeredBlending::LB_BlendSaturation,
						CLayeredBlending::LB_BlendColor,
						CLayeredBlending::LB_BlendLuminosity,
						CLayeredBlending::LB_MaxBlendModes
					};
					jintArray array = __env->NewIntArray(31);
					__env->SetIntArrayRegion(array, 0, 31, enum_values);
					return array;
				}
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_graphic_rtshadersystem_LayeredBlending_00024SourceModifierHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						CLayeredBlending::SM_Invalid,
						CLayeredBlending::SM_None,
						CLayeredBlending::SM_Source1Modulate,
						CLayeredBlending::SM_Source2Modulate,
						CLayeredBlending::SM_Source1InvModulate,
						CLayeredBlending::SM_Source2InvModulate,
						CLayeredBlending::SM_MaxSourceModifiers
					};
					jintArray array = __env->NewIntArray(7);
					__env->SetIntArrayRegion(array, 0, 7, enum_values);
					return array;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_rtshadersystem_LayeredBlending_00024TextureBlend_get_1blendMode_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::CLayeredBlending::TextureBlend *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CLayeredBlending::TextureBlend*)pObjXXXX;
					jint __values1_j = (jint)(pObjectX->blendMode);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_LayeredBlending_00024TextureBlend_set_1blendMode_1BlendMode(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
				{
					EarthView::World::Graphic::RTShaderSystem::CLayeredBlending::TextureBlend *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CLayeredBlending::TextureBlend*)pObjXXXX;
					pObjectX->blendMode = (EarthView::World::Graphic::RTShaderSystem::CLayeredBlending::BlendMode)__values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_rtshadersystem_LayeredBlending_00024TextureBlend_get_1sourceModifier_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::CLayeredBlending::TextureBlend *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CLayeredBlending::TextureBlend*)pObjXXXX;
					jint __values1_j = (jint)(pObjectX->sourceModifier);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_LayeredBlending_00024TextureBlend_set_1sourceModifier_1SourceModifier(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
				{
					EarthView::World::Graphic::RTShaderSystem::CLayeredBlending::TextureBlend *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CLayeredBlending::TextureBlend*)pObjXXXX;
					pObjectX->sourceModifier = (EarthView::World::Graphic::RTShaderSystem::CLayeredBlending::SourceModifier)__values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_rtshadersystem_LayeredBlending_00024TextureBlend_get_1customNum_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::CLayeredBlending::TextureBlend *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CLayeredBlending::TextureBlend*)pObjXXXX;
					jint __values1_j = (jint)(pObjectX->customNum);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_LayeredBlending_00024TextureBlend_set_1customNum_1int(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
				{
					EarthView::World::Graphic::RTShaderSystem::CLayeredBlending::TextureBlend *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CLayeredBlending::TextureBlend*)pObjXXXX;
					pObjectX->customNum = (int)__values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_LayeredBlending_00024TextureBlend_get_1modControlParam_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::CLayeredBlending::TextureBlend *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CLayeredBlending::TextureBlend*)pObjXXXX;
					jlong __values1_j = (jlong) &(pObjectX->modControlParam);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_LayeredBlending_00024TextureBlend_set_1modControlParam_1ParameterPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Graphic::RTShaderSystem::CLayeredBlending::TextureBlend *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CLayeredBlending::TextureBlend*)pObjXXXX;
					pObjectX->modControlParam = *(EarthView::World::Graphic::RTShaderSystem::ParameterPtr*) __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_rtshadersystem_LayeredBlending_getType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Graphic::RTShaderSystem::CLayeredBlending *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CLayeredBlending*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCLayeredBlendingProxy))
					{
						EVString __values1 = pObjectX->EarthView::World::Graphic::RTShaderSystem::CLayeredBlending::getType();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_LayeredBlending_register_1getType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCLayeredBlendingProxy *pObjectX = (JCLayeredBlendingProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_rtshadersystem_LayeredBlending_getType_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Graphic::RTShaderSystem::CLayeredBlending *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CLayeredBlending*) pObjXXXX;
					EVString __values1 = pObjectX->EarthView::World::Graphic::RTShaderSystem::CLayeredBlending::getType();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_LayeredBlending_setBlendMode_1ev_1uint16_1BlendMode(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint index_j, jint mode_j)
				{
					ev_uint16 index = (ev_uint16) index_j;
					EarthView::World::Graphic::RTShaderSystem::CLayeredBlending::BlendMode mode = (EarthView::World::Graphic::RTShaderSystem::CLayeredBlending::BlendMode) mode_j;
					EarthView::World::Graphic::RTShaderSystem::CLayeredBlending *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CLayeredBlending*) pObjXXXX;
					pObjectX->setBlendMode(index, mode);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_rtshadersystem_LayeredBlending_getBlendMode_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint index_j)
				{
					ev_uint16 index = (ev_uint16) index_j;
					const 					EarthView::World::Graphic::RTShaderSystem::CLayeredBlending *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CLayeredBlending*) pObjXXXX;
					EarthView::World::Graphic::RTShaderSystem::CLayeredBlending::BlendMode __values1 = pObjectX->getBlendMode(index);
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_LayeredBlending_setSourceModifier_1ev_1uint16_1SourceModifier_1int(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint index_j, jint modType_j, jint customNum_j)
				{
					ev_uint16 index = (ev_uint16) index_j;
					EarthView::World::Graphic::RTShaderSystem::CLayeredBlending::SourceModifier modType = (EarthView::World::Graphic::RTShaderSystem::CLayeredBlending::SourceModifier) modType_j;
					int customNum = (int) customNum_j;
					EarthView::World::Graphic::RTShaderSystem::CLayeredBlending *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CLayeredBlending*) pObjXXXX;
					pObjectX->setSourceModifier(index, modType, customNum);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_rtshadersystem_LayeredBlending_getSourceModifier_1ev_1uint16_1SourceModifier_1int(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint index_j, jlong modType_j, jlong customNum_j)
				{
					ev_uint16 index = (ev_uint16) index_j;
					EarthView::World::Graphic::RTShaderSystem::CLayeredBlending::SourceModifier &modType = *(EarthView::World::Graphic::RTShaderSystem::CLayeredBlending::SourceModifier*) modType_j;
					int &customNum = *(int*) customNum_j;
					const 					EarthView::World::Graphic::RTShaderSystem::CLayeredBlending *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CLayeredBlending*) pObjXXXX;
					bool __values1 = pObjectX->getSourceModifier(index, modType, customNum);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_LayeredBlending_copyFrom_1CSubRenderState(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong rhs_j)
				{
					const EarthView::World::Graphic::RTShaderSystem::CSubRenderState &rhs = *(EarthView::World::Graphic::RTShaderSystem::CSubRenderState*) rhs_j;
					EarthView::World::Graphic::RTShaderSystem::CLayeredBlending *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CLayeredBlending*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCLayeredBlendingProxy))
					{
						pObjectX->EarthView::World::Graphic::RTShaderSystem::CLayeredBlending::copyFrom(rhs);
					}
					else
					{
						pObjectX->copyFrom(rhs);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_LayeredBlending_register_1copyFrom_1CSubRenderState(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCLayeredBlendingProxy *pObjectX = (JCLayeredBlendingProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_LayeredBlending_copyFrom_1CSubRenderState_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong rhs_j)
				{
					const EarthView::World::Graphic::RTShaderSystem::CSubRenderState &rhs = *(EarthView::World::Graphic::RTShaderSystem::CSubRenderState*) rhs_j;
					EarthView::World::Graphic::RTShaderSystem::CLayeredBlending *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CLayeredBlending*) pObjXXXX;
					pObjectX->EarthView::World::Graphic::RTShaderSystem::CLayeredBlending::copyFrom(rhs);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_rtshadersystem_LayeredBlending_get_1Type_1void(JNIEnv *__env, jclass __clazz)
				{
					EarthView::World::Core::ev_wstring __values1_ch = EarthView::World::Graphic::RTShaderSystem::CLayeredBlending::Type;
					jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_LayeredBlending_set_1Type_1EVString(JNIEnv *__env, jclass __clazz, jstring __values1_j)
				{
					const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
					EarthView::World::Graphic::RTShaderSystem::CLayeredBlending::Type = __values1_ch;
					__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_rtshadersystem_LayeredBlending_resolveParameters_1CProgramSet(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong programSet_j)
				{
					EarthView::World::Graphic::RTShaderSystem::CProgramSet *programSet = (EarthView::World::Graphic::RTShaderSystem::CProgramSet*) programSet_j;
					EarthView::World::Graphic::RTShaderSystem::CLayeredBlending *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CLayeredBlending*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCLayeredBlendingProxy))
					{
						bool __values1 = pObjectX->EarthView::World::Graphic::RTShaderSystem::CLayeredBlending::resolveParameters(programSet);
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_LayeredBlending_register_1resolveParameters_1CProgramSet(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCLayeredBlendingProxy *pObjectX = (JCLayeredBlendingProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_rtshadersystem_LayeredBlending_resolveParameters_1CProgramSet_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong programSet_j)
				{
					EarthView::World::Graphic::RTShaderSystem::CProgramSet *programSet = (EarthView::World::Graphic::RTShaderSystem::CProgramSet*) programSet_j;
					EarthView::World::Graphic::RTShaderSystem::CLayeredBlending *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CLayeredBlending*) pObjXXXX;
					bool __values1 = pObjectX->EarthView::World::Graphic::RTShaderSystem::CLayeredBlending::resolveParameters(programSet);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_rtshadersystem_LayeredBlending_resolveDependencies_1CProgramSet(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong programSet_j)
				{
					EarthView::World::Graphic::RTShaderSystem::CProgramSet *programSet = (EarthView::World::Graphic::RTShaderSystem::CProgramSet*) programSet_j;
					EarthView::World::Graphic::RTShaderSystem::CLayeredBlending *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CLayeredBlending*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCLayeredBlendingProxy))
					{
						bool __values1 = pObjectX->EarthView::World::Graphic::RTShaderSystem::CLayeredBlending::resolveDependencies(programSet);
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_LayeredBlending_register_1resolveDependencies_1CProgramSet(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCLayeredBlendingProxy *pObjectX = (JCLayeredBlendingProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_rtshadersystem_LayeredBlending_resolveDependencies_1CProgramSet_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong programSet_j)
				{
					EarthView::World::Graphic::RTShaderSystem::CProgramSet *programSet = (EarthView::World::Graphic::RTShaderSystem::CProgramSet*) programSet_j;
					EarthView::World::Graphic::RTShaderSystem::CLayeredBlending *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CLayeredBlending*) pObjXXXX;
					bool __values1 = pObjectX->EarthView::World::Graphic::RTShaderSystem::CLayeredBlending::resolveDependencies(programSet);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_LayeredBlending_addPSBlendInvocations_1CFunction_1ParameterPtr_1ParameterPtr_1ParameterPtr_1int_1CLayerBlendModeEx_1int_1int_1int(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong psMain_j, jlong arg1_j, jlong arg2_j, jlong texel_j, jint samplerIndex_j, jlong blendMode_j, jint groupOrder_j, jlong internalCounter_j, jint targetChannels_j)
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
					EarthView::World::Graphic::RTShaderSystem::CLayeredBlending *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CLayeredBlending*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCLayeredBlendingProxy))
					{
						pObjectX->EarthView::World::Graphic::RTShaderSystem::CLayeredBlending::addPSBlendInvocations(psMain, arg1, arg2, texel, samplerIndex, blendMode, groupOrder, internalCounter, targetChannels);
					}
					else
					{
						pObjectX->addPSBlendInvocations(psMain, arg1, arg2, texel, samplerIndex, blendMode, groupOrder, internalCounter, targetChannels);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_LayeredBlending_register_1addPSBlendInvocations_1CFunction_1ParameterPtr_1ParameterPtr_1ParameterPtr_1int_1CLayerBlendModeEx_1int_1int_1int(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCLayeredBlendingProxy *pObjectX = (JCLayeredBlendingProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_LayeredBlending_addPSBlendInvocations_1CFunction_1ParameterPtr_1ParameterPtr_1ParameterPtr_1int_1CLayerBlendModeEx_1int_1int_1int_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong psMain_j, jlong arg1_j, jlong arg2_j, jlong texel_j, jint samplerIndex_j, jlong blendMode_j, jint groupOrder_j, jlong internalCounter_j, jint targetChannels_j)
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
					EarthView::World::Graphic::RTShaderSystem::CLayeredBlending *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CLayeredBlending*) pObjXXXX;
					pObjectX->EarthView::World::Graphic::RTShaderSystem::CLayeredBlending::addPSBlendInvocations(psMain, arg1, arg2, texel, samplerIndex, blendMode, groupOrder, internalCounter, targetChannels);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_LayeredBlending_register_1addPSSampleTexelInvocation_1TextureUnitParams_1CFunction_1ParameterPtr_1int_1int(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCLayeredBlendingProxy *pObjectX = (JCLayeredBlendingProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_LayeredBlending_register_1addPSArgumentInvocations_1CFunction_1ParameterPtr_1ParameterPtr_1int_1LayerBlendSource_1CColourValue_1Real_1bool_1int_1int(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCLayeredBlendingProxy *pObjectX = (JCLayeredBlendingProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_LayeredBlending_register_1isProcessingNeeded_1CTextureUnitState(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCLayeredBlendingProxy *pObjectX = (JCLayeredBlendingProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_LayeredBlending_register_1getExecutionOrder_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCLayeredBlendingProxy *pObjectX = (JCLayeredBlendingProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_LayeredBlending_register_1createCpuSubPrograms_1CProgramSet(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCLayeredBlendingProxy *pObjectX = (JCLayeredBlendingProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_LayeredBlending_register_1updateGpuProgramsParams_1CRenderable_1CPass_1CAutoParamDataSource_1LightList(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCLayeredBlendingProxy *pObjectX = (JCLayeredBlendingProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_LayeredBlending_register_1preAddToRenderState_1CRenderState_1CPass_1CPass(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCLayeredBlendingProxy *pObjectX = (JCLayeredBlendingProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_LayeredBlending_register_1addFunctionInvocations_1CProgramSet(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCLayeredBlendingProxy *pObjectX = (JCLayeredBlendingProxy*) pObjXXXX;
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
			}
		}
	}
}
