/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/factoryobj.h"
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
			class JCParticleSystemRendererFactoryObjProxy : public EarthView::World::Graphic::CParticleSystemRendererFactoryObj
			{
			 private:
				EarthView::World::Core::ev_string m_getType_void_callback;
				EarthView::World::Core::ev_string m_createInstance_EVString_callback;
				EarthView::World::Core::ev_string m_destroyInstance_CParticleSystemRenderer_callback;
			public:
				JCParticleSystemRendererFactoryObjProxy(EarthView::World::Core::CNameValuePairList *pList) : CParticleSystemRendererFactoryObj(pList)
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
				void register_createInstance_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createInstance_EVString_callback = __method;
				}
				void register_destroyInstance_CParticleSystemRenderer_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_destroyInstance_CParticleSystemRenderer_callback = __method;
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
						return this->CParticleSystemRendererFactoryObj::getType();
					}
				}
				virtual EarthView::World::Graphic::CParticleSystemRenderer* createInstance(const EVString& name)
				{
					if (this->_gRef != NULL && this->m_createInstance_EVString_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("createInstance_EVString_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , name_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CParticleSystemRenderer *__values1 = (EarthView::World::Graphic::CParticleSystemRenderer*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CParticleSystemRendererFactoryObj::createInstance(name);
					}
				}
				virtual void destroyInstance(EarthView::World::Graphic::CParticleSystemRenderer* renderer)
				{
					if (this->_gRef != NULL && this->m_destroyInstance_CParticleSystemRenderer_callback != "" && this->isCustomExtend())
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
						jlong renderer_j = (jlong) renderer;
						jmethodID __method = __gr->getMethod("destroyInstance_CParticleSystemRenderer_callback");
						__env->CallVoidMethod(__obj, __method , renderer_j);
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
						return this->CParticleSystemRendererFactoryObj::destroyInstance(renderer);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCParticleSystemRendererFactoryObjProxy);
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_ParticleSystemRendererFactoryObj_getType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CParticleSystemRendererFactoryObj *pObjectX = (EarthView::World::Graphic::CParticleSystemRendererFactoryObj*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCParticleSystemRendererFactoryObjProxy))
				{
					EVString __values1 = pObjectX->EarthView::World::Graphic::CParticleSystemRendererFactoryObj::getType();
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleSystemRendererFactoryObj_register_1getType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCParticleSystemRendererFactoryObjProxy *pObjectX = (JCParticleSystemRendererFactoryObjProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_ParticleSystemRendererFactoryObj_getType_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CParticleSystemRendererFactoryObj *pObjectX = (EarthView::World::Graphic::CParticleSystemRendererFactoryObj*) pObjXXXX;
				EVString __values1 = pObjectX->EarthView::World::Graphic::CParticleSystemRendererFactoryObj::getType();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ParticleSystemRendererFactoryObj_createInstance_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Graphic::CParticleSystemRendererFactoryObj *pObjectX = (EarthView::World::Graphic::CParticleSystemRendererFactoryObj*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCParticleSystemRendererFactoryObjProxy))
				{
					EarthView::World::Graphic::CParticleSystemRenderer* __values1 = pObjectX->EarthView::World::Graphic::CParticleSystemRendererFactoryObj::createInstance(name);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CParticleSystemRenderer* __values1 = pObjectX->createInstance(name);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleSystemRendererFactoryObj_register_1createInstance_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCParticleSystemRendererFactoryObjProxy *pObjectX = (JCParticleSystemRendererFactoryObjProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createInstance_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createInstance_EVString_callback", "(Ljava/lang/String;)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ParticleSystemRendererFactoryObj_createInstance_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Graphic::CParticleSystemRendererFactoryObj *pObjectX = (EarthView::World::Graphic::CParticleSystemRendererFactoryObj*) pObjXXXX;
				EarthView::World::Graphic::CParticleSystemRenderer* __values1 = pObjectX->EarthView::World::Graphic::CParticleSystemRendererFactoryObj::createInstance(name);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleSystemRendererFactoryObj_destroyInstance_1CParticleSystemRenderer(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong renderer_j)
			{
				EarthView::World::Graphic::CParticleSystemRenderer *renderer = (EarthView::World::Graphic::CParticleSystemRenderer*) renderer_j;
				EarthView::World::Graphic::CParticleSystemRendererFactoryObj *pObjectX = (EarthView::World::Graphic::CParticleSystemRendererFactoryObj*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCParticleSystemRendererFactoryObjProxy))
				{
					pObjectX->EarthView::World::Graphic::CParticleSystemRendererFactoryObj::destroyInstance(renderer);
				}
				else
				{
					pObjectX->destroyInstance(renderer);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleSystemRendererFactoryObj_register_1destroyInstance_1CParticleSystemRenderer(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCParticleSystemRendererFactoryObjProxy *pObjectX = (JCParticleSystemRendererFactoryObjProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_destroyInstance_CParticleSystemRenderer_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"destroyInstance_CParticleSystemRenderer_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleSystemRendererFactoryObj_destroyInstance_1CParticleSystemRenderer_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong renderer_j)
			{
				EarthView::World::Graphic::CParticleSystemRenderer *renderer = (EarthView::World::Graphic::CParticleSystemRenderer*) renderer_j;
				EarthView::World::Graphic::CParticleSystemRendererFactoryObj *pObjectX = (EarthView::World::Graphic::CParticleSystemRendererFactoryObj*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CParticleSystemRendererFactoryObj::destroyInstance(renderer);
			}
		}
	}
}
