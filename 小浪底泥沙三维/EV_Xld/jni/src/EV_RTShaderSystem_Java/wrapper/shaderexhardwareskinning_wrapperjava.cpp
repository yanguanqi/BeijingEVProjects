/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "rtshadersystem/shaderexhardwareskinning.h"
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
				class JCHardwareSkinningProxy : public EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning
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
					JCHardwareSkinningProxy(EarthView::World::Core::CNameValuePairList *pList) : CHardwareSkinning(pList)
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
							return this->CHardwareSkinning::getType();
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
							return this->CHardwareSkinning::getExecutionOrder();
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
							return this->CHardwareSkinning::copyFrom(rhs);
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
							return this->CHardwareSkinning::preAddToRenderState(renderState, srcPass, dstPass);
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
							return this->CHardwareSkinning::resolveParameters(programSet);
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
							return this->CHardwareSkinning::resolveDependencies(programSet);
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
							return this->CHardwareSkinning::addFunctionInvocations(programSet);
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
							return this->CHardwareSkinning::createCpuSubPrograms(programSet);
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
							return this->CHardwareSkinning::updateGpuProgramsParams(rend, pass, source, pLightList);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCHardwareSkinningProxy);
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_rtshadersystem_HardwareSkinning_00024SkinningData_get_1isValid_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning::SkinningData *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning::SkinningData*)pObjXXXX;
					jboolean __values1_j = (jboolean)(pObjectX->isValid);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_HardwareSkinning_00024SkinningData_set_1isValid_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
				{
					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning::SkinningData *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning::SkinningData*)pObjXXXX;
					pObjectX->isValid = (bool)__values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_rtshadersystem_HardwareSkinning_00024SkinningData_get_1maxBoneCount_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning::SkinningData *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning::SkinningData*)pObjXXXX;
					jint __values1_j = (jint) (pObjectX->maxBoneCount);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_HardwareSkinning_00024SkinningData_set_1maxBoneCount_1ev_1uint16(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
				{
					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning::SkinningData *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning::SkinningData*)pObjXXXX;
					pObjectX->maxBoneCount = (ev_uint16)__values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_rtshadersystem_HardwareSkinning_00024SkinningData_get_1maxWeightCount_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning::SkinningData *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning::SkinningData*)pObjXXXX;
					jint __values1_j = (jint) (pObjectX->maxWeightCount);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_HardwareSkinning_00024SkinningData_set_1maxWeightCount_1ev_1uint16(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
				{
					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning::SkinningData *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning::SkinningData*)pObjXXXX;
					pObjectX->maxWeightCount = (ev_uint16)__values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_rtshadersystem_HardwareSkinning_00024SkinningData_get_1skinningType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning::SkinningData *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning::SkinningData*)pObjXXXX;
					jint __values1_j = (jint)(pObjectX->skinningType);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_HardwareSkinning_00024SkinningData_set_1skinningType_1SkinningType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
				{
					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning::SkinningData *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning::SkinningData*)pObjXXXX;
					pObjectX->skinningType = (EarthView::World::Graphic::RTShaderSystem::SkinningType)__values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_rtshadersystem_HardwareSkinning_00024SkinningData_get_1correctAntipodalityHandling_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning::SkinningData *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning::SkinningData*)pObjXXXX;
					jboolean __values1_j = (jboolean)(pObjectX->correctAntipodalityHandling);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_HardwareSkinning_00024SkinningData_set_1correctAntipodalityHandling_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
				{
					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning::SkinningData *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning::SkinningData*)pObjXXXX;
					pObjectX->correctAntipodalityHandling = (bool)__values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_rtshadersystem_HardwareSkinning_00024SkinningData_get_1scalingShearingSupport_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning::SkinningData *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning::SkinningData*)pObjXXXX;
					jboolean __values1_j = (jboolean)(pObjectX->scalingShearingSupport);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_HardwareSkinning_00024SkinningData_set_1scalingShearingSupport_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
				{
					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning::SkinningData *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning::SkinningData*)pObjXXXX;
					pObjectX->scalingShearingSupport = (bool)__values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_rtshadersystem_HardwareSkinning_getType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCHardwareSkinningProxy))
					{
						EVString __values1 = pObjectX->EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning::getType();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_HardwareSkinning_register_1getType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCHardwareSkinningProxy *pObjectX = (JCHardwareSkinningProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_rtshadersystem_HardwareSkinning_getType_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning*) pObjXXXX;
					EVString __values1 = pObjectX->EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning::getType();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_rtshadersystem_HardwareSkinning_getExecutionOrder_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCHardwareSkinningProxy))
					{
						int __values1 = pObjectX->EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning::getExecutionOrder();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_HardwareSkinning_register_1getExecutionOrder_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCHardwareSkinningProxy *pObjectX = (JCHardwareSkinningProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_rtshadersystem_HardwareSkinning_getExecutionOrder_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning*) pObjXXXX;
					int __values1 = pObjectX->EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning::getExecutionOrder();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_HardwareSkinning_copyFrom_1CSubRenderState(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong rhs_j)
				{
					const EarthView::World::Graphic::RTShaderSystem::CSubRenderState &rhs = *(EarthView::World::Graphic::RTShaderSystem::CSubRenderState*) rhs_j;
					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCHardwareSkinningProxy))
					{
						pObjectX->EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning::copyFrom(rhs);
					}
					else
					{
						pObjectX->copyFrom(rhs);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_HardwareSkinning_register_1copyFrom_1CSubRenderState(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCHardwareSkinningProxy *pObjectX = (JCHardwareSkinningProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_HardwareSkinning_copyFrom_1CSubRenderState_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong rhs_j)
				{
					const EarthView::World::Graphic::RTShaderSystem::CSubRenderState &rhs = *(EarthView::World::Graphic::RTShaderSystem::CSubRenderState*) rhs_j;
					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning*) pObjXXXX;
					pObjectX->EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning::copyFrom(rhs);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_HardwareSkinning_setHardwareSkinningParam_1ev_1uint16_1ev_1uint16_1SkinningType_1bool_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint boneCount_j, jint weightCount_j, jint skinningType_j, jboolean correctAntipodalityHandling_j, jboolean scalingShearingSupport_j)
				{
					ev_uint16 boneCount = (ev_uint16) boneCount_j;
					ev_uint16 weightCount = (ev_uint16) weightCount_j;
					EarthView::World::Graphic::RTShaderSystem::SkinningType skinningType = (EarthView::World::Graphic::RTShaderSystem::SkinningType) skinningType_j;
					bool correctAntipodalityHandling = (bool) correctAntipodalityHandling_j;
					bool scalingShearingSupport = (bool) scalingShearingSupport_j;
					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning*) pObjXXXX;
					pObjectX->setHardwareSkinningParam(boneCount, weightCount, skinningType, correctAntipodalityHandling, scalingShearingSupport);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_HardwareSkinning_setHardwareSkinningParam_1ev_1uint16_1ev_1uint16_1SkinningType_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint boneCount_j, jint weightCount_j, jint skinningType_j, jboolean correctAntipodalityHandling_j)
				{
					ev_uint16 boneCount = (ev_uint16) boneCount_j;
					ev_uint16 weightCount = (ev_uint16) weightCount_j;
					EarthView::World::Graphic::RTShaderSystem::SkinningType skinningType = (EarthView::World::Graphic::RTShaderSystem::SkinningType) skinningType_j;
					bool correctAntipodalityHandling = (bool) correctAntipodalityHandling_j;
					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning*) pObjXXXX;
					pObjectX->setHardwareSkinningParam(boneCount, weightCount, skinningType, correctAntipodalityHandling);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_HardwareSkinning_setHardwareSkinningParam_1ev_1uint16_1ev_1uint16_1SkinningType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint boneCount_j, jint weightCount_j, jint skinningType_j)
				{
					ev_uint16 boneCount = (ev_uint16) boneCount_j;
					ev_uint16 weightCount = (ev_uint16) weightCount_j;
					EarthView::World::Graphic::RTShaderSystem::SkinningType skinningType = (EarthView::World::Graphic::RTShaderSystem::SkinningType) skinningType_j;
					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning*) pObjXXXX;
					pObjectX->setHardwareSkinningParam(boneCount, weightCount, skinningType);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_HardwareSkinning_setHardwareSkinningParam_1ev_1uint16_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint boneCount_j, jint weightCount_j)
				{
					ev_uint16 boneCount = (ev_uint16) boneCount_j;
					ev_uint16 weightCount = (ev_uint16) weightCount_j;
					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning*) pObjXXXX;
					pObjectX->setHardwareSkinningParam(boneCount, weightCount);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_rtshadersystem_HardwareSkinning_getBoneCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning*) pObjXXXX;
					ev_uint16 __values1 = pObjectX->getBoneCount();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_rtshadersystem_HardwareSkinning_getWeightCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning*) pObjXXXX;
					ev_uint16 __values1 = pObjectX->getWeightCount();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_rtshadersystem_HardwareSkinning_getSkinningType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning*) pObjXXXX;
					EarthView::World::Graphic::RTShaderSystem::SkinningType __values1 = pObjectX->getSkinningType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_rtshadersystem_HardwareSkinning_hasCorrectAntipodalityHandling_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning*) pObjXXXX;
					bool __values1 = pObjectX->hasCorrectAntipodalityHandling();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_rtshadersystem_HardwareSkinning_hasScalingShearingSupport_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning*) pObjXXXX;
					bool __values1 = pObjectX->hasScalingShearingSupport();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_rtshadersystem_HardwareSkinning_preAddToRenderState_1CRenderState_1CPass_1CPass(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong renderState_j, jlong srcPass_j, jlong dstPass_j)
				{
					const EarthView::World::Graphic::RTShaderSystem::CRenderState *renderState = (const EarthView::World::Graphic::RTShaderSystem::CRenderState*) renderState_j;
					EarthView::World::Graphic::CPass *srcPass = (EarthView::World::Graphic::CPass*) srcPass_j;
					EarthView::World::Graphic::CPass *dstPass = (EarthView::World::Graphic::CPass*) dstPass_j;
					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCHardwareSkinningProxy))
					{
						bool __values1 = pObjectX->EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning::preAddToRenderState(renderState, srcPass, dstPass);
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_HardwareSkinning_register_1preAddToRenderState_1CRenderState_1CPass_1CPass(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCHardwareSkinningProxy *pObjectX = (JCHardwareSkinningProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_rtshadersystem_HardwareSkinning_preAddToRenderState_1CRenderState_1CPass_1CPass_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong renderState_j, jlong srcPass_j, jlong dstPass_j)
				{
					const EarthView::World::Graphic::RTShaderSystem::CRenderState *renderState = (const EarthView::World::Graphic::RTShaderSystem::CRenderState*) renderState_j;
					EarthView::World::Graphic::CPass *srcPass = (EarthView::World::Graphic::CPass*) srcPass_j;
					EarthView::World::Graphic::CPass *dstPass = (EarthView::World::Graphic::CPass*) dstPass_j;
					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning*) pObjXXXX;
					bool __values1 = pObjectX->EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning::preAddToRenderState(renderState, srcPass, dstPass);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_HardwareSkinning__1setCreator_1CHardwareSkinningFactory(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pCreator_j)
				{
					const EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory *pCreator = (const EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory*) pCreator_j;
					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning*) pObjXXXX;
					pObjectX->_setCreator(pCreator);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_rtshadersystem_HardwareSkinning_get_1Type_1void(JNIEnv *__env, jclass __clazz)
				{
					EarthView::World::Core::ev_wstring __values1_ch = EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning::Type;
					jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_HardwareSkinning_set_1Type_1EVString(JNIEnv *__env, jclass __clazz, jstring __values1_j)
				{
					const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning::Type = __values1_ch;
					__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_rtshadersystem_HardwareSkinning_resolveParameters_1CProgramSet(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong programSet_j)
				{
					EarthView::World::Graphic::RTShaderSystem::CProgramSet *programSet = (EarthView::World::Graphic::RTShaderSystem::CProgramSet*) programSet_j;
					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCHardwareSkinningProxy))
					{
						bool __values1 = pObjectX->EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning::resolveParameters(programSet);
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_HardwareSkinning_register_1resolveParameters_1CProgramSet(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCHardwareSkinningProxy *pObjectX = (JCHardwareSkinningProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_rtshadersystem_HardwareSkinning_resolveParameters_1CProgramSet_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong programSet_j)
				{
					EarthView::World::Graphic::RTShaderSystem::CProgramSet *programSet = (EarthView::World::Graphic::RTShaderSystem::CProgramSet*) programSet_j;
					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning*) pObjXXXX;
					bool __values1 = pObjectX->EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning::resolveParameters(programSet);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_rtshadersystem_HardwareSkinning_resolveDependencies_1CProgramSet(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong programSet_j)
				{
					EarthView::World::Graphic::RTShaderSystem::CProgramSet *programSet = (EarthView::World::Graphic::RTShaderSystem::CProgramSet*) programSet_j;
					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCHardwareSkinningProxy))
					{
						bool __values1 = pObjectX->EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning::resolveDependencies(programSet);
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_HardwareSkinning_register_1resolveDependencies_1CProgramSet(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCHardwareSkinningProxy *pObjectX = (JCHardwareSkinningProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_rtshadersystem_HardwareSkinning_resolveDependencies_1CProgramSet_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong programSet_j)
				{
					EarthView::World::Graphic::RTShaderSystem::CProgramSet *programSet = (EarthView::World::Graphic::RTShaderSystem::CProgramSet*) programSet_j;
					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning*) pObjXXXX;
					bool __values1 = pObjectX->EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning::resolveDependencies(programSet);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_rtshadersystem_HardwareSkinning_addFunctionInvocations_1CProgramSet(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong programSet_j)
				{
					EarthView::World::Graphic::RTShaderSystem::CProgramSet *programSet = (EarthView::World::Graphic::RTShaderSystem::CProgramSet*) programSet_j;
					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCHardwareSkinningProxy))
					{
						bool __values1 = pObjectX->EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning::addFunctionInvocations(programSet);
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_HardwareSkinning_register_1addFunctionInvocations_1CProgramSet(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCHardwareSkinningProxy *pObjectX = (JCHardwareSkinningProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_rtshadersystem_HardwareSkinning_addFunctionInvocations_1CProgramSet_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong programSet_j)
				{
					EarthView::World::Graphic::RTShaderSystem::CProgramSet *programSet = (EarthView::World::Graphic::RTShaderSystem::CProgramSet*) programSet_j;
					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning*) pObjXXXX;
					bool __values1 = pObjectX->EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning::addFunctionInvocations(programSet);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_HardwareSkinning_register_1createCpuSubPrograms_1CProgramSet(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCHardwareSkinningProxy *pObjectX = (JCHardwareSkinningProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_HardwareSkinning_register_1updateGpuProgramsParams_1CRenderable_1CPass_1CAutoParamDataSource_1LightList(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCHardwareSkinningProxy *pObjectX = (JCHardwareSkinningProxy*) pObjXXXX;
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
				class JCHardwareSkinningFactoryProxy : public EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory
				{
				 private:
					EarthView::World::Core::ev_string m_setCustomShadowCasterMaterials_SkinningType_CMaterialPtr_CMaterialPtr_CMaterialPtr_CMaterialPtr_callback;
					EarthView::World::Core::ev_string m_setCustomShadowReceiverMaterials_SkinningType_CMaterialPtr_CMaterialPtr_CMaterialPtr_CMaterialPtr_callback;
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
					JCHardwareSkinningFactoryProxy(EarthView::World::Core::CNameValuePairList *pList) : CHardwareSkinningFactory(pList)
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
					void register_setCustomShadowCasterMaterials_SkinningType_CMaterialPtr_CMaterialPtr_CMaterialPtr_CMaterialPtr_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setCustomShadowCasterMaterials_SkinningType_CMaterialPtr_CMaterialPtr_CMaterialPtr_CMaterialPtr_callback = __method;
					}
					void register_setCustomShadowReceiverMaterials_SkinningType_CMaterialPtr_CMaterialPtr_CMaterialPtr_CMaterialPtr_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setCustomShadowReceiverMaterials_SkinningType_CMaterialPtr_CMaterialPtr_CMaterialPtr_CMaterialPtr_callback = __method;
					}
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
							return this->CHardwareSkinningFactory::getType();
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
							return this->CHardwareSkinningFactory::createInstance(compiler, prop, pass, translator);
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
							return this->CHardwareSkinningFactory::writeInstance(ser, subRenderState, srcPass, dstPass);
						}
					}
					virtual void setCustomShadowCasterMaterials(const EarthView::World::Graphic::RTShaderSystem::SkinningType skinningType, const EarthView::World::Graphic::CMaterialPtr& caster1Weight, const EarthView::World::Graphic::CMaterialPtr& caster2Weight, const EarthView::World::Graphic::CMaterialPtr& caster3Weight, const EarthView::World::Graphic::CMaterialPtr& caster4Weight)
					{
						if (this->_gRef != NULL && this->m_setCustomShadowCasterMaterials_SkinningType_CMaterialPtr_CMaterialPtr_CMaterialPtr_CMaterialPtr_callback != "" && this->isCustomExtend())
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
							jint skinningType_j = (jint) skinningType;
							jlong caster1Weight_j = (jlong) &caster1Weight;
							jlong caster2Weight_j = (jlong) &caster2Weight;
							jlong caster3Weight_j = (jlong) &caster3Weight;
							jlong caster4Weight_j = (jlong) &caster4Weight;
							jmethodID __method = __gr->getMethod("setCustomShadowCasterMaterials_SkinningType_CMaterialPtr_CMaterialPtr_CMaterialPtr_CMaterialPtr_callback");
							__env->CallVoidMethod(__obj, __method , skinningType_j, caster1Weight_j, caster2Weight_j, caster3Weight_j, caster4Weight_j);
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
							return this->CHardwareSkinningFactory::setCustomShadowCasterMaterials(skinningType, caster1Weight, caster2Weight, caster3Weight, caster4Weight);
						}
					}
					virtual void setCustomShadowReceiverMaterials(const EarthView::World::Graphic::RTShaderSystem::SkinningType skinningType, const EarthView::World::Graphic::CMaterialPtr& receiver1Weight, const EarthView::World::Graphic::CMaterialPtr& receiver2Weight, const EarthView::World::Graphic::CMaterialPtr& receiver3Weight, const EarthView::World::Graphic::CMaterialPtr& receiver4Weight)
					{
						if (this->_gRef != NULL && this->m_setCustomShadowReceiverMaterials_SkinningType_CMaterialPtr_CMaterialPtr_CMaterialPtr_CMaterialPtr_callback != "" && this->isCustomExtend())
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
							jint skinningType_j = (jint) skinningType;
							jlong receiver1Weight_j = (jlong) &receiver1Weight;
							jlong receiver2Weight_j = (jlong) &receiver2Weight;
							jlong receiver3Weight_j = (jlong) &receiver3Weight;
							jlong receiver4Weight_j = (jlong) &receiver4Weight;
							jmethodID __method = __gr->getMethod("setCustomShadowReceiverMaterials_SkinningType_CMaterialPtr_CMaterialPtr_CMaterialPtr_CMaterialPtr_callback");
							__env->CallVoidMethod(__obj, __method , skinningType_j, receiver1Weight_j, receiver2Weight_j, receiver3Weight_j, receiver4Weight_j);
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
							return this->CHardwareSkinningFactory::setCustomShadowReceiverMaterials(skinningType, receiver1Weight, receiver2Weight, receiver3Weight, receiver4Weight);
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
							return this->CHardwareSkinningFactory::createInstanceImpl();
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
							return this->CHardwareSkinningFactory::createOrRetrieveInstance(translator);
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
							return this->CHardwareSkinningFactory::destroyInstance(subRenderState);
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
							return this->CHardwareSkinningFactory::destroyAllInstances();
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCHardwareSkinningFactoryProxy);
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_rtshadersystem_HardwareSkinningFactory_getType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCHardwareSkinningFactoryProxy))
					{
						EVString __values1 = pObjectX->EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory::getType();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_HardwareSkinningFactory_register_1getType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCHardwareSkinningFactoryProxy *pObjectX = (JCHardwareSkinningFactoryProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_rtshadersystem_HardwareSkinningFactory_getType_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory*) pObjXXXX;
					EVString __values1 = pObjectX->EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory::getType();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_HardwareSkinningFactory_createInstance_1CScriptCompiler_1CPropertyAbstractNode_1CPass_1CSGScriptTranslator(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong compiler_j, jlong prop_j, jlong pass_j, jlong translator_j)
				{
					EarthView::World::Graphic::CScriptCompiler *compiler = (EarthView::World::Graphic::CScriptCompiler*) compiler_j;
					EarthView::World::Graphic::CPropertyAbstractNode *prop = (EarthView::World::Graphic::CPropertyAbstractNode*) prop_j;
					EarthView::World::Graphic::CPass *pass = (EarthView::World::Graphic::CPass*) pass_j;
					EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator *translator = (EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator*) translator_j;
					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCHardwareSkinningFactoryProxy))
					{
						EarthView::World::Graphic::RTShaderSystem::CSubRenderState* __values1 = pObjectX->EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory::createInstance(compiler, prop, pass, translator);
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_HardwareSkinningFactory_register_1createInstance_1CScriptCompiler_1CPropertyAbstractNode_1CPass_1CSGScriptTranslator(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCHardwareSkinningFactoryProxy *pObjectX = (JCHardwareSkinningFactoryProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_HardwareSkinningFactory_createInstance_1CScriptCompiler_1CPropertyAbstractNode_1CPass_1CSGScriptTranslator_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong compiler_j, jlong prop_j, jlong pass_j, jlong translator_j)
				{
					EarthView::World::Graphic::CScriptCompiler *compiler = (EarthView::World::Graphic::CScriptCompiler*) compiler_j;
					EarthView::World::Graphic::CPropertyAbstractNode *prop = (EarthView::World::Graphic::CPropertyAbstractNode*) prop_j;
					EarthView::World::Graphic::CPass *pass = (EarthView::World::Graphic::CPass*) pass_j;
					EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator *translator = (EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator*) translator_j;
					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory*) pObjXXXX;
					EarthView::World::Graphic::RTShaderSystem::CSubRenderState* __values1 = pObjectX->EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory::createInstance(compiler, prop, pass, translator);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_HardwareSkinningFactory_writeInstance_1CMaterialSerializer_1CSubRenderState_1CPass_1CPass(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ser_j, jlong subRenderState_j, jlong srcPass_j, jlong dstPass_j)
				{
					EarthView::World::Graphic::CMaterialSerializer *ser = (EarthView::World::Graphic::CMaterialSerializer*) ser_j;
					EarthView::World::Graphic::RTShaderSystem::CSubRenderState *subRenderState = (EarthView::World::Graphic::RTShaderSystem::CSubRenderState*) subRenderState_j;
					EarthView::World::Graphic::CPass *srcPass = (EarthView::World::Graphic::CPass*) srcPass_j;
					EarthView::World::Graphic::CPass *dstPass = (EarthView::World::Graphic::CPass*) dstPass_j;
					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCHardwareSkinningFactoryProxy))
					{
						pObjectX->EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory::writeInstance(ser, subRenderState, srcPass, dstPass);
					}
					else
					{
						pObjectX->writeInstance(ser, subRenderState, srcPass, dstPass);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_HardwareSkinningFactory_register_1writeInstance_1CMaterialSerializer_1CSubRenderState_1CPass_1CPass(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCHardwareSkinningFactoryProxy *pObjectX = (JCHardwareSkinningFactoryProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_HardwareSkinningFactory_writeInstance_1CMaterialSerializer_1CSubRenderState_1CPass_1CPass_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ser_j, jlong subRenderState_j, jlong srcPass_j, jlong dstPass_j)
				{
					EarthView::World::Graphic::CMaterialSerializer *ser = (EarthView::World::Graphic::CMaterialSerializer*) ser_j;
					EarthView::World::Graphic::RTShaderSystem::CSubRenderState *subRenderState = (EarthView::World::Graphic::RTShaderSystem::CSubRenderState*) subRenderState_j;
					EarthView::World::Graphic::CPass *srcPass = (EarthView::World::Graphic::CPass*) srcPass_j;
					EarthView::World::Graphic::CPass *dstPass = (EarthView::World::Graphic::CPass*) dstPass_j;
					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory*) pObjXXXX;
					pObjectX->EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory::writeInstance(ser, subRenderState, srcPass, dstPass);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_HardwareSkinningFactory_setCustomShadowCasterMaterials_1SkinningType_1CMaterialPtr_1CMaterialPtr_1CMaterialPtr_1CMaterialPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint skinningType_j, jlong caster1Weight_j, jlong caster2Weight_j, jlong caster3Weight_j, jlong caster4Weight_j)
				{
					const EarthView::World::Graphic::RTShaderSystem::SkinningType skinningType = (EarthView::World::Graphic::RTShaderSystem::SkinningType) skinningType_j;
					const EarthView::World::Graphic::CMaterialPtr &caster1Weight = *(EarthView::World::Graphic::CMaterialPtr*) caster1Weight_j;
					const EarthView::World::Graphic::CMaterialPtr &caster2Weight = *(EarthView::World::Graphic::CMaterialPtr*) caster2Weight_j;
					const EarthView::World::Graphic::CMaterialPtr &caster3Weight = *(EarthView::World::Graphic::CMaterialPtr*) caster3Weight_j;
					const EarthView::World::Graphic::CMaterialPtr &caster4Weight = *(EarthView::World::Graphic::CMaterialPtr*) caster4Weight_j;
					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCHardwareSkinningFactoryProxy))
					{
						pObjectX->EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory::setCustomShadowCasterMaterials(skinningType, caster1Weight, caster2Weight, caster3Weight, caster4Weight);
					}
					else
					{
						pObjectX->setCustomShadowCasterMaterials(skinningType, caster1Weight, caster2Weight, caster3Weight, caster4Weight);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_HardwareSkinningFactory_register_1setCustomShadowCasterMaterials_1SkinningType_1CMaterialPtr_1CMaterialPtr_1CMaterialPtr_1CMaterialPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCHardwareSkinningFactoryProxy *pObjectX = (JCHardwareSkinningFactoryProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setCustomShadowCasterMaterials_SkinningType_CMaterialPtr_CMaterialPtr_CMaterialPtr_CMaterialPtr_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setCustomShadowCasterMaterials_SkinningType_CMaterialPtr_CMaterialPtr_CMaterialPtr_CMaterialPtr_callback", "(IJJJJ)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_HardwareSkinningFactory_setCustomShadowCasterMaterials_1SkinningType_1CMaterialPtr_1CMaterialPtr_1CMaterialPtr_1CMaterialPtr_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint skinningType_j, jlong caster1Weight_j, jlong caster2Weight_j, jlong caster3Weight_j, jlong caster4Weight_j)
				{
					const EarthView::World::Graphic::RTShaderSystem::SkinningType skinningType = (EarthView::World::Graphic::RTShaderSystem::SkinningType) skinningType_j;
					const EarthView::World::Graphic::CMaterialPtr &caster1Weight = *(EarthView::World::Graphic::CMaterialPtr*) caster1Weight_j;
					const EarthView::World::Graphic::CMaterialPtr &caster2Weight = *(EarthView::World::Graphic::CMaterialPtr*) caster2Weight_j;
					const EarthView::World::Graphic::CMaterialPtr &caster3Weight = *(EarthView::World::Graphic::CMaterialPtr*) caster3Weight_j;
					const EarthView::World::Graphic::CMaterialPtr &caster4Weight = *(EarthView::World::Graphic::CMaterialPtr*) caster4Weight_j;
					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory*) pObjXXXX;
					pObjectX->EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory::setCustomShadowCasterMaterials(skinningType, caster1Weight, caster2Weight, caster3Weight, caster4Weight);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_HardwareSkinningFactory_setCustomShadowReceiverMaterials_1SkinningType_1CMaterialPtr_1CMaterialPtr_1CMaterialPtr_1CMaterialPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint skinningType_j, jlong receiver1Weight_j, jlong receiver2Weight_j, jlong receiver3Weight_j, jlong receiver4Weight_j)
				{
					const EarthView::World::Graphic::RTShaderSystem::SkinningType skinningType = (EarthView::World::Graphic::RTShaderSystem::SkinningType) skinningType_j;
					const EarthView::World::Graphic::CMaterialPtr &receiver1Weight = *(EarthView::World::Graphic::CMaterialPtr*) receiver1Weight_j;
					const EarthView::World::Graphic::CMaterialPtr &receiver2Weight = *(EarthView::World::Graphic::CMaterialPtr*) receiver2Weight_j;
					const EarthView::World::Graphic::CMaterialPtr &receiver3Weight = *(EarthView::World::Graphic::CMaterialPtr*) receiver3Weight_j;
					const EarthView::World::Graphic::CMaterialPtr &receiver4Weight = *(EarthView::World::Graphic::CMaterialPtr*) receiver4Weight_j;
					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCHardwareSkinningFactoryProxy))
					{
						pObjectX->EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory::setCustomShadowReceiverMaterials(skinningType, receiver1Weight, receiver2Weight, receiver3Weight, receiver4Weight);
					}
					else
					{
						pObjectX->setCustomShadowReceiverMaterials(skinningType, receiver1Weight, receiver2Weight, receiver3Weight, receiver4Weight);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_HardwareSkinningFactory_register_1setCustomShadowReceiverMaterials_1SkinningType_1CMaterialPtr_1CMaterialPtr_1CMaterialPtr_1CMaterialPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCHardwareSkinningFactoryProxy *pObjectX = (JCHardwareSkinningFactoryProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setCustomShadowReceiverMaterials_SkinningType_CMaterialPtr_CMaterialPtr_CMaterialPtr_CMaterialPtr_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setCustomShadowReceiverMaterials_SkinningType_CMaterialPtr_CMaterialPtr_CMaterialPtr_CMaterialPtr_callback", "(IJJJJ)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_HardwareSkinningFactory_setCustomShadowReceiverMaterials_1SkinningType_1CMaterialPtr_1CMaterialPtr_1CMaterialPtr_1CMaterialPtr_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint skinningType_j, jlong receiver1Weight_j, jlong receiver2Weight_j, jlong receiver3Weight_j, jlong receiver4Weight_j)
				{
					const EarthView::World::Graphic::RTShaderSystem::SkinningType skinningType = (EarthView::World::Graphic::RTShaderSystem::SkinningType) skinningType_j;
					const EarthView::World::Graphic::CMaterialPtr &receiver1Weight = *(EarthView::World::Graphic::CMaterialPtr*) receiver1Weight_j;
					const EarthView::World::Graphic::CMaterialPtr &receiver2Weight = *(EarthView::World::Graphic::CMaterialPtr*) receiver2Weight_j;
					const EarthView::World::Graphic::CMaterialPtr &receiver3Weight = *(EarthView::World::Graphic::CMaterialPtr*) receiver3Weight_j;
					const EarthView::World::Graphic::CMaterialPtr &receiver4Weight = *(EarthView::World::Graphic::CMaterialPtr*) receiver4Weight_j;
					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory*) pObjXXXX;
					pObjectX->EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory::setCustomShadowReceiverMaterials(skinningType, receiver1Weight, receiver2Weight, receiver3Weight, receiver4Weight);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_HardwareSkinningFactory_getCustomShadowCasterMaterial_1SkinningType_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint skinningType_j, jint index_j)
				{
					const EarthView::World::Graphic::RTShaderSystem::SkinningType skinningType = (EarthView::World::Graphic::RTShaderSystem::SkinningType) skinningType_j;
					ev_uint16 index = (ev_uint16) index_j;
					const 					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory*) pObjXXXX;
					const EarthView::World::Graphic::CMaterialPtr& __values1 = pObjectX->getCustomShadowCasterMaterial(skinningType, index);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_HardwareSkinningFactory_getCustomShadowReceiverMaterial_1SkinningType_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint skinningType_j, jint index_j)
				{
					const EarthView::World::Graphic::RTShaderSystem::SkinningType skinningType = (EarthView::World::Graphic::RTShaderSystem::SkinningType) skinningType_j;
					ev_uint16 index = (ev_uint16) index_j;
					const 					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory*) pObjXXXX;
					const EarthView::World::Graphic::CMaterialPtr& __values1 = pObjectX->getCustomShadowReceiverMaterial(skinningType, index);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_HardwareSkinningFactory_prepareEntityForSkinning_1CEntity_1SkinningType_1bool_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pEntity_j, jint skinningType_j, jboolean correctAntidpodalityHandling_j, jboolean shearScale_j)
				{
					const EarthView::World::Graphic::CEntity *pEntity = (const EarthView::World::Graphic::CEntity*) pEntity_j;
					EarthView::World::Graphic::RTShaderSystem::SkinningType skinningType = (EarthView::World::Graphic::RTShaderSystem::SkinningType) skinningType_j;
					bool correctAntidpodalityHandling = (bool) correctAntidpodalityHandling_j;
					bool shearScale = (bool) shearScale_j;
					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory*) pObjXXXX;
					pObjectX->prepareEntityForSkinning(pEntity, skinningType, correctAntidpodalityHandling, shearScale);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_HardwareSkinningFactory_prepareEntityForSkinning_1CEntity_1SkinningType_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pEntity_j, jint skinningType_j, jboolean correctAntidpodalityHandling_j)
				{
					const EarthView::World::Graphic::CEntity *pEntity = (const EarthView::World::Graphic::CEntity*) pEntity_j;
					EarthView::World::Graphic::RTShaderSystem::SkinningType skinningType = (EarthView::World::Graphic::RTShaderSystem::SkinningType) skinningType_j;
					bool correctAntidpodalityHandling = (bool) correctAntidpodalityHandling_j;
					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory*) pObjXXXX;
					pObjectX->prepareEntityForSkinning(pEntity, skinningType, correctAntidpodalityHandling);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_HardwareSkinningFactory_prepareEntityForSkinning_1CEntity_1SkinningType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pEntity_j, jint skinningType_j)
				{
					const EarthView::World::Graphic::CEntity *pEntity = (const EarthView::World::Graphic::CEntity*) pEntity_j;
					EarthView::World::Graphic::RTShaderSystem::SkinningType skinningType = (EarthView::World::Graphic::RTShaderSystem::SkinningType) skinningType_j;
					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory*) pObjXXXX;
					pObjectX->prepareEntityForSkinning(pEntity, skinningType);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_HardwareSkinningFactory_prepareEntityForSkinning_1CEntity(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pEntity_j)
				{
					const EarthView::World::Graphic::CEntity *pEntity = (const EarthView::World::Graphic::CEntity*) pEntity_j;
					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory*) pObjXXXX;
					pObjectX->prepareEntityForSkinning(pEntity);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_rtshadersystem_HardwareSkinningFactory_getMaxCalculableBoneCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory*) pObjXXXX;
					ev_uint16 __values1 = pObjectX->getMaxCalculableBoneCount();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_HardwareSkinningFactory_setMaxCalculableBoneCount_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint count_j)
				{
					ev_uint16 count = (ev_uint16) count_j;
					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory*) pObjXXXX;
					pObjectX->setMaxCalculableBoneCount(count);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_HardwareSkinningFactory_getSingleton_1void(JNIEnv *__env , jclass __clazz)
				{
					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory& __values1 = EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory::getSingleton();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_HardwareSkinningFactory_getSingletonPtr_1void(JNIEnv *__env , jclass __clazz)
				{
					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory* __values1 = EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory::getSingletonPtr();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_HardwareSkinningFactory_createInstanceImpl_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCHardwareSkinningFactoryProxy))
					{
						EarthView::World::Graphic::RTShaderSystem::CSubRenderState* __values1 = pObjectX->EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory::createInstanceImpl();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_HardwareSkinningFactory_register_1createInstanceImpl_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCHardwareSkinningFactoryProxy *pObjectX = (JCHardwareSkinningFactoryProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_HardwareSkinningFactory_createInstanceImpl_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory*) pObjXXXX;
					EarthView::World::Graphic::RTShaderSystem::CSubRenderState* __values1 = pObjectX->EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory::createInstanceImpl();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_HardwareSkinningFactory_register_1createInstance_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCHardwareSkinningFactoryProxy *pObjectX = (JCHardwareSkinningFactoryProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_HardwareSkinningFactory_register_1createInstance_1CScriptCompiler_1CPropertyAbstractNode_1CTextureUnitState_1CSGScriptTranslator(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCHardwareSkinningFactoryProxy *pObjectX = (JCHardwareSkinningFactoryProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_HardwareSkinningFactory_register_1createOrRetrieveInstance_1CSGScriptTranslator(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCHardwareSkinningFactoryProxy *pObjectX = (JCHardwareSkinningFactoryProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_HardwareSkinningFactory_register_1destroyInstance_1CSubRenderState(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCHardwareSkinningFactoryProxy *pObjectX = (JCHardwareSkinningFactoryProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_HardwareSkinningFactory_register_1destroyAllInstances_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCHardwareSkinningFactoryProxy *pObjectX = (JCHardwareSkinningFactoryProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_HardwareSkinningFactory_register_1writeInstance_1CMaterialSerializer_1CSubRenderState_1CTextureUnitState_1CTextureUnitState(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCHardwareSkinningFactoryProxy *pObjectX = (JCHardwareSkinningFactoryProxy*) pObjXXXX;
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
