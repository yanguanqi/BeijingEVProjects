/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/particlesystemmanager.h"
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
			class JCParticleSystemManagerProxy : public EarthView::World::Graphic::CParticleSystemManager
			{
			 private:
				EarthView::World::Core::ev_string m_getScriptPatterns_void_callback;
				EarthView::World::Core::ev_string m_parseScript_DataStreamPtr_EVString_callback;
				EarthView::World::Core::ev_string m_getLoadingOrder_void_callback;
			public:
				JCParticleSystemManagerProxy(EarthView::World::Core::CNameValuePairList *pList) : CParticleSystemManager(pList)
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
				void register_getScriptPatterns_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getScriptPatterns_void_callback = __method;
				}
				void register_parseScript_DataStreamPtr_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_parseScript_DataStreamPtr_EVString_callback = __method;
				}
				void register_getLoadingOrder_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getLoadingOrder_void_callback = __method;
				}
				virtual const EarthView::World::Core::StringVector& getScriptPatterns() const
				{
					if (this->_gRef != NULL && this->m_getScriptPatterns_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getScriptPatterns_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Core::StringVector &__values1 = *(const EarthView::World::Core::StringVector*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CParticleSystemManager::getScriptPatterns();
					}
				}
				virtual void parseScript(EarthView::World::Core::DataStreamPtr& stream, const EVString& groupName)
				{
					if (this->_gRef != NULL && this->m_parseScript_DataStreamPtr_EVString_callback != "" && this->isCustomExtend())
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
						jlong stream_j = (jlong) &stream;
						EarthView::World::Core::ev_wstring groupName_wch = groupName;
						jstring groupName_j = __env->NewString((const jchar*)groupName_wch.getString(), groupName_wch.size());
						jmethodID __method = __gr->getMethod("parseScript_DataStreamPtr_EVString_callback");
						__env->CallVoidMethod(__obj, __method , stream_j, groupName_j);
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
						return this->CParticleSystemManager::parseScript(stream, groupName);
					}
				}
				virtual Real getLoadingOrder() const
				{
					if (this->_gRef != NULL && this->m_getLoadingOrder_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getLoadingOrder_void_callback");
						jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						Real __values1 = (Real) __values1_j;
						return __values1;
					}
					else
					{
						return this->CParticleSystemManager::getLoadingOrder();
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCParticleSystemManagerProxy);
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_ParticleSystemManager_00024ParticleTemplateMap_push_1EVString_1CParticleSystem(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j, jlong ref_val_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
				#else
				const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
				#endif
				EarthView::World::Graphic::CParticleSystem *&ref_val = *(EarthView::World::Graphic::CParticleSystem**) ref_val_j;
				EarthView::World::Graphic::CParticleSystemManager::ParticleTemplateMap *pObjectX = (EarthView::World::Graphic::CParticleSystemManager::ParticleTemplateMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->push(key, ref_val);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_ParticleSystemManager_00024ParticleTemplateMap_exist_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
				#else
				const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
				#endif
				EarthView::World::Graphic::CParticleSystemManager::ParticleTemplateMap *pObjectX = (EarthView::World::Graphic::CParticleSystemManager::ParticleTemplateMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->exist(key);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ParticleSystemManager_00024ParticleTemplateMap_OperatorIndex_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring key_j )
			{
				EarthView::World::Graphic::CParticleSystemManager::ParticleTemplateMap& pObjectX = *(EarthView::World::Graphic::CParticleSystemManager::ParticleTemplateMap*) pObjXXXX;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
				#else
				const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
				#endif
				EarthView::World::Graphic::CParticleSystem*& __values1 = pObjectX[key];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ParticleSystemManager_00024ParticleTemplateMap_get_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
				#else
				const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
				#endif
				EarthView::World::Graphic::CParticleSystemManager::ParticleTemplateMap *pObjectX = (EarthView::World::Graphic::CParticleSystemManager::ParticleTemplateMap*) pObjXXXX;
				EarthView::World::Graphic::CParticleSystem*& __values1 = pObjectX->get(key);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleSystemManager_00024ParticleTemplateMap_erase_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
				#else
				const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
				#endif
				EarthView::World::Graphic::CParticleSystemManager::ParticleTemplateMap *pObjectX = (EarthView::World::Graphic::CParticleSystemManager::ParticleTemplateMap*) pObjXXXX;
				pObjectX->erase(key);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ParticleSystemManager_00024ParticleTemplateMap_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CParticleSystemManager::ParticleTemplateMap *pObjectX = (EarthView::World::Graphic::CParticleSystemManager::ParticleTemplateMap*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleSystemManager_00024ParticleTemplateMap_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CParticleSystemManager::ParticleTemplateMap *pObjectX = (EarthView::World::Graphic::CParticleSystemManager::ParticleTemplateMap*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_ParticleSystemManager_00024ParticleTemplateMap_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CParticleSystemManager::ParticleTemplateMap *pObjectX = (EarthView::World::Graphic::CParticleSystemManager::ParticleTemplateMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_ParticleSystemManager_00024ParticleAffectorFactoryMap_push_1EVString_1CParticleAffectorFactory(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j, jlong ref_val_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
				#else
				const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
				#endif
				EarthView::World::Graphic::CParticleAffectorFactory *&ref_val = *(EarthView::World::Graphic::CParticleAffectorFactory**) ref_val_j;
				EarthView::World::Graphic::CParticleSystemManager::ParticleAffectorFactoryMap *pObjectX = (EarthView::World::Graphic::CParticleSystemManager::ParticleAffectorFactoryMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->push(key, ref_val);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_ParticleSystemManager_00024ParticleAffectorFactoryMap_exist_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
				#else
				const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
				#endif
				EarthView::World::Graphic::CParticleSystemManager::ParticleAffectorFactoryMap *pObjectX = (EarthView::World::Graphic::CParticleSystemManager::ParticleAffectorFactoryMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->exist(key);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ParticleSystemManager_00024ParticleAffectorFactoryMap_OperatorIndex_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring key_j )
			{
				EarthView::World::Graphic::CParticleSystemManager::ParticleAffectorFactoryMap& pObjectX = *(EarthView::World::Graphic::CParticleSystemManager::ParticleAffectorFactoryMap*) pObjXXXX;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
				#else
				const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
				#endif
				EarthView::World::Graphic::CParticleAffectorFactory*& __values1 = pObjectX[key];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ParticleSystemManager_00024ParticleAffectorFactoryMap_get_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
				#else
				const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
				#endif
				EarthView::World::Graphic::CParticleSystemManager::ParticleAffectorFactoryMap *pObjectX = (EarthView::World::Graphic::CParticleSystemManager::ParticleAffectorFactoryMap*) pObjXXXX;
				EarthView::World::Graphic::CParticleAffectorFactory*& __values1 = pObjectX->get(key);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleSystemManager_00024ParticleAffectorFactoryMap_erase_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
				#else
				const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
				#endif
				EarthView::World::Graphic::CParticleSystemManager::ParticleAffectorFactoryMap *pObjectX = (EarthView::World::Graphic::CParticleSystemManager::ParticleAffectorFactoryMap*) pObjXXXX;
				pObjectX->erase(key);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ParticleSystemManager_00024ParticleAffectorFactoryMap_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CParticleSystemManager::ParticleAffectorFactoryMap *pObjectX = (EarthView::World::Graphic::CParticleSystemManager::ParticleAffectorFactoryMap*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleSystemManager_00024ParticleAffectorFactoryMap_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CParticleSystemManager::ParticleAffectorFactoryMap *pObjectX = (EarthView::World::Graphic::CParticleSystemManager::ParticleAffectorFactoryMap*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_ParticleSystemManager_00024ParticleAffectorFactoryMap_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CParticleSystemManager::ParticleAffectorFactoryMap *pObjectX = (EarthView::World::Graphic::CParticleSystemManager::ParticleAffectorFactoryMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_ParticleSystemManager_00024ParticleEmitterFactoryMap_push_1EVString_1CParticleEmitterFactory(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j, jlong ref_val_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
				#else
				const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
				#endif
				EarthView::World::Graphic::CParticleEmitterFactory *&ref_val = *(EarthView::World::Graphic::CParticleEmitterFactory**) ref_val_j;
				EarthView::World::Graphic::CParticleSystemManager::ParticleEmitterFactoryMap *pObjectX = (EarthView::World::Graphic::CParticleSystemManager::ParticleEmitterFactoryMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->push(key, ref_val);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_ParticleSystemManager_00024ParticleEmitterFactoryMap_exist_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
				#else
				const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
				#endif
				EarthView::World::Graphic::CParticleSystemManager::ParticleEmitterFactoryMap *pObjectX = (EarthView::World::Graphic::CParticleSystemManager::ParticleEmitterFactoryMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->exist(key);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ParticleSystemManager_00024ParticleEmitterFactoryMap_OperatorIndex_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring key_j )
			{
				EarthView::World::Graphic::CParticleSystemManager::ParticleEmitterFactoryMap& pObjectX = *(EarthView::World::Graphic::CParticleSystemManager::ParticleEmitterFactoryMap*) pObjXXXX;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
				#else
				const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
				#endif
				EarthView::World::Graphic::CParticleEmitterFactory*& __values1 = pObjectX[key];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ParticleSystemManager_00024ParticleEmitterFactoryMap_get_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
				#else
				const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
				#endif
				EarthView::World::Graphic::CParticleSystemManager::ParticleEmitterFactoryMap *pObjectX = (EarthView::World::Graphic::CParticleSystemManager::ParticleEmitterFactoryMap*) pObjXXXX;
				EarthView::World::Graphic::CParticleEmitterFactory*& __values1 = pObjectX->get(key);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleSystemManager_00024ParticleEmitterFactoryMap_erase_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
				#else
				const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
				#endif
				EarthView::World::Graphic::CParticleSystemManager::ParticleEmitterFactoryMap *pObjectX = (EarthView::World::Graphic::CParticleSystemManager::ParticleEmitterFactoryMap*) pObjXXXX;
				pObjectX->erase(key);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ParticleSystemManager_00024ParticleEmitterFactoryMap_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CParticleSystemManager::ParticleEmitterFactoryMap *pObjectX = (EarthView::World::Graphic::CParticleSystemManager::ParticleEmitterFactoryMap*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleSystemManager_00024ParticleEmitterFactoryMap_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CParticleSystemManager::ParticleEmitterFactoryMap *pObjectX = (EarthView::World::Graphic::CParticleSystemManager::ParticleEmitterFactoryMap*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_ParticleSystemManager_00024ParticleEmitterFactoryMap_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CParticleSystemManager::ParticleEmitterFactoryMap *pObjectX = (EarthView::World::Graphic::CParticleSystemManager::ParticleEmitterFactoryMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_ParticleSystemManager_00024ParticleSystemRendererFactoryMap_push_1EVString_1CParticleSystemRendererFactory(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j, jlong ref_val_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
				#else
				const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
				#endif
				EarthView::World::Graphic::CParticleSystemRendererFactory *&ref_val = *(EarthView::World::Graphic::CParticleSystemRendererFactory**) ref_val_j;
				EarthView::World::Graphic::CParticleSystemManager::ParticleSystemRendererFactoryMap *pObjectX = (EarthView::World::Graphic::CParticleSystemManager::ParticleSystemRendererFactoryMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->push(key, ref_val);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_ParticleSystemManager_00024ParticleSystemRendererFactoryMap_exist_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
				#else
				const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
				#endif
				EarthView::World::Graphic::CParticleSystemManager::ParticleSystemRendererFactoryMap *pObjectX = (EarthView::World::Graphic::CParticleSystemManager::ParticleSystemRendererFactoryMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->exist(key);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ParticleSystemManager_00024ParticleSystemRendererFactoryMap_OperatorIndex_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring key_j )
			{
				EarthView::World::Graphic::CParticleSystemManager::ParticleSystemRendererFactoryMap& pObjectX = *(EarthView::World::Graphic::CParticleSystemManager::ParticleSystemRendererFactoryMap*) pObjXXXX;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
				#else
				const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
				#endif
				EarthView::World::Graphic::CParticleSystemRendererFactory*& __values1 = pObjectX[key];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ParticleSystemManager_00024ParticleSystemRendererFactoryMap_get_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
				#else
				const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
				#endif
				EarthView::World::Graphic::CParticleSystemManager::ParticleSystemRendererFactoryMap *pObjectX = (EarthView::World::Graphic::CParticleSystemManager::ParticleSystemRendererFactoryMap*) pObjXXXX;
				EarthView::World::Graphic::CParticleSystemRendererFactory*& __values1 = pObjectX->get(key);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleSystemManager_00024ParticleSystemRendererFactoryMap_erase_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
				#else
				const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
				#endif
				EarthView::World::Graphic::CParticleSystemManager::ParticleSystemRendererFactoryMap *pObjectX = (EarthView::World::Graphic::CParticleSystemManager::ParticleSystemRendererFactoryMap*) pObjXXXX;
				pObjectX->erase(key);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ParticleSystemManager_00024ParticleSystemRendererFactoryMap_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CParticleSystemManager::ParticleSystemRendererFactoryMap *pObjectX = (EarthView::World::Graphic::CParticleSystemManager::ParticleSystemRendererFactoryMap*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleSystemManager_00024ParticleSystemRendererFactoryMap_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CParticleSystemManager::ParticleSystemRendererFactoryMap *pObjectX = (EarthView::World::Graphic::CParticleSystemManager::ParticleSystemRendererFactoryMap*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_ParticleSystemManager_00024ParticleSystemRendererFactoryMap_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CParticleSystemManager::ParticleSystemRendererFactoryMap *pObjectX = (EarthView::World::Graphic::CParticleSystemManager::ParticleSystemRendererFactoryMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleSystemManager_addEmitterFactory_1CParticleEmitterFactory(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_factory_j)
			{
				EarthView::World::Graphic::CParticleEmitterFactory *ref_factory = (EarthView::World::Graphic::CParticleEmitterFactory*) ref_factory_j;
				EarthView::World::Graphic::CParticleSystemManager *pObjectX = (EarthView::World::Graphic::CParticleSystemManager*) pObjXXXX;
				pObjectX->addEmitterFactory(ref_factory);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleSystemManager_addAffectorFactory_1CParticleAffectorFactory(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_factory_j)
			{
				EarthView::World::Graphic::CParticleAffectorFactory *ref_factory = (EarthView::World::Graphic::CParticleAffectorFactory*) ref_factory_j;
				EarthView::World::Graphic::CParticleSystemManager *pObjectX = (EarthView::World::Graphic::CParticleSystemManager*) pObjXXXX;
				pObjectX->addAffectorFactory(ref_factory);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleSystemManager_addRendererFactory_1CParticleSystemRendererFactory(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_factory_j)
			{
				EarthView::World::Graphic::CParticleSystemRendererFactory *ref_factory = (EarthView::World::Graphic::CParticleSystemRendererFactory*) ref_factory_j;
				EarthView::World::Graphic::CParticleSystemManager *pObjectX = (EarthView::World::Graphic::CParticleSystemManager*) pObjXXXX;
				pObjectX->addRendererFactory(ref_factory);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleSystemManager_addTemplate_1EVString_1CParticleSystem(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jlong ref_sysTemplate_j)
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
				EarthView::World::Graphic::CParticleSystem *ref_sysTemplate = (EarthView::World::Graphic::CParticleSystem*) ref_sysTemplate_j;
				EarthView::World::Graphic::CParticleSystemManager *pObjectX = (EarthView::World::Graphic::CParticleSystemManager*) pObjXXXX;
				pObjectX->addTemplate(name, ref_sysTemplate);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleSystemManager_removeTemplate_1EVString_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jboolean deleteTemplate_j)
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
				ev_bool deleteTemplate = (ev_bool) deleteTemplate_j;
				EarthView::World::Graphic::CParticleSystemManager *pObjectX = (EarthView::World::Graphic::CParticleSystemManager*) pObjXXXX;
				pObjectX->removeTemplate(name, deleteTemplate);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleSystemManager_removeTemplate_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Graphic::CParticleSystemManager *pObjectX = (EarthView::World::Graphic::CParticleSystemManager*) pObjXXXX;
				pObjectX->removeTemplate(name);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleSystemManager_removeAllTemplates_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean deleteTemplate_j)
			{
				ev_bool deleteTemplate = (ev_bool) deleteTemplate_j;
				EarthView::World::Graphic::CParticleSystemManager *pObjectX = (EarthView::World::Graphic::CParticleSystemManager*) pObjXXXX;
				pObjectX->removeAllTemplates(deleteTemplate);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleSystemManager_removeAllTemplates_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CParticleSystemManager *pObjectX = (EarthView::World::Graphic::CParticleSystemManager*) pObjXXXX;
				pObjectX->removeAllTemplates();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleSystemManager_removeTemplatesByResourceGroup_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring resourceGroup_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* resourceGroup_ch = (const ev_char*)__env->GetStringUTFChars(resourceGroup_j,JNI_FALSE);
				const EVString resourceGroup = resourceGroup_ch;
				__env->ReleaseStringUTFChars(resourceGroup_j, (const char *)resourceGroup_ch);
				#else
				const ev_wchar* resourceGroup_ch = (const ev_wchar*)__env->GetStringChars(resourceGroup_j,JNI_FALSE);
				const EVString resourceGroup = resourceGroup_ch;
				__env->ReleaseStringChars(resourceGroup_j, (const jchar *)resourceGroup_ch);
				#endif
				EarthView::World::Graphic::CParticleSystemManager *pObjectX = (EarthView::World::Graphic::CParticleSystemManager*) pObjXXXX;
				pObjectX->removeTemplatesByResourceGroup(resourceGroup);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ParticleSystemManager_createTemplate_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring resourceGroup_j)
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
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* resourceGroup_ch = (const ev_char*)__env->GetStringUTFChars(resourceGroup_j,JNI_FALSE);
				const EVString resourceGroup = resourceGroup_ch;
				__env->ReleaseStringUTFChars(resourceGroup_j, (const char *)resourceGroup_ch);
				#else
				const ev_wchar* resourceGroup_ch = (const ev_wchar*)__env->GetStringChars(resourceGroup_j,JNI_FALSE);
				const EVString resourceGroup = resourceGroup_ch;
				__env->ReleaseStringChars(resourceGroup_j, (const jchar *)resourceGroup_ch);
				#endif
				EarthView::World::Graphic::CParticleSystemManager *pObjectX = (EarthView::World::Graphic::CParticleSystemManager*) pObjXXXX;
				EarthView::World::Graphic::CParticleSystem* __values1 = pObjectX->createTemplate(name, resourceGroup);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ParticleSystemManager_getTemplate_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Graphic::CParticleSystemManager *pObjectX = (EarthView::World::Graphic::CParticleSystemManager*) pObjXXXX;
				EarthView::World::Graphic::CParticleSystem* __values1 = pObjectX->getTemplate(name);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ParticleSystemManager__1createEmitter_1EVString_1CParticleSystem(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring emitterType_j, jlong psys_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* emitterType_ch = (const ev_char*)__env->GetStringUTFChars(emitterType_j,JNI_FALSE);
				const EVString emitterType = emitterType_ch;
				__env->ReleaseStringUTFChars(emitterType_j, (const char *)emitterType_ch);
				#else
				const ev_wchar* emitterType_ch = (const ev_wchar*)__env->GetStringChars(emitterType_j,JNI_FALSE);
				const EVString emitterType = emitterType_ch;
				__env->ReleaseStringChars(emitterType_j, (const jchar *)emitterType_ch);
				#endif
				EarthView::World::Graphic::CParticleSystem *psys = (EarthView::World::Graphic::CParticleSystem*) psys_j;
				EarthView::World::Graphic::CParticleSystemManager *pObjectX = (EarthView::World::Graphic::CParticleSystemManager*) pObjXXXX;
				EarthView::World::Graphic::CParticleEmitter* __values1 = pObjectX->_createEmitter(emitterType, psys);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleSystemManager__1destroyEmitter_1CParticleEmitter(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong emitter_j)
			{
				EarthView::World::Graphic::CParticleEmitter *emitter = (EarthView::World::Graphic::CParticleEmitter*) emitter_j;
				EarthView::World::Graphic::CParticleSystemManager *pObjectX = (EarthView::World::Graphic::CParticleSystemManager*) pObjXXXX;
				pObjectX->_destroyEmitter(emitter);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ParticleSystemManager__1createAffector_1EVString_1CParticleSystem(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring affectorType_j, jlong psys_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* affectorType_ch = (const ev_char*)__env->GetStringUTFChars(affectorType_j,JNI_FALSE);
				const EVString affectorType = affectorType_ch;
				__env->ReleaseStringUTFChars(affectorType_j, (const char *)affectorType_ch);
				#else
				const ev_wchar* affectorType_ch = (const ev_wchar*)__env->GetStringChars(affectorType_j,JNI_FALSE);
				const EVString affectorType = affectorType_ch;
				__env->ReleaseStringChars(affectorType_j, (const jchar *)affectorType_ch);
				#endif
				EarthView::World::Graphic::CParticleSystem *psys = (EarthView::World::Graphic::CParticleSystem*) psys_j;
				EarthView::World::Graphic::CParticleSystemManager *pObjectX = (EarthView::World::Graphic::CParticleSystemManager*) pObjXXXX;
				EarthView::World::Graphic::CParticleAffector* __values1 = pObjectX->_createAffector(affectorType, psys);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleSystemManager__1destroyAffector_1CParticleAffector(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong affector_j)
			{
				EarthView::World::Graphic::CParticleAffector *affector = (EarthView::World::Graphic::CParticleAffector*) affector_j;
				EarthView::World::Graphic::CParticleSystemManager *pObjectX = (EarthView::World::Graphic::CParticleSystemManager*) pObjXXXX;
				pObjectX->_destroyAffector(affector);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ParticleSystemManager__1createRenderer_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring rendererType_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* rendererType_ch = (const ev_char*)__env->GetStringUTFChars(rendererType_j,JNI_FALSE);
				const EVString rendererType = rendererType_ch;
				__env->ReleaseStringUTFChars(rendererType_j, (const char *)rendererType_ch);
				#else
				const ev_wchar* rendererType_ch = (const ev_wchar*)__env->GetStringChars(rendererType_j,JNI_FALSE);
				const EVString rendererType = rendererType_ch;
				__env->ReleaseStringChars(rendererType_j, (const jchar *)rendererType_ch);
				#endif
				EarthView::World::Graphic::CParticleSystemManager *pObjectX = (EarthView::World::Graphic::CParticleSystemManager*) pObjXXXX;
				EarthView::World::Graphic::CParticleSystemRenderer* __values1 = pObjectX->_createRenderer(rendererType);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleSystemManager__1destroyRenderer_1CParticleSystemRenderer(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong renderer_j)
			{
				EarthView::World::Graphic::CParticleSystemRenderer *renderer = (EarthView::World::Graphic::CParticleSystemRenderer*) renderer_j;
				EarthView::World::Graphic::CParticleSystemManager *pObjectX = (EarthView::World::Graphic::CParticleSystemManager*) pObjXXXX;
				pObjectX->_destroyRenderer(renderer);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleSystemManager__1initialise_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CParticleSystemManager *pObjectX = (EarthView::World::Graphic::CParticleSystemManager*) pObjXXXX;
				pObjectX->_initialise();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ParticleSystemManager_getScriptPatterns_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CParticleSystemManager *pObjectX = (EarthView::World::Graphic::CParticleSystemManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCParticleSystemManagerProxy))
				{
					const EarthView::World::Core::StringVector& __values1 = pObjectX->EarthView::World::Graphic::CParticleSystemManager::getScriptPatterns();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				else
				{
					const EarthView::World::Core::StringVector& __values1 = pObjectX->getScriptPatterns();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleSystemManager_register_1getScriptPatterns_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCParticleSystemManagerProxy *pObjectX = (JCParticleSystemManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getScriptPatterns_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getScriptPatterns_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ParticleSystemManager_getScriptPatterns_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CParticleSystemManager *pObjectX = (EarthView::World::Graphic::CParticleSystemManager*) pObjXXXX;
				const EarthView::World::Core::StringVector& __values1 = pObjectX->EarthView::World::Graphic::CParticleSystemManager::getScriptPatterns();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleSystemManager_parseScript_1DataStreamPtr_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j, jstring groupName_j)
			{
				EarthView::World::Core::DataStreamPtr &stream = *(EarthView::World::Core::DataStreamPtr*) stream_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* groupName_ch = (const ev_char*)__env->GetStringUTFChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringUTFChars(groupName_j, (const char *)groupName_ch);
				#else
				const ev_wchar* groupName_ch = (const ev_wchar*)__env->GetStringChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringChars(groupName_j, (const jchar *)groupName_ch);
				#endif
				EarthView::World::Graphic::CParticleSystemManager *pObjectX = (EarthView::World::Graphic::CParticleSystemManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCParticleSystemManagerProxy))
				{
					pObjectX->EarthView::World::Graphic::CParticleSystemManager::parseScript(stream, groupName);
				}
				else
				{
					pObjectX->parseScript(stream, groupName);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleSystemManager_register_1parseScript_1DataStreamPtr_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCParticleSystemManagerProxy *pObjectX = (JCParticleSystemManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_parseScript_DataStreamPtr_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"parseScript_DataStreamPtr_EVString_callback", "(JLjava/lang/String;)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleSystemManager_parseScript_1DataStreamPtr_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j, jstring groupName_j)
			{
				EarthView::World::Core::DataStreamPtr &stream = *(EarthView::World::Core::DataStreamPtr*) stream_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* groupName_ch = (const ev_char*)__env->GetStringUTFChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringUTFChars(groupName_j, (const char *)groupName_ch);
				#else
				const ev_wchar* groupName_ch = (const ev_wchar*)__env->GetStringChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringChars(groupName_j, (const jchar *)groupName_ch);
				#endif
				EarthView::World::Graphic::CParticleSystemManager *pObjectX = (EarthView::World::Graphic::CParticleSystemManager*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CParticleSystemManager::parseScript(stream, groupName);
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_ParticleSystemManager_getLoadingOrder_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CParticleSystemManager *pObjectX = (EarthView::World::Graphic::CParticleSystemManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCParticleSystemManagerProxy))
				{
					Real __values1 = pObjectX->EarthView::World::Graphic::CParticleSystemManager::getLoadingOrder();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				else
				{
					Real __values1 = pObjectX->getLoadingOrder();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleSystemManager_register_1getLoadingOrder_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCParticleSystemManagerProxy *pObjectX = (JCParticleSystemManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getLoadingOrder_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getLoadingOrder_void_callback", "()D");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_ParticleSystemManager_getLoadingOrder_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CParticleSystemManager *pObjectX = (EarthView::World::Graphic::CParticleSystemManager*) pObjXXXX;
				Real __values1 = pObjectX->EarthView::World::Graphic::CParticleSystemManager::getLoadingOrder();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_ParticleSystemManager_00024StringParticleAffectorFactoryPair_get_1first_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CParticleSystemManager::StringParticleAffectorFactoryPair *pObjectX = (EarthView::World::Graphic::CParticleSystemManager::StringParticleAffectorFactoryPair*)pObjXXXX;
				EarthView::World::Core::ev_wstring __values1_ch = pObjectX->first;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleSystemManager_00024StringParticleAffectorFactoryPair_set_1first_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
			{
				EarthView::World::Graphic::CParticleSystemManager::StringParticleAffectorFactoryPair *pObjectX = (EarthView::World::Graphic::CParticleSystemManager::StringParticleAffectorFactoryPair*)pObjXXXX;
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				pObjectX->first = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ParticleSystemManager_00024StringParticleAffectorFactoryPair_get_1second_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CParticleSystemManager::StringParticleAffectorFactoryPair *pObjectX = (EarthView::World::Graphic::CParticleSystemManager::StringParticleAffectorFactoryPair*)pObjXXXX;
				jlong __values1_j = (jlong)(pObjectX->second);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleSystemManager_00024StringParticleAffectorFactoryPair_set_1second_1CParticleAffectorFactory(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CParticleSystemManager::StringParticleAffectorFactoryPair *pObjectX = (EarthView::World::Graphic::CParticleSystemManager::StringParticleAffectorFactoryPair*)pObjXXXX;
				pObjectX->second = (EarthView::World::Graphic::CParticleAffectorFactory*) __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_ParticleSystemManager_00024ParticleAffectorFactoryIterator_hasMoreElements_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CParticleSystemManager::ParticleAffectorFactoryIterator *pObjectX = (EarthView::World::Graphic::CParticleSystemManager::ParticleAffectorFactoryIterator*) pObjXXXX;
				ev_bool __values1 = pObjectX->hasMoreElements();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleSystemManager_00024ParticleAffectorFactoryIterator_moveNext_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CParticleSystemManager::ParticleAffectorFactoryIterator *pObjectX = (EarthView::World::Graphic::CParticleSystemManager::ParticleAffectorFactoryIterator*) pObjXXXX;
				pObjectX->moveNext();
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_ParticleSystemManager_00024ParticleAffectorFactoryIterator_nextKey_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CParticleSystemManager::ParticleAffectorFactoryIterator *pObjectX = (EarthView::World::Graphic::CParticleSystemManager::ParticleAffectorFactoryIterator*) pObjXXXX;
				EVString __values1 = pObjectX->nextKey();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ParticleSystemManager_00024ParticleAffectorFactoryIterator_nextValue_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CParticleSystemManager::ParticleAffectorFactoryIterator *pObjectX = (EarthView::World::Graphic::CParticleSystemManager::ParticleAffectorFactoryIterator*) pObjXXXX;
				EarthView::World::Graphic::CParticleAffectorFactory* __values1 = pObjectX->nextValue();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ParticleSystemManager_00024ParticleAffectorFactoryIterator_nextValuePtr_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CParticleSystemManager::ParticleAffectorFactoryIterator *pObjectX = (EarthView::World::Graphic::CParticleSystemManager::ParticleAffectorFactoryIterator*) pObjXXXX;
				EarthView::World::Graphic::CParticleAffectorFactory** __values1 = pObjectX->nextValuePtr();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ParticleSystemManager_00024ParticleAffectorFactoryIterator_next_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CParticleSystemManager::ParticleAffectorFactoryIterator *pObjectX = (EarthView::World::Graphic::CParticleSystemManager::ParticleAffectorFactoryIterator*) pObjXXXX;
				EarthView::World::Graphic::CParticleAffectorFactory* __values1 = pObjectX->next();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ParticleSystemManager_00024ParticleAffectorFactoryIterator_getBegin_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CParticleSystemManager::ParticleAffectorFactoryIterator *pObjectX = (EarthView::World::Graphic::CParticleSystemManager::ParticleAffectorFactoryIterator*) pObjXXXX;
				const EarthView::World::Graphic::CParticleSystemManager::StringParticleAffectorFactoryPair& __values1 = pObjectX->getBegin();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ParticleSystemManager_00024ParticleAffectorFactoryIterator_getEnd_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CParticleSystemManager::ParticleAffectorFactoryIterator *pObjectX = (EarthView::World::Graphic::CParticleSystemManager::ParticleAffectorFactoryIterator*) pObjXXXX;
				const EarthView::World::Graphic::CParticleSystemManager::StringParticleAffectorFactoryPair& __values1 = pObjectX->getEnd();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ParticleSystemManager_00024ParticleAffectorFactoryIterator_getCurrent_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CParticleSystemManager::ParticleAffectorFactoryIterator *pObjectX = (EarthView::World::Graphic::CParticleSystemManager::ParticleAffectorFactoryIterator*) pObjXXXX;
				const EarthView::World::Graphic::CParticleSystemManager::StringParticleAffectorFactoryPair& __values1 = pObjectX->getCurrent();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_ParticleSystemManager_00024StringParticleEmitterFactoryPair_get_1first_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CParticleSystemManager::StringParticleEmitterFactoryPair *pObjectX = (EarthView::World::Graphic::CParticleSystemManager::StringParticleEmitterFactoryPair*)pObjXXXX;
				EarthView::World::Core::ev_wstring __values1_ch = pObjectX->first;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleSystemManager_00024StringParticleEmitterFactoryPair_set_1first_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
			{
				EarthView::World::Graphic::CParticleSystemManager::StringParticleEmitterFactoryPair *pObjectX = (EarthView::World::Graphic::CParticleSystemManager::StringParticleEmitterFactoryPair*)pObjXXXX;
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				pObjectX->first = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ParticleSystemManager_00024StringParticleEmitterFactoryPair_get_1second_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CParticleSystemManager::StringParticleEmitterFactoryPair *pObjectX = (EarthView::World::Graphic::CParticleSystemManager::StringParticleEmitterFactoryPair*)pObjXXXX;
				jlong __values1_j = (jlong)(pObjectX->second);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleSystemManager_00024StringParticleEmitterFactoryPair_set_1second_1CParticleEmitterFactory(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CParticleSystemManager::StringParticleEmitterFactoryPair *pObjectX = (EarthView::World::Graphic::CParticleSystemManager::StringParticleEmitterFactoryPair*)pObjXXXX;
				pObjectX->second = (EarthView::World::Graphic::CParticleEmitterFactory*) __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_ParticleSystemManager_00024ParticleEmitterFactoryIterator_hasMoreElements_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CParticleSystemManager::ParticleEmitterFactoryIterator *pObjectX = (EarthView::World::Graphic::CParticleSystemManager::ParticleEmitterFactoryIterator*) pObjXXXX;
				ev_bool __values1 = pObjectX->hasMoreElements();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleSystemManager_00024ParticleEmitterFactoryIterator_moveNext_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CParticleSystemManager::ParticleEmitterFactoryIterator *pObjectX = (EarthView::World::Graphic::CParticleSystemManager::ParticleEmitterFactoryIterator*) pObjXXXX;
				pObjectX->moveNext();
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_ParticleSystemManager_00024ParticleEmitterFactoryIterator_nextKey_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CParticleSystemManager::ParticleEmitterFactoryIterator *pObjectX = (EarthView::World::Graphic::CParticleSystemManager::ParticleEmitterFactoryIterator*) pObjXXXX;
				EVString __values1 = pObjectX->nextKey();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ParticleSystemManager_00024ParticleEmitterFactoryIterator_nextValue_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CParticleSystemManager::ParticleEmitterFactoryIterator *pObjectX = (EarthView::World::Graphic::CParticleSystemManager::ParticleEmitterFactoryIterator*) pObjXXXX;
				EarthView::World::Graphic::CParticleEmitterFactory* __values1 = pObjectX->nextValue();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ParticleSystemManager_00024ParticleEmitterFactoryIterator_nextValuePtr_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CParticleSystemManager::ParticleEmitterFactoryIterator *pObjectX = (EarthView::World::Graphic::CParticleSystemManager::ParticleEmitterFactoryIterator*) pObjXXXX;
				EarthView::World::Graphic::CParticleEmitterFactory** __values1 = pObjectX->nextValuePtr();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ParticleSystemManager_00024ParticleEmitterFactoryIterator_next_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CParticleSystemManager::ParticleEmitterFactoryIterator *pObjectX = (EarthView::World::Graphic::CParticleSystemManager::ParticleEmitterFactoryIterator*) pObjXXXX;
				EarthView::World::Graphic::CParticleEmitterFactory* __values1 = pObjectX->next();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ParticleSystemManager_00024ParticleEmitterFactoryIterator_getBegin_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CParticleSystemManager::ParticleEmitterFactoryIterator *pObjectX = (EarthView::World::Graphic::CParticleSystemManager::ParticleEmitterFactoryIterator*) pObjXXXX;
				const EarthView::World::Graphic::CParticleSystemManager::StringParticleEmitterFactoryPair& __values1 = pObjectX->getBegin();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ParticleSystemManager_00024ParticleEmitterFactoryIterator_getEnd_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CParticleSystemManager::ParticleEmitterFactoryIterator *pObjectX = (EarthView::World::Graphic::CParticleSystemManager::ParticleEmitterFactoryIterator*) pObjXXXX;
				const EarthView::World::Graphic::CParticleSystemManager::StringParticleEmitterFactoryPair& __values1 = pObjectX->getEnd();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ParticleSystemManager_00024ParticleEmitterFactoryIterator_getCurrent_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CParticleSystemManager::ParticleEmitterFactoryIterator *pObjectX = (EarthView::World::Graphic::CParticleSystemManager::ParticleEmitterFactoryIterator*) pObjXXXX;
				const EarthView::World::Graphic::CParticleSystemManager::StringParticleEmitterFactoryPair& __values1 = pObjectX->getCurrent();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_ParticleSystemManager_00024StringParticleSystemRendererFactoryPair_get_1first_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CParticleSystemManager::StringParticleSystemRendererFactoryPair *pObjectX = (EarthView::World::Graphic::CParticleSystemManager::StringParticleSystemRendererFactoryPair*)pObjXXXX;
				EarthView::World::Core::ev_wstring __values1_ch = pObjectX->first;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleSystemManager_00024StringParticleSystemRendererFactoryPair_set_1first_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
			{
				EarthView::World::Graphic::CParticleSystemManager::StringParticleSystemRendererFactoryPair *pObjectX = (EarthView::World::Graphic::CParticleSystemManager::StringParticleSystemRendererFactoryPair*)pObjXXXX;
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				pObjectX->first = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ParticleSystemManager_00024StringParticleSystemRendererFactoryPair_get_1second_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CParticleSystemManager::StringParticleSystemRendererFactoryPair *pObjectX = (EarthView::World::Graphic::CParticleSystemManager::StringParticleSystemRendererFactoryPair*)pObjXXXX;
				jlong __values1_j = (jlong)(pObjectX->second);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleSystemManager_00024StringParticleSystemRendererFactoryPair_set_1second_1CParticleSystemRendererFactory(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CParticleSystemManager::StringParticleSystemRendererFactoryPair *pObjectX = (EarthView::World::Graphic::CParticleSystemManager::StringParticleSystemRendererFactoryPair*)pObjXXXX;
				pObjectX->second = (EarthView::World::Graphic::CParticleSystemRendererFactory*) __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_ParticleSystemManager_00024ParticleRendererFactoryIterator_hasMoreElements_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CParticleSystemManager::ParticleRendererFactoryIterator *pObjectX = (EarthView::World::Graphic::CParticleSystemManager::ParticleRendererFactoryIterator*) pObjXXXX;
				ev_bool __values1 = pObjectX->hasMoreElements();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleSystemManager_00024ParticleRendererFactoryIterator_moveNext_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CParticleSystemManager::ParticleRendererFactoryIterator *pObjectX = (EarthView::World::Graphic::CParticleSystemManager::ParticleRendererFactoryIterator*) pObjXXXX;
				pObjectX->moveNext();
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_ParticleSystemManager_00024ParticleRendererFactoryIterator_nextKey_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CParticleSystemManager::ParticleRendererFactoryIterator *pObjectX = (EarthView::World::Graphic::CParticleSystemManager::ParticleRendererFactoryIterator*) pObjXXXX;
				EVString __values1 = pObjectX->nextKey();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ParticleSystemManager_00024ParticleRendererFactoryIterator_nextValue_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CParticleSystemManager::ParticleRendererFactoryIterator *pObjectX = (EarthView::World::Graphic::CParticleSystemManager::ParticleRendererFactoryIterator*) pObjXXXX;
				EarthView::World::Graphic::CParticleSystemRendererFactory* __values1 = pObjectX->nextValue();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ParticleSystemManager_00024ParticleRendererFactoryIterator_nextValuePtr_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CParticleSystemManager::ParticleRendererFactoryIterator *pObjectX = (EarthView::World::Graphic::CParticleSystemManager::ParticleRendererFactoryIterator*) pObjXXXX;
				EarthView::World::Graphic::CParticleSystemRendererFactory** __values1 = pObjectX->nextValuePtr();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ParticleSystemManager_00024ParticleRendererFactoryIterator_next_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CParticleSystemManager::ParticleRendererFactoryIterator *pObjectX = (EarthView::World::Graphic::CParticleSystemManager::ParticleRendererFactoryIterator*) pObjXXXX;
				EarthView::World::Graphic::CParticleSystemRendererFactory* __values1 = pObjectX->next();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ParticleSystemManager_00024ParticleRendererFactoryIterator_getBegin_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CParticleSystemManager::ParticleRendererFactoryIterator *pObjectX = (EarthView::World::Graphic::CParticleSystemManager::ParticleRendererFactoryIterator*) pObjXXXX;
				const EarthView::World::Graphic::CParticleSystemManager::StringParticleSystemRendererFactoryPair& __values1 = pObjectX->getBegin();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ParticleSystemManager_00024ParticleRendererFactoryIterator_getEnd_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CParticleSystemManager::ParticleRendererFactoryIterator *pObjectX = (EarthView::World::Graphic::CParticleSystemManager::ParticleRendererFactoryIterator*) pObjXXXX;
				const EarthView::World::Graphic::CParticleSystemManager::StringParticleSystemRendererFactoryPair& __values1 = pObjectX->getEnd();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ParticleSystemManager_00024ParticleRendererFactoryIterator_getCurrent_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CParticleSystemManager::ParticleRendererFactoryIterator *pObjectX = (EarthView::World::Graphic::CParticleSystemManager::ParticleRendererFactoryIterator*) pObjXXXX;
				const EarthView::World::Graphic::CParticleSystemManager::StringParticleSystemRendererFactoryPair& __values1 = pObjectX->getCurrent();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ParticleSystemManager_getAffectorFactoryIterator_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CParticleSystemManager *pObjectX = (EarthView::World::Graphic::CParticleSystemManager*) pObjXXXX;
				EarthView::World::Graphic::CParticleSystemManager::ParticleAffectorFactoryIterator __values1 = pObjectX->getAffectorFactoryIterator();
				EarthView::World::Graphic::CParticleSystemManager::ParticleAffectorFactoryIterator *returnvalues = new EarthView::World::Graphic::CParticleSystemManager::ParticleAffectorFactoryIterator(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ParticleSystemManager_getEmitterFactoryIterator_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CParticleSystemManager *pObjectX = (EarthView::World::Graphic::CParticleSystemManager*) pObjXXXX;
				EarthView::World::Graphic::CParticleSystemManager::ParticleEmitterFactoryIterator __values1 = pObjectX->getEmitterFactoryIterator();
				EarthView::World::Graphic::CParticleSystemManager::ParticleEmitterFactoryIterator *returnvalues = new EarthView::World::Graphic::CParticleSystemManager::ParticleEmitterFactoryIterator(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ParticleSystemManager_getRendererFactoryIterator_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CParticleSystemManager *pObjectX = (EarthView::World::Graphic::CParticleSystemManager*) pObjXXXX;
				EarthView::World::Graphic::CParticleSystemManager::ParticleRendererFactoryIterator __values1 = pObjectX->getRendererFactoryIterator();
				EarthView::World::Graphic::CParticleSystemManager::ParticleRendererFactoryIterator *returnvalues = new EarthView::World::Graphic::CParticleSystemManager::ParticleRendererFactoryIterator(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_ParticleSystemManager_00024StringParticleTemplateMapPair_get_1first_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CParticleSystemManager::StringParticleTemplateMapPair *pObjectX = (EarthView::World::Graphic::CParticleSystemManager::StringParticleTemplateMapPair*)pObjXXXX;
				EarthView::World::Core::ev_wstring __values1_ch = pObjectX->first;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleSystemManager_00024StringParticleTemplateMapPair_set_1first_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
			{
				EarthView::World::Graphic::CParticleSystemManager::StringParticleTemplateMapPair *pObjectX = (EarthView::World::Graphic::CParticleSystemManager::StringParticleTemplateMapPair*)pObjXXXX;
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				pObjectX->first = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ParticleSystemManager_00024StringParticleTemplateMapPair_get_1second_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CParticleSystemManager::StringParticleTemplateMapPair *pObjectX = (EarthView::World::Graphic::CParticleSystemManager::StringParticleTemplateMapPair*)pObjXXXX;
				jlong __values1_j = (jlong)(pObjectX->second);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleSystemManager_00024StringParticleTemplateMapPair_set_1second_1CParticleSystem(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CParticleSystemManager::StringParticleTemplateMapPair *pObjectX = (EarthView::World::Graphic::CParticleSystemManager::StringParticleTemplateMapPair*)pObjXXXX;
				pObjectX->second = (EarthView::World::Graphic::CParticleSystem*) __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_ParticleSystemManager_00024ParticleSystemTemplateIterator_hasMoreElements_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CParticleSystemManager::ParticleSystemTemplateIterator *pObjectX = (EarthView::World::Graphic::CParticleSystemManager::ParticleSystemTemplateIterator*) pObjXXXX;
				ev_bool __values1 = pObjectX->hasMoreElements();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleSystemManager_00024ParticleSystemTemplateIterator_moveNext_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CParticleSystemManager::ParticleSystemTemplateIterator *pObjectX = (EarthView::World::Graphic::CParticleSystemManager::ParticleSystemTemplateIterator*) pObjXXXX;
				pObjectX->moveNext();
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_ParticleSystemManager_00024ParticleSystemTemplateIterator_nextKey_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CParticleSystemManager::ParticleSystemTemplateIterator *pObjectX = (EarthView::World::Graphic::CParticleSystemManager::ParticleSystemTemplateIterator*) pObjXXXX;
				EVString __values1 = pObjectX->nextKey();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ParticleSystemManager_00024ParticleSystemTemplateIterator_nextValue_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CParticleSystemManager::ParticleSystemTemplateIterator *pObjectX = (EarthView::World::Graphic::CParticleSystemManager::ParticleSystemTemplateIterator*) pObjXXXX;
				EarthView::World::Graphic::CParticleSystem* __values1 = pObjectX->nextValue();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ParticleSystemManager_00024ParticleSystemTemplateIterator_nextValuePtr_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CParticleSystemManager::ParticleSystemTemplateIterator *pObjectX = (EarthView::World::Graphic::CParticleSystemManager::ParticleSystemTemplateIterator*) pObjXXXX;
				EarthView::World::Graphic::CParticleSystem** __values1 = pObjectX->nextValuePtr();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ParticleSystemManager_00024ParticleSystemTemplateIterator_next_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CParticleSystemManager::ParticleSystemTemplateIterator *pObjectX = (EarthView::World::Graphic::CParticleSystemManager::ParticleSystemTemplateIterator*) pObjXXXX;
				EarthView::World::Graphic::CParticleSystem* __values1 = pObjectX->next();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ParticleSystemManager_00024ParticleSystemTemplateIterator_getBegin_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CParticleSystemManager::ParticleSystemTemplateIterator *pObjectX = (EarthView::World::Graphic::CParticleSystemManager::ParticleSystemTemplateIterator*) pObjXXXX;
				const EarthView::World::Graphic::CParticleSystemManager::StringParticleTemplateMapPair& __values1 = pObjectX->getBegin();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ParticleSystemManager_00024ParticleSystemTemplateIterator_getEnd_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CParticleSystemManager::ParticleSystemTemplateIterator *pObjectX = (EarthView::World::Graphic::CParticleSystemManager::ParticleSystemTemplateIterator*) pObjXXXX;
				const EarthView::World::Graphic::CParticleSystemManager::StringParticleTemplateMapPair& __values1 = pObjectX->getEnd();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ParticleSystemManager_00024ParticleSystemTemplateIterator_getCurrent_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CParticleSystemManager::ParticleSystemTemplateIterator *pObjectX = (EarthView::World::Graphic::CParticleSystemManager::ParticleSystemTemplateIterator*) pObjXXXX;
				const EarthView::World::Graphic::CParticleSystemManager::StringParticleTemplateMapPair& __values1 = pObjectX->getCurrent();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ParticleSystemManager_getTemplateIterator_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CParticleSystemManager *pObjectX = (EarthView::World::Graphic::CParticleSystemManager*) pObjXXXX;
				EarthView::World::Graphic::CParticleSystemManager::ParticleSystemTemplateIterator __values1 = pObjectX->getTemplateIterator();
				EarthView::World::Graphic::CParticleSystemManager::ParticleSystemTemplateIterator *returnvalues = new EarthView::World::Graphic::CParticleSystemManager::ParticleSystemTemplateIterator(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ParticleSystemManager__1getFactory_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CParticleSystemManager *pObjectX = (EarthView::World::Graphic::CParticleSystemManager*) pObjXXXX;
				EarthView::World::Graphic::CParticleSystemFactory* __values1 = pObjectX->_getFactory();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ParticleSystemManager_getSingleton_1void(JNIEnv *__env , jclass __clazz)
			{
				EarthView::World::Graphic::CParticleSystemManager& __values1 = EarthView::World::Graphic::CParticleSystemManager::getSingleton();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ParticleSystemManager_getSingletonPtr_1void(JNIEnv *__env , jclass __clazz)
			{
				EarthView::World::Graphic::CParticleSystemManager* __values1 = EarthView::World::Graphic::CParticleSystemManager::getSingletonPtr();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			class JCParticleSystemFactoryProxy : public EarthView::World::Graphic::CParticleSystemFactory
			{
			 private:
				EarthView::World::Core::ev_string m_createInstanceImpl_EVString_CommonStringPairList_callback;
				EarthView::World::Core::ev_string m_createInstanceImpl_EVString_callback;
				EarthView::World::Core::ev_string m_getType_void_callback;
				EarthView::World::Core::ev_string m_createInstance_EVString_CSceneManager_CommonStringPairList_callback;
				EarthView::World::Core::ev_string m_createInstance_EVString_CSceneManager_callback;
				EarthView::World::Core::ev_string m_destroyInstance_CMovableObject_callback;
				EarthView::World::Core::ev_string m_requestTypeFlags_void_callback;
			public:
				JCParticleSystemFactoryProxy(EarthView::World::Core::CNameValuePairList *pList) : CParticleSystemFactory(pList)
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
				void register_createInstanceImpl_EVString_CommonStringPairList_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createInstanceImpl_EVString_CommonStringPairList_callback = __method;
				}
				void register_createInstanceImpl_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createInstanceImpl_EVString_callback = __method;
				}
				void register_getType_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getType_void_callback = __method;
				}
				void register_createInstance_EVString_CSceneManager_CommonStringPairList_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createInstance_EVString_CSceneManager_CommonStringPairList_callback = __method;
				}
				void register_createInstance_EVString_CSceneManager_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createInstance_EVString_CSceneManager_callback = __method;
				}
				void register_destroyInstance_CMovableObject_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_destroyInstance_CMovableObject_callback = __method;
				}
				void register_requestTypeFlags_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_requestTypeFlags_void_callback = __method;
				}
				virtual EarthView::World::Graphic::CMovableObject* createInstanceImpl(const EVString& name, const EarthView::World::Core::CommonStringPairList* params)
				{
					if (this->_gRef != NULL && this->m_createInstanceImpl_EVString_CommonStringPairList_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring name_wch = name;
						jstring name_j = __env->NewString((const jchar*)name_wch.getString(), name_wch.size());
						jlong params_j = (jlong) params;
						jmethodID __method = __gr->getMethod("createInstanceImpl_EVString_CommonStringPairList_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , name_j, params_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CMovableObject *__values1 = (EarthView::World::Graphic::CMovableObject*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CParticleSystemFactory::createInstanceImpl(name, params);
					}
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
						return this->CParticleSystemFactory::getType();
					}
				}
				virtual void destroyInstance(EarthView::World::Graphic::CMovableObject* obj)
				{
					if (this->_gRef != NULL && this->m_destroyInstance_CMovableObject_callback != "" && this->isCustomExtend())
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
						jlong obj_j = (jlong) obj;
						jmethodID __method = __gr->getMethod("destroyInstance_CMovableObject_callback");
						__env->CallVoidMethod(__obj, __method , obj_j);
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
						return this->CParticleSystemFactory::destroyInstance(obj);
					}
				}
				virtual EarthView::World::Graphic::CMovableObject* createInstance(const EVString& name, EarthView::World::Graphic::CSceneManager* ref_manager, const EarthView::World::Core::CommonStringPairList* params)
				{
					if (this->_gRef != NULL && this->m_createInstance_EVString_CSceneManager_CommonStringPairList_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring name_wch = name;
						jstring name_j = __env->NewString((const jchar*)name_wch.getString(), name_wch.size());
						jlong ref_manager_j = (jlong) ref_manager;
						jlong params_j = (jlong) params;
						jmethodID __method = __gr->getMethod("createInstance_EVString_CSceneManager_CommonStringPairList_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , name_j, ref_manager_j, params_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CMovableObject *__values1 = (EarthView::World::Graphic::CMovableObject*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CParticleSystemFactory::createInstance(name, ref_manager, params);
					}
				}
				virtual EarthView::World::Graphic::CMovableObject* createInstance(const EVString& name, EarthView::World::Graphic::CSceneManager* ref_manager)
				{
					if (this->_gRef != NULL && this->m_createInstance_EVString_CSceneManager_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring name_wch = name;
						jstring name_j = __env->NewString((const jchar*)name_wch.getString(), name_wch.size());
						jlong ref_manager_j = (jlong) ref_manager;
						jmethodID __method = __gr->getMethod("createInstance_EVString_CSceneManager_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , name_j, ref_manager_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CMovableObject *__values1 = (EarthView::World::Graphic::CMovableObject*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CParticleSystemFactory::createInstance(name, ref_manager);
					}
				}
				virtual ev_bool requestTypeFlags() const
				{
					if (this->_gRef != NULL && this->m_requestTypeFlags_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("requestTypeFlags_void_callback");
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
						return this->CParticleSystemFactory::requestTypeFlags();
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCParticleSystemFactoryProxy);
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ParticleSystemFactory_createInstanceImpl_1EVString_1CommonStringPairList(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jlong params_j)
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
				const EarthView::World::Core::CommonStringPairList *params = (const EarthView::World::Core::CommonStringPairList*) params_j;
				EarthView::World::Graphic::CParticleSystemFactory *pObjectX = (EarthView::World::Graphic::CParticleSystemFactory*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCParticleSystemFactoryProxy))
				{
					EarthView::World::Graphic::CMovableObject* __values1 = pObjectX->EarthView::World::Graphic::CParticleSystemFactory::createInstanceImpl(name, params);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CMovableObject* __values1 = pObjectX->createInstanceImpl(name, params);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleSystemFactory_register_1createInstanceImpl_1EVString_1CommonStringPairList(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCParticleSystemFactoryProxy *pObjectX = (JCParticleSystemFactoryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createInstanceImpl_EVString_CommonStringPairList_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createInstanceImpl_EVString_CommonStringPairList_callback", "(Ljava/lang/String;J)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ParticleSystemFactory_createInstanceImpl_1EVString_1CommonStringPairList_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jlong params_j)
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
				const EarthView::World::Core::CommonStringPairList *params = (const EarthView::World::Core::CommonStringPairList*) params_j;
				EarthView::World::Graphic::CParticleSystemFactory *pObjectX = (EarthView::World::Graphic::CParticleSystemFactory*) pObjXXXX;
				EarthView::World::Graphic::CMovableObject* __values1 = pObjectX->EarthView::World::Graphic::CParticleSystemFactory::createInstanceImpl(name, params);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_ParticleSystemFactory_get_1FACTORY_1TYPE_1NAME_1void(JNIEnv *__env, jclass __clazz)
			{
				EarthView::World::Core::ev_wstring __values1_ch = EarthView::World::Graphic::CParticleSystemFactory::FACTORY_TYPE_NAME;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleSystemFactory_set_1FACTORY_1TYPE_1NAME_1EVString(JNIEnv *__env, jclass __clazz, jstring __values1_j)
			{
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				EarthView::World::Graphic::CParticleSystemFactory::FACTORY_TYPE_NAME = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_ParticleSystemFactory_getType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CParticleSystemFactory *pObjectX = (EarthView::World::Graphic::CParticleSystemFactory*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCParticleSystemFactoryProxy))
				{
					EVString __values1 = pObjectX->EarthView::World::Graphic::CParticleSystemFactory::getType();
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleSystemFactory_register_1getType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCParticleSystemFactoryProxy *pObjectX = (JCParticleSystemFactoryProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_ParticleSystemFactory_getType_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CParticleSystemFactory *pObjectX = (EarthView::World::Graphic::CParticleSystemFactory*) pObjXXXX;
				EVString __values1 = pObjectX->EarthView::World::Graphic::CParticleSystemFactory::getType();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleSystemFactory_destroyInstance_1CMovableObject(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong obj_j)
			{
				EarthView::World::Graphic::CMovableObject *obj = (EarthView::World::Graphic::CMovableObject*) obj_j;
				EarthView::World::Graphic::CParticleSystemFactory *pObjectX = (EarthView::World::Graphic::CParticleSystemFactory*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCParticleSystemFactoryProxy))
				{
					pObjectX->EarthView::World::Graphic::CParticleSystemFactory::destroyInstance(obj);
				}
				else
				{
					pObjectX->destroyInstance(obj);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleSystemFactory_register_1destroyInstance_1CMovableObject(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCParticleSystemFactoryProxy *pObjectX = (JCParticleSystemFactoryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_destroyInstance_CMovableObject_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"destroyInstance_CMovableObject_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleSystemFactory_destroyInstance_1CMovableObject_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong obj_j)
			{
				EarthView::World::Graphic::CMovableObject *obj = (EarthView::World::Graphic::CMovableObject*) obj_j;
				EarthView::World::Graphic::CParticleSystemFactory *pObjectX = (EarthView::World::Graphic::CParticleSystemFactory*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CParticleSystemFactory::destroyInstance(obj);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleSystemFactory_register_1createInstanceImpl_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCParticleSystemFactoryProxy *pObjectX = (JCParticleSystemFactoryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createInstanceImpl_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createInstanceImpl_EVString_callback", "(Ljava/lang/String;)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleSystemFactory_register_1createInstance_1EVString_1CSceneManager_1CommonStringPairList(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCParticleSystemFactoryProxy *pObjectX = (JCParticleSystemFactoryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createInstance_EVString_CSceneManager_CommonStringPairList_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createInstance_EVString_CSceneManager_CommonStringPairList_callback", "(Ljava/lang/String;JJ)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleSystemFactory_register_1createInstance_1EVString_1CSceneManager(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCParticleSystemFactoryProxy *pObjectX = (JCParticleSystemFactoryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createInstance_EVString_CSceneManager_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createInstance_EVString_CSceneManager_callback", "(Ljava/lang/String;J)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleSystemFactory_register_1requestTypeFlags_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCParticleSystemFactoryProxy *pObjectX = (JCParticleSystemFactoryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_requestTypeFlags_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"requestTypeFlags_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
		}
	}
}
