/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "rtshadersystem/shaderscripttranslator.h"
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
				class JCSGScriptTranslatorProxy : public EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator
				{
				 private:
					EarthView::World::Core::ev_string m_getGeneratedSubRenderState_EVString_callback;
					EarthView::World::Core::ev_string m_translate_CScriptCompiler_AbstractNodePtr_callback;
					EarthView::World::Core::ev_string m_ev_clone_void_callback;
				public:
					JCSGScriptTranslatorProxy(EarthView::World::Core::CNameValuePairList *pList) : CSGScriptTranslator(pList)
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
					void register_getGeneratedSubRenderState_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getGeneratedSubRenderState_EVString_callback = __method;
					}
					void register_translate_CScriptCompiler_AbstractNodePtr_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_translate_CScriptCompiler_AbstractNodePtr_callback = __method;
					}
					void register_ev_clone_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_ev_clone_void_callback = __method;
					}
					virtual void translate(EarthView::World::Graphic::CScriptCompiler* compiler, const EarthView::World::Graphic::AbstractNodePtr& node)
					{
						if (this->_gRef != NULL && this->m_translate_CScriptCompiler_AbstractNodePtr_callback != "" && this->isCustomExtend())
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
							jlong node_j = (jlong) &node;
							jmethodID __method = __gr->getMethod("translate_CScriptCompiler_AbstractNodePtr_callback");
							__env->CallVoidMethod(__obj, __method , compiler_j, node_j);
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
							return this->CSGScriptTranslator::translate(compiler, node);
						}
					}
					virtual EarthView::World::Graphic::RTShaderSystem::CSubRenderState* getGeneratedSubRenderState(const EVString& typeName)
					{
						if (this->_gRef != NULL && this->m_getGeneratedSubRenderState_EVString_callback != "" && this->isCustomExtend())
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
							EarthView::World::Core::ev_wstring typeName_wch = typeName;
							jstring typeName_j = __env->NewString((const jchar*)typeName_wch.getString(), typeName_wch.size());
							jmethodID __method = __gr->getMethod("getGeneratedSubRenderState_EVString_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , typeName_j);
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
							return this->CSGScriptTranslator::getGeneratedSubRenderState(typeName);
						}
					}
					virtual EarthView::World::Graphic::CScriptTranslator* clone()
					{
						if (this->_gRef != NULL && this->m_ev_clone_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("ev_clone_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Graphic::CScriptTranslator *__values1 = (EarthView::World::Graphic::CScriptTranslator*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CSGScriptTranslator::clone();
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCSGScriptTranslatorProxy);
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_Sgscripttranslator_translate_1CScriptCompiler_1AbstractNodePtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong compiler_j, jlong node_j)
				{
					EarthView::World::Graphic::CScriptCompiler *compiler = (EarthView::World::Graphic::CScriptCompiler*) compiler_j;
					const EarthView::World::Graphic::AbstractNodePtr &node = *(EarthView::World::Graphic::AbstractNodePtr*) node_j;
					EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCSGScriptTranslatorProxy))
					{
						pObjectX->EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator::translate(compiler, node);
					}
					else
					{
						pObjectX->translate(compiler, node);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_Sgscripttranslator_register_1translate_1CScriptCompiler_1AbstractNodePtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCSGScriptTranslatorProxy *pObjectX = (JCSGScriptTranslatorProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_translate_CScriptCompiler_AbstractNodePtr_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"translate_CScriptCompiler_AbstractNodePtr_callback", "(JJ)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_Sgscripttranslator_translate_1CScriptCompiler_1AbstractNodePtr_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong compiler_j, jlong node_j)
				{
					EarthView::World::Graphic::CScriptCompiler *compiler = (EarthView::World::Graphic::CScriptCompiler*) compiler_j;
					const EarthView::World::Graphic::AbstractNodePtr &node = *(EarthView::World::Graphic::AbstractNodePtr*) node_j;
					EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator*) pObjXXXX;
					pObjectX->EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator::translate(compiler, node);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_Sgscripttranslator_getGeneratedSubRenderState_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring typeName_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* typeName_ch = (const ev_char*)__env->GetStringUTFChars(typeName_j,JNI_FALSE);
					const EVString typeName = typeName_ch;
					__env->ReleaseStringUTFChars(typeName_j, (const char *)typeName_ch);
					#else
					const ev_wchar* typeName_ch = (const ev_wchar*)__env->GetStringChars(typeName_j,JNI_FALSE);
					const EVString typeName = typeName_ch;
					__env->ReleaseStringChars(typeName_j, (const jchar *)typeName_ch);
					#endif
					EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCSGScriptTranslatorProxy))
					{
						EarthView::World::Graphic::RTShaderSystem::CSubRenderState* __values1 = pObjectX->EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator::getGeneratedSubRenderState(typeName);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Graphic::RTShaderSystem::CSubRenderState* __values1 = pObjectX->getGeneratedSubRenderState(typeName);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_Sgscripttranslator_register_1getGeneratedSubRenderState_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCSGScriptTranslatorProxy *pObjectX = (JCSGScriptTranslatorProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getGeneratedSubRenderState_EVString_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getGeneratedSubRenderState_EVString_callback", "(Ljava/lang/String;)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_Sgscripttranslator_getGeneratedSubRenderState_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring typeName_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* typeName_ch = (const ev_char*)__env->GetStringUTFChars(typeName_j,JNI_FALSE);
					const EVString typeName = typeName_ch;
					__env->ReleaseStringUTFChars(typeName_j, (const char *)typeName_ch);
					#else
					const ev_wchar* typeName_ch = (const ev_wchar*)__env->GetStringChars(typeName_j,JNI_FALSE);
					const EVString typeName = typeName_ch;
					__env->ReleaseStringChars(typeName_j, (const jchar *)typeName_ch);
					#endif
					EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator*) pObjXXXX;
					EarthView::World::Graphic::RTShaderSystem::CSubRenderState* __values1 = pObjectX->EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator::getGeneratedSubRenderState(typeName);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_Sgscripttranslator_ev_1clone_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCSGScriptTranslatorProxy))
					{
						EarthView::World::Graphic::CScriptTranslator* __values1 = pObjectX->EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator::clone();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Graphic::CScriptTranslator* __values1 = pObjectX->clone();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_Sgscripttranslator_register_1ev_1clone_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCSGScriptTranslatorProxy *pObjectX = (JCSGScriptTranslatorProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_ev_clone_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"ev_clone_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_Sgscripttranslator_ev_1clone_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator*) pObjXXXX;
					EarthView::World::Graphic::CScriptTranslator* __values1 = pObjectX->EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator::clone();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
		}
	}
}
