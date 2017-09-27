/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/defaultscenequeries.h"
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
			class JCDefaultIntersectionSceneQueryProxy : public EarthView::World::Graphic::CDefaultIntersectionSceneQuery
			{
			 private:
				EarthView::World::Core::ev_string m_queryResult_CMovableObject_CMovableObject_callback;
				EarthView::World::Core::ev_string m_queryResult_CMovableObject_WorldFragment_callback;
				EarthView::World::Core::ev_string m_getListenerPtr_void_callback;
				EarthView::World::Core::ev_string m_execute_void_callback;
				EarthView::World::Core::ev_string m_execute_CIntersectionSceneQueryListener_callback;
				EarthView::World::Core::ev_string m_getLastResults_void_callback;
				EarthView::World::Core::ev_string m_clearResults_void_callback;
				EarthView::World::Core::ev_string m_setQueryMask_ev_uint32_callback;
				EarthView::World::Core::ev_string m_getQueryMask_void_callback;
				EarthView::World::Core::ev_string m_setQueryTypeMask_ev_uint32_callback;
				EarthView::World::Core::ev_string m_getQueryTypeMask_void_callback;
				EarthView::World::Core::ev_string m_setWorldFragmentType_WorldFragmentType_callback;
				EarthView::World::Core::ev_string m_getWorldFragmentType_void_callback;
				EarthView::World::Core::ev_string m_getSupportedWorldFragmentTypes_void_callback;
			public:
				JCDefaultIntersectionSceneQueryProxy(EarthView::World::Core::CNameValuePairList *pList) : CDefaultIntersectionSceneQuery(pList)
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
				void register_queryResult_CMovableObject_CMovableObject_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_queryResult_CMovableObject_CMovableObject_callback = __method;
				}
				void register_queryResult_CMovableObject_WorldFragment_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_queryResult_CMovableObject_WorldFragment_callback = __method;
				}
				void register_getListenerPtr_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getListenerPtr_void_callback = __method;
				}
				void register_execute_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_execute_void_callback = __method;
				}
				void register_execute_CIntersectionSceneQueryListener_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_execute_CIntersectionSceneQueryListener_callback = __method;
				}
				void register_getLastResults_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getLastResults_void_callback = __method;
				}
				void register_clearResults_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_clearResults_void_callback = __method;
				}
				void register_setQueryMask_ev_uint32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setQueryMask_ev_uint32_callback = __method;
				}
				void register_getQueryMask_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getQueryMask_void_callback = __method;
				}
				void register_setQueryTypeMask_ev_uint32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setQueryTypeMask_ev_uint32_callback = __method;
				}
				void register_getQueryTypeMask_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getQueryTypeMask_void_callback = __method;
				}
				void register_setWorldFragmentType_WorldFragmentType_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setWorldFragmentType_WorldFragmentType_callback = __method;
				}
				void register_getWorldFragmentType_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getWorldFragmentType_void_callback = __method;
				}
				void register_getSupportedWorldFragmentTypes_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getSupportedWorldFragmentTypes_void_callback = __method;
				}
				virtual void execute(EarthView::World::Graphic::CIntersectionSceneQueryListener* listener)
				{
					if (this->_gRef != NULL && this->m_execute_CIntersectionSceneQueryListener_callback != "" && this->isCustomExtend())
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
						jlong listener_j = (jlong) listener;
						jmethodID __method = __gr->getMethod("execute_CIntersectionSceneQueryListener_callback");
						__env->CallVoidMethod(__obj, __method , listener_j);
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
						return this->CDefaultIntersectionSceneQuery::execute(listener);
					}
				}
				virtual ev_bool queryResult(EarthView::World::Graphic::CMovableObject* first, EarthView::World::Graphic::CMovableObject* second)
				{
					if (this->_gRef != NULL && this->m_queryResult_CMovableObject_CMovableObject_callback != "" && this->isCustomExtend())
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
						jlong first_j = (jlong) first;
						jlong second_j = (jlong) second;
						jmethodID __method = __gr->getMethod("queryResult_CMovableObject_CMovableObject_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , first_j, second_j);
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
						return this->CDefaultIntersectionSceneQuery::queryResult(first, second);
					}
				}
				virtual ev_bool queryResult(EarthView::World::Graphic::CMovableObject* movable, EarthView::World::Graphic::CSceneQuery::WorldFragment* fragment)
				{
					if (this->_gRef != NULL && this->m_queryResult_CMovableObject_WorldFragment_callback != "" && this->isCustomExtend())
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
						jlong movable_j = (jlong) movable;
						jlong fragment_j = (jlong) fragment;
						jmethodID __method = __gr->getMethod("queryResult_CMovableObject_WorldFragment_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , movable_j, fragment_j);
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
						return this->CDefaultIntersectionSceneQuery::queryResult(movable, fragment);
					}
				}
				virtual const EarthView::World::Graphic::CIntersectionSceneQuery::CIntersectionSceneQueryInternalListener* getListenerPtr()
				{
					if (this->_gRef != NULL && this->m_getListenerPtr_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getListenerPtr_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Graphic::CIntersectionSceneQuery::CIntersectionSceneQueryInternalListener *__values1 = (const EarthView::World::Graphic::CIntersectionSceneQuery::CIntersectionSceneQueryInternalListener*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CDefaultIntersectionSceneQuery::getListenerPtr();
					}
				}
				virtual EarthView::World::Graphic::IntersectionSceneQueryResult& getLastResults() const
				{
					if (this->_gRef != NULL && this->m_getLastResults_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getLastResults_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::IntersectionSceneQueryResult &__values1 = *(EarthView::World::Graphic::IntersectionSceneQueryResult*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CDefaultIntersectionSceneQuery::getLastResults();
					}
				}
				virtual void clearResults()
				{
					if (this->_gRef != NULL && this->m_clearResults_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("clearResults_void_callback");
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
						return this->CDefaultIntersectionSceneQuery::clearResults();
					}
				}
				virtual void setQueryMask(ev_uint32 mask)
				{
					if (this->_gRef != NULL && this->m_setQueryMask_ev_uint32_callback != "" && this->isCustomExtend())
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
						jlong mask_j = (jlong) mask;
						jmethodID __method = __gr->getMethod("setQueryMask_ev_uint32_callback");
						__env->CallVoidMethod(__obj, __method , mask_j);
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
						return this->CDefaultIntersectionSceneQuery::setQueryMask(mask);
					}
				}
				virtual ev_uint32 getQueryMask() const
				{
					if (this->_gRef != NULL && this->m_getQueryMask_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getQueryMask_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_uint32 __values1 = (ev_uint32) __values1_j;
						return __values1;
					}
					else
					{
						return this->CDefaultIntersectionSceneQuery::getQueryMask();
					}
				}
				virtual void setQueryTypeMask(ev_uint32 mask)
				{
					if (this->_gRef != NULL && this->m_setQueryTypeMask_ev_uint32_callback != "" && this->isCustomExtend())
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
						jlong mask_j = (jlong) mask;
						jmethodID __method = __gr->getMethod("setQueryTypeMask_ev_uint32_callback");
						__env->CallVoidMethod(__obj, __method , mask_j);
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
						return this->CDefaultIntersectionSceneQuery::setQueryTypeMask(mask);
					}
				}
				virtual ev_uint32 getQueryTypeMask() const
				{
					if (this->_gRef != NULL && this->m_getQueryTypeMask_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getQueryTypeMask_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_uint32 __values1 = (ev_uint32) __values1_j;
						return __values1;
					}
					else
					{
						return this->CDefaultIntersectionSceneQuery::getQueryTypeMask();
					}
				}
				virtual void setWorldFragmentType(EarthView::World::Graphic::CSceneQuery::WorldFragmentType wft)
				{
					if (this->_gRef != NULL && this->m_setWorldFragmentType_WorldFragmentType_callback != "" && this->isCustomExtend())
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
						jint wft_j = (jint) wft;
						jmethodID __method = __gr->getMethod("setWorldFragmentType_WorldFragmentType_callback");
						__env->CallVoidMethod(__obj, __method , wft_j);
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
						return this->CDefaultIntersectionSceneQuery::setWorldFragmentType(wft);
					}
				}
				virtual EarthView::World::Graphic::CSceneQuery::WorldFragmentType getWorldFragmentType() const
				{
					if (this->_gRef != NULL && this->m_getWorldFragmentType_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getWorldFragmentType_void_callback");
						jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CSceneQuery::WorldFragmentType __values1 = (EarthView::World::Graphic::CSceneQuery::WorldFragmentType) __values1_j;
						return __values1;
					}
					else
					{
						return this->CDefaultIntersectionSceneQuery::getWorldFragmentType();
					}
				}
				virtual const EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet* getSupportedWorldFragmentTypes() const
				{
					if (this->_gRef != NULL && this->m_getSupportedWorldFragmentTypes_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getSupportedWorldFragmentTypes_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet *__values1 = (const EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CDefaultIntersectionSceneQuery::getSupportedWorldFragmentTypes();
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCDefaultIntersectionSceneQueryProxy);
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultIntersectionSceneQuery_execute_1CIntersectionSceneQueryListener(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong listener_j)
			{
				EarthView::World::Graphic::CIntersectionSceneQueryListener *listener = (EarthView::World::Graphic::CIntersectionSceneQueryListener*) listener_j;
				EarthView::World::Graphic::CDefaultIntersectionSceneQuery *pObjectX = (EarthView::World::Graphic::CDefaultIntersectionSceneQuery*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDefaultIntersectionSceneQueryProxy))
				{
					pObjectX->EarthView::World::Graphic::CDefaultIntersectionSceneQuery::execute(listener);
				}
				else
				{
					pObjectX->execute(listener);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultIntersectionSceneQuery_register_1execute_1CIntersectionSceneQueryListener(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultIntersectionSceneQueryProxy *pObjectX = (JCDefaultIntersectionSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_execute_CIntersectionSceneQueryListener_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"execute_CIntersectionSceneQueryListener_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultIntersectionSceneQuery_execute_1CIntersectionSceneQueryListener_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong listener_j)
			{
				EarthView::World::Graphic::CIntersectionSceneQueryListener *listener = (EarthView::World::Graphic::CIntersectionSceneQueryListener*) listener_j;
				EarthView::World::Graphic::CDefaultIntersectionSceneQuery *pObjectX = (EarthView::World::Graphic::CDefaultIntersectionSceneQuery*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CDefaultIntersectionSceneQuery::execute(listener);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultIntersectionSceneQuery_register_1queryResult_1CMovableObject_1CMovableObject(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultIntersectionSceneQueryProxy *pObjectX = (JCDefaultIntersectionSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_queryResult_CMovableObject_CMovableObject_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"queryResult_CMovableObject_CMovableObject_callback", "(JJ)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultIntersectionSceneQuery_register_1queryResult_1CMovableObject_1WorldFragment(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultIntersectionSceneQueryProxy *pObjectX = (JCDefaultIntersectionSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_queryResult_CMovableObject_WorldFragment_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"queryResult_CMovableObject_WorldFragment_callback", "(JJ)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultIntersectionSceneQuery_register_1getListenerPtr_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultIntersectionSceneQueryProxy *pObjectX = (JCDefaultIntersectionSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getListenerPtr_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getListenerPtr_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultIntersectionSceneQuery_register_1execute_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultIntersectionSceneQueryProxy *pObjectX = (JCDefaultIntersectionSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_execute_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"execute_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultIntersectionSceneQuery_register_1getLastResults_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultIntersectionSceneQueryProxy *pObjectX = (JCDefaultIntersectionSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getLastResults_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getLastResults_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultIntersectionSceneQuery_register_1clearResults_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultIntersectionSceneQueryProxy *pObjectX = (JCDefaultIntersectionSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_clearResults_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"clearResults_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultIntersectionSceneQuery_register_1setQueryMask_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultIntersectionSceneQueryProxy *pObjectX = (JCDefaultIntersectionSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setQueryMask_ev_uint32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setQueryMask_ev_uint32_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultIntersectionSceneQuery_register_1getQueryMask_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultIntersectionSceneQueryProxy *pObjectX = (JCDefaultIntersectionSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getQueryMask_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getQueryMask_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultIntersectionSceneQuery_register_1setQueryTypeMask_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultIntersectionSceneQueryProxy *pObjectX = (JCDefaultIntersectionSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setQueryTypeMask_ev_uint32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setQueryTypeMask_ev_uint32_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultIntersectionSceneQuery_register_1getQueryTypeMask_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultIntersectionSceneQueryProxy *pObjectX = (JCDefaultIntersectionSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getQueryTypeMask_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getQueryTypeMask_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultIntersectionSceneQuery_register_1setWorldFragmentType_1WorldFragmentType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultIntersectionSceneQueryProxy *pObjectX = (JCDefaultIntersectionSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setWorldFragmentType_WorldFragmentType_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setWorldFragmentType_WorldFragmentType_callback", "(I)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultIntersectionSceneQuery_register_1getWorldFragmentType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultIntersectionSceneQueryProxy *pObjectX = (JCDefaultIntersectionSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getWorldFragmentType_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getWorldFragmentType_void_callback", "()I");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultIntersectionSceneQuery_register_1getSupportedWorldFragmentTypes_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultIntersectionSceneQueryProxy *pObjectX = (JCDefaultIntersectionSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getSupportedWorldFragmentTypes_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getSupportedWorldFragmentTypes_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			class JCDefaultRaySceneQueryProxy : public EarthView::World::Graphic::CDefaultRaySceneQuery
			{
			 private:
				EarthView::World::Core::ev_string m_queryResult_CMovableObject_Real_callback;
				EarthView::World::Core::ev_string m_queryResult_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2_callback;
				EarthView::World::Core::ev_string m_queryResult_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2_callback;
				EarthView::World::Core::ev_string m_queryResult_WorldFragment_Real_callback;
				EarthView::World::Core::ev_string m_getListenerPtr_void_callback;
				EarthView::World::Core::ev_string m_setRay_CRay_callback;
				EarthView::World::Core::ev_string m_getRay_void_callback;
				EarthView::World::Core::ev_string m_setSortByDistance_ev_bool_ev_uint16_callback;
				EarthView::World::Core::ev_string m_setSortByDistance_ev_bool_callback;
				EarthView::World::Core::ev_string m_getSortByDistance_void_callback;
				EarthView::World::Core::ev_string m_getMaxResults_void_callback;
				EarthView::World::Core::ev_string m_execute_void_callback;
				EarthView::World::Core::ev_string m_execute_CRaySceneQueryListener_callback;
				EarthView::World::Core::ev_string m_getLastResults_void_callback;
				EarthView::World::Core::ev_string m_clearResults_void_callback;
				EarthView::World::Core::ev_string m_setQueryMask_ev_uint32_callback;
				EarthView::World::Core::ev_string m_getQueryMask_void_callback;
				EarthView::World::Core::ev_string m_setQueryTypeMask_ev_uint32_callback;
				EarthView::World::Core::ev_string m_getQueryTypeMask_void_callback;
				EarthView::World::Core::ev_string m_setWorldFragmentType_WorldFragmentType_callback;
				EarthView::World::Core::ev_string m_getWorldFragmentType_void_callback;
				EarthView::World::Core::ev_string m_getSupportedWorldFragmentTypes_void_callback;
			public:
				JCDefaultRaySceneQueryProxy(EarthView::World::Core::CNameValuePairList *pList) : CDefaultRaySceneQuery(pList)
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
				void register_queryResult_CMovableObject_Real_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_queryResult_CMovableObject_Real_callback = __method;
				}
				void register_queryResult_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_queryResult_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2_callback = __method;
				}
				void register_queryResult_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_queryResult_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2_callback = __method;
				}
				void register_queryResult_WorldFragment_Real_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_queryResult_WorldFragment_Real_callback = __method;
				}
				void register_getListenerPtr_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getListenerPtr_void_callback = __method;
				}
				void register_setRay_CRay_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setRay_CRay_callback = __method;
				}
				void register_getRay_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getRay_void_callback = __method;
				}
				void register_setSortByDistance_ev_bool_ev_uint16_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setSortByDistance_ev_bool_ev_uint16_callback = __method;
				}
				void register_setSortByDistance_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setSortByDistance_ev_bool_callback = __method;
				}
				void register_getSortByDistance_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getSortByDistance_void_callback = __method;
				}
				void register_getMaxResults_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getMaxResults_void_callback = __method;
				}
				void register_execute_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_execute_void_callback = __method;
				}
				void register_execute_CRaySceneQueryListener_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_execute_CRaySceneQueryListener_callback = __method;
				}
				void register_getLastResults_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getLastResults_void_callback = __method;
				}
				void register_clearResults_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_clearResults_void_callback = __method;
				}
				void register_setQueryMask_ev_uint32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setQueryMask_ev_uint32_callback = __method;
				}
				void register_getQueryMask_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getQueryMask_void_callback = __method;
				}
				void register_setQueryTypeMask_ev_uint32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setQueryTypeMask_ev_uint32_callback = __method;
				}
				void register_getQueryTypeMask_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getQueryTypeMask_void_callback = __method;
				}
				void register_setWorldFragmentType_WorldFragmentType_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setWorldFragmentType_WorldFragmentType_callback = __method;
				}
				void register_getWorldFragmentType_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getWorldFragmentType_void_callback = __method;
				}
				void register_getSupportedWorldFragmentTypes_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getSupportedWorldFragmentTypes_void_callback = __method;
				}
				virtual void execute(EarthView::World::Graphic::CRaySceneQueryListener* listener)
				{
					if (this->_gRef != NULL && this->m_execute_CRaySceneQueryListener_callback != "" && this->isCustomExtend())
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
						jlong listener_j = (jlong) listener;
						jmethodID __method = __gr->getMethod("execute_CRaySceneQueryListener_callback");
						__env->CallVoidMethod(__obj, __method , listener_j);
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
						return this->CDefaultRaySceneQuery::execute(listener);
					}
				}
				virtual ev_bool queryResult(EarthView::World::Graphic::CMovableObject* obj, Real distance)
				{
					if (this->_gRef != NULL && this->m_queryResult_CMovableObject_Real_callback != "" && this->isCustomExtend())
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
						jdouble distance_j = (jdouble) distance;
						jmethodID __method = __gr->getMethod("queryResult_CMovableObject_Real_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , obj_j, distance_j);
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
						return this->CDefaultRaySceneQuery::queryResult(obj, distance);
					}
				}
				virtual ev_bool queryResult(EarthView::World::Graphic::CMovableObject* obj, Real distance, ev_int32 objIndex, ev_int32 submeshIndex, ev_int32 instanceIndex, ev_int32 segmentIndex, EarthView::World::Spatial::Math::CVector3& point, EarthView::World::Spatial::Math::CVector2& pixelpoint)
				{
					if (this->_gRef != NULL && this->m_queryResult_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2_callback != "" && this->isCustomExtend())
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
						jdouble distance_j = (jdouble) distance;
						jint objIndex_j = (jint) objIndex;
						jint submeshIndex_j = (jint) submeshIndex;
						jint instanceIndex_j = (jint) instanceIndex;
						jint segmentIndex_j = (jint) segmentIndex;
						jlong point_j = (jlong) &point;
						jlong pixelpoint_j = (jlong) &pixelpoint;
						jmethodID __method = __gr->getMethod("queryResult_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , obj_j, distance_j, objIndex_j, submeshIndex_j, instanceIndex_j, segmentIndex_j, point_j, pixelpoint_j);
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
						return this->CDefaultRaySceneQuery::queryResult(obj, distance, objIndex, submeshIndex, instanceIndex, segmentIndex, point, pixelpoint);
					}
				}
				virtual ev_bool queryResult(EarthView::World::Graphic::CMovableObject* obj, Real distance, ev_real32 e, ev_uint8 c, ev_uint16 i, ev_uint16 r, EarthView::World::Graphic::CColourValue& cv, EarthView::World::Spatial::Math::CVector3& point, EarthView::World::Spatial::Math::CVector2& pixelpoint)
				{
					if (this->_gRef != NULL && this->m_queryResult_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2_callback != "" && this->isCustomExtend())
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
						jdouble distance_j = (jdouble) distance;
						jfloat e_j = (jfloat) e;
						jshort c_j = (jshort) c;
						jint i_j = (jint) i;
						jint r_j = (jint) r;
						jlong cv_j = (jlong) &cv;
						jlong point_j = (jlong) &point;
						jlong pixelpoint_j = (jlong) &pixelpoint;
						jmethodID __method = __gr->getMethod("queryResult_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , obj_j, distance_j, e_j, c_j, i_j, r_j, cv_j, point_j, pixelpoint_j);
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
						return this->CDefaultRaySceneQuery::queryResult(obj, distance, e, c, i, r, cv, point, pixelpoint);
					}
				}
				virtual ev_bool queryResult(EarthView::World::Graphic::CSceneQuery::WorldFragment* fragment, Real distance)
				{
					if (this->_gRef != NULL && this->m_queryResult_WorldFragment_Real_callback != "" && this->isCustomExtend())
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
						jlong fragment_j = (jlong) fragment;
						jdouble distance_j = (jdouble) distance;
						jmethodID __method = __gr->getMethod("queryResult_WorldFragment_Real_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , fragment_j, distance_j);
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
						return this->CDefaultRaySceneQuery::queryResult(fragment, distance);
					}
				}
				virtual const EarthView::World::Graphic::CRaySceneQuery::CRaySceneQueryInternalListener* getListenerPtr()
				{
					if (this->_gRef != NULL && this->m_getListenerPtr_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getListenerPtr_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Graphic::CRaySceneQuery::CRaySceneQueryInternalListener *__values1 = (const EarthView::World::Graphic::CRaySceneQuery::CRaySceneQueryInternalListener*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CDefaultRaySceneQuery::getListenerPtr();
					}
				}
				virtual void setRay(const EarthView::World::Spatial::Math::CRay& ray)
				{
					if (this->_gRef != NULL && this->m_setRay_CRay_callback != "" && this->isCustomExtend())
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
						jlong ray_j = (jlong) &ray;
						jmethodID __method = __gr->getMethod("setRay_CRay_callback");
						__env->CallVoidMethod(__obj, __method , ray_j);
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
						return this->CDefaultRaySceneQuery::setRay(ray);
					}
				}
				virtual const EarthView::World::Spatial::Math::CRay& getRay() const
				{
					if (this->_gRef != NULL && this->m_getRay_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getRay_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Spatial::Math::CRay &__values1 = *(const EarthView::World::Spatial::Math::CRay*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CDefaultRaySceneQuery::getRay();
					}
				}
				virtual void setSortByDistance(ev_bool sort, ev_uint16 maxresults)
				{
					if (this->_gRef != NULL && this->m_setSortByDistance_ev_bool_ev_uint16_callback != "" && this->isCustomExtend())
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
						jboolean sort_j = (jboolean) sort;
						jint maxresults_j = (jint) maxresults;
						jmethodID __method = __gr->getMethod("setSortByDistance_ev_bool_ev_uint16_callback");
						__env->CallVoidMethod(__obj, __method , sort_j, maxresults_j);
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
						return this->CDefaultRaySceneQuery::setSortByDistance(sort, maxresults);
					}
				}
				virtual void setSortByDistance(ev_bool sort)
				{
					if (this->_gRef != NULL && this->m_setSortByDistance_ev_bool_callback != "" && this->isCustomExtend())
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
						jboolean sort_j = (jboolean) sort;
						jmethodID __method = __gr->getMethod("setSortByDistance_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , sort_j);
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
						return this->CDefaultRaySceneQuery::setSortByDistance(sort);
					}
				}
				virtual ev_bool getSortByDistance() const
				{
					if (this->_gRef != NULL && this->m_getSortByDistance_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getSortByDistance_void_callback");
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
						return this->CDefaultRaySceneQuery::getSortByDistance();
					}
				}
				virtual ev_uint16 getMaxResults() const
				{
					if (this->_gRef != NULL && this->m_getMaxResults_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getMaxResults_void_callback");
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
						return this->CDefaultRaySceneQuery::getMaxResults();
					}
				}
				virtual EarthView::World::Graphic::RaySceneQueryResult& getLastResults()
				{
					if (this->_gRef != NULL && this->m_getLastResults_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getLastResults_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::RaySceneQueryResult &__values1 = *(EarthView::World::Graphic::RaySceneQueryResult*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CDefaultRaySceneQuery::getLastResults();
					}
				}
				virtual void clearResults()
				{
					if (this->_gRef != NULL && this->m_clearResults_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("clearResults_void_callback");
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
						return this->CDefaultRaySceneQuery::clearResults();
					}
				}
				virtual void setQueryMask(ev_uint32 mask)
				{
					if (this->_gRef != NULL && this->m_setQueryMask_ev_uint32_callback != "" && this->isCustomExtend())
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
						jlong mask_j = (jlong) mask;
						jmethodID __method = __gr->getMethod("setQueryMask_ev_uint32_callback");
						__env->CallVoidMethod(__obj, __method , mask_j);
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
						return this->CDefaultRaySceneQuery::setQueryMask(mask);
					}
				}
				virtual ev_uint32 getQueryMask() const
				{
					if (this->_gRef != NULL && this->m_getQueryMask_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getQueryMask_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_uint32 __values1 = (ev_uint32) __values1_j;
						return __values1;
					}
					else
					{
						return this->CDefaultRaySceneQuery::getQueryMask();
					}
				}
				virtual void setQueryTypeMask(ev_uint32 mask)
				{
					if (this->_gRef != NULL && this->m_setQueryTypeMask_ev_uint32_callback != "" && this->isCustomExtend())
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
						jlong mask_j = (jlong) mask;
						jmethodID __method = __gr->getMethod("setQueryTypeMask_ev_uint32_callback");
						__env->CallVoidMethod(__obj, __method , mask_j);
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
						return this->CDefaultRaySceneQuery::setQueryTypeMask(mask);
					}
				}
				virtual ev_uint32 getQueryTypeMask() const
				{
					if (this->_gRef != NULL && this->m_getQueryTypeMask_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getQueryTypeMask_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_uint32 __values1 = (ev_uint32) __values1_j;
						return __values1;
					}
					else
					{
						return this->CDefaultRaySceneQuery::getQueryTypeMask();
					}
				}
				virtual void setWorldFragmentType(EarthView::World::Graphic::CSceneQuery::WorldFragmentType wft)
				{
					if (this->_gRef != NULL && this->m_setWorldFragmentType_WorldFragmentType_callback != "" && this->isCustomExtend())
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
						jint wft_j = (jint) wft;
						jmethodID __method = __gr->getMethod("setWorldFragmentType_WorldFragmentType_callback");
						__env->CallVoidMethod(__obj, __method , wft_j);
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
						return this->CDefaultRaySceneQuery::setWorldFragmentType(wft);
					}
				}
				virtual EarthView::World::Graphic::CSceneQuery::WorldFragmentType getWorldFragmentType() const
				{
					if (this->_gRef != NULL && this->m_getWorldFragmentType_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getWorldFragmentType_void_callback");
						jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CSceneQuery::WorldFragmentType __values1 = (EarthView::World::Graphic::CSceneQuery::WorldFragmentType) __values1_j;
						return __values1;
					}
					else
					{
						return this->CDefaultRaySceneQuery::getWorldFragmentType();
					}
				}
				virtual const EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet* getSupportedWorldFragmentTypes() const
				{
					if (this->_gRef != NULL && this->m_getSupportedWorldFragmentTypes_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getSupportedWorldFragmentTypes_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet *__values1 = (const EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CDefaultRaySceneQuery::getSupportedWorldFragmentTypes();
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCDefaultRaySceneQueryProxy);
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultRaySceneQuery_execute_1CRaySceneQueryListener(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong listener_j)
			{
				EarthView::World::Graphic::CRaySceneQueryListener *listener = (EarthView::World::Graphic::CRaySceneQueryListener*) listener_j;
				EarthView::World::Graphic::CDefaultRaySceneQuery *pObjectX = (EarthView::World::Graphic::CDefaultRaySceneQuery*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDefaultRaySceneQueryProxy))
				{
					pObjectX->EarthView::World::Graphic::CDefaultRaySceneQuery::execute(listener);
				}
				else
				{
					pObjectX->execute(listener);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultRaySceneQuery_register_1execute_1CRaySceneQueryListener(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultRaySceneQueryProxy *pObjectX = (JCDefaultRaySceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_execute_CRaySceneQueryListener_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"execute_CRaySceneQueryListener_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultRaySceneQuery_execute_1CRaySceneQueryListener_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong listener_j)
			{
				EarthView::World::Graphic::CRaySceneQueryListener *listener = (EarthView::World::Graphic::CRaySceneQueryListener*) listener_j;
				EarthView::World::Graphic::CDefaultRaySceneQuery *pObjectX = (EarthView::World::Graphic::CDefaultRaySceneQuery*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CDefaultRaySceneQuery::execute(listener);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultRaySceneQuery_register_1queryResult_1CMovableObject_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultRaySceneQueryProxy *pObjectX = (JCDefaultRaySceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_queryResult_CMovableObject_Real_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"queryResult_CMovableObject_Real_callback", "(JD)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultRaySceneQuery_register_1queryResult_1CMovableObject_1Real_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32_1CVector3_1CVector2(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultRaySceneQueryProxy *pObjectX = (JCDefaultRaySceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_queryResult_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"queryResult_CMovableObject_Real_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_CVector2_callback", "(JDIIIIJJ)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultRaySceneQuery_register_1queryResult_1CMovableObject_1Real_1ev_1real32_1ev_1uint8_1ev_1uint16_1ev_1uint16_1CColourValue_1CVector3_1CVector2(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultRaySceneQueryProxy *pObjectX = (JCDefaultRaySceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_queryResult_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"queryResult_CMovableObject_Real_ev_real32_ev_uint8_ev_uint16_ev_uint16_CColourValue_CVector3_CVector2_callback", "(JDFSIIJJJ)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultRaySceneQuery_register_1queryResult_1WorldFragment_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultRaySceneQueryProxy *pObjectX = (JCDefaultRaySceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_queryResult_WorldFragment_Real_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"queryResult_WorldFragment_Real_callback", "(JD)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultRaySceneQuery_register_1getListenerPtr_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultRaySceneQueryProxy *pObjectX = (JCDefaultRaySceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getListenerPtr_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getListenerPtr_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultRaySceneQuery_register_1setRay_1CRay(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultRaySceneQueryProxy *pObjectX = (JCDefaultRaySceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setRay_CRay_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setRay_CRay_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultRaySceneQuery_register_1getRay_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultRaySceneQueryProxy *pObjectX = (JCDefaultRaySceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getRay_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getRay_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultRaySceneQuery_register_1setSortByDistance_1ev_1bool_1ev_1uint16(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultRaySceneQueryProxy *pObjectX = (JCDefaultRaySceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setSortByDistance_ev_bool_ev_uint16_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setSortByDistance_ev_bool_ev_uint16_callback", "(ZI)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultRaySceneQuery_register_1setSortByDistance_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultRaySceneQueryProxy *pObjectX = (JCDefaultRaySceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setSortByDistance_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setSortByDistance_ev_bool_callback", "(Z)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultRaySceneQuery_register_1getSortByDistance_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultRaySceneQueryProxy *pObjectX = (JCDefaultRaySceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getSortByDistance_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getSortByDistance_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultRaySceneQuery_register_1getMaxResults_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultRaySceneQueryProxy *pObjectX = (JCDefaultRaySceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getMaxResults_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getMaxResults_void_callback", "()I");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultRaySceneQuery_register_1execute_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultRaySceneQueryProxy *pObjectX = (JCDefaultRaySceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_execute_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"execute_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultRaySceneQuery_register_1getLastResults_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultRaySceneQueryProxy *pObjectX = (JCDefaultRaySceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getLastResults_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getLastResults_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultRaySceneQuery_register_1clearResults_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultRaySceneQueryProxy *pObjectX = (JCDefaultRaySceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_clearResults_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"clearResults_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultRaySceneQuery_register_1setQueryMask_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultRaySceneQueryProxy *pObjectX = (JCDefaultRaySceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setQueryMask_ev_uint32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setQueryMask_ev_uint32_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultRaySceneQuery_register_1getQueryMask_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultRaySceneQueryProxy *pObjectX = (JCDefaultRaySceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getQueryMask_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getQueryMask_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultRaySceneQuery_register_1setQueryTypeMask_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultRaySceneQueryProxy *pObjectX = (JCDefaultRaySceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setQueryTypeMask_ev_uint32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setQueryTypeMask_ev_uint32_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultRaySceneQuery_register_1getQueryTypeMask_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultRaySceneQueryProxy *pObjectX = (JCDefaultRaySceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getQueryTypeMask_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getQueryTypeMask_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultRaySceneQuery_register_1setWorldFragmentType_1WorldFragmentType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultRaySceneQueryProxy *pObjectX = (JCDefaultRaySceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setWorldFragmentType_WorldFragmentType_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setWorldFragmentType_WorldFragmentType_callback", "(I)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultRaySceneQuery_register_1getWorldFragmentType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultRaySceneQueryProxy *pObjectX = (JCDefaultRaySceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getWorldFragmentType_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getWorldFragmentType_void_callback", "()I");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultRaySceneQuery_register_1getSupportedWorldFragmentTypes_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultRaySceneQueryProxy *pObjectX = (JCDefaultRaySceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getSupportedWorldFragmentTypes_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getSupportedWorldFragmentTypes_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			class JCDefaultSphereSceneQueryProxy : public EarthView::World::Graphic::CDefaultSphereSceneQuery
			{
			 private:
				EarthView::World::Core::ev_string m_execute_void_callback;
				EarthView::World::Core::ev_string m_execute_CSceneQueryListener_callback;
				EarthView::World::Core::ev_string m_getLastResults_void_callback;
				EarthView::World::Core::ev_string m_clearResults_void_callback;
				EarthView::World::Core::ev_string m_queryResult_CMovableObject_callback;
				EarthView::World::Core::ev_string m_queryResult_CMovableObject_IntVector_callback;
				EarthView::World::Core::ev_string m_queryResult_WorldFragment_callback;
				EarthView::World::Core::ev_string m_setQueryMask_ev_uint32_callback;
				EarthView::World::Core::ev_string m_getQueryMask_void_callback;
				EarthView::World::Core::ev_string m_setQueryTypeMask_ev_uint32_callback;
				EarthView::World::Core::ev_string m_getQueryTypeMask_void_callback;
				EarthView::World::Core::ev_string m_setWorldFragmentType_WorldFragmentType_callback;
				EarthView::World::Core::ev_string m_getWorldFragmentType_void_callback;
				EarthView::World::Core::ev_string m_getSupportedWorldFragmentTypes_void_callback;
			public:
				JCDefaultSphereSceneQueryProxy(EarthView::World::Core::CNameValuePairList *pList) : CDefaultSphereSceneQuery(pList)
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
				void register_execute_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_execute_void_callback = __method;
				}
				void register_execute_CSceneQueryListener_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_execute_CSceneQueryListener_callback = __method;
				}
				void register_getLastResults_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getLastResults_void_callback = __method;
				}
				void register_clearResults_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_clearResults_void_callback = __method;
				}
				void register_queryResult_CMovableObject_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_queryResult_CMovableObject_callback = __method;
				}
				void register_queryResult_CMovableObject_IntVector_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_queryResult_CMovableObject_IntVector_callback = __method;
				}
				void register_queryResult_WorldFragment_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_queryResult_WorldFragment_callback = __method;
				}
				void register_setQueryMask_ev_uint32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setQueryMask_ev_uint32_callback = __method;
				}
				void register_getQueryMask_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getQueryMask_void_callback = __method;
				}
				void register_setQueryTypeMask_ev_uint32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setQueryTypeMask_ev_uint32_callback = __method;
				}
				void register_getQueryTypeMask_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getQueryTypeMask_void_callback = __method;
				}
				void register_setWorldFragmentType_WorldFragmentType_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setWorldFragmentType_WorldFragmentType_callback = __method;
				}
				void register_getWorldFragmentType_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getWorldFragmentType_void_callback = __method;
				}
				void register_getSupportedWorldFragmentTypes_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getSupportedWorldFragmentTypes_void_callback = __method;
				}
				virtual void execute(EarthView::World::Graphic::CSceneQueryListener* listener)
				{
					if (this->_gRef != NULL && this->m_execute_CSceneQueryListener_callback != "" && this->isCustomExtend())
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
						jlong listener_j = (jlong) listener;
						jmethodID __method = __gr->getMethod("execute_CSceneQueryListener_callback");
						__env->CallVoidMethod(__obj, __method , listener_j);
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
						return this->CDefaultSphereSceneQuery::execute(listener);
					}
				}
				virtual EarthView::World::Graphic::SceneQueryResult& getLastResults() const
				{
					if (this->_gRef != NULL && this->m_getLastResults_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getLastResults_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::SceneQueryResult &__values1 = *(EarthView::World::Graphic::SceneQueryResult*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CDefaultSphereSceneQuery::getLastResults();
					}
				}
				virtual void clearResults()
				{
					if (this->_gRef != NULL && this->m_clearResults_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("clearResults_void_callback");
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
						return this->CDefaultSphereSceneQuery::clearResults();
					}
				}
				virtual ev_bool queryResult(EarthView::World::Graphic::CMovableObject* first)
				{
					if (this->_gRef != NULL && this->m_queryResult_CMovableObject_callback != "" && this->isCustomExtend())
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
						jlong first_j = (jlong) first;
						jmethodID __method = __gr->getMethod("queryResult_CMovableObject_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , first_j);
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
						return this->CDefaultSphereSceneQuery::queryResult(first);
					}
				}
				virtual ev_bool queryResult(EarthView::World::Graphic::CMovableObject* first, EarthView::World::Core::IntVector& indexVec)
				{
					if (this->_gRef != NULL && this->m_queryResult_CMovableObject_IntVector_callback != "" && this->isCustomExtend())
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
						jlong first_j = (jlong) first;
						jlong indexVec_j = (jlong) &indexVec;
						jmethodID __method = __gr->getMethod("queryResult_CMovableObject_IntVector_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , first_j, indexVec_j);
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
						return this->CDefaultSphereSceneQuery::queryResult(first, indexVec);
					}
				}
				virtual ev_bool queryResult(EarthView::World::Graphic::CSceneQuery::WorldFragment* fragment)
				{
					if (this->_gRef != NULL && this->m_queryResult_WorldFragment_callback != "" && this->isCustomExtend())
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
						jlong fragment_j = (jlong) fragment;
						jmethodID __method = __gr->getMethod("queryResult_WorldFragment_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , fragment_j);
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
						return this->CDefaultSphereSceneQuery::queryResult(fragment);
					}
				}
				virtual void setQueryMask(ev_uint32 mask)
				{
					if (this->_gRef != NULL && this->m_setQueryMask_ev_uint32_callback != "" && this->isCustomExtend())
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
						jlong mask_j = (jlong) mask;
						jmethodID __method = __gr->getMethod("setQueryMask_ev_uint32_callback");
						__env->CallVoidMethod(__obj, __method , mask_j);
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
						return this->CDefaultSphereSceneQuery::setQueryMask(mask);
					}
				}
				virtual ev_uint32 getQueryMask() const
				{
					if (this->_gRef != NULL && this->m_getQueryMask_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getQueryMask_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_uint32 __values1 = (ev_uint32) __values1_j;
						return __values1;
					}
					else
					{
						return this->CDefaultSphereSceneQuery::getQueryMask();
					}
				}
				virtual void setQueryTypeMask(ev_uint32 mask)
				{
					if (this->_gRef != NULL && this->m_setQueryTypeMask_ev_uint32_callback != "" && this->isCustomExtend())
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
						jlong mask_j = (jlong) mask;
						jmethodID __method = __gr->getMethod("setQueryTypeMask_ev_uint32_callback");
						__env->CallVoidMethod(__obj, __method , mask_j);
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
						return this->CDefaultSphereSceneQuery::setQueryTypeMask(mask);
					}
				}
				virtual ev_uint32 getQueryTypeMask() const
				{
					if (this->_gRef != NULL && this->m_getQueryTypeMask_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getQueryTypeMask_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_uint32 __values1 = (ev_uint32) __values1_j;
						return __values1;
					}
					else
					{
						return this->CDefaultSphereSceneQuery::getQueryTypeMask();
					}
				}
				virtual void setWorldFragmentType(EarthView::World::Graphic::CSceneQuery::WorldFragmentType wft)
				{
					if (this->_gRef != NULL && this->m_setWorldFragmentType_WorldFragmentType_callback != "" && this->isCustomExtend())
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
						jint wft_j = (jint) wft;
						jmethodID __method = __gr->getMethod("setWorldFragmentType_WorldFragmentType_callback");
						__env->CallVoidMethod(__obj, __method , wft_j);
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
						return this->CDefaultSphereSceneQuery::setWorldFragmentType(wft);
					}
				}
				virtual EarthView::World::Graphic::CSceneQuery::WorldFragmentType getWorldFragmentType() const
				{
					if (this->_gRef != NULL && this->m_getWorldFragmentType_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getWorldFragmentType_void_callback");
						jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CSceneQuery::WorldFragmentType __values1 = (EarthView::World::Graphic::CSceneQuery::WorldFragmentType) __values1_j;
						return __values1;
					}
					else
					{
						return this->CDefaultSphereSceneQuery::getWorldFragmentType();
					}
				}
				virtual const EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet* getSupportedWorldFragmentTypes() const
				{
					if (this->_gRef != NULL && this->m_getSupportedWorldFragmentTypes_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getSupportedWorldFragmentTypes_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet *__values1 = (const EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CDefaultSphereSceneQuery::getSupportedWorldFragmentTypes();
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCDefaultSphereSceneQueryProxy);
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultSphereSceneQuery_execute_1CSceneQueryListener(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong listener_j)
			{
				EarthView::World::Graphic::CSceneQueryListener *listener = (EarthView::World::Graphic::CSceneQueryListener*) listener_j;
				EarthView::World::Graphic::CDefaultSphereSceneQuery *pObjectX = (EarthView::World::Graphic::CDefaultSphereSceneQuery*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDefaultSphereSceneQueryProxy))
				{
					pObjectX->EarthView::World::Graphic::CDefaultSphereSceneQuery::execute(listener);
				}
				else
				{
					pObjectX->execute(listener);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultSphereSceneQuery_register_1execute_1CSceneQueryListener(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultSphereSceneQueryProxy *pObjectX = (JCDefaultSphereSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_execute_CSceneQueryListener_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"execute_CSceneQueryListener_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultSphereSceneQuery_execute_1CSceneQueryListener_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong listener_j)
			{
				EarthView::World::Graphic::CSceneQueryListener *listener = (EarthView::World::Graphic::CSceneQueryListener*) listener_j;
				EarthView::World::Graphic::CDefaultSphereSceneQuery *pObjectX = (EarthView::World::Graphic::CDefaultSphereSceneQuery*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CDefaultSphereSceneQuery::execute(listener);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultSphereSceneQuery_register_1execute_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultSphereSceneQueryProxy *pObjectX = (JCDefaultSphereSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_execute_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"execute_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultSphereSceneQuery_register_1getLastResults_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultSphereSceneQueryProxy *pObjectX = (JCDefaultSphereSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getLastResults_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getLastResults_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultSphereSceneQuery_register_1clearResults_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultSphereSceneQueryProxy *pObjectX = (JCDefaultSphereSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_clearResults_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"clearResults_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultSphereSceneQuery_register_1queryResult_1CMovableObject(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultSphereSceneQueryProxy *pObjectX = (JCDefaultSphereSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_queryResult_CMovableObject_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"queryResult_CMovableObject_callback", "(J)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultSphereSceneQuery_register_1queryResult_1CMovableObject_1IntVector(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultSphereSceneQueryProxy *pObjectX = (JCDefaultSphereSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_queryResult_CMovableObject_IntVector_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"queryResult_CMovableObject_IntVector_callback", "(JJ)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultSphereSceneQuery_register_1queryResult_1WorldFragment(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultSphereSceneQueryProxy *pObjectX = (JCDefaultSphereSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_queryResult_WorldFragment_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"queryResult_WorldFragment_callback", "(J)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultSphereSceneQuery_register_1setQueryMask_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultSphereSceneQueryProxy *pObjectX = (JCDefaultSphereSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setQueryMask_ev_uint32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setQueryMask_ev_uint32_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultSphereSceneQuery_register_1getQueryMask_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultSphereSceneQueryProxy *pObjectX = (JCDefaultSphereSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getQueryMask_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getQueryMask_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultSphereSceneQuery_register_1setQueryTypeMask_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultSphereSceneQueryProxy *pObjectX = (JCDefaultSphereSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setQueryTypeMask_ev_uint32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setQueryTypeMask_ev_uint32_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultSphereSceneQuery_register_1getQueryTypeMask_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultSphereSceneQueryProxy *pObjectX = (JCDefaultSphereSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getQueryTypeMask_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getQueryTypeMask_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultSphereSceneQuery_register_1setWorldFragmentType_1WorldFragmentType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultSphereSceneQueryProxy *pObjectX = (JCDefaultSphereSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setWorldFragmentType_WorldFragmentType_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setWorldFragmentType_WorldFragmentType_callback", "(I)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultSphereSceneQuery_register_1getWorldFragmentType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultSphereSceneQueryProxy *pObjectX = (JCDefaultSphereSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getWorldFragmentType_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getWorldFragmentType_void_callback", "()I");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultSphereSceneQuery_register_1getSupportedWorldFragmentTypes_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultSphereSceneQueryProxy *pObjectX = (JCDefaultSphereSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getSupportedWorldFragmentTypes_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getSupportedWorldFragmentTypes_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			class JCDefaultPlaneBoundedVolumeListSceneQueryProxy : public EarthView::World::Graphic::CDefaultPlaneBoundedVolumeListSceneQuery
			{
			 private:
				EarthView::World::Core::ev_string m_execute_void_callback;
				EarthView::World::Core::ev_string m_execute_CSceneQueryListener_callback;
				EarthView::World::Core::ev_string m_getLastResults_void_callback;
				EarthView::World::Core::ev_string m_clearResults_void_callback;
				EarthView::World::Core::ev_string m_queryResult_CMovableObject_callback;
				EarthView::World::Core::ev_string m_queryResult_CMovableObject_IntVector_callback;
				EarthView::World::Core::ev_string m_queryResult_WorldFragment_callback;
				EarthView::World::Core::ev_string m_setQueryMask_ev_uint32_callback;
				EarthView::World::Core::ev_string m_getQueryMask_void_callback;
				EarthView::World::Core::ev_string m_setQueryTypeMask_ev_uint32_callback;
				EarthView::World::Core::ev_string m_getQueryTypeMask_void_callback;
				EarthView::World::Core::ev_string m_setWorldFragmentType_WorldFragmentType_callback;
				EarthView::World::Core::ev_string m_getWorldFragmentType_void_callback;
				EarthView::World::Core::ev_string m_getSupportedWorldFragmentTypes_void_callback;
			public:
				JCDefaultPlaneBoundedVolumeListSceneQueryProxy(EarthView::World::Core::CNameValuePairList *pList) : CDefaultPlaneBoundedVolumeListSceneQuery(pList)
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
				void register_execute_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_execute_void_callback = __method;
				}
				void register_execute_CSceneQueryListener_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_execute_CSceneQueryListener_callback = __method;
				}
				void register_getLastResults_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getLastResults_void_callback = __method;
				}
				void register_clearResults_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_clearResults_void_callback = __method;
				}
				void register_queryResult_CMovableObject_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_queryResult_CMovableObject_callback = __method;
				}
				void register_queryResult_CMovableObject_IntVector_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_queryResult_CMovableObject_IntVector_callback = __method;
				}
				void register_queryResult_WorldFragment_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_queryResult_WorldFragment_callback = __method;
				}
				void register_setQueryMask_ev_uint32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setQueryMask_ev_uint32_callback = __method;
				}
				void register_getQueryMask_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getQueryMask_void_callback = __method;
				}
				void register_setQueryTypeMask_ev_uint32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setQueryTypeMask_ev_uint32_callback = __method;
				}
				void register_getQueryTypeMask_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getQueryTypeMask_void_callback = __method;
				}
				void register_setWorldFragmentType_WorldFragmentType_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setWorldFragmentType_WorldFragmentType_callback = __method;
				}
				void register_getWorldFragmentType_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getWorldFragmentType_void_callback = __method;
				}
				void register_getSupportedWorldFragmentTypes_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getSupportedWorldFragmentTypes_void_callback = __method;
				}
				virtual void execute(EarthView::World::Graphic::CSceneQueryListener* listener)
				{
					if (this->_gRef != NULL && this->m_execute_CSceneQueryListener_callback != "" && this->isCustomExtend())
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
						jlong listener_j = (jlong) listener;
						jmethodID __method = __gr->getMethod("execute_CSceneQueryListener_callback");
						__env->CallVoidMethod(__obj, __method , listener_j);
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
						return this->CDefaultPlaneBoundedVolumeListSceneQuery::execute(listener);
					}
				}
				virtual EarthView::World::Graphic::SceneQueryResult& getLastResults() const
				{
					if (this->_gRef != NULL && this->m_getLastResults_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getLastResults_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::SceneQueryResult &__values1 = *(EarthView::World::Graphic::SceneQueryResult*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CDefaultPlaneBoundedVolumeListSceneQuery::getLastResults();
					}
				}
				virtual void clearResults()
				{
					if (this->_gRef != NULL && this->m_clearResults_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("clearResults_void_callback");
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
						return this->CDefaultPlaneBoundedVolumeListSceneQuery::clearResults();
					}
				}
				virtual ev_bool queryResult(EarthView::World::Graphic::CMovableObject* first)
				{
					if (this->_gRef != NULL && this->m_queryResult_CMovableObject_callback != "" && this->isCustomExtend())
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
						jlong first_j = (jlong) first;
						jmethodID __method = __gr->getMethod("queryResult_CMovableObject_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , first_j);
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
						return this->CDefaultPlaneBoundedVolumeListSceneQuery::queryResult(first);
					}
				}
				virtual ev_bool queryResult(EarthView::World::Graphic::CMovableObject* first, EarthView::World::Core::IntVector& indexVec)
				{
					if (this->_gRef != NULL && this->m_queryResult_CMovableObject_IntVector_callback != "" && this->isCustomExtend())
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
						jlong first_j = (jlong) first;
						jlong indexVec_j = (jlong) &indexVec;
						jmethodID __method = __gr->getMethod("queryResult_CMovableObject_IntVector_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , first_j, indexVec_j);
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
						return this->CDefaultPlaneBoundedVolumeListSceneQuery::queryResult(first, indexVec);
					}
				}
				virtual ev_bool queryResult(EarthView::World::Graphic::CSceneQuery::WorldFragment* fragment)
				{
					if (this->_gRef != NULL && this->m_queryResult_WorldFragment_callback != "" && this->isCustomExtend())
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
						jlong fragment_j = (jlong) fragment;
						jmethodID __method = __gr->getMethod("queryResult_WorldFragment_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , fragment_j);
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
						return this->CDefaultPlaneBoundedVolumeListSceneQuery::queryResult(fragment);
					}
				}
				virtual void setQueryMask(ev_uint32 mask)
				{
					if (this->_gRef != NULL && this->m_setQueryMask_ev_uint32_callback != "" && this->isCustomExtend())
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
						jlong mask_j = (jlong) mask;
						jmethodID __method = __gr->getMethod("setQueryMask_ev_uint32_callback");
						__env->CallVoidMethod(__obj, __method , mask_j);
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
						return this->CDefaultPlaneBoundedVolumeListSceneQuery::setQueryMask(mask);
					}
				}
				virtual ev_uint32 getQueryMask() const
				{
					if (this->_gRef != NULL && this->m_getQueryMask_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getQueryMask_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_uint32 __values1 = (ev_uint32) __values1_j;
						return __values1;
					}
					else
					{
						return this->CDefaultPlaneBoundedVolumeListSceneQuery::getQueryMask();
					}
				}
				virtual void setQueryTypeMask(ev_uint32 mask)
				{
					if (this->_gRef != NULL && this->m_setQueryTypeMask_ev_uint32_callback != "" && this->isCustomExtend())
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
						jlong mask_j = (jlong) mask;
						jmethodID __method = __gr->getMethod("setQueryTypeMask_ev_uint32_callback");
						__env->CallVoidMethod(__obj, __method , mask_j);
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
						return this->CDefaultPlaneBoundedVolumeListSceneQuery::setQueryTypeMask(mask);
					}
				}
				virtual ev_uint32 getQueryTypeMask() const
				{
					if (this->_gRef != NULL && this->m_getQueryTypeMask_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getQueryTypeMask_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_uint32 __values1 = (ev_uint32) __values1_j;
						return __values1;
					}
					else
					{
						return this->CDefaultPlaneBoundedVolumeListSceneQuery::getQueryTypeMask();
					}
				}
				virtual void setWorldFragmentType(EarthView::World::Graphic::CSceneQuery::WorldFragmentType wft)
				{
					if (this->_gRef != NULL && this->m_setWorldFragmentType_WorldFragmentType_callback != "" && this->isCustomExtend())
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
						jint wft_j = (jint) wft;
						jmethodID __method = __gr->getMethod("setWorldFragmentType_WorldFragmentType_callback");
						__env->CallVoidMethod(__obj, __method , wft_j);
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
						return this->CDefaultPlaneBoundedVolumeListSceneQuery::setWorldFragmentType(wft);
					}
				}
				virtual EarthView::World::Graphic::CSceneQuery::WorldFragmentType getWorldFragmentType() const
				{
					if (this->_gRef != NULL && this->m_getWorldFragmentType_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getWorldFragmentType_void_callback");
						jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CSceneQuery::WorldFragmentType __values1 = (EarthView::World::Graphic::CSceneQuery::WorldFragmentType) __values1_j;
						return __values1;
					}
					else
					{
						return this->CDefaultPlaneBoundedVolumeListSceneQuery::getWorldFragmentType();
					}
				}
				virtual const EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet* getSupportedWorldFragmentTypes() const
				{
					if (this->_gRef != NULL && this->m_getSupportedWorldFragmentTypes_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getSupportedWorldFragmentTypes_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet *__values1 = (const EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CDefaultPlaneBoundedVolumeListSceneQuery::getSupportedWorldFragmentTypes();
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCDefaultPlaneBoundedVolumeListSceneQueryProxy);
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultPlaneBoundedVolumeListSceneQuery_execute_1CSceneQueryListener(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong listener_j)
			{
				EarthView::World::Graphic::CSceneQueryListener *listener = (EarthView::World::Graphic::CSceneQueryListener*) listener_j;
				EarthView::World::Graphic::CDefaultPlaneBoundedVolumeListSceneQuery *pObjectX = (EarthView::World::Graphic::CDefaultPlaneBoundedVolumeListSceneQuery*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDefaultPlaneBoundedVolumeListSceneQueryProxy))
				{
					pObjectX->EarthView::World::Graphic::CDefaultPlaneBoundedVolumeListSceneQuery::execute(listener);
				}
				else
				{
					pObjectX->execute(listener);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultPlaneBoundedVolumeListSceneQuery_register_1execute_1CSceneQueryListener(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultPlaneBoundedVolumeListSceneQueryProxy *pObjectX = (JCDefaultPlaneBoundedVolumeListSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_execute_CSceneQueryListener_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"execute_CSceneQueryListener_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultPlaneBoundedVolumeListSceneQuery_execute_1CSceneQueryListener_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong listener_j)
			{
				EarthView::World::Graphic::CSceneQueryListener *listener = (EarthView::World::Graphic::CSceneQueryListener*) listener_j;
				EarthView::World::Graphic::CDefaultPlaneBoundedVolumeListSceneQuery *pObjectX = (EarthView::World::Graphic::CDefaultPlaneBoundedVolumeListSceneQuery*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CDefaultPlaneBoundedVolumeListSceneQuery::execute(listener);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultPlaneBoundedVolumeListSceneQuery_register_1execute_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultPlaneBoundedVolumeListSceneQueryProxy *pObjectX = (JCDefaultPlaneBoundedVolumeListSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_execute_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"execute_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultPlaneBoundedVolumeListSceneQuery_register_1getLastResults_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultPlaneBoundedVolumeListSceneQueryProxy *pObjectX = (JCDefaultPlaneBoundedVolumeListSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getLastResults_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getLastResults_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultPlaneBoundedVolumeListSceneQuery_register_1clearResults_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultPlaneBoundedVolumeListSceneQueryProxy *pObjectX = (JCDefaultPlaneBoundedVolumeListSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_clearResults_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"clearResults_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultPlaneBoundedVolumeListSceneQuery_register_1queryResult_1CMovableObject(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultPlaneBoundedVolumeListSceneQueryProxy *pObjectX = (JCDefaultPlaneBoundedVolumeListSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_queryResult_CMovableObject_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"queryResult_CMovableObject_callback", "(J)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultPlaneBoundedVolumeListSceneQuery_register_1queryResult_1CMovableObject_1IntVector(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultPlaneBoundedVolumeListSceneQueryProxy *pObjectX = (JCDefaultPlaneBoundedVolumeListSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_queryResult_CMovableObject_IntVector_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"queryResult_CMovableObject_IntVector_callback", "(JJ)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultPlaneBoundedVolumeListSceneQuery_register_1queryResult_1WorldFragment(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultPlaneBoundedVolumeListSceneQueryProxy *pObjectX = (JCDefaultPlaneBoundedVolumeListSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_queryResult_WorldFragment_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"queryResult_WorldFragment_callback", "(J)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultPlaneBoundedVolumeListSceneQuery_register_1setQueryMask_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultPlaneBoundedVolumeListSceneQueryProxy *pObjectX = (JCDefaultPlaneBoundedVolumeListSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setQueryMask_ev_uint32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setQueryMask_ev_uint32_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultPlaneBoundedVolumeListSceneQuery_register_1getQueryMask_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultPlaneBoundedVolumeListSceneQueryProxy *pObjectX = (JCDefaultPlaneBoundedVolumeListSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getQueryMask_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getQueryMask_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultPlaneBoundedVolumeListSceneQuery_register_1setQueryTypeMask_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultPlaneBoundedVolumeListSceneQueryProxy *pObjectX = (JCDefaultPlaneBoundedVolumeListSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setQueryTypeMask_ev_uint32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setQueryTypeMask_ev_uint32_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultPlaneBoundedVolumeListSceneQuery_register_1getQueryTypeMask_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultPlaneBoundedVolumeListSceneQueryProxy *pObjectX = (JCDefaultPlaneBoundedVolumeListSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getQueryTypeMask_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getQueryTypeMask_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultPlaneBoundedVolumeListSceneQuery_register_1setWorldFragmentType_1WorldFragmentType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultPlaneBoundedVolumeListSceneQueryProxy *pObjectX = (JCDefaultPlaneBoundedVolumeListSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setWorldFragmentType_WorldFragmentType_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setWorldFragmentType_WorldFragmentType_callback", "(I)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultPlaneBoundedVolumeListSceneQuery_register_1getWorldFragmentType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultPlaneBoundedVolumeListSceneQueryProxy *pObjectX = (JCDefaultPlaneBoundedVolumeListSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getWorldFragmentType_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getWorldFragmentType_void_callback", "()I");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultPlaneBoundedVolumeListSceneQuery_register_1getSupportedWorldFragmentTypes_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultPlaneBoundedVolumeListSceneQueryProxy *pObjectX = (JCDefaultPlaneBoundedVolumeListSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getSupportedWorldFragmentTypes_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getSupportedWorldFragmentTypes_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			class JCDefaultAxisAlignedBoxSceneQueryProxy : public EarthView::World::Graphic::CDefaultAxisAlignedBoxSceneQuery
			{
			 private:
				EarthView::World::Core::ev_string m_execute_void_callback;
				EarthView::World::Core::ev_string m_execute_CSceneQueryListener_callback;
				EarthView::World::Core::ev_string m_getLastResults_void_callback;
				EarthView::World::Core::ev_string m_clearResults_void_callback;
				EarthView::World::Core::ev_string m_queryResult_CMovableObject_callback;
				EarthView::World::Core::ev_string m_queryResult_CMovableObject_IntVector_callback;
				EarthView::World::Core::ev_string m_queryResult_WorldFragment_callback;
				EarthView::World::Core::ev_string m_setQueryMask_ev_uint32_callback;
				EarthView::World::Core::ev_string m_getQueryMask_void_callback;
				EarthView::World::Core::ev_string m_setQueryTypeMask_ev_uint32_callback;
				EarthView::World::Core::ev_string m_getQueryTypeMask_void_callback;
				EarthView::World::Core::ev_string m_setWorldFragmentType_WorldFragmentType_callback;
				EarthView::World::Core::ev_string m_getWorldFragmentType_void_callback;
				EarthView::World::Core::ev_string m_getSupportedWorldFragmentTypes_void_callback;
			public:
				JCDefaultAxisAlignedBoxSceneQueryProxy(EarthView::World::Core::CNameValuePairList *pList) : CDefaultAxisAlignedBoxSceneQuery(pList)
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
				void register_execute_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_execute_void_callback = __method;
				}
				void register_execute_CSceneQueryListener_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_execute_CSceneQueryListener_callback = __method;
				}
				void register_getLastResults_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getLastResults_void_callback = __method;
				}
				void register_clearResults_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_clearResults_void_callback = __method;
				}
				void register_queryResult_CMovableObject_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_queryResult_CMovableObject_callback = __method;
				}
				void register_queryResult_CMovableObject_IntVector_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_queryResult_CMovableObject_IntVector_callback = __method;
				}
				void register_queryResult_WorldFragment_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_queryResult_WorldFragment_callback = __method;
				}
				void register_setQueryMask_ev_uint32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setQueryMask_ev_uint32_callback = __method;
				}
				void register_getQueryMask_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getQueryMask_void_callback = __method;
				}
				void register_setQueryTypeMask_ev_uint32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setQueryTypeMask_ev_uint32_callback = __method;
				}
				void register_getQueryTypeMask_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getQueryTypeMask_void_callback = __method;
				}
				void register_setWorldFragmentType_WorldFragmentType_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setWorldFragmentType_WorldFragmentType_callback = __method;
				}
				void register_getWorldFragmentType_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getWorldFragmentType_void_callback = __method;
				}
				void register_getSupportedWorldFragmentTypes_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getSupportedWorldFragmentTypes_void_callback = __method;
				}
				virtual void execute(EarthView::World::Graphic::CSceneQueryListener* listener)
				{
					if (this->_gRef != NULL && this->m_execute_CSceneQueryListener_callback != "" && this->isCustomExtend())
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
						jlong listener_j = (jlong) listener;
						jmethodID __method = __gr->getMethod("execute_CSceneQueryListener_callback");
						__env->CallVoidMethod(__obj, __method , listener_j);
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
						return this->CDefaultAxisAlignedBoxSceneQuery::execute(listener);
					}
				}
				virtual EarthView::World::Graphic::SceneQueryResult& getLastResults() const
				{
					if (this->_gRef != NULL && this->m_getLastResults_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getLastResults_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::SceneQueryResult &__values1 = *(EarthView::World::Graphic::SceneQueryResult*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CDefaultAxisAlignedBoxSceneQuery::getLastResults();
					}
				}
				virtual void clearResults()
				{
					if (this->_gRef != NULL && this->m_clearResults_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("clearResults_void_callback");
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
						return this->CDefaultAxisAlignedBoxSceneQuery::clearResults();
					}
				}
				virtual ev_bool queryResult(EarthView::World::Graphic::CMovableObject* first)
				{
					if (this->_gRef != NULL && this->m_queryResult_CMovableObject_callback != "" && this->isCustomExtend())
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
						jlong first_j = (jlong) first;
						jmethodID __method = __gr->getMethod("queryResult_CMovableObject_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , first_j);
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
						return this->CDefaultAxisAlignedBoxSceneQuery::queryResult(first);
					}
				}
				virtual ev_bool queryResult(EarthView::World::Graphic::CMovableObject* first, EarthView::World::Core::IntVector& indexVec)
				{
					if (this->_gRef != NULL && this->m_queryResult_CMovableObject_IntVector_callback != "" && this->isCustomExtend())
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
						jlong first_j = (jlong) first;
						jlong indexVec_j = (jlong) &indexVec;
						jmethodID __method = __gr->getMethod("queryResult_CMovableObject_IntVector_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , first_j, indexVec_j);
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
						return this->CDefaultAxisAlignedBoxSceneQuery::queryResult(first, indexVec);
					}
				}
				virtual ev_bool queryResult(EarthView::World::Graphic::CSceneQuery::WorldFragment* fragment)
				{
					if (this->_gRef != NULL && this->m_queryResult_WorldFragment_callback != "" && this->isCustomExtend())
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
						jlong fragment_j = (jlong) fragment;
						jmethodID __method = __gr->getMethod("queryResult_WorldFragment_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , fragment_j);
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
						return this->CDefaultAxisAlignedBoxSceneQuery::queryResult(fragment);
					}
				}
				virtual void setQueryMask(ev_uint32 mask)
				{
					if (this->_gRef != NULL && this->m_setQueryMask_ev_uint32_callback != "" && this->isCustomExtend())
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
						jlong mask_j = (jlong) mask;
						jmethodID __method = __gr->getMethod("setQueryMask_ev_uint32_callback");
						__env->CallVoidMethod(__obj, __method , mask_j);
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
						return this->CDefaultAxisAlignedBoxSceneQuery::setQueryMask(mask);
					}
				}
				virtual ev_uint32 getQueryMask() const
				{
					if (this->_gRef != NULL && this->m_getQueryMask_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getQueryMask_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_uint32 __values1 = (ev_uint32) __values1_j;
						return __values1;
					}
					else
					{
						return this->CDefaultAxisAlignedBoxSceneQuery::getQueryMask();
					}
				}
				virtual void setQueryTypeMask(ev_uint32 mask)
				{
					if (this->_gRef != NULL && this->m_setQueryTypeMask_ev_uint32_callback != "" && this->isCustomExtend())
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
						jlong mask_j = (jlong) mask;
						jmethodID __method = __gr->getMethod("setQueryTypeMask_ev_uint32_callback");
						__env->CallVoidMethod(__obj, __method , mask_j);
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
						return this->CDefaultAxisAlignedBoxSceneQuery::setQueryTypeMask(mask);
					}
				}
				virtual ev_uint32 getQueryTypeMask() const
				{
					if (this->_gRef != NULL && this->m_getQueryTypeMask_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getQueryTypeMask_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_uint32 __values1 = (ev_uint32) __values1_j;
						return __values1;
					}
					else
					{
						return this->CDefaultAxisAlignedBoxSceneQuery::getQueryTypeMask();
					}
				}
				virtual void setWorldFragmentType(EarthView::World::Graphic::CSceneQuery::WorldFragmentType wft)
				{
					if (this->_gRef != NULL && this->m_setWorldFragmentType_WorldFragmentType_callback != "" && this->isCustomExtend())
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
						jint wft_j = (jint) wft;
						jmethodID __method = __gr->getMethod("setWorldFragmentType_WorldFragmentType_callback");
						__env->CallVoidMethod(__obj, __method , wft_j);
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
						return this->CDefaultAxisAlignedBoxSceneQuery::setWorldFragmentType(wft);
					}
				}
				virtual EarthView::World::Graphic::CSceneQuery::WorldFragmentType getWorldFragmentType() const
				{
					if (this->_gRef != NULL && this->m_getWorldFragmentType_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getWorldFragmentType_void_callback");
						jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CSceneQuery::WorldFragmentType __values1 = (EarthView::World::Graphic::CSceneQuery::WorldFragmentType) __values1_j;
						return __values1;
					}
					else
					{
						return this->CDefaultAxisAlignedBoxSceneQuery::getWorldFragmentType();
					}
				}
				virtual const EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet* getSupportedWorldFragmentTypes() const
				{
					if (this->_gRef != NULL && this->m_getSupportedWorldFragmentTypes_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getSupportedWorldFragmentTypes_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet *__values1 = (const EarthView::World::Graphic::CSceneQuery::WorldFragmentTypeSet*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CDefaultAxisAlignedBoxSceneQuery::getSupportedWorldFragmentTypes();
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCDefaultAxisAlignedBoxSceneQueryProxy);
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultAxisAlignedBoxSceneQuery_execute_1CSceneQueryListener(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong listener_j)
			{
				EarthView::World::Graphic::CSceneQueryListener *listener = (EarthView::World::Graphic::CSceneQueryListener*) listener_j;
				EarthView::World::Graphic::CDefaultAxisAlignedBoxSceneQuery *pObjectX = (EarthView::World::Graphic::CDefaultAxisAlignedBoxSceneQuery*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDefaultAxisAlignedBoxSceneQueryProxy))
				{
					pObjectX->EarthView::World::Graphic::CDefaultAxisAlignedBoxSceneQuery::execute(listener);
				}
				else
				{
					pObjectX->execute(listener);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultAxisAlignedBoxSceneQuery_register_1execute_1CSceneQueryListener(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultAxisAlignedBoxSceneQueryProxy *pObjectX = (JCDefaultAxisAlignedBoxSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_execute_CSceneQueryListener_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"execute_CSceneQueryListener_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultAxisAlignedBoxSceneQuery_execute_1CSceneQueryListener_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong listener_j)
			{
				EarthView::World::Graphic::CSceneQueryListener *listener = (EarthView::World::Graphic::CSceneQueryListener*) listener_j;
				EarthView::World::Graphic::CDefaultAxisAlignedBoxSceneQuery *pObjectX = (EarthView::World::Graphic::CDefaultAxisAlignedBoxSceneQuery*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CDefaultAxisAlignedBoxSceneQuery::execute(listener);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultAxisAlignedBoxSceneQuery_register_1execute_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultAxisAlignedBoxSceneQueryProxy *pObjectX = (JCDefaultAxisAlignedBoxSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_execute_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"execute_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultAxisAlignedBoxSceneQuery_register_1getLastResults_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultAxisAlignedBoxSceneQueryProxy *pObjectX = (JCDefaultAxisAlignedBoxSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getLastResults_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getLastResults_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultAxisAlignedBoxSceneQuery_register_1clearResults_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultAxisAlignedBoxSceneQueryProxy *pObjectX = (JCDefaultAxisAlignedBoxSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_clearResults_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"clearResults_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultAxisAlignedBoxSceneQuery_register_1queryResult_1CMovableObject(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultAxisAlignedBoxSceneQueryProxy *pObjectX = (JCDefaultAxisAlignedBoxSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_queryResult_CMovableObject_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"queryResult_CMovableObject_callback", "(J)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultAxisAlignedBoxSceneQuery_register_1queryResult_1CMovableObject_1IntVector(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultAxisAlignedBoxSceneQueryProxy *pObjectX = (JCDefaultAxisAlignedBoxSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_queryResult_CMovableObject_IntVector_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"queryResult_CMovableObject_IntVector_callback", "(JJ)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultAxisAlignedBoxSceneQuery_register_1queryResult_1WorldFragment(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultAxisAlignedBoxSceneQueryProxy *pObjectX = (JCDefaultAxisAlignedBoxSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_queryResult_WorldFragment_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"queryResult_WorldFragment_callback", "(J)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultAxisAlignedBoxSceneQuery_register_1setQueryMask_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultAxisAlignedBoxSceneQueryProxy *pObjectX = (JCDefaultAxisAlignedBoxSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setQueryMask_ev_uint32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setQueryMask_ev_uint32_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultAxisAlignedBoxSceneQuery_register_1getQueryMask_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultAxisAlignedBoxSceneQueryProxy *pObjectX = (JCDefaultAxisAlignedBoxSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getQueryMask_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getQueryMask_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultAxisAlignedBoxSceneQuery_register_1setQueryTypeMask_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultAxisAlignedBoxSceneQueryProxy *pObjectX = (JCDefaultAxisAlignedBoxSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setQueryTypeMask_ev_uint32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setQueryTypeMask_ev_uint32_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultAxisAlignedBoxSceneQuery_register_1getQueryTypeMask_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultAxisAlignedBoxSceneQueryProxy *pObjectX = (JCDefaultAxisAlignedBoxSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getQueryTypeMask_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getQueryTypeMask_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultAxisAlignedBoxSceneQuery_register_1setWorldFragmentType_1WorldFragmentType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultAxisAlignedBoxSceneQueryProxy *pObjectX = (JCDefaultAxisAlignedBoxSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setWorldFragmentType_WorldFragmentType_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setWorldFragmentType_WorldFragmentType_callback", "(I)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultAxisAlignedBoxSceneQuery_register_1getWorldFragmentType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultAxisAlignedBoxSceneQueryProxy *pObjectX = (JCDefaultAxisAlignedBoxSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getWorldFragmentType_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getWorldFragmentType_void_callback", "()I");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultAxisAlignedBoxSceneQuery_register_1getSupportedWorldFragmentTypes_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultAxisAlignedBoxSceneQueryProxy *pObjectX = (JCDefaultAxisAlignedBoxSceneQueryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getSupportedWorldFragmentTypes_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getSupportedWorldFragmentTypes_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
		}
	}
}
