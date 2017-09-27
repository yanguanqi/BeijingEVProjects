/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/animation.h"
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
			class JCAnimationContainerProxy : public EarthView::World::Graphic::CAnimationContainer
			{
			 private:
				EarthView::World::Core::ev_string m_getNumAnimations_void_callback;
				EarthView::World::Core::ev_string m_getAnimation_ev_uint16_callback;
				EarthView::World::Core::ev_string m_getAnimation_EVString_callback;
				EarthView::World::Core::ev_string m_createAnimation_EVString_Real_callback;
				EarthView::World::Core::ev_string m_hasAnimation_EVString_callback;
				EarthView::World::Core::ev_string m_removeAnimation_EVString_callback;
			public:
				JCAnimationContainerProxy(EarthView::World::Core::CNameValuePairList *pList) : CAnimationContainer(pList)
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
				void register_getNumAnimations_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getNumAnimations_void_callback = __method;
				}
				void register_getAnimation_ev_uint16_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getAnimation_ev_uint16_callback = __method;
				}
				void register_getAnimation_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getAnimation_EVString_callback = __method;
				}
				void register_createAnimation_EVString_Real_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createAnimation_EVString_Real_callback = __method;
				}
				void register_hasAnimation_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_hasAnimation_EVString_callback = __method;
				}
				void register_removeAnimation_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_removeAnimation_EVString_callback = __method;
				}
				virtual ev_uint16 getNumAnimations() const
				{
					if (this->_gRef != NULL && this->m_getNumAnimations_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getNumAnimations_void_callback");
						jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_uint16 __values1 = (ev_uint16) __values1_j;
						return __values1;
					}
					else
					{
						return this->CAnimationContainer::getNumAnimations();
					}
				}
				virtual EarthView::World::Graphic::CAnimation* getAnimation(ev_uint16 index) const
				{
					if (this->_gRef != NULL && this->m_getAnimation_ev_uint16_callback != "" && this->isCustomExtend())
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
						jint index_j = (jint) index;
						jmethodID __method = __gr->getMethod("getAnimation_ev_uint16_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , index_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CAnimation *__values1 = (EarthView::World::Graphic::CAnimation*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CAnimationContainer::getAnimation(index);
					}
				}
				virtual EarthView::World::Graphic::CAnimation* getAnimation(const EVString& name) const
				{
					if (this->_gRef != NULL && this->m_getAnimation_EVString_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getAnimation_EVString_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , name_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CAnimation *__values1 = (EarthView::World::Graphic::CAnimation*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CAnimationContainer::getAnimation(name);
					}
				}
				virtual EarthView::World::Graphic::CAnimation* createAnimation(const EVString& name, Real length)
				{
					if (this->_gRef != NULL && this->m_createAnimation_EVString_Real_callback != "" && this->isCustomExtend())
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
						jdouble length_j = (jdouble) length;
						jmethodID __method = __gr->getMethod("createAnimation_EVString_Real_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , name_j, length_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CAnimation *__values1 = (EarthView::World::Graphic::CAnimation*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CAnimationContainer::createAnimation(name, length);
					}
				}
				virtual bool hasAnimation(const EVString& name) const
				{
					if (this->_gRef != NULL && this->m_hasAnimation_EVString_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("hasAnimation_EVString_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , name_j);
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
						return this->CAnimationContainer::hasAnimation(name);
					}
				}
				virtual void removeAnimation(const EVString& name)
				{
					if (this->_gRef != NULL && this->m_removeAnimation_EVString_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("removeAnimation_EVString_callback");
						__env->CallVoidMethod(__obj, __method , name_j);
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
						return this->CAnimationContainer::removeAnimation(name);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCAnimationContainerProxy);
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_AnimationContainer_getNumAnimations_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAnimationContainer *pObjectX = (EarthView::World::Graphic::CAnimationContainer*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAnimationContainerProxy))
				{
					ev_uint16 __values1 = pObjectX->EarthView::World::Graphic::CAnimationContainer::getNumAnimations();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				else
				{
					ev_uint16 __values1 = pObjectX->getNumAnimations();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimationContainer_register_1getNumAnimations_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAnimationContainerProxy *pObjectX = (JCAnimationContainerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getNumAnimations_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getNumAnimations_void_callback", "()I");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_AnimationContainer_getNumAnimations_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAnimationContainer *pObjectX = (EarthView::World::Graphic::CAnimationContainer*) pObjXXXX;
				ev_uint16 __values1 = pObjectX->EarthView::World::Graphic::CAnimationContainer::getNumAnimations();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AnimationContainer_getAnimation_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint index_j)
			{
				ev_uint16 index = (ev_uint16) index_j;
				const 				EarthView::World::Graphic::CAnimationContainer *pObjectX = (EarthView::World::Graphic::CAnimationContainer*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAnimationContainerProxy))
				{
					EarthView::World::Graphic::CAnimation* __values1 = pObjectX->EarthView::World::Graphic::CAnimationContainer::getAnimation(index);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CAnimation* __values1 = pObjectX->getAnimation(index);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimationContainer_register_1getAnimation_1ev_1uint16(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAnimationContainerProxy *pObjectX = (JCAnimationContainerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getAnimation_ev_uint16_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getAnimation_ev_uint16_callback", "(I)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AnimationContainer_getAnimation_1ev_1uint16_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint index_j)
			{
				ev_uint16 index = (ev_uint16) index_j;
				const 				EarthView::World::Graphic::CAnimationContainer *pObjectX = (EarthView::World::Graphic::CAnimationContainer*) pObjXXXX;
				EarthView::World::Graphic::CAnimation* __values1 = pObjectX->EarthView::World::Graphic::CAnimationContainer::getAnimation(index);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AnimationContainer_getAnimation_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				const 				EarthView::World::Graphic::CAnimationContainer *pObjectX = (EarthView::World::Graphic::CAnimationContainer*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAnimationContainerProxy))
				{
					EarthView::World::Graphic::CAnimation* __values1 = pObjectX->EarthView::World::Graphic::CAnimationContainer::getAnimation(name);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CAnimation* __values1 = pObjectX->getAnimation(name);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimationContainer_register_1getAnimation_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAnimationContainerProxy *pObjectX = (JCAnimationContainerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getAnimation_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getAnimation_EVString_callback", "(Ljava/lang/String;)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AnimationContainer_getAnimation_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				const 				EarthView::World::Graphic::CAnimationContainer *pObjectX = (EarthView::World::Graphic::CAnimationContainer*) pObjXXXX;
				EarthView::World::Graphic::CAnimation* __values1 = pObjectX->EarthView::World::Graphic::CAnimationContainer::getAnimation(name);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AnimationContainer_createAnimation_1EVString_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jdouble length_j)
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
				Real length = (Real) length_j;
				EarthView::World::Graphic::CAnimationContainer *pObjectX = (EarthView::World::Graphic::CAnimationContainer*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAnimationContainerProxy))
				{
					EarthView::World::Graphic::CAnimation* __values1 = pObjectX->EarthView::World::Graphic::CAnimationContainer::createAnimation(name, length);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CAnimation* __values1 = pObjectX->createAnimation(name, length);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimationContainer_register_1createAnimation_1EVString_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAnimationContainerProxy *pObjectX = (JCAnimationContainerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createAnimation_EVString_Real_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createAnimation_EVString_Real_callback", "(Ljava/lang/String;D)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AnimationContainer_createAnimation_1EVString_1Real_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jdouble length_j)
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
				Real length = (Real) length_j;
				EarthView::World::Graphic::CAnimationContainer *pObjectX = (EarthView::World::Graphic::CAnimationContainer*) pObjXXXX;
				EarthView::World::Graphic::CAnimation* __values1 = pObjectX->EarthView::World::Graphic::CAnimationContainer::createAnimation(name, length);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_AnimationContainer_hasAnimation_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				const 				EarthView::World::Graphic::CAnimationContainer *pObjectX = (EarthView::World::Graphic::CAnimationContainer*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAnimationContainerProxy))
				{
					bool __values1 = pObjectX->EarthView::World::Graphic::CAnimationContainer::hasAnimation(name);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					bool __values1 = pObjectX->hasAnimation(name);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimationContainer_register_1hasAnimation_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAnimationContainerProxy *pObjectX = (JCAnimationContainerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_hasAnimation_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"hasAnimation_EVString_callback", "(Ljava/lang/String;)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_AnimationContainer_hasAnimation_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				const 				EarthView::World::Graphic::CAnimationContainer *pObjectX = (EarthView::World::Graphic::CAnimationContainer*) pObjXXXX;
				bool __values1 = pObjectX->EarthView::World::Graphic::CAnimationContainer::hasAnimation(name);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimationContainer_removeAnimation_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Graphic::CAnimationContainer *pObjectX = (EarthView::World::Graphic::CAnimationContainer*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAnimationContainerProxy))
				{
					pObjectX->EarthView::World::Graphic::CAnimationContainer::removeAnimation(name);
				}
				else
				{
					pObjectX->removeAnimation(name);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimationContainer_register_1removeAnimation_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAnimationContainerProxy *pObjectX = (JCAnimationContainerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_removeAnimation_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"removeAnimation_EVString_callback", "(Ljava/lang/String;)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimationContainer_removeAnimation_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Graphic::CAnimationContainer *pObjectX = (EarthView::World::Graphic::CAnimationContainer*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CAnimationContainer::removeAnimation(name);
			}
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_graphic_Animation_00024InterpolationModeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					CAnimation::IM_LINEAR,
					CAnimation::IM_SPLINE
				};
				jintArray array = __env->NewIntArray(2);
				__env->SetIntArrayRegion(array, 0, 2, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_graphic_Animation_00024RotationInterpolationModeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					CAnimation::RIM_LINEAR,
					CAnimation::RIM_SPHERICAL
				};
				jintArray array = __env->NewIntArray(2);
				__env->SetIntArrayRegion(array, 0, 2, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Animation_getName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAnimation *pObjectX = (EarthView::World::Graphic::CAnimation*) pObjXXXX;
				const EVString& __values1 = pObjectX->getName();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_Animation_getLength_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAnimation *pObjectX = (EarthView::World::Graphic::CAnimation*) pObjXXXX;
				Real __values1 = pObjectX->getLength();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Animation_setLength_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble len_j)
			{
				Real len = (Real) len_j;
				EarthView::World::Graphic::CAnimation *pObjectX = (EarthView::World::Graphic::CAnimation*) pObjXXXX;
				pObjectX->setLength(len);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Animation_createNodeTrack_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint handle_j)
			{
				ev_uint16 handle = (ev_uint16) handle_j;
				EarthView::World::Graphic::CAnimation *pObjectX = (EarthView::World::Graphic::CAnimation*) pObjXXXX;
				EarthView::World::Graphic::CNodeAnimationTrack* __values1 = pObjectX->createNodeTrack(handle);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Animation_createSphereNodeTrack_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint handle_j)
			{
				ev_uint16 handle = (ev_uint16) handle_j;
				EarthView::World::Graphic::CAnimation *pObjectX = (EarthView::World::Graphic::CAnimation*) pObjXXXX;
				EarthView::World::Graphic::CSphereNodeAnimationTrack* __values1 = pObjectX->createSphereNodeTrack(handle);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Animation_createNumericTrack_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint handle_j)
			{
				ev_uint16 handle = (ev_uint16) handle_j;
				EarthView::World::Graphic::CAnimation *pObjectX = (EarthView::World::Graphic::CAnimation*) pObjXXXX;
				EarthView::World::Graphic::CNumericAnimationTrack* __values1 = pObjectX->createNumericTrack(handle);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Animation_createVertexTrack_1ev_1uint16_1VertexAnimationType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint handle_j, jint animType_j)
			{
				ev_uint16 handle = (ev_uint16) handle_j;
				EarthView::World::Graphic::VertexAnimationType animType = (EarthView::World::Graphic::VertexAnimationType) animType_j;
				EarthView::World::Graphic::CAnimation *pObjectX = (EarthView::World::Graphic::CAnimation*) pObjXXXX;
				EarthView::World::Graphic::CVertexAnimationTrack* __values1 = pObjectX->createVertexTrack(handle, animType);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Animation_createNodeTrack_1ev_1uint16_1CNode(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint handle_j, jlong ref_node_j)
			{
				ev_uint16 handle = (ev_uint16) handle_j;
				EarthView::World::Graphic::CNode *ref_node = (EarthView::World::Graphic::CNode*) ref_node_j;
				EarthView::World::Graphic::CAnimation *pObjectX = (EarthView::World::Graphic::CAnimation*) pObjXXXX;
				EarthView::World::Graphic::CNodeAnimationTrack* __values1 = pObjectX->createNodeTrack(handle, ref_node);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Animation_createSphereNodeTrack_1ev_1uint16_1CNode(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint handle_j, jlong ref_node_j)
			{
				ev_uint16 handle = (ev_uint16) handle_j;
				EarthView::World::Graphic::CNode *ref_node = (EarthView::World::Graphic::CNode*) ref_node_j;
				EarthView::World::Graphic::CAnimation *pObjectX = (EarthView::World::Graphic::CAnimation*) pObjXXXX;
				EarthView::World::Graphic::CSphereNodeAnimationTrack* __values1 = pObjectX->createSphereNodeTrack(handle, ref_node);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Animation_createNumericTrack_1ev_1uint16_1AnimableValuePtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint handle_j, jlong anim_j)
			{
				ev_uint16 handle = (ev_uint16) handle_j;
				const EarthView::World::Graphic::AnimableValuePtr &anim = *(EarthView::World::Graphic::AnimableValuePtr*) anim_j;
				EarthView::World::Graphic::CAnimation *pObjectX = (EarthView::World::Graphic::CAnimation*) pObjXXXX;
				EarthView::World::Graphic::CNumericAnimationTrack* __values1 = pObjectX->createNumericTrack(handle, anim);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Animation_createVertexTrack_1ev_1uint16_1CVertexData_1VertexAnimationType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint handle_j, jlong ref_data_j, jint animType_j)
			{
				ev_uint16 handle = (ev_uint16) handle_j;
				EarthView::World::Graphic::CVertexData *ref_data = (EarthView::World::Graphic::CVertexData*) ref_data_j;
				EarthView::World::Graphic::VertexAnimationType animType = (EarthView::World::Graphic::VertexAnimationType) animType_j;
				EarthView::World::Graphic::CAnimation *pObjectX = (EarthView::World::Graphic::CAnimation*) pObjXXXX;
				EarthView::World::Graphic::CVertexAnimationTrack* __values1 = pObjectX->createVertexTrack(handle, ref_data, animType);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_Animation_getNumNodeTracks_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAnimation *pObjectX = (EarthView::World::Graphic::CAnimation*) pObjXXXX;
				ev_uint16 __values1 = pObjectX->getNumNodeTracks();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_Animation_getNumSphereNodeTracks_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAnimation *pObjectX = (EarthView::World::Graphic::CAnimation*) pObjXXXX;
				ev_uint16 __values1 = pObjectX->getNumSphereNodeTracks();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Animation_getNodeTrack_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint handle_j)
			{
				ev_uint16 handle = (ev_uint16) handle_j;
				const 				EarthView::World::Graphic::CAnimation *pObjectX = (EarthView::World::Graphic::CAnimation*) pObjXXXX;
				EarthView::World::Graphic::CNodeAnimationTrack* __values1 = pObjectX->getNodeTrack(handle);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Animation_getSphereNodeTrack_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint handle_j)
			{
				ev_uint16 handle = (ev_uint16) handle_j;
				const 				EarthView::World::Graphic::CAnimation *pObjectX = (EarthView::World::Graphic::CAnimation*) pObjXXXX;
				EarthView::World::Graphic::CSphereNodeAnimationTrack* __values1 = pObjectX->getSphereNodeTrack(handle);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Animation_hasNodeTrack_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint handle_j)
			{
				ev_uint16 handle = (ev_uint16) handle_j;
				const 				EarthView::World::Graphic::CAnimation *pObjectX = (EarthView::World::Graphic::CAnimation*) pObjXXXX;
				ev_bool __values1 = pObjectX->hasNodeTrack(handle);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Animation_hasSphereNodeTrack_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint handle_j)
			{
				ev_uint16 handle = (ev_uint16) handle_j;
				const 				EarthView::World::Graphic::CAnimation *pObjectX = (EarthView::World::Graphic::CAnimation*) pObjXXXX;
				ev_bool __values1 = pObjectX->hasSphereNodeTrack(handle);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_Animation_getNumNumericTracks_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAnimation *pObjectX = (EarthView::World::Graphic::CAnimation*) pObjXXXX;
				ev_uint16 __values1 = pObjectX->getNumNumericTracks();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Animation_getNumericTrack_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint handle_j)
			{
				ev_uint16 handle = (ev_uint16) handle_j;
				const 				EarthView::World::Graphic::CAnimation *pObjectX = (EarthView::World::Graphic::CAnimation*) pObjXXXX;
				EarthView::World::Graphic::CNumericAnimationTrack* __values1 = pObjectX->getNumericTrack(handle);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Animation_hasNumericTrack_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint handle_j)
			{
				ev_uint16 handle = (ev_uint16) handle_j;
				const 				EarthView::World::Graphic::CAnimation *pObjectX = (EarthView::World::Graphic::CAnimation*) pObjXXXX;
				ev_bool __values1 = pObjectX->hasNumericTrack(handle);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_Animation_getNumVertexTracks_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAnimation *pObjectX = (EarthView::World::Graphic::CAnimation*) pObjXXXX;
				ev_uint16 __values1 = pObjectX->getNumVertexTracks();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Animation_getVertexTrack_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint handle_j)
			{
				ev_uint16 handle = (ev_uint16) handle_j;
				const 				EarthView::World::Graphic::CAnimation *pObjectX = (EarthView::World::Graphic::CAnimation*) pObjXXXX;
				EarthView::World::Graphic::CVertexAnimationTrack* __values1 = pObjectX->getVertexTrack(handle);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Animation_hasVertexTrack_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint handle_j)
			{
				ev_uint16 handle = (ev_uint16) handle_j;
				const 				EarthView::World::Graphic::CAnimation *pObjectX = (EarthView::World::Graphic::CAnimation*) pObjXXXX;
				ev_bool __values1 = pObjectX->hasVertexTrack(handle);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Animation_destroyNodeTrack_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint handle_j)
			{
				ev_uint16 handle = (ev_uint16) handle_j;
				EarthView::World::Graphic::CAnimation *pObjectX = (EarthView::World::Graphic::CAnimation*) pObjXXXX;
				pObjectX->destroyNodeTrack(handle);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Animation_destroySphereNodeTrack_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint handle_j)
			{
				ev_uint16 handle = (ev_uint16) handle_j;
				EarthView::World::Graphic::CAnimation *pObjectX = (EarthView::World::Graphic::CAnimation*) pObjXXXX;
				pObjectX->destroySphereNodeTrack(handle);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Animation_destroyNumericTrack_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint handle_j)
			{
				ev_uint16 handle = (ev_uint16) handle_j;
				EarthView::World::Graphic::CAnimation *pObjectX = (EarthView::World::Graphic::CAnimation*) pObjXXXX;
				pObjectX->destroyNumericTrack(handle);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Animation_destroyVertexTrack_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint handle_j)
			{
				ev_uint16 handle = (ev_uint16) handle_j;
				EarthView::World::Graphic::CAnimation *pObjectX = (EarthView::World::Graphic::CAnimation*) pObjXXXX;
				pObjectX->destroyVertexTrack(handle);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Animation_destroyAllTracks_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CAnimation *pObjectX = (EarthView::World::Graphic::CAnimation*) pObjXXXX;
				pObjectX->destroyAllTracks();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Animation_destroyAllNodeTracks_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CAnimation *pObjectX = (EarthView::World::Graphic::CAnimation*) pObjXXXX;
				pObjectX->destroyAllNodeTracks();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Animation_destroyAllSphereNodeTracks_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CAnimation *pObjectX = (EarthView::World::Graphic::CAnimation*) pObjXXXX;
				pObjectX->destroyAllSphereNodeTracks();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Animation_destroyAllNumericTracks_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CAnimation *pObjectX = (EarthView::World::Graphic::CAnimation*) pObjXXXX;
				pObjectX->destroyAllNumericTracks();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Animation_destroyAllVertexTracks_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CAnimation *pObjectX = (EarthView::World::Graphic::CAnimation*) pObjXXXX;
				pObjectX->destroyAllVertexTracks();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Animation_apply_1Real_1Real_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble timePos_j, jdouble weight_j, jdouble scale_j)
			{
				Real timePos = (Real) timePos_j;
				Real weight = (Real) weight_j;
				Real scale = (Real) scale_j;
				EarthView::World::Graphic::CAnimation *pObjectX = (EarthView::World::Graphic::CAnimation*) pObjXXXX;
				pObjectX->apply(timePos, weight, scale);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Animation_apply_1Real_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble timePos_j, jdouble weight_j)
			{
				Real timePos = (Real) timePos_j;
				Real weight = (Real) weight_j;
				EarthView::World::Graphic::CAnimation *pObjectX = (EarthView::World::Graphic::CAnimation*) pObjXXXX;
				pObjectX->apply(timePos, weight);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Animation_apply_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble timePos_j)
			{
				Real timePos = (Real) timePos_j;
				EarthView::World::Graphic::CAnimation *pObjectX = (EarthView::World::Graphic::CAnimation*) pObjXXXX;
				pObjectX->apply(timePos);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Animation_applyToNode_1CNode_1Real_1Real_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong node_j, jdouble timePos_j, jdouble weight_j, jdouble scale_j)
			{
				EarthView::World::Graphic::CNode *node = (EarthView::World::Graphic::CNode*) node_j;
				Real timePos = (Real) timePos_j;
				Real weight = (Real) weight_j;
				Real scale = (Real) scale_j;
				EarthView::World::Graphic::CAnimation *pObjectX = (EarthView::World::Graphic::CAnimation*) pObjXXXX;
				pObjectX->applyToNode(node, timePos, weight, scale);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Animation_applyToNode_1CNode_1Real_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong node_j, jdouble timePos_j, jdouble weight_j)
			{
				EarthView::World::Graphic::CNode *node = (EarthView::World::Graphic::CNode*) node_j;
				Real timePos = (Real) timePos_j;
				Real weight = (Real) weight_j;
				EarthView::World::Graphic::CAnimation *pObjectX = (EarthView::World::Graphic::CAnimation*) pObjXXXX;
				pObjectX->applyToNode(node, timePos, weight);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Animation_applyToNode_1CNode_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong node_j, jdouble timePos_j)
			{
				EarthView::World::Graphic::CNode *node = (EarthView::World::Graphic::CNode*) node_j;
				Real timePos = (Real) timePos_j;
				EarthView::World::Graphic::CAnimation *pObjectX = (EarthView::World::Graphic::CAnimation*) pObjXXXX;
				pObjectX->applyToNode(node, timePos);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Animation_applyToSphereNode_1CNode_1Real_1Real_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong node_j, jdouble timePos_j, jdouble weight_j, jdouble scale_j)
			{
				EarthView::World::Graphic::CNode *node = (EarthView::World::Graphic::CNode*) node_j;
				Real timePos = (Real) timePos_j;
				Real weight = (Real) weight_j;
				Real scale = (Real) scale_j;
				EarthView::World::Graphic::CAnimation *pObjectX = (EarthView::World::Graphic::CAnimation*) pObjXXXX;
				pObjectX->applyToSphereNode(node, timePos, weight, scale);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Animation_applyToSphereNode_1CNode_1Real_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong node_j, jdouble timePos_j, jdouble weight_j)
			{
				EarthView::World::Graphic::CNode *node = (EarthView::World::Graphic::CNode*) node_j;
				Real timePos = (Real) timePos_j;
				Real weight = (Real) weight_j;
				EarthView::World::Graphic::CAnimation *pObjectX = (EarthView::World::Graphic::CAnimation*) pObjXXXX;
				pObjectX->applyToSphereNode(node, timePos, weight);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Animation_applyToSphereNode_1CNode_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong node_j, jdouble timePos_j)
			{
				EarthView::World::Graphic::CNode *node = (EarthView::World::Graphic::CNode*) node_j;
				Real timePos = (Real) timePos_j;
				EarthView::World::Graphic::CAnimation *pObjectX = (EarthView::World::Graphic::CAnimation*) pObjXXXX;
				pObjectX->applyToSphereNode(node, timePos);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Animation_apply_1CSkeleton_1Real_1Real_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong skeleton_j, jdouble timePos_j, jdouble weight_j, jdouble scale_j)
			{
				EarthView::World::Graphic::CSkeleton *skeleton = (EarthView::World::Graphic::CSkeleton*) skeleton_j;
				Real timePos = (Real) timePos_j;
				Real weight = (Real) weight_j;
				Real scale = (Real) scale_j;
				EarthView::World::Graphic::CAnimation *pObjectX = (EarthView::World::Graphic::CAnimation*) pObjXXXX;
				pObjectX->apply(skeleton, timePos, weight, scale);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Animation_apply_1CSkeleton_1Real_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong skeleton_j, jdouble timePos_j, jdouble weight_j)
			{
				EarthView::World::Graphic::CSkeleton *skeleton = (EarthView::World::Graphic::CSkeleton*) skeleton_j;
				Real timePos = (Real) timePos_j;
				Real weight = (Real) weight_j;
				EarthView::World::Graphic::CAnimation *pObjectX = (EarthView::World::Graphic::CAnimation*) pObjXXXX;
				pObjectX->apply(skeleton, timePos, weight);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Animation_apply_1CSkeleton_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong skeleton_j, jdouble timePos_j)
			{
				EarthView::World::Graphic::CSkeleton *skeleton = (EarthView::World::Graphic::CSkeleton*) skeleton_j;
				Real timePos = (Real) timePos_j;
				EarthView::World::Graphic::CAnimation *pObjectX = (EarthView::World::Graphic::CAnimation*) pObjXXXX;
				pObjectX->apply(skeleton, timePos);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Animation_apply_1CSkeleton_1Real_1ev_1real32_1BoneBlendMask_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong skeleton_j, jdouble timePos_j, jfloat weight_j, jlong blendMask_j, jdouble scale_j)
			{
				EarthView::World::Graphic::CSkeleton *skeleton = (EarthView::World::Graphic::CSkeleton*) skeleton_j;
				Real timePos = (Real) timePos_j;
				ev_real32 weight = (ev_real32) weight_j;
				const EarthView::World::Graphic::CAnimationState::BoneBlendMask *blendMask = (const EarthView::World::Graphic::CAnimationState::BoneBlendMask*) blendMask_j;
				Real scale = (Real) scale_j;
				EarthView::World::Graphic::CAnimation *pObjectX = (EarthView::World::Graphic::CAnimation*) pObjXXXX;
				pObjectX->apply(skeleton, timePos, weight, blendMask, scale);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Animation_apply_1CEntity_1Real_1Real_1ev_1bool_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong entity_j, jdouble timePos_j, jdouble weight_j, jboolean software_j, jboolean hardware_j)
			{
				EarthView::World::Graphic::CEntity *entity = (EarthView::World::Graphic::CEntity*) entity_j;
				Real timePos = (Real) timePos_j;
				Real weight = (Real) weight_j;
				ev_bool software = (ev_bool) software_j;
				ev_bool hardware = (ev_bool) hardware_j;
				EarthView::World::Graphic::CAnimation *pObjectX = (EarthView::World::Graphic::CAnimation*) pObjXXXX;
				pObjectX->apply(entity, timePos, weight, software, hardware);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Animation_applyToAnimable_1AnimableValuePtr_1Real_1Real_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong anim_j, jdouble timePos_j, jdouble weight_j, jdouble scale_j)
			{
				const EarthView::World::Graphic::AnimableValuePtr &anim = *(EarthView::World::Graphic::AnimableValuePtr*) anim_j;
				Real timePos = (Real) timePos_j;
				Real weight = (Real) weight_j;
				Real scale = (Real) scale_j;
				EarthView::World::Graphic::CAnimation *pObjectX = (EarthView::World::Graphic::CAnimation*) pObjXXXX;
				pObjectX->applyToAnimable(anim, timePos, weight, scale);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Animation_applyToAnimable_1AnimableValuePtr_1Real_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong anim_j, jdouble timePos_j, jdouble weight_j)
			{
				const EarthView::World::Graphic::AnimableValuePtr &anim = *(EarthView::World::Graphic::AnimableValuePtr*) anim_j;
				Real timePos = (Real) timePos_j;
				Real weight = (Real) weight_j;
				EarthView::World::Graphic::CAnimation *pObjectX = (EarthView::World::Graphic::CAnimation*) pObjXXXX;
				pObjectX->applyToAnimable(anim, timePos, weight);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Animation_applyToAnimable_1AnimableValuePtr_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong anim_j, jdouble timePos_j)
			{
				const EarthView::World::Graphic::AnimableValuePtr &anim = *(EarthView::World::Graphic::AnimableValuePtr*) anim_j;
				Real timePos = (Real) timePos_j;
				EarthView::World::Graphic::CAnimation *pObjectX = (EarthView::World::Graphic::CAnimation*) pObjXXXX;
				pObjectX->applyToAnimable(anim, timePos);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Animation_applyToVertexData_1CVertexData_1Real_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong data_j, jdouble timePos_j, jdouble weight_j)
			{
				EarthView::World::Graphic::CVertexData *data = (EarthView::World::Graphic::CVertexData*) data_j;
				Real timePos = (Real) timePos_j;
				Real weight = (Real) weight_j;
				EarthView::World::Graphic::CAnimation *pObjectX = (EarthView::World::Graphic::CAnimation*) pObjXXXX;
				pObjectX->applyToVertexData(data, timePos, weight);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Animation_applyToVertexData_1CVertexData_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong data_j, jdouble timePos_j)
			{
				EarthView::World::Graphic::CVertexData *data = (EarthView::World::Graphic::CVertexData*) data_j;
				Real timePos = (Real) timePos_j;
				EarthView::World::Graphic::CAnimation *pObjectX = (EarthView::World::Graphic::CAnimation*) pObjXXXX;
				pObjectX->applyToVertexData(data, timePos);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Animation_setInterpolationMode_1InterpolationMode(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint im_j)
			{
				EarthView::World::Graphic::CAnimation::InterpolationMode im = (EarthView::World::Graphic::CAnimation::InterpolationMode) im_j;
				EarthView::World::Graphic::CAnimation *pObjectX = (EarthView::World::Graphic::CAnimation*) pObjXXXX;
				pObjectX->setInterpolationMode(im);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_Animation_getInterpolationMode_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAnimation *pObjectX = (EarthView::World::Graphic::CAnimation*) pObjXXXX;
				EarthView::World::Graphic::CAnimation::InterpolationMode __values1 = pObjectX->getInterpolationMode();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Animation_setRotationInterpolationMode_1RotationInterpolationMode(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint im_j)
			{
				EarthView::World::Graphic::CAnimation::RotationInterpolationMode im = (EarthView::World::Graphic::CAnimation::RotationInterpolationMode) im_j;
				EarthView::World::Graphic::CAnimation *pObjectX = (EarthView::World::Graphic::CAnimation*) pObjXXXX;
				pObjectX->setRotationInterpolationMode(im);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_Animation_getRotationInterpolationMode_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAnimation *pObjectX = (EarthView::World::Graphic::CAnimation*) pObjXXXX;
				EarthView::World::Graphic::CAnimation::RotationInterpolationMode __values1 = pObjectX->getRotationInterpolationMode();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Animation_setDefaultInterpolationMode_1InterpolationMode(JNIEnv *__env , jclass __clazz, jint im_j)
			{
				EarthView::World::Graphic::CAnimation::InterpolationMode im = (EarthView::World::Graphic::CAnimation::InterpolationMode) im_j;
				EarthView::World::Graphic::CAnimation::setDefaultInterpolationMode(im);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_Animation_getDefaultInterpolationMode_1void(JNIEnv *__env , jclass __clazz)
			{
				EarthView::World::Graphic::CAnimation::InterpolationMode __values1 = EarthView::World::Graphic::CAnimation::getDefaultInterpolationMode();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Animation_setDefaultRotationInterpolationMode_1RotationInterpolationMode(JNIEnv *__env , jclass __clazz, jint im_j)
			{
				EarthView::World::Graphic::CAnimation::RotationInterpolationMode im = (EarthView::World::Graphic::CAnimation::RotationInterpolationMode) im_j;
				EarthView::World::Graphic::CAnimation::setDefaultRotationInterpolationMode(im);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_Animation_getDefaultRotationInterpolationMode_1void(JNIEnv *__env , jclass __clazz)
			{
				EarthView::World::Graphic::CAnimation::RotationInterpolationMode __values1 = EarthView::World::Graphic::CAnimation::getDefaultRotationInterpolationMode();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Animation_00024NodeTrackList_push_1ev_1uint16_1CNodeAnimationTrack(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint key_j, jlong ref_val_j)
			{
				const ev_uint16 key = (const ev_uint16) key_j;
				EarthView::World::Graphic::CNodeAnimationTrack *&ref_val = *(EarthView::World::Graphic::CNodeAnimationTrack**) ref_val_j;
				EarthView::World::Graphic::CAnimation::NodeTrackList *pObjectX = (EarthView::World::Graphic::CAnimation::NodeTrackList*) pObjXXXX;
				ev_bool __values1 = pObjectX->push(key, ref_val);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Animation_00024NodeTrackList_exist_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint key_j)
			{
				const ev_uint16 key = (const ev_uint16) key_j;
				EarthView::World::Graphic::CAnimation::NodeTrackList *pObjectX = (EarthView::World::Graphic::CAnimation::NodeTrackList*) pObjXXXX;
				ev_bool __values1 = pObjectX->exist(key);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Animation_00024NodeTrackList_OperatorIndex_1ev_1uint16(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint key_j )
			{
				EarthView::World::Graphic::CAnimation::NodeTrackList& pObjectX = *(EarthView::World::Graphic::CAnimation::NodeTrackList*) pObjXXXX;
				const ev_uint16 key = (const ev_uint16) key_j;
				EarthView::World::Graphic::CNodeAnimationTrack*& __values1 = pObjectX[key];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Animation_00024NodeTrackList_get_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint key_j)
			{
				const ev_uint16 key = (const ev_uint16) key_j;
				EarthView::World::Graphic::CAnimation::NodeTrackList *pObjectX = (EarthView::World::Graphic::CAnimation::NodeTrackList*) pObjXXXX;
				EarthView::World::Graphic::CNodeAnimationTrack*& __values1 = pObjectX->get(key);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Animation_00024NodeTrackList_erase_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint key_j)
			{
				const ev_uint16 key = (const ev_uint16) key_j;
				EarthView::World::Graphic::CAnimation::NodeTrackList *pObjectX = (EarthView::World::Graphic::CAnimation::NodeTrackList*) pObjXXXX;
				pObjectX->erase(key);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Animation_00024NodeTrackList_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAnimation::NodeTrackList *pObjectX = (EarthView::World::Graphic::CAnimation::NodeTrackList*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Animation_00024NodeTrackList_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CAnimation::NodeTrackList *pObjectX = (EarthView::World::Graphic::CAnimation::NodeTrackList*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Animation_00024NodeTrackList_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAnimation::NodeTrackList *pObjectX = (EarthView::World::Graphic::CAnimation::NodeTrackList*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Animation_00024SphereNodeTrackList_push_1ev_1uint16_1CSphereNodeAnimationTrack(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint key_j, jlong ref_val_j)
			{
				const ev_uint16 key = (const ev_uint16) key_j;
				EarthView::World::Graphic::CSphereNodeAnimationTrack *&ref_val = *(EarthView::World::Graphic::CSphereNodeAnimationTrack**) ref_val_j;
				EarthView::World::Graphic::CAnimation::SphereNodeTrackList *pObjectX = (EarthView::World::Graphic::CAnimation::SphereNodeTrackList*) pObjXXXX;
				ev_bool __values1 = pObjectX->push(key, ref_val);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Animation_00024SphereNodeTrackList_exist_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint key_j)
			{
				const ev_uint16 key = (const ev_uint16) key_j;
				EarthView::World::Graphic::CAnimation::SphereNodeTrackList *pObjectX = (EarthView::World::Graphic::CAnimation::SphereNodeTrackList*) pObjXXXX;
				ev_bool __values1 = pObjectX->exist(key);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Animation_00024SphereNodeTrackList_OperatorIndex_1ev_1uint16(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint key_j )
			{
				EarthView::World::Graphic::CAnimation::SphereNodeTrackList& pObjectX = *(EarthView::World::Graphic::CAnimation::SphereNodeTrackList*) pObjXXXX;
				const ev_uint16 key = (const ev_uint16) key_j;
				EarthView::World::Graphic::CSphereNodeAnimationTrack*& __values1 = pObjectX[key];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Animation_00024SphereNodeTrackList_get_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint key_j)
			{
				const ev_uint16 key = (const ev_uint16) key_j;
				EarthView::World::Graphic::CAnimation::SphereNodeTrackList *pObjectX = (EarthView::World::Graphic::CAnimation::SphereNodeTrackList*) pObjXXXX;
				EarthView::World::Graphic::CSphereNodeAnimationTrack*& __values1 = pObjectX->get(key);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Animation_00024SphereNodeTrackList_erase_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint key_j)
			{
				const ev_uint16 key = (const ev_uint16) key_j;
				EarthView::World::Graphic::CAnimation::SphereNodeTrackList *pObjectX = (EarthView::World::Graphic::CAnimation::SphereNodeTrackList*) pObjXXXX;
				pObjectX->erase(key);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Animation_00024SphereNodeTrackList_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAnimation::SphereNodeTrackList *pObjectX = (EarthView::World::Graphic::CAnimation::SphereNodeTrackList*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Animation_00024SphereNodeTrackList_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CAnimation::SphereNodeTrackList *pObjectX = (EarthView::World::Graphic::CAnimation::SphereNodeTrackList*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Animation_00024SphereNodeTrackList_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAnimation::SphereNodeTrackList *pObjectX = (EarthView::World::Graphic::CAnimation::SphereNodeTrackList*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_Animation_00024NodeTrackPair_get_1first_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CAnimation::NodeTrackPair *pObjectX = (EarthView::World::Graphic::CAnimation::NodeTrackPair*)pObjXXXX;
				jint __values1_j = (jint) (pObjectX->first);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Animation_00024NodeTrackPair_set_1first_1ev_1uint16(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
			{
				EarthView::World::Graphic::CAnimation::NodeTrackPair *pObjectX = (EarthView::World::Graphic::CAnimation::NodeTrackPair*)pObjXXXX;
				pObjectX->first = (ev_uint16)__values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Animation_00024NodeTrackPair_get_1second_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CAnimation::NodeTrackPair *pObjectX = (EarthView::World::Graphic::CAnimation::NodeTrackPair*)pObjXXXX;
				jlong __values1_j = (jlong)(pObjectX->second);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Animation_00024NodeTrackPair_set_1second_1CNodeAnimationTrack(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CAnimation::NodeTrackPair *pObjectX = (EarthView::World::Graphic::CAnimation::NodeTrackPair*)pObjXXXX;
				pObjectX->second = (EarthView::World::Graphic::CNodeAnimationTrack*) __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_Animation_00024SphereNodeTrackPair_get_1first_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CAnimation::SphereNodeTrackPair *pObjectX = (EarthView::World::Graphic::CAnimation::SphereNodeTrackPair*)pObjXXXX;
				jint __values1_j = (jint) (pObjectX->first);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Animation_00024SphereNodeTrackPair_set_1first_1ev_1uint16(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
			{
				EarthView::World::Graphic::CAnimation::SphereNodeTrackPair *pObjectX = (EarthView::World::Graphic::CAnimation::SphereNodeTrackPair*)pObjXXXX;
				pObjectX->first = (ev_uint16)__values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Animation_00024SphereNodeTrackPair_get_1second_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CAnimation::SphereNodeTrackPair *pObjectX = (EarthView::World::Graphic::CAnimation::SphereNodeTrackPair*)pObjXXXX;
				jlong __values1_j = (jlong)(pObjectX->second);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Animation_00024SphereNodeTrackPair_set_1second_1CSphereNodeAnimationTrack(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CAnimation::SphereNodeTrackPair *pObjectX = (EarthView::World::Graphic::CAnimation::SphereNodeTrackPair*)pObjXXXX;
				pObjectX->second = (EarthView::World::Graphic::CSphereNodeAnimationTrack*) __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Animation_00024NodeTrackIterator_hasMoreElements_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAnimation::NodeTrackIterator *pObjectX = (EarthView::World::Graphic::CAnimation::NodeTrackIterator*) pObjXXXX;
				ev_bool __values1 = pObjectX->hasMoreElements();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Animation_00024NodeTrackIterator_moveNext_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CAnimation::NodeTrackIterator *pObjectX = (EarthView::World::Graphic::CAnimation::NodeTrackIterator*) pObjXXXX;
				pObjectX->moveNext();
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_Animation_00024NodeTrackIterator_nextKey_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAnimation::NodeTrackIterator *pObjectX = (EarthView::World::Graphic::CAnimation::NodeTrackIterator*) pObjXXXX;
				ev_uint16 __values1 = pObjectX->nextKey();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Animation_00024NodeTrackIterator_nextValue_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAnimation::NodeTrackIterator *pObjectX = (EarthView::World::Graphic::CAnimation::NodeTrackIterator*) pObjXXXX;
				EarthView::World::Graphic::CNodeAnimationTrack* __values1 = pObjectX->nextValue();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Animation_00024NodeTrackIterator_nextValuePtr_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CAnimation::NodeTrackIterator *pObjectX = (EarthView::World::Graphic::CAnimation::NodeTrackIterator*) pObjXXXX;
				EarthView::World::Graphic::CNodeAnimationTrack** __values1 = pObjectX->nextValuePtr();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Animation_00024NodeTrackIterator_next_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CAnimation::NodeTrackIterator *pObjectX = (EarthView::World::Graphic::CAnimation::NodeTrackIterator*) pObjXXXX;
				EarthView::World::Graphic::CNodeAnimationTrack* __values1 = pObjectX->next();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Animation_00024NodeTrackIterator_getBegin_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CAnimation::NodeTrackIterator *pObjectX = (EarthView::World::Graphic::CAnimation::NodeTrackIterator*) pObjXXXX;
				const EarthView::World::Graphic::CAnimation::NodeTrackPair& __values1 = pObjectX->getBegin();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Animation_00024NodeTrackIterator_getEnd_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CAnimation::NodeTrackIterator *pObjectX = (EarthView::World::Graphic::CAnimation::NodeTrackIterator*) pObjXXXX;
				const EarthView::World::Graphic::CAnimation::NodeTrackPair& __values1 = pObjectX->getEnd();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Animation_00024NodeTrackIterator_getCurrent_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CAnimation::NodeTrackIterator *pObjectX = (EarthView::World::Graphic::CAnimation::NodeTrackIterator*) pObjXXXX;
				const EarthView::World::Graphic::CAnimation::NodeTrackPair& __values1 = pObjectX->getCurrent();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Animation_00024SphereNodeTrackIterator_hasMoreElements_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAnimation::SphereNodeTrackIterator *pObjectX = (EarthView::World::Graphic::CAnimation::SphereNodeTrackIterator*) pObjXXXX;
				ev_bool __values1 = pObjectX->hasMoreElements();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Animation_00024SphereNodeTrackIterator_moveNext_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CAnimation::SphereNodeTrackIterator *pObjectX = (EarthView::World::Graphic::CAnimation::SphereNodeTrackIterator*) pObjXXXX;
				pObjectX->moveNext();
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_Animation_00024SphereNodeTrackIterator_nextKey_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAnimation::SphereNodeTrackIterator *pObjectX = (EarthView::World::Graphic::CAnimation::SphereNodeTrackIterator*) pObjXXXX;
				ev_uint16 __values1 = pObjectX->nextKey();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Animation_00024SphereNodeTrackIterator_nextValue_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAnimation::SphereNodeTrackIterator *pObjectX = (EarthView::World::Graphic::CAnimation::SphereNodeTrackIterator*) pObjXXXX;
				EarthView::World::Graphic::CSphereNodeAnimationTrack* __values1 = pObjectX->nextValue();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Animation_00024SphereNodeTrackIterator_nextValuePtr_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CAnimation::SphereNodeTrackIterator *pObjectX = (EarthView::World::Graphic::CAnimation::SphereNodeTrackIterator*) pObjXXXX;
				EarthView::World::Graphic::CSphereNodeAnimationTrack** __values1 = pObjectX->nextValuePtr();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Animation_00024SphereNodeTrackIterator_next_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CAnimation::SphereNodeTrackIterator *pObjectX = (EarthView::World::Graphic::CAnimation::SphereNodeTrackIterator*) pObjXXXX;
				EarthView::World::Graphic::CSphereNodeAnimationTrack* __values1 = pObjectX->next();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Animation_00024SphereNodeTrackIterator_getBegin_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CAnimation::SphereNodeTrackIterator *pObjectX = (EarthView::World::Graphic::CAnimation::SphereNodeTrackIterator*) pObjXXXX;
				const EarthView::World::Graphic::CAnimation::SphereNodeTrackPair& __values1 = pObjectX->getBegin();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Animation_00024SphereNodeTrackIterator_getEnd_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CAnimation::SphereNodeTrackIterator *pObjectX = (EarthView::World::Graphic::CAnimation::SphereNodeTrackIterator*) pObjXXXX;
				const EarthView::World::Graphic::CAnimation::SphereNodeTrackPair& __values1 = pObjectX->getEnd();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Animation_00024SphereNodeTrackIterator_getCurrent_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CAnimation::SphereNodeTrackIterator *pObjectX = (EarthView::World::Graphic::CAnimation::SphereNodeTrackIterator*) pObjXXXX;
				const EarthView::World::Graphic::CAnimation::SphereNodeTrackPair& __values1 = pObjectX->getCurrent();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Animation_00024NumericTrackList_push_1ev_1uint16_1CNumericAnimationTrack(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint key_j, jlong ref_val_j)
			{
				const ev_uint16 key = (const ev_uint16) key_j;
				EarthView::World::Graphic::CNumericAnimationTrack *&ref_val = *(EarthView::World::Graphic::CNumericAnimationTrack**) ref_val_j;
				EarthView::World::Graphic::CAnimation::NumericTrackList *pObjectX = (EarthView::World::Graphic::CAnimation::NumericTrackList*) pObjXXXX;
				ev_bool __values1 = pObjectX->push(key, ref_val);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Animation_00024NumericTrackList_exist_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint key_j)
			{
				const ev_uint16 key = (const ev_uint16) key_j;
				EarthView::World::Graphic::CAnimation::NumericTrackList *pObjectX = (EarthView::World::Graphic::CAnimation::NumericTrackList*) pObjXXXX;
				ev_bool __values1 = pObjectX->exist(key);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Animation_00024NumericTrackList_OperatorIndex_1ev_1uint16(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint key_j )
			{
				EarthView::World::Graphic::CAnimation::NumericTrackList& pObjectX = *(EarthView::World::Graphic::CAnimation::NumericTrackList*) pObjXXXX;
				const ev_uint16 key = (const ev_uint16) key_j;
				EarthView::World::Graphic::CNumericAnimationTrack*& __values1 = pObjectX[key];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Animation_00024NumericTrackList_get_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint key_j)
			{
				const ev_uint16 key = (const ev_uint16) key_j;
				EarthView::World::Graphic::CAnimation::NumericTrackList *pObjectX = (EarthView::World::Graphic::CAnimation::NumericTrackList*) pObjXXXX;
				EarthView::World::Graphic::CNumericAnimationTrack*& __values1 = pObjectX->get(key);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Animation_00024NumericTrackList_erase_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint key_j)
			{
				const ev_uint16 key = (const ev_uint16) key_j;
				EarthView::World::Graphic::CAnimation::NumericTrackList *pObjectX = (EarthView::World::Graphic::CAnimation::NumericTrackList*) pObjXXXX;
				pObjectX->erase(key);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Animation_00024NumericTrackList_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAnimation::NumericTrackList *pObjectX = (EarthView::World::Graphic::CAnimation::NumericTrackList*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Animation_00024NumericTrackList_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CAnimation::NumericTrackList *pObjectX = (EarthView::World::Graphic::CAnimation::NumericTrackList*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Animation_00024NumericTrackList_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAnimation::NumericTrackList *pObjectX = (EarthView::World::Graphic::CAnimation::NumericTrackList*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_Animation_00024NumericTrackPair_get_1first_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CAnimation::NumericTrackPair *pObjectX = (EarthView::World::Graphic::CAnimation::NumericTrackPair*)pObjXXXX;
				jint __values1_j = (jint) (pObjectX->first);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Animation_00024NumericTrackPair_set_1first_1ev_1uint16(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
			{
				EarthView::World::Graphic::CAnimation::NumericTrackPair *pObjectX = (EarthView::World::Graphic::CAnimation::NumericTrackPair*)pObjXXXX;
				pObjectX->first = (ev_uint16)__values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Animation_00024NumericTrackPair_get_1second_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CAnimation::NumericTrackPair *pObjectX = (EarthView::World::Graphic::CAnimation::NumericTrackPair*)pObjXXXX;
				jlong __values1_j = (jlong)(pObjectX->second);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Animation_00024NumericTrackPair_set_1second_1CNumericAnimationTrack(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CAnimation::NumericTrackPair *pObjectX = (EarthView::World::Graphic::CAnimation::NumericTrackPair*)pObjXXXX;
				pObjectX->second = (EarthView::World::Graphic::CNumericAnimationTrack*) __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Animation_00024NumericTrackIterator_hasMoreElements_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAnimation::NumericTrackIterator *pObjectX = (EarthView::World::Graphic::CAnimation::NumericTrackIterator*) pObjXXXX;
				ev_bool __values1 = pObjectX->hasMoreElements();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Animation_00024NumericTrackIterator_moveNext_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CAnimation::NumericTrackIterator *pObjectX = (EarthView::World::Graphic::CAnimation::NumericTrackIterator*) pObjXXXX;
				pObjectX->moveNext();
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_Animation_00024NumericTrackIterator_nextKey_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAnimation::NumericTrackIterator *pObjectX = (EarthView::World::Graphic::CAnimation::NumericTrackIterator*) pObjXXXX;
				ev_uint16 __values1 = pObjectX->nextKey();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Animation_00024NumericTrackIterator_nextValue_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAnimation::NumericTrackIterator *pObjectX = (EarthView::World::Graphic::CAnimation::NumericTrackIterator*) pObjXXXX;
				EarthView::World::Graphic::CNumericAnimationTrack* __values1 = pObjectX->nextValue();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Animation_00024NumericTrackIterator_nextValuePtr_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CAnimation::NumericTrackIterator *pObjectX = (EarthView::World::Graphic::CAnimation::NumericTrackIterator*) pObjXXXX;
				EarthView::World::Graphic::CNumericAnimationTrack** __values1 = pObjectX->nextValuePtr();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Animation_00024NumericTrackIterator_next_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CAnimation::NumericTrackIterator *pObjectX = (EarthView::World::Graphic::CAnimation::NumericTrackIterator*) pObjXXXX;
				EarthView::World::Graphic::CNumericAnimationTrack* __values1 = pObjectX->next();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Animation_00024NumericTrackIterator_getBegin_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CAnimation::NumericTrackIterator *pObjectX = (EarthView::World::Graphic::CAnimation::NumericTrackIterator*) pObjXXXX;
				const EarthView::World::Graphic::CAnimation::NumericTrackPair& __values1 = pObjectX->getBegin();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Animation_00024NumericTrackIterator_getEnd_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CAnimation::NumericTrackIterator *pObjectX = (EarthView::World::Graphic::CAnimation::NumericTrackIterator*) pObjXXXX;
				const EarthView::World::Graphic::CAnimation::NumericTrackPair& __values1 = pObjectX->getEnd();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Animation_00024NumericTrackIterator_getCurrent_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CAnimation::NumericTrackIterator *pObjectX = (EarthView::World::Graphic::CAnimation::NumericTrackIterator*) pObjXXXX;
				const EarthView::World::Graphic::CAnimation::NumericTrackPair& __values1 = pObjectX->getCurrent();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Animation_00024VertexTrackList_push_1ev_1uint16_1CVertexAnimationTrack(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint key_j, jlong ref_val_j)
			{
				const ev_uint16 key = (const ev_uint16) key_j;
				EarthView::World::Graphic::CVertexAnimationTrack *&ref_val = *(EarthView::World::Graphic::CVertexAnimationTrack**) ref_val_j;
				EarthView::World::Graphic::CAnimation::VertexTrackList *pObjectX = (EarthView::World::Graphic::CAnimation::VertexTrackList*) pObjXXXX;
				ev_bool __values1 = pObjectX->push(key, ref_val);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Animation_00024VertexTrackList_exist_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint key_j)
			{
				const ev_uint16 key = (const ev_uint16) key_j;
				EarthView::World::Graphic::CAnimation::VertexTrackList *pObjectX = (EarthView::World::Graphic::CAnimation::VertexTrackList*) pObjXXXX;
				ev_bool __values1 = pObjectX->exist(key);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Animation_00024VertexTrackList_OperatorIndex_1ev_1uint16(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint key_j )
			{
				EarthView::World::Graphic::CAnimation::VertexTrackList& pObjectX = *(EarthView::World::Graphic::CAnimation::VertexTrackList*) pObjXXXX;
				const ev_uint16 key = (const ev_uint16) key_j;
				EarthView::World::Graphic::CVertexAnimationTrack*& __values1 = pObjectX[key];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Animation_00024VertexTrackList_get_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint key_j)
			{
				const ev_uint16 key = (const ev_uint16) key_j;
				EarthView::World::Graphic::CAnimation::VertexTrackList *pObjectX = (EarthView::World::Graphic::CAnimation::VertexTrackList*) pObjXXXX;
				EarthView::World::Graphic::CVertexAnimationTrack*& __values1 = pObjectX->get(key);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Animation_00024VertexTrackList_erase_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint key_j)
			{
				const ev_uint16 key = (const ev_uint16) key_j;
				EarthView::World::Graphic::CAnimation::VertexTrackList *pObjectX = (EarthView::World::Graphic::CAnimation::VertexTrackList*) pObjXXXX;
				pObjectX->erase(key);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Animation_00024VertexTrackList_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAnimation::VertexTrackList *pObjectX = (EarthView::World::Graphic::CAnimation::VertexTrackList*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Animation_00024VertexTrackList_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CAnimation::VertexTrackList *pObjectX = (EarthView::World::Graphic::CAnimation::VertexTrackList*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Animation_00024VertexTrackList_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAnimation::VertexTrackList *pObjectX = (EarthView::World::Graphic::CAnimation::VertexTrackList*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_Animation_00024VertexAnimationTrackPair_get_1first_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CAnimation::CVertexAnimationTrackPair *pObjectX = (EarthView::World::Graphic::CAnimation::CVertexAnimationTrackPair*)pObjXXXX;
				jint __values1_j = (jint) (pObjectX->first);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Animation_00024VertexAnimationTrackPair_set_1first_1ev_1uint16(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
			{
				EarthView::World::Graphic::CAnimation::CVertexAnimationTrackPair *pObjectX = (EarthView::World::Graphic::CAnimation::CVertexAnimationTrackPair*)pObjXXXX;
				pObjectX->first = (ev_uint16)__values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Animation_00024VertexAnimationTrackPair_get_1second_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CAnimation::CVertexAnimationTrackPair *pObjectX = (EarthView::World::Graphic::CAnimation::CVertexAnimationTrackPair*)pObjXXXX;
				jlong __values1_j = (jlong)(pObjectX->second);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Animation_00024VertexAnimationTrackPair_set_1second_1CVertexAnimationTrack(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CAnimation::CVertexAnimationTrackPair *pObjectX = (EarthView::World::Graphic::CAnimation::CVertexAnimationTrackPair*)pObjXXXX;
				pObjectX->second = (EarthView::World::Graphic::CVertexAnimationTrack*) __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Animation_00024VertexTrackIterator_hasMoreElements_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAnimation::VertexTrackIterator *pObjectX = (EarthView::World::Graphic::CAnimation::VertexTrackIterator*) pObjXXXX;
				ev_bool __values1 = pObjectX->hasMoreElements();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Animation_00024VertexTrackIterator_moveNext_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CAnimation::VertexTrackIterator *pObjectX = (EarthView::World::Graphic::CAnimation::VertexTrackIterator*) pObjXXXX;
				pObjectX->moveNext();
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_Animation_00024VertexTrackIterator_nextKey_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAnimation::VertexTrackIterator *pObjectX = (EarthView::World::Graphic::CAnimation::VertexTrackIterator*) pObjXXXX;
				ev_uint16 __values1 = pObjectX->nextKey();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Animation_00024VertexTrackIterator_nextValue_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAnimation::VertexTrackIterator *pObjectX = (EarthView::World::Graphic::CAnimation::VertexTrackIterator*) pObjXXXX;
				EarthView::World::Graphic::CVertexAnimationTrack* __values1 = pObjectX->nextValue();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Animation_00024VertexTrackIterator_nextValuePtr_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CAnimation::VertexTrackIterator *pObjectX = (EarthView::World::Graphic::CAnimation::VertexTrackIterator*) pObjXXXX;
				EarthView::World::Graphic::CVertexAnimationTrack** __values1 = pObjectX->nextValuePtr();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Animation_00024VertexTrackIterator_next_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CAnimation::VertexTrackIterator *pObjectX = (EarthView::World::Graphic::CAnimation::VertexTrackIterator*) pObjXXXX;
				EarthView::World::Graphic::CVertexAnimationTrack* __values1 = pObjectX->next();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Animation_00024VertexTrackIterator_getBegin_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CAnimation::VertexTrackIterator *pObjectX = (EarthView::World::Graphic::CAnimation::VertexTrackIterator*) pObjXXXX;
				const EarthView::World::Graphic::CAnimation::CVertexAnimationTrackPair& __values1 = pObjectX->getBegin();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Animation_00024VertexTrackIterator_getEnd_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CAnimation::VertexTrackIterator *pObjectX = (EarthView::World::Graphic::CAnimation::VertexTrackIterator*) pObjXXXX;
				const EarthView::World::Graphic::CAnimation::CVertexAnimationTrackPair& __values1 = pObjectX->getEnd();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Animation_00024VertexTrackIterator_getCurrent_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CAnimation::VertexTrackIterator *pObjectX = (EarthView::World::Graphic::CAnimation::VertexTrackIterator*) pObjXXXX;
				const EarthView::World::Graphic::CAnimation::CVertexAnimationTrackPair& __values1 = pObjectX->getCurrent();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Animation__1getNodeTrackList_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAnimation *pObjectX = (EarthView::World::Graphic::CAnimation*) pObjXXXX;
				const EarthView::World::Graphic::CAnimation::NodeTrackList& __values1 = pObjectX->_getNodeTrackList();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Animation__1getSphereNodeTrackList_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAnimation *pObjectX = (EarthView::World::Graphic::CAnimation*) pObjXXXX;
				const EarthView::World::Graphic::CAnimation::SphereNodeTrackList& __values1 = pObjectX->_getSphereNodeTrackList();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Animation_getNodeTrackIterator_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAnimation *pObjectX = (EarthView::World::Graphic::CAnimation*) pObjXXXX;
				EarthView::World::Graphic::CAnimation::NodeTrackIterator __values1 = pObjectX->getNodeTrackIterator();
				EarthView::World::Graphic::CAnimation::NodeTrackIterator *returnvalues = new EarthView::World::Graphic::CAnimation::NodeTrackIterator(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Animation_getSphereNodeTrackIterator_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAnimation *pObjectX = (EarthView::World::Graphic::CAnimation*) pObjXXXX;
				EarthView::World::Graphic::CAnimation::SphereNodeTrackIterator __values1 = pObjectX->getSphereNodeTrackIterator();
				EarthView::World::Graphic::CAnimation::SphereNodeTrackIterator *returnvalues = new EarthView::World::Graphic::CAnimation::SphereNodeTrackIterator(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Animation__1getNumericTrackList_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAnimation *pObjectX = (EarthView::World::Graphic::CAnimation*) pObjXXXX;
				const EarthView::World::Graphic::CAnimation::NumericTrackList& __values1 = pObjectX->_getNumericTrackList();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Animation_getNumericTrackIterator_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAnimation *pObjectX = (EarthView::World::Graphic::CAnimation*) pObjXXXX;
				EarthView::World::Graphic::CAnimation::NumericTrackIterator __values1 = pObjectX->getNumericTrackIterator();
				EarthView::World::Graphic::CAnimation::NumericTrackIterator *returnvalues = new EarthView::World::Graphic::CAnimation::NumericTrackIterator(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Animation__1getVertexTrackList_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAnimation *pObjectX = (EarthView::World::Graphic::CAnimation*) pObjXXXX;
				const EarthView::World::Graphic::CAnimation::VertexTrackList& __values1 = pObjectX->_getVertexTrackList();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Animation_getVertexTrackIterator_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAnimation *pObjectX = (EarthView::World::Graphic::CAnimation*) pObjXXXX;
				EarthView::World::Graphic::CAnimation::VertexTrackIterator __values1 = pObjectX->getVertexTrackIterator();
				EarthView::World::Graphic::CAnimation::VertexTrackIterator *returnvalues = new EarthView::World::Graphic::CAnimation::VertexTrackIterator(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Animation_optimise_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean discardIdentityNodeTracks_j)
			{
				ev_bool discardIdentityNodeTracks = (ev_bool) discardIdentityNodeTracks_j;
				EarthView::World::Graphic::CAnimation *pObjectX = (EarthView::World::Graphic::CAnimation*) pObjXXXX;
				pObjectX->optimise(discardIdentityNodeTracks);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Animation_optimise_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CAnimation *pObjectX = (EarthView::World::Graphic::CAnimation*) pObjXXXX;
				pObjectX->optimise();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Animation_00024TrackHandleList_insert_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint val_j)
			{
				ev_uint16 val = (ev_uint16) val_j;
				EarthView::World::Graphic::CAnimation::TrackHandleList *pObjectX = (EarthView::World::Graphic::CAnimation::TrackHandleList*) pObjXXXX;
				pObjectX->insert(val);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Animation_00024TrackHandleList_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CAnimation::TrackHandleList *pObjectX = (EarthView::World::Graphic::CAnimation::TrackHandleList*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Animation_00024TrackHandleList_erase_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint key_j)
			{
				const ev_uint16 key = (const ev_uint16) key_j;
				EarthView::World::Graphic::CAnimation::TrackHandleList *pObjectX = (EarthView::World::Graphic::CAnimation::TrackHandleList*) pObjXXXX;
				ev_size_t __values1 = pObjectX->erase(key);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Animation_00024TrackHandleList_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CAnimation::TrackHandleList *pObjectX = (EarthView::World::Graphic::CAnimation::TrackHandleList*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Animation_00024TrackHandleList_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CAnimation::TrackHandleList *pObjectX = (EarthView::World::Graphic::CAnimation::TrackHandleList*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Animation_00024TrackHandleList_count_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint key_j)
			{
				const ev_uint16 key = (const ev_uint16) key_j;
				EarthView::World::Graphic::CAnimation::TrackHandleList *pObjectX = (EarthView::World::Graphic::CAnimation::TrackHandleList*) pObjXXXX;
				ev_size_t __values1 = pObjectX->count(key);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Animation_00024TrackHandleList_max_1size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CAnimation::TrackHandleList *pObjectX = (EarthView::World::Graphic::CAnimation::TrackHandleList*) pObjXXXX;
				ev_size_t __values1 = pObjectX->max_size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Animation_00024TrackHandleList_swap_1TrackHandleList(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong other_j)
			{
				EarthView::World::Graphic::CAnimation::TrackHandleList &other = *(EarthView::World::Graphic::CAnimation::TrackHandleList*) other_j;
				EarthView::World::Graphic::CAnimation::TrackHandleList *pObjectX = (EarthView::World::Graphic::CAnimation::TrackHandleList*) pObjXXXX;
				pObjectX->swap(other);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Animation__1collectIdentityNodeTracks_1TrackHandleList(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong tracks_j)
			{
				EarthView::World::Graphic::CAnimation::TrackHandleList &tracks = *(EarthView::World::Graphic::CAnimation::TrackHandleList*) tracks_j;
				const 				EarthView::World::Graphic::CAnimation *pObjectX = (EarthView::World::Graphic::CAnimation*) pObjXXXX;
				pObjectX->_collectIdentityNodeTracks(tracks);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Animation__1destroyNodeTracks_1TrackHandleList(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong tracks_j)
			{
				const EarthView::World::Graphic::CAnimation::TrackHandleList &tracks = *(EarthView::World::Graphic::CAnimation::TrackHandleList*) tracks_j;
				EarthView::World::Graphic::CAnimation *pObjectX = (EarthView::World::Graphic::CAnimation*) pObjXXXX;
				pObjectX->_destroyNodeTracks(tracks);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Animation_ev_1clone_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring newName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* newName_ch = (const ev_char*)__env->GetStringUTFChars(newName_j,JNI_FALSE);
				const EVString newName = newName_ch;
				__env->ReleaseStringUTFChars(newName_j, (const char *)newName_ch);
				#else
				const ev_wchar* newName_ch = (const ev_wchar*)__env->GetStringChars(newName_j,JNI_FALSE);
				const EVString newName = newName_ch;
				__env->ReleaseStringChars(newName_j, (const jchar *)newName_ch);
				#endif
				const 				EarthView::World::Graphic::CAnimation *pObjectX = (EarthView::World::Graphic::CAnimation*) pObjXXXX;
				EarthView::World::Graphic::CAnimation* __values1 = pObjectX->clone(newName);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Animation__1keyFrameListChanged_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CAnimation *pObjectX = (EarthView::World::Graphic::CAnimation*) pObjXXXX;
				pObjectX->_keyFrameListChanged();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Animation__1getTimeIndex_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble timePos_j)
			{
				Real timePos = (Real) timePos_j;
				const 				EarthView::World::Graphic::CAnimation *pObjectX = (EarthView::World::Graphic::CAnimation*) pObjXXXX;
				EarthView::World::Graphic::CTimeIndex __values1 = pObjectX->_getTimeIndex(timePos);
				EarthView::World::Graphic::CTimeIndex *returnvalues = new EarthView::World::Graphic::CTimeIndex(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Animation_setUseBaseKeyFrame_1ev_1bool_1Real_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean useBaseKeyFrame_j, jdouble keyframeTime_j, jstring baseAnimName_j)
			{
				ev_bool useBaseKeyFrame = (ev_bool) useBaseKeyFrame_j;
				Real keyframeTime = (Real) keyframeTime_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* baseAnimName_ch = (const ev_char*)__env->GetStringUTFChars(baseAnimName_j,JNI_FALSE);
				const EVString baseAnimName = baseAnimName_ch;
				__env->ReleaseStringUTFChars(baseAnimName_j, (const char *)baseAnimName_ch);
				#else
				const ev_wchar* baseAnimName_ch = (const ev_wchar*)__env->GetStringChars(baseAnimName_j,JNI_FALSE);
				const EVString baseAnimName = baseAnimName_ch;
				__env->ReleaseStringChars(baseAnimName_j, (const jchar *)baseAnimName_ch);
				#endif
				EarthView::World::Graphic::CAnimation *pObjectX = (EarthView::World::Graphic::CAnimation*) pObjXXXX;
				pObjectX->setUseBaseKeyFrame(useBaseKeyFrame, keyframeTime, baseAnimName);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Animation_setUseBaseKeyFrame_1ev_1bool_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean useBaseKeyFrame_j, jdouble keyframeTime_j)
			{
				ev_bool useBaseKeyFrame = (ev_bool) useBaseKeyFrame_j;
				Real keyframeTime = (Real) keyframeTime_j;
				EarthView::World::Graphic::CAnimation *pObjectX = (EarthView::World::Graphic::CAnimation*) pObjXXXX;
				pObjectX->setUseBaseKeyFrame(useBaseKeyFrame, keyframeTime);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Animation_setUseBaseKeyFrame_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean useBaseKeyFrame_j)
			{
				ev_bool useBaseKeyFrame = (ev_bool) useBaseKeyFrame_j;
				EarthView::World::Graphic::CAnimation *pObjectX = (EarthView::World::Graphic::CAnimation*) pObjXXXX;
				pObjectX->setUseBaseKeyFrame(useBaseKeyFrame);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Animation_getUseBaseKeyFrame_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAnimation *pObjectX = (EarthView::World::Graphic::CAnimation*) pObjXXXX;
				ev_bool __values1 = pObjectX->getUseBaseKeyFrame();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_Animation_getBaseKeyFrameTime_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAnimation *pObjectX = (EarthView::World::Graphic::CAnimation*) pObjXXXX;
				Real __values1 = pObjectX->getBaseKeyFrameTime();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Animation_getBaseKeyFrameAnimationName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAnimation *pObjectX = (EarthView::World::Graphic::CAnimation*) pObjXXXX;
				const EVString& __values1 = pObjectX->getBaseKeyFrameAnimationName();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Animation__1applyBaseKeyFrame_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CAnimation *pObjectX = (EarthView::World::Graphic::CAnimation*) pObjXXXX;
				pObjectX->_applyBaseKeyFrame();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Animation__1notifyContainer_1CAnimationContainer(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_c_j)
			{
				EarthView::World::Graphic::CAnimationContainer *ref_c = (EarthView::World::Graphic::CAnimationContainer*) ref_c_j;
				EarthView::World::Graphic::CAnimation *pObjectX = (EarthView::World::Graphic::CAnimation*) pObjXXXX;
				pObjectX->_notifyContainer(ref_c);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Animation_getContainer_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CAnimation *pObjectX = (EarthView::World::Graphic::CAnimation*) pObjXXXX;
				EarthView::World::Graphic::CAnimationContainer* __values1 = pObjectX->getContainer();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
		}
	}
}
