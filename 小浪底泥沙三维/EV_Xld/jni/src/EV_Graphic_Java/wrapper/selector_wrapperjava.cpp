/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/selector.h"
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
			class JCRaySelectorProxy : public EarthView::World::Graphic::CRaySelector
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
				JCRaySelectorProxy(EarthView::World::Core::CNameValuePairList *pList) : CRaySelector(pList)
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
						return this->CRaySelector::execute(listener);
					}
				}
				virtual EarthView::World::Graphic::RaySceneQueryResult& execute()
				{
					if (this->_gRef != NULL && this->m_execute_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("execute_void_callback");
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
						return this->CRaySelector::execute();
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
						return this->CRaySelector::clearResults();
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
						return this->CRaySelector::queryResult(obj, distance);
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
						return this->CRaySelector::queryResult(obj, distance, objIndex, submeshIndex, instanceIndex, segmentIndex, point, pixelpoint);
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
						return this->CRaySelector::queryResult(obj, distance, e, c, i, r, cv, point, pixelpoint);
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
						return this->CRaySelector::queryResult(fragment, distance);
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
						return this->CRaySelector::getListenerPtr();
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
						return this->CRaySelector::setRay(ray);
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
						return this->CRaySelector::getRay();
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
						return this->CRaySelector::setSortByDistance(sort, maxresults);
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
						return this->CRaySelector::setSortByDistance(sort);
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
						return this->CRaySelector::getSortByDistance();
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
						return this->CRaySelector::getMaxResults();
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
						return this->CRaySelector::getLastResults();
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
						return this->CRaySelector::setQueryMask(mask);
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
						return this->CRaySelector::getQueryMask();
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
						return this->CRaySelector::setQueryTypeMask(mask);
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
						return this->CRaySelector::getQueryTypeMask();
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
						return this->CRaySelector::setWorldFragmentType(wft);
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
						return this->CRaySelector::getWorldFragmentType();
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
						return this->CRaySelector::getSupportedWorldFragmentTypes();
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCRaySelectorProxy);
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RaySelector_execute_1CRaySceneQueryListener(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong listener_j)
			{
				EarthView::World::Graphic::CRaySceneQueryListener *listener = (EarthView::World::Graphic::CRaySceneQueryListener*) listener_j;
				EarthView::World::Graphic::CRaySelector *pObjectX = (EarthView::World::Graphic::CRaySelector*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRaySelectorProxy))
				{
					pObjectX->EarthView::World::Graphic::CRaySelector::execute(listener);
				}
				else
				{
					pObjectX->execute(listener);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RaySelector_register_1execute_1CRaySceneQueryListener(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRaySelectorProxy *pObjectX = (JCRaySelectorProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RaySelector_execute_1CRaySceneQueryListener_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong listener_j)
			{
				EarthView::World::Graphic::CRaySceneQueryListener *listener = (EarthView::World::Graphic::CRaySceneQueryListener*) listener_j;
				EarthView::World::Graphic::CRaySelector *pObjectX = (EarthView::World::Graphic::CRaySelector*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRaySelector::execute(listener);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RaySelector_execute_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRaySelector *pObjectX = (EarthView::World::Graphic::CRaySelector*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRaySelectorProxy))
				{
					EarthView::World::Graphic::RaySceneQueryResult& __values1 = pObjectX->EarthView::World::Graphic::CRaySelector::execute();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::RaySceneQueryResult& __values1 = pObjectX->execute();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RaySelector_register_1execute_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRaySelectorProxy *pObjectX = (JCRaySelectorProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RaySelector_execute_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRaySelector *pObjectX = (EarthView::World::Graphic::CRaySelector*) pObjXXXX;
				EarthView::World::Graphic::RaySceneQueryResult& __values1 = pObjectX->EarthView::World::Graphic::CRaySelector::execute();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RaySelector_clearResults_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRaySelector *pObjectX = (EarthView::World::Graphic::CRaySelector*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRaySelectorProxy))
				{
					pObjectX->EarthView::World::Graphic::CRaySelector::clearResults();
				}
				else
				{
					pObjectX->clearResults();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RaySelector_register_1clearResults_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRaySelectorProxy *pObjectX = (JCRaySelectorProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RaySelector_clearResults_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRaySelector *pObjectX = (EarthView::World::Graphic::CRaySelector*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRaySelector::clearResults();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RaySelector_setRenderSelected_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean render_j)
			{
				ev_bool render = (ev_bool) render_j;
				EarthView::World::Graphic::CRaySelector *pObjectX = (EarthView::World::Graphic::CRaySelector*) pObjXXXX;
				pObjectX->setRenderSelected(render);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_RaySelector_getRenderSelected_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRaySelector *pObjectX = (EarthView::World::Graphic::CRaySelector*) pObjXXXX;
				ev_bool __values1 = pObjectX->getRenderSelected();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RaySelector_setViewport_1CViewport(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong viewport_j)
			{
				EarthView::World::Graphic::CViewport *viewport = (EarthView::World::Graphic::CViewport*) viewport_j;
				EarthView::World::Graphic::CRaySelector *pObjectX = (EarthView::World::Graphic::CRaySelector*) pObjXXXX;
				pObjectX->setViewport(viewport);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RaySelector_getViewport_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRaySelector *pObjectX = (EarthView::World::Graphic::CRaySelector*) pObjXXXX;
				const EarthView::World::Graphic::CViewport* __values1 = pObjectX->getViewport();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RaySelector_register_1queryResult_1CMovableObject_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRaySelectorProxy *pObjectX = (JCRaySelectorProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RaySelector_register_1queryResult_1CMovableObject_1Real_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32_1CVector3_1CVector2(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRaySelectorProxy *pObjectX = (JCRaySelectorProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RaySelector_register_1queryResult_1CMovableObject_1Real_1ev_1real32_1ev_1uint8_1ev_1uint16_1ev_1uint16_1CColourValue_1CVector3_1CVector2(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRaySelectorProxy *pObjectX = (JCRaySelectorProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RaySelector_register_1queryResult_1WorldFragment_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRaySelectorProxy *pObjectX = (JCRaySelectorProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RaySelector_register_1getListenerPtr_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRaySelectorProxy *pObjectX = (JCRaySelectorProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RaySelector_register_1setRay_1CRay(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRaySelectorProxy *pObjectX = (JCRaySelectorProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RaySelector_register_1getRay_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRaySelectorProxy *pObjectX = (JCRaySelectorProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RaySelector_register_1setSortByDistance_1ev_1bool_1ev_1uint16(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRaySelectorProxy *pObjectX = (JCRaySelectorProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RaySelector_register_1setSortByDistance_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRaySelectorProxy *pObjectX = (JCRaySelectorProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RaySelector_register_1getSortByDistance_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRaySelectorProxy *pObjectX = (JCRaySelectorProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RaySelector_register_1getMaxResults_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRaySelectorProxy *pObjectX = (JCRaySelectorProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RaySelector_register_1getLastResults_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRaySelectorProxy *pObjectX = (JCRaySelectorProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RaySelector_register_1setQueryMask_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRaySelectorProxy *pObjectX = (JCRaySelectorProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RaySelector_register_1getQueryMask_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRaySelectorProxy *pObjectX = (JCRaySelectorProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RaySelector_register_1setQueryTypeMask_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRaySelectorProxy *pObjectX = (JCRaySelectorProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RaySelector_register_1getQueryTypeMask_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRaySelectorProxy *pObjectX = (JCRaySelectorProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RaySelector_register_1setWorldFragmentType_1WorldFragmentType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRaySelectorProxy *pObjectX = (JCRaySelectorProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RaySelector_register_1getWorldFragmentType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRaySelectorProxy *pObjectX = (JCRaySelectorProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RaySelector_register_1getSupportedWorldFragmentTypes_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRaySelectorProxy *pObjectX = (JCRaySelectorProxy*) pObjXXXX;
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
			class JCBoxSelectorProxy : public EarthView::World::Graphic::CBoxSelector
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
				JCBoxSelectorProxy(EarthView::World::Core::CNameValuePairList *pList) : CBoxSelector(pList)
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
						return this->CBoxSelector::execute(listener);
					}
				}
				virtual EarthView::World::Graphic::SceneQueryResult& execute()
				{
					if (this->_gRef != NULL && this->m_execute_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("execute_void_callback");
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
						return this->CBoxSelector::execute();
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
						return this->CBoxSelector::clearResults();
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
						return this->CBoxSelector::getLastResults();
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
						return this->CBoxSelector::queryResult(first);
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
						return this->CBoxSelector::queryResult(first, indexVec);
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
						return this->CBoxSelector::queryResult(fragment);
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
						return this->CBoxSelector::setQueryMask(mask);
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
						return this->CBoxSelector::getQueryMask();
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
						return this->CBoxSelector::setQueryTypeMask(mask);
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
						return this->CBoxSelector::getQueryTypeMask();
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
						return this->CBoxSelector::setWorldFragmentType(wft);
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
						return this->CBoxSelector::getWorldFragmentType();
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
						return this->CBoxSelector::getSupportedWorldFragmentTypes();
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCBoxSelectorProxy);
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_BoxSelector_execute_1CSceneQueryListener(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong listener_j)
			{
				EarthView::World::Graphic::CSceneQueryListener *listener = (EarthView::World::Graphic::CSceneQueryListener*) listener_j;
				EarthView::World::Graphic::CBoxSelector *pObjectX = (EarthView::World::Graphic::CBoxSelector*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCBoxSelectorProxy))
				{
					pObjectX->EarthView::World::Graphic::CBoxSelector::execute(listener);
				}
				else
				{
					pObjectX->execute(listener);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_BoxSelector_register_1execute_1CSceneQueryListener(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCBoxSelectorProxy *pObjectX = (JCBoxSelectorProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_BoxSelector_execute_1CSceneQueryListener_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong listener_j)
			{
				EarthView::World::Graphic::CSceneQueryListener *listener = (EarthView::World::Graphic::CSceneQueryListener*) listener_j;
				EarthView::World::Graphic::CBoxSelector *pObjectX = (EarthView::World::Graphic::CBoxSelector*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CBoxSelector::execute(listener);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_BoxSelector_execute_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CBoxSelector *pObjectX = (EarthView::World::Graphic::CBoxSelector*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCBoxSelectorProxy))
				{
					EarthView::World::Graphic::SceneQueryResult& __values1 = pObjectX->EarthView::World::Graphic::CBoxSelector::execute();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::SceneQueryResult& __values1 = pObjectX->execute();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_BoxSelector_register_1execute_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCBoxSelectorProxy *pObjectX = (JCBoxSelectorProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_BoxSelector_execute_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CBoxSelector *pObjectX = (EarthView::World::Graphic::CBoxSelector*) pObjXXXX;
				EarthView::World::Graphic::SceneQueryResult& __values1 = pObjectX->EarthView::World::Graphic::CBoxSelector::execute();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_BoxSelector_clearResults_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CBoxSelector *pObjectX = (EarthView::World::Graphic::CBoxSelector*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCBoxSelectorProxy))
				{
					pObjectX->EarthView::World::Graphic::CBoxSelector::clearResults();
				}
				else
				{
					pObjectX->clearResults();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_BoxSelector_register_1clearResults_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCBoxSelectorProxy *pObjectX = (JCBoxSelectorProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_BoxSelector_clearResults_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CBoxSelector *pObjectX = (EarthView::World::Graphic::CBoxSelector*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CBoxSelector::clearResults();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_BoxSelector_setRenderSelected_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean render_j)
			{
				ev_bool render = (ev_bool) render_j;
				EarthView::World::Graphic::CBoxSelector *pObjectX = (EarthView::World::Graphic::CBoxSelector*) pObjXXXX;
				pObjectX->setRenderSelected(render);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_BoxSelector_getRenderSelected_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CBoxSelector *pObjectX = (EarthView::World::Graphic::CBoxSelector*) pObjXXXX;
				ev_bool __values1 = pObjectX->getRenderSelected();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_BoxSelector_register_1getLastResults_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCBoxSelectorProxy *pObjectX = (JCBoxSelectorProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_BoxSelector_register_1queryResult_1CMovableObject(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCBoxSelectorProxy *pObjectX = (JCBoxSelectorProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_BoxSelector_register_1queryResult_1CMovableObject_1IntVector(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCBoxSelectorProxy *pObjectX = (JCBoxSelectorProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_BoxSelector_register_1queryResult_1WorldFragment(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCBoxSelectorProxy *pObjectX = (JCBoxSelectorProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_BoxSelector_register_1setQueryMask_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCBoxSelectorProxy *pObjectX = (JCBoxSelectorProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_BoxSelector_register_1getQueryMask_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCBoxSelectorProxy *pObjectX = (JCBoxSelectorProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_BoxSelector_register_1setQueryTypeMask_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCBoxSelectorProxy *pObjectX = (JCBoxSelectorProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_BoxSelector_register_1getQueryTypeMask_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCBoxSelectorProxy *pObjectX = (JCBoxSelectorProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_BoxSelector_register_1setWorldFragmentType_1WorldFragmentType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCBoxSelectorProxy *pObjectX = (JCBoxSelectorProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_BoxSelector_register_1getWorldFragmentType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCBoxSelectorProxy *pObjectX = (JCBoxSelectorProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_BoxSelector_register_1getSupportedWorldFragmentTypes_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCBoxSelectorProxy *pObjectX = (JCBoxSelectorProxy*) pObjXXXX;
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
			class JCSphereSelectorProxy : public EarthView::World::Graphic::CSphereSelector
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
				JCSphereSelectorProxy(EarthView::World::Core::CNameValuePairList *pList) : CSphereSelector(pList)
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
						return this->CSphereSelector::execute(listener);
					}
				}
				virtual EarthView::World::Graphic::SceneQueryResult& execute()
				{
					if (this->_gRef != NULL && this->m_execute_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("execute_void_callback");
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
						return this->CSphereSelector::execute();
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
						return this->CSphereSelector::clearResults();
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
						return this->CSphereSelector::getLastResults();
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
						return this->CSphereSelector::queryResult(first);
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
						return this->CSphereSelector::queryResult(first, indexVec);
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
						return this->CSphereSelector::queryResult(fragment);
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
						return this->CSphereSelector::setQueryMask(mask);
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
						return this->CSphereSelector::getQueryMask();
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
						return this->CSphereSelector::setQueryTypeMask(mask);
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
						return this->CSphereSelector::getQueryTypeMask();
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
						return this->CSphereSelector::setWorldFragmentType(wft);
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
						return this->CSphereSelector::getWorldFragmentType();
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
						return this->CSphereSelector::getSupportedWorldFragmentTypes();
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCSphereSelectorProxy);
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SphereSelector_execute_1CSceneQueryListener(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong listener_j)
			{
				EarthView::World::Graphic::CSceneQueryListener *listener = (EarthView::World::Graphic::CSceneQueryListener*) listener_j;
				EarthView::World::Graphic::CSphereSelector *pObjectX = (EarthView::World::Graphic::CSphereSelector*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSphereSelectorProxy))
				{
					pObjectX->EarthView::World::Graphic::CSphereSelector::execute(listener);
				}
				else
				{
					pObjectX->execute(listener);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SphereSelector_register_1execute_1CSceneQueryListener(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSphereSelectorProxy *pObjectX = (JCSphereSelectorProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SphereSelector_execute_1CSceneQueryListener_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong listener_j)
			{
				EarthView::World::Graphic::CSceneQueryListener *listener = (EarthView::World::Graphic::CSceneQueryListener*) listener_j;
				EarthView::World::Graphic::CSphereSelector *pObjectX = (EarthView::World::Graphic::CSphereSelector*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CSphereSelector::execute(listener);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SphereSelector_execute_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSphereSelector *pObjectX = (EarthView::World::Graphic::CSphereSelector*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSphereSelectorProxy))
				{
					EarthView::World::Graphic::SceneQueryResult& __values1 = pObjectX->EarthView::World::Graphic::CSphereSelector::execute();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::SceneQueryResult& __values1 = pObjectX->execute();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SphereSelector_register_1execute_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSphereSelectorProxy *pObjectX = (JCSphereSelectorProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SphereSelector_execute_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSphereSelector *pObjectX = (EarthView::World::Graphic::CSphereSelector*) pObjXXXX;
				EarthView::World::Graphic::SceneQueryResult& __values1 = pObjectX->EarthView::World::Graphic::CSphereSelector::execute();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SphereSelector_clearResults_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSphereSelector *pObjectX = (EarthView::World::Graphic::CSphereSelector*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSphereSelectorProxy))
				{
					pObjectX->EarthView::World::Graphic::CSphereSelector::clearResults();
				}
				else
				{
					pObjectX->clearResults();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SphereSelector_register_1clearResults_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSphereSelectorProxy *pObjectX = (JCSphereSelectorProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SphereSelector_clearResults_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSphereSelector *pObjectX = (EarthView::World::Graphic::CSphereSelector*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CSphereSelector::clearResults();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SphereSelector_setRenderSelected_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean render_j)
			{
				ev_bool render = (ev_bool) render_j;
				EarthView::World::Graphic::CSphereSelector *pObjectX = (EarthView::World::Graphic::CSphereSelector*) pObjXXXX;
				pObjectX->setRenderSelected(render);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_SphereSelector_getRenderSelected_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CSphereSelector *pObjectX = (EarthView::World::Graphic::CSphereSelector*) pObjXXXX;
				ev_bool __values1 = pObjectX->getRenderSelected();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SphereSelector_register_1getLastResults_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSphereSelectorProxy *pObjectX = (JCSphereSelectorProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SphereSelector_register_1queryResult_1CMovableObject(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSphereSelectorProxy *pObjectX = (JCSphereSelectorProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SphereSelector_register_1queryResult_1CMovableObject_1IntVector(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSphereSelectorProxy *pObjectX = (JCSphereSelectorProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SphereSelector_register_1queryResult_1WorldFragment(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSphereSelectorProxy *pObjectX = (JCSphereSelectorProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SphereSelector_register_1setQueryMask_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSphereSelectorProxy *pObjectX = (JCSphereSelectorProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SphereSelector_register_1getQueryMask_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSphereSelectorProxy *pObjectX = (JCSphereSelectorProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SphereSelector_register_1setQueryTypeMask_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSphereSelectorProxy *pObjectX = (JCSphereSelectorProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SphereSelector_register_1getQueryTypeMask_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSphereSelectorProxy *pObjectX = (JCSphereSelectorProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SphereSelector_register_1setWorldFragmentType_1WorldFragmentType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSphereSelectorProxy *pObjectX = (JCSphereSelectorProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SphereSelector_register_1getWorldFragmentType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSphereSelectorProxy *pObjectX = (JCSphereSelectorProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SphereSelector_register_1getSupportedWorldFragmentTypes_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSphereSelectorProxy *pObjectX = (JCSphereSelectorProxy*) pObjXXXX;
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
			class JCComponentSelectorProxy : public EarthView::World::Graphic::CComponentSelector
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
				JCComponentSelectorProxy(EarthView::World::Core::CNameValuePairList *pList) : CComponentSelector(pList)
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
						return this->CComponentSelector::execute(listener);
					}
				}
				virtual EarthView::World::Graphic::RaySceneQueryResult& execute()
				{
					if (this->_gRef != NULL && this->m_execute_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("execute_void_callback");
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
						return this->CComponentSelector::execute();
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
						return this->CComponentSelector::clearResults();
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
						return this->CComponentSelector::queryResult(obj, distance);
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
						return this->CComponentSelector::queryResult(obj, distance, objIndex, submeshIndex, instanceIndex, segmentIndex, point, pixelpoint);
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
						return this->CComponentSelector::queryResult(obj, distance, e, c, i, r, cv, point, pixelpoint);
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
						return this->CComponentSelector::queryResult(fragment, distance);
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
						return this->CComponentSelector::getListenerPtr();
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
						return this->CComponentSelector::setRay(ray);
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
						return this->CComponentSelector::getRay();
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
						return this->CComponentSelector::setSortByDistance(sort, maxresults);
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
						return this->CComponentSelector::setSortByDistance(sort);
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
						return this->CComponentSelector::getSortByDistance();
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
						return this->CComponentSelector::getMaxResults();
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
						return this->CComponentSelector::getLastResults();
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
						return this->CComponentSelector::setQueryMask(mask);
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
						return this->CComponentSelector::getQueryMask();
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
						return this->CComponentSelector::setQueryTypeMask(mask);
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
						return this->CComponentSelector::getQueryTypeMask();
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
						return this->CComponentSelector::setWorldFragmentType(wft);
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
						return this->CComponentSelector::getWorldFragmentType();
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
						return this->CComponentSelector::getSupportedWorldFragmentTypes();
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCComponentSelectorProxy);
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ComponentSelector_execute_1CRaySceneQueryListener(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong listener_j)
			{
				EarthView::World::Graphic::CRaySceneQueryListener *listener = (EarthView::World::Graphic::CRaySceneQueryListener*) listener_j;
				EarthView::World::Graphic::CComponentSelector *pObjectX = (EarthView::World::Graphic::CComponentSelector*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCComponentSelectorProxy))
				{
					pObjectX->EarthView::World::Graphic::CComponentSelector::execute(listener);
				}
				else
				{
					pObjectX->execute(listener);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ComponentSelector_register_1execute_1CRaySceneQueryListener(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCComponentSelectorProxy *pObjectX = (JCComponentSelectorProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ComponentSelector_execute_1CRaySceneQueryListener_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong listener_j)
			{
				EarthView::World::Graphic::CRaySceneQueryListener *listener = (EarthView::World::Graphic::CRaySceneQueryListener*) listener_j;
				EarthView::World::Graphic::CComponentSelector *pObjectX = (EarthView::World::Graphic::CComponentSelector*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CComponentSelector::execute(listener);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ComponentSelector_execute_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CComponentSelector *pObjectX = (EarthView::World::Graphic::CComponentSelector*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCComponentSelectorProxy))
				{
					EarthView::World::Graphic::RaySceneQueryResult& __values1 = pObjectX->EarthView::World::Graphic::CComponentSelector::execute();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::RaySceneQueryResult& __values1 = pObjectX->execute();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ComponentSelector_register_1execute_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCComponentSelectorProxy *pObjectX = (JCComponentSelectorProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ComponentSelector_execute_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CComponentSelector *pObjectX = (EarthView::World::Graphic::CComponentSelector*) pObjXXXX;
				EarthView::World::Graphic::RaySceneQueryResult& __values1 = pObjectX->EarthView::World::Graphic::CComponentSelector::execute();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ComponentSelector_clearResults_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CComponentSelector *pObjectX = (EarthView::World::Graphic::CComponentSelector*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCComponentSelectorProxy))
				{
					pObjectX->EarthView::World::Graphic::CComponentSelector::clearResults();
				}
				else
				{
					pObjectX->clearResults();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ComponentSelector_register_1clearResults_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCComponentSelectorProxy *pObjectX = (JCComponentSelectorProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ComponentSelector_clearResults_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CComponentSelector *pObjectX = (EarthView::World::Graphic::CComponentSelector*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CComponentSelector::clearResults();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ComponentSelector_setRenderSelected_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean render_j)
			{
				ev_bool render = (ev_bool) render_j;
				EarthView::World::Graphic::CComponentSelector *pObjectX = (EarthView::World::Graphic::CComponentSelector*) pObjXXXX;
				pObjectX->setRenderSelected(render);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_ComponentSelector_getRenderSelected_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CComponentSelector *pObjectX = (EarthView::World::Graphic::CComponentSelector*) pObjXXXX;
				ev_bool __values1 = pObjectX->getRenderSelected();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ComponentSelector_setViewport_1CViewport(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong viewport_j)
			{
				EarthView::World::Graphic::CViewport *viewport = (EarthView::World::Graphic::CViewport*) viewport_j;
				EarthView::World::Graphic::CComponentSelector *pObjectX = (EarthView::World::Graphic::CComponentSelector*) pObjXXXX;
				pObjectX->setViewport(viewport);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ComponentSelector_getViewport_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CComponentSelector *pObjectX = (EarthView::World::Graphic::CComponentSelector*) pObjXXXX;
				const EarthView::World::Graphic::CViewport* __values1 = pObjectX->getViewport();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ComponentSelector_register_1queryResult_1CMovableObject_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCComponentSelectorProxy *pObjectX = (JCComponentSelectorProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ComponentSelector_register_1queryResult_1CMovableObject_1Real_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32_1CVector3_1CVector2(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCComponentSelectorProxy *pObjectX = (JCComponentSelectorProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ComponentSelector_register_1queryResult_1CMovableObject_1Real_1ev_1real32_1ev_1uint8_1ev_1uint16_1ev_1uint16_1CColourValue_1CVector3_1CVector2(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCComponentSelectorProxy *pObjectX = (JCComponentSelectorProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ComponentSelector_register_1queryResult_1WorldFragment_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCComponentSelectorProxy *pObjectX = (JCComponentSelectorProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ComponentSelector_register_1getListenerPtr_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCComponentSelectorProxy *pObjectX = (JCComponentSelectorProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ComponentSelector_register_1setRay_1CRay(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCComponentSelectorProxy *pObjectX = (JCComponentSelectorProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ComponentSelector_register_1getRay_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCComponentSelectorProxy *pObjectX = (JCComponentSelectorProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ComponentSelector_register_1setSortByDistance_1ev_1bool_1ev_1uint16(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCComponentSelectorProxy *pObjectX = (JCComponentSelectorProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ComponentSelector_register_1setSortByDistance_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCComponentSelectorProxy *pObjectX = (JCComponentSelectorProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ComponentSelector_register_1getSortByDistance_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCComponentSelectorProxy *pObjectX = (JCComponentSelectorProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ComponentSelector_register_1getMaxResults_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCComponentSelectorProxy *pObjectX = (JCComponentSelectorProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ComponentSelector_register_1getLastResults_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCComponentSelectorProxy *pObjectX = (JCComponentSelectorProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ComponentSelector_register_1setQueryMask_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCComponentSelectorProxy *pObjectX = (JCComponentSelectorProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ComponentSelector_register_1getQueryMask_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCComponentSelectorProxy *pObjectX = (JCComponentSelectorProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ComponentSelector_register_1setQueryTypeMask_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCComponentSelectorProxy *pObjectX = (JCComponentSelectorProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ComponentSelector_register_1getQueryTypeMask_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCComponentSelectorProxy *pObjectX = (JCComponentSelectorProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ComponentSelector_register_1setWorldFragmentType_1WorldFragmentType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCComponentSelectorProxy *pObjectX = (JCComponentSelectorProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ComponentSelector_register_1getWorldFragmentType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCComponentSelectorProxy *pObjectX = (JCComponentSelectorProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ComponentSelector_register_1getSupportedWorldFragmentTypes_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCComponentSelectorProxy *pObjectX = (JCComponentSelectorProxy*) pObjXXXX;
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
