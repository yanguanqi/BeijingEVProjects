/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialserverclient/wfsdataset.h"
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
			class JCWFSDatasetProxy : public EarthView::World::Spatial::CWFSDataset
			{
			 private:
				EarthView::World::Core::ev_string m_getEnvelopeRef_void_callback;
				EarthView::World::Core::ev_string m_getGeometryType_void_callback;
				EarthView::World::Core::ev_string m_getSpatialReferenceRef_void_callback;
				EarthView::World::Core::ev_string m_getFieldsRef_void_callback;
				EarthView::World::Core::ev_string m_getType_void_callback;
				EarthView::World::Core::ev_string m_getName_void_callback;
				EarthView::World::Core::ev_string m_getDataVersion_void_callback;
				EarthView::World::Core::ev_string m_getDescription_void_callback;
				EarthView::World::Core::ev_string m_getUpdateTime_void_callback;
				EarthView::World::Core::ev_string m_hasSubDataset_void_callback;
				EarthView::World::Core::ev_string m_getDataSourceRef_void_callback;
				EarthView::World::Core::ev_string m_canEdit_void_callback;
				EarthView::World::Core::ev_string m_isEditing_void_callback;
				EarthView::World::Core::ev_string m_startEditing_ev_bool_callback;
				EarthView::World::Core::ev_string m_stopEditing_ev_bool_callback;
				EarthView::World::Core::ev_string m_isBeginEditingOperation_void_callback;
				EarthView::World::Core::ev_string m_beginEditingOperation_void_callback;
				EarthView::World::Core::ev_string m_endEditingOperation_ev_bool_callback;
			public:
				JCWFSDatasetProxy(EarthView::World::Core::CNameValuePairList *pList) : CWFSDataset(pList)
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
				void register_getEnvelopeRef_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getEnvelopeRef_void_callback = __method;
				}
				void register_getGeometryType_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getGeometryType_void_callback = __method;
				}
				void register_getSpatialReferenceRef_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getSpatialReferenceRef_void_callback = __method;
				}
				void register_getFieldsRef_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getFieldsRef_void_callback = __method;
				}
				void register_getType_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getType_void_callback = __method;
				}
				void register_getName_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getName_void_callback = __method;
				}
				void register_getDataVersion_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getDataVersion_void_callback = __method;
				}
				void register_getDescription_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getDescription_void_callback = __method;
				}
				void register_getUpdateTime_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getUpdateTime_void_callback = __method;
				}
				void register_hasSubDataset_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_hasSubDataset_void_callback = __method;
				}
				void register_getDataSourceRef_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getDataSourceRef_void_callback = __method;
				}
				void register_canEdit_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_canEdit_void_callback = __method;
				}
				void register_isEditing_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_isEditing_void_callback = __method;
				}
				void register_startEditing_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_startEditing_ev_bool_callback = __method;
				}
				void register_stopEditing_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_stopEditing_ev_bool_callback = __method;
				}
				void register_isBeginEditingOperation_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_isBeginEditingOperation_void_callback = __method;
				}
				void register_beginEditingOperation_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_beginEditingOperation_void_callback = __method;
				}
				void register_endEditingOperation_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_endEditingOperation_ev_bool_callback = __method;
				}
				virtual const EarthView::World::Spatial::Geometry::IEnvelope* getEnvelopeRef() const
				{
					if (this->_gRef != NULL && this->m_getEnvelopeRef_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getEnvelopeRef_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Spatial::Geometry::IEnvelope *__values1 = (const EarthView::World::Spatial::Geometry::IEnvelope*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CWFSDataset::getEnvelopeRef();
					}
				}
				virtual EarthView::World::Spatial::Geometry::EVGeometryType getGeometryType()
				{
					if (this->_gRef != NULL && this->m_getGeometryType_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getGeometryType_void_callback");
						jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Spatial::Geometry::EVGeometryType __values1 = (EarthView::World::Spatial::Geometry::EVGeometryType) __values1_j;
						return __values1;
					}
					else
					{
						return this->CWFSDataset::getGeometryType();
					}
				}
				virtual EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReferenceRef()
				{
					if (this->_gRef != NULL && this->m_getSpatialReferenceRef_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getSpatialReferenceRef_void_callback");
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
						return this->CWFSDataset::getSpatialReferenceRef();
					}
				}
				virtual const EarthView::World::Spatial::GeoDataset::IFields* getFieldsRef()
				{
					if (this->_gRef != NULL && this->m_getFieldsRef_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getFieldsRef_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Spatial::GeoDataset::IFields *__values1 = (const EarthView::World::Spatial::GeoDataset::IFields*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CWFSDataset::getFieldsRef();
					}
				}
				virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getType() const
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
						EarthView::World::Spatial::GeoDataset::EVDatasetType __values1 = (EarthView::World::Spatial::GeoDataset::EVDatasetType) __values1_j;
						return __values1;
					}
					else
					{
						return this->CWFSDataset::getType();
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
						return this->CWFSDataset::getName();
					}
				}
				virtual ev_uint64 getDataVersion() const
				{
					if (this->_gRef != NULL && this->m_getDataVersion_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getDataVersion_void_callback");
						jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const char* values_ch = __env->GetStringUTFChars(__values1_j,JNI_FALSE);
						EVString __values1_s = values_ch;
						__env->ReleaseStringUTFChars(__values1_j,values_ch);
						ev_uint64 __values1 = __values1_s.getUint64();
						return __values1;
					}
					else
					{
						return this->CWFSDataset::getDataVersion();
					}
				}
				virtual EVString getDescription() const
				{
					if (this->_gRef != NULL && this->m_getDescription_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getDescription_void_callback");
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
						return this->CWFSDataset::getDescription();
					}
				}
				virtual EVString getUpdateTime() const
				{
					if (this->_gRef != NULL && this->m_getUpdateTime_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getUpdateTime_void_callback");
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
						return this->CWFSDataset::getUpdateTime();
					}
				}
				virtual ev_bool hasSubDataset() const
				{
					if (this->_gRef != NULL && this->m_hasSubDataset_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("hasSubDataset_void_callback");
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
						return this->CWFSDataset::hasSubDataset();
					}
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataSource* getDataSourceRef() const
				{
					if (this->_gRef != NULL && this->m_getDataSourceRef_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getDataSourceRef_void_callback");
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
						return __values1;
					}
					else
					{
						return this->CWFSDataset::getDataSourceRef();
					}
				}
				virtual ev_bool canEdit() const
				{
					if (this->_gRef != NULL && this->m_canEdit_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("canEdit_void_callback");
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
						return this->CWFSDataset::canEdit();
					}
				}
				virtual ev_bool isEditing() const
				{
					if (this->_gRef != NULL && this->m_isEditing_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("isEditing_void_callback");
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
						return this->CWFSDataset::isEditing();
					}
				}
				virtual ev_bool startEditing(ev_bool withUndo)
				{
					if (this->_gRef != NULL && this->m_startEditing_ev_bool_callback != "" && this->isCustomExtend())
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
						jboolean withUndo_j = (jboolean) withUndo;
						jmethodID __method = __gr->getMethod("startEditing_ev_bool_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , withUndo_j);
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
						return this->CWFSDataset::startEditing(withUndo);
					}
				}
				virtual ev_bool stopEditing(ev_bool isSave)
				{
					if (this->_gRef != NULL && this->m_stopEditing_ev_bool_callback != "" && this->isCustomExtend())
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
						jboolean isSave_j = (jboolean) isSave;
						jmethodID __method = __gr->getMethod("stopEditing_ev_bool_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , isSave_j);
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
						return this->CWFSDataset::stopEditing(isSave);
					}
				}
				virtual ev_bool isBeginEditingOperation()
				{
					if (this->_gRef != NULL && this->m_isBeginEditingOperation_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("isBeginEditingOperation_void_callback");
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
						return this->CWFSDataset::isBeginEditingOperation();
					}
				}
				virtual ev_bool beginEditingOperation()
				{
					if (this->_gRef != NULL && this->m_beginEditingOperation_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("beginEditingOperation_void_callback");
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
						return this->CWFSDataset::beginEditingOperation();
					}
				}
				virtual ev_bool endEditingOperation(ev_bool isConfirm)
				{
					if (this->_gRef != NULL && this->m_endEditingOperation_ev_bool_callback != "" && this->isCustomExtend())
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
						jboolean isConfirm_j = (jboolean) isConfirm;
						jmethodID __method = __gr->getMethod("endEditingOperation_ev_bool_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , isConfirm_j);
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
						return this->CWFSDataset::endEditingOperation(isConfirm);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCWFSDatasetProxy);
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Wfsdataset_getEnvelopeRef_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CWFSDataset *pObjectX = (EarthView::World::Spatial::CWFSDataset*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCWFSDatasetProxy))
				{
					const EarthView::World::Spatial::Geometry::IEnvelope* __values1 = pObjectX->EarthView::World::Spatial::CWFSDataset::getEnvelopeRef();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					const EarthView::World::Spatial::Geometry::IEnvelope* __values1 = pObjectX->getEnvelopeRef();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Wfsdataset_register_1getEnvelopeRef_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCWFSDatasetProxy *pObjectX = (JCWFSDatasetProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getEnvelopeRef_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getEnvelopeRef_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Wfsdataset_getEnvelopeRef_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CWFSDataset *pObjectX = (EarthView::World::Spatial::CWFSDataset*) pObjXXXX;
				const EarthView::World::Spatial::Geometry::IEnvelope* __values1 = pObjectX->EarthView::World::Spatial::CWFSDataset::getEnvelopeRef();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Wfsdataset_getLayerInfoRef_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CWFSDataset *pObjectX = (EarthView::World::Spatial::CWFSDataset*) pObjXXXX;
				const EarthView::World::Spatial::CWFSLayerInfo* __values1 = pObjectX->getLayerInfoRef();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Wfsdataset_getServerInfoRef_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CWFSDataset *pObjectX = (EarthView::World::Spatial::CWFSDataset*) pObjXXXX;
				const EarthView::World::Spatial::CWFSServerInfo* __values1 = pObjectX->getServerInfoRef();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Wfsdataset_setTime_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring datatime_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* datatime_ch = (const ev_char*)__env->GetStringUTFChars(datatime_j,JNI_FALSE);
				const EVString datatime = datatime_ch;
				__env->ReleaseStringUTFChars(datatime_j, (const char *)datatime_ch);
				#else
				const ev_wchar* datatime_ch = (const ev_wchar*)__env->GetStringChars(datatime_j,JNI_FALSE);
				const EVString datatime = datatime_ch;
				__env->ReleaseStringChars(datatime_j, (const jchar *)datatime_ch);
				#endif
				EarthView::World::Spatial::CWFSDataset *pObjectX = (EarthView::World::Spatial::CWFSDataset*) pObjXXXX;
				pObjectX->setTime(datatime);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Wfsdataset_getTime_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CWFSDataset *pObjectX = (EarthView::World::Spatial::CWFSDataset*) pObjXXXX;
				const EVString& __values1 = pObjectX->getTime();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Wfsdataset_getFormatCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CWFSDataset *pObjectX = (EarthView::World::Spatial::CWFSDataset*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getFormatCount();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_Wfsdataset_getFormat_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_uint32 index = (ev_uint32) index_j;
				const 				EarthView::World::Spatial::CWFSDataset *pObjectX = (EarthView::World::Spatial::CWFSDataset*) pObjXXXX;
				const EVString __values1 = pObjectX->getFormat(index);
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Wfsdataset_getInfoFormatCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CWFSDataset *pObjectX = (EarthView::World::Spatial::CWFSDataset*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getInfoFormatCount();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_Wfsdataset_getGeometryType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::CWFSDataset *pObjectX = (EarthView::World::Spatial::CWFSDataset*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCWFSDatasetProxy))
				{
					EarthView::World::Spatial::Geometry::EVGeometryType __values1 = pObjectX->EarthView::World::Spatial::CWFSDataset::getGeometryType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Spatial::Geometry::EVGeometryType __values1 = pObjectX->getGeometryType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Wfsdataset_register_1getGeometryType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCWFSDatasetProxy *pObjectX = (JCWFSDatasetProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getGeometryType_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getGeometryType_void_callback", "()I");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_Wfsdataset_getGeometryType_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::CWFSDataset *pObjectX = (EarthView::World::Spatial::CWFSDataset*) pObjXXXX;
				EarthView::World::Spatial::Geometry::EVGeometryType __values1 = pObjectX->EarthView::World::Spatial::CWFSDataset::getGeometryType();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_Wfsdataset_getInfoFormat_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_uint32 index = (ev_uint32) index_j;
				const 				EarthView::World::Spatial::CWFSDataset *pObjectX = (EarthView::World::Spatial::CWFSDataset*) pObjXXXX;
				const EVString __values1 = pObjectX->getInfoFormat(index);
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Wfsdataset_getExceptionFormat_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CWFSDataset *pObjectX = (EarthView::World::Spatial::CWFSDataset*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getExceptionFormat();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Wfsdataset_getSpatialReferenceRef_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::CWFSDataset *pObjectX = (EarthView::World::Spatial::CWFSDataset*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCWFSDatasetProxy))
				{
					EarthView::World::Spatial::Geometry::ISpatialReference* __values1 = pObjectX->EarthView::World::Spatial::CWFSDataset::getSpatialReferenceRef();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Spatial::Geometry::ISpatialReference* __values1 = pObjectX->getSpatialReferenceRef();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Wfsdataset_register_1getSpatialReferenceRef_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCWFSDatasetProxy *pObjectX = (JCWFSDatasetProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getSpatialReferenceRef_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getSpatialReferenceRef_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Wfsdataset_getSpatialReferenceRef_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::CWFSDataset *pObjectX = (EarthView::World::Spatial::CWFSDataset*) pObjXXXX;
				EarthView::World::Spatial::Geometry::ISpatialReference* __values1 = pObjectX->EarthView::World::Spatial::CWFSDataset::getSpatialReferenceRef();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_Wfsdataset_getExceptionFormat_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_uint32 index = (ev_uint32) index_j;
				const 				EarthView::World::Spatial::CWFSDataset *pObjectX = (EarthView::World::Spatial::CWFSDataset*) pObjXXXX;
				const EVString __values1 = pObjectX->getExceptionFormat(index);
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Wfsdataset_getFeature_1EVString_1EVString_1EVString_1IEnvelope(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring version_j, jstring srs_j, jstring filter_j, jlong maprect_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* version_ch = (const ev_char*)__env->GetStringUTFChars(version_j,JNI_FALSE);
				const EVString version = version_ch;
				__env->ReleaseStringUTFChars(version_j, (const char *)version_ch);
				#else
				const ev_wchar* version_ch = (const ev_wchar*)__env->GetStringChars(version_j,JNI_FALSE);
				const EVString version = version_ch;
				__env->ReleaseStringChars(version_j, (const jchar *)version_ch);
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
				const ev_char* filter_ch = (const ev_char*)__env->GetStringUTFChars(filter_j,JNI_FALSE);
				const EVString filter = filter_ch;
				__env->ReleaseStringUTFChars(filter_j, (const char *)filter_ch);
				#else
				const ev_wchar* filter_ch = (const ev_wchar*)__env->GetStringChars(filter_j,JNI_FALSE);
				const EVString filter = filter_ch;
				__env->ReleaseStringChars(filter_j, (const jchar *)filter_ch);
				#endif
				const EarthView::World::Spatial::Geometry::IEnvelope *maprect = (const EarthView::World::Spatial::Geometry::IEnvelope*) maprect_j;
				EarthView::World::Spatial::CWFSDataset *pObjectX = (EarthView::World::Spatial::CWFSDataset*) pObjXXXX;
				EarthView::World::Spatial::GeoDataset::IFeatureIterator* __values1 = pObjectX->getFeature(version, srs, filter, maprect);
				if(__values1 != NULL) {					((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
				}				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Wfsdataset_getFieldsRef_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::CWFSDataset *pObjectX = (EarthView::World::Spatial::CWFSDataset*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCWFSDatasetProxy))
				{
					const EarthView::World::Spatial::GeoDataset::IFields* __values1 = pObjectX->EarthView::World::Spatial::CWFSDataset::getFieldsRef();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					const EarthView::World::Spatial::GeoDataset::IFields* __values1 = pObjectX->getFieldsRef();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Wfsdataset_register_1getFieldsRef_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCWFSDatasetProxy *pObjectX = (JCWFSDatasetProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getFieldsRef_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getFieldsRef_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Wfsdataset_getFieldsRef_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::CWFSDataset *pObjectX = (EarthView::World::Spatial::CWFSDataset*) pObjXXXX;
				const EarthView::World::Spatial::GeoDataset::IFields* __values1 = pObjectX->EarthView::World::Spatial::CWFSDataset::getFieldsRef();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Wfsdataset_register_1getType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCWFSDatasetProxy *pObjectX = (JCWFSDatasetProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Wfsdataset_register_1getName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCWFSDatasetProxy *pObjectX = (JCWFSDatasetProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Wfsdataset_register_1getDataVersion_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCWFSDatasetProxy *pObjectX = (JCWFSDatasetProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getDataVersion_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getDataVersion_void_callback", "()Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Wfsdataset_register_1getDescription_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCWFSDatasetProxy *pObjectX = (JCWFSDatasetProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getDescription_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getDescription_void_callback", "()Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Wfsdataset_register_1getUpdateTime_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCWFSDatasetProxy *pObjectX = (JCWFSDatasetProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getUpdateTime_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getUpdateTime_void_callback", "()Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Wfsdataset_register_1hasSubDataset_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCWFSDatasetProxy *pObjectX = (JCWFSDatasetProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_hasSubDataset_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"hasSubDataset_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Wfsdataset_register_1getDataSourceRef_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCWFSDatasetProxy *pObjectX = (JCWFSDatasetProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getDataSourceRef_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getDataSourceRef_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Wfsdataset_register_1canEdit_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCWFSDatasetProxy *pObjectX = (JCWFSDatasetProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_canEdit_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"canEdit_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Wfsdataset_register_1isEditing_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCWFSDatasetProxy *pObjectX = (JCWFSDatasetProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_isEditing_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"isEditing_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Wfsdataset_register_1startEditing_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCWFSDatasetProxy *pObjectX = (JCWFSDatasetProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_startEditing_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"startEditing_ev_bool_callback", "(Z)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Wfsdataset_register_1stopEditing_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCWFSDatasetProxy *pObjectX = (JCWFSDatasetProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_stopEditing_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"stopEditing_ev_bool_callback", "(Z)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Wfsdataset_register_1isBeginEditingOperation_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCWFSDatasetProxy *pObjectX = (JCWFSDatasetProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_isBeginEditingOperation_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"isBeginEditingOperation_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Wfsdataset_register_1beginEditingOperation_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCWFSDatasetProxy *pObjectX = (JCWFSDatasetProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_beginEditingOperation_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"beginEditingOperation_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Wfsdataset_register_1endEditingOperation_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCWFSDatasetProxy *pObjectX = (JCWFSDatasetProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_endEditingOperation_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"endEditingOperation_ev_bool_callback", "(Z)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			class JCWFSFeatureIteratorProxy : public EarthView::World::Spatial::CWFSFeatureIterator
			{
			 private:
				EarthView::World::Core::ev_string m_next_void_callback;
				EarthView::World::Core::ev_string m_getFields_void_callback;
				EarthView::World::Core::ev_string m_getField_ev_uint32_callback;
				EarthView::World::Core::ev_string m_findField_EVString_callback;
			public:
				JCWFSFeatureIteratorProxy(EarthView::World::Core::CNameValuePairList *pList) : CWFSFeatureIterator(pList)
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
				void register_next_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_next_void_callback = __method;
				}
				void register_getFields_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getFields_void_callback = __method;
				}
				void register_getField_ev_uint32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getField_ev_uint32_callback = __method;
				}
				void register_findField_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_findField_EVString_callback = __method;
				}
				virtual EarthView::World::Spatial::GeoDataset::IFeature* next()
				{
					if (this->_gRef != NULL && this->m_next_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("next_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Spatial::GeoDataset::IFeature *__values1 = (EarthView::World::Spatial::GeoDataset::IFeature*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CWFSFeatureIterator::next();
					}
				}
				virtual const EarthView::World::Spatial::GeoDataset::IFields* getFields() const
				{
					if (this->_gRef != NULL && this->m_getFields_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getFields_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Spatial::GeoDataset::IFields *__values1 = (const EarthView::World::Spatial::GeoDataset::IFields*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CWFSFeatureIterator::getFields();
					}
				}
				virtual const EarthView::World::Spatial::GeoDataset::IField* getField(ev_uint32 index) const
				{
					if (this->_gRef != NULL && this->m_getField_ev_uint32_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getField_ev_uint32_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , index_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Spatial::GeoDataset::IField *__values1 = (const EarthView::World::Spatial::GeoDataset::IField*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CWFSFeatureIterator::getField(index);
					}
				}
				virtual ev_int32 findField(const EVString& fieldName) const
				{
					if (this->_gRef != NULL && this->m_findField_EVString_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("findField_EVString_callback");
						jint __values1_j = (jint)__env->CallIntMethod(__obj, __method , fieldName_j);
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
						return this->CWFSFeatureIterator::findField(fieldName);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCWFSFeatureIteratorProxy);
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Wfsfeatureiterator_next_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::CWFSFeatureIterator *pObjectX = (EarthView::World::Spatial::CWFSFeatureIterator*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCWFSFeatureIteratorProxy))
				{
					EarthView::World::Spatial::GeoDataset::IFeature* __values1 = pObjectX->EarthView::World::Spatial::CWFSFeatureIterator::next();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Spatial::GeoDataset::IFeature* __values1 = pObjectX->next();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Wfsfeatureiterator_register_1next_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCWFSFeatureIteratorProxy *pObjectX = (JCWFSFeatureIteratorProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_next_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"next_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Wfsfeatureiterator_next_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::CWFSFeatureIterator *pObjectX = (EarthView::World::Spatial::CWFSFeatureIterator*) pObjXXXX;
				EarthView::World::Spatial::GeoDataset::IFeature* __values1 = pObjectX->EarthView::World::Spatial::CWFSFeatureIterator::next();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Wfsfeatureiterator_register_1getFields_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCWFSFeatureIteratorProxy *pObjectX = (JCWFSFeatureIteratorProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getFields_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getFields_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Wfsfeatureiterator_register_1getField_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCWFSFeatureIteratorProxy *pObjectX = (JCWFSFeatureIteratorProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getField_ev_uint32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getField_ev_uint32_callback", "(J)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Wfsfeatureiterator_register_1findField_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCWFSFeatureIteratorProxy *pObjectX = (JCWFSFeatureIteratorProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_findField_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"findField_EVString_callback", "(Ljava/lang/String;)I");
					__gr->setMethod(sMethod, __method);
				}
			}
			class JCWFSFeatureProxy : public EarthView::World::Spatial::CWFSFeature
			{
			 private:
				EarthView::World::Core::ev_string m_getID_void_callback;
				EarthView::World::Core::ev_string m_getGeometryType_void_callback;
				EarthView::World::Core::ev_string m_getFieldsRef_void_callback;
				EarthView::World::Core::ev_string m_getFieldCount_void_callback;
				EarthView::World::Core::ev_string m_getFieldRef_ev_uint32_callback;
				EarthView::World::Core::ev_string m_findField_EVString_callback;
				EarthView::World::Core::ev_string m_getValue_CVariant_ev_uint32_callback;
				EarthView::World::Core::ev_string m_getGeometryRef_void_callback;
				EarthView::World::Core::ev_string m_getEnvelopeRef_void_callback;
				EarthView::World::Core::ev_string m_setGeometry_IGeometry_callback;
				EarthView::World::Core::ev_string m_setValue_CVariant_ev_uint32_callback;
				EarthView::World::Core::ev_string m_deleteFeature_void_callback;
				EarthView::World::Core::ev_string m_saveFeature_void_callback;
				EarthView::World::Core::ev_string m_ev_clone_void_callback;
			public:
				JCWFSFeatureProxy(EarthView::World::Core::CNameValuePairList *pList) : CWFSFeature(pList)
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
				void register_getID_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getID_void_callback = __method;
				}
				void register_getGeometryType_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getGeometryType_void_callback = __method;
				}
				void register_getFieldsRef_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getFieldsRef_void_callback = __method;
				}
				void register_getFieldCount_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getFieldCount_void_callback = __method;
				}
				void register_getFieldRef_ev_uint32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getFieldRef_ev_uint32_callback = __method;
				}
				void register_findField_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_findField_EVString_callback = __method;
				}
				void register_getValue_CVariant_ev_uint32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getValue_CVariant_ev_uint32_callback = __method;
				}
				void register_getGeometryRef_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getGeometryRef_void_callback = __method;
				}
				void register_getEnvelopeRef_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getEnvelopeRef_void_callback = __method;
				}
				void register_setGeometry_IGeometry_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setGeometry_IGeometry_callback = __method;
				}
				void register_setValue_CVariant_ev_uint32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setValue_CVariant_ev_uint32_callback = __method;
				}
				void register_deleteFeature_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_deleteFeature_void_callback = __method;
				}
				void register_saveFeature_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_saveFeature_void_callback = __method;
				}
				void register_ev_clone_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_ev_clone_void_callback = __method;
				}
				virtual ev_uint32 getID() const
				{
					if (this->_gRef != NULL && this->m_getID_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getID_void_callback");
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
						return this->CWFSFeature::getID();
					}
				}
				virtual EarthView::World::Spatial::Geometry::EVGeometryType getGeometryType() const
				{
					if (this->_gRef != NULL && this->m_getGeometryType_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getGeometryType_void_callback");
						jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Spatial::Geometry::EVGeometryType __values1 = (EarthView::World::Spatial::Geometry::EVGeometryType) __values1_j;
						return __values1;
					}
					else
					{
						return this->CWFSFeature::getGeometryType();
					}
				}
				virtual const EarthView::World::Spatial::GeoDataset::IFields* getFieldsRef() const
				{
					if (this->_gRef != NULL && this->m_getFieldsRef_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getFieldsRef_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Spatial::GeoDataset::IFields *__values1 = (const EarthView::World::Spatial::GeoDataset::IFields*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CWFSFeature::getFieldsRef();
					}
				}
				virtual ev_uint32 getFieldCount() const
				{
					if (this->_gRef != NULL && this->m_getFieldCount_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getFieldCount_void_callback");
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
						return this->CWFSFeature::getFieldCount();
					}
				}
				virtual const EarthView::World::Spatial::GeoDataset::IField* getFieldRef(ev_uint32 index) const
				{
					if (this->_gRef != NULL && this->m_getFieldRef_ev_uint32_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getFieldRef_ev_uint32_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , index_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Spatial::GeoDataset::IField *__values1 = (const EarthView::World::Spatial::GeoDataset::IField*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CWFSFeature::getFieldRef(index);
					}
				}
				virtual ev_int32 findField(const EVString& fieldName) const
				{
					if (this->_gRef != NULL && this->m_findField_EVString_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("findField_EVString_callback");
						jint __values1_j = (jint)__env->CallIntMethod(__obj, __method , fieldName_j);
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
						return this->CWFSFeature::findField(fieldName);
					}
				}
				virtual void getValue(EarthView::World::Core::CVariant& value, ev_uint32 index) const
				{
					if (this->_gRef != NULL && this->m_getValue_CVariant_ev_uint32_callback != "" && this->isCustomExtend())
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
						jlong value_j = (jlong) &value;
						jlong index_j = (jlong) index;
						jmethodID __method = __gr->getMethod("getValue_CVariant_ev_uint32_callback");
						__env->CallVoidMethod(__obj, __method , value_j, index_j);
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
						return this->CWFSFeature::getValue(value, index);
					}
				}
				virtual void setGeometry(const EarthView::World::Spatial::Geometry::IGeometry* geom)
				{
					if (this->_gRef != NULL && this->m_setGeometry_IGeometry_callback != "" && this->isCustomExtend())
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
						jlong geom_j = (jlong) geom;
						jmethodID __method = __gr->getMethod("setGeometry_IGeometry_callback");
						__env->CallVoidMethod(__obj, __method , geom_j);
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
						return this->CWFSFeature::setGeometry(geom);
					}
				}
				virtual void setValue(const EarthView::World::Core::CVariant& value, ev_uint32 index)
				{
					if (this->_gRef != NULL && this->m_setValue_CVariant_ev_uint32_callback != "" && this->isCustomExtend())
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
						jlong value_j = (jlong) &value;
						jlong index_j = (jlong) index;
						jmethodID __method = __gr->getMethod("setValue_CVariant_ev_uint32_callback");
						__env->CallVoidMethod(__obj, __method , value_j, index_j);
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
						return this->CWFSFeature::setValue(value, index);
					}
				}
				virtual const EarthView::World::Spatial::Geometry::IGeometry* getGeometryRef() const
				{
					if (this->_gRef != NULL && this->m_getGeometryRef_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getGeometryRef_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Spatial::Geometry::IGeometry *__values1 = (const EarthView::World::Spatial::Geometry::IGeometry*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CWFSFeature::getGeometryRef();
					}
				}
				virtual const EarthView::World::Spatial::Geometry::IEnvelope* getEnvelopeRef() const
				{
					if (this->_gRef != NULL && this->m_getEnvelopeRef_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getEnvelopeRef_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Spatial::Geometry::IEnvelope *__values1 = (const EarthView::World::Spatial::Geometry::IEnvelope*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CWFSFeature::getEnvelopeRef();
					}
				}
				virtual EarthView::World::Spatial::GeoDataset::IFeature* clone() const
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
						EarthView::World::Spatial::GeoDataset::IFeature *__values1 = (EarthView::World::Spatial::GeoDataset::IFeature*) __values1_j;
						if(__values1 != NULL) {
							((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(false);
						}
						return __values1;
					}
					else
					{
						return this->CWFSFeature::clone();
					}
				}
				virtual ev_bool deleteFeature()
				{
					if (this->_gRef != NULL && this->m_deleteFeature_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("deleteFeature_void_callback");
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
						return this->CWFSFeature::deleteFeature();
					}
				}
				virtual ev_bool saveFeature()
				{
					if (this->_gRef != NULL && this->m_saveFeature_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("saveFeature_void_callback");
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
						return this->CWFSFeature::saveFeature();
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCWFSFeatureProxy);
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Wfsfeature_getID_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CWFSFeature *pObjectX = (EarthView::World::Spatial::CWFSFeature*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCWFSFeatureProxy))
				{
					ev_uint32 __values1 = pObjectX->EarthView::World::Spatial::CWFSFeature::getID();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					ev_uint32 __values1 = pObjectX->getID();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Wfsfeature_register_1getID_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCWFSFeatureProxy *pObjectX = (JCWFSFeatureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getID_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getID_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Wfsfeature_getID_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CWFSFeature *pObjectX = (EarthView::World::Spatial::CWFSFeature*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->EarthView::World::Spatial::CWFSFeature::getID();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_Wfsfeature_getGeometryType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CWFSFeature *pObjectX = (EarthView::World::Spatial::CWFSFeature*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCWFSFeatureProxy))
				{
					EarthView::World::Spatial::Geometry::EVGeometryType __values1 = pObjectX->EarthView::World::Spatial::CWFSFeature::getGeometryType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Spatial::Geometry::EVGeometryType __values1 = pObjectX->getGeometryType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Wfsfeature_register_1getGeometryType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCWFSFeatureProxy *pObjectX = (JCWFSFeatureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getGeometryType_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getGeometryType_void_callback", "()I");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_Wfsfeature_getGeometryType_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CWFSFeature *pObjectX = (EarthView::World::Spatial::CWFSFeature*) pObjXXXX;
				EarthView::World::Spatial::Geometry::EVGeometryType __values1 = pObjectX->EarthView::World::Spatial::CWFSFeature::getGeometryType();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Wfsfeature_getFieldsRef_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CWFSFeature *pObjectX = (EarthView::World::Spatial::CWFSFeature*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCWFSFeatureProxy))
				{
					const EarthView::World::Spatial::GeoDataset::IFields* __values1 = pObjectX->EarthView::World::Spatial::CWFSFeature::getFieldsRef();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					const EarthView::World::Spatial::GeoDataset::IFields* __values1 = pObjectX->getFieldsRef();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Wfsfeature_register_1getFieldsRef_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCWFSFeatureProxy *pObjectX = (JCWFSFeatureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getFieldsRef_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getFieldsRef_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Wfsfeature_getFieldsRef_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CWFSFeature *pObjectX = (EarthView::World::Spatial::CWFSFeature*) pObjXXXX;
				const EarthView::World::Spatial::GeoDataset::IFields* __values1 = pObjectX->EarthView::World::Spatial::CWFSFeature::getFieldsRef();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Wfsfeature_getFieldCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CWFSFeature *pObjectX = (EarthView::World::Spatial::CWFSFeature*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCWFSFeatureProxy))
				{
					ev_uint32 __values1 = pObjectX->EarthView::World::Spatial::CWFSFeature::getFieldCount();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					ev_uint32 __values1 = pObjectX->getFieldCount();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Wfsfeature_register_1getFieldCount_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCWFSFeatureProxy *pObjectX = (JCWFSFeatureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getFieldCount_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getFieldCount_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Wfsfeature_getFieldCount_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CWFSFeature *pObjectX = (EarthView::World::Spatial::CWFSFeature*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->EarthView::World::Spatial::CWFSFeature::getFieldCount();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Wfsfeature_getFieldRef_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_uint32 index = (ev_uint32) index_j;
				const 				EarthView::World::Spatial::CWFSFeature *pObjectX = (EarthView::World::Spatial::CWFSFeature*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCWFSFeatureProxy))
				{
					const EarthView::World::Spatial::GeoDataset::IField* __values1 = pObjectX->EarthView::World::Spatial::CWFSFeature::getFieldRef(index);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					const EarthView::World::Spatial::GeoDataset::IField* __values1 = pObjectX->getFieldRef(index);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Wfsfeature_register_1getFieldRef_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCWFSFeatureProxy *pObjectX = (JCWFSFeatureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getFieldRef_ev_uint32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getFieldRef_ev_uint32_callback", "(J)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Wfsfeature_getFieldRef_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_uint32 index = (ev_uint32) index_j;
				const 				EarthView::World::Spatial::CWFSFeature *pObjectX = (EarthView::World::Spatial::CWFSFeature*) pObjXXXX;
				const EarthView::World::Spatial::GeoDataset::IField* __values1 = pObjectX->EarthView::World::Spatial::CWFSFeature::getFieldRef(index);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_Wfsfeature_findField_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring fieldName_j)
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
				const 				EarthView::World::Spatial::CWFSFeature *pObjectX = (EarthView::World::Spatial::CWFSFeature*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCWFSFeatureProxy))
				{
					ev_int32 __values1 = pObjectX->EarthView::World::Spatial::CWFSFeature::findField(fieldName);
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				else
				{
					ev_int32 __values1 = pObjectX->findField(fieldName);
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Wfsfeature_register_1findField_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCWFSFeatureProxy *pObjectX = (JCWFSFeatureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_findField_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"findField_EVString_callback", "(Ljava/lang/String;)I");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_Wfsfeature_findField_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring fieldName_j)
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
				const 				EarthView::World::Spatial::CWFSFeature *pObjectX = (EarthView::World::Spatial::CWFSFeature*) pObjXXXX;
				ev_int32 __values1 = pObjectX->EarthView::World::Spatial::CWFSFeature::findField(fieldName);
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Wfsfeature_getValue_1CVariant_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong value_j, jlong index_j)
			{
				EarthView::World::Core::CVariant &value = *(EarthView::World::Core::CVariant*) value_j;
				ev_uint32 index = (ev_uint32) index_j;
				const 				EarthView::World::Spatial::CWFSFeature *pObjectX = (EarthView::World::Spatial::CWFSFeature*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCWFSFeatureProxy))
				{
					pObjectX->EarthView::World::Spatial::CWFSFeature::getValue(value, index);
				}
				else
				{
					pObjectX->getValue(value, index);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Wfsfeature_register_1getValue_1CVariant_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCWFSFeatureProxy *pObjectX = (JCWFSFeatureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getValue_CVariant_ev_uint32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getValue_CVariant_ev_uint32_callback", "(JJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Wfsfeature_getValue_1CVariant_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong value_j, jlong index_j)
			{
				EarthView::World::Core::CVariant &value = *(EarthView::World::Core::CVariant*) value_j;
				ev_uint32 index = (ev_uint32) index_j;
				const 				EarthView::World::Spatial::CWFSFeature *pObjectX = (EarthView::World::Spatial::CWFSFeature*) pObjXXXX;
				pObjectX->EarthView::World::Spatial::CWFSFeature::getValue(value, index);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Wfsfeature_setGeometry_1IGeometry(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong geom_j)
			{
				const EarthView::World::Spatial::Geometry::IGeometry *geom = (const EarthView::World::Spatial::Geometry::IGeometry*) geom_j;
				EarthView::World::Spatial::CWFSFeature *pObjectX = (EarthView::World::Spatial::CWFSFeature*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCWFSFeatureProxy))
				{
					pObjectX->EarthView::World::Spatial::CWFSFeature::setGeometry(geom);
				}
				else
				{
					pObjectX->setGeometry(geom);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Wfsfeature_register_1setGeometry_1IGeometry(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCWFSFeatureProxy *pObjectX = (JCWFSFeatureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setGeometry_IGeometry_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setGeometry_IGeometry_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Wfsfeature_setGeometry_1IGeometry_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong geom_j)
			{
				const EarthView::World::Spatial::Geometry::IGeometry *geom = (const EarthView::World::Spatial::Geometry::IGeometry*) geom_j;
				EarthView::World::Spatial::CWFSFeature *pObjectX = (EarthView::World::Spatial::CWFSFeature*) pObjXXXX;
				pObjectX->EarthView::World::Spatial::CWFSFeature::setGeometry(geom);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Wfsfeature_setValue_1CVariant_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong value_j, jlong index_j)
			{
				const EarthView::World::Core::CVariant &value = *(EarthView::World::Core::CVariant*) value_j;
				ev_uint32 index = (ev_uint32) index_j;
				EarthView::World::Spatial::CWFSFeature *pObjectX = (EarthView::World::Spatial::CWFSFeature*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCWFSFeatureProxy))
				{
					pObjectX->EarthView::World::Spatial::CWFSFeature::setValue(value, index);
				}
				else
				{
					pObjectX->setValue(value, index);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Wfsfeature_register_1setValue_1CVariant_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCWFSFeatureProxy *pObjectX = (JCWFSFeatureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setValue_CVariant_ev_uint32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setValue_CVariant_ev_uint32_callback", "(JJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Wfsfeature_setValue_1CVariant_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong value_j, jlong index_j)
			{
				const EarthView::World::Core::CVariant &value = *(EarthView::World::Core::CVariant*) value_j;
				ev_uint32 index = (ev_uint32) index_j;
				EarthView::World::Spatial::CWFSFeature *pObjectX = (EarthView::World::Spatial::CWFSFeature*) pObjXXXX;
				pObjectX->EarthView::World::Spatial::CWFSFeature::setValue(value, index);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Wfsfeature_getGeometryRef_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CWFSFeature *pObjectX = (EarthView::World::Spatial::CWFSFeature*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCWFSFeatureProxy))
				{
					const EarthView::World::Spatial::Geometry::IGeometry* __values1 = pObjectX->EarthView::World::Spatial::CWFSFeature::getGeometryRef();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					const EarthView::World::Spatial::Geometry::IGeometry* __values1 = pObjectX->getGeometryRef();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Wfsfeature_register_1getGeometryRef_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCWFSFeatureProxy *pObjectX = (JCWFSFeatureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getGeometryRef_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getGeometryRef_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Wfsfeature_getGeometryRef_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CWFSFeature *pObjectX = (EarthView::World::Spatial::CWFSFeature*) pObjXXXX;
				const EarthView::World::Spatial::Geometry::IGeometry* __values1 = pObjectX->EarthView::World::Spatial::CWFSFeature::getGeometryRef();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Wfsfeature_getEnvelopeRef_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CWFSFeature *pObjectX = (EarthView::World::Spatial::CWFSFeature*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCWFSFeatureProxy))
				{
					const EarthView::World::Spatial::Geometry::IEnvelope* __values1 = pObjectX->EarthView::World::Spatial::CWFSFeature::getEnvelopeRef();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					const EarthView::World::Spatial::Geometry::IEnvelope* __values1 = pObjectX->getEnvelopeRef();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Wfsfeature_register_1getEnvelopeRef_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCWFSFeatureProxy *pObjectX = (JCWFSFeatureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getEnvelopeRef_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getEnvelopeRef_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Wfsfeature_getEnvelopeRef_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CWFSFeature *pObjectX = (EarthView::World::Spatial::CWFSFeature*) pObjXXXX;
				const EarthView::World::Spatial::Geometry::IEnvelope* __values1 = pObjectX->EarthView::World::Spatial::CWFSFeature::getEnvelopeRef();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Wfsfeature_ev_1clone_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CWFSFeature *pObjectX = (EarthView::World::Spatial::CWFSFeature*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCWFSFeatureProxy))
				{
					EarthView::World::Spatial::GeoDataset::IFeature* __values1 = pObjectX->EarthView::World::Spatial::CWFSFeature::clone();
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Spatial::GeoDataset::IFeature* __values1 = pObjectX->clone();
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Wfsfeature_register_1ev_1clone_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCWFSFeatureProxy *pObjectX = (JCWFSFeatureProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Wfsfeature_ev_1clone_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CWFSFeature *pObjectX = (EarthView::World::Spatial::CWFSFeature*) pObjXXXX;
				EarthView::World::Spatial::GeoDataset::IFeature* __values1 = pObjectX->EarthView::World::Spatial::CWFSFeature::clone();
				if(__values1 != NULL) {					((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
				}				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Wfsfeature_register_1deleteFeature_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCWFSFeatureProxy *pObjectX = (JCWFSFeatureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_deleteFeature_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"deleteFeature_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Wfsfeature_register_1saveFeature_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCWFSFeatureProxy *pObjectX = (JCWFSFeatureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_saveFeature_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"saveFeature_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
		}
	}
}
