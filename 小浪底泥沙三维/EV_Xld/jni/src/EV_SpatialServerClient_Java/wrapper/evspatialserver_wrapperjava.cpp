/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialserverclient/evspatialserver.h"
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
			namespace Download
			{
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
			class JCEVSpatialServerProxy : public EarthView::World::Spatial::CEVSpatialServer
			{
			 private:
				EarthView::World::Core::ev_string m_getServicePluginFile_void_callback;
				EarthView::World::Core::ev_string m_getServerName_void_callback;
				EarthView::World::Core::ev_string m_getServerAbstract_void_callback;
				EarthView::World::Core::ev_string m_getServerTitle_void_callback;
				EarthView::World::Core::ev_string m_getServerUrl_void_callback;
				EarthView::World::Core::ev_string m_isConnected_void_callback;
				EarthView::World::Core::ev_string m_reconnect_void_callback;
				EarthView::World::Core::ev_string m_disConnect_void_callback;
				EarthView::World::Core::ev_string m_getName_void_callback;
				EarthView::World::Core::ev_string m_getType_void_callback;
				EarthView::World::Core::ev_string m_getPropertySet_void_callback;
				EarthView::World::Core::ev_string m_isValid_void_callback;
				EarthView::World::Core::ev_string m_getDatasetInfo_EVString_callback;
				EarthView::World::Core::ev_string m_getDatasetInfos_EVDatasetType_callback;
				EarthView::World::Core::ev_string m_createFeatureClass_EVString_IGeometryField_IFields_callback;
				EarthView::World::Core::ev_string m_openDataset_EVString_callback;
				EarthView::World::Core::ev_string m_deleteDataset_EVString_callback;
				EarthView::World::Core::ev_string m_closeDataset_IDataset_callback;
				EarthView::World::Core::ev_string m_toXML_void_callback;
				EarthView::World::Core::ev_string m_ev_clone_void_callback;
			public:
				JCEVSpatialServerProxy(EarthView::World::Core::CNameValuePairList *pList) : CEVSpatialServer(pList)
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
				void register_getServicePluginFile_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getServicePluginFile_void_callback = __method;
				}
				void register_getServerName_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getServerName_void_callback = __method;
				}
				void register_getServerAbstract_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getServerAbstract_void_callback = __method;
				}
				void register_getServerTitle_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getServerTitle_void_callback = __method;
				}
				void register_getServerUrl_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getServerUrl_void_callback = __method;
				}
				void register_isConnected_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_isConnected_void_callback = __method;
				}
				void register_reconnect_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_reconnect_void_callback = __method;
				}
				void register_disConnect_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_disConnect_void_callback = __method;
				}
				void register_getName_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getName_void_callback = __method;
				}
				void register_getType_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getType_void_callback = __method;
				}
				void register_getPropertySet_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getPropertySet_void_callback = __method;
				}
				void register_isValid_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_isValid_void_callback = __method;
				}
				void register_getDatasetInfo_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getDatasetInfo_EVString_callback = __method;
				}
				void register_getDatasetInfos_EVDatasetType_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getDatasetInfos_EVDatasetType_callback = __method;
				}
				void register_createFeatureClass_EVString_IGeometryField_IFields_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createFeatureClass_EVString_IGeometryField_IFields_callback = __method;
				}
				void register_openDataset_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_openDataset_EVString_callback = __method;
				}
				void register_deleteDataset_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_deleteDataset_EVString_callback = __method;
				}
				void register_closeDataset_IDataset_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_closeDataset_IDataset_callback = __method;
				}
				void register_toXML_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_toXML_void_callback = __method;
				}
				void register_ev_clone_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_ev_clone_void_callback = __method;
				}
				virtual ev_bool isConnected()
				{
					if (this->_gRef != NULL && this->m_isConnected_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("isConnected_void_callback");
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
						return this->CEVSpatialServer::isConnected();
					}
				}
				virtual ev_bool reconnect()
				{
					if (this->_gRef != NULL && this->m_reconnect_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("reconnect_void_callback");
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
						return this->CEVSpatialServer::reconnect();
					}
				}
				virtual void disConnect()
				{
					if (this->_gRef != NULL && this->m_disConnect_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("disConnect_void_callback");
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
						return this->CEVSpatialServer::disConnect();
					}
				}
				virtual const EVString getServerName() const
				{
					if (this->_gRef != NULL && this->m_getServerName_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getServerName_void_callback");
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
						const EVString __values1 = values_ch;
						__env->ReleaseStringUTFChars(__values1_j,values_ch);
						#else
						const ev_wchar* values_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
						const EVString __values1 = values_ch;
						__env->ReleaseStringChars(__values1_j,(const jchar *)values_ch);
						#endif
						return __values1;
					}
					else
					{
						return this->CEVSpatialServer::getServerName();
					}
				}
				virtual const EVString getServerAbstract() const
				{
					if (this->_gRef != NULL && this->m_getServerAbstract_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getServerAbstract_void_callback");
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
						const EVString __values1 = values_ch;
						__env->ReleaseStringUTFChars(__values1_j,values_ch);
						#else
						const ev_wchar* values_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
						const EVString __values1 = values_ch;
						__env->ReleaseStringChars(__values1_j,(const jchar *)values_ch);
						#endif
						return __values1;
					}
					else
					{
						return this->CEVSpatialServer::getServerAbstract();
					}
				}
				virtual const EVString getServerTitle() const
				{
					if (this->_gRef != NULL && this->m_getServerTitle_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getServerTitle_void_callback");
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
						const EVString __values1 = values_ch;
						__env->ReleaseStringUTFChars(__values1_j,values_ch);
						#else
						const ev_wchar* values_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
						const EVString __values1 = values_ch;
						__env->ReleaseStringChars(__values1_j,(const jchar *)values_ch);
						#endif
						return __values1;
					}
					else
					{
						return this->CEVSpatialServer::getServerTitle();
					}
				}
				virtual const EVString getServerUrl() const
				{
					if (this->_gRef != NULL && this->m_getServerUrl_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getServerUrl_void_callback");
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
						const EVString __values1 = values_ch;
						__env->ReleaseStringUTFChars(__values1_j,values_ch);
						#else
						const ev_wchar* values_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
						const EVString __values1 = values_ch;
						__env->ReleaseStringChars(__values1_j,(const jchar *)values_ch);
						#endif
						return __values1;
					}
					else
					{
						return this->CEVSpatialServer::getServerUrl();
					}
				}
				virtual const EVString getServicePluginFile() const
				{
					if (this->_gRef != NULL && this->m_getServicePluginFile_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getServicePluginFile_void_callback");
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
						const EVString __values1 = values_ch;
						__env->ReleaseStringUTFChars(__values1_j,values_ch);
						#else
						const ev_wchar* values_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
						const EVString __values1 = values_ch;
						__env->ReleaseStringChars(__values1_j,(const jchar *)values_ch);
						#endif
						return __values1;
					}
					else
					{
						return this->CEVSpatialServer::getServicePluginFile();
					}
				}
				virtual EarthView::World::Spatial::GeoDataset::IPropertySet* getPropertySet() const
				{
					if (this->_gRef != NULL && this->m_getPropertySet_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getPropertySet_void_callback");
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
						return this->CEVSpatialServer::getPropertySet();
					}
				}
				virtual ev_bool isValid() const
				{
					if (this->_gRef != NULL && this->m_isValid_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("isValid_void_callback");
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
						return this->CEVSpatialServer::isValid();
					}
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataMetaInfo* getDatasetInfo(const EVString& name)
				{
					if (this->_gRef != NULL && this->m_getDatasetInfo_EVString_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getDatasetInfo_EVString_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , name_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Spatial::GeoDataset::IDataMetaInfo *__values1 = (EarthView::World::Spatial::GeoDataset::IDataMetaInfo*) __values1_j;
						if(__values1 != NULL) {
							((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(false);
						}
						return __values1;
					}
					else
					{
						return this->CEVSpatialServer::getDatasetInfo(name);
					}
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataMetaInfos* getDatasetInfos(EarthView::World::Spatial::GeoDataset::EVDatasetType type)
				{
					if (this->_gRef != NULL && this->m_getDatasetInfos_EVDatasetType_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getDatasetInfos_EVDatasetType_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , type_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Spatial::GeoDataset::IDataMetaInfos *__values1 = (EarthView::World::Spatial::GeoDataset::IDataMetaInfos*) __values1_j;
						if(__values1 != NULL) {
							((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(false);
						}
						return __values1;
					}
					else
					{
						return this->CEVSpatialServer::getDatasetInfos(type);
					}
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataset* openDataset(const EVString& name)
				{
					if (this->_gRef != NULL && this->m_openDataset_EVString_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("openDataset_EVString_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , name_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Spatial::GeoDataset::IDataset *__values1 = (EarthView::World::Spatial::GeoDataset::IDataset*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CEVSpatialServer::openDataset(name);
					}
				}
				virtual ev_bool closeDataset(EarthView::World::Spatial::GeoDataset::IDataset* dataset)
				{
					if (this->_gRef != NULL && this->m_closeDataset_IDataset_callback != "" && this->isCustomExtend())
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
						jlong dataset_j = (jlong) dataset;
						jmethodID __method = __gr->getMethod("closeDataset_IDataset_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , dataset_j);
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
						return this->CEVSpatialServer::closeDataset(dataset);
					}
				}
				virtual EVString toXML() const
				{
					if (this->_gRef != NULL && this->m_toXML_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("toXML_void_callback");
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
						return this->CEVSpatialServer::toXML();
					}
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataSource* clone() const
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
						EarthView::World::Spatial::GeoDataset::IDataSource *__values1 = (EarthView::World::Spatial::GeoDataset::IDataSource*) __values1_j;
						if(__values1 != NULL) {
							((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(false);
						}
						return __values1;
					}
					else
					{
						return this->CEVSpatialServer::clone();
					}
				}
				virtual ev_int32 getType() const
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
						ev_int32 __values1 = (ev_int32) __values1_j;
						return __values1;
					}
					else
					{
						return this->CEVSpatialServer::getType();
					}
				}
				virtual EVString getName() const
				{
					if (this->_gRef != NULL && this->m_getName_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getName_void_callback");
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
						return this->CEVSpatialServer::getName();
					}
				}
				virtual ev_bool deleteDataset(const EVString& name)
				{
					if (this->_gRef != NULL && this->m_deleteDataset_EVString_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("deleteDataset_EVString_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , name_j);
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
						return this->CEVSpatialServer::deleteDataset(name);
					}
				}
				virtual EarthView::World::Spatial::GeoDataset::IFeatureClass* createFeatureClass(const EVString& name, EarthView::World::Spatial::GeoDataset::IGeometryField& geofield, const EarthView::World::Spatial::GeoDataset::IFields& fields)
				{
					if (this->_gRef != NULL && this->m_createFeatureClass_EVString_IGeometryField_IFields_callback != "" && this->isCustomExtend())
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
						jlong geofield_j = (jlong) &geofield;
						jlong fields_j = (jlong) &fields;
						jmethodID __method = __gr->getMethod("createFeatureClass_EVString_IGeometryField_IFields_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , name_j, geofield_j, fields_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Spatial::GeoDataset::IFeatureClass *__values1 = (EarthView::World::Spatial::GeoDataset::IFeatureClass*) __values1_j;
						if(__values1 != NULL) {
							((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(false);
						}
						return __values1;
					}
					else
					{
						return this->CEVSpatialServer::createFeatureClass(name, geofield, fields);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCEVSpatialServerProxy);
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_Evspatialserver_currentConnectStatus_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::CEVSpatialServer *pObjectX = (EarthView::World::Spatial::CEVSpatialServer*) pObjXXXX;
				ev_bool __values1 = pObjectX->currentConnectStatus();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_Evspatialserver_isConnected_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::CEVSpatialServer *pObjectX = (EarthView::World::Spatial::CEVSpatialServer*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCEVSpatialServerProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::CEVSpatialServer::isConnected();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->isConnected();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Evspatialserver_register_1isConnected_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCEVSpatialServerProxy *pObjectX = (JCEVSpatialServerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_isConnected_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"isConnected_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_Evspatialserver_isConnected_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::CEVSpatialServer *pObjectX = (EarthView::World::Spatial::CEVSpatialServer*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Spatial::CEVSpatialServer::isConnected();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_Evspatialserver_reconnect_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::CEVSpatialServer *pObjectX = (EarthView::World::Spatial::CEVSpatialServer*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCEVSpatialServerProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::CEVSpatialServer::reconnect();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->reconnect();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Evspatialserver_register_1reconnect_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCEVSpatialServerProxy *pObjectX = (JCEVSpatialServerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_reconnect_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"reconnect_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_Evspatialserver_reconnect_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::CEVSpatialServer *pObjectX = (EarthView::World::Spatial::CEVSpatialServer*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Spatial::CEVSpatialServer::reconnect();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Evspatialserver_disConnect_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::CEVSpatialServer *pObjectX = (EarthView::World::Spatial::CEVSpatialServer*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCEVSpatialServerProxy))
				{
					pObjectX->EarthView::World::Spatial::CEVSpatialServer::disConnect();
				}
				else
				{
					pObjectX->disConnect();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Evspatialserver_register_1disConnect_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCEVSpatialServerProxy *pObjectX = (JCEVSpatialServerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_disConnect_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"disConnect_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Evspatialserver_disConnect_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::CEVSpatialServer *pObjectX = (EarthView::World::Spatial::CEVSpatialServer*) pObjXXXX;
				pObjectX->EarthView::World::Spatial::CEVSpatialServer::disConnect();
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_Evspatialserver_getServerName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CEVSpatialServer *pObjectX = (EarthView::World::Spatial::CEVSpatialServer*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCEVSpatialServerProxy))
				{
					const EVString __values1 = pObjectX->EarthView::World::Spatial::CEVSpatialServer::getServerName();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				else
				{
					const EVString __values1 = pObjectX->getServerName();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Evspatialserver_register_1getServerName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCEVSpatialServerProxy *pObjectX = (JCEVSpatialServerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getServerName_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getServerName_void_callback", "()Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_Evspatialserver_getServerName_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CEVSpatialServer *pObjectX = (EarthView::World::Spatial::CEVSpatialServer*) pObjXXXX;
				const EVString __values1 = pObjectX->EarthView::World::Spatial::CEVSpatialServer::getServerName();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_Evspatialserver_getServerAbstract_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CEVSpatialServer *pObjectX = (EarthView::World::Spatial::CEVSpatialServer*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCEVSpatialServerProxy))
				{
					const EVString __values1 = pObjectX->EarthView::World::Spatial::CEVSpatialServer::getServerAbstract();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				else
				{
					const EVString __values1 = pObjectX->getServerAbstract();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Evspatialserver_register_1getServerAbstract_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCEVSpatialServerProxy *pObjectX = (JCEVSpatialServerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getServerAbstract_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getServerAbstract_void_callback", "()Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_Evspatialserver_getServerAbstract_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CEVSpatialServer *pObjectX = (EarthView::World::Spatial::CEVSpatialServer*) pObjXXXX;
				const EVString __values1 = pObjectX->EarthView::World::Spatial::CEVSpatialServer::getServerAbstract();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_Evspatialserver_getServerTitle_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CEVSpatialServer *pObjectX = (EarthView::World::Spatial::CEVSpatialServer*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCEVSpatialServerProxy))
				{
					const EVString __values1 = pObjectX->EarthView::World::Spatial::CEVSpatialServer::getServerTitle();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				else
				{
					const EVString __values1 = pObjectX->getServerTitle();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Evspatialserver_register_1getServerTitle_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCEVSpatialServerProxy *pObjectX = (JCEVSpatialServerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getServerTitle_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getServerTitle_void_callback", "()Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_Evspatialserver_getServerTitle_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CEVSpatialServer *pObjectX = (EarthView::World::Spatial::CEVSpatialServer*) pObjXXXX;
				const EVString __values1 = pObjectX->EarthView::World::Spatial::CEVSpatialServer::getServerTitle();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_Evspatialserver_getServerUrl_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CEVSpatialServer *pObjectX = (EarthView::World::Spatial::CEVSpatialServer*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCEVSpatialServerProxy))
				{
					const EVString __values1 = pObjectX->EarthView::World::Spatial::CEVSpatialServer::getServerUrl();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				else
				{
					const EVString __values1 = pObjectX->getServerUrl();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Evspatialserver_register_1getServerUrl_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCEVSpatialServerProxy *pObjectX = (JCEVSpatialServerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getServerUrl_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getServerUrl_void_callback", "()Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_Evspatialserver_getServerUrl_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CEVSpatialServer *pObjectX = (EarthView::World::Spatial::CEVSpatialServer*) pObjXXXX;
				const EVString __values1 = pObjectX->EarthView::World::Spatial::CEVSpatialServer::getServerUrl();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_Evspatialserver_getServicePluginFile_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CEVSpatialServer *pObjectX = (EarthView::World::Spatial::CEVSpatialServer*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCEVSpatialServerProxy))
				{
					const EVString __values1 = pObjectX->EarthView::World::Spatial::CEVSpatialServer::getServicePluginFile();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				else
				{
					const EVString __values1 = pObjectX->getServicePluginFile();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Evspatialserver_register_1getServicePluginFile_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCEVSpatialServerProxy *pObjectX = (JCEVSpatialServerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getServicePluginFile_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getServicePluginFile_void_callback", "()Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_Evspatialserver_getServicePluginFile_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CEVSpatialServer *pObjectX = (EarthView::World::Spatial::CEVSpatialServer*) pObjXXXX;
				const EVString __values1 = pObjectX->EarthView::World::Spatial::CEVSpatialServer::getServicePluginFile();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Evspatialserver_getPropertySet_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CEVSpatialServer *pObjectX = (EarthView::World::Spatial::CEVSpatialServer*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCEVSpatialServerProxy))
				{
					EarthView::World::Spatial::GeoDataset::IPropertySet* __values1 = pObjectX->EarthView::World::Spatial::CEVSpatialServer::getPropertySet();
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Spatial::GeoDataset::IPropertySet* __values1 = pObjectX->getPropertySet();
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Evspatialserver_register_1getPropertySet_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCEVSpatialServerProxy *pObjectX = (JCEVSpatialServerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getPropertySet_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getPropertySet_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Evspatialserver_getPropertySet_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CEVSpatialServer *pObjectX = (EarthView::World::Spatial::CEVSpatialServer*) pObjXXXX;
				EarthView::World::Spatial::GeoDataset::IPropertySet* __values1 = pObjectX->EarthView::World::Spatial::CEVSpatialServer::getPropertySet();
				if(__values1 != NULL) {					((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
				}				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_Evspatialserver_isValid_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CEVSpatialServer *pObjectX = (EarthView::World::Spatial::CEVSpatialServer*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCEVSpatialServerProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::CEVSpatialServer::isValid();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->isValid();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Evspatialserver_register_1isValid_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCEVSpatialServerProxy *pObjectX = (JCEVSpatialServerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_isValid_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"isValid_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_Evspatialserver_isValid_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CEVSpatialServer *pObjectX = (EarthView::World::Spatial::CEVSpatialServer*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Spatial::CEVSpatialServer::isValid();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Evspatialserver_getDatasetInfo_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Spatial::CEVSpatialServer *pObjectX = (EarthView::World::Spatial::CEVSpatialServer*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCEVSpatialServerProxy))
				{
					EarthView::World::Spatial::GeoDataset::IDataMetaInfo* __values1 = pObjectX->EarthView::World::Spatial::CEVSpatialServer::getDatasetInfo(name);
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Spatial::GeoDataset::IDataMetaInfo* __values1 = pObjectX->getDatasetInfo(name);
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Evspatialserver_register_1getDatasetInfo_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCEVSpatialServerProxy *pObjectX = (JCEVSpatialServerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getDatasetInfo_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getDatasetInfo_EVString_callback", "(Ljava/lang/String;)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Evspatialserver_getDatasetInfo_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Spatial::CEVSpatialServer *pObjectX = (EarthView::World::Spatial::CEVSpatialServer*) pObjXXXX;
				EarthView::World::Spatial::GeoDataset::IDataMetaInfo* __values1 = pObjectX->EarthView::World::Spatial::CEVSpatialServer::getDatasetInfo(name);
				if(__values1 != NULL) {					((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
				}				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Evspatialserver_getDatasetInfo_1EVString_1EVDatasetType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jint type_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				EarthView::World::Spatial::GeoDataset::EVDatasetType type = (EarthView::World::Spatial::GeoDataset::EVDatasetType) type_j;
				EarthView::World::Spatial::CEVSpatialServer *pObjectX = (EarthView::World::Spatial::CEVSpatialServer*) pObjXXXX;
				EarthView::World::Spatial::GeoDataset::IDataMetaInfo* __values1 = pObjectX->getDatasetInfo(name, type);
				if(__values1 != NULL) {					((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
				}				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Evspatialserver_getDatasetInfos_1EVDatasetType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint type_j)
			{
				EarthView::World::Spatial::GeoDataset::EVDatasetType type = (EarthView::World::Spatial::GeoDataset::EVDatasetType) type_j;
				EarthView::World::Spatial::CEVSpatialServer *pObjectX = (EarthView::World::Spatial::CEVSpatialServer*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCEVSpatialServerProxy))
				{
					EarthView::World::Spatial::GeoDataset::IDataMetaInfos* __values1 = pObjectX->EarthView::World::Spatial::CEVSpatialServer::getDatasetInfos(type);
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Spatial::GeoDataset::IDataMetaInfos* __values1 = pObjectX->getDatasetInfos(type);
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Evspatialserver_register_1getDatasetInfos_1EVDatasetType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCEVSpatialServerProxy *pObjectX = (JCEVSpatialServerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getDatasetInfos_EVDatasetType_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getDatasetInfos_EVDatasetType_callback", "(I)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Evspatialserver_getDatasetInfos_1EVDatasetType_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint type_j)
			{
				EarthView::World::Spatial::GeoDataset::EVDatasetType type = (EarthView::World::Spatial::GeoDataset::EVDatasetType) type_j;
				EarthView::World::Spatial::CEVSpatialServer *pObjectX = (EarthView::World::Spatial::CEVSpatialServer*) pObjXXXX;
				EarthView::World::Spatial::GeoDataset::IDataMetaInfos* __values1 = pObjectX->EarthView::World::Spatial::CEVSpatialServer::getDatasetInfos(type);
				if(__values1 != NULL) {					((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
				}				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Evspatialserver_openDataset_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Spatial::CEVSpatialServer *pObjectX = (EarthView::World::Spatial::CEVSpatialServer*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCEVSpatialServerProxy))
				{
					EarthView::World::Spatial::GeoDataset::IDataset* __values1 = pObjectX->EarthView::World::Spatial::CEVSpatialServer::openDataset(name);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Spatial::GeoDataset::IDataset* __values1 = pObjectX->openDataset(name);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Evspatialserver_register_1openDataset_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCEVSpatialServerProxy *pObjectX = (JCEVSpatialServerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_openDataset_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"openDataset_EVString_callback", "(Ljava/lang/String;)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Evspatialserver_openDataset_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Spatial::CEVSpatialServer *pObjectX = (EarthView::World::Spatial::CEVSpatialServer*) pObjXXXX;
				EarthView::World::Spatial::GeoDataset::IDataset* __values1 = pObjectX->EarthView::World::Spatial::CEVSpatialServer::openDataset(name);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_Evspatialserver_closeDataset_1IDataset(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong dataset_j)
			{
				EarthView::World::Spatial::GeoDataset::IDataset *dataset = (EarthView::World::Spatial::GeoDataset::IDataset*) dataset_j;
				EarthView::World::Spatial::CEVSpatialServer *pObjectX = (EarthView::World::Spatial::CEVSpatialServer*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCEVSpatialServerProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::CEVSpatialServer::closeDataset(dataset);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->closeDataset(dataset);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Evspatialserver_register_1closeDataset_1IDataset(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCEVSpatialServerProxy *pObjectX = (JCEVSpatialServerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_closeDataset_IDataset_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"closeDataset_IDataset_callback", "(J)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_Evspatialserver_closeDataset_1IDataset_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong dataset_j)
			{
				EarthView::World::Spatial::GeoDataset::IDataset *dataset = (EarthView::World::Spatial::GeoDataset::IDataset*) dataset_j;
				EarthView::World::Spatial::CEVSpatialServer *pObjectX = (EarthView::World::Spatial::CEVSpatialServer*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Spatial::CEVSpatialServer::closeDataset(dataset);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Evspatialserver_openDataset_1EVString_1EVDatasetType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jint type_j)
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
				EarthView::World::Spatial::GeoDataset::EVDatasetType type = (EarthView::World::Spatial::GeoDataset::EVDatasetType) type_j;
				EarthView::World::Spatial::CEVSpatialServer *pObjectX = (EarthView::World::Spatial::CEVSpatialServer*) pObjXXXX;
				EarthView::World::Spatial::GeoDataset::IDataset* __values1 = pObjectX->openDataset(name, type);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_Evspatialserver_toXML_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CEVSpatialServer *pObjectX = (EarthView::World::Spatial::CEVSpatialServer*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCEVSpatialServerProxy))
				{
					EVString __values1 = pObjectX->EarthView::World::Spatial::CEVSpatialServer::toXML();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				else
				{
					EVString __values1 = pObjectX->toXML();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Evspatialserver_register_1toXML_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCEVSpatialServerProxy *pObjectX = (JCEVSpatialServerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_toXML_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"toXML_void_callback", "()Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_Evspatialserver_toXML_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CEVSpatialServer *pObjectX = (EarthView::World::Spatial::CEVSpatialServer*) pObjXXXX;
				EVString __values1 = pObjectX->EarthView::World::Spatial::CEVSpatialServer::toXML();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Evspatialserver_ev_1clone_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CEVSpatialServer *pObjectX = (EarthView::World::Spatial::CEVSpatialServer*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCEVSpatialServerProxy))
				{
					EarthView::World::Spatial::GeoDataset::IDataSource* __values1 = pObjectX->EarthView::World::Spatial::CEVSpatialServer::clone();
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Spatial::GeoDataset::IDataSource* __values1 = pObjectX->clone();
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Evspatialserver_register_1ev_1clone_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCEVSpatialServerProxy *pObjectX = (JCEVSpatialServerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Evspatialserver_ev_1clone_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CEVSpatialServer *pObjectX = (EarthView::World::Spatial::CEVSpatialServer*) pObjXXXX;
				EarthView::World::Spatial::GeoDataset::IDataSource* __values1 = pObjectX->EarthView::World::Spatial::CEVSpatialServer::clone();
				if(__values1 != NULL) {					((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
				}				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_Evspatialserver_getServiceVersion_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong version_j)
			{
				EVString &version = *(EVString*) version_j;
				EarthView::World::Spatial::CEVSpatialServer *pObjectX = (EarthView::World::Spatial::CEVSpatialServer*) pObjXXXX;
				ev_int32 __values1 = pObjectX->getServiceVersion(version);
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_Evspatialserver_getServiceFileSet_1EVDatasetType_1CServerQueryResults(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint type_j, jlong queryresult_j)
			{
				EarthView::World::Spatial::GeoDataset::EVDatasetType type = (EarthView::World::Spatial::GeoDataset::EVDatasetType) type_j;
				EarthView::World::Spatial::CServerQueryResults &queryresult = *(EarthView::World::Spatial::CServerQueryResults*) queryresult_j;
				EarthView::World::Spatial::CEVSpatialServer *pObjectX = (EarthView::World::Spatial::CEVSpatialServer*) pObjXXXX;
				ev_int32 __values1 = pObjectX->getServiceFileSet(type, queryresult);
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_Evspatialserver_getServiceFileSetFromMetadataCache_1EVDatasetType_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint type_j, jlong fileSetStr_j)
			{
				EarthView::World::Spatial::GeoDataset::EVDatasetType type = (EarthView::World::Spatial::GeoDataset::EVDatasetType) type_j;
				EVString &fileSetStr = *(EVString*) fileSetStr_j;
				EarthView::World::Spatial::CEVSpatialServer *pObjectX = (EarthView::World::Spatial::CEVSpatialServer*) pObjXXXX;
				ev_int32 __values1 = pObjectX->getServiceFileSetFromMetadataCache(type, fileSetStr);
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Evspatialserver_getWMTSDataset_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Spatial::CEVSpatialServer *pObjectX = (EarthView::World::Spatial::CEVSpatialServer*) pObjXXXX;
				EarthView::World::Spatial::CEVWMTSDataset* __values1 = pObjectX->getWMTSDataset(name);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Evspatialserver_getDEMDataset_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Spatial::CEVSpatialServer *pObjectX = (EarthView::World::Spatial::CEVSpatialServer*) pObjXXXX;
				EarthView::World::Spatial::CEVDEMDataset* __values1 = pObjectX->getDEMDataset(name);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Evspatialserver_getKMLDataset_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring filename_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* filename_ch = (const ev_char*)__env->GetStringUTFChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringUTFChars(filename_j, (const char *)filename_ch);
				#else
				const ev_wchar* filename_ch = (const ev_wchar*)__env->GetStringChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringChars(filename_j, (const jchar *)filename_ch);
				#endif
				EarthView::World::Spatial::CEVSpatialServer *pObjectX = (EarthView::World::Spatial::CEVSpatialServer*) pObjXXXX;
				EarthView::World::Spatial::CEVKMLDataset* __values1 = pObjectX->getKMLDataset(filename);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Evspatialserver_getGeoCodeDataset_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring filename_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* filename_ch = (const ev_char*)__env->GetStringUTFChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringUTFChars(filename_j, (const char *)filename_ch);
				#else
				const ev_wchar* filename_ch = (const ev_wchar*)__env->GetStringChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringChars(filename_j, (const jchar *)filename_ch);
				#endif
				EarthView::World::Spatial::CEVSpatialServer *pObjectX = (EarthView::World::Spatial::CEVSpatialServer*) pObjXXXX;
				EarthView::World::Spatial::CEVGeoCodeDataset* __values1 = pObjectX->getGeoCodeDataset(filename);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Evspatialserver_getGeometryDataset_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring mapname_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* mapname_ch = (const ev_char*)__env->GetStringUTFChars(mapname_j,JNI_FALSE);
				const EVString mapname = mapname_ch;
				__env->ReleaseStringUTFChars(mapname_j, (const char *)mapname_ch);
				#else
				const ev_wchar* mapname_ch = (const ev_wchar*)__env->GetStringChars(mapname_j,JNI_FALSE);
				const EVString mapname = mapname_ch;
				__env->ReleaseStringChars(mapname_j, (const jchar *)mapname_ch);
				#endif
				EarthView::World::Spatial::CEVSpatialServer *pObjectX = (EarthView::World::Spatial::CEVSpatialServer*) pObjXXXX;
				EarthView::World::Spatial::CEVGeometryDataset* __values1 = pObjectX->getGeometryDataset(mapname);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Evspatialserver_getWFSDataset_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Spatial::CEVSpatialServer *pObjectX = (EarthView::World::Spatial::CEVSpatialServer*) pObjXXXX;
				EarthView::World::Spatial::CEVWFSDataset* __values1 = pObjectX->getWFSDataset(name);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Evspatialserver_getWMSDataset_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Spatial::CEVSpatialServer *pObjectX = (EarthView::World::Spatial::CEVSpatialServer*) pObjXXXX;
				EarthView::World::Spatial::CEVWMSDataset* __values1 = pObjectX->getWMSDataset(name);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Evspatialserver_getWMSChartDataset_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Spatial::CEVSpatialServer *pObjectX = (EarthView::World::Spatial::CEVSpatialServer*) pObjXXXX;
				EarthView::World::Spatial::CEVWMSChartDataset* __values1 = pObjectX->getWMSChartDataset(name);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Evspatialserver_getWMSImageDataset_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Spatial::CEVSpatialServer *pObjectX = (EarthView::World::Spatial::CEVSpatialServer*) pObjXXXX;
				EarthView::World::Spatial::CEVWMSImageDataset* __values1 = pObjectX->getWMSImageDataset(name);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Evspatialserver_getModelDataset_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring modelname_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* modelname_ch = (const ev_char*)__env->GetStringUTFChars(modelname_j,JNI_FALSE);
				const EVString modelname = modelname_ch;
				__env->ReleaseStringUTFChars(modelname_j, (const char *)modelname_ch);
				#else
				const ev_wchar* modelname_ch = (const ev_wchar*)__env->GetStringChars(modelname_j,JNI_FALSE);
				const EVString modelname = modelname_ch;
				__env->ReleaseStringChars(modelname_j, (const jchar *)modelname_ch);
				#endif
				EarthView::World::Spatial::CEVSpatialServer *pObjectX = (EarthView::World::Spatial::CEVSpatialServer*) pObjXXXX;
				EarthView::World::Spatial::CEVModelDataset* __values1 = pObjectX->getModelDataset(modelname);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Evspatialserver_getModelTemplateDataset_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring datasetname_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* datasetname_ch = (const ev_char*)__env->GetStringUTFChars(datasetname_j,JNI_FALSE);
				const EVString datasetname = datasetname_ch;
				__env->ReleaseStringUTFChars(datasetname_j, (const char *)datasetname_ch);
				#else
				const ev_wchar* datasetname_ch = (const ev_wchar*)__env->GetStringChars(datasetname_j,JNI_FALSE);
				const EVString datasetname = datasetname_ch;
				__env->ReleaseStringChars(datasetname_j, (const jchar *)datasetname_ch);
				#endif
				EarthView::World::Spatial::CEVSpatialServer *pObjectX = (EarthView::World::Spatial::CEVSpatialServer*) pObjXXXX;
				EarthView::World::Spatial::CEVModelTemplateDataset* __values1 = pObjectX->getModelTemplateDataset(datasetname);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Evspatialserver_getSmart3DDataset_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring datasetname_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* datasetname_ch = (const ev_char*)__env->GetStringUTFChars(datasetname_j,JNI_FALSE);
				const EVString datasetname = datasetname_ch;
				__env->ReleaseStringUTFChars(datasetname_j, (const char *)datasetname_ch);
				#else
				const ev_wchar* datasetname_ch = (const ev_wchar*)__env->GetStringChars(datasetname_j,JNI_FALSE);
				const EVString datasetname = datasetname_ch;
				__env->ReleaseStringChars(datasetname_j, (const jchar *)datasetname_ch);
				#endif
				EarthView::World::Spatial::CEVSpatialServer *pObjectX = (EarthView::World::Spatial::CEVSpatialServer*) pObjXXXX;
				EarthView::World::Spatial::CWebSmart3DDataset* __values1 = pObjectX->getSmart3DDataset(datasetname);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Evspatialserver_getMeshXDataset_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring datasetname_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* datasetname_ch = (const ev_char*)__env->GetStringUTFChars(datasetname_j,JNI_FALSE);
				const EVString datasetname = datasetname_ch;
				__env->ReleaseStringUTFChars(datasetname_j, (const char *)datasetname_ch);
				#else
				const ev_wchar* datasetname_ch = (const ev_wchar*)__env->GetStringChars(datasetname_j,JNI_FALSE);
				const EVString datasetname = datasetname_ch;
				__env->ReleaseStringChars(datasetname_j, (const jchar *)datasetname_ch);
				#endif
				EarthView::World::Spatial::CEVSpatialServer *pObjectX = (EarthView::World::Spatial::CEVSpatialServer*) pObjXXXX;
				EarthView::World::Spatial::CWebMeshXDataset* __values1 = pObjectX->getMeshXDataset(datasetname);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Evspatialserver_getMeshXGDataset_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring datasetname_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* datasetname_ch = (const ev_char*)__env->GetStringUTFChars(datasetname_j,JNI_FALSE);
				const EVString datasetname = datasetname_ch;
				__env->ReleaseStringUTFChars(datasetname_j, (const char *)datasetname_ch);
				#else
				const ev_wchar* datasetname_ch = (const ev_wchar*)__env->GetStringChars(datasetname_j,JNI_FALSE);
				const EVString datasetname = datasetname_ch;
				__env->ReleaseStringChars(datasetname_j, (const jchar *)datasetname_ch);
				#endif
				EarthView::World::Spatial::CEVSpatialServer *pObjectX = (EarthView::World::Spatial::CEVSpatialServer*) pObjXXXX;
				EarthView::World::Spatial::CWebMeshXGDataset* __values1 = pObjectX->getMeshXGDataset(datasetname);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Evspatialserver_getLasDataset_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring datasetname_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* datasetname_ch = (const ev_char*)__env->GetStringUTFChars(datasetname_j,JNI_FALSE);
				const EVString datasetname = datasetname_ch;
				__env->ReleaseStringUTFChars(datasetname_j, (const char *)datasetname_ch);
				#else
				const ev_wchar* datasetname_ch = (const ev_wchar*)__env->GetStringChars(datasetname_j,JNI_FALSE);
				const EVString datasetname = datasetname_ch;
				__env->ReleaseStringChars(datasetname_j, (const jchar *)datasetname_ch);
				#endif
				EarthView::World::Spatial::CEVSpatialServer *pObjectX = (EarthView::World::Spatial::CEVSpatialServer*) pObjXXXX;
				EarthView::World::Spatial::CWebLasDataset* __values1 = pObjectX->getLasDataset(datasetname);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Evspatialserver_getVector3DDataset_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring datasetname_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* datasetname_ch = (const ev_char*)__env->GetStringUTFChars(datasetname_j,JNI_FALSE);
				const EVString datasetname = datasetname_ch;
				__env->ReleaseStringUTFChars(datasetname_j, (const char *)datasetname_ch);
				#else
				const ev_wchar* datasetname_ch = (const ev_wchar*)__env->GetStringChars(datasetname_j,JNI_FALSE);
				const EVString datasetname = datasetname_ch;
				__env->ReleaseStringChars(datasetname_j, (const jchar *)datasetname_ch);
				#endif
				EarthView::World::Spatial::CEVSpatialServer *pObjectX = (EarthView::World::Spatial::CEVSpatialServer*) pObjXXXX;
				EarthView::World::Spatial::CWebVector3DDataset* __values1 = pObjectX->getVector3DDataset(datasetname);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Evspatialserver_getMultimediaDataset_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring filename_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* filename_ch = (const ev_char*)__env->GetStringUTFChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringUTFChars(filename_j, (const char *)filename_ch);
				#else
				const ev_wchar* filename_ch = (const ev_wchar*)__env->GetStringChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringChars(filename_j, (const jchar *)filename_ch);
				#endif
				EarthView::World::Spatial::CEVSpatialServer *pObjectX = (EarthView::World::Spatial::CEVSpatialServer*) pObjXXXX;
				EarthView::World::Spatial::CMultiMedaServiceDataset* __values1 = pObjectX->getMultimediaDataset(filename);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Evspatialserver_getOGCWMTSCapabilitiesRef_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::CEVSpatialServer *pObjectX = (EarthView::World::Spatial::CEVSpatialServer*) pObjXXXX;
				const EarthView::World::Spatial::CWMTSServerInfo* __values1 = pObjectX->getOGCWMTSCapabilitiesRef();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_Evspatialserver_getEVWMTSCapabilities_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong value_j)
			{
				EVString &value = *(EVString*) value_j;
				EarthView::World::Spatial::CEVSpatialServer *pObjectX = (EarthView::World::Spatial::CEVSpatialServer*) pObjXXXX;
				ev_int32 __values1 = pObjectX->getEVWMTSCapabilities(value);
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_Evspatialserver_getMap_1EVString_1EVString_1EVSSCSRS_1IEnvelope_1ev_1uint32_1ev_1uint32_1EVString_1ev_1bool_1ev_1int32_1ev_1int32_1ev_1int32_1EVString_1EVString_1CMemoryStreamResult(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring layers_j, jstring styles_j, jint srs_j, jlong maprect_j, jlong width_j, jlong height_j, jstring format_j, jboolean transparent_j, jint red_j, jint green_j, jint blue_j, jstring time_j, jstring elevation_j, jlong serverresult_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* layers_ch = (const ev_char*)__env->GetStringUTFChars(layers_j,JNI_FALSE);
				const EVString layers = layers_ch;
				__env->ReleaseStringUTFChars(layers_j, (const char *)layers_ch);
				#else
				const ev_wchar* layers_ch = (const ev_wchar*)__env->GetStringChars(layers_j,JNI_FALSE);
				const EVString layers = layers_ch;
				__env->ReleaseStringChars(layers_j, (const jchar *)layers_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* styles_ch = (const ev_char*)__env->GetStringUTFChars(styles_j,JNI_FALSE);
				const EVString styles = styles_ch;
				__env->ReleaseStringUTFChars(styles_j, (const char *)styles_ch);
				#else
				const ev_wchar* styles_ch = (const ev_wchar*)__env->GetStringChars(styles_j,JNI_FALSE);
				const EVString styles = styles_ch;
				__env->ReleaseStringChars(styles_j, (const jchar *)styles_ch);
				#endif
				EarthView::World::Spatial::EVSSCSRS srs = (EarthView::World::Spatial::EVSSCSRS) srs_j;
				const EarthView::World::Spatial::Geometry::IEnvelope *maprect = (const EarthView::World::Spatial::Geometry::IEnvelope*) maprect_j;
				ev_uint32 width = (ev_uint32) width_j;
				ev_uint32 height = (ev_uint32) height_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* format_ch = (const ev_char*)__env->GetStringUTFChars(format_j,JNI_FALSE);
				const EVString format = format_ch;
				__env->ReleaseStringUTFChars(format_j, (const char *)format_ch);
				#else
				const ev_wchar* format_ch = (const ev_wchar*)__env->GetStringChars(format_j,JNI_FALSE);
				const EVString format = format_ch;
				__env->ReleaseStringChars(format_j, (const jchar *)format_ch);
				#endif
				ev_bool transparent = (ev_bool) transparent_j;
				ev_int32 red = (ev_int32) red_j;
				ev_int32 green = (ev_int32) green_j;
				ev_int32 blue = (ev_int32) blue_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* time_ch = (const ev_char*)__env->GetStringUTFChars(time_j,JNI_FALSE);
				const EVString time = time_ch;
				__env->ReleaseStringUTFChars(time_j, (const char *)time_ch);
				#else
				const ev_wchar* time_ch = (const ev_wchar*)__env->GetStringChars(time_j,JNI_FALSE);
				const EVString time = time_ch;
				__env->ReleaseStringChars(time_j, (const jchar *)time_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* elevation_ch = (const ev_char*)__env->GetStringUTFChars(elevation_j,JNI_FALSE);
				const EVString elevation = elevation_ch;
				__env->ReleaseStringUTFChars(elevation_j, (const char *)elevation_ch);
				#else
				const ev_wchar* elevation_ch = (const ev_wchar*)__env->GetStringChars(elevation_j,JNI_FALSE);
				const EVString elevation = elevation_ch;
				__env->ReleaseStringChars(elevation_j, (const jchar *)elevation_ch);
				#endif
				EarthView::World::Spatial::CMemoryStreamResult &serverresult = *(EarthView::World::Spatial::CMemoryStreamResult*) serverresult_j;
				EarthView::World::Spatial::CEVSpatialServer *pObjectX = (EarthView::World::Spatial::CEVSpatialServer*) pObjXXXX;
				ev_int32 __values1 = pObjectX->getMap(layers, styles, srs, maprect, width, height, format, transparent, red, green, blue, time, elevation, serverresult);
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_Evspatialserver_getWMSFeatureInfo_1EVString_1EVSSCSRS_1IEnvelope_1ev_1uint32_1ev_1uint32_1EVString_1ev_1uint32_1ev_1int32_1ev_1int32_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring layers_j, jint srs_j, jlong maprect_j, jlong width_j, jlong height_j, jstring infoformat_j, jlong featurecount_j, jint x_j, jint y_j, jlong value_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* layers_ch = (const ev_char*)__env->GetStringUTFChars(layers_j,JNI_FALSE);
				const EVString layers = layers_ch;
				__env->ReleaseStringUTFChars(layers_j, (const char *)layers_ch);
				#else
				const ev_wchar* layers_ch = (const ev_wchar*)__env->GetStringChars(layers_j,JNI_FALSE);
				const EVString layers = layers_ch;
				__env->ReleaseStringChars(layers_j, (const jchar *)layers_ch);
				#endif
				EarthView::World::Spatial::EVSSCSRS srs = (EarthView::World::Spatial::EVSSCSRS) srs_j;
				const EarthView::World::Spatial::Geometry::IEnvelope *maprect = (const EarthView::World::Spatial::Geometry::IEnvelope*) maprect_j;
				ev_uint32 width = (ev_uint32) width_j;
				ev_uint32 height = (ev_uint32) height_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* infoformat_ch = (const ev_char*)__env->GetStringUTFChars(infoformat_j,JNI_FALSE);
				const EVString infoformat = infoformat_ch;
				__env->ReleaseStringUTFChars(infoformat_j, (const char *)infoformat_ch);
				#else
				const ev_wchar* infoformat_ch = (const ev_wchar*)__env->GetStringChars(infoformat_j,JNI_FALSE);
				const EVString infoformat = infoformat_ch;
				__env->ReleaseStringChars(infoformat_j, (const jchar *)infoformat_ch);
				#endif
				ev_uint32 featurecount = (ev_uint32) featurecount_j;
				ev_int32 x = (ev_int32) x_j;
				ev_int32 y = (ev_int32) y_j;
				EVString &value = *(EVString*) value_j;
				EarthView::World::Spatial::CEVSpatialServer *pObjectX = (EarthView::World::Spatial::CEVSpatialServer*) pObjXXXX;
				ev_int32 __values1 = pObjectX->getWMSFeatureInfo(layers, srs, maprect, width, height, infoformat, featurecount, x, y, value);
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_Evspatialserver_getLayerLegend_1EVString_1ev_1uint32_1ev_1uint32_1CMemoryStreamResult(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring layer_j, jlong legendwidth_j, jlong legendheight_j, jlong serverresult_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* layer_ch = (const ev_char*)__env->GetStringUTFChars(layer_j,JNI_FALSE);
				EVString layer = layer_ch;
				__env->ReleaseStringUTFChars(layer_j, (const char *)layer_ch);
				#else
				const ev_wchar* layer_ch = (const ev_wchar*)__env->GetStringChars(layer_j,JNI_FALSE);
				EVString layer = layer_ch;
				__env->ReleaseStringChars(layer_j, (const jchar *)layer_ch);
				#endif
				ev_uint32 legendwidth = (ev_uint32) legendwidth_j;
				ev_uint32 legendheight = (ev_uint32) legendheight_j;
				EarthView::World::Spatial::CMemoryStreamResult &serverresult = *(EarthView::World::Spatial::CMemoryStreamResult*) serverresult_j;
				EarthView::World::Spatial::CEVSpatialServer *pObjectX = (EarthView::World::Spatial::CEVSpatialServer*) pObjXXXX;
				ev_int32 __values1 = pObjectX->getLayerLegend(layer, legendwidth, legendheight, serverresult);
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_Evspatialserver_getQueryMap_1EVString_1ISymbol_1EVSSCSRS_1IEnvelope_1ev_1uint32_1ev_1uint32_1CServerSearchCondition_1EVString_1CMemoryStreamResult(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring layers_j, jlong symbol_j, jint srs_j, jlong maprect_j, jlong width_j, jlong height_j, jlong conditions_j, jstring format_j, jlong serverresult_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* layers_ch = (const ev_char*)__env->GetStringUTFChars(layers_j,JNI_FALSE);
				EVString layers = layers_ch;
				__env->ReleaseStringUTFChars(layers_j, (const char *)layers_ch);
				#else
				const ev_wchar* layers_ch = (const ev_wchar*)__env->GetStringChars(layers_j,JNI_FALSE);
				EVString layers = layers_ch;
				__env->ReleaseStringChars(layers_j, (const jchar *)layers_ch);
				#endif
				const EarthView::World::Spatial::Display::ISymbol *symbol = (const EarthView::World::Spatial::Display::ISymbol*) symbol_j;
				EarthView::World::Spatial::EVSSCSRS srs = (EarthView::World::Spatial::EVSSCSRS) srs_j;
				const EarthView::World::Spatial::Geometry::IEnvelope *maprect = (const EarthView::World::Spatial::Geometry::IEnvelope*) maprect_j;
				ev_uint32 width = (ev_uint32) width_j;
				ev_uint32 height = (ev_uint32) height_j;
				EarthView::World::Spatial::CServerSearchCondition *conditions = (EarthView::World::Spatial::CServerSearchCondition*) conditions_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* format_ch = (const ev_char*)__env->GetStringUTFChars(format_j,JNI_FALSE);
				EVString format = format_ch;
				__env->ReleaseStringUTFChars(format_j, (const char *)format_ch);
				#else
				const ev_wchar* format_ch = (const ev_wchar*)__env->GetStringChars(format_j,JNI_FALSE);
				EVString format = format_ch;
				__env->ReleaseStringChars(format_j, (const jchar *)format_ch);
				#endif
				EarthView::World::Spatial::CMemoryStreamResult &serverresult = *(EarthView::World::Spatial::CMemoryStreamResult*) serverresult_j;
				EarthView::World::Spatial::CEVSpatialServer *pObjectX = (EarthView::World::Spatial::CEVSpatialServer*) pObjXXXX;
				ev_int32 __values1 = pObjectX->getQueryMap(layers, symbol, srs, maprect, width, height, conditions, format, serverresult);
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_Evspatialserver_convertToLngLat_1EVString_1EVSSCSRS_1IEnvelope_1ev_1uint32_1ev_1uint32_1CServerPointList_1CServerPointList(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring map_j, jint srs_j, jlong maprect_j, jlong width_j, jlong height_j, jlong pointlist_j, jlong outpointlist_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* map_ch = (const ev_char*)__env->GetStringUTFChars(map_j,JNI_FALSE);
				EVString map = map_ch;
				__env->ReleaseStringUTFChars(map_j, (const char *)map_ch);
				#else
				const ev_wchar* map_ch = (const ev_wchar*)__env->GetStringChars(map_j,JNI_FALSE);
				EVString map = map_ch;
				__env->ReleaseStringChars(map_j, (const jchar *)map_ch);
				#endif
				EarthView::World::Spatial::EVSSCSRS srs = (EarthView::World::Spatial::EVSSCSRS) srs_j;
				const EarthView::World::Spatial::Geometry::IEnvelope *maprect = (const EarthView::World::Spatial::Geometry::IEnvelope*) maprect_j;
				ev_uint32 width = (ev_uint32) width_j;
				ev_uint32 height = (ev_uint32) height_j;
				EarthView::World::Spatial::CServerPointList &pointlist = *(EarthView::World::Spatial::CServerPointList*) pointlist_j;
				EarthView::World::Spatial::CServerPointList &outpointlist = *(EarthView::World::Spatial::CServerPointList*) outpointlist_j;
				EarthView::World::Spatial::CEVSpatialServer *pObjectX = (EarthView::World::Spatial::CEVSpatialServer*) pObjXXXX;
				ev_int32 __values1 = pObjectX->convertToLngLat(map, srs, maprect, width, height, pointlist, outpointlist);
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Evspatialserver_getOGCWMSCapabilitiesRef_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::CEVSpatialServer *pObjectX = (EarthView::World::Spatial::CEVSpatialServer*) pObjXXXX;
				const EarthView::World::Spatial::CWMSServerInfo* __values1 = pObjectX->getOGCWMSCapabilitiesRef();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_Evspatialserver_getEVWMSCapabilities_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong value_j)
			{
				EVString &value = *(EVString*) value_j;
				EarthView::World::Spatial::CEVSpatialServer *pObjectX = (EarthView::World::Spatial::CEVSpatialServer*) pObjXXXX;
				ev_int32 __values1 = pObjectX->getEVWMSCapabilities(value);
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_Evspatialserver_getWMSChart_1EVString_1EVString_1EVString_1EVString_1ev_1int32_1ev_1int32_1EVString_1EVString_1EVString_1EVString_1EVString_1CMemoryStreamResult(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring layer_j, jstring srs_j, jstring bBox_j, jstring format_j, jint width_j, jint height_j, jstring displayMode_j, jstring colorMode_j, jstring symbolMode_j, jstring isobath_j, jstring annotationMode_j, jlong serverresult_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* layer_ch = (const ev_char*)__env->GetStringUTFChars(layer_j,JNI_FALSE);
				const EVString layer = layer_ch;
				__env->ReleaseStringUTFChars(layer_j, (const char *)layer_ch);
				#else
				const ev_wchar* layer_ch = (const ev_wchar*)__env->GetStringChars(layer_j,JNI_FALSE);
				const EVString layer = layer_ch;
				__env->ReleaseStringChars(layer_j, (const jchar *)layer_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* srs_ch = (const ev_char*)__env->GetStringUTFChars(srs_j,JNI_FALSE);
				const EVString srs = srs_ch;
				__env->ReleaseStringUTFChars(srs_j, (const char *)srs_ch);
				#else
				const ev_wchar* srs_ch = (const ev_wchar*)__env->GetStringChars(srs_j,JNI_FALSE);
				const EVString srs = srs_ch;
				__env->ReleaseStringChars(srs_j, (const jchar *)srs_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* bBox_ch = (const ev_char*)__env->GetStringUTFChars(bBox_j,JNI_FALSE);
				const EVString bBox = bBox_ch;
				__env->ReleaseStringUTFChars(bBox_j, (const char *)bBox_ch);
				#else
				const ev_wchar* bBox_ch = (const ev_wchar*)__env->GetStringChars(bBox_j,JNI_FALSE);
				const EVString bBox = bBox_ch;
				__env->ReleaseStringChars(bBox_j, (const jchar *)bBox_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* format_ch = (const ev_char*)__env->GetStringUTFChars(format_j,JNI_FALSE);
				const EVString format = format_ch;
				__env->ReleaseStringUTFChars(format_j, (const char *)format_ch);
				#else
				const ev_wchar* format_ch = (const ev_wchar*)__env->GetStringChars(format_j,JNI_FALSE);
				const EVString format = format_ch;
				__env->ReleaseStringChars(format_j, (const jchar *)format_ch);
				#endif
				ev_int32 width = (ev_int32) width_j;
				ev_int32 height = (ev_int32) height_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* displayMode_ch = (const ev_char*)__env->GetStringUTFChars(displayMode_j,JNI_FALSE);
				const EVString displayMode = displayMode_ch;
				__env->ReleaseStringUTFChars(displayMode_j, (const char *)displayMode_ch);
				#else
				const ev_wchar* displayMode_ch = (const ev_wchar*)__env->GetStringChars(displayMode_j,JNI_FALSE);
				const EVString displayMode = displayMode_ch;
				__env->ReleaseStringChars(displayMode_j, (const jchar *)displayMode_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* colorMode_ch = (const ev_char*)__env->GetStringUTFChars(colorMode_j,JNI_FALSE);
				const EVString colorMode = colorMode_ch;
				__env->ReleaseStringUTFChars(colorMode_j, (const char *)colorMode_ch);
				#else
				const ev_wchar* colorMode_ch = (const ev_wchar*)__env->GetStringChars(colorMode_j,JNI_FALSE);
				const EVString colorMode = colorMode_ch;
				__env->ReleaseStringChars(colorMode_j, (const jchar *)colorMode_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* symbolMode_ch = (const ev_char*)__env->GetStringUTFChars(symbolMode_j,JNI_FALSE);
				const EVString symbolMode = symbolMode_ch;
				__env->ReleaseStringUTFChars(symbolMode_j, (const char *)symbolMode_ch);
				#else
				const ev_wchar* symbolMode_ch = (const ev_wchar*)__env->GetStringChars(symbolMode_j,JNI_FALSE);
				const EVString symbolMode = symbolMode_ch;
				__env->ReleaseStringChars(symbolMode_j, (const jchar *)symbolMode_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* isobath_ch = (const ev_char*)__env->GetStringUTFChars(isobath_j,JNI_FALSE);
				const EVString isobath = isobath_ch;
				__env->ReleaseStringUTFChars(isobath_j, (const char *)isobath_ch);
				#else
				const ev_wchar* isobath_ch = (const ev_wchar*)__env->GetStringChars(isobath_j,JNI_FALSE);
				const EVString isobath = isobath_ch;
				__env->ReleaseStringChars(isobath_j, (const jchar *)isobath_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* annotationMode_ch = (const ev_char*)__env->GetStringUTFChars(annotationMode_j,JNI_FALSE);
				const EVString annotationMode = annotationMode_ch;
				__env->ReleaseStringUTFChars(annotationMode_j, (const char *)annotationMode_ch);
				#else
				const ev_wchar* annotationMode_ch = (const ev_wchar*)__env->GetStringChars(annotationMode_j,JNI_FALSE);
				const EVString annotationMode = annotationMode_ch;
				__env->ReleaseStringChars(annotationMode_j, (const jchar *)annotationMode_ch);
				#endif
				EarthView::World::Spatial::CMemoryStreamResult &serverresult = *(EarthView::World::Spatial::CMemoryStreamResult*) serverresult_j;
				EarthView::World::Spatial::CEVSpatialServer *pObjectX = (EarthView::World::Spatial::CEVSpatialServer*) pObjXXXX;
				ev_int32 __values1 = pObjectX->getWMSChart(layer, srs, bBox, format, width, height, displayMode, colorMode, symbolMode, isobath, annotationMode, serverresult);
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_Evspatialserver_getWMSImage_1EVString_1EVString_1ev_1int32_1ev_1int32_1EVString_1EVString_1CMemoryStreamResult(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring imageName_j, jstring bBOX_j, jint width_j, jint height_j, jstring SRS_j, jstring format_j, jlong serverresult_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* imageName_ch = (const ev_char*)__env->GetStringUTFChars(imageName_j,JNI_FALSE);
				EVString imageName = imageName_ch;
				__env->ReleaseStringUTFChars(imageName_j, (const char *)imageName_ch);
				#else
				const ev_wchar* imageName_ch = (const ev_wchar*)__env->GetStringChars(imageName_j,JNI_FALSE);
				EVString imageName = imageName_ch;
				__env->ReleaseStringChars(imageName_j, (const jchar *)imageName_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* bBOX_ch = (const ev_char*)__env->GetStringUTFChars(bBOX_j,JNI_FALSE);
				EVString bBOX = bBOX_ch;
				__env->ReleaseStringUTFChars(bBOX_j, (const char *)bBOX_ch);
				#else
				const ev_wchar* bBOX_ch = (const ev_wchar*)__env->GetStringChars(bBOX_j,JNI_FALSE);
				EVString bBOX = bBOX_ch;
				__env->ReleaseStringChars(bBOX_j, (const jchar *)bBOX_ch);
				#endif
				ev_int32 width = (ev_int32) width_j;
				ev_int32 height = (ev_int32) height_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* SRS_ch = (const ev_char*)__env->GetStringUTFChars(SRS_j,JNI_FALSE);
				EVString SRS = SRS_ch;
				__env->ReleaseStringUTFChars(SRS_j, (const char *)SRS_ch);
				#else
				const ev_wchar* SRS_ch = (const ev_wchar*)__env->GetStringChars(SRS_j,JNI_FALSE);
				EVString SRS = SRS_ch;
				__env->ReleaseStringChars(SRS_j, (const jchar *)SRS_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* format_ch = (const ev_char*)__env->GetStringUTFChars(format_j,JNI_FALSE);
				EVString format = format_ch;
				__env->ReleaseStringUTFChars(format_j, (const char *)format_ch);
				#else
				const ev_wchar* format_ch = (const ev_wchar*)__env->GetStringChars(format_j,JNI_FALSE);
				EVString format = format_ch;
				__env->ReleaseStringChars(format_j, (const jchar *)format_ch);
				#endif
				EarthView::World::Spatial::CMemoryStreamResult &serverresult = *(EarthView::World::Spatial::CMemoryStreamResult*) serverresult_j;
				EarthView::World::Spatial::CEVSpatialServer *pObjectX = (EarthView::World::Spatial::CEVSpatialServer*) pObjXXXX;
				ev_int32 __values1 = pObjectX->getWMSImage(imageName, bBOX, width, height, SRS, format, serverresult);
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_Evspatialserver_getQueryAttribute_1EVString_1CServerSearchCondition_1ev_1int32_1ev_1int32_1CServerSet(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring layer_j, jlong condition_j, jint startrecord_j, jint recordcount_j, jlong recordset_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* layer_ch = (const ev_char*)__env->GetStringUTFChars(layer_j,JNI_FALSE);
				EVString layer = layer_ch;
				__env->ReleaseStringUTFChars(layer_j, (const char *)layer_ch);
				#else
				const ev_wchar* layer_ch = (const ev_wchar*)__env->GetStringChars(layer_j,JNI_FALSE);
				EVString layer = layer_ch;
				__env->ReleaseStringChars(layer_j, (const jchar *)layer_ch);
				#endif
				const EarthView::World::Spatial::CServerSearchCondition *condition = (const EarthView::World::Spatial::CServerSearchCondition*) condition_j;
				ev_int32 startrecord = (ev_int32) startrecord_j;
				ev_int32 recordcount = (ev_int32) recordcount_j;
				EarthView::World::Spatial::CServerSet &recordset = *(EarthView::World::Spatial::CServerSet*) recordset_j;
				EarthView::World::Spatial::CEVSpatialServer *pObjectX = (EarthView::World::Spatial::CEVSpatialServer*) pObjXXXX;
				ev_int32 __values1 = pObjectX->getQueryAttribute(layer, condition, startrecord, recordcount, recordset);
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_Evspatialserver_getLayerAttributeValue_1EVString_1ev_1uint32_1ev_1real64_1ev_1real64_1EVString_1CServerQueryResults(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring querylayers_j, jlong featurecount_j, jdouble x_j, jdouble y_j, jstring fieldname_j, jlong queryresult_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* querylayers_ch = (const ev_char*)__env->GetStringUTFChars(querylayers_j,JNI_FALSE);
				EVString querylayers = querylayers_ch;
				__env->ReleaseStringUTFChars(querylayers_j, (const char *)querylayers_ch);
				#else
				const ev_wchar* querylayers_ch = (const ev_wchar*)__env->GetStringChars(querylayers_j,JNI_FALSE);
				EVString querylayers = querylayers_ch;
				__env->ReleaseStringChars(querylayers_j, (const jchar *)querylayers_ch);
				#endif
				ev_uint32 featurecount = (ev_uint32) featurecount_j;
				ev_real64 x = (ev_real64) x_j;
				ev_real64 y = (ev_real64) y_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* fieldname_ch = (const ev_char*)__env->GetStringUTFChars(fieldname_j,JNI_FALSE);
				EVString fieldname = fieldname_ch;
				__env->ReleaseStringUTFChars(fieldname_j, (const char *)fieldname_ch);
				#else
				const ev_wchar* fieldname_ch = (const ev_wchar*)__env->GetStringChars(fieldname_j,JNI_FALSE);
				EVString fieldname = fieldname_ch;
				__env->ReleaseStringChars(fieldname_j, (const jchar *)fieldname_ch);
				#endif
				EarthView::World::Spatial::CServerQueryResults &queryresult = *(EarthView::World::Spatial::CServerQueryResults*) queryresult_j;
				EarthView::World::Spatial::CEVSpatialServer *pObjectX = (EarthView::World::Spatial::CEVSpatialServer*) pObjXXXX;
				ev_int32 __values1 = pObjectX->getLayerAttributeValue(querylayers, featurecount, x, y, fieldname, queryresult);
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_Evspatialserver_getUniqueFieldValue_1EVString_1EVString_1CServerQueryResults(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring querylayer_j, jstring fieldname_j, jlong queryresult_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* querylayer_ch = (const ev_char*)__env->GetStringUTFChars(querylayer_j,JNI_FALSE);
				EVString querylayer = querylayer_ch;
				__env->ReleaseStringUTFChars(querylayer_j, (const char *)querylayer_ch);
				#else
				const ev_wchar* querylayer_ch = (const ev_wchar*)__env->GetStringChars(querylayer_j,JNI_FALSE);
				EVString querylayer = querylayer_ch;
				__env->ReleaseStringChars(querylayer_j, (const jchar *)querylayer_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* fieldname_ch = (const ev_char*)__env->GetStringUTFChars(fieldname_j,JNI_FALSE);
				EVString fieldname = fieldname_ch;
				__env->ReleaseStringUTFChars(fieldname_j, (const char *)fieldname_ch);
				#else
				const ev_wchar* fieldname_ch = (const ev_wchar*)__env->GetStringChars(fieldname_j,JNI_FALSE);
				EVString fieldname = fieldname_ch;
				__env->ReleaseStringChars(fieldname_j, (const jchar *)fieldname_ch);
				#endif
				EarthView::World::Spatial::CServerQueryResults &queryresult = *(EarthView::World::Spatial::CServerQueryResults*) queryresult_j;
				EarthView::World::Spatial::CEVSpatialServer *pObjectX = (EarthView::World::Spatial::CEVSpatialServer*) pObjXXXX;
				ev_int32 __values1 = pObjectX->getUniqueFieldValue(querylayer, fieldname, queryresult);
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_Evspatialserver_getLayerFeature_1EVString_1ev_1bool_1ev_1bool_1EVString_1CEVWebFeature(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring layer_j, jboolean hasgeometry_j, jboolean hasattribute_j, jstring attributenames_j, jlong feature_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* layer_ch = (const ev_char*)__env->GetStringUTFChars(layer_j,JNI_FALSE);
				EVString layer = layer_ch;
				__env->ReleaseStringUTFChars(layer_j, (const char *)layer_ch);
				#else
				const ev_wchar* layer_ch = (const ev_wchar*)__env->GetStringChars(layer_j,JNI_FALSE);
				EVString layer = layer_ch;
				__env->ReleaseStringChars(layer_j, (const jchar *)layer_ch);
				#endif
				ev_bool hasgeometry = (ev_bool) hasgeometry_j;
				ev_bool hasattribute = (ev_bool) hasattribute_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* attributenames_ch = (const ev_char*)__env->GetStringUTFChars(attributenames_j,JNI_FALSE);
				EVString attributenames = attributenames_ch;
				__env->ReleaseStringUTFChars(attributenames_j, (const char *)attributenames_ch);
				#else
				const ev_wchar* attributenames_ch = (const ev_wchar*)__env->GetStringChars(attributenames_j,JNI_FALSE);
				EVString attributenames = attributenames_ch;
				__env->ReleaseStringChars(attributenames_j, (const jchar *)attributenames_ch);
				#endif
				EarthView::World::Spatial::CEVWebFeature &feature = *(EarthView::World::Spatial::CEVWebFeature*) feature_j;
				EarthView::World::Spatial::CEVSpatialServer *pObjectX = (EarthView::World::Spatial::CEVSpatialServer*) pObjXXXX;
				ev_int32 __values1 = pObjectX->getLayerFeature(layer, hasgeometry, hasattribute, attributenames, feature);
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_Evspatialserver_getSearchGeometry_1EVString_1CServerSearchCondition_1CGeometryList(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring layer_j, jlong condition_j, jlong geometrylist_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* layer_ch = (const ev_char*)__env->GetStringUTFChars(layer_j,JNI_FALSE);
				EVString layer = layer_ch;
				__env->ReleaseStringUTFChars(layer_j, (const char *)layer_ch);
				#else
				const ev_wchar* layer_ch = (const ev_wchar*)__env->GetStringChars(layer_j,JNI_FALSE);
				EVString layer = layer_ch;
				__env->ReleaseStringChars(layer_j, (const jchar *)layer_ch);
				#endif
				const EarthView::World::Spatial::CServerSearchCondition *condition = (const EarthView::World::Spatial::CServerSearchCondition*) condition_j;
				EarthView::World::Spatial::CGeometryList &geometrylist = *(EarthView::World::Spatial::CGeometryList*) geometrylist_j;
				EarthView::World::Spatial::CEVSpatialServer *pObjectX = (EarthView::World::Spatial::CEVSpatialServer*) pObjXXXX;
				ev_int32 __values1 = pObjectX->getSearchGeometry(layer, condition, geometrylist);
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_Evspatialserver_buffer_1EVString_1CGeometryList_1ev_1real64_1ev_1bool_1CGeometryList(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring map_j, jlong geometrylist_j, jdouble distance_j, jboolean isunion_j, jlong result_geometrylist_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* map_ch = (const ev_char*)__env->GetStringUTFChars(map_j,JNI_FALSE);
				EVString map = map_ch;
				__env->ReleaseStringUTFChars(map_j, (const char *)map_ch);
				#else
				const ev_wchar* map_ch = (const ev_wchar*)__env->GetStringChars(map_j,JNI_FALSE);
				EVString map = map_ch;
				__env->ReleaseStringChars(map_j, (const jchar *)map_ch);
				#endif
				EarthView::World::Spatial::CGeometryList &geometrylist = *(EarthView::World::Spatial::CGeometryList*) geometrylist_j;
				ev_real64 distance = (ev_real64) distance_j;
				ev_bool isunion = (ev_bool) isunion_j;
				EarthView::World::Spatial::CGeometryList &result_geometrylist = *(EarthView::World::Spatial::CGeometryList*) result_geometrylist_j;
				EarthView::World::Spatial::CEVSpatialServer *pObjectX = (EarthView::World::Spatial::CEVSpatialServer*) pObjXXXX;
				ev_int32 __values1 = pObjectX->buffer(map, geometrylist, distance, isunion, result_geometrylist);
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_Evspatialserver_contains_1EVString_1IGeometry_1IGeometry_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring map_j, jlong geometry1_j, jlong geometry2_j, jlong result_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* map_ch = (const ev_char*)__env->GetStringUTFChars(map_j,JNI_FALSE);
				EVString map = map_ch;
				__env->ReleaseStringUTFChars(map_j, (const char *)map_ch);
				#else
				const ev_wchar* map_ch = (const ev_wchar*)__env->GetStringChars(map_j,JNI_FALSE);
				EVString map = map_ch;
				__env->ReleaseStringChars(map_j, (const jchar *)map_ch);
				#endif
				const EarthView::World::Spatial::Geometry::IGeometry *geometry1 = (const EarthView::World::Spatial::Geometry::IGeometry*) geometry1_j;
				const EarthView::World::Spatial::Geometry::IGeometry *geometry2 = (const EarthView::World::Spatial::Geometry::IGeometry*) geometry2_j;
				ev_bool &result = *(ev_bool*) result_j;
				EarthView::World::Spatial::CEVSpatialServer *pObjectX = (EarthView::World::Spatial::CEVSpatialServer*) pObjXXXX;
				ev_int32 __values1 = pObjectX->contains(map, geometry1, geometry2, result);
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_Evspatialserver_crosses_1EVString_1IGeometry_1IGeometry_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring map_j, jlong geometry1_j, jlong geometry2_j, jlong result_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* map_ch = (const ev_char*)__env->GetStringUTFChars(map_j,JNI_FALSE);
				EVString map = map_ch;
				__env->ReleaseStringUTFChars(map_j, (const char *)map_ch);
				#else
				const ev_wchar* map_ch = (const ev_wchar*)__env->GetStringChars(map_j,JNI_FALSE);
				EVString map = map_ch;
				__env->ReleaseStringChars(map_j, (const jchar *)map_ch);
				#endif
				const EarthView::World::Spatial::Geometry::IGeometry *geometry1 = (const EarthView::World::Spatial::Geometry::IGeometry*) geometry1_j;
				const EarthView::World::Spatial::Geometry::IGeometry *geometry2 = (const EarthView::World::Spatial::Geometry::IGeometry*) geometry2_j;
				ev_bool &result = *(ev_bool*) result_j;
				EarthView::World::Spatial::CEVSpatialServer *pObjectX = (EarthView::World::Spatial::CEVSpatialServer*) pObjXXXX;
				ev_int32 __values1 = pObjectX->crosses(map, geometry1, geometry2, result);
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_Evspatialserver_disjoint_1EVString_1IGeometry_1IGeometry_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring map_j, jlong geometry1_j, jlong geometry2_j, jlong result_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* map_ch = (const ev_char*)__env->GetStringUTFChars(map_j,JNI_FALSE);
				EVString map = map_ch;
				__env->ReleaseStringUTFChars(map_j, (const char *)map_ch);
				#else
				const ev_wchar* map_ch = (const ev_wchar*)__env->GetStringChars(map_j,JNI_FALSE);
				EVString map = map_ch;
				__env->ReleaseStringChars(map_j, (const jchar *)map_ch);
				#endif
				const EarthView::World::Spatial::Geometry::IGeometry *geometry1 = (const EarthView::World::Spatial::Geometry::IGeometry*) geometry1_j;
				const EarthView::World::Spatial::Geometry::IGeometry *geometry2 = (const EarthView::World::Spatial::Geometry::IGeometry*) geometry2_j;
				ev_bool &result = *(ev_bool*) result_j;
				EarthView::World::Spatial::CEVSpatialServer *pObjectX = (EarthView::World::Spatial::CEVSpatialServer*) pObjXXXX;
				ev_int32 __values1 = pObjectX->disjoint(map, geometry1, geometry2, result);
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_Evspatialserver_distance_1EVString_1IGeometry_1IGeometry_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring map_j, jlong geometry1_j, jlong geometry2_j, jlong result_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* map_ch = (const ev_char*)__env->GetStringUTFChars(map_j,JNI_FALSE);
				EVString map = map_ch;
				__env->ReleaseStringUTFChars(map_j, (const char *)map_ch);
				#else
				const ev_wchar* map_ch = (const ev_wchar*)__env->GetStringChars(map_j,JNI_FALSE);
				EVString map = map_ch;
				__env->ReleaseStringChars(map_j, (const jchar *)map_ch);
				#endif
				const EarthView::World::Spatial::Geometry::IGeometry *geometry1 = (const EarthView::World::Spatial::Geometry::IGeometry*) geometry1_j;
				const EarthView::World::Spatial::Geometry::IGeometry *geometry2 = (const EarthView::World::Spatial::Geometry::IGeometry*) geometry2_j;
				ev_real64 &result = *(ev_real64*) result_j;
				EarthView::World::Spatial::CEVSpatialServer *pObjectX = (EarthView::World::Spatial::CEVSpatialServer*) pObjXXXX;
				ev_int32 __values1 = pObjectX->distance(map, geometry1, geometry2, result);
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_Evspatialserver_intersects_1EVString_1IGeometry_1IGeometry_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring map_j, jlong geometry1_j, jlong geometry2_j, jlong result_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* map_ch = (const ev_char*)__env->GetStringUTFChars(map_j,JNI_FALSE);
				EVString map = map_ch;
				__env->ReleaseStringUTFChars(map_j, (const char *)map_ch);
				#else
				const ev_wchar* map_ch = (const ev_wchar*)__env->GetStringChars(map_j,JNI_FALSE);
				EVString map = map_ch;
				__env->ReleaseStringChars(map_j, (const jchar *)map_ch);
				#endif
				const EarthView::World::Spatial::Geometry::IGeometry *geometry1 = (const EarthView::World::Spatial::Geometry::IGeometry*) geometry1_j;
				const EarthView::World::Spatial::Geometry::IGeometry *geometry2 = (const EarthView::World::Spatial::Geometry::IGeometry*) geometry2_j;
				ev_bool &result = *(ev_bool*) result_j;
				EarthView::World::Spatial::CEVSpatialServer *pObjectX = (EarthView::World::Spatial::CEVSpatialServer*) pObjXXXX;
				ev_int32 __values1 = pObjectX->intersects(map, geometry1, geometry2, result);
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_Evspatialserver_overlaps_1EVString_1IGeometry_1IGeometry_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring map_j, jlong geometry1_j, jlong geometry2_j, jlong result_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* map_ch = (const ev_char*)__env->GetStringUTFChars(map_j,JNI_FALSE);
				EVString map = map_ch;
				__env->ReleaseStringUTFChars(map_j, (const char *)map_ch);
				#else
				const ev_wchar* map_ch = (const ev_wchar*)__env->GetStringChars(map_j,JNI_FALSE);
				EVString map = map_ch;
				__env->ReleaseStringChars(map_j, (const jchar *)map_ch);
				#endif
				const EarthView::World::Spatial::Geometry::IGeometry *geometry1 = (const EarthView::World::Spatial::Geometry::IGeometry*) geometry1_j;
				const EarthView::World::Spatial::Geometry::IGeometry *geometry2 = (const EarthView::World::Spatial::Geometry::IGeometry*) geometry2_j;
				ev_bool &result = *(ev_bool*) result_j;
				EarthView::World::Spatial::CEVSpatialServer *pObjectX = (EarthView::World::Spatial::CEVSpatialServer*) pObjXXXX;
				ev_int32 __values1 = pObjectX->overlaps(map, geometry1, geometry2, result);
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_Evspatialserver_touches_1EVString_1IGeometry_1IGeometry_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring map_j, jlong geometry1_j, jlong geometry2_j, jlong result_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* map_ch = (const ev_char*)__env->GetStringUTFChars(map_j,JNI_FALSE);
				EVString map = map_ch;
				__env->ReleaseStringUTFChars(map_j, (const char *)map_ch);
				#else
				const ev_wchar* map_ch = (const ev_wchar*)__env->GetStringChars(map_j,JNI_FALSE);
				EVString map = map_ch;
				__env->ReleaseStringChars(map_j, (const jchar *)map_ch);
				#endif
				const EarthView::World::Spatial::Geometry::IGeometry *geometry1 = (const EarthView::World::Spatial::Geometry::IGeometry*) geometry1_j;
				const EarthView::World::Spatial::Geometry::IGeometry *geometry2 = (const EarthView::World::Spatial::Geometry::IGeometry*) geometry2_j;
				ev_bool &result = *(ev_bool*) result_j;
				EarthView::World::Spatial::CEVSpatialServer *pObjectX = (EarthView::World::Spatial::CEVSpatialServer*) pObjXXXX;
				ev_int32 __values1 = pObjectX->touches(map, geometry1, geometry2, result);
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_Evspatialserver_within_1EVString_1IGeometry_1IGeometry_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring map_j, jlong geometry1_j, jlong geometry2_j, jlong result_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* map_ch = (const ev_char*)__env->GetStringUTFChars(map_j,JNI_FALSE);
				EVString map = map_ch;
				__env->ReleaseStringUTFChars(map_j, (const char *)map_ch);
				#else
				const ev_wchar* map_ch = (const ev_wchar*)__env->GetStringChars(map_j,JNI_FALSE);
				EVString map = map_ch;
				__env->ReleaseStringChars(map_j, (const jchar *)map_ch);
				#endif
				const EarthView::World::Spatial::Geometry::IGeometry *geometry1 = (const EarthView::World::Spatial::Geometry::IGeometry*) geometry1_j;
				const EarthView::World::Spatial::Geometry::IGeometry *geometry2 = (const EarthView::World::Spatial::Geometry::IGeometry*) geometry2_j;
				ev_bool &result = *(ev_bool*) result_j;
				EarthView::World::Spatial::CEVSpatialServer *pObjectX = (EarthView::World::Spatial::CEVSpatialServer*) pObjXXXX;
				ev_int32 __values1 = pObjectX->within(map, geometry1, geometry2, result);
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_Evspatialserver_getGeoCodeFile_1EVString_1EVString_1CMemoryStreamResult(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring placename_j, jstring dataname_j, jlong serverresult_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* placename_ch = (const ev_char*)__env->GetStringUTFChars(placename_j,JNI_FALSE);
				EVString placename = placename_ch;
				__env->ReleaseStringUTFChars(placename_j, (const char *)placename_ch);
				#else
				const ev_wchar* placename_ch = (const ev_wchar*)__env->GetStringChars(placename_j,JNI_FALSE);
				EVString placename = placename_ch;
				__env->ReleaseStringChars(placename_j, (const jchar *)placename_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* dataname_ch = (const ev_char*)__env->GetStringUTFChars(dataname_j,JNI_FALSE);
				EVString dataname = dataname_ch;
				__env->ReleaseStringUTFChars(dataname_j, (const char *)dataname_ch);
				#else
				const ev_wchar* dataname_ch = (const ev_wchar*)__env->GetStringChars(dataname_j,JNI_FALSE);
				EVString dataname = dataname_ch;
				__env->ReleaseStringChars(dataname_j, (const jchar *)dataname_ch);
				#endif
				EarthView::World::Spatial::CMemoryStreamResult &serverresult = *(EarthView::World::Spatial::CMemoryStreamResult*) serverresult_j;
				EarthView::World::Spatial::CEVSpatialServer *pObjectX = (EarthView::World::Spatial::CEVSpatialServer*) pObjXXXX;
				ev_int32 __values1 = pObjectX->getGeoCodeFile(placename, dataname, serverresult);
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_Evspatialserver_queryPlacename_1EVString_1EVString_1EVString_1ev_1bool_1ev_1int32_1CPlaceNameList(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring layername_j, jstring namefield_j, jstring keyword_j, jboolean blurquery_j, jint limitcount_j, jlong resultlist_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* layername_ch = (const ev_char*)__env->GetStringUTFChars(layername_j,JNI_FALSE);
				EVString layername = layername_ch;
				__env->ReleaseStringUTFChars(layername_j, (const char *)layername_ch);
				#else
				const ev_wchar* layername_ch = (const ev_wchar*)__env->GetStringChars(layername_j,JNI_FALSE);
				EVString layername = layername_ch;
				__env->ReleaseStringChars(layername_j, (const jchar *)layername_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* namefield_ch = (const ev_char*)__env->GetStringUTFChars(namefield_j,JNI_FALSE);
				EVString namefield = namefield_ch;
				__env->ReleaseStringUTFChars(namefield_j, (const char *)namefield_ch);
				#else
				const ev_wchar* namefield_ch = (const ev_wchar*)__env->GetStringChars(namefield_j,JNI_FALSE);
				EVString namefield = namefield_ch;
				__env->ReleaseStringChars(namefield_j, (const jchar *)namefield_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* keyword_ch = (const ev_char*)__env->GetStringUTFChars(keyword_j,JNI_FALSE);
				EVString keyword = keyword_ch;
				__env->ReleaseStringUTFChars(keyword_j, (const char *)keyword_ch);
				#else
				const ev_wchar* keyword_ch = (const ev_wchar*)__env->GetStringChars(keyword_j,JNI_FALSE);
				EVString keyword = keyword_ch;
				__env->ReleaseStringChars(keyword_j, (const jchar *)keyword_ch);
				#endif
				ev_bool blurquery = (ev_bool) blurquery_j;
				ev_int32 limitcount = (ev_int32) limitcount_j;
				EarthView::World::Spatial::CPlaceNameList &resultlist = *(EarthView::World::Spatial::CPlaceNameList*) resultlist_j;
				EarthView::World::Spatial::CEVSpatialServer *pObjectX = (EarthView::World::Spatial::CEVSpatialServer*) pObjXXXX;
				ev_int32 __values1 = pObjectX->queryPlacename(layername, namefield, keyword, blurquery, limitcount, resultlist);
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_Evspatialserver_getKMLFile_1EVString_1EVString_1CMemoryStreamResult(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring filename_j, jstring dataName_j, jlong serverresult_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* filename_ch = (const ev_char*)__env->GetStringUTFChars(filename_j,JNI_FALSE);
				EVString filename = filename_ch;
				__env->ReleaseStringUTFChars(filename_j, (const char *)filename_ch);
				#else
				const ev_wchar* filename_ch = (const ev_wchar*)__env->GetStringChars(filename_j,JNI_FALSE);
				EVString filename = filename_ch;
				__env->ReleaseStringChars(filename_j, (const jchar *)filename_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* dataName_ch = (const ev_char*)__env->GetStringUTFChars(dataName_j,JNI_FALSE);
				EVString dataName = dataName_ch;
				__env->ReleaseStringUTFChars(dataName_j, (const char *)dataName_ch);
				#else
				const ev_wchar* dataName_ch = (const ev_wchar*)__env->GetStringChars(dataName_j,JNI_FALSE);
				EVString dataName = dataName_ch;
				__env->ReleaseStringChars(dataName_j, (const jchar *)dataName_ch);
				#endif
				EarthView::World::Spatial::CMemoryStreamResult &serverresult = *(EarthView::World::Spatial::CMemoryStreamResult*) serverresult_j;
				EarthView::World::Spatial::CEVSpatialServer *pObjectX = (EarthView::World::Spatial::CEVSpatialServer*) pObjXXXX;
				ev_int32 __values1 = pObjectX->getKMLFile(filename, dataName, serverresult);
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_Evspatialserver_getDEMFile_1EVString_1ev_1int32_1ev_1int32_1ev_1int32_1CMemoryStreamResult(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring filename_j, jint level_j, jint row_j, jint col_j, jlong serverresult_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* filename_ch = (const ev_char*)__env->GetStringUTFChars(filename_j,JNI_FALSE);
				EVString filename = filename_ch;
				__env->ReleaseStringUTFChars(filename_j, (const char *)filename_ch);
				#else
				const ev_wchar* filename_ch = (const ev_wchar*)__env->GetStringChars(filename_j,JNI_FALSE);
				EVString filename = filename_ch;
				__env->ReleaseStringChars(filename_j, (const jchar *)filename_ch);
				#endif
				ev_int32 level = (ev_int32) level_j;
				ev_int32 row = (ev_int32) row_j;
				ev_int32 col = (ev_int32) col_j;
				EarthView::World::Spatial::CMemoryStreamResult &serverresult = *(EarthView::World::Spatial::CMemoryStreamResult*) serverresult_j;
				EarthView::World::Spatial::CEVSpatialServer *pObjectX = (EarthView::World::Spatial::CEVSpatialServer*) pObjXXXX;
				ev_int32 __values1 = pObjectX->getDEMFile(filename, level, row, col, serverresult);
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_Evspatialserver_getEntityObject_1CServerEntityObject(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong entityObject_j)
			{
				EarthView::World::Spatial::CServerEntityObject &entityObject = *(EarthView::World::Spatial::CServerEntityObject*) entityObject_j;
				EarthView::World::Spatial::CEVSpatialServer *pObjectX = (EarthView::World::Spatial::CEVSpatialServer*) pObjXXXX;
				ev_int32 __values1 = pObjectX->getEntityObject(entityObject);
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_Evspatialserver_getMesh_1CServerMeshObject(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong meshObject_j)
			{
				EarthView::World::Spatial::CServerMeshObject &meshObject = *(EarthView::World::Spatial::CServerMeshObject*) meshObject_j;
				EarthView::World::Spatial::CEVSpatialServer *pObjectX = (EarthView::World::Spatial::CEVSpatialServer*) pObjXXXX;
				ev_int32 __values1 = pObjectX->getMesh(meshObject);
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_Evspatialserver_getResource_1CServerResourceObject(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong resourceObject_j)
			{
				EarthView::World::Spatial::CServerResourceObject &resourceObject = *(EarthView::World::Spatial::CServerResourceObject*) resourceObject_j;
				EarthView::World::Spatial::CEVSpatialServer *pObjectX = (EarthView::World::Spatial::CEVSpatialServer*) pObjXXXX;
				ev_int32 __values1 = pObjectX->getResource(resourceObject);
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_Evspatialserver_getResourceByID_1CServerResourceObject(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong resourceObject_j)
			{
				EarthView::World::Spatial::CServerResourceObject &resourceObject = *(EarthView::World::Spatial::CServerResourceObject*) resourceObject_j;
				EarthView::World::Spatial::CEVSpatialServer *pObjectX = (EarthView::World::Spatial::CEVSpatialServer*) pObjXXXX;
				ev_int32 __values1 = pObjectX->getResourceByID(resourceObject);
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_Evspatialserver_getOrigTexture_1CServerOrigTexture(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong origTexture_j)
			{
				EarthView::World::Spatial::CServerOrigTexture &origTexture = *(EarthView::World::Spatial::CServerOrigTexture*) origTexture_j;
				EarthView::World::Spatial::CEVSpatialServer *pObjectX = (EarthView::World::Spatial::CEVSpatialServer*) pObjXXXX;
				ev_int32 __values1 = pObjectX->getOrigTexture(origTexture);
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_Evspatialserver_getTemplateEntityObject_1CServerTemplateEntityObject(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong entityObject_j)
			{
				EarthView::World::Spatial::CServerTemplateEntityObject &entityObject = *(EarthView::World::Spatial::CServerTemplateEntityObject*) entityObject_j;
				EarthView::World::Spatial::CEVSpatialServer *pObjectX = (EarthView::World::Spatial::CEVSpatialServer*) pObjXXXX;
				ev_int32 __values1 = pObjectX->getTemplateEntityObject(entityObject);
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_Evspatialserver_getTemplateResourceByID_1CServerResourceObject(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong resourceObject_j)
			{
				EarthView::World::Spatial::CServerResourceObject &resourceObject = *(EarthView::World::Spatial::CServerResourceObject*) resourceObject_j;
				EarthView::World::Spatial::CEVSpatialServer *pObjectX = (EarthView::World::Spatial::CEVSpatialServer*) pObjXXXX;
				ev_int32 __values1 = pObjectX->getTemplateResourceByID(resourceObject);
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Evspatialserver_setValid_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean b_j)
			{
				ev_bool b = (ev_bool) b_j;
				EarthView::World::Spatial::CEVSpatialServer *pObjectX = (EarthView::World::Spatial::CEVSpatialServer*) pObjXXXX;
				pObjectX->setValid(b);
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_Evspatialserver_getDatasetType_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring datasetname_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* datasetname_ch = (const ev_char*)__env->GetStringUTFChars(datasetname_j,JNI_FALSE);
				const EVString datasetname = datasetname_ch;
				__env->ReleaseStringUTFChars(datasetname_j, (const char *)datasetname_ch);
				#else
				const ev_wchar* datasetname_ch = (const ev_wchar*)__env->GetStringChars(datasetname_j,JNI_FALSE);
				const EVString datasetname = datasetname_ch;
				__env->ReleaseStringChars(datasetname_j, (const jchar *)datasetname_ch);
				#endif
				EarthView::World::Spatial::CEVSpatialServer *pObjectX = (EarthView::World::Spatial::CEVSpatialServer*) pObjXXXX;
				EVString __values1 = pObjectX->getDatasetType(datasetname);
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_Evspatialserver_getMediaFileLength_1EVString_1EVString_1ev_1int64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring flename_j, jstring filetype_j, jlong fileLength_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* flename_ch = (const ev_char*)__env->GetStringUTFChars(flename_j,JNI_FALSE);
				const EVString flename = flename_ch;
				__env->ReleaseStringUTFChars(flename_j, (const char *)flename_ch);
				#else
				const ev_wchar* flename_ch = (const ev_wchar*)__env->GetStringChars(flename_j,JNI_FALSE);
				const EVString flename = flename_ch;
				__env->ReleaseStringChars(flename_j, (const jchar *)flename_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* filetype_ch = (const ev_char*)__env->GetStringUTFChars(filetype_j,JNI_FALSE);
				const EVString filetype = filetype_ch;
				__env->ReleaseStringUTFChars(filetype_j, (const char *)filetype_ch);
				#else
				const ev_wchar* filetype_ch = (const ev_wchar*)__env->GetStringChars(filetype_j,JNI_FALSE);
				const EVString filetype = filetype_ch;
				__env->ReleaseStringChars(filetype_j, (const jchar *)filetype_ch);
				#endif
				ev_int64 &fileLength = *(ev_int64*) fileLength_j;
				EarthView::World::Spatial::CEVSpatialServer *pObjectX = (EarthView::World::Spatial::CEVSpatialServer*) pObjXXXX;
				ev_int32 __values1 = pObjectX->getMediaFileLength(flename, filetype, fileLength);
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_Evspatialserver_getMediaFile_1EVString_1EVString_1MemoryDataStreamPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring flename_j, jstring filetype_j, jlong fileData_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* flename_ch = (const ev_char*)__env->GetStringUTFChars(flename_j,JNI_FALSE);
				const EVString flename = flename_ch;
				__env->ReleaseStringUTFChars(flename_j, (const char *)flename_ch);
				#else
				const ev_wchar* flename_ch = (const ev_wchar*)__env->GetStringChars(flename_j,JNI_FALSE);
				const EVString flename = flename_ch;
				__env->ReleaseStringChars(flename_j, (const jchar *)flename_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* filetype_ch = (const ev_char*)__env->GetStringUTFChars(filetype_j,JNI_FALSE);
				const EVString filetype = filetype_ch;
				__env->ReleaseStringUTFChars(filetype_j, (const char *)filetype_ch);
				#else
				const ev_wchar* filetype_ch = (const ev_wchar*)__env->GetStringChars(filetype_j,JNI_FALSE);
				const EVString filetype = filetype_ch;
				__env->ReleaseStringChars(filetype_j, (const jchar *)filetype_ch);
				#endif
				EarthView::World::Core::MemoryDataStreamPtr fileData = *(EarthView::World::Core::MemoryDataStreamPtr*) fileData_j;
				EarthView::World::Spatial::CEVSpatialServer *pObjectX = (EarthView::World::Spatial::CEVSpatialServer*) pObjXXXX;
				ev_int32 __values1 = pObjectX->getMediaFile(flename, filetype, fileData);
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_Evspatialserver_getMediaFileByOffset_1EVString_1EVString_1ev_1int64_1ev_1int64_1MemoryDataStreamPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring flename_j, jstring filetype_j, jlong offset_j, jlong length_j, jlong fileData_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* flename_ch = (const ev_char*)__env->GetStringUTFChars(flename_j,JNI_FALSE);
				const EVString flename = flename_ch;
				__env->ReleaseStringUTFChars(flename_j, (const char *)flename_ch);
				#else
				const ev_wchar* flename_ch = (const ev_wchar*)__env->GetStringChars(flename_j,JNI_FALSE);
				const EVString flename = flename_ch;
				__env->ReleaseStringChars(flename_j, (const jchar *)flename_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* filetype_ch = (const ev_char*)__env->GetStringUTFChars(filetype_j,JNI_FALSE);
				const EVString filetype = filetype_ch;
				__env->ReleaseStringUTFChars(filetype_j, (const char *)filetype_ch);
				#else
				const ev_wchar* filetype_ch = (const ev_wchar*)__env->GetStringChars(filetype_j,JNI_FALSE);
				const EVString filetype = filetype_ch;
				__env->ReleaseStringChars(filetype_j, (const jchar *)filetype_ch);
				#endif
				ev_int64 offset = (ev_int64) offset_j;
				ev_int64 length = (ev_int64) length_j;
				EarthView::World::Core::MemoryDataStreamPtr fileData = *(EarthView::World::Core::MemoryDataStreamPtr*) fileData_j;
				EarthView::World::Spatial::CEVSpatialServer *pObjectX = (EarthView::World::Spatial::CEVSpatialServer*) pObjXXXX;
				ev_int32 __values1 = pObjectX->getMediaFileByOffset(flename, filetype, offset, length, fileData);
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Evspatialserver_register_1getName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCEVSpatialServerProxy *pObjectX = (JCEVSpatialServerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getName_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getName_void_callback", "()Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Evspatialserver_register_1getType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCEVSpatialServerProxy *pObjectX = (JCEVSpatialServerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Evspatialserver_register_1createFeatureClass_1EVString_1IGeometryField_1IFields(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCEVSpatialServerProxy *pObjectX = (JCEVSpatialServerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createFeatureClass_EVString_IGeometryField_IFields_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createFeatureClass_EVString_IGeometryField_IFields_callback", "(Ljava/lang/String;JJ)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Evspatialserver_register_1deleteDataset_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCEVSpatialServerProxy *pObjectX = (JCEVSpatialServerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_deleteDataset_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"deleteDataset_EVString_callback", "(Ljava/lang/String;)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
		}
	}
}
