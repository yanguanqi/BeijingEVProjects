/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialobject/coordinatesystem/spatialparameter.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Utility
			{
				class JCEllipseSpheriodProxy : public EarthView::World::Spatial::Utility::CEllipseSpheriod
				{
				 private:
					EarthView::World::Core::ev_string m_getSamiMajor_void_callback;
					EarthView::World::Core::ev_string m_getInvFlattening_void_callback;
					EarthView::World::Core::ev_string m_getSphereName_void_callback;
					EarthView::World::Core::ev_string m_getDatumType_void_callback;
					EarthView::World::Core::ev_string m_getFromGreenWicth_void_callback;
					EarthView::World::Core::ev_string m_getAngularUnits_EVString_ev_real64_callback;
				public:
					JCEllipseSpheriodProxy(EarthView::World::Core::CNameValuePairList *pList) : CEllipseSpheriod(pList)
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
					void register_getSamiMajor_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getSamiMajor_void_callback = __method;
					}
					void register_getInvFlattening_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getInvFlattening_void_callback = __method;
					}
					void register_getSphereName_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getSphereName_void_callback = __method;
					}
					void register_getDatumType_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getDatumType_void_callback = __method;
					}
					void register_getFromGreenWicth_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getFromGreenWicth_void_callback = __method;
					}
					void register_getAngularUnits_EVString_ev_real64_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getAngularUnits_EVString_ev_real64_callback = __method;
					}
					virtual const ev_real64 getSamiMajor() const
					{
						if (this->_gRef != NULL && this->m_getSamiMajor_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getSamiMajor_void_callback");
							jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							const ev_real64 __values1 = (ev_real64) __values1_j;
							return __values1;
						}
						else
						{
							return this->CEllipseSpheriod::getSamiMajor();
						}
					}
					virtual const ev_real64 getInvFlattening() const
					{
						if (this->_gRef != NULL && this->m_getInvFlattening_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getInvFlattening_void_callback");
							jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							const ev_real64 __values1 = (ev_real64) __values1_j;
							return __values1;
						}
						else
						{
							return this->CEllipseSpheriod::getInvFlattening();
						}
					}
					virtual EVString getSphereName() const
					{
						if (this->_gRef != NULL && this->m_getSphereName_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getSphereName_void_callback");
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
							return this->CEllipseSpheriod::getSphereName();
						}
					}
					virtual const EarthView::World::Spatial::Utility::EVDatumType getDatumType() const
					{
						if (this->_gRef != NULL && this->m_getDatumType_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getDatumType_void_callback");
							jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							const EarthView::World::Spatial::Utility::EVDatumType __values1 = (EarthView::World::Spatial::Utility::EVDatumType) __values1_j;
							return __values1;
						}
						else
						{
							return this->CEllipseSpheriod::getDatumType();
						}
					}
					virtual const ev_real64 getFromGreenWicth() const
					{
						if (this->_gRef != NULL && this->m_getFromGreenWicth_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getFromGreenWicth_void_callback");
							jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							const ev_real64 __values1 = (ev_real64) __values1_j;
							return __values1;
						}
						else
						{
							return this->CEllipseSpheriod::getFromGreenWicth();
						}
					}
					virtual void getAngularUnits(EVString& pszname, ev_real64& dfunitsValue) const
					{
						if (this->_gRef != NULL && this->m_getAngularUnits_EVString_ev_real64_callback != "" && this->isCustomExtend())
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
							jlong pszname_j = (jlong) &pszname;
							jlong dfunitsValue_j = (jlong) &dfunitsValue;
							jmethodID __method = __gr->getMethod("getAngularUnits_EVString_ev_real64_callback");
							__env->CallVoidMethod(__obj, __method , pszname_j, dfunitsValue_j);
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
							return this->CEllipseSpheriod::getAngularUnits(pszname, dfunitsValue);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCEllipseSpheriodProxy);
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_utility_EllipseSpheriod_OperatorAssign_1CEllipseSpheriod(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong objEllipse_j )
				{
					EarthView::World::Spatial::Utility::CEllipseSpheriod& pObjectX = *(EarthView::World::Spatial::Utility::CEllipseSpheriod*) pObjXXXX;
					const EarthView::World::Spatial::Utility::CEllipseSpheriod &objEllipse = *(EarthView::World::Spatial::Utility::CEllipseSpheriod*) objEllipse_j;
					pObjectX = objEllipse;
					EarthView::World::Spatial::Utility::CEllipseSpheriod& __values1 = pObjectX;
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_utility_EllipseSpheriod_getSamiMajor_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Utility::CEllipseSpheriod *pObjectX = (EarthView::World::Spatial::Utility::CEllipseSpheriod*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEllipseSpheriodProxy))
					{
						const ev_real64 __values1 = pObjectX->EarthView::World::Spatial::Utility::CEllipseSpheriod::getSamiMajor();
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
					else
					{
						const ev_real64 __values1 = pObjectX->getSamiMajor();
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_utility_EllipseSpheriod_register_1getSamiMajor_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEllipseSpheriodProxy *pObjectX = (JCEllipseSpheriodProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getSamiMajor_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getSamiMajor_void_callback", "()D");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_utility_EllipseSpheriod_getSamiMajor_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Utility::CEllipseSpheriod *pObjectX = (EarthView::World::Spatial::Utility::CEllipseSpheriod*) pObjXXXX;
					const ev_real64 __values1 = pObjectX->EarthView::World::Spatial::Utility::CEllipseSpheriod::getSamiMajor();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_utility_EllipseSpheriod_getInvFlattening_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Utility::CEllipseSpheriod *pObjectX = (EarthView::World::Spatial::Utility::CEllipseSpheriod*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEllipseSpheriodProxy))
					{
						const ev_real64 __values1 = pObjectX->EarthView::World::Spatial::Utility::CEllipseSpheriod::getInvFlattening();
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
					else
					{
						const ev_real64 __values1 = pObjectX->getInvFlattening();
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_utility_EllipseSpheriod_register_1getInvFlattening_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEllipseSpheriodProxy *pObjectX = (JCEllipseSpheriodProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getInvFlattening_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getInvFlattening_void_callback", "()D");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_utility_EllipseSpheriod_getInvFlattening_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Utility::CEllipseSpheriod *pObjectX = (EarthView::World::Spatial::Utility::CEllipseSpheriod*) pObjXXXX;
					const ev_real64 __values1 = pObjectX->EarthView::World::Spatial::Utility::CEllipseSpheriod::getInvFlattening();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_utility_EllipseSpheriod_getSphereName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Utility::CEllipseSpheriod *pObjectX = (EarthView::World::Spatial::Utility::CEllipseSpheriod*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEllipseSpheriodProxy))
					{
						EVString __values1 = pObjectX->EarthView::World::Spatial::Utility::CEllipseSpheriod::getSphereName();
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
					else
					{
						EVString __values1 = pObjectX->getSphereName();
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_utility_EllipseSpheriod_register_1getSphereName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEllipseSpheriodProxy *pObjectX = (JCEllipseSpheriodProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getSphereName_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getSphereName_void_callback", "()Ljava/lang/String;");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_utility_EllipseSpheriod_getSphereName_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Utility::CEllipseSpheriod *pObjectX = (EarthView::World::Spatial::Utility::CEllipseSpheriod*) pObjXXXX;
					EVString __values1 = pObjectX->EarthView::World::Spatial::Utility::CEllipseSpheriod::getSphereName();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_utility_EllipseSpheriod_getDatumType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Utility::CEllipseSpheriod *pObjectX = (EarthView::World::Spatial::Utility::CEllipseSpheriod*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEllipseSpheriodProxy))
					{
						const EarthView::World::Spatial::Utility::EVDatumType __values1 = pObjectX->EarthView::World::Spatial::Utility::CEllipseSpheriod::getDatumType();
						jint __values1_j = (jint) __values1;
						return __values1_j;
					}
					else
					{
						const EarthView::World::Spatial::Utility::EVDatumType __values1 = pObjectX->getDatumType();
						jint __values1_j = (jint) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_utility_EllipseSpheriod_register_1getDatumType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEllipseSpheriodProxy *pObjectX = (JCEllipseSpheriodProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getDatumType_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getDatumType_void_callback", "()I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_utility_EllipseSpheriod_getDatumType_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Utility::CEllipseSpheriod *pObjectX = (EarthView::World::Spatial::Utility::CEllipseSpheriod*) pObjXXXX;
					const EarthView::World::Spatial::Utility::EVDatumType __values1 = pObjectX->EarthView::World::Spatial::Utility::CEllipseSpheriod::getDatumType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_utility_EllipseSpheriod_getFromGreenWicth_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Utility::CEllipseSpheriod *pObjectX = (EarthView::World::Spatial::Utility::CEllipseSpheriod*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEllipseSpheriodProxy))
					{
						const ev_real64 __values1 = pObjectX->EarthView::World::Spatial::Utility::CEllipseSpheriod::getFromGreenWicth();
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
					else
					{
						const ev_real64 __values1 = pObjectX->getFromGreenWicth();
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_utility_EllipseSpheriod_register_1getFromGreenWicth_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEllipseSpheriodProxy *pObjectX = (JCEllipseSpheriodProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getFromGreenWicth_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getFromGreenWicth_void_callback", "()D");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_utility_EllipseSpheriod_getFromGreenWicth_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Utility::CEllipseSpheriod *pObjectX = (EarthView::World::Spatial::Utility::CEllipseSpheriod*) pObjXXXX;
					const ev_real64 __values1 = pObjectX->EarthView::World::Spatial::Utility::CEllipseSpheriod::getFromGreenWicth();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_utility_EllipseSpheriod_getAngularUnits_1EVString_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pszname_j, jlong dfunitsValue_j)
				{
					EVString &pszname = *(EVString*) pszname_j;
					ev_real64 &dfunitsValue = *(ev_real64*) dfunitsValue_j;
					const 					EarthView::World::Spatial::Utility::CEllipseSpheriod *pObjectX = (EarthView::World::Spatial::Utility::CEllipseSpheriod*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEllipseSpheriodProxy))
					{
						pObjectX->EarthView::World::Spatial::Utility::CEllipseSpheriod::getAngularUnits(pszname, dfunitsValue);
					}
					else
					{
						pObjectX->getAngularUnits(pszname, dfunitsValue);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_utility_EllipseSpheriod_register_1getAngularUnits_1EVString_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEllipseSpheriodProxy *pObjectX = (JCEllipseSpheriodProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getAngularUnits_EVString_ev_real64_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getAngularUnits_EVString_ev_real64_callback", "(JJ)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_utility_EllipseSpheriod_getAngularUnits_1EVString_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pszname_j, jlong dfunitsValue_j)
				{
					EVString &pszname = *(EVString*) pszname_j;
					ev_real64 &dfunitsValue = *(ev_real64*) dfunitsValue_j;
					const 					EarthView::World::Spatial::Utility::CEllipseSpheriod *pObjectX = (EarthView::World::Spatial::Utility::CEllipseSpheriod*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Utility::CEllipseSpheriod::getAngularUnits(pszname, dfunitsValue);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_utility_ProjParameter_setCenterLong_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble dfCenterLong_j)
				{
					ev_real64 dfCenterLong = (ev_real64) dfCenterLong_j;
					EarthView::World::Spatial::Utility::CProjParameter *pObjectX = (EarthView::World::Spatial::Utility::CProjParameter*) pObjXXXX;
					pObjectX->setCenterLong(dfCenterLong);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_utility_ProjParameter_setOriginLatitude_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble dfCenterLat_j)
				{
					ev_real64 dfCenterLat = (ev_real64) dfCenterLat_j;
					EarthView::World::Spatial::Utility::CProjParameter *pObjectX = (EarthView::World::Spatial::Utility::CProjParameter*) pObjXXXX;
					pObjectX->setOriginLatitude(dfCenterLat);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_utility_ProjParameter_setSacleFactor_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble dfsacleFactor_j)
				{
					ev_real64 dfsacleFactor = (ev_real64) dfsacleFactor_j;
					EarthView::World::Spatial::Utility::CProjParameter *pObjectX = (EarthView::World::Spatial::Utility::CProjParameter*) pObjXXXX;
					pObjectX->setSacleFactor(dfsacleFactor);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_utility_ProjParameter_setStandarPrallel_11_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble dfstandParallel_j)
				{
					ev_real64 dfstandParallel = (ev_real64) dfstandParallel_j;
					EarthView::World::Spatial::Utility::CProjParameter *pObjectX = (EarthView::World::Spatial::Utility::CProjParameter*) pObjXXXX;
					pObjectX->setStandarPrallel_1(dfstandParallel);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_utility_ProjParameter_setStandarPrallel_12_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble dfstandParallel_j)
				{
					ev_real64 dfstandParallel = (ev_real64) dfstandParallel_j;
					EarthView::World::Spatial::Utility::CProjParameter *pObjectX = (EarthView::World::Spatial::Utility::CProjParameter*) pObjXXXX;
					pObjectX->setStandarPrallel_2(dfstandParallel);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_utility_ProjParameter_setFalseEasting_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble dfEasting_j)
				{
					ev_real64 dfEasting = (ev_real64) dfEasting_j;
					EarthView::World::Spatial::Utility::CProjParameter *pObjectX = (EarthView::World::Spatial::Utility::CProjParameter*) pObjXXXX;
					pObjectX->setFalseEasting(dfEasting);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_utility_ProjParameter_setFalseNorthing_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble dfNothing_j)
				{
					ev_real64 dfNothing = (ev_real64) dfNothing_j;
					EarthView::World::Spatial::Utility::CProjParameter *pObjectX = (EarthView::World::Spatial::Utility::CProjParameter*) pObjXXXX;
					pObjectX->setFalseNorthing(dfNothing);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_utility_ProjParameter_setNorthing_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean bnorth_j)
				{
					ev_bool bnorth = (ev_bool) bnorth_j;
					EarthView::World::Spatial::Utility::CProjParameter *pObjectX = (EarthView::World::Spatial::Utility::CProjParameter*) pObjXXXX;
					pObjectX->setNorthing(bnorth);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_utility_ProjParameter_getCenterLong_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Utility::CProjParameter *pObjectX = (EarthView::World::Spatial::Utility::CProjParameter*) pObjXXXX;
					const ev_real64 __values1 = pObjectX->getCenterLong();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_utility_ProjParameter_getOriginLatitude_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Utility::CProjParameter *pObjectX = (EarthView::World::Spatial::Utility::CProjParameter*) pObjXXXX;
					const ev_real64 __values1 = pObjectX->getOriginLatitude();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_utility_ProjParameter_getSacleFactor_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Utility::CProjParameter *pObjectX = (EarthView::World::Spatial::Utility::CProjParameter*) pObjXXXX;
					const ev_real64 __values1 = pObjectX->getSacleFactor();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_utility_ProjParameter_getStandarPrallel_11_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Utility::CProjParameter *pObjectX = (EarthView::World::Spatial::Utility::CProjParameter*) pObjXXXX;
					const ev_real64 __values1 = pObjectX->getStandarPrallel_1();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_utility_ProjParameter_getStandarPrallel_12_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Utility::CProjParameter *pObjectX = (EarthView::World::Spatial::Utility::CProjParameter*) pObjXXXX;
					const ev_real64 __values1 = pObjectX->getStandarPrallel_2();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_utility_ProjParameter_getFalseEasting_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Utility::CProjParameter *pObjectX = (EarthView::World::Spatial::Utility::CProjParameter*) pObjXXXX;
					const ev_real64 __values1 = pObjectX->getFalseEasting();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_utility_ProjParameter_getFalseNorthing_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Utility::CProjParameter *pObjectX = (EarthView::World::Spatial::Utility::CProjParameter*) pObjXXXX;
					const ev_real64 __values1 = pObjectX->getFalseNorthing();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_utility_ProjParameter_isNorthing_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Utility::CProjParameter *pObjectX = (EarthView::World::Spatial::Utility::CProjParameter*) pObjXXXX;
					const ev_bool __values1 = pObjectX->isNorthing();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_utility_ProjParameter_getProjectionType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Utility::CProjParameter *pObjectX = (EarthView::World::Spatial::Utility::CProjParameter*) pObjXXXX;
					const EarthView::World::Spatial::Utility::EVProjectionType __values1 = pObjectX->getProjectionType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_utility_TransParameter_setTransX_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble dfX_j)
				{
					ev_real64 dfX = (ev_real64) dfX_j;
					EarthView::World::Spatial::Utility::CTransParameter *pObjectX = (EarthView::World::Spatial::Utility::CTransParameter*) pObjXXXX;
					pObjectX->setTransX(dfX);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_utility_TransParameter_setTransY_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble dfY_j)
				{
					ev_real64 dfY = (ev_real64) dfY_j;
					EarthView::World::Spatial::Utility::CTransParameter *pObjectX = (EarthView::World::Spatial::Utility::CTransParameter*) pObjXXXX;
					pObjectX->setTransY(dfY);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_utility_TransParameter_setTransZ_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble dfZ_j)
				{
					ev_real64 dfZ = (ev_real64) dfZ_j;
					EarthView::World::Spatial::Utility::CTransParameter *pObjectX = (EarthView::World::Spatial::Utility::CTransParameter*) pObjXXXX;
					pObjectX->setTransZ(dfZ);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_utility_TransParameter_setRotateX_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble dfRX_j)
				{
					ev_real64 dfRX = (ev_real64) dfRX_j;
					EarthView::World::Spatial::Utility::CTransParameter *pObjectX = (EarthView::World::Spatial::Utility::CTransParameter*) pObjXXXX;
					pObjectX->setRotateX(dfRX);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_utility_TransParameter_setRotateY_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble dfRY_j)
				{
					ev_real64 dfRY = (ev_real64) dfRY_j;
					EarthView::World::Spatial::Utility::CTransParameter *pObjectX = (EarthView::World::Spatial::Utility::CTransParameter*) pObjXXXX;
					pObjectX->setRotateY(dfRY);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_utility_TransParameter_setRotateZ_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble dfRZ_j)
				{
					ev_real64 dfRZ = (ev_real64) dfRZ_j;
					EarthView::World::Spatial::Utility::CTransParameter *pObjectX = (EarthView::World::Spatial::Utility::CTransParameter*) pObjXXXX;
					pObjectX->setRotateZ(dfRZ);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_utility_TransParameter_setSaclePPM_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble dfPPM_j)
				{
					ev_real64 dfPPM = (ev_real64) dfPPM_j;
					EarthView::World::Spatial::Utility::CTransParameter *pObjectX = (EarthView::World::Spatial::Utility::CTransParameter*) pObjXXXX;
					pObjectX->setSaclePPM(dfPPM);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_utility_TransParameter_getTransX_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Utility::CTransParameter *pObjectX = (EarthView::World::Spatial::Utility::CTransParameter*) pObjXXXX;
					const ev_real64 __values1 = pObjectX->getTransX();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_utility_TransParameter_getTransY_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Utility::CTransParameter *pObjectX = (EarthView::World::Spatial::Utility::CTransParameter*) pObjXXXX;
					const ev_real64 __values1 = pObjectX->getTransY();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_utility_TransParameter_getTransZ_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Utility::CTransParameter *pObjectX = (EarthView::World::Spatial::Utility::CTransParameter*) pObjXXXX;
					const ev_real64 __values1 = pObjectX->getTransZ();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_utility_TransParameter_getRotateX_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Utility::CTransParameter *pObjectX = (EarthView::World::Spatial::Utility::CTransParameter*) pObjXXXX;
					const ev_real64 __values1 = pObjectX->getRotateX();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_utility_TransParameter_getRotateY_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Utility::CTransParameter *pObjectX = (EarthView::World::Spatial::Utility::CTransParameter*) pObjXXXX;
					const ev_real64 __values1 = pObjectX->getRotateY();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_utility_TransParameter_getRotateZ_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Utility::CTransParameter *pObjectX = (EarthView::World::Spatial::Utility::CTransParameter*) pObjXXXX;
					const ev_real64 __values1 = pObjectX->getRotateZ();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_utility_TransParameter_getSaclePPM_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Utility::CTransParameter *pObjectX = (EarthView::World::Spatial::Utility::CTransParameter*) pObjXXXX;
					const ev_real64 __values1 = pObjectX->getSaclePPM();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
			}
		}
	}
}
