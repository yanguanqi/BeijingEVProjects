/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialinterface/ispatialreference.h"
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
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial_utility_EVSpatialReferenceStringTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						EV_WKT,
						EV_ESRI,
						EV_PROJ4,
						EV_ESPG,
						EV_UNKNOWNSTR
					};
					jintArray array = __env->NewIntArray(5);
					__env->SetIntArrayRegion(array, 0, 5, enum_values);
					return array;
				}
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial_utility_EVDatumTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						EV_UNKNOWND,
						EV_BEIJING54D,
						EV_XIAN80D,
						EV_WGS84D,
						EV_CGCS2000D,
						EV_WGS72D,
						EV_NSWC9Z2D
					};
					jintArray array = __env->NewIntArray(7);
					__env->SetIntArrayRegion(array, 0, 7, enum_values);
					return array;
				}
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Geometry
			{
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial_geometry_EVSpatialReferenceTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						SST_UNKNOWN,
						SST_GEOCOORDINATESYSTEM,
						SST_PROJCOORDINATESYSTEM
					};
					jintArray array = __env->NewIntArray(3);
					__env->SetIntArrayRegion(array, 0, 3, enum_values);
					return array;
				}
				class JIEllipseSpheriodProxy : public EarthView::World::Spatial::Geometry::IEllipseSpheriod
				{
				 private:
					EarthView::World::Core::ev_string m_getSamiMajor_void_callback;
					EarthView::World::Core::ev_string m_getInvFlattening_void_callback;
					EarthView::World::Core::ev_string m_getSphereName_void_callback;
					EarthView::World::Core::ev_string m_getDatumType_void_callback;
					EarthView::World::Core::ev_string m_getFromGreenWicth_void_callback;
					EarthView::World::Core::ev_string m_getAngularUnits_EVString_ev_real64_callback;
				public:
					JIEllipseSpheriodProxy(EarthView::World::Core::CNameValuePairList *pList) : IEllipseSpheriod(pList)
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
							return this->IEllipseSpheriod::getSamiMajor();
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
							return this->IEllipseSpheriod::getInvFlattening();
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
							return this->IEllipseSpheriod::getSphereName();
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
							return this->IEllipseSpheriod::getDatumType();
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
							return this->IEllipseSpheriod::getFromGreenWicth();
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
							return this->IEllipseSpheriod::getAngularUnits(pszname, dfunitsValue);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JIEllipseSpheriodProxy);
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_geometry_Iellipsespheriod_getSamiMajor_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Geometry::IEllipseSpheriod *pObjectX = (EarthView::World::Spatial::Geometry::IEllipseSpheriod*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIEllipseSpheriodProxy))
					{
						const ev_real64 __values1 = pObjectX->EarthView::World::Spatial::Geometry::IEllipseSpheriod::getSamiMajor();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_Iellipsespheriod_register_1getSamiMajor_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIEllipseSpheriodProxy *pObjectX = (JIEllipseSpheriodProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_geometry_Iellipsespheriod_getSamiMajor_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Geometry::IEllipseSpheriod *pObjectX = (EarthView::World::Spatial::Geometry::IEllipseSpheriod*) pObjXXXX;
					const ev_real64 __values1 = pObjectX->EarthView::World::Spatial::Geometry::IEllipseSpheriod::getSamiMajor();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_geometry_Iellipsespheriod_getInvFlattening_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Geometry::IEllipseSpheriod *pObjectX = (EarthView::World::Spatial::Geometry::IEllipseSpheriod*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIEllipseSpheriodProxy))
					{
						const ev_real64 __values1 = pObjectX->EarthView::World::Spatial::Geometry::IEllipseSpheriod::getInvFlattening();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_Iellipsespheriod_register_1getInvFlattening_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIEllipseSpheriodProxy *pObjectX = (JIEllipseSpheriodProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_geometry_Iellipsespheriod_getInvFlattening_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Geometry::IEllipseSpheriod *pObjectX = (EarthView::World::Spatial::Geometry::IEllipseSpheriod*) pObjXXXX;
					const ev_real64 __values1 = pObjectX->EarthView::World::Spatial::Geometry::IEllipseSpheriod::getInvFlattening();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_geometry_Iellipsespheriod_getSphereName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Geometry::IEllipseSpheriod *pObjectX = (EarthView::World::Spatial::Geometry::IEllipseSpheriod*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIEllipseSpheriodProxy))
					{
						EVString __values1 = pObjectX->EarthView::World::Spatial::Geometry::IEllipseSpheriod::getSphereName();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_Iellipsespheriod_register_1getSphereName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIEllipseSpheriodProxy *pObjectX = (JIEllipseSpheriodProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_geometry_Iellipsespheriod_getSphereName_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Geometry::IEllipseSpheriod *pObjectX = (EarthView::World::Spatial::Geometry::IEllipseSpheriod*) pObjXXXX;
					EVString __values1 = pObjectX->EarthView::World::Spatial::Geometry::IEllipseSpheriod::getSphereName();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_geometry_Iellipsespheriod_getDatumType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Geometry::IEllipseSpheriod *pObjectX = (EarthView::World::Spatial::Geometry::IEllipseSpheriod*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIEllipseSpheriodProxy))
					{
						const EarthView::World::Spatial::Utility::EVDatumType __values1 = pObjectX->EarthView::World::Spatial::Geometry::IEllipseSpheriod::getDatumType();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_Iellipsespheriod_register_1getDatumType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIEllipseSpheriodProxy *pObjectX = (JIEllipseSpheriodProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_geometry_Iellipsespheriod_getDatumType_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Geometry::IEllipseSpheriod *pObjectX = (EarthView::World::Spatial::Geometry::IEllipseSpheriod*) pObjXXXX;
					const EarthView::World::Spatial::Utility::EVDatumType __values1 = pObjectX->EarthView::World::Spatial::Geometry::IEllipseSpheriod::getDatumType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_geometry_Iellipsespheriod_getFromGreenWicth_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Geometry::IEllipseSpheriod *pObjectX = (EarthView::World::Spatial::Geometry::IEllipseSpheriod*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIEllipseSpheriodProxy))
					{
						const ev_real64 __values1 = pObjectX->EarthView::World::Spatial::Geometry::IEllipseSpheriod::getFromGreenWicth();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_Iellipsespheriod_register_1getFromGreenWicth_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIEllipseSpheriodProxy *pObjectX = (JIEllipseSpheriodProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_geometry_Iellipsespheriod_getFromGreenWicth_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Geometry::IEllipseSpheriod *pObjectX = (EarthView::World::Spatial::Geometry::IEllipseSpheriod*) pObjXXXX;
					const ev_real64 __values1 = pObjectX->EarthView::World::Spatial::Geometry::IEllipseSpheriod::getFromGreenWicth();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_Iellipsespheriod_getAngularUnits_1EVString_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pszname_j, jlong dfunitsValue_j)
				{
					EVString &pszname = *(EVString*) pszname_j;
					ev_real64 &dfunitsValue = *(ev_real64*) dfunitsValue_j;
					const 					EarthView::World::Spatial::Geometry::IEllipseSpheriod *pObjectX = (EarthView::World::Spatial::Geometry::IEllipseSpheriod*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIEllipseSpheriodProxy))
					{
						pObjectX->EarthView::World::Spatial::Geometry::IEllipseSpheriod::getAngularUnits(pszname, dfunitsValue);
					}
					else
					{
						pObjectX->getAngularUnits(pszname, dfunitsValue);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_Iellipsespheriod_register_1getAngularUnits_1EVString_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIEllipseSpheriodProxy *pObjectX = (JIEllipseSpheriodProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_Iellipsespheriod_getAngularUnits_1EVString_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pszname_j, jlong dfunitsValue_j)
				{
					EVString &pszname = *(EVString*) pszname_j;
					ev_real64 &dfunitsValue = *(ev_real64*) dfunitsValue_j;
					const 					EarthView::World::Spatial::Geometry::IEllipseSpheriod *pObjectX = (EarthView::World::Spatial::Geometry::IEllipseSpheriod*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Geometry::IEllipseSpheriod::getAngularUnits(pszname, dfunitsValue);
				}
				class JISpatialReferenceProxy : public EarthView::World::Spatial::Geometry::ISpatialReference
				{
				 private:
					EarthView::World::Core::ev_string m_getType_void_callback;
					EarthView::World::Core::ev_string m_getSRID_void_callback;
					EarthView::World::Core::ev_string m_ev_clone_void_callback;
					EarthView::World::Core::ev_string m_getCEllipseSphere_void_callback;
					EarthView::World::Core::ev_string m_exportToString_EVSpatialReferenceStringType_EVString_callback;
					EarthView::World::Core::ev_string m_getCoordUnits_EVString_ev_real64_callback;
					EarthView::World::Core::ev_string m_getSamiMajor_void_callback;
					EarthView::World::Core::ev_string m_getInvFlattening_void_callback;
					EarthView::World::Core::ev_string m_getSphereName_void_callback;
					EarthView::World::Core::ev_string m_getCoordianteSystemName_void_callback;
					EarthView::World::Core::ev_string m_toStream_EVSpatialReferenceStringType_CDataStream_callback;
					EarthView::World::Core::ev_string m_isSameAs_ISpatialReference_callback;
					EarthView::World::Core::ev_string m_getInOutputRect_ev_bool_ev_real64_ev_real64_ev_real64_ev_real64_callback;
				public:
					JISpatialReferenceProxy(EarthView::World::Core::CNameValuePairList *pList) : ISpatialReference(pList)
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
					void register_getSRID_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getSRID_void_callback = __method;
					}
					void register_ev_clone_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_ev_clone_void_callback = __method;
					}
					void register_getCEllipseSphere_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getCEllipseSphere_void_callback = __method;
					}
					void register_exportToString_EVSpatialReferenceStringType_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_exportToString_EVSpatialReferenceStringType_EVString_callback = __method;
					}
					void register_getCoordUnits_EVString_ev_real64_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getCoordUnits_EVString_ev_real64_callback = __method;
					}
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
					void register_getCoordianteSystemName_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getCoordianteSystemName_void_callback = __method;
					}
					void register_toStream_EVSpatialReferenceStringType_CDataStream_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_toStream_EVSpatialReferenceStringType_CDataStream_callback = __method;
					}
					void register_isSameAs_ISpatialReference_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_isSameAs_ISpatialReference_callback = __method;
					}
					void register_getInOutputRect_ev_bool_ev_real64_ev_real64_ev_real64_ev_real64_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getInOutputRect_ev_bool_ev_real64_ev_real64_ev_real64_ev_real64_callback = __method;
					}
					virtual EarthView::World::Spatial::Geometry::EVSpatialReferenceType getType() const
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
							jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::Geometry::EVSpatialReferenceType __values1 = (EarthView::World::Spatial::Geometry::EVSpatialReferenceType) __values1_j;
							return __values1;
						}
						else
						{
							return this->ISpatialReference::getType();
						}
					}
					virtual ev_uint32 getSRID() const
					{
						if (this->_gRef != NULL && this->m_getSRID_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getSRID_void_callback");
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
							return this->ISpatialReference::getSRID();
						}
					}
					virtual EarthView::World::Spatial::Geometry::ISpatialReference* clone() const
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
							EarthView::World::Spatial::Geometry::ISpatialReference *__values1 = (EarthView::World::Spatial::Geometry::ISpatialReference*) __values1_j;
							return __values1;
						}
						else
						{
							return this->ISpatialReference::clone();
						}
					}
					virtual const EarthView::World::Spatial::Geometry::IEllipseSpheriod* getCEllipseSphere() const
					{
						if (this->_gRef != NULL && this->m_getCEllipseSphere_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getCEllipseSphere_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							const EarthView::World::Spatial::Geometry::IEllipseSpheriod *__values1 = (const EarthView::World::Spatial::Geometry::IEllipseSpheriod*) __values1_j;
							return __values1;
						}
						else
						{
							return this->ISpatialReference::getCEllipseSphere();
						}
					}
					virtual void exportToString(EarthView::World::Spatial::Utility::EVSpatialReferenceStringType type, EVString& pszstrText) const
					{
						if (this->_gRef != NULL && this->m_exportToString_EVSpatialReferenceStringType_EVString_callback != "" && this->isCustomExtend())
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
							jint type_j = (jint) type;
							jlong pszstrText_j = (jlong) &pszstrText;
							jmethodID __method = __gr->getMethod("exportToString_EVSpatialReferenceStringType_EVString_callback");
							__env->CallVoidMethod(__obj, __method , type_j, pszstrText_j);
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
							return this->ISpatialReference::exportToString(type, pszstrText);
						}
					}
					virtual void getCoordUnits(EVString& pszunitsName, ev_real64& dfvalue) const
					{
						if (this->_gRef != NULL && this->m_getCoordUnits_EVString_ev_real64_callback != "" && this->isCustomExtend())
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
							jlong pszunitsName_j = (jlong) &pszunitsName;
							jlong dfvalue_j = (jlong) &dfvalue;
							jmethodID __method = __gr->getMethod("getCoordUnits_EVString_ev_real64_callback");
							__env->CallVoidMethod(__obj, __method , pszunitsName_j, dfvalue_j);
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
							return this->ISpatialReference::getCoordUnits(pszunitsName, dfvalue);
						}
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
							return this->ISpatialReference::getSamiMajor();
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
							return this->ISpatialReference::getInvFlattening();
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
							return this->ISpatialReference::getSphereName();
						}
					}
					virtual EVString getCoordianteSystemName() const
					{
						if (this->_gRef != NULL && this->m_getCoordianteSystemName_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getCoordianteSystemName_void_callback");
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
							return this->ISpatialReference::getCoordianteSystemName();
						}
					}
					virtual const void toStream(EarthView::World::Spatial::Utility::EVSpatialReferenceStringType type, EarthView::World::Core::CDataStream& objStream) const
					{
						if (this->_gRef != NULL && this->m_toStream_EVSpatialReferenceStringType_CDataStream_callback != "" && this->isCustomExtend())
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
							jint type_j = (jint) type;
							jlong objStream_j = (jlong) &objStream;
							jmethodID __method = __gr->getMethod("toStream_EVSpatialReferenceStringType_CDataStream_callback");
							__env->CallVoidMethod(__obj, __method , type_j, objStream_j);
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
							return this->ISpatialReference::toStream(type, objStream);
						}
					}
					virtual ev_bool isSameAs(const EarthView::World::Spatial::Geometry::ISpatialReference* pref) const
					{
						if (this->_gRef != NULL && this->m_isSameAs_ISpatialReference_callback != "" && this->isCustomExtend())
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
							jlong pref_j = (jlong) pref;
							jmethodID __method = __gr->getMethod("isSameAs_ISpatialReference_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , pref_j);
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
							return this->ISpatialReference::isSameAs(pref);
						}
					}
					virtual void getInOutputRect(ev_bool isLatLong, ev_real64& dfLeft, ev_real64& dfTop, ev_real64& dfRight, ev_real64& dfDown) const
					{
						if (this->_gRef != NULL && this->m_getInOutputRect_ev_bool_ev_real64_ev_real64_ev_real64_ev_real64_callback != "" && this->isCustomExtend())
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
							jboolean isLatLong_j = (jboolean) isLatLong;
							jlong dfLeft_j = (jlong) &dfLeft;
							jlong dfTop_j = (jlong) &dfTop;
							jlong dfRight_j = (jlong) &dfRight;
							jlong dfDown_j = (jlong) &dfDown;
							jmethodID __method = __gr->getMethod("getInOutputRect_ev_bool_ev_real64_ev_real64_ev_real64_ev_real64_callback");
							__env->CallVoidMethod(__obj, __method , isLatLong_j, dfLeft_j, dfTop_j, dfRight_j, dfDown_j);
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
							return this->ISpatialReference::getInOutputRect(isLatLong, dfLeft, dfTop, dfRight, dfDown);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JISpatialReferenceProxy);
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_geometry_Ispatialreference_getType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Geometry::ISpatialReference *pObjectX = (EarthView::World::Spatial::Geometry::ISpatialReference*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JISpatialReferenceProxy))
					{
						EarthView::World::Spatial::Geometry::EVSpatialReferenceType __values1 = pObjectX->EarthView::World::Spatial::Geometry::ISpatialReference::getType();
						jint __values1_j = (jint) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Geometry::EVSpatialReferenceType __values1 = pObjectX->getType();
						jint __values1_j = (jint) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_Ispatialreference_register_1getType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JISpatialReferenceProxy *pObjectX = (JISpatialReferenceProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getType_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getType_void_callback", "()I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_geometry_Ispatialreference_getType_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Geometry::ISpatialReference *pObjectX = (EarthView::World::Spatial::Geometry::ISpatialReference*) pObjXXXX;
					EarthView::World::Spatial::Geometry::EVSpatialReferenceType __values1 = pObjectX->EarthView::World::Spatial::Geometry::ISpatialReference::getType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geometry_Ispatialreference_getSRID_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Geometry::ISpatialReference *pObjectX = (EarthView::World::Spatial::Geometry::ISpatialReference*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JISpatialReferenceProxy))
					{
						ev_uint32 __values1 = pObjectX->EarthView::World::Spatial::Geometry::ISpatialReference::getSRID();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						ev_uint32 __values1 = pObjectX->getSRID();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_Ispatialreference_register_1getSRID_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JISpatialReferenceProxy *pObjectX = (JISpatialReferenceProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getSRID_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getSRID_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geometry_Ispatialreference_getSRID_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Geometry::ISpatialReference *pObjectX = (EarthView::World::Spatial::Geometry::ISpatialReference*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->EarthView::World::Spatial::Geometry::ISpatialReference::getSRID();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geometry_Ispatialreference_ev_1clone_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Geometry::ISpatialReference *pObjectX = (EarthView::World::Spatial::Geometry::ISpatialReference*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JISpatialReferenceProxy))
					{
						EarthView::World::Spatial::Geometry::ISpatialReference* __values1 = pObjectX->EarthView::World::Spatial::Geometry::ISpatialReference::clone();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Geometry::ISpatialReference* __values1 = pObjectX->clone();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_Ispatialreference_register_1ev_1clone_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JISpatialReferenceProxy *pObjectX = (JISpatialReferenceProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geometry_Ispatialreference_ev_1clone_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Geometry::ISpatialReference *pObjectX = (EarthView::World::Spatial::Geometry::ISpatialReference*) pObjXXXX;
					EarthView::World::Spatial::Geometry::ISpatialReference* __values1 = pObjectX->EarthView::World::Spatial::Geometry::ISpatialReference::clone();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geometry_Ispatialreference_getCEllipseSphere_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Geometry::ISpatialReference *pObjectX = (EarthView::World::Spatial::Geometry::ISpatialReference*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JISpatialReferenceProxy))
					{
						const EarthView::World::Spatial::Geometry::IEllipseSpheriod* __values1 = pObjectX->EarthView::World::Spatial::Geometry::ISpatialReference::getCEllipseSphere();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						const EarthView::World::Spatial::Geometry::IEllipseSpheriod* __values1 = pObjectX->getCEllipseSphere();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_Ispatialreference_register_1getCEllipseSphere_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JISpatialReferenceProxy *pObjectX = (JISpatialReferenceProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getCEllipseSphere_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getCEllipseSphere_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geometry_Ispatialreference_getCEllipseSphere_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Geometry::ISpatialReference *pObjectX = (EarthView::World::Spatial::Geometry::ISpatialReference*) pObjXXXX;
					const EarthView::World::Spatial::Geometry::IEllipseSpheriod* __values1 = pObjectX->EarthView::World::Spatial::Geometry::ISpatialReference::getCEllipseSphere();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_Ispatialreference_exportToString_1EVSpatialReferenceStringType_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint type_j, jlong pszstrText_j)
				{
					EarthView::World::Spatial::Utility::EVSpatialReferenceStringType type = (EarthView::World::Spatial::Utility::EVSpatialReferenceStringType) type_j;
					EVString &pszstrText = *(EVString*) pszstrText_j;
					const 					EarthView::World::Spatial::Geometry::ISpatialReference *pObjectX = (EarthView::World::Spatial::Geometry::ISpatialReference*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JISpatialReferenceProxy))
					{
						pObjectX->EarthView::World::Spatial::Geometry::ISpatialReference::exportToString(type, pszstrText);
					}
					else
					{
						pObjectX->exportToString(type, pszstrText);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_Ispatialreference_register_1exportToString_1EVSpatialReferenceStringType_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JISpatialReferenceProxy *pObjectX = (JISpatialReferenceProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_exportToString_EVSpatialReferenceStringType_EVString_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"exportToString_EVSpatialReferenceStringType_EVString_callback", "(IJ)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_Ispatialreference_exportToString_1EVSpatialReferenceStringType_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint type_j, jlong pszstrText_j)
				{
					EarthView::World::Spatial::Utility::EVSpatialReferenceStringType type = (EarthView::World::Spatial::Utility::EVSpatialReferenceStringType) type_j;
					EVString &pszstrText = *(EVString*) pszstrText_j;
					const 					EarthView::World::Spatial::Geometry::ISpatialReference *pObjectX = (EarthView::World::Spatial::Geometry::ISpatialReference*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Geometry::ISpatialReference::exportToString(type, pszstrText);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_Ispatialreference_getCoordUnits_1EVString_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pszunitsName_j, jlong dfvalue_j)
				{
					EVString &pszunitsName = *(EVString*) pszunitsName_j;
					ev_real64 &dfvalue = *(ev_real64*) dfvalue_j;
					const 					EarthView::World::Spatial::Geometry::ISpatialReference *pObjectX = (EarthView::World::Spatial::Geometry::ISpatialReference*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JISpatialReferenceProxy))
					{
						pObjectX->EarthView::World::Spatial::Geometry::ISpatialReference::getCoordUnits(pszunitsName, dfvalue);
					}
					else
					{
						pObjectX->getCoordUnits(pszunitsName, dfvalue);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_Ispatialreference_register_1getCoordUnits_1EVString_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JISpatialReferenceProxy *pObjectX = (JISpatialReferenceProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getCoordUnits_EVString_ev_real64_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getCoordUnits_EVString_ev_real64_callback", "(JJ)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_Ispatialreference_getCoordUnits_1EVString_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pszunitsName_j, jlong dfvalue_j)
				{
					EVString &pszunitsName = *(EVString*) pszunitsName_j;
					ev_real64 &dfvalue = *(ev_real64*) dfvalue_j;
					const 					EarthView::World::Spatial::Geometry::ISpatialReference *pObjectX = (EarthView::World::Spatial::Geometry::ISpatialReference*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Geometry::ISpatialReference::getCoordUnits(pszunitsName, dfvalue);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_geometry_Ispatialreference_getSamiMajor_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Geometry::ISpatialReference *pObjectX = (EarthView::World::Spatial::Geometry::ISpatialReference*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JISpatialReferenceProxy))
					{
						const ev_real64 __values1 = pObjectX->EarthView::World::Spatial::Geometry::ISpatialReference::getSamiMajor();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_Ispatialreference_register_1getSamiMajor_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JISpatialReferenceProxy *pObjectX = (JISpatialReferenceProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_geometry_Ispatialreference_getSamiMajor_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Geometry::ISpatialReference *pObjectX = (EarthView::World::Spatial::Geometry::ISpatialReference*) pObjXXXX;
					const ev_real64 __values1 = pObjectX->EarthView::World::Spatial::Geometry::ISpatialReference::getSamiMajor();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_geometry_Ispatialreference_getInvFlattening_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Geometry::ISpatialReference *pObjectX = (EarthView::World::Spatial::Geometry::ISpatialReference*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JISpatialReferenceProxy))
					{
						const ev_real64 __values1 = pObjectX->EarthView::World::Spatial::Geometry::ISpatialReference::getInvFlattening();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_Ispatialreference_register_1getInvFlattening_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JISpatialReferenceProxy *pObjectX = (JISpatialReferenceProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_geometry_Ispatialreference_getInvFlattening_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Geometry::ISpatialReference *pObjectX = (EarthView::World::Spatial::Geometry::ISpatialReference*) pObjXXXX;
					const ev_real64 __values1 = pObjectX->EarthView::World::Spatial::Geometry::ISpatialReference::getInvFlattening();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_geometry_Ispatialreference_getSphereName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Geometry::ISpatialReference *pObjectX = (EarthView::World::Spatial::Geometry::ISpatialReference*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JISpatialReferenceProxy))
					{
						EVString __values1 = pObjectX->EarthView::World::Spatial::Geometry::ISpatialReference::getSphereName();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_Ispatialreference_register_1getSphereName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JISpatialReferenceProxy *pObjectX = (JISpatialReferenceProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_geometry_Ispatialreference_getSphereName_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Geometry::ISpatialReference *pObjectX = (EarthView::World::Spatial::Geometry::ISpatialReference*) pObjXXXX;
					EVString __values1 = pObjectX->EarthView::World::Spatial::Geometry::ISpatialReference::getSphereName();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_geometry_Ispatialreference_getCoordianteSystemName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Geometry::ISpatialReference *pObjectX = (EarthView::World::Spatial::Geometry::ISpatialReference*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JISpatialReferenceProxy))
					{
						EVString __values1 = pObjectX->EarthView::World::Spatial::Geometry::ISpatialReference::getCoordianteSystemName();
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
					else
					{
						EVString __values1 = pObjectX->getCoordianteSystemName();
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_Ispatialreference_register_1getCoordianteSystemName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JISpatialReferenceProxy *pObjectX = (JISpatialReferenceProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getCoordianteSystemName_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getCoordianteSystemName_void_callback", "()Ljava/lang/String;");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_geometry_Ispatialreference_getCoordianteSystemName_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Geometry::ISpatialReference *pObjectX = (EarthView::World::Spatial::Geometry::ISpatialReference*) pObjXXXX;
					EVString __values1 = pObjectX->EarthView::World::Spatial::Geometry::ISpatialReference::getCoordianteSystemName();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_Ispatialreference_toStream_1EVSpatialReferenceStringType_1CDataStream(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint type_j, jlong objStream_j)
				{
					EarthView::World::Spatial::Utility::EVSpatialReferenceStringType type = (EarthView::World::Spatial::Utility::EVSpatialReferenceStringType) type_j;
					EarthView::World::Core::CDataStream &objStream = *(EarthView::World::Core::CDataStream*) objStream_j;
					const 					EarthView::World::Spatial::Geometry::ISpatialReference *pObjectX = (EarthView::World::Spatial::Geometry::ISpatialReference*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JISpatialReferenceProxy))
					{
						pObjectX->EarthView::World::Spatial::Geometry::ISpatialReference::toStream(type, objStream);
					}
					else
					{
						pObjectX->toStream(type, objStream);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_Ispatialreference_register_1toStream_1EVSpatialReferenceStringType_1CDataStream(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JISpatialReferenceProxy *pObjectX = (JISpatialReferenceProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_toStream_EVSpatialReferenceStringType_CDataStream_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"toStream_EVSpatialReferenceStringType_CDataStream_callback", "(IJ)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_Ispatialreference_toStream_1EVSpatialReferenceStringType_1CDataStream_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint type_j, jlong objStream_j)
				{
					EarthView::World::Spatial::Utility::EVSpatialReferenceStringType type = (EarthView::World::Spatial::Utility::EVSpatialReferenceStringType) type_j;
					EarthView::World::Core::CDataStream &objStream = *(EarthView::World::Core::CDataStream*) objStream_j;
					const 					EarthView::World::Spatial::Geometry::ISpatialReference *pObjectX = (EarthView::World::Spatial::Geometry::ISpatialReference*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Geometry::ISpatialReference::toStream(type, objStream);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_geometry_Ispatialreference_isSameAs_1ISpatialReference(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pref_j)
				{
					const EarthView::World::Spatial::Geometry::ISpatialReference *pref = (const EarthView::World::Spatial::Geometry::ISpatialReference*) pref_j;
					const 					EarthView::World::Spatial::Geometry::ISpatialReference *pObjectX = (EarthView::World::Spatial::Geometry::ISpatialReference*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JISpatialReferenceProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::Geometry::ISpatialReference::isSameAs(pref);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->isSameAs(pref);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_Ispatialreference_register_1isSameAs_1ISpatialReference(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JISpatialReferenceProxy *pObjectX = (JISpatialReferenceProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_isSameAs_ISpatialReference_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"isSameAs_ISpatialReference_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_geometry_Ispatialreference_isSameAs_1ISpatialReference_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pref_j)
				{
					const EarthView::World::Spatial::Geometry::ISpatialReference *pref = (const EarthView::World::Spatial::Geometry::ISpatialReference*) pref_j;
					const 					EarthView::World::Spatial::Geometry::ISpatialReference *pObjectX = (EarthView::World::Spatial::Geometry::ISpatialReference*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::Geometry::ISpatialReference::isSameAs(pref);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_Ispatialreference_getInOutputRect_1ev_1bool_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean isLatLong_j, jlong dfLeft_j, jlong dfTop_j, jlong dfRight_j, jlong dfDown_j)
				{
					ev_bool isLatLong = (ev_bool) isLatLong_j;
					ev_real64 &dfLeft = *(ev_real64*) dfLeft_j;
					ev_real64 &dfTop = *(ev_real64*) dfTop_j;
					ev_real64 &dfRight = *(ev_real64*) dfRight_j;
					ev_real64 &dfDown = *(ev_real64*) dfDown_j;
					const 					EarthView::World::Spatial::Geometry::ISpatialReference *pObjectX = (EarthView::World::Spatial::Geometry::ISpatialReference*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JISpatialReferenceProxy))
					{
						pObjectX->EarthView::World::Spatial::Geometry::ISpatialReference::getInOutputRect(isLatLong, dfLeft, dfTop, dfRight, dfDown);
					}
					else
					{
						pObjectX->getInOutputRect(isLatLong, dfLeft, dfTop, dfRight, dfDown);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_Ispatialreference_register_1getInOutputRect_1ev_1bool_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JISpatialReferenceProxy *pObjectX = (JISpatialReferenceProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getInOutputRect_ev_bool_ev_real64_ev_real64_ev_real64_ev_real64_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getInOutputRect_ev_bool_ev_real64_ev_real64_ev_real64_ev_real64_callback", "(ZJJJJ)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_Ispatialreference_getInOutputRect_1ev_1bool_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean isLatLong_j, jlong dfLeft_j, jlong dfTop_j, jlong dfRight_j, jlong dfDown_j)
				{
					ev_bool isLatLong = (ev_bool) isLatLong_j;
					ev_real64 &dfLeft = *(ev_real64*) dfLeft_j;
					ev_real64 &dfTop = *(ev_real64*) dfTop_j;
					ev_real64 &dfRight = *(ev_real64*) dfRight_j;
					ev_real64 &dfDown = *(ev_real64*) dfDown_j;
					const 					EarthView::World::Spatial::Geometry::ISpatialReference *pObjectX = (EarthView::World::Spatial::Geometry::ISpatialReference*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Geometry::ISpatialReference::getInOutputRect(isLatLong, dfLeft, dfTop, dfRight, dfDown);
				}
			}
		}
	}
}
