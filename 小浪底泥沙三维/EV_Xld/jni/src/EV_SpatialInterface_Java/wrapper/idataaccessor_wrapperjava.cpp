/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialinterface/idataaccessor.h"
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
			namespace Accessor
			{
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial_accessor_EVAccessorTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						AT_UNKNOWN,
						AT_FILE,
						AT_DATABASE,
						AT_WEB
					};
					jintArray array = __env->NewIntArray(4);
					__env->SetIntArrayRegion(array, 0, 4, enum_values);
					return array;
				}
				class JIDataAccessorProxy : public EarthView::World::Spatial::Accessor::IDataAccessor
				{
				 private:
					EarthView::World::Core::ev_string m_getType_void_callback;
					EarthView::World::Core::ev_string m_open_EVString_callback;
					EarthView::World::Core::ev_string m_close_void_callback;
				public:
					JIDataAccessorProxy(EarthView::World::Core::CNameValuePairList *pList) : IDataAccessor(pList)
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
					void register_open_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_open_EVString_callback = __method;
					}
					void register_close_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_close_void_callback = __method;
					}
					virtual EarthView::World::Spatial::Accessor::EVAccessorType getType() const
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
							EarthView::World::Spatial::Accessor::EVAccessorType __values1 = (EarthView::World::Spatial::Accessor::EVAccessorType) __values1_j;
							return __values1;
						}
						else
						{
							return this->IDataAccessor::getType();
						}
					}
					virtual ev_bool open(const EVString& connectionString)
					{
						if (this->_gRef != NULL && this->m_open_EVString_callback != "" && this->isCustomExtend())
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
							EarthView::World::Core::ev_wstring connectionString_wch = connectionString;
							jstring connectionString_j = __env->NewString((const jchar*)connectionString_wch.getString(), connectionString_wch.size());
							jmethodID __method = __gr->getMethod("open_EVString_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , connectionString_j);
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
							return this->IDataAccessor::open(connectionString);
						}
					}
					virtual ev_bool close()
					{
						if (this->_gRef != NULL && this->m_close_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("close_void_callback");
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
							return this->IDataAccessor::close();
						}
					}
				};
				REGISTER_FACTORY_CLASS(JIDataAccessorProxy);
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_accessor_Idataaccessor_getType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Accessor::IDataAccessor *pObjectX = (EarthView::World::Spatial::Accessor::IDataAccessor*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIDataAccessorProxy))
					{
						EarthView::World::Spatial::Accessor::EVAccessorType __values1 = pObjectX->EarthView::World::Spatial::Accessor::IDataAccessor::getType();
						jint __values1_j = (jint) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Accessor::EVAccessorType __values1 = pObjectX->getType();
						jint __values1_j = (jint) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_accessor_Idataaccessor_register_1getType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIDataAccessorProxy *pObjectX = (JIDataAccessorProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_accessor_Idataaccessor_getType_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Accessor::IDataAccessor *pObjectX = (EarthView::World::Spatial::Accessor::IDataAccessor*) pObjXXXX;
					EarthView::World::Spatial::Accessor::EVAccessorType __values1 = pObjectX->EarthView::World::Spatial::Accessor::IDataAccessor::getType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_accessor_Idataaccessor_open_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring connectionString_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* connectionString_ch = (const ev_char*)__env->GetStringUTFChars(connectionString_j,JNI_FALSE);
					const EVString connectionString = connectionString_ch;
					__env->ReleaseStringUTFChars(connectionString_j, (const char *)connectionString_ch);
					#else
					const ev_wchar* connectionString_ch = (const ev_wchar*)__env->GetStringChars(connectionString_j,JNI_FALSE);
					const EVString connectionString = connectionString_ch;
					__env->ReleaseStringChars(connectionString_j, (const jchar *)connectionString_ch);
					#endif
					EarthView::World::Spatial::Accessor::IDataAccessor *pObjectX = (EarthView::World::Spatial::Accessor::IDataAccessor*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIDataAccessorProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::Accessor::IDataAccessor::open(connectionString);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->open(connectionString);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_accessor_Idataaccessor_register_1open_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIDataAccessorProxy *pObjectX = (JIDataAccessorProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_open_EVString_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"open_EVString_callback", "(Ljava/lang/String;)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_accessor_Idataaccessor_open_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring connectionString_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* connectionString_ch = (const ev_char*)__env->GetStringUTFChars(connectionString_j,JNI_FALSE);
					const EVString connectionString = connectionString_ch;
					__env->ReleaseStringUTFChars(connectionString_j, (const char *)connectionString_ch);
					#else
					const ev_wchar* connectionString_ch = (const ev_wchar*)__env->GetStringChars(connectionString_j,JNI_FALSE);
					const EVString connectionString = connectionString_ch;
					__env->ReleaseStringChars(connectionString_j, (const jchar *)connectionString_ch);
					#endif
					EarthView::World::Spatial::Accessor::IDataAccessor *pObjectX = (EarthView::World::Spatial::Accessor::IDataAccessor*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::Accessor::IDataAccessor::open(connectionString);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_accessor_Idataaccessor_close_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Accessor::IDataAccessor *pObjectX = (EarthView::World::Spatial::Accessor::IDataAccessor*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIDataAccessorProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::Accessor::IDataAccessor::close();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->close();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_accessor_Idataaccessor_register_1close_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIDataAccessorProxy *pObjectX = (JIDataAccessorProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_close_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"close_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_accessor_Idataaccessor_close_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Accessor::IDataAccessor *pObjectX = (EarthView::World::Spatial::Accessor::IDataAccessor*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::Accessor::IDataAccessor::close();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
		}
	}
}
