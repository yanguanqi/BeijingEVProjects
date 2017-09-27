/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "vectorfileparser/ivectorfilefeatureclass.h"
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
			namespace VectorFileParser
			{
				class JIVectorFileFeatureClassProxy : public EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass
				{
				 private:
					EarthView::World::Core::ev_string m_setSpatialReference_ISpatialReference_callback;
					EarthView::World::Core::ev_string m_getSubsetCount_void_callback;
					EarthView::World::Core::ev_string m_getSubset_ev_uint32_callback;
					EarthView::World::Core::ev_string m_removeSubset_ev_uint32_callback;
					EarthView::World::Core::ev_string m_resertReading_void_callback;
					EarthView::World::Core::ev_string m_nextFeature_IFeatureIterator_callback;
					EarthView::World::Core::ev_string m_getScale_void_callback;
					EarthView::World::Core::ev_string m_readLock_void_callback;
					EarthView::World::Core::ev_string m_readUnLock_void_callback;
					EarthView::World::Core::ev_string m_getFeatureClassType_void_callback;
					EarthView::World::Core::ev_string m_getGeometryType_void_callback;
					EarthView::World::Core::ev_string m_getFieldsRef_void_callback;
					EarthView::World::Core::ev_string m_getFieldCount_void_callback;
					EarthView::World::Core::ev_string m_getFieldRef_ev_uint32_callback;
					EarthView::World::Core::ev_string m_findField_EVString_callback;
					EarthView::World::Core::ev_string m_getGeometryField_void_callback;
					EarthView::World::Core::ev_string m_getIDField_void_callback;
					EarthView::World::Core::ev_string m_getSpatialIndexEnum_void_callback;
					EarthView::World::Core::ev_string m_getFeature_ev_uint32_callback;
					EarthView::World::Core::ev_string m_query_IQueryFilter_callback;
					EarthView::World::Core::ev_string m_select_IQueryFilter_callback;
					EarthView::World::Core::ev_string m_getFeatureCount_IQueryFilter_callback;
					EarthView::World::Core::ev_string m_createSpatialIndex_EVSpatialIndexEnum_callback;
					EarthView::World::Core::ev_string m_rebulidSpatialIndex_void_callback;
					EarthView::World::Core::ev_string m_deleteSpatialIndex_void_callback;
					EarthView::World::Core::ev_string m_addField_IField_callback;
					EarthView::World::Core::ev_string m_deleteField_IField_callback;
					EarthView::World::Core::ev_string m_createFeatureBuffer_void_callback;
					EarthView::World::Core::ev_string m_insert_IFeature_callback;
					EarthView::World::Core::ev_string m_insertFeatureBuffer_IFeature_callback;
					EarthView::World::Core::ev_string m_update_IFeature_callback;
					EarthView::World::Core::ev_string m_getEnvelopeRef_void_callback;
					EarthView::World::Core::ev_string m_getSpatialReferenceRef_void_callback;
					EarthView::World::Core::ev_string m_deleteFeature_ev_uint32_callback;
					EarthView::World::Core::ev_string m_createTableProxy_void_callback;
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
					JIVectorFileFeatureClassProxy(EarthView::World::Core::CNameValuePairList *pList) : IVectorFileFeatureClass(pList)
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
					void register_setSpatialReference_ISpatialReference_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setSpatialReference_ISpatialReference_callback = __method;
					}
					void register_getSubsetCount_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getSubsetCount_void_callback = __method;
					}
					void register_getSubset_ev_uint32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getSubset_ev_uint32_callback = __method;
					}
					void register_removeSubset_ev_uint32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_removeSubset_ev_uint32_callback = __method;
					}
					void register_resertReading_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_resertReading_void_callback = __method;
					}
					void register_nextFeature_IFeatureIterator_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_nextFeature_IFeatureIterator_callback = __method;
					}
					void register_getScale_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getScale_void_callback = __method;
					}
					void register_readLock_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_readLock_void_callback = __method;
					}
					void register_readUnLock_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_readUnLock_void_callback = __method;
					}
					void register_getFeatureClassType_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getFeatureClassType_void_callback = __method;
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
					void register_getGeometryField_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getGeometryField_void_callback = __method;
					}
					void register_getIDField_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getIDField_void_callback = __method;
					}
					void register_getSpatialIndexEnum_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getSpatialIndexEnum_void_callback = __method;
					}
					void register_getFeature_ev_uint32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getFeature_ev_uint32_callback = __method;
					}
					void register_query_IQueryFilter_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_query_IQueryFilter_callback = __method;
					}
					void register_select_IQueryFilter_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_select_IQueryFilter_callback = __method;
					}
					void register_getFeatureCount_IQueryFilter_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getFeatureCount_IQueryFilter_callback = __method;
					}
					void register_createSpatialIndex_EVSpatialIndexEnum_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_createSpatialIndex_EVSpatialIndexEnum_callback = __method;
					}
					void register_rebulidSpatialIndex_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_rebulidSpatialIndex_void_callback = __method;
					}
					void register_deleteSpatialIndex_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_deleteSpatialIndex_void_callback = __method;
					}
					void register_addField_IField_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_addField_IField_callback = __method;
					}
					void register_deleteField_IField_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_deleteField_IField_callback = __method;
					}
					void register_createFeatureBuffer_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_createFeatureBuffer_void_callback = __method;
					}
					void register_insert_IFeature_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_insert_IFeature_callback = __method;
					}
					void register_insertFeatureBuffer_IFeature_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_insertFeatureBuffer_IFeature_callback = __method;
					}
					void register_update_IFeature_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_update_IFeature_callback = __method;
					}
					void register_getEnvelopeRef_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getEnvelopeRef_void_callback = __method;
					}
					void register_getSpatialReferenceRef_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getSpatialReferenceRef_void_callback = __method;
					}
					void register_deleteFeature_ev_uint32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_deleteFeature_ev_uint32_callback = __method;
					}
					void register_createTableProxy_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_createTableProxy_void_callback = __method;
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
							return this->IVectorFileFeatureClass::getType();
						}
					}
					virtual EarthView::World::Spatial::GeoDataset::EVFeatureClassType getFeatureClassType() const
					{
						if (this->_gRef != NULL && this->m_getFeatureClassType_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getFeatureClassType_void_callback");
							jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::GeoDataset::EVFeatureClassType __values1 = (EarthView::World::Spatial::GeoDataset::EVFeatureClassType) __values1_j;
							return __values1;
						}
						else
						{
							return this->IVectorFileFeatureClass::getFeatureClassType();
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
							return this->IVectorFileFeatureClass::getGeometryType();
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
							return this->IVectorFileFeatureClass::getFieldsRef();
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
							return this->IVectorFileFeatureClass::getFieldCount();
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
							return this->IVectorFileFeatureClass::getFieldRef(index);
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
							return this->IVectorFileFeatureClass::findField(fieldName);
						}
					}
					virtual const EarthView::World::Spatial::GeoDataset::IField* getGeometryField() const
					{
						if (this->_gRef != NULL && this->m_getGeometryField_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getGeometryField_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
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
							return this->IVectorFileFeatureClass::getGeometryField();
						}
					}
					virtual const EarthView::World::Spatial::GeoDataset::IField* getIDField() const
					{
						if (this->_gRef != NULL && this->m_getIDField_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getIDField_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
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
							return this->IVectorFileFeatureClass::getIDField();
						}
					}
					virtual EarthView::World::Spatial::GeoDataset::EVSpatialIndexEnum getSpatialIndexEnum() const
					{
						if (this->_gRef != NULL && this->m_getSpatialIndexEnum_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getSpatialIndexEnum_void_callback");
							jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::GeoDataset::EVSpatialIndexEnum __values1 = (EarthView::World::Spatial::GeoDataset::EVSpatialIndexEnum) __values1_j;
							return __values1;
						}
						else
						{
							return this->IVectorFileFeatureClass::getSpatialIndexEnum();
						}
					}
					virtual EarthView::World::Spatial::GeoDataset::IFeature* getFeature(ev_uint32 id)
					{
						if (this->_gRef != NULL && this->m_getFeature_ev_uint32_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
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
							jmethodID __method = __gr->getMethod("getFeature_ev_uint32_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , id_j);
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
							return this->IVectorFileFeatureClass::getFeature(id);
						}
					}
					virtual EarthView::World::Spatial::GeoDataset::IFeatureIterator* query(EarthView::World::Spatial::GeoDataset::IQueryFilter* filter)
					{
						if (this->_gRef != NULL && this->m_query_IQueryFilter_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong filter_j = (jlong) filter;
							jmethodID __method = __gr->getMethod("query_IQueryFilter_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , filter_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::GeoDataset::IFeatureIterator *__values1 = (EarthView::World::Spatial::GeoDataset::IFeatureIterator*) __values1_j;
							return __values1;
						}
						else
						{
							return this->IVectorFileFeatureClass::query(filter);
						}
					}
					virtual EarthView::World::Spatial::GeoDataset::IFeatureSelection* select(EarthView::World::Spatial::GeoDataset::IQueryFilter* filter)
					{
						if (this->_gRef != NULL && this->m_select_IQueryFilter_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong filter_j = (jlong) filter;
							jmethodID __method = __gr->getMethod("select_IQueryFilter_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , filter_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::GeoDataset::IFeatureSelection *__values1 = (EarthView::World::Spatial::GeoDataset::IFeatureSelection*) __values1_j;
							return __values1;
						}
						else
						{
							return this->IVectorFileFeatureClass::select(filter);
						}
					}
					virtual ev_uint32 getFeatureCount(EarthView::World::Spatial::GeoDataset::IQueryFilter* filter)
					{
						if (this->_gRef != NULL && this->m_getFeatureCount_IQueryFilter_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong filter_j = (jlong) filter;
							jmethodID __method = __gr->getMethod("getFeatureCount_IQueryFilter_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , filter_j);
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
							return this->IVectorFileFeatureClass::getFeatureCount(filter);
						}
					}
					virtual ev_bool createSpatialIndex(EarthView::World::Spatial::GeoDataset::EVSpatialIndexEnum spaIndex)
					{
						if (this->_gRef != NULL && this->m_createSpatialIndex_EVSpatialIndexEnum_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jint spaIndex_j = (jint) spaIndex;
							jmethodID __method = __gr->getMethod("createSpatialIndex_EVSpatialIndexEnum_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , spaIndex_j);
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
							return this->IVectorFileFeatureClass::createSpatialIndex(spaIndex);
						}
					}
					virtual ev_bool rebulidSpatialIndex()
					{
						if (this->_gRef != NULL && this->m_rebulidSpatialIndex_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("rebulidSpatialIndex_void_callback");
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
							return this->IVectorFileFeatureClass::rebulidSpatialIndex();
						}
					}
					virtual ev_bool deleteSpatialIndex()
					{
						if (this->_gRef != NULL && this->m_deleteSpatialIndex_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("deleteSpatialIndex_void_callback");
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
							return this->IVectorFileFeatureClass::deleteSpatialIndex();
						}
					}
					virtual ev_bool addField(const EarthView::World::Spatial::GeoDataset::IField* field)
					{
						if (this->_gRef != NULL && this->m_addField_IField_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong field_j = (jlong) field;
							jmethodID __method = __gr->getMethod("addField_IField_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , field_j);
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
							return this->IVectorFileFeatureClass::addField(field);
						}
					}
					virtual ev_bool deleteField(const EarthView::World::Spatial::GeoDataset::IField* field)
					{
						if (this->_gRef != NULL && this->m_deleteField_IField_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong field_j = (jlong) field;
							jmethodID __method = __gr->getMethod("deleteField_IField_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , field_j);
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
							return this->IVectorFileFeatureClass::deleteField(field);
						}
					}
					virtual EarthView::World::Spatial::GeoDataset::IFeature* createFeatureBuffer()
					{
						if (this->_gRef != NULL && this->m_createFeatureBuffer_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("createFeatureBuffer_void_callback");
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
							return this->IVectorFileFeatureClass::createFeatureBuffer();
						}
					}
					virtual ev_bool insert(EarthView::World::Spatial::GeoDataset::IFeature* feature)
					{
						if (this->_gRef != NULL && this->m_insert_IFeature_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong feature_j = (jlong) feature;
							jmethodID __method = __gr->getMethod("insert_IFeature_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , feature_j);
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
							return this->IVectorFileFeatureClass::insert(feature);
						}
					}
					virtual ev_uint32 insertFeatureBuffer(const EarthView::World::Spatial::GeoDataset::IFeature* buffer)
					{
						if (this->_gRef != NULL && this->m_insertFeatureBuffer_IFeature_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong buffer_j = (jlong) buffer;
							jmethodID __method = __gr->getMethod("insertFeatureBuffer_IFeature_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , buffer_j);
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
							return this->IVectorFileFeatureClass::insertFeatureBuffer(buffer);
						}
					}
					virtual ev_bool update(const EarthView::World::Spatial::GeoDataset::IFeature* buffer)
					{
						if (this->_gRef != NULL && this->m_update_IFeature_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong buffer_j = (jlong) buffer;
							jmethodID __method = __gr->getMethod("update_IFeature_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , buffer_j);
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
							return this->IVectorFileFeatureClass::update(buffer);
						}
					}
					virtual EarthView::World::Spatial::Geometry::IEnvelope* getEnvelopeRef() const
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
							EarthView::World::Spatial::Geometry::IEnvelope *__values1 = (EarthView::World::Spatial::Geometry::IEnvelope*) __values1_j;
							return __values1;
						}
						else
						{
							return this->IVectorFileFeatureClass::getEnvelopeRef();
						}
					}
					virtual EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReferenceRef() const
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
							return this->IVectorFileFeatureClass::getSpatialReferenceRef();
						}
					}
					virtual ev_bool setSpatialReference(const EarthView::World::Spatial::Geometry::ISpatialReference* sr)
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
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , sr_j);
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
							return this->IVectorFileFeatureClass::setSpatialReference(sr);
						}
					}
					virtual ev_bool deleteFeature(ev_uint32 id)
					{
						if (this->_gRef != NULL && this->m_deleteFeature_ev_uint32_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
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
							jmethodID __method = __gr->getMethod("deleteFeature_ev_uint32_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , id_j);
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
							return this->IVectorFileFeatureClass::deleteFeature(id);
						}
					}
					virtual EarthView::World::Spatial::GeoDataset::ITableProxy* createTableProxy()
					{
						if (this->_gRef != NULL && this->m_createTableProxy_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("createTableProxy_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::GeoDataset::ITableProxy *__values1 = (EarthView::World::Spatial::GeoDataset::ITableProxy*) __values1_j;
							return __values1;
						}
						else
						{
							return this->IVectorFileFeatureClass::createTableProxy();
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
							return this->IVectorFileFeatureClass::getName();
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
							return this->IVectorFileFeatureClass::getDescription();
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
							return this->IVectorFileFeatureClass::getDataSourceRef();
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
							return this->IVectorFileFeatureClass::canEdit();
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
							return this->IVectorFileFeatureClass::isEditing();
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
							return this->IVectorFileFeatureClass::startEditing(withUndo);
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
							return this->IVectorFileFeatureClass::stopEditing(isSave);
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
							return this->IVectorFileFeatureClass::isBeginEditingOperation();
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
							return this->IVectorFileFeatureClass::beginEditingOperation();
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
							return this->IVectorFileFeatureClass::endEditingOperation(isConfirm);
						}
					}
					virtual ev_uint32 getSubsetCount() const
					{
						if (this->_gRef != NULL && this->m_getSubsetCount_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getSubsetCount_void_callback");
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
							return this->IVectorFileFeatureClass::getSubsetCount();
						}
					}
					virtual EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass* getSubset(const ev_uint32 index) const
					{
						if (this->_gRef != NULL && this->m_getSubset_ev_uint32_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
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
							jmethodID __method = __gr->getMethod("getSubset_ev_uint32_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , index_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass *__values1 = (EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass*) __values1_j;
							return __values1;
						}
						else
						{
							return this->IVectorFileFeatureClass::getSubset(index);
						}
					}
					virtual ev_bool removeSubset(const ev_uint32 index)
					{
						if (this->_gRef != NULL && this->m_removeSubset_ev_uint32_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
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
							jmethodID __method = __gr->getMethod("removeSubset_ev_uint32_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , index_j);
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
							return this->IVectorFileFeatureClass::removeSubset(index);
						}
					}
					virtual void resertReading()
					{
						if (this->_gRef != NULL && this->m_resertReading_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("resertReading_void_callback");
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
							return this->IVectorFileFeatureClass::resertReading();
						}
					}
					virtual EarthView::World::Spatial::GeoDataset::IFeature* nextFeature(EarthView::World::Spatial::GeoDataset::IFeatureIterator* iterator)
					{
						if (this->_gRef != NULL && this->m_nextFeature_IFeatureIterator_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong iterator_j = (jlong) iterator;
							jmethodID __method = __gr->getMethod("nextFeature_IFeatureIterator_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , iterator_j);
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
							return this->IVectorFileFeatureClass::nextFeature(iterator);
						}
					}
					virtual ev_real64 getScale()
					{
						if (this->_gRef != NULL && this->m_getScale_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getScale_void_callback");
							jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_real64 __values1 = (ev_real64) __values1_j;
							return __values1;
						}
						else
						{
							return this->IVectorFileFeatureClass::getScale();
						}
					}
					virtual void readLock()
					{
						if (this->_gRef != NULL && this->m_readLock_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("readLock_void_callback");
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
							return this->IVectorFileFeatureClass::readLock();
						}
					}
					virtual void readUnLock()
					{
						if (this->_gRef != NULL && this->m_readUnLock_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("readUnLock_void_callback");
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
							return this->IVectorFileFeatureClass::readUnLock();
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
							return this->IVectorFileFeatureClass::getDataVersion();
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
							return this->IVectorFileFeatureClass::getUpdateTime();
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
							return this->IVectorFileFeatureClass::hasSubDataset();
						}
					}
				};
				REGISTER_FACTORY_CLASS(JIVectorFileFeatureClassProxy);
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_getType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIVectorFileFeatureClassProxy))
					{
						EarthView::World::Spatial::GeoDataset::EVDatasetType __values1 = pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass::getType();
						jint __values1_j = (jint) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::EVDatasetType __values1 = pObjectX->getType();
						jint __values1_j = (jint) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_register_1getType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIVectorFileFeatureClassProxy *pObjectX = (JIVectorFileFeatureClassProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_getType_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass*) pObjXXXX;
					EarthView::World::Spatial::GeoDataset::EVDatasetType __values1 = pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass::getType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_getFeatureClassType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIVectorFileFeatureClassProxy))
					{
						EarthView::World::Spatial::GeoDataset::EVFeatureClassType __values1 = pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass::getFeatureClassType();
						jint __values1_j = (jint) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::EVFeatureClassType __values1 = pObjectX->getFeatureClassType();
						jint __values1_j = (jint) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_register_1getFeatureClassType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIVectorFileFeatureClassProxy *pObjectX = (JIVectorFileFeatureClassProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getFeatureClassType_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getFeatureClassType_void_callback", "()I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_getFeatureClassType_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass*) pObjXXXX;
					EarthView::World::Spatial::GeoDataset::EVFeatureClassType __values1 = pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass::getFeatureClassType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_getGeometryType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIVectorFileFeatureClassProxy))
					{
						EarthView::World::Spatial::Geometry::EVGeometryType __values1 = pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass::getGeometryType();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_register_1getGeometryType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIVectorFileFeatureClassProxy *pObjectX = (JIVectorFileFeatureClassProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_getGeometryType_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass*) pObjXXXX;
					EarthView::World::Spatial::Geometry::EVGeometryType __values1 = pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass::getGeometryType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_getFieldsRef_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIVectorFileFeatureClassProxy))
					{
						const EarthView::World::Spatial::GeoDataset::IFields* __values1 = pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass::getFieldsRef();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_register_1getFieldsRef_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIVectorFileFeatureClassProxy *pObjectX = (JIVectorFileFeatureClassProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_getFieldsRef_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass*) pObjXXXX;
					const EarthView::World::Spatial::GeoDataset::IFields* __values1 = pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass::getFieldsRef();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_getFieldCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIVectorFileFeatureClassProxy))
					{
						ev_uint32 __values1 = pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass::getFieldCount();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_register_1getFieldCount_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIVectorFileFeatureClassProxy *pObjectX = (JIVectorFileFeatureClassProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_getFieldCount_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass::getFieldCount();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_getFieldRef_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					const 					EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIVectorFileFeatureClassProxy))
					{
						const EarthView::World::Spatial::GeoDataset::IField* __values1 = pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass::getFieldRef(index);
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_register_1getFieldRef_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIVectorFileFeatureClassProxy *pObjectX = (JIVectorFileFeatureClassProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_getFieldRef_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					const 					EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass*) pObjXXXX;
					const EarthView::World::Spatial::GeoDataset::IField* __values1 = pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass::getFieldRef(index);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_findField_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring fieldName_j)
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
					const 					EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIVectorFileFeatureClassProxy))
					{
						ev_int32 __values1 = pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass::findField(fieldName);
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_register_1findField_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIVectorFileFeatureClassProxy *pObjectX = (JIVectorFileFeatureClassProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_findField_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring fieldName_j)
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
					const 					EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass*) pObjXXXX;
					ev_int32 __values1 = pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass::findField(fieldName);
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_getGeometryField_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIVectorFileFeatureClassProxy))
					{
						const EarthView::World::Spatial::GeoDataset::IField* __values1 = pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass::getGeometryField();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						const EarthView::World::Spatial::GeoDataset::IField* __values1 = pObjectX->getGeometryField();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_register_1getGeometryField_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIVectorFileFeatureClassProxy *pObjectX = (JIVectorFileFeatureClassProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getGeometryField_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getGeometryField_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_getGeometryField_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass*) pObjXXXX;
					const EarthView::World::Spatial::GeoDataset::IField* __values1 = pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass::getGeometryField();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_getIDField_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIVectorFileFeatureClassProxy))
					{
						const EarthView::World::Spatial::GeoDataset::IField* __values1 = pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass::getIDField();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						const EarthView::World::Spatial::GeoDataset::IField* __values1 = pObjectX->getIDField();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_register_1getIDField_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIVectorFileFeatureClassProxy *pObjectX = (JIVectorFileFeatureClassProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getIDField_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getIDField_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_getIDField_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass*) pObjXXXX;
					const EarthView::World::Spatial::GeoDataset::IField* __values1 = pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass::getIDField();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_getSpatialIndexEnum_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIVectorFileFeatureClassProxy))
					{
						EarthView::World::Spatial::GeoDataset::EVSpatialIndexEnum __values1 = pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass::getSpatialIndexEnum();
						jint __values1_j = (jint) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::EVSpatialIndexEnum __values1 = pObjectX->getSpatialIndexEnum();
						jint __values1_j = (jint) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_register_1getSpatialIndexEnum_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIVectorFileFeatureClassProxy *pObjectX = (JIVectorFileFeatureClassProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getSpatialIndexEnum_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getSpatialIndexEnum_void_callback", "()I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_getSpatialIndexEnum_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass*) pObjXXXX;
					EarthView::World::Spatial::GeoDataset::EVSpatialIndexEnum __values1 = pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass::getSpatialIndexEnum();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_getFeature_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong id_j)
				{
					ev_uint32 id = (ev_uint32) id_j;
					EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIVectorFileFeatureClassProxy))
					{
						EarthView::World::Spatial::GeoDataset::IFeature* __values1 = pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass::getFeature(id);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IFeature* __values1 = pObjectX->getFeature(id);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_register_1getFeature_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIVectorFileFeatureClassProxy *pObjectX = (JIVectorFileFeatureClassProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getFeature_ev_uint32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getFeature_ev_uint32_callback", "(J)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_getFeature_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong id_j)
				{
					ev_uint32 id = (ev_uint32) id_j;
					EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass*) pObjXXXX;
					EarthView::World::Spatial::GeoDataset::IFeature* __values1 = pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass::getFeature(id);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_query_1IQueryFilter(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong filter_j)
				{
					EarthView::World::Spatial::GeoDataset::IQueryFilter *filter = (EarthView::World::Spatial::GeoDataset::IQueryFilter*) filter_j;
					EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIVectorFileFeatureClassProxy))
					{
						EarthView::World::Spatial::GeoDataset::IFeatureIterator* __values1 = pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass::query(filter);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IFeatureIterator* __values1 = pObjectX->query(filter);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_register_1query_1IQueryFilter(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIVectorFileFeatureClassProxy *pObjectX = (JIVectorFileFeatureClassProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_query_IQueryFilter_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"query_IQueryFilter_callback", "(J)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_query_1IQueryFilter_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong filter_j)
				{
					EarthView::World::Spatial::GeoDataset::IQueryFilter *filter = (EarthView::World::Spatial::GeoDataset::IQueryFilter*) filter_j;
					EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass*) pObjXXXX;
					EarthView::World::Spatial::GeoDataset::IFeatureIterator* __values1 = pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass::query(filter);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_select_1IQueryFilter(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong filter_j)
				{
					EarthView::World::Spatial::GeoDataset::IQueryFilter *filter = (EarthView::World::Spatial::GeoDataset::IQueryFilter*) filter_j;
					EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIVectorFileFeatureClassProxy))
					{
						EarthView::World::Spatial::GeoDataset::IFeatureSelection* __values1 = pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass::select(filter);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IFeatureSelection* __values1 = pObjectX->select(filter);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_register_1select_1IQueryFilter(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIVectorFileFeatureClassProxy *pObjectX = (JIVectorFileFeatureClassProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_select_IQueryFilter_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"select_IQueryFilter_callback", "(J)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_select_1IQueryFilter_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong filter_j)
				{
					EarthView::World::Spatial::GeoDataset::IQueryFilter *filter = (EarthView::World::Spatial::GeoDataset::IQueryFilter*) filter_j;
					EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass*) pObjXXXX;
					EarthView::World::Spatial::GeoDataset::IFeatureSelection* __values1 = pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass::select(filter);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_getFeatureCount_1IQueryFilter(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong filter_j)
				{
					EarthView::World::Spatial::GeoDataset::IQueryFilter *filter = (EarthView::World::Spatial::GeoDataset::IQueryFilter*) filter_j;
					EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIVectorFileFeatureClassProxy))
					{
						ev_uint32 __values1 = pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass::getFeatureCount(filter);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						ev_uint32 __values1 = pObjectX->getFeatureCount(filter);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_register_1getFeatureCount_1IQueryFilter(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIVectorFileFeatureClassProxy *pObjectX = (JIVectorFileFeatureClassProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getFeatureCount_IQueryFilter_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getFeatureCount_IQueryFilter_callback", "(J)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_getFeatureCount_1IQueryFilter_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong filter_j)
				{
					EarthView::World::Spatial::GeoDataset::IQueryFilter *filter = (EarthView::World::Spatial::GeoDataset::IQueryFilter*) filter_j;
					EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass::getFeatureCount(filter);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_createSpatialIndex_1EVSpatialIndexEnum(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint spaIndex_j)
				{
					EarthView::World::Spatial::GeoDataset::EVSpatialIndexEnum spaIndex = (EarthView::World::Spatial::GeoDataset::EVSpatialIndexEnum) spaIndex_j;
					EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIVectorFileFeatureClassProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass::createSpatialIndex(spaIndex);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->createSpatialIndex(spaIndex);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_register_1createSpatialIndex_1EVSpatialIndexEnum(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIVectorFileFeatureClassProxy *pObjectX = (JIVectorFileFeatureClassProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_createSpatialIndex_EVSpatialIndexEnum_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"createSpatialIndex_EVSpatialIndexEnum_callback", "(I)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_createSpatialIndex_1EVSpatialIndexEnum_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint spaIndex_j)
				{
					EarthView::World::Spatial::GeoDataset::EVSpatialIndexEnum spaIndex = (EarthView::World::Spatial::GeoDataset::EVSpatialIndexEnum) spaIndex_j;
					EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass::createSpatialIndex(spaIndex);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_rebulidSpatialIndex_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIVectorFileFeatureClassProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass::rebulidSpatialIndex();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->rebulidSpatialIndex();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_register_1rebulidSpatialIndex_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIVectorFileFeatureClassProxy *pObjectX = (JIVectorFileFeatureClassProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_rebulidSpatialIndex_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"rebulidSpatialIndex_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_rebulidSpatialIndex_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass::rebulidSpatialIndex();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_deleteSpatialIndex_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIVectorFileFeatureClassProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass::deleteSpatialIndex();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->deleteSpatialIndex();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_register_1deleteSpatialIndex_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIVectorFileFeatureClassProxy *pObjectX = (JIVectorFileFeatureClassProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_deleteSpatialIndex_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"deleteSpatialIndex_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_deleteSpatialIndex_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass::deleteSpatialIndex();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_addField_1IField(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong field_j)
				{
					const EarthView::World::Spatial::GeoDataset::IField *field = (const EarthView::World::Spatial::GeoDataset::IField*) field_j;
					EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIVectorFileFeatureClassProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass::addField(field);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->addField(field);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_register_1addField_1IField(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIVectorFileFeatureClassProxy *pObjectX = (JIVectorFileFeatureClassProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_addField_IField_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"addField_IField_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_addField_1IField_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong field_j)
				{
					const EarthView::World::Spatial::GeoDataset::IField *field = (const EarthView::World::Spatial::GeoDataset::IField*) field_j;
					EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass::addField(field);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_deleteField_1IField(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong field_j)
				{
					const EarthView::World::Spatial::GeoDataset::IField *field = (const EarthView::World::Spatial::GeoDataset::IField*) field_j;
					EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIVectorFileFeatureClassProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass::deleteField(field);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->deleteField(field);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_register_1deleteField_1IField(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIVectorFileFeatureClassProxy *pObjectX = (JIVectorFileFeatureClassProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_deleteField_IField_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"deleteField_IField_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_deleteField_1IField_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong field_j)
				{
					const EarthView::World::Spatial::GeoDataset::IField *field = (const EarthView::World::Spatial::GeoDataset::IField*) field_j;
					EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass::deleteField(field);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_createFeatureBuffer_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIVectorFileFeatureClassProxy))
					{
						EarthView::World::Spatial::GeoDataset::IFeature* __values1 = pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass::createFeatureBuffer();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IFeature* __values1 = pObjectX->createFeatureBuffer();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_register_1createFeatureBuffer_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIVectorFileFeatureClassProxy *pObjectX = (JIVectorFileFeatureClassProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_createFeatureBuffer_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"createFeatureBuffer_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_createFeatureBuffer_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass*) pObjXXXX;
					EarthView::World::Spatial::GeoDataset::IFeature* __values1 = pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass::createFeatureBuffer();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_insert_1IFeature(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong feature_j)
				{
					EarthView::World::Spatial::GeoDataset::IFeature *feature = (EarthView::World::Spatial::GeoDataset::IFeature*) feature_j;
					EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIVectorFileFeatureClassProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass::insert(feature);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->insert(feature);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_register_1insert_1IFeature(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIVectorFileFeatureClassProxy *pObjectX = (JIVectorFileFeatureClassProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_insert_IFeature_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"insert_IFeature_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_insert_1IFeature_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong feature_j)
				{
					EarthView::World::Spatial::GeoDataset::IFeature *feature = (EarthView::World::Spatial::GeoDataset::IFeature*) feature_j;
					EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass::insert(feature);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_insertFeatureBuffer_1IFeature(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong buffer_j)
				{
					const EarthView::World::Spatial::GeoDataset::IFeature *buffer = (const EarthView::World::Spatial::GeoDataset::IFeature*) buffer_j;
					EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIVectorFileFeatureClassProxy))
					{
						ev_uint32 __values1 = pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass::insertFeatureBuffer(buffer);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						ev_uint32 __values1 = pObjectX->insertFeatureBuffer(buffer);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_register_1insertFeatureBuffer_1IFeature(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIVectorFileFeatureClassProxy *pObjectX = (JIVectorFileFeatureClassProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_insertFeatureBuffer_IFeature_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"insertFeatureBuffer_IFeature_callback", "(J)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_insertFeatureBuffer_1IFeature_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong buffer_j)
				{
					const EarthView::World::Spatial::GeoDataset::IFeature *buffer = (const EarthView::World::Spatial::GeoDataset::IFeature*) buffer_j;
					EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass::insertFeatureBuffer(buffer);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_update_1IFeature(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong buffer_j)
				{
					const EarthView::World::Spatial::GeoDataset::IFeature *buffer = (const EarthView::World::Spatial::GeoDataset::IFeature*) buffer_j;
					EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIVectorFileFeatureClassProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass::update(buffer);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->update(buffer);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_register_1update_1IFeature(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIVectorFileFeatureClassProxy *pObjectX = (JIVectorFileFeatureClassProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_update_IFeature_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"update_IFeature_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_update_1IFeature_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong buffer_j)
				{
					const EarthView::World::Spatial::GeoDataset::IFeature *buffer = (const EarthView::World::Spatial::GeoDataset::IFeature*) buffer_j;
					EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass::update(buffer);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_getEnvelopeRef_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIVectorFileFeatureClassProxy))
					{
						EarthView::World::Spatial::Geometry::IEnvelope* __values1 = pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass::getEnvelopeRef();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Geometry::IEnvelope* __values1 = pObjectX->getEnvelopeRef();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_register_1getEnvelopeRef_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIVectorFileFeatureClassProxy *pObjectX = (JIVectorFileFeatureClassProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_getEnvelopeRef_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass*) pObjXXXX;
					EarthView::World::Spatial::Geometry::IEnvelope* __values1 = pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass::getEnvelopeRef();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_getSpatialReferenceRef_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIVectorFileFeatureClassProxy))
					{
						EarthView::World::Spatial::Geometry::ISpatialReference* __values1 = pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass::getSpatialReferenceRef();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_register_1getSpatialReferenceRef_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIVectorFileFeatureClassProxy *pObjectX = (JIVectorFileFeatureClassProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_getSpatialReferenceRef_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass*) pObjXXXX;
					EarthView::World::Spatial::Geometry::ISpatialReference* __values1 = pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass::getSpatialReferenceRef();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_setSpatialReference_1ISpatialReference(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong sr_j)
				{
					const EarthView::World::Spatial::Geometry::ISpatialReference *sr = (const EarthView::World::Spatial::Geometry::ISpatialReference*) sr_j;
					EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIVectorFileFeatureClassProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass::setSpatialReference(sr);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->setSpatialReference(sr);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_register_1setSpatialReference_1ISpatialReference(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIVectorFileFeatureClassProxy *pObjectX = (JIVectorFileFeatureClassProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setSpatialReference_ISpatialReference_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setSpatialReference_ISpatialReference_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_setSpatialReference_1ISpatialReference_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong sr_j)
				{
					const EarthView::World::Spatial::Geometry::ISpatialReference *sr = (const EarthView::World::Spatial::Geometry::ISpatialReference*) sr_j;
					EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass::setSpatialReference(sr);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_deleteFeature_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong id_j)
				{
					ev_uint32 id = (ev_uint32) id_j;
					EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIVectorFileFeatureClassProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass::deleteFeature(id);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->deleteFeature(id);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_register_1deleteFeature_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIVectorFileFeatureClassProxy *pObjectX = (JIVectorFileFeatureClassProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_deleteFeature_ev_uint32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"deleteFeature_ev_uint32_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_deleteFeature_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong id_j)
				{
					ev_uint32 id = (ev_uint32) id_j;
					EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass::deleteFeature(id);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_createTableProxy_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIVectorFileFeatureClassProxy))
					{
						EarthView::World::Spatial::GeoDataset::ITableProxy* __values1 = pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass::createTableProxy();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::ITableProxy* __values1 = pObjectX->createTableProxy();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_register_1createTableProxy_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIVectorFileFeatureClassProxy *pObjectX = (JIVectorFileFeatureClassProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_createTableProxy_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"createTableProxy_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_createTableProxy_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass*) pObjXXXX;
					EarthView::World::Spatial::GeoDataset::ITableProxy* __values1 = pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass::createTableProxy();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_getName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIVectorFileFeatureClassProxy))
					{
						EVString __values1 = pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass::getName();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_register_1getName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIVectorFileFeatureClassProxy *pObjectX = (JIVectorFileFeatureClassProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_getName_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass*) pObjXXXX;
					EVString __values1 = pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass::getName();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_getDescription_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIVectorFileFeatureClassProxy))
					{
						EVString __values1 = pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass::getDescription();
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
					else
					{
						EVString __values1 = pObjectX->getDescription();
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_register_1getDescription_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIVectorFileFeatureClassProxy *pObjectX = (JIVectorFileFeatureClassProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_getDescription_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass*) pObjXXXX;
					EVString __values1 = pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass::getDescription();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_getDataSourceRef_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIVectorFileFeatureClassProxy))
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* __values1 = pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass::getDataSourceRef();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* __values1 = pObjectX->getDataSourceRef();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_register_1getDataSourceRef_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIVectorFileFeatureClassProxy *pObjectX = (JIVectorFileFeatureClassProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_getDataSourceRef_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass*) pObjXXXX;
					EarthView::World::Spatial::GeoDataset::IDataSource* __values1 = pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass::getDataSourceRef();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_canEdit_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIVectorFileFeatureClassProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass::canEdit();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->canEdit();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_register_1canEdit_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIVectorFileFeatureClassProxy *pObjectX = (JIVectorFileFeatureClassProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_canEdit_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass::canEdit();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_isEditing_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIVectorFileFeatureClassProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass::isEditing();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->isEditing();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_register_1isEditing_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIVectorFileFeatureClassProxy *pObjectX = (JIVectorFileFeatureClassProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_isEditing_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass::isEditing();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_startEditing_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean withUndo_j)
				{
					ev_bool withUndo = (ev_bool) withUndo_j;
					EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIVectorFileFeatureClassProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass::startEditing(withUndo);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->startEditing(withUndo);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_register_1startEditing_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIVectorFileFeatureClassProxy *pObjectX = (JIVectorFileFeatureClassProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_startEditing_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean withUndo_j)
				{
					ev_bool withUndo = (ev_bool) withUndo_j;
					EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass::startEditing(withUndo);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_stopEditing_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean isSave_j)
				{
					ev_bool isSave = (ev_bool) isSave_j;
					EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIVectorFileFeatureClassProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass::stopEditing(isSave);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->stopEditing(isSave);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_register_1stopEditing_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIVectorFileFeatureClassProxy *pObjectX = (JIVectorFileFeatureClassProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_stopEditing_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean isSave_j)
				{
					ev_bool isSave = (ev_bool) isSave_j;
					EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass::stopEditing(isSave);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_isBeginEditingOperation_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIVectorFileFeatureClassProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass::isBeginEditingOperation();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->isBeginEditingOperation();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_register_1isBeginEditingOperation_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIVectorFileFeatureClassProxy *pObjectX = (JIVectorFileFeatureClassProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_isBeginEditingOperation_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass::isBeginEditingOperation();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_beginEditingOperation_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIVectorFileFeatureClassProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass::beginEditingOperation();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->beginEditingOperation();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_register_1beginEditingOperation_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIVectorFileFeatureClassProxy *pObjectX = (JIVectorFileFeatureClassProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_beginEditingOperation_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass::beginEditingOperation();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_endEditingOperation_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean isConfirm_j)
				{
					ev_bool isConfirm = (ev_bool) isConfirm_j;
					EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIVectorFileFeatureClassProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass::endEditingOperation(isConfirm);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->endEditingOperation(isConfirm);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_register_1endEditingOperation_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIVectorFileFeatureClassProxy *pObjectX = (JIVectorFileFeatureClassProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_endEditingOperation_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean isConfirm_j)
				{
					ev_bool isConfirm = (ev_bool) isConfirm_j;
					EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass::endEditingOperation(isConfirm);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_getSubsetCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIVectorFileFeatureClassProxy))
					{
						ev_uint32 __values1 = pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass::getSubsetCount();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						ev_uint32 __values1 = pObjectX->getSubsetCount();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_register_1getSubsetCount_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIVectorFileFeatureClassProxy *pObjectX = (JIVectorFileFeatureClassProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getSubsetCount_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getSubsetCount_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_getSubsetCount_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass::getSubsetCount();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_getSubset_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
				{
					const ev_uint32 index = (ev_uint32) index_j;
					const 					EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIVectorFileFeatureClassProxy))
					{
						EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass* __values1 = pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass::getSubset(index);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass* __values1 = pObjectX->getSubset(index);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_register_1getSubset_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIVectorFileFeatureClassProxy *pObjectX = (JIVectorFileFeatureClassProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getSubset_ev_uint32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getSubset_ev_uint32_callback", "(J)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_getSubset_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
				{
					const ev_uint32 index = (ev_uint32) index_j;
					const 					EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass*) pObjXXXX;
					EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass* __values1 = pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass::getSubset(index);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_removeSubset_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
				{
					const ev_uint32 index = (ev_uint32) index_j;
					EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIVectorFileFeatureClassProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass::removeSubset(index);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->removeSubset(index);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_register_1removeSubset_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIVectorFileFeatureClassProxy *pObjectX = (JIVectorFileFeatureClassProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_removeSubset_ev_uint32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"removeSubset_ev_uint32_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_removeSubset_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
				{
					const ev_uint32 index = (ev_uint32) index_j;
					EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass::removeSubset(index);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_resertReading_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIVectorFileFeatureClassProxy))
					{
						pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass::resertReading();
					}
					else
					{
						pObjectX->resertReading();
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_register_1resertReading_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIVectorFileFeatureClassProxy *pObjectX = (JIVectorFileFeatureClassProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_resertReading_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"resertReading_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_resertReading_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass::resertReading();
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_nextFeature_1IFeatureIterator(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong iterator_j)
				{
					EarthView::World::Spatial::GeoDataset::IFeatureIterator *iterator = (EarthView::World::Spatial::GeoDataset::IFeatureIterator*) iterator_j;
					EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIVectorFileFeatureClassProxy))
					{
						EarthView::World::Spatial::GeoDataset::IFeature* __values1 = pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass::nextFeature(iterator);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IFeature* __values1 = pObjectX->nextFeature(iterator);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_register_1nextFeature_1IFeatureIterator(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIVectorFileFeatureClassProxy *pObjectX = (JIVectorFileFeatureClassProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_nextFeature_IFeatureIterator_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"nextFeature_IFeatureIterator_callback", "(J)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_nextFeature_1IFeatureIterator_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong iterator_j)
				{
					EarthView::World::Spatial::GeoDataset::IFeatureIterator *iterator = (EarthView::World::Spatial::GeoDataset::IFeatureIterator*) iterator_j;
					EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass*) pObjXXXX;
					EarthView::World::Spatial::GeoDataset::IFeature* __values1 = pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass::nextFeature(iterator);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_getScale_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIVectorFileFeatureClassProxy))
					{
						ev_real64 __values1 = pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass::getScale();
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
					else
					{
						ev_real64 __values1 = pObjectX->getScale();
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_register_1getScale_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIVectorFileFeatureClassProxy *pObjectX = (JIVectorFileFeatureClassProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getScale_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getScale_void_callback", "()D");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_getScale_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass*) pObjXXXX;
					ev_real64 __values1 = pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass::getScale();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_readLock_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIVectorFileFeatureClassProxy))
					{
						pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass::readLock();
					}
					else
					{
						pObjectX->readLock();
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_register_1readLock_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIVectorFileFeatureClassProxy *pObjectX = (JIVectorFileFeatureClassProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_readLock_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"readLock_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_readLock_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass::readLock();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_readUnLock_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIVectorFileFeatureClassProxy))
					{
						pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass::readUnLock();
					}
					else
					{
						pObjectX->readUnLock();
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_register_1readUnLock_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIVectorFileFeatureClassProxy *pObjectX = (JIVectorFileFeatureClassProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_readUnLock_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"readUnLock_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_readUnLock_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass *pObjectX = (EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass::readUnLock();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_register_1getDataVersion_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIVectorFileFeatureClassProxy *pObjectX = (JIVectorFileFeatureClassProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_register_1getUpdateTime_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIVectorFileFeatureClassProxy *pObjectX = (JIVectorFileFeatureClassProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorfileparser_Ivectorfilefeatureclass_register_1hasSubDataset_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIVectorFileFeatureClassProxy *pObjectX = (JIVectorFileFeatureClassProxy*) pObjXXXX;
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
			}
		}
	}
}
