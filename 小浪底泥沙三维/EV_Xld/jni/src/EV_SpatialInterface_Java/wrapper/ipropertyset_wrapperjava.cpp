/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialinterface/ipropertyset.h"
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
			namespace GeoDataset
			{
				class JIPropertySetProxy : public EarthView::World::Spatial::GeoDataset::IPropertySet
				{
				 private:
					EarthView::World::Core::ev_string m_getCount_void_callback;
					EarthView::World::Core::ev_string m_exist_EVString_callback;
					EarthView::World::Core::ev_string m_getKey_ev_uint32_callback;
					EarthView::World::Core::ev_string m_setProperty_EVString_CVariant_callback;
					EarthView::World::Core::ev_string m_getProperty_EVString_callback;
					EarthView::World::Core::ev_string m_remove_EVString_callback;
					EarthView::World::Core::ev_string m_clear_void_callback;
					EarthView::World::Core::ev_string m_ev_clone_void_callback;
				public:
					JIPropertySetProxy(EarthView::World::Core::CNameValuePairList *pList) : IPropertySet(pList)
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
					void register_getCount_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getCount_void_callback = __method;
					}
					void register_exist_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_exist_EVString_callback = __method;
					}
					void register_getKey_ev_uint32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getKey_ev_uint32_callback = __method;
					}
					void register_setProperty_EVString_CVariant_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setProperty_EVString_CVariant_callback = __method;
					}
					void register_getProperty_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getProperty_EVString_callback = __method;
					}
					void register_remove_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_remove_EVString_callback = __method;
					}
					void register_clear_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_clear_void_callback = __method;
					}
					void register_ev_clone_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_ev_clone_void_callback = __method;
					}
					virtual ev_uint32 getCount() const
					{
						if (this->_gRef != NULL && this->m_getCount_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getCount_void_callback");
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
							return this->IPropertySet::getCount();
						}
					}
					virtual ev_bool exist(const EVString& key) const
					{
						if (this->_gRef != NULL && this->m_exist_EVString_callback != "" && this->isCustomExtend())
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
							EarthView::World::Core::ev_wstring key_wch = key;
							jstring key_j = __env->NewString((const jchar*)key_wch.getString(), key_wch.size());
							jmethodID __method = __gr->getMethod("exist_EVString_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , key_j);
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
							return this->IPropertySet::exist(key);
						}
					}
					virtual EVString getKey(ev_uint32 index) const
					{
						if (this->_gRef != NULL && this->m_getKey_ev_uint32_callback != "" && this->isCustomExtend())
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
							jlong index_j = (jlong) index;
							jmethodID __method = __gr->getMethod("getKey_ev_uint32_callback");
							jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method , index_j);
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
							return this->IPropertySet::getKey(index);
						}
					}
					virtual void setProperty(const EVString& key, const EarthView::World::Core::CVariant& value)
					{
						if (this->_gRef != NULL && this->m_setProperty_EVString_CVariant_callback != "" && this->isCustomExtend())
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
							EarthView::World::Core::ev_wstring key_wch = key;
							jstring key_j = __env->NewString((const jchar*)key_wch.getString(), key_wch.size());
							jlong value_j = (jlong) &value;
							jmethodID __method = __gr->getMethod("setProperty_EVString_CVariant_callback");
							__env->CallVoidMethod(__obj, __method , key_j, value_j);
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
							return this->IPropertySet::setProperty(key, value);
						}
					}
					virtual const EarthView::World::Core::CVariant& getProperty(const EVString& key) const
					{
						if (this->_gRef != NULL && this->m_getProperty_EVString_callback != "" && this->isCustomExtend())
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
							EarthView::World::Core::ev_wstring key_wch = key;
							jstring key_j = __env->NewString((const jchar*)key_wch.getString(), key_wch.size());
							jmethodID __method = __gr->getMethod("getProperty_EVString_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , key_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							const EarthView::World::Core::CVariant &__values1 = *(const EarthView::World::Core::CVariant*) __values1_j;
							return __values1;
						}
						else
						{
							return this->IPropertySet::getProperty(key);
						}
					}
					virtual void remove(const EVString& key)
					{
						if (this->_gRef != NULL && this->m_remove_EVString_callback != "" && this->isCustomExtend())
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
							EarthView::World::Core::ev_wstring key_wch = key;
							jstring key_j = __env->NewString((const jchar*)key_wch.getString(), key_wch.size());
							jmethodID __method = __gr->getMethod("remove_EVString_callback");
							__env->CallVoidMethod(__obj, __method , key_j);
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
							return this->IPropertySet::remove(key);
						}
					}
					virtual void clear()
					{
						if (this->_gRef != NULL && this->m_clear_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("clear_void_callback");
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
							return this->IPropertySet::clear();
						}
					}
					virtual EarthView::World::Spatial::GeoDataset::IPropertySet* clone() const
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
							EarthView::World::Spatial::GeoDataset::IPropertySet *__values1 = (EarthView::World::Spatial::GeoDataset::IPropertySet*) __values1_j;
							if(__values1 != NULL) {
								((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(false);
							}
							return __values1;
						}
						else
						{
							return this->IPropertySet::clone();
						}
					}
				};
				REGISTER_FACTORY_CLASS(JIPropertySetProxy);
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geodataset_Ipropertyset_getCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::GeoDataset::IPropertySet *pObjectX = (EarthView::World::Spatial::GeoDataset::IPropertySet*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIPropertySetProxy))
					{
						ev_uint32 __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::IPropertySet::getCount();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						ev_uint32 __values1 = pObjectX->getCount();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_Ipropertyset_register_1getCount_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIPropertySetProxy *pObjectX = (JIPropertySetProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getCount_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getCount_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geodataset_Ipropertyset_getCount_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::GeoDataset::IPropertySet *pObjectX = (EarthView::World::Spatial::GeoDataset::IPropertySet*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::IPropertySet::getCount();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_geodataset_Ipropertyset_exist_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
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
					const 					EarthView::World::Spatial::GeoDataset::IPropertySet *pObjectX = (EarthView::World::Spatial::GeoDataset::IPropertySet*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIPropertySetProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::IPropertySet::exist(key);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->exist(key);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_Ipropertyset_register_1exist_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIPropertySetProxy *pObjectX = (JIPropertySetProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_exist_EVString_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"exist_EVString_callback", "(Ljava/lang/String;)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_geodataset_Ipropertyset_exist_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
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
					const 					EarthView::World::Spatial::GeoDataset::IPropertySet *pObjectX = (EarthView::World::Spatial::GeoDataset::IPropertySet*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::IPropertySet::exist(key);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_geodataset_Ipropertyset_getKey_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					const 					EarthView::World::Spatial::GeoDataset::IPropertySet *pObjectX = (EarthView::World::Spatial::GeoDataset::IPropertySet*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIPropertySetProxy))
					{
						EVString __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::IPropertySet::getKey(index);
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
					else
					{
						EVString __values1 = pObjectX->getKey(index);
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_Ipropertyset_register_1getKey_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIPropertySetProxy *pObjectX = (JIPropertySetProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getKey_ev_uint32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getKey_ev_uint32_callback", "(J)Ljava/lang/String;");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_geodataset_Ipropertyset_getKey_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					const 					EarthView::World::Spatial::GeoDataset::IPropertySet *pObjectX = (EarthView::World::Spatial::GeoDataset::IPropertySet*) pObjXXXX;
					EVString __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::IPropertySet::getKey(index);
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_Ipropertyset_setProperty_1EVString_1CVariant(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j, jlong value_j)
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
					const EarthView::World::Core::CVariant &value = *(EarthView::World::Core::CVariant*) value_j;
					EarthView::World::Spatial::GeoDataset::IPropertySet *pObjectX = (EarthView::World::Spatial::GeoDataset::IPropertySet*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIPropertySetProxy))
					{
						pObjectX->EarthView::World::Spatial::GeoDataset::IPropertySet::setProperty(key, value);
					}
					else
					{
						pObjectX->setProperty(key, value);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_Ipropertyset_register_1setProperty_1EVString_1CVariant(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIPropertySetProxy *pObjectX = (JIPropertySetProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setProperty_EVString_CVariant_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setProperty_EVString_CVariant_callback", "(Ljava/lang/String;J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_Ipropertyset_setProperty_1EVString_1CVariant_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j, jlong value_j)
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
					const EarthView::World::Core::CVariant &value = *(EarthView::World::Core::CVariant*) value_j;
					EarthView::World::Spatial::GeoDataset::IPropertySet *pObjectX = (EarthView::World::Spatial::GeoDataset::IPropertySet*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::GeoDataset::IPropertySet::setProperty(key, value);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geodataset_Ipropertyset_getProperty_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
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
					const 					EarthView::World::Spatial::GeoDataset::IPropertySet *pObjectX = (EarthView::World::Spatial::GeoDataset::IPropertySet*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIPropertySetProxy))
					{
						const EarthView::World::Core::CVariant& __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::IPropertySet::getProperty(key);
						jlong __values1_j = (jlong) &__values1;
						return __values1_j;
					}
					else
					{
						const EarthView::World::Core::CVariant& __values1 = pObjectX->getProperty(key);
						jlong __values1_j = (jlong) &__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_Ipropertyset_register_1getProperty_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIPropertySetProxy *pObjectX = (JIPropertySetProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getProperty_EVString_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getProperty_EVString_callback", "(Ljava/lang/String;)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geodataset_Ipropertyset_getProperty_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
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
					const 					EarthView::World::Spatial::GeoDataset::IPropertySet *pObjectX = (EarthView::World::Spatial::GeoDataset::IPropertySet*) pObjXXXX;
					const EarthView::World::Core::CVariant& __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::IPropertySet::getProperty(key);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_Ipropertyset_remove_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
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
					EarthView::World::Spatial::GeoDataset::IPropertySet *pObjectX = (EarthView::World::Spatial::GeoDataset::IPropertySet*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIPropertySetProxy))
					{
						pObjectX->EarthView::World::Spatial::GeoDataset::IPropertySet::remove(key);
					}
					else
					{
						pObjectX->remove(key);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_Ipropertyset_register_1remove_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIPropertySetProxy *pObjectX = (JIPropertySetProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_remove_EVString_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"remove_EVString_callback", "(Ljava/lang/String;)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_Ipropertyset_remove_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
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
					EarthView::World::Spatial::GeoDataset::IPropertySet *pObjectX = (EarthView::World::Spatial::GeoDataset::IPropertySet*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::GeoDataset::IPropertySet::remove(key);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_Ipropertyset_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::GeoDataset::IPropertySet *pObjectX = (EarthView::World::Spatial::GeoDataset::IPropertySet*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIPropertySetProxy))
					{
						pObjectX->EarthView::World::Spatial::GeoDataset::IPropertySet::clear();
					}
					else
					{
						pObjectX->clear();
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_Ipropertyset_register_1clear_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIPropertySetProxy *pObjectX = (JIPropertySetProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_clear_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"clear_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_Ipropertyset_clear_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::GeoDataset::IPropertySet *pObjectX = (EarthView::World::Spatial::GeoDataset::IPropertySet*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::GeoDataset::IPropertySet::clear();
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geodataset_Ipropertyset_ev_1clone_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::GeoDataset::IPropertySet *pObjectX = (EarthView::World::Spatial::GeoDataset::IPropertySet*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIPropertySetProxy))
					{
						EarthView::World::Spatial::GeoDataset::IPropertySet* __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::IPropertySet::clone();
						if(__values1 != NULL) {							((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
						}						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IPropertySet* __values1 = pObjectX->clone();
						if(__values1 != NULL) {							((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
						}						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_Ipropertyset_register_1ev_1clone_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIPropertySetProxy *pObjectX = (JIPropertySetProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geodataset_Ipropertyset_ev_1clone_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::GeoDataset::IPropertySet *pObjectX = (EarthView::World::Spatial::GeoDataset::IPropertySet*) pObjXXXX;
					EarthView::World::Spatial::GeoDataset::IPropertySet* __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::IPropertySet::clone();
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
		}
	}
}
