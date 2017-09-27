/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3ddataset/vectoroctreedatasource.h"
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
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Dataset
			{
				class JCVectorOctreeDataSourceProxy : public EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource
				{
				 private:
					EarthView::World::Core::ev_string m_createDataset_EVString_EVGeometryType_EVLayerType_IEnvelope_ISpatialReference_MemoryDataStreamPtr_callback;
					EarthView::World::Core::ev_string m_deleteDatasetInfo_EVString_callback;
					EarthView::World::Core::ev_string m_getDatabase_void_callback;
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
					JCVectorOctreeDataSourceProxy(EarthView::World::Core::CNameValuePairList *pList) : CVectorOctreeDataSource(pList)
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
					void register_createDataset_EVString_EVGeometryType_EVLayerType_IEnvelope_ISpatialReference_MemoryDataStreamPtr_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_createDataset_EVString_EVGeometryType_EVLayerType_IEnvelope_ISpatialReference_MemoryDataStreamPtr_callback = __method;
					}
					void register_deleteDatasetInfo_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_deleteDatasetInfo_EVString_callback = __method;
					}
					void register_getDatabase_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getDatabase_void_callback = __method;
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
							return this->CVectorOctreeDataSource::getName();
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
							return this->CVectorOctreeDataSource::getType();
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
							return __values1;
						}
						else
						{
							return this->CVectorOctreeDataSource::getPropertySet();
						}
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataMetaInfo* getDatasetInfo(const EVString& datasetName)
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
							EarthView::World::Core::ev_wstring datasetName_wch = datasetName;
							jstring datasetName_j = __env->NewString((const jchar*)datasetName_wch.getString(), datasetName_wch.size());
							jmethodID __method = __gr->getMethod("getDatasetInfo_EVString_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , datasetName_j);
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
							return this->CVectorOctreeDataSource::getDatasetInfo(datasetName);
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
							return this->CVectorOctreeDataSource::getDatasetInfos(type);
						}
					}
					virtual ev_bool createDataset(EVString name, EarthView::World::Spatial::Geometry::EVGeometryType geometryType, EarthView::World::Spatial::Atlas::EVLayerType layerType, EarthView::World::Spatial::Geometry::IEnvelope* pEnv, EarthView::World::Spatial::Geometry::ISpatialReference* sr, const EarthView::World::Core::MemoryDataStreamPtr& layerInfoStream)
					{
						if (this->_gRef != NULL && this->m_createDataset_EVString_EVGeometryType_EVLayerType_IEnvelope_ISpatialReference_MemoryDataStreamPtr_callback != "" && this->isCustomExtend())
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
							jint geometryType_j = (jint) geometryType;
							jint layerType_j = (jint) layerType;
							jlong pEnv_j = (jlong) pEnv;
							jlong sr_j = (jlong) sr;
							jlong layerInfoStream_j = (jlong) &layerInfoStream;
							jmethodID __method = __gr->getMethod("createDataset_EVString_EVGeometryType_EVLayerType_IEnvelope_ISpatialReference_MemoryDataStreamPtr_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , name_j, geometryType_j, layerType_j, pEnv_j, sr_j, layerInfoStream_j);
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
							return this->CVectorOctreeDataSource::createDataset(name, geometryType, layerType, pEnv, sr, layerInfoStream);
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
							return this->CVectorOctreeDataSource::openDataset(name);
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
							return this->CVectorOctreeDataSource::deleteDataset(name);
						}
					}
					virtual ev_bool deleteDatasetInfo(EVString datasetName)
					{
						if (this->_gRef != NULL && this->m_deleteDatasetInfo_EVString_callback != "" && this->isCustomExtend())
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
							EarthView::World::Core::ev_wstring datasetName_wch = datasetName;
							jstring datasetName_j = __env->NewString((const jchar*)datasetName_wch.getString(), datasetName_wch.size());
							jmethodID __method = __gr->getMethod("deleteDatasetInfo_EVString_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , datasetName_j);
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
							return this->CVectorOctreeDataSource::deleteDatasetInfo(datasetName);
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
							return this->CVectorOctreeDataSource::closeDataset(dataset);
						}
					}
					virtual EarthView::World::Core::Database::CSqlDatabase& getDatabase()
					{
						if (this->_gRef != NULL && this->m_getDatabase_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getDatabase_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Core::Database::CSqlDatabase &__values1 = *(EarthView::World::Core::Database::CSqlDatabase*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CVectorOctreeDataSource::getDatabase();
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
							return this->CVectorOctreeDataSource::isValid();
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
							return this->CVectorOctreeDataSource::createFeatureClass(name, geofield, fields);
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
							return this->CVectorOctreeDataSource::toXML();
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
							return __values1;
						}
						else
						{
							return this->CVectorOctreeDataSource::clone();
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCVectorOctreeDataSourceProxy);
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_dataset_VectorOctreeDataSource_getName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource *pObjectX = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCVectorOctreeDataSourceProxy))
					{
						EVString __values1 = pObjectX->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource::getName();
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
					else
					{
						EVString __values1 = pObjectX->getName();
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_VectorOctreeDataSource_register_1getName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCVectorOctreeDataSourceProxy *pObjectX = (JCVectorOctreeDataSourceProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_dataset_VectorOctreeDataSource_getName_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource *pObjectX = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource*) pObjXXXX;
					EVString __values1 = pObjectX->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource::getName();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_dataset_VectorOctreeDataSource_getType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource *pObjectX = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCVectorOctreeDataSourceProxy))
					{
						ev_int32 __values1 = pObjectX->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource::getType();
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
					else
					{
						ev_int32 __values1 = pObjectX->getType();
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_VectorOctreeDataSource_register_1getType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCVectorOctreeDataSourceProxy *pObjectX = (JCVectorOctreeDataSourceProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_dataset_VectorOctreeDataSource_getType_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource *pObjectX = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource*) pObjXXXX;
					ev_int32 __values1 = pObjectX->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource::getType();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_VectorOctreeDataSource_getPropertySet_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource *pObjectX = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCVectorOctreeDataSourceProxy))
					{
						EarthView::World::Spatial::GeoDataset::IPropertySet* __values1 = pObjectX->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource::getPropertySet();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IPropertySet* __values1 = pObjectX->getPropertySet();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_VectorOctreeDataSource_register_1getPropertySet_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCVectorOctreeDataSourceProxy *pObjectX = (JCVectorOctreeDataSourceProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_VectorOctreeDataSource_getPropertySet_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource *pObjectX = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource*) pObjXXXX;
					EarthView::World::Spatial::GeoDataset::IPropertySet* __values1 = pObjectX->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource::getPropertySet();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_VectorOctreeDataSource_getDatasetInfo_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring datasetName_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* datasetName_ch = (const ev_char*)__env->GetStringUTFChars(datasetName_j,JNI_FALSE);
					const EVString datasetName = datasetName_ch;
					__env->ReleaseStringUTFChars(datasetName_j, (const char *)datasetName_ch);
					#else
					const ev_wchar* datasetName_ch = (const ev_wchar*)__env->GetStringChars(datasetName_j,JNI_FALSE);
					const EVString datasetName = datasetName_ch;
					__env->ReleaseStringChars(datasetName_j, (const jchar *)datasetName_ch);
					#endif
					EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource *pObjectX = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCVectorOctreeDataSourceProxy))
					{
						EarthView::World::Spatial::GeoDataset::IDataMetaInfo* __values1 = pObjectX->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource::getDatasetInfo(datasetName);
						if(__values1 != NULL) {							((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
						}						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IDataMetaInfo* __values1 = pObjectX->getDatasetInfo(datasetName);
						if(__values1 != NULL) {							((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
						}						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_VectorOctreeDataSource_register_1getDatasetInfo_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCVectorOctreeDataSourceProxy *pObjectX = (JCVectorOctreeDataSourceProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_VectorOctreeDataSource_getDatasetInfo_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring datasetName_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* datasetName_ch = (const ev_char*)__env->GetStringUTFChars(datasetName_j,JNI_FALSE);
					const EVString datasetName = datasetName_ch;
					__env->ReleaseStringUTFChars(datasetName_j, (const char *)datasetName_ch);
					#else
					const ev_wchar* datasetName_ch = (const ev_wchar*)__env->GetStringChars(datasetName_j,JNI_FALSE);
					const EVString datasetName = datasetName_ch;
					__env->ReleaseStringChars(datasetName_j, (const jchar *)datasetName_ch);
					#endif
					EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource *pObjectX = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource*) pObjXXXX;
					EarthView::World::Spatial::GeoDataset::IDataMetaInfo* __values1 = pObjectX->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource::getDatasetInfo(datasetName);
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_VectorOctreeDataSource_getDatasetInfos_1EVDatasetType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint type_j)
				{
					EarthView::World::Spatial::GeoDataset::EVDatasetType type = (EarthView::World::Spatial::GeoDataset::EVDatasetType) type_j;
					EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource *pObjectX = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCVectorOctreeDataSourceProxy))
					{
						EarthView::World::Spatial::GeoDataset::IDataMetaInfos* __values1 = pObjectX->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource::getDatasetInfos(type);
						if(__values1 != NULL) {							((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
						}						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IDataMetaInfos* __values1 = pObjectX->getDatasetInfos(type);
						if(__values1 != NULL) {							((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
						}						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_VectorOctreeDataSource_register_1getDatasetInfos_1EVDatasetType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCVectorOctreeDataSourceProxy *pObjectX = (JCVectorOctreeDataSourceProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_VectorOctreeDataSource_getDatasetInfos_1EVDatasetType_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint type_j)
				{
					EarthView::World::Spatial::GeoDataset::EVDatasetType type = (EarthView::World::Spatial::GeoDataset::EVDatasetType) type_j;
					EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource *pObjectX = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource*) pObjXXXX;
					EarthView::World::Spatial::GeoDataset::IDataMetaInfos* __values1 = pObjectX->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource::getDatasetInfos(type);
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataset_VectorOctreeDataSource_createDataset_1EVString_1EVGeometryType_1EVLayerType_1IEnvelope_1ISpatialReference_1MemoryDataStreamPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jint geometryType_j, jint layerType_j, jlong pEnv_j, jlong sr_j, jlong layerInfoStream_j)
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
					EarthView::World::Spatial::Geometry::EVGeometryType geometryType = (EarthView::World::Spatial::Geometry::EVGeometryType) geometryType_j;
					EarthView::World::Spatial::Atlas::EVLayerType layerType = (EarthView::World::Spatial::Atlas::EVLayerType) layerType_j;
					EarthView::World::Spatial::Geometry::IEnvelope *pEnv = (EarthView::World::Spatial::Geometry::IEnvelope*) pEnv_j;
					EarthView::World::Spatial::Geometry::ISpatialReference *sr = (EarthView::World::Spatial::Geometry::ISpatialReference*) sr_j;
					const EarthView::World::Core::MemoryDataStreamPtr &layerInfoStream = *(EarthView::World::Core::MemoryDataStreamPtr*) layerInfoStream_j;
					EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource *pObjectX = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCVectorOctreeDataSourceProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource::createDataset(name, geometryType, layerType, pEnv, sr, layerInfoStream);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->createDataset(name, geometryType, layerType, pEnv, sr, layerInfoStream);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_VectorOctreeDataSource_register_1createDataset_1EVString_1EVGeometryType_1EVLayerType_1IEnvelope_1ISpatialReference_1MemoryDataStreamPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCVectorOctreeDataSourceProxy *pObjectX = (JCVectorOctreeDataSourceProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_createDataset_EVString_EVGeometryType_EVLayerType_IEnvelope_ISpatialReference_MemoryDataStreamPtr_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"createDataset_EVString_EVGeometryType_EVLayerType_IEnvelope_ISpatialReference_MemoryDataStreamPtr_callback", "(Ljava/lang/String;IIJJJ)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataset_VectorOctreeDataSource_createDataset_1EVString_1EVGeometryType_1EVLayerType_1IEnvelope_1ISpatialReference_1MemoryDataStreamPtr_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jint geometryType_j, jint layerType_j, jlong pEnv_j, jlong sr_j, jlong layerInfoStream_j)
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
					EarthView::World::Spatial::Geometry::EVGeometryType geometryType = (EarthView::World::Spatial::Geometry::EVGeometryType) geometryType_j;
					EarthView::World::Spatial::Atlas::EVLayerType layerType = (EarthView::World::Spatial::Atlas::EVLayerType) layerType_j;
					EarthView::World::Spatial::Geometry::IEnvelope *pEnv = (EarthView::World::Spatial::Geometry::IEnvelope*) pEnv_j;
					EarthView::World::Spatial::Geometry::ISpatialReference *sr = (EarthView::World::Spatial::Geometry::ISpatialReference*) sr_j;
					const EarthView::World::Core::MemoryDataStreamPtr &layerInfoStream = *(EarthView::World::Core::MemoryDataStreamPtr*) layerInfoStream_j;
					EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource *pObjectX = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource::createDataset(name, geometryType, layerType, pEnv, sr, layerInfoStream);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_VectorOctreeDataSource_openDataset_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
					EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource *pObjectX = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCVectorOctreeDataSourceProxy))
					{
						EarthView::World::Spatial::GeoDataset::IDataset* __values1 = pObjectX->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource::openDataset(name);
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_VectorOctreeDataSource_register_1openDataset_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCVectorOctreeDataSourceProxy *pObjectX = (JCVectorOctreeDataSourceProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_VectorOctreeDataSource_openDataset_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
					EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource *pObjectX = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource*) pObjXXXX;
					EarthView::World::Spatial::GeoDataset::IDataset* __values1 = pObjectX->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource::openDataset(name);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataset_VectorOctreeDataSource_deleteDataset_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
					EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource *pObjectX = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCVectorOctreeDataSourceProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource::deleteDataset(name);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->deleteDataset(name);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_VectorOctreeDataSource_register_1deleteDataset_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCVectorOctreeDataSourceProxy *pObjectX = (JCVectorOctreeDataSourceProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataset_VectorOctreeDataSource_deleteDataset_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
					EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource *pObjectX = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource::deleteDataset(name);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataset_VectorOctreeDataSource_deleteDatasetInfo_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring datasetName_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* datasetName_ch = (const ev_char*)__env->GetStringUTFChars(datasetName_j,JNI_FALSE);
					EVString datasetName = datasetName_ch;
					__env->ReleaseStringUTFChars(datasetName_j, (const char *)datasetName_ch);
					#else
					const ev_wchar* datasetName_ch = (const ev_wchar*)__env->GetStringChars(datasetName_j,JNI_FALSE);
					EVString datasetName = datasetName_ch;
					__env->ReleaseStringChars(datasetName_j, (const jchar *)datasetName_ch);
					#endif
					EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource *pObjectX = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCVectorOctreeDataSourceProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource::deleteDatasetInfo(datasetName);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->deleteDatasetInfo(datasetName);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_VectorOctreeDataSource_register_1deleteDatasetInfo_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCVectorOctreeDataSourceProxy *pObjectX = (JCVectorOctreeDataSourceProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_deleteDatasetInfo_EVString_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"deleteDatasetInfo_EVString_callback", "(Ljava/lang/String;)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataset_VectorOctreeDataSource_deleteDatasetInfo_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring datasetName_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* datasetName_ch = (const ev_char*)__env->GetStringUTFChars(datasetName_j,JNI_FALSE);
					EVString datasetName = datasetName_ch;
					__env->ReleaseStringUTFChars(datasetName_j, (const char *)datasetName_ch);
					#else
					const ev_wchar* datasetName_ch = (const ev_wchar*)__env->GetStringChars(datasetName_j,JNI_FALSE);
					EVString datasetName = datasetName_ch;
					__env->ReleaseStringChars(datasetName_j, (const jchar *)datasetName_ch);
					#endif
					EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource *pObjectX = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource::deleteDatasetInfo(datasetName);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataset_VectorOctreeDataSource_closeDataset_1IDataset(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong dataset_j)
				{
					EarthView::World::Spatial::GeoDataset::IDataset *dataset = (EarthView::World::Spatial::GeoDataset::IDataset*) dataset_j;
					EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource *pObjectX = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCVectorOctreeDataSourceProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource::closeDataset(dataset);
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_VectorOctreeDataSource_register_1closeDataset_1IDataset(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCVectorOctreeDataSourceProxy *pObjectX = (JCVectorOctreeDataSourceProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataset_VectorOctreeDataSource_closeDataset_1IDataset_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong dataset_j)
				{
					EarthView::World::Spatial::GeoDataset::IDataset *dataset = (EarthView::World::Spatial::GeoDataset::IDataset*) dataset_j;
					EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource *pObjectX = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource::closeDataset(dataset);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataset_VectorOctreeDataSource_isDatasetValid_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring datasetName_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* datasetName_ch = (const ev_char*)__env->GetStringUTFChars(datasetName_j,JNI_FALSE);
					const EVString datasetName = datasetName_ch;
					__env->ReleaseStringUTFChars(datasetName_j, (const char *)datasetName_ch);
					#else
					const ev_wchar* datasetName_ch = (const ev_wchar*)__env->GetStringChars(datasetName_j,JNI_FALSE);
					const EVString datasetName = datasetName_ch;
					__env->ReleaseStringChars(datasetName_j, (const jchar *)datasetName_ch);
					#endif
					EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource *pObjectX = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource*) pObjXXXX;
					ev_bool __values1 = pObjectX->isDatasetValid(datasetName);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_VectorOctreeDataSource_getDatabase_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource *pObjectX = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCVectorOctreeDataSourceProxy))
					{
						EarthView::World::Core::Database::CSqlDatabase& __values1 = pObjectX->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource::getDatabase();
						jlong __values1_j = (jlong) &__values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Core::Database::CSqlDatabase& __values1 = pObjectX->getDatabase();
						jlong __values1_j = (jlong) &__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_VectorOctreeDataSource_register_1getDatabase_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCVectorOctreeDataSourceProxy *pObjectX = (JCVectorOctreeDataSourceProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getDatabase_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getDatabase_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_VectorOctreeDataSource_getDatabase_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource *pObjectX = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource*) pObjXXXX;
					EarthView::World::Core::Database::CSqlDatabase& __values1 = pObjectX->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource::getDatabase();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_VectorOctreeDataSource_register_1isValid_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCVectorOctreeDataSourceProxy *pObjectX = (JCVectorOctreeDataSourceProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_VectorOctreeDataSource_register_1createFeatureClass_1EVString_1IGeometryField_1IFields(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCVectorOctreeDataSourceProxy *pObjectX = (JCVectorOctreeDataSourceProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_VectorOctreeDataSource_register_1toXML_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCVectorOctreeDataSourceProxy *pObjectX = (JCVectorOctreeDataSourceProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_VectorOctreeDataSource_register_1ev_1clone_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCVectorOctreeDataSourceProxy *pObjectX = (JCVectorOctreeDataSourceProxy*) pObjXXXX;
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
				class JCVectorOctreeDataSourceFactoryProxy : public EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSourceFactory
				{
				 private:
					EarthView::World::Core::ev_string m_getType_void_callback;
					EarthView::World::Core::ev_string m_createFromXML_EVString_callback;
					EarthView::World::Core::ev_string m_openDataSource_EVString_EVString_callback;
					EarthView::World::Core::ev_string m_openDataSource_IPropertySet_callback;
					EarthView::World::Core::ev_string m_createDataSource_EVString_EVString_callback;
					EarthView::World::Core::ev_string m_createDataSource_IPropertySet_callback;
					EarthView::World::Core::ev_string m_destroyDataSource_IDataSource_callback;
					EarthView::World::Core::ev_string m_existDataSource_IDataSource_callback;
				public:
					JCVectorOctreeDataSourceFactoryProxy(EarthView::World::Core::CNameValuePairList *pList) : CVectorOctreeDataSourceFactory(pList)
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
					void register_createFromXML_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_createFromXML_EVString_callback = __method;
					}
					void register_openDataSource_EVString_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_openDataSource_EVString_EVString_callback = __method;
					}
					void register_openDataSource_IPropertySet_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_openDataSource_IPropertySet_callback = __method;
					}
					void register_createDataSource_EVString_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_createDataSource_EVString_EVString_callback = __method;
					}
					void register_createDataSource_IPropertySet_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_createDataSource_IPropertySet_callback = __method;
					}
					void register_destroyDataSource_IDataSource_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_destroyDataSource_IDataSource_callback = __method;
					}
					void register_existDataSource_IDataSource_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_existDataSource_IDataSource_callback = __method;
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataSource* openDataSource(const EVString& path, const EVString& fileName) const
					{
						if (this->_gRef != NULL && this->m_openDataSource_EVString_EVString_callback != "" && this->isCustomExtend())
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
							EarthView::World::Core::ev_wstring path_wch = path;
							jstring path_j = __env->NewString((const jchar*)path_wch.getString(), path_wch.size());
							EarthView::World::Core::ev_wstring fileName_wch = fileName;
							jstring fileName_j = __env->NewString((const jchar*)fileName_wch.getString(), fileName_wch.size());
							jmethodID __method = __gr->getMethod("openDataSource_EVString_EVString_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , path_j, fileName_j);
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
							return this->CVectorOctreeDataSourceFactory::openDataSource(path, fileName);
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
							return this->CVectorOctreeDataSourceFactory::getType();
						}
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataSource* createDataSource(const EVString& path, const EVString& fileName) const
					{
						if (this->_gRef != NULL && this->m_createDataSource_EVString_EVString_callback != "" && this->isCustomExtend())
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
							EarthView::World::Core::ev_wstring path_wch = path;
							jstring path_j = __env->NewString((const jchar*)path_wch.getString(), path_wch.size());
							EarthView::World::Core::ev_wstring fileName_wch = fileName;
							jstring fileName_j = __env->NewString((const jchar*)fileName_wch.getString(), fileName_wch.size());
							jmethodID __method = __gr->getMethod("createDataSource_EVString_EVString_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , path_j, fileName_j);
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
							return this->CVectorOctreeDataSourceFactory::createDataSource(path, fileName);
						}
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataSource* createFromXML(const EVString& xml)
					{
						if (this->_gRef != NULL && this->m_createFromXML_EVString_callback != "" && this->isCustomExtend())
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
							EarthView::World::Core::ev_wstring xml_wch = xml;
							jstring xml_j = __env->NewString((const jchar*)xml_wch.getString(), xml_wch.size());
							jmethodID __method = __gr->getMethod("createFromXML_EVString_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , xml_j);
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
							return this->CVectorOctreeDataSourceFactory::createFromXML(xml);
						}
					}
					virtual void destroyDataSource(EarthView::World::Spatial::GeoDataset::IDataSource* pDataSource)
					{
						if (this->_gRef != NULL && this->m_destroyDataSource_IDataSource_callback != "" && this->isCustomExtend())
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
							jlong pDataSource_j = (jlong) pDataSource;
							jmethodID __method = __gr->getMethod("destroyDataSource_IDataSource_callback");
							__env->CallVoidMethod(__obj, __method , pDataSource_j);
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
							return this->CVectorOctreeDataSourceFactory::destroyDataSource(pDataSource);
						}
					}
					virtual ev_bool existDataSource(EarthView::World::Spatial::GeoDataset::IDataSource* pDataSource) const
					{
						if (this->_gRef != NULL && this->m_existDataSource_IDataSource_callback != "" && this->isCustomExtend())
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
							jlong pDataSource_j = (jlong) pDataSource;
							jmethodID __method = __gr->getMethod("existDataSource_IDataSource_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , pDataSource_j);
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
							return this->CVectorOctreeDataSourceFactory::existDataSource(pDataSource);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCVectorOctreeDataSourceFactoryProxy);
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_VectorOctreeDataSourceFactory_getSingletonPtr_1void(JNIEnv *__env , jclass __clazz)
				{
					EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSourceFactory* __values1 = EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSourceFactory::getSingletonPtr();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_VectorOctreeDataSourceFactory_closeDataSource_1IDataSource(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ds_j)
				{
					EarthView::World::Spatial::GeoDataset::IDataSource *ds = (EarthView::World::Spatial::GeoDataset::IDataSource*) ds_j;
					EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSourceFactory *pObjectX = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSourceFactory*) pObjXXXX;
					pObjectX->closeDataSource(ds);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_VectorOctreeDataSourceFactory_openDataSource_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring path_j, jstring fileName_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* path_ch = (const ev_char*)__env->GetStringUTFChars(path_j,JNI_FALSE);
					const EVString path = path_ch;
					__env->ReleaseStringUTFChars(path_j, (const char *)path_ch);
					#else
					const ev_wchar* path_ch = (const ev_wchar*)__env->GetStringChars(path_j,JNI_FALSE);
					const EVString path = path_ch;
					__env->ReleaseStringChars(path_j, (const jchar *)path_ch);
					#endif
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* fileName_ch = (const ev_char*)__env->GetStringUTFChars(fileName_j,JNI_FALSE);
					const EVString fileName = fileName_ch;
					__env->ReleaseStringUTFChars(fileName_j, (const char *)fileName_ch);
					#else
					const ev_wchar* fileName_ch = (const ev_wchar*)__env->GetStringChars(fileName_j,JNI_FALSE);
					const EVString fileName = fileName_ch;
					__env->ReleaseStringChars(fileName_j, (const jchar *)fileName_ch);
					#endif
					const 					EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSourceFactory *pObjectX = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSourceFactory*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCVectorOctreeDataSourceFactoryProxy))
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* __values1 = pObjectX->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSourceFactory::openDataSource(path, fileName);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* __values1 = pObjectX->openDataSource(path, fileName);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_VectorOctreeDataSourceFactory_register_1openDataSource_1EVString_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCVectorOctreeDataSourceFactoryProxy *pObjectX = (JCVectorOctreeDataSourceFactoryProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_openDataSource_EVString_EVString_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"openDataSource_EVString_EVString_callback", "(Ljava/lang/String;Ljava/lang/String;)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_VectorOctreeDataSourceFactory_openDataSource_1EVString_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring path_j, jstring fileName_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* path_ch = (const ev_char*)__env->GetStringUTFChars(path_j,JNI_FALSE);
					const EVString path = path_ch;
					__env->ReleaseStringUTFChars(path_j, (const char *)path_ch);
					#else
					const ev_wchar* path_ch = (const ev_wchar*)__env->GetStringChars(path_j,JNI_FALSE);
					const EVString path = path_ch;
					__env->ReleaseStringChars(path_j, (const jchar *)path_ch);
					#endif
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* fileName_ch = (const ev_char*)__env->GetStringUTFChars(fileName_j,JNI_FALSE);
					const EVString fileName = fileName_ch;
					__env->ReleaseStringUTFChars(fileName_j, (const char *)fileName_ch);
					#else
					const ev_wchar* fileName_ch = (const ev_wchar*)__env->GetStringChars(fileName_j,JNI_FALSE);
					const EVString fileName = fileName_ch;
					__env->ReleaseStringChars(fileName_j, (const jchar *)fileName_ch);
					#endif
					const 					EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSourceFactory *pObjectX = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSourceFactory*) pObjXXXX;
					EarthView::World::Spatial::GeoDataset::IDataSource* __values1 = pObjectX->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSourceFactory::openDataSource(path, fileName);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_dataset_VectorOctreeDataSourceFactory_getType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSourceFactory *pObjectX = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSourceFactory*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCVectorOctreeDataSourceFactoryProxy))
					{
						ev_int32 __values1 = pObjectX->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSourceFactory::getType();
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
					else
					{
						ev_int32 __values1 = pObjectX->getType();
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_VectorOctreeDataSourceFactory_register_1getType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCVectorOctreeDataSourceFactoryProxy *pObjectX = (JCVectorOctreeDataSourceFactoryProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_dataset_VectorOctreeDataSourceFactory_getType_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSourceFactory *pObjectX = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSourceFactory*) pObjXXXX;
					ev_int32 __values1 = pObjectX->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSourceFactory::getType();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_VectorOctreeDataSourceFactory_createDataSource_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring path_j, jstring fileName_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* path_ch = (const ev_char*)__env->GetStringUTFChars(path_j,JNI_FALSE);
					const EVString path = path_ch;
					__env->ReleaseStringUTFChars(path_j, (const char *)path_ch);
					#else
					const ev_wchar* path_ch = (const ev_wchar*)__env->GetStringChars(path_j,JNI_FALSE);
					const EVString path = path_ch;
					__env->ReleaseStringChars(path_j, (const jchar *)path_ch);
					#endif
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* fileName_ch = (const ev_char*)__env->GetStringUTFChars(fileName_j,JNI_FALSE);
					const EVString fileName = fileName_ch;
					__env->ReleaseStringUTFChars(fileName_j, (const char *)fileName_ch);
					#else
					const ev_wchar* fileName_ch = (const ev_wchar*)__env->GetStringChars(fileName_j,JNI_FALSE);
					const EVString fileName = fileName_ch;
					__env->ReleaseStringChars(fileName_j, (const jchar *)fileName_ch);
					#endif
					const 					EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSourceFactory *pObjectX = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSourceFactory*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCVectorOctreeDataSourceFactoryProxy))
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* __values1 = pObjectX->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSourceFactory::createDataSource(path, fileName);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* __values1 = pObjectX->createDataSource(path, fileName);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_VectorOctreeDataSourceFactory_register_1createDataSource_1EVString_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCVectorOctreeDataSourceFactoryProxy *pObjectX = (JCVectorOctreeDataSourceFactoryProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_createDataSource_EVString_EVString_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"createDataSource_EVString_EVString_callback", "(Ljava/lang/String;Ljava/lang/String;)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_VectorOctreeDataSourceFactory_createDataSource_1EVString_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring path_j, jstring fileName_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* path_ch = (const ev_char*)__env->GetStringUTFChars(path_j,JNI_FALSE);
					const EVString path = path_ch;
					__env->ReleaseStringUTFChars(path_j, (const char *)path_ch);
					#else
					const ev_wchar* path_ch = (const ev_wchar*)__env->GetStringChars(path_j,JNI_FALSE);
					const EVString path = path_ch;
					__env->ReleaseStringChars(path_j, (const jchar *)path_ch);
					#endif
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* fileName_ch = (const ev_char*)__env->GetStringUTFChars(fileName_j,JNI_FALSE);
					const EVString fileName = fileName_ch;
					__env->ReleaseStringUTFChars(fileName_j, (const char *)fileName_ch);
					#else
					const ev_wchar* fileName_ch = (const ev_wchar*)__env->GetStringChars(fileName_j,JNI_FALSE);
					const EVString fileName = fileName_ch;
					__env->ReleaseStringChars(fileName_j, (const jchar *)fileName_ch);
					#endif
					const 					EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSourceFactory *pObjectX = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSourceFactory*) pObjXXXX;
					EarthView::World::Spatial::GeoDataset::IDataSource* __values1 = pObjectX->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSourceFactory::createDataSource(path, fileName);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_VectorOctreeDataSourceFactory_register_1createFromXML_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCVectorOctreeDataSourceFactoryProxy *pObjectX = (JCVectorOctreeDataSourceFactoryProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_createFromXML_EVString_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"createFromXML_EVString_callback", "(Ljava/lang/String;)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_VectorOctreeDataSourceFactory_register_1openDataSource_1IPropertySet(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCVectorOctreeDataSourceFactoryProxy *pObjectX = (JCVectorOctreeDataSourceFactoryProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_openDataSource_IPropertySet_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"openDataSource_IPropertySet_callback", "(J)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_VectorOctreeDataSourceFactory_register_1createDataSource_1IPropertySet(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCVectorOctreeDataSourceFactoryProxy *pObjectX = (JCVectorOctreeDataSourceFactoryProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_createDataSource_IPropertySet_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"createDataSource_IPropertySet_callback", "(J)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_VectorOctreeDataSourceFactory_register_1destroyDataSource_1IDataSource(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCVectorOctreeDataSourceFactoryProxy *pObjectX = (JCVectorOctreeDataSourceFactoryProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_destroyDataSource_IDataSource_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"destroyDataSource_IDataSource_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_VectorOctreeDataSourceFactory_register_1existDataSource_1IDataSource(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCVectorOctreeDataSourceFactoryProxy *pObjectX = (JCVectorOctreeDataSourceFactoryProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_existDataSource_IDataSource_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"existDataSource_IDataSource_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				class JCVectorOctreeDataMetaInfoProxy : public EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo
				{
				 private:
					EarthView::World::Core::ev_string m_setDatasetType_EVDatasetType_callback;
					EarthView::World::Core::ev_string m_setName_EVString_callback;
					EarthView::World::Core::ev_string m_setEnvelope_IEnvelope_callback;
					EarthView::World::Core::ev_string m_setSpatialReference_ISpatialReference_callback;
					EarthView::World::Core::ev_string m_setVersion_ev_uint32_callback;
					EarthView::World::Core::ev_string m_getVersion_void_callback;
					EarthView::World::Core::ev_string m_getID_void_callback;
					EarthView::World::Core::ev_string m_setID_ev_uint32_callback;
					EarthView::World::Core::ev_string m_toStream_CDataStream_callback;
					EarthView::World::Core::ev_string m_fromStream_CDataStream_callback;
					EarthView::World::Core::ev_string m_getDatasetType_void_callback;
					EarthView::World::Core::ev_string m_getName_void_callback;
					EarthView::World::Core::ev_string m_getEnvelopeRef_void_callback;
					EarthView::World::Core::ev_string m_getSpatialReference_void_callback;
				public:
					JCVectorOctreeDataMetaInfoProxy(EarthView::World::Core::CNameValuePairList *pList) : CVectorOctreeDataMetaInfo(pList)
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
					void register_setDatasetType_EVDatasetType_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setDatasetType_EVDatasetType_callback = __method;
					}
					void register_setName_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setName_EVString_callback = __method;
					}
					void register_setEnvelope_IEnvelope_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setEnvelope_IEnvelope_callback = __method;
					}
					void register_setSpatialReference_ISpatialReference_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setSpatialReference_ISpatialReference_callback = __method;
					}
					void register_setVersion_ev_uint32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setVersion_ev_uint32_callback = __method;
					}
					void register_getVersion_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getVersion_void_callback = __method;
					}
					void register_getID_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getID_void_callback = __method;
					}
					void register_setID_ev_uint32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setID_ev_uint32_callback = __method;
					}
					void register_toStream_CDataStream_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_toStream_CDataStream_callback = __method;
					}
					void register_fromStream_CDataStream_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_fromStream_CDataStream_callback = __method;
					}
					void register_getDatasetType_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getDatasetType_void_callback = __method;
					}
					void register_getName_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getName_void_callback = __method;
					}
					void register_getEnvelopeRef_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getEnvelopeRef_void_callback = __method;
					}
					void register_getSpatialReference_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getSpatialReference_void_callback = __method;
					}
					virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getDatasetType() const
					{
						if (this->_gRef != NULL && this->m_getDatasetType_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getDatasetType_void_callback");
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
							return this->CVectorOctreeDataMetaInfo::getDatasetType();
						}
					}
					virtual void setDatasetType(EarthView::World::Spatial::GeoDataset::EVDatasetType type)
					{
						if (this->_gRef != NULL && this->m_setDatasetType_EVDatasetType_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("setDatasetType_EVDatasetType_callback");
							__env->CallVoidMethod(__obj, __method , type_j);
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
							return this->CVectorOctreeDataMetaInfo::setDatasetType(type);
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
							return this->CVectorOctreeDataMetaInfo::getName();
						}
					}
					virtual void setName(const EVString& name)
					{
						if (this->_gRef != NULL && this->m_setName_EVString_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("setName_EVString_callback");
							__env->CallVoidMethod(__obj, __method , name_j);
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
							return this->CVectorOctreeDataMetaInfo::setName(name);
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
							return this->CVectorOctreeDataMetaInfo::getEnvelopeRef();
						}
					}
					virtual void setEnvelope(EarthView::World::Spatial::Geometry::IEnvelope* pEnv)
					{
						if (this->_gRef != NULL && this->m_setEnvelope_IEnvelope_callback != "" && this->isCustomExtend())
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
							jlong pEnv_j = (jlong) pEnv;
							jmethodID __method = __gr->getMethod("setEnvelope_IEnvelope_callback");
							__env->CallVoidMethod(__obj, __method , pEnv_j);
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
							return this->CVectorOctreeDataMetaInfo::setEnvelope(pEnv);
						}
					}
					virtual EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReference() const
					{
						if (this->_gRef != NULL && this->m_getSpatialReference_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getSpatialReference_void_callback");
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
							return this->CVectorOctreeDataMetaInfo::getSpatialReference();
						}
					}
					virtual void setSpatialReference(EarthView::World::Spatial::Geometry::ISpatialReference* sr)
					{
						if (this->_gRef != NULL && this->m_setSpatialReference_ISpatialReference_callback != "" && this->isCustomExtend())
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
							jlong sr_j = (jlong) sr;
							jmethodID __method = __gr->getMethod("setSpatialReference_ISpatialReference_callback");
							__env->CallVoidMethod(__obj, __method , sr_j);
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
							return this->CVectorOctreeDataMetaInfo::setSpatialReference(sr);
						}
					}
					virtual void setVersion(ev_uint32 version)
					{
						if (this->_gRef != NULL && this->m_setVersion_ev_uint32_callback != "" && this->isCustomExtend())
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
							jlong version_j = (jlong) version;
							jmethodID __method = __gr->getMethod("setVersion_ev_uint32_callback");
							__env->CallVoidMethod(__obj, __method , version_j);
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
							return this->CVectorOctreeDataMetaInfo::setVersion(version);
						}
					}
					virtual ev_uint32 getVersion()
					{
						if (this->_gRef != NULL && this->m_getVersion_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getVersion_void_callback");
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
							return this->CVectorOctreeDataMetaInfo::getVersion();
						}
					}
					virtual ev_uint32 getID()
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
							return this->CVectorOctreeDataMetaInfo::getID();
						}
					}
					virtual void setID(ev_uint32 id)
					{
						if (this->_gRef != NULL && this->m_setID_ev_uint32_callback != "" && this->isCustomExtend())
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
							jlong id_j = (jlong) id;
							jmethodID __method = __gr->getMethod("setID_ev_uint32_callback");
							__env->CallVoidMethod(__obj, __method , id_j);
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
							return this->CVectorOctreeDataMetaInfo::setID(id);
						}
					}
					virtual void toStream(EarthView::World::Core::CDataStream& objStream)
					{
						if (this->_gRef != NULL && this->m_toStream_CDataStream_callback != "" && this->isCustomExtend())
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
							jlong objStream_j = (jlong) &objStream;
							jmethodID __method = __gr->getMethod("toStream_CDataStream_callback");
							__env->CallVoidMethod(__obj, __method , objStream_j);
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
							return this->CVectorOctreeDataMetaInfo::toStream(objStream);
						}
					}
					virtual void fromStream(EarthView::World::Core::CDataStream& objStream)
					{
						if (this->_gRef != NULL && this->m_fromStream_CDataStream_callback != "" && this->isCustomExtend())
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
							jlong objStream_j = (jlong) &objStream;
							jmethodID __method = __gr->getMethod("fromStream_CDataStream_callback");
							__env->CallVoidMethod(__obj, __method , objStream_j);
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
							return this->CVectorOctreeDataMetaInfo::fromStream(objStream);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCVectorOctreeDataMetaInfoProxy);
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_dataset_VectorOctreeDataMetaInfo_getDatasetType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo *pObjectX = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCVectorOctreeDataMetaInfoProxy))
					{
						EarthView::World::Spatial::GeoDataset::EVDatasetType __values1 = pObjectX->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo::getDatasetType();
						jint __values1_j = (jint) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::EVDatasetType __values1 = pObjectX->getDatasetType();
						jint __values1_j = (jint) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_VectorOctreeDataMetaInfo_register_1getDatasetType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCVectorOctreeDataMetaInfoProxy *pObjectX = (JCVectorOctreeDataMetaInfoProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getDatasetType_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getDatasetType_void_callback", "()I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_dataset_VectorOctreeDataMetaInfo_getDatasetType_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo *pObjectX = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo*) pObjXXXX;
					EarthView::World::Spatial::GeoDataset::EVDatasetType __values1 = pObjectX->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo::getDatasetType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_VectorOctreeDataMetaInfo_setDatasetType_1EVDatasetType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint type_j)
				{
					EarthView::World::Spatial::GeoDataset::EVDatasetType type = (EarthView::World::Spatial::GeoDataset::EVDatasetType) type_j;
					EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo *pObjectX = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCVectorOctreeDataMetaInfoProxy))
					{
						pObjectX->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo::setDatasetType(type);
					}
					else
					{
						pObjectX->setDatasetType(type);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_VectorOctreeDataMetaInfo_register_1setDatasetType_1EVDatasetType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCVectorOctreeDataMetaInfoProxy *pObjectX = (JCVectorOctreeDataMetaInfoProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setDatasetType_EVDatasetType_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setDatasetType_EVDatasetType_callback", "(I)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_VectorOctreeDataMetaInfo_setDatasetType_1EVDatasetType_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint type_j)
				{
					EarthView::World::Spatial::GeoDataset::EVDatasetType type = (EarthView::World::Spatial::GeoDataset::EVDatasetType) type_j;
					EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo *pObjectX = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo::setDatasetType(type);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_dataset_VectorOctreeDataMetaInfo_getName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo *pObjectX = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCVectorOctreeDataMetaInfoProxy))
					{
						EVString __values1 = pObjectX->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo::getName();
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
					else
					{
						EVString __values1 = pObjectX->getName();
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_VectorOctreeDataMetaInfo_register_1getName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCVectorOctreeDataMetaInfoProxy *pObjectX = (JCVectorOctreeDataMetaInfoProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_dataset_VectorOctreeDataMetaInfo_getName_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo *pObjectX = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo*) pObjXXXX;
					EVString __values1 = pObjectX->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo::getName();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_VectorOctreeDataMetaInfo_setName_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
					EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo *pObjectX = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCVectorOctreeDataMetaInfoProxy))
					{
						pObjectX->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo::setName(name);
					}
					else
					{
						pObjectX->setName(name);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_VectorOctreeDataMetaInfo_register_1setName_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCVectorOctreeDataMetaInfoProxy *pObjectX = (JCVectorOctreeDataMetaInfoProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setName_EVString_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setName_EVString_callback", "(Ljava/lang/String;)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_VectorOctreeDataMetaInfo_setName_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
					EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo *pObjectX = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo::setName(name);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_VectorOctreeDataMetaInfo_getEnvelopeRef_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo *pObjectX = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCVectorOctreeDataMetaInfoProxy))
					{
						const EarthView::World::Spatial::Geometry::IEnvelope* __values1 = pObjectX->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo::getEnvelopeRef();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_VectorOctreeDataMetaInfo_register_1getEnvelopeRef_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCVectorOctreeDataMetaInfoProxy *pObjectX = (JCVectorOctreeDataMetaInfoProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_VectorOctreeDataMetaInfo_getEnvelopeRef_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo *pObjectX = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo*) pObjXXXX;
					const EarthView::World::Spatial::Geometry::IEnvelope* __values1 = pObjectX->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo::getEnvelopeRef();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_VectorOctreeDataMetaInfo_setEnvelope_1IEnvelope(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pEnv_j)
				{
					EarthView::World::Spatial::Geometry::IEnvelope *pEnv = (EarthView::World::Spatial::Geometry::IEnvelope*) pEnv_j;
					EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo *pObjectX = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCVectorOctreeDataMetaInfoProxy))
					{
						pObjectX->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo::setEnvelope(pEnv);
					}
					else
					{
						pObjectX->setEnvelope(pEnv);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_VectorOctreeDataMetaInfo_register_1setEnvelope_1IEnvelope(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCVectorOctreeDataMetaInfoProxy *pObjectX = (JCVectorOctreeDataMetaInfoProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setEnvelope_IEnvelope_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setEnvelope_IEnvelope_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_VectorOctreeDataMetaInfo_setEnvelope_1IEnvelope_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pEnv_j)
				{
					EarthView::World::Spatial::Geometry::IEnvelope *pEnv = (EarthView::World::Spatial::Geometry::IEnvelope*) pEnv_j;
					EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo *pObjectX = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo::setEnvelope(pEnv);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_VectorOctreeDataMetaInfo_getSpatialReference_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo *pObjectX = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCVectorOctreeDataMetaInfoProxy))
					{
						EarthView::World::Spatial::Geometry::ISpatialReference* __values1 = pObjectX->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo::getSpatialReference();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Geometry::ISpatialReference* __values1 = pObjectX->getSpatialReference();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_VectorOctreeDataMetaInfo_register_1getSpatialReference_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCVectorOctreeDataMetaInfoProxy *pObjectX = (JCVectorOctreeDataMetaInfoProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getSpatialReference_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getSpatialReference_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_VectorOctreeDataMetaInfo_getSpatialReference_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo *pObjectX = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo*) pObjXXXX;
					EarthView::World::Spatial::Geometry::ISpatialReference* __values1 = pObjectX->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo::getSpatialReference();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_VectorOctreeDataMetaInfo_setSpatialReference_1ISpatialReference(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong sr_j)
				{
					EarthView::World::Spatial::Geometry::ISpatialReference *sr = (EarthView::World::Spatial::Geometry::ISpatialReference*) sr_j;
					EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo *pObjectX = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCVectorOctreeDataMetaInfoProxy))
					{
						pObjectX->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo::setSpatialReference(sr);
					}
					else
					{
						pObjectX->setSpatialReference(sr);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_VectorOctreeDataMetaInfo_register_1setSpatialReference_1ISpatialReference(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCVectorOctreeDataMetaInfoProxy *pObjectX = (JCVectorOctreeDataMetaInfoProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setSpatialReference_ISpatialReference_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setSpatialReference_ISpatialReference_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_VectorOctreeDataMetaInfo_setSpatialReference_1ISpatialReference_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong sr_j)
				{
					EarthView::World::Spatial::Geometry::ISpatialReference *sr = (EarthView::World::Spatial::Geometry::ISpatialReference*) sr_j;
					EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo *pObjectX = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo::setSpatialReference(sr);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_VectorOctreeDataMetaInfo_setVersion_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong version_j)
				{
					ev_uint32 version = (ev_uint32) version_j;
					EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo *pObjectX = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCVectorOctreeDataMetaInfoProxy))
					{
						pObjectX->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo::setVersion(version);
					}
					else
					{
						pObjectX->setVersion(version);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_VectorOctreeDataMetaInfo_register_1setVersion_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCVectorOctreeDataMetaInfoProxy *pObjectX = (JCVectorOctreeDataMetaInfoProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setVersion_ev_uint32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setVersion_ev_uint32_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_VectorOctreeDataMetaInfo_setVersion_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong version_j)
				{
					ev_uint32 version = (ev_uint32) version_j;
					EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo *pObjectX = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo::setVersion(version);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_VectorOctreeDataMetaInfo_getVersion_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo *pObjectX = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCVectorOctreeDataMetaInfoProxy))
					{
						ev_uint32 __values1 = pObjectX->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo::getVersion();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						ev_uint32 __values1 = pObjectX->getVersion();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_VectorOctreeDataMetaInfo_register_1getVersion_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCVectorOctreeDataMetaInfoProxy *pObjectX = (JCVectorOctreeDataMetaInfoProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getVersion_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getVersion_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_VectorOctreeDataMetaInfo_getVersion_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo *pObjectX = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo::getVersion();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_VectorOctreeDataMetaInfo_getID_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo *pObjectX = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCVectorOctreeDataMetaInfoProxy))
					{
						ev_uint32 __values1 = pObjectX->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo::getID();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_VectorOctreeDataMetaInfo_register_1getID_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCVectorOctreeDataMetaInfoProxy *pObjectX = (JCVectorOctreeDataMetaInfoProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_VectorOctreeDataMetaInfo_getID_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo *pObjectX = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo::getID();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_VectorOctreeDataMetaInfo_setID_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong id_j)
				{
					ev_uint32 id = (ev_uint32) id_j;
					EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo *pObjectX = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCVectorOctreeDataMetaInfoProxy))
					{
						pObjectX->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo::setID(id);
					}
					else
					{
						pObjectX->setID(id);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_VectorOctreeDataMetaInfo_register_1setID_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCVectorOctreeDataMetaInfoProxy *pObjectX = (JCVectorOctreeDataMetaInfoProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setID_ev_uint32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setID_ev_uint32_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_VectorOctreeDataMetaInfo_setID_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong id_j)
				{
					ev_uint32 id = (ev_uint32) id_j;
					EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo *pObjectX = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo::setID(id);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_dataset_VectorOctreeDataMetaInfo_getGeometryType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo *pObjectX = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo*) pObjXXXX;
					EarthView::World::Spatial::Geometry::EVGeometryType __values1 = pObjectX->getGeometryType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_VectorOctreeDataMetaInfo_setGeometryType_1EVGeometryType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint type_j)
				{
					EarthView::World::Spatial::Geometry::EVGeometryType type = (EarthView::World::Spatial::Geometry::EVGeometryType) type_j;
					EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo *pObjectX = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo*) pObjXXXX;
					pObjectX->setGeometryType(type);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_dataset_VectorOctreeDataMetaInfo_getLayerType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo *pObjectX = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo*) pObjXXXX;
					EarthView::World::Spatial::Atlas::EVLayerType __values1 = pObjectX->getLayerType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_VectorOctreeDataMetaInfo_setLayerType_1EVLayerType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint type_j)
				{
					EarthView::World::Spatial::Atlas::EVLayerType type = (EarthView::World::Spatial::Atlas::EVLayerType) type_j;
					EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo *pObjectX = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo*) pObjXXXX;
					pObjectX->setLayerType(type);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_VectorOctreeDataMetaInfo_toStream_1CDataStream(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong objStream_j)
				{
					EarthView::World::Core::CDataStream &objStream = *(EarthView::World::Core::CDataStream*) objStream_j;
					EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo *pObjectX = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCVectorOctreeDataMetaInfoProxy))
					{
						pObjectX->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo::toStream(objStream);
					}
					else
					{
						pObjectX->toStream(objStream);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_VectorOctreeDataMetaInfo_register_1toStream_1CDataStream(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCVectorOctreeDataMetaInfoProxy *pObjectX = (JCVectorOctreeDataMetaInfoProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_toStream_CDataStream_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"toStream_CDataStream_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_VectorOctreeDataMetaInfo_toStream_1CDataStream_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong objStream_j)
				{
					EarthView::World::Core::CDataStream &objStream = *(EarthView::World::Core::CDataStream*) objStream_j;
					EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo *pObjectX = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo::toStream(objStream);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_VectorOctreeDataMetaInfo_fromStream_1CDataStream(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong objStream_j)
				{
					EarthView::World::Core::CDataStream &objStream = *(EarthView::World::Core::CDataStream*) objStream_j;
					EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo *pObjectX = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCVectorOctreeDataMetaInfoProxy))
					{
						pObjectX->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo::fromStream(objStream);
					}
					else
					{
						pObjectX->fromStream(objStream);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_VectorOctreeDataMetaInfo_register_1fromStream_1CDataStream(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCVectorOctreeDataMetaInfoProxy *pObjectX = (JCVectorOctreeDataMetaInfoProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_fromStream_CDataStream_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"fromStream_CDataStream_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_VectorOctreeDataMetaInfo_fromStream_1CDataStream_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong objStream_j)
				{
					EarthView::World::Core::CDataStream &objStream = *(EarthView::World::Core::CDataStream*) objStream_j;
					EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo *pObjectX = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo::fromStream(objStream);
				}
			}
		}
	}
}
