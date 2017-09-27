/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/hardwareocclusionquery.h"
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
			class JCHardwareOcclusionQueryProxy : public EarthView::World::Graphic::CHardwareOcclusionQuery
			{
			 private:
				EarthView::World::Core::ev_string m_beginOcclusionQuery_void_callback;
				EarthView::World::Core::ev_string m_endOcclusionQuery_void_callback;
				EarthView::World::Core::ev_string m_pullOcclusionQuery_ev_uint32_callback;
				EarthView::World::Core::ev_string m_isStillOutstanding_void_callback;
			public:
				JCHardwareOcclusionQueryProxy(EarthView::World::Core::CNameValuePairList *pList) : CHardwareOcclusionQuery(pList)
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
				void register_beginOcclusionQuery_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_beginOcclusionQuery_void_callback = __method;
				}
				void register_endOcclusionQuery_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_endOcclusionQuery_void_callback = __method;
				}
				void register_pullOcclusionQuery_ev_uint32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_pullOcclusionQuery_ev_uint32_callback = __method;
				}
				void register_isStillOutstanding_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_isStillOutstanding_void_callback = __method;
				}
				virtual void beginOcclusionQuery()
				{
					if (this->_gRef != NULL && this->m_beginOcclusionQuery_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("beginOcclusionQuery_void_callback");
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
						return this->CHardwareOcclusionQuery::beginOcclusionQuery();
					}
				}
				virtual void endOcclusionQuery()
				{
					if (this->_gRef != NULL && this->m_endOcclusionQuery_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("endOcclusionQuery_void_callback");
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
						return this->CHardwareOcclusionQuery::endOcclusionQuery();
					}
				}
				virtual ev_bool pullOcclusionQuery(ev_uint32& NumOfFragments)
				{
					if (this->_gRef != NULL && this->m_pullOcclusionQuery_ev_uint32_callback != "" && this->isCustomExtend())
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
						jlong NumOfFragments_j = (jlong) &NumOfFragments;
						jmethodID __method = __gr->getMethod("pullOcclusionQuery_ev_uint32_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , NumOfFragments_j);
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
						return this->CHardwareOcclusionQuery::pullOcclusionQuery(NumOfFragments);
					}
				}
				virtual ev_bool isStillOutstanding()
				{
					if (this->_gRef != NULL && this->m_isStillOutstanding_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("isStillOutstanding_void_callback");
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
						return this->CHardwareOcclusionQuery::isStillOutstanding();
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCHardwareOcclusionQueryProxy);
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareOcclusionQuery_beginOcclusionQuery_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CHardwareOcclusionQuery *pObjectX = (EarthView::World::Graphic::CHardwareOcclusionQuery*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCHardwareOcclusionQueryProxy))
				{
					pObjectX->EarthView::World::Graphic::CHardwareOcclusionQuery::beginOcclusionQuery();
				}
				else
				{
					pObjectX->beginOcclusionQuery();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareOcclusionQuery_register_1beginOcclusionQuery_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHardwareOcclusionQueryProxy *pObjectX = (JCHardwareOcclusionQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_beginOcclusionQuery_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"beginOcclusionQuery_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareOcclusionQuery_beginOcclusionQuery_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CHardwareOcclusionQuery *pObjectX = (EarthView::World::Graphic::CHardwareOcclusionQuery*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CHardwareOcclusionQuery::beginOcclusionQuery();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareOcclusionQuery_endOcclusionQuery_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CHardwareOcclusionQuery *pObjectX = (EarthView::World::Graphic::CHardwareOcclusionQuery*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCHardwareOcclusionQueryProxy))
				{
					pObjectX->EarthView::World::Graphic::CHardwareOcclusionQuery::endOcclusionQuery();
				}
				else
				{
					pObjectX->endOcclusionQuery();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareOcclusionQuery_register_1endOcclusionQuery_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHardwareOcclusionQueryProxy *pObjectX = (JCHardwareOcclusionQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_endOcclusionQuery_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"endOcclusionQuery_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareOcclusionQuery_endOcclusionQuery_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CHardwareOcclusionQuery *pObjectX = (EarthView::World::Graphic::CHardwareOcclusionQuery*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CHardwareOcclusionQuery::endOcclusionQuery();
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_HardwareOcclusionQuery_pullOcclusionQuery_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong NumOfFragments_j)
			{
				ev_uint32 &NumOfFragments = *(ev_uint32*) NumOfFragments_j;
				EarthView::World::Graphic::CHardwareOcclusionQuery *pObjectX = (EarthView::World::Graphic::CHardwareOcclusionQuery*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCHardwareOcclusionQueryProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Graphic::CHardwareOcclusionQuery::pullOcclusionQuery(NumOfFragments);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->pullOcclusionQuery(NumOfFragments);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareOcclusionQuery_register_1pullOcclusionQuery_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHardwareOcclusionQueryProxy *pObjectX = (JCHardwareOcclusionQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_pullOcclusionQuery_ev_uint32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"pullOcclusionQuery_ev_uint32_callback", "(J)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_HardwareOcclusionQuery_pullOcclusionQuery_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong NumOfFragments_j)
			{
				ev_uint32 &NumOfFragments = *(ev_uint32*) NumOfFragments_j;
				EarthView::World::Graphic::CHardwareOcclusionQuery *pObjectX = (EarthView::World::Graphic::CHardwareOcclusionQuery*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Graphic::CHardwareOcclusionQuery::pullOcclusionQuery(NumOfFragments);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_HardwareOcclusionQuery_getLastQuerysPixelcount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CHardwareOcclusionQuery *pObjectX = (EarthView::World::Graphic::CHardwareOcclusionQuery*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getLastQuerysPixelcount();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_HardwareOcclusionQuery_isStillOutstanding_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CHardwareOcclusionQuery *pObjectX = (EarthView::World::Graphic::CHardwareOcclusionQuery*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCHardwareOcclusionQueryProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Graphic::CHardwareOcclusionQuery::isStillOutstanding();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->isStillOutstanding();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareOcclusionQuery_register_1isStillOutstanding_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHardwareOcclusionQueryProxy *pObjectX = (JCHardwareOcclusionQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_isStillOutstanding_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"isStillOutstanding_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_HardwareOcclusionQuery_isStillOutstanding_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CHardwareOcclusionQuery *pObjectX = (EarthView::World::Graphic::CHardwareOcclusionQuery*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Graphic::CHardwareOcclusionQuery::isStillOutstanding();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
		}
	}
}
