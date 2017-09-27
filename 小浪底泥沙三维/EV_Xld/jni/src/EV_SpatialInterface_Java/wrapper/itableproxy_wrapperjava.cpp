/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialinterface/itableproxy.h"
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
				class JITableProxyProxy : public EarthView::World::Spatial::GeoDataset::ITableProxy
				{
				 private:
					EarthView::World::Core::ev_string m_max_EVString_callback;
					EarthView::World::Core::ev_string m_min_EVString_callback;
					EarthView::World::Core::ev_string m_column_EVString_ev_bool_callback;
				public:
					JITableProxyProxy(EarthView::World::Core::CNameValuePairList *pList) : ITableProxy(pList)
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
					void register_max_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_max_EVString_callback = __method;
					}
					void register_min_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_min_EVString_callback = __method;
					}
					void register_column_EVString_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_column_EVString_ev_bool_callback = __method;
					}
					virtual EarthView::World::Core::CVariant max(const EVString& expression)
					{
						if (this->_gRef != NULL && this->m_max_EVString_callback != "" && this->isCustomExtend())
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
							EarthView::World::Core::ev_wstring expression_wch = expression;
							jstring expression_j = __env->NewString((const jchar*)expression_wch.getString(), expression_wch.size());
							jmethodID __method = __gr->getMethod("max_EVString_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , expression_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Core::CVariant __values1 = *(EarthView::World::Core::CVariant*) __values1_j;
							return __values1;
						}
						else
						{
							return this->ITableProxy::max(expression);
						}
					}
					virtual EarthView::World::Core::CVariant min(const EVString& expression)
					{
						if (this->_gRef != NULL && this->m_min_EVString_callback != "" && this->isCustomExtend())
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
							EarthView::World::Core::ev_wstring expression_wch = expression;
							jstring expression_j = __env->NewString((const jchar*)expression_wch.getString(), expression_wch.size());
							jmethodID __method = __gr->getMethod("min_EVString_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , expression_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Core::CVariant __values1 = *(EarthView::World::Core::CVariant*) __values1_j;
							return __values1;
						}
						else
						{
							return this->ITableProxy::min(expression);
						}
					}
					virtual EarthView::World::Core::CVariantArray column(const EVString& fieldName, ev_bool isUnique)
					{
						if (this->_gRef != NULL && this->m_column_EVString_ev_bool_callback != "" && this->isCustomExtend())
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
							EarthView::World::Core::ev_wstring fieldName_wch = fieldName;
							jstring fieldName_j = __env->NewString((const jchar*)fieldName_wch.getString(), fieldName_wch.size());
							jboolean isUnique_j = (jboolean) isUnique;
							jmethodID __method = __gr->getMethod("column_EVString_ev_bool_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , fieldName_j, isUnique_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Core::CVariantArray __values1 = *(EarthView::World::Core::CVariantArray*) __values1_j;
							return __values1;
						}
						else
						{
							return this->ITableProxy::column(fieldName, isUnique);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JITableProxyProxy);
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geodataset_Itableproxy_max_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring expression_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* expression_ch = (const ev_char*)__env->GetStringUTFChars(expression_j,JNI_FALSE);
					const EVString expression = expression_ch;
					__env->ReleaseStringUTFChars(expression_j, (const char *)expression_ch);
					#else
					const ev_wchar* expression_ch = (const ev_wchar*)__env->GetStringChars(expression_j,JNI_FALSE);
					const EVString expression = expression_ch;
					__env->ReleaseStringChars(expression_j, (const jchar *)expression_ch);
					#endif
					EarthView::World::Spatial::GeoDataset::ITableProxy *pObjectX = (EarthView::World::Spatial::GeoDataset::ITableProxy*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JITableProxyProxy))
					{
						EarthView::World::Core::CVariant __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::ITableProxy::max(expression);
						EarthView::World::Core::CVariant *returnvalues = new EarthView::World::Core::CVariant(__values1);
						((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
						jlong __values1_j = (jlong) returnvalues;
						return __values1_j;
					}
					else
					{
						EarthView::World::Core::CVariant __values1 = pObjectX->max(expression);
						EarthView::World::Core::CVariant *returnvalues = new EarthView::World::Core::CVariant(__values1);
						((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
						jlong __values1_j = (jlong) returnvalues;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_Itableproxy_register_1max_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JITableProxyProxy *pObjectX = (JITableProxyProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_max_EVString_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"max_EVString_callback", "(Ljava/lang/String;)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geodataset_Itableproxy_max_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring expression_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* expression_ch = (const ev_char*)__env->GetStringUTFChars(expression_j,JNI_FALSE);
					const EVString expression = expression_ch;
					__env->ReleaseStringUTFChars(expression_j, (const char *)expression_ch);
					#else
					const ev_wchar* expression_ch = (const ev_wchar*)__env->GetStringChars(expression_j,JNI_FALSE);
					const EVString expression = expression_ch;
					__env->ReleaseStringChars(expression_j, (const jchar *)expression_ch);
					#endif
					EarthView::World::Spatial::GeoDataset::ITableProxy *pObjectX = (EarthView::World::Spatial::GeoDataset::ITableProxy*) pObjXXXX;
					EarthView::World::Core::CVariant __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::ITableProxy::max(expression);
					EarthView::World::Core::CVariant *returnvalues = new EarthView::World::Core::CVariant(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geodataset_Itableproxy_min_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring expression_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* expression_ch = (const ev_char*)__env->GetStringUTFChars(expression_j,JNI_FALSE);
					const EVString expression = expression_ch;
					__env->ReleaseStringUTFChars(expression_j, (const char *)expression_ch);
					#else
					const ev_wchar* expression_ch = (const ev_wchar*)__env->GetStringChars(expression_j,JNI_FALSE);
					const EVString expression = expression_ch;
					__env->ReleaseStringChars(expression_j, (const jchar *)expression_ch);
					#endif
					EarthView::World::Spatial::GeoDataset::ITableProxy *pObjectX = (EarthView::World::Spatial::GeoDataset::ITableProxy*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JITableProxyProxy))
					{
						EarthView::World::Core::CVariant __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::ITableProxy::min(expression);
						EarthView::World::Core::CVariant *returnvalues = new EarthView::World::Core::CVariant(__values1);
						((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
						jlong __values1_j = (jlong) returnvalues;
						return __values1_j;
					}
					else
					{
						EarthView::World::Core::CVariant __values1 = pObjectX->min(expression);
						EarthView::World::Core::CVariant *returnvalues = new EarthView::World::Core::CVariant(__values1);
						((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
						jlong __values1_j = (jlong) returnvalues;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_Itableproxy_register_1min_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JITableProxyProxy *pObjectX = (JITableProxyProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_min_EVString_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"min_EVString_callback", "(Ljava/lang/String;)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geodataset_Itableproxy_min_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring expression_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* expression_ch = (const ev_char*)__env->GetStringUTFChars(expression_j,JNI_FALSE);
					const EVString expression = expression_ch;
					__env->ReleaseStringUTFChars(expression_j, (const char *)expression_ch);
					#else
					const ev_wchar* expression_ch = (const ev_wchar*)__env->GetStringChars(expression_j,JNI_FALSE);
					const EVString expression = expression_ch;
					__env->ReleaseStringChars(expression_j, (const jchar *)expression_ch);
					#endif
					EarthView::World::Spatial::GeoDataset::ITableProxy *pObjectX = (EarthView::World::Spatial::GeoDataset::ITableProxy*) pObjXXXX;
					EarthView::World::Core::CVariant __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::ITableProxy::min(expression);
					EarthView::World::Core::CVariant *returnvalues = new EarthView::World::Core::CVariant(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geodataset_Itableproxy_column_1EVString_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring fieldName_j, jboolean isUnique_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* fieldName_ch = (const ev_char*)__env->GetStringUTFChars(fieldName_j,JNI_FALSE);
					const EVString fieldName = fieldName_ch;
					__env->ReleaseStringUTFChars(fieldName_j, (const char *)fieldName_ch);
					#else
					const ev_wchar* fieldName_ch = (const ev_wchar*)__env->GetStringChars(fieldName_j,JNI_FALSE);
					const EVString fieldName = fieldName_ch;
					__env->ReleaseStringChars(fieldName_j, (const jchar *)fieldName_ch);
					#endif
					ev_bool isUnique = (ev_bool) isUnique_j;
					EarthView::World::Spatial::GeoDataset::ITableProxy *pObjectX = (EarthView::World::Spatial::GeoDataset::ITableProxy*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JITableProxyProxy))
					{
						EarthView::World::Core::CVariantArray __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::ITableProxy::column(fieldName, isUnique);
						EarthView::World::Core::CVariantArray *returnvalues = new EarthView::World::Core::CVariantArray(__values1);
						((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
						jlong __values1_j = (jlong) returnvalues;
						return __values1_j;
					}
					else
					{
						EarthView::World::Core::CVariantArray __values1 = pObjectX->column(fieldName, isUnique);
						EarthView::World::Core::CVariantArray *returnvalues = new EarthView::World::Core::CVariantArray(__values1);
						((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
						jlong __values1_j = (jlong) returnvalues;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_Itableproxy_register_1column_1EVString_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JITableProxyProxy *pObjectX = (JITableProxyProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_column_EVString_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"column_EVString_ev_bool_callback", "(Ljava/lang/String;Z)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geodataset_Itableproxy_column_1EVString_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring fieldName_j, jboolean isUnique_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* fieldName_ch = (const ev_char*)__env->GetStringUTFChars(fieldName_j,JNI_FALSE);
					const EVString fieldName = fieldName_ch;
					__env->ReleaseStringUTFChars(fieldName_j, (const char *)fieldName_ch);
					#else
					const ev_wchar* fieldName_ch = (const ev_wchar*)__env->GetStringChars(fieldName_j,JNI_FALSE);
					const EVString fieldName = fieldName_ch;
					__env->ReleaseStringChars(fieldName_j, (const jchar *)fieldName_ch);
					#endif
					ev_bool isUnique = (ev_bool) isUnique_j;
					EarthView::World::Spatial::GeoDataset::ITableProxy *pObjectX = (EarthView::World::Spatial::GeoDataset::ITableProxy*) pObjXXXX;
					EarthView::World::Core::CVariantArray __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::ITableProxy::column(fieldName, isUnique);
					EarthView::World::Core::CVariantArray *returnvalues = new EarthView::World::Core::CVariantArray(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
		}
	}
}
