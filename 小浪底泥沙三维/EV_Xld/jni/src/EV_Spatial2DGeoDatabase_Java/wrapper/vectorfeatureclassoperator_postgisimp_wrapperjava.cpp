/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial2dgeodatabase/vectorfeatureclassoperator_postgisimp.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace GeoDataset
			{
				class JCVectorFeatureClassPostGisOperatorProxy : public EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator
				{
				 private:
					EarthView::World::Core::ev_string m_getDataSourceRef_void_callback;
					EarthView::World::Core::ev_string m_openDataset_CDataStream_EVString_callback;
					EarthView::World::Core::ev_string m_createDataset_CDataStream_callback;
					EarthView::World::Core::ev_string m_deleteDataset_EVString_callback;
					EarthView::World::Core::ev_string m_getFeatureClassName_void_callback;
					EarthView::World::Core::ev_string m_getFeature_ev_uint32_CDataStream_callback;
					EarthView::World::Core::ev_string m_getFeature_ev_uint32_vector<EarthView_World_Core_CVariant>_ev_real64_ev_real64_vector<ev_bool>_callback;
					EarthView::World::Core::ev_string m_deleteFeature_ev_uint32_callback;
					EarthView::World::Core::ev_string m_getFeatureCount_CDataStream_callback;
					EarthView::World::Core::ev_string m_updateExtent_void_callback;
					EarthView::World::Core::ev_string m_getExtent_IEnvelope_callback;
					EarthView::World::Core::ev_string m_query_CDataStream_callback;
					EarthView::World::Core::ev_string m_nextFeature_vector<EarthView_World_Core_CVariant>_ev_real64_ev_real64_vector<ev_bool>_void_callback;
					EarthView::World::Core::ev_string m_select_CDataStream_CDataStream_callback;
					EarthView::World::Core::ev_string m_endQuery_void_callback;
					EarthView::World::Core::ev_string m_queryCount_CDataStream_callback;
					EarthView::World::Core::ev_string m_createSpatialIndex_ISpatialIndexParam_callback;
					EarthView::World::Core::ev_string m_rebulidSpatialIndex_void_callback;
					EarthView::World::Core::ev_string m_deleteSpatialIndex_void_callback;
					EarthView::World::Core::ev_string m_deleteField_ev_int32_callback;
					EarthView::World::Core::ev_string m_max_EVString_callback;
					EarthView::World::Core::ev_string m_min_EVString_callback;
					EarthView::World::Core::ev_string m_getFieldValues_EVString_ev_bool_callback;
					EarthView::World::Core::ev_string m_getFiledTypes_void_callback;
					EarthView::World::Core::ev_string m_Lock_void_callback;
					EarthView::World::Core::ev_string m_UnLock_void_callback;
					EarthView::World::Core::ev_string m_getIdName_void_callback;
					EarthView::World::Core::ev_string m_getUpdateTime_void_callback;
					EarthView::World::Core::ev_string m_getDataVersion_void_callback;
					EarthView::World::Core::ev_string m_updateTime_void_callback;
					EarthView::World::Core::ev_string m_updateDataVersion_void_callback;
					EarthView::World::Core::ev_string m_setSpatialReference_ISpatialReference_callback;
					EarthView::World::Core::ev_string m_getGeomStremType_void_callback;
				public:
					JCVectorFeatureClassPostGisOperatorProxy(EarthView::World::Core::CNameValuePairList *pList) : CVectorFeatureClassPostGisOperator(pList)
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
					void register_getDataSourceRef_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getDataSourceRef_void_callback = __method;
					}
					void register_openDataset_CDataStream_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_openDataset_CDataStream_EVString_callback = __method;
					}
					void register_createDataset_CDataStream_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_createDataset_CDataStream_callback = __method;
					}
					void register_deleteDataset_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_deleteDataset_EVString_callback = __method;
					}
					void register_getFeatureClassName_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getFeatureClassName_void_callback = __method;
					}
					void register_getFeature_ev_uint32_CDataStream_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getFeature_ev_uint32_CDataStream_callback = __method;
					}
					void register_getFeature_ev_uint32_vector<EarthView_World_Core_CVariant>_ev_real64_ev_real64_vector<ev_bool>_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getFeature_ev_uint32_vector<EarthView_World_Core_CVariant>_ev_real64_ev_real64_vector<ev_bool>_callback = __method;
					}
					void register_deleteFeature_ev_uint32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_deleteFeature_ev_uint32_callback = __method;
					}
					void register_getFeatureCount_CDataStream_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getFeatureCount_CDataStream_callback = __method;
					}
					void register_updateExtent_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_updateExtent_void_callback = __method;
					}
					void register_getExtent_IEnvelope_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getExtent_IEnvelope_callback = __method;
					}
					void register_query_CDataStream_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_query_CDataStream_callback = __method;
					}
					void register_nextFeature_vector<EarthView_World_Core_CVariant>_ev_real64_ev_real64_vector<ev_bool>_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_nextFeature_vector<EarthView_World_Core_CVariant>_ev_real64_ev_real64_vector<ev_bool>_void_callback = __method;
					}
					void register_select_CDataStream_CDataStream_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_select_CDataStream_CDataStream_callback = __method;
					}
					void register_endQuery_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_endQuery_void_callback = __method;
					}
					void register_queryCount_CDataStream_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_queryCount_CDataStream_callback = __method;
					}
					void register_createSpatialIndex_ISpatialIndexParam_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_createSpatialIndex_ISpatialIndexParam_callback = __method;
					}
					void register_rebulidSpatialIndex_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_rebulidSpatialIndex_void_callback = __method;
					}
					void register_deleteSpatialIndex_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_deleteSpatialIndex_void_callback = __method;
					}
					void register_deleteField_ev_int32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_deleteField_ev_int32_callback = __method;
					}
					void register_max_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_max_EVString_callback = __method;
					}
					void register_min_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_min_EVString_callback = __method;
					}
					void register_getFieldValues_EVString_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getFieldValues_EVString_ev_bool_callback = __method;
					}
					void register_getFiledTypes_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getFiledTypes_void_callback = __method;
					}
					void register_Lock_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_Lock_void_callback = __method;
					}
					void register_UnLock_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_UnLock_void_callback = __method;
					}
					void register_getIdName_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getIdName_void_callback = __method;
					}
					void register_getUpdateTime_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getUpdateTime_void_callback = __method;
					}
					void register_getDataVersion_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getDataVersion_void_callback = __method;
					}
					void register_updateTime_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_updateTime_void_callback = __method;
					}
					void register_updateDataVersion_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_updateDataVersion_void_callback = __method;
					}
					void register_setSpatialReference_ISpatialReference_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setSpatialReference_ISpatialReference_callback = __method;
					}
					void register_getGeomStremType_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getGeomStremType_void_callback = __method;
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataSource* getDataSourceRef()
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
							return this->CVectorFeatureClassPostGisOperator::getDataSourceRef();
						}
					}
					virtual ev_bool openDataset(EarthView::World::Core::CDataStream& stream, const EVString& name)
					{
						if (this->_gRef != NULL && this->m_openDataset_CDataStream_EVString_callback != "" && this->isCustomExtend())
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
							jlong stream_j = (jlong) &stream;
							EarthView::World::Core::ev_wstring name_wch = name;
							jstring name_j = __env->NewString((const jchar*)name_wch.getString(), name_wch.size());
							jmethodID __method = __gr->getMethod("openDataset_CDataStream_EVString_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , stream_j, name_j);
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
							return this->CVectorFeatureClassPostGisOperator::openDataset(stream, name);
						}
					}
					virtual ev_bool createDataset(EarthView::World::Core::CDataStream& stream)
					{
						if (this->_gRef != NULL && this->m_createDataset_CDataStream_callback != "" && this->isCustomExtend())
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
							jlong stream_j = (jlong) &stream;
							jmethodID __method = __gr->getMethod("createDataset_CDataStream_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , stream_j);
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
							return this->CVectorFeatureClassPostGisOperator::createDataset(stream);
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
							return this->CVectorFeatureClassPostGisOperator::deleteDataset(name);
						}
					}
					virtual EVString getFeatureClassName()
					{
						if (this->_gRef != NULL && this->m_getFeatureClassName_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getFeatureClassName_void_callback");
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
							return this->CVectorFeatureClassPostGisOperator::getFeatureClassName();
						}
					}
					virtual ev_bool getFeature(ev_uint32 id, EarthView::World::Core::CDataStream& feature)
					{
						if (this->_gRef != NULL && this->m_getFeature_ev_uint32_CDataStream_callback != "" && this->isCustomExtend())
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
							jlong feature_j = (jlong) &feature;
							jmethodID __method = __gr->getMethod("getFeature_ev_uint32_CDataStream_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , id_j, feature_j);
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
							return this->CVectorFeatureClassPostGisOperator::getFeature(id, feature);
						}
					}
					virtual ev_bool getFeature(ev_uint32 id, vector<EarthView::World::Core::CVariant>& values, ev_real64& lenght, ev_real64& area, vector<ev_bool>& pos)
					{
						if (this->_gRef != NULL && this->m_getFeature_ev_uint32_vector<EarthView_World_Core_CVariant>_ev_real64_ev_real64_vector<ev_bool>_callback != "" && this->isCustomExtend())
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
							jlong values_j = (jlong) &values;
							jlong lenght_j = (jlong) &lenght;
							jlong area_j = (jlong) &area;
							jlong pos_j = (jlong) &pos;
							jmethodID __method = __gr->getMethod("getFeature_ev_uint32_vector<EarthView_World_Core_CVariant>_ev_real64_ev_real64_vector<ev_bool>_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , id_j, values_j, lenght_j, area_j, pos_j);
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
							return this->CVectorFeatureClassPostGisOperator::getFeature(id, values, lenght, area, pos);
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
							return this->CVectorFeatureClassPostGisOperator::deleteFeature(id);
						}
					}
					virtual ev_uint32 getFeatureCount(EarthView::World::Core::CDataStream& filter)
					{
						if (this->_gRef != NULL && this->m_getFeatureCount_CDataStream_callback != "" && this->isCustomExtend())
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
							jlong filter_j = (jlong) &filter;
							jmethodID __method = __gr->getMethod("getFeatureCount_CDataStream_callback");
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
							return this->CVectorFeatureClassPostGisOperator::getFeatureCount(filter);
						}
					}
					virtual ev_bool updateExtent()
					{
						if (this->_gRef != NULL && this->m_updateExtent_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("updateExtent_void_callback");
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
							return this->CVectorFeatureClassPostGisOperator::updateExtent();
						}
					}
					virtual ev_bool getExtent(EarthView::World::Spatial::Geometry::IEnvelope* pEnvelope)
					{
						if (this->_gRef != NULL && this->m_getExtent_IEnvelope_callback != "" && this->isCustomExtend())
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
							jlong pEnvelope_j = (jlong) pEnvelope;
							jmethodID __method = __gr->getMethod("getExtent_IEnvelope_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , pEnvelope_j);
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
							return this->CVectorFeatureClassPostGisOperator::getExtent(pEnvelope);
						}
					}
					virtual void* query(EarthView::World::Core::CDataStream& filter)
					{
						if (this->_gRef != NULL && this->m_query_CDataStream_callback != "" && this->isCustomExtend())
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
							jlong filter_j = (jlong) &filter;
							jmethodID __method = __gr->getMethod("query_CDataStream_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , filter_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							void *__values1 = (void*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CVectorFeatureClassPostGisOperator::query(filter);
						}
					}
					virtual ev_bool nextFeature(vector<EarthView::World::Core::CVariant>& values, ev_real64& lenght, ev_real64& area, vector<ev_bool>& pos, void* queryData)
					{
						if (this->_gRef != NULL && this->m_nextFeature_vector<EarthView_World_Core_CVariant>_ev_real64_ev_real64_vector<ev_bool>_void_callback != "" && this->isCustomExtend())
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
							jlong values_j = (jlong) &values;
							jlong lenght_j = (jlong) &lenght;
							jlong area_j = (jlong) &area;
							jlong pos_j = (jlong) &pos;
							jlong queryData_j = (jlong) queryData;
							jmethodID __method = __gr->getMethod("nextFeature_vector<EarthView_World_Core_CVariant>_ev_real64_ev_real64_vector<ev_bool>_void_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , values_j, lenght_j, area_j, pos_j, queryData_j);
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
							return this->CVectorFeatureClassPostGisOperator::nextFeature(values, lenght, area, pos, queryData);
						}
					}
					virtual ev_bool select(EarthView::World::Core::CDataStream& os, EarthView::World::Core::CDataStream& filter)
					{
						if (this->_gRef != NULL && this->m_select_CDataStream_CDataStream_callback != "" && this->isCustomExtend())
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
							jlong os_j = (jlong) &os;
							jlong filter_j = (jlong) &filter;
							jmethodID __method = __gr->getMethod("select_CDataStream_CDataStream_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , os_j, filter_j);
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
							return this->CVectorFeatureClassPostGisOperator::select(os, filter);
						}
					}
					virtual ev_bool endQuery(void* queryData)
					{
						if (this->_gRef != NULL && this->m_endQuery_void_callback != "" && this->isCustomExtend())
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
							jlong queryData_j = (jlong) queryData;
							jmethodID __method = __gr->getMethod("endQuery_void_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , queryData_j);
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
							return this->CVectorFeatureClassPostGisOperator::endQuery(queryData);
						}
					}
					virtual ev_uint32 queryCount(EarthView::World::Core::CDataStream& filter)
					{
						if (this->_gRef != NULL && this->m_queryCount_CDataStream_callback != "" && this->isCustomExtend())
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
							jlong filter_j = (jlong) &filter;
							jmethodID __method = __gr->getMethod("queryCount_CDataStream_callback");
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
							return this->CVectorFeatureClassPostGisOperator::queryCount(filter);
						}
					}
					virtual ev_bool createSpatialIndex(EarthView::World::Spatial::GeoDataset::ISpatialIndexParam* param)
					{
						if (this->_gRef != NULL && this->m_createSpatialIndex_ISpatialIndexParam_callback != "" && this->isCustomExtend())
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
							jlong param_j = (jlong) param;
							jmethodID __method = __gr->getMethod("createSpatialIndex_ISpatialIndexParam_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , param_j);
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
							return this->CVectorFeatureClassPostGisOperator::createSpatialIndex(param);
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
							return this->CVectorFeatureClassPostGisOperator::rebulidSpatialIndex();
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
							return this->CVectorFeatureClassPostGisOperator::deleteSpatialIndex();
						}
					}
					virtual ev_bool deleteField(ev_int32 index)
					{
						if (this->_gRef != NULL && this->m_deleteField_ev_int32_callback != "" && this->isCustomExtend())
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
							jint index_j = (jint) index;
							jmethodID __method = __gr->getMethod("deleteField_ev_int32_callback");
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
							return this->CVectorFeatureClassPostGisOperator::deleteField(index);
						}
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
							return this->CVectorFeatureClassPostGisOperator::max(expression);
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
							return this->CVectorFeatureClassPostGisOperator::min(expression);
						}
					}
					virtual EarthView::World::Core::CVariantArray getFieldValues(const EVString& fieldName, ev_bool isUnique)
					{
						if (this->_gRef != NULL && this->m_getFieldValues_EVString_ev_bool_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getFieldValues_EVString_ev_bool_callback");
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
							return this->CVectorFeatureClassPostGisOperator::getFieldValues(fieldName, isUnique);
						}
					}
					virtual ev_vector<ev_int32> getFiledTypes() const
					{
						if (this->_gRef != NULL && this->m_getFiledTypes_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getFiledTypes_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_vector<ev_int32> __values1 = *(ev_vector<ev_int32>*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CVectorFeatureClassPostGisOperator::getFiledTypes();
						}
					}
					virtual ev_bool Lock()
					{
						if (this->_gRef != NULL && this->m_Lock_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("Lock_void_callback");
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
							return this->CVectorFeatureClassPostGisOperator::Lock();
						}
					}
					virtual ev_bool UnLock()
					{
						if (this->_gRef != NULL && this->m_UnLock_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("UnLock_void_callback");
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
							return this->CVectorFeatureClassPostGisOperator::UnLock();
						}
					}
					virtual EVString getIdName()
					{
						if (this->_gRef != NULL && this->m_getIdName_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getIdName_void_callback");
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
							return this->CVectorFeatureClassPostGisOperator::getIdName();
						}
					}
					virtual EVString getUpdateTime()
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
							return this->CVectorFeatureClassPostGisOperator::getUpdateTime();
						}
					}
					virtual ev_uint64 getDataVersion()
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
							return this->CVectorFeatureClassPostGisOperator::getDataVersion();
						}
					}
					virtual ev_bool updateTime()
					{
						if (this->_gRef != NULL && this->m_updateTime_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("updateTime_void_callback");
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
							return this->CVectorFeatureClassPostGisOperator::updateTime();
						}
					}
					virtual ev_bool updateDataVersion()
					{
						if (this->_gRef != NULL && this->m_updateDataVersion_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("updateDataVersion_void_callback");
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
							return this->CVectorFeatureClassPostGisOperator::updateDataVersion();
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
							return this->CVectorFeatureClassPostGisOperator::setSpatialReference(sr);
						}
					}
					virtual int getGeomStremType()
					{
						if (this->_gRef != NULL && this->m_getGeomStremType_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getGeomStremType_void_callback");
							jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							int __values1 = (int) __values1_j;
							return __values1;
						}
						else
						{
							return this->CVectorFeatureClassPostGisOperator::getGeomStremType();
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCVectorFeatureClassPostGisOperatorProxy);
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_geodataset_VectorFeatureClassPostGisOperator_getDataSourceRef_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCVectorFeatureClassPostGisOperatorProxy))
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* __values1 = pObjectX->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::getDataSourceRef();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_geodataset_VectorFeatureClassPostGisOperator_register_1getDataSourceRef_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCVectorFeatureClassPostGisOperatorProxy *pObjectX = (JCVectorFeatureClassPostGisOperatorProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_geodataset_VectorFeatureClassPostGisOperator_getDataSourceRef_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjXXXX;
					EarthView::World::Spatial::GeoDataset::IDataSource* __values1 = pObjectX->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::getDataSourceRef();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_geodataset_VectorFeatureClassPostGisOperator_openDataset_1CDataStream_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j, jstring name_j)
				{
					EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
					const EVString name = name_ch;
					__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
					#else
					const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
					const EVString name = name_ch;
					__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
					#endif
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCVectorFeatureClassPostGisOperatorProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::openDataset(stream, name);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->openDataset(stream, name);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_geodataset_VectorFeatureClassPostGisOperator_register_1openDataset_1CDataStream_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCVectorFeatureClassPostGisOperatorProxy *pObjectX = (JCVectorFeatureClassPostGisOperatorProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_openDataset_CDataStream_EVString_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"openDataset_CDataStream_EVString_callback", "(JLjava/lang/String;)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_geodataset_VectorFeatureClassPostGisOperator_openDataset_1CDataStream_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j, jstring name_j)
				{
					EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
					const EVString name = name_ch;
					__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
					#else
					const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
					const EVString name = name_ch;
					__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
					#endif
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::openDataset(stream, name);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_geodataset_VectorFeatureClassPostGisOperator_createDataset_1CDataStream(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j)
				{
					EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCVectorFeatureClassPostGisOperatorProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::createDataset(stream);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->createDataset(stream);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_geodataset_VectorFeatureClassPostGisOperator_register_1createDataset_1CDataStream(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCVectorFeatureClassPostGisOperatorProxy *pObjectX = (JCVectorFeatureClassPostGisOperatorProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_createDataset_CDataStream_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"createDataset_CDataStream_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_geodataset_VectorFeatureClassPostGisOperator_createDataset_1CDataStream_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j)
				{
					EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::createDataset(stream);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_geodataset_VectorFeatureClassPostGisOperator_deleteDataset_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCVectorFeatureClassPostGisOperatorProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::deleteDataset(name);
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_geodataset_VectorFeatureClassPostGisOperator_register_1deleteDataset_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCVectorFeatureClassPostGisOperatorProxy *pObjectX = (JCVectorFeatureClassPostGisOperatorProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_geodataset_VectorFeatureClassPostGisOperator_deleteDataset_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::deleteDataset(name);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial2d_geodataset_VectorFeatureClassPostGisOperator_getFeatureClassName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCVectorFeatureClassPostGisOperatorProxy))
					{
						EVString __values1 = pObjectX->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::getFeatureClassName();
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
					else
					{
						EVString __values1 = pObjectX->getFeatureClassName();
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_geodataset_VectorFeatureClassPostGisOperator_register_1getFeatureClassName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCVectorFeatureClassPostGisOperatorProxy *pObjectX = (JCVectorFeatureClassPostGisOperatorProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getFeatureClassName_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getFeatureClassName_void_callback", "()Ljava/lang/String;");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial2d_geodataset_VectorFeatureClassPostGisOperator_getFeatureClassName_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjXXXX;
					EVString __values1 = pObjectX->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::getFeatureClassName();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_geodataset_VectorFeatureClassPostGisOperator_getFeature_1ev_1uint32_1CDataStream(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong id_j, jlong feature_j)
				{
					ev_uint32 id = (ev_uint32) id_j;
					EarthView::World::Core::CDataStream &feature = *(EarthView::World::Core::CDataStream*) feature_j;
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCVectorFeatureClassPostGisOperatorProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::getFeature(id, feature);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->getFeature(id, feature);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_geodataset_VectorFeatureClassPostGisOperator_register_1getFeature_1ev_1uint32_1CDataStream(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCVectorFeatureClassPostGisOperatorProxy *pObjectX = (JCVectorFeatureClassPostGisOperatorProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getFeature_ev_uint32_CDataStream_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getFeature_ev_uint32_CDataStream_callback", "(JJ)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_geodataset_VectorFeatureClassPostGisOperator_getFeature_1ev_1uint32_1CDataStream_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong id_j, jlong feature_j)
				{
					ev_uint32 id = (ev_uint32) id_j;
					EarthView::World::Core::CDataStream &feature = *(EarthView::World::Core::CDataStream*) feature_j;
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::getFeature(id, feature);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_geodataset_VectorFeatureClassPostGisOperator_getFeature_1ev_1uint32_1vector<EarthView_1World_1Core_1CVariant>_1ev_1real64_1ev_1real64_1vector<ev_1bool>(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong id_j, jlong values_j, jlong lenght_j, jlong area_j, jlong pos_j)
				{
					ev_uint32 id = (ev_uint32) id_j;
					vector<EarthView::World::Core::CVariant> &values = *(vector<EarthView::World::Core::CVariant>*) values_j;
					ev_real64 &lenght = *(ev_real64*) lenght_j;
					ev_real64 &area = *(ev_real64*) area_j;
					vector<ev_bool> &pos = *(vector<ev_bool>*) pos_j;
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCVectorFeatureClassPostGisOperatorProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::getFeature(id, values, lenght, area, pos);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->getFeature(id, values, lenght, area, pos);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_geodataset_VectorFeatureClassPostGisOperator_register_1getFeature_1ev_1uint32_1vector<EarthView_1World_1Core_1CVariant>_1ev_1real64_1ev_1real64_1vector<ev_1bool>(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCVectorFeatureClassPostGisOperatorProxy *pObjectX = (JCVectorFeatureClassPostGisOperatorProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getFeature_ev_uint32_vector<EarthView_World_Core_CVariant>_ev_real64_ev_real64_vector<ev_bool>_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getFeature_ev_uint32_vector<EarthView_World_Core_CVariant>_ev_real64_ev_real64_vector<ev_bool>_callback", "(JJJJJ)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_geodataset_VectorFeatureClassPostGisOperator_getFeature_1ev_1uint32_1vector<EarthView_1World_1Core_1CVariant>_1ev_1real64_1ev_1real64_1vector<ev_1bool>_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong id_j, jlong values_j, jlong lenght_j, jlong area_j, jlong pos_j)
				{
					ev_uint32 id = (ev_uint32) id_j;
					vector<EarthView::World::Core::CVariant> &values = *(vector<EarthView::World::Core::CVariant>*) values_j;
					ev_real64 &lenght = *(ev_real64*) lenght_j;
					ev_real64 &area = *(ev_real64*) area_j;
					vector<ev_bool> &pos = *(vector<ev_bool>*) pos_j;
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::getFeature(id, values, lenght, area, pos);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_geodataset_VectorFeatureClassPostGisOperator_deleteFeature_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong id_j)
				{
					ev_uint32 id = (ev_uint32) id_j;
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCVectorFeatureClassPostGisOperatorProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::deleteFeature(id);
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_geodataset_VectorFeatureClassPostGisOperator_register_1deleteFeature_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCVectorFeatureClassPostGisOperatorProxy *pObjectX = (JCVectorFeatureClassPostGisOperatorProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_geodataset_VectorFeatureClassPostGisOperator_deleteFeature_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong id_j)
				{
					ev_uint32 id = (ev_uint32) id_j;
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::deleteFeature(id);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_geodataset_VectorFeatureClassPostGisOperator_getFeatureCount_1CDataStream(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong filter_j)
				{
					EarthView::World::Core::CDataStream &filter = *(EarthView::World::Core::CDataStream*) filter_j;
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCVectorFeatureClassPostGisOperatorProxy))
					{
						ev_uint32 __values1 = pObjectX->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::getFeatureCount(filter);
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_geodataset_VectorFeatureClassPostGisOperator_register_1getFeatureCount_1CDataStream(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCVectorFeatureClassPostGisOperatorProxy *pObjectX = (JCVectorFeatureClassPostGisOperatorProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getFeatureCount_CDataStream_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getFeatureCount_CDataStream_callback", "(J)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_geodataset_VectorFeatureClassPostGisOperator_getFeatureCount_1CDataStream_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong filter_j)
				{
					EarthView::World::Core::CDataStream &filter = *(EarthView::World::Core::CDataStream*) filter_j;
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::getFeatureCount(filter);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_geodataset_VectorFeatureClassPostGisOperator_updateExtent_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCVectorFeatureClassPostGisOperatorProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::updateExtent();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->updateExtent();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_geodataset_VectorFeatureClassPostGisOperator_register_1updateExtent_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCVectorFeatureClassPostGisOperatorProxy *pObjectX = (JCVectorFeatureClassPostGisOperatorProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_updateExtent_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"updateExtent_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_geodataset_VectorFeatureClassPostGisOperator_updateExtent_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::updateExtent();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_geodataset_VectorFeatureClassPostGisOperator_getExtent_1IEnvelope(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pEnvelope_j)
				{
					EarthView::World::Spatial::Geometry::IEnvelope *pEnvelope = (EarthView::World::Spatial::Geometry::IEnvelope*) pEnvelope_j;
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCVectorFeatureClassPostGisOperatorProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::getExtent(pEnvelope);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->getExtent(pEnvelope);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_geodataset_VectorFeatureClassPostGisOperator_register_1getExtent_1IEnvelope(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCVectorFeatureClassPostGisOperatorProxy *pObjectX = (JCVectorFeatureClassPostGisOperatorProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getExtent_IEnvelope_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getExtent_IEnvelope_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_geodataset_VectorFeatureClassPostGisOperator_getExtent_1IEnvelope_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pEnvelope_j)
				{
					EarthView::World::Spatial::Geometry::IEnvelope *pEnvelope = (EarthView::World::Spatial::Geometry::IEnvelope*) pEnvelope_j;
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::getExtent(pEnvelope);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_geodataset_VectorFeatureClassPostGisOperator_query_1CDataStream(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong filter_j)
				{
					EarthView::World::Core::CDataStream &filter = *(EarthView::World::Core::CDataStream*) filter_j;
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCVectorFeatureClassPostGisOperatorProxy))
					{
						void* __values1 = pObjectX->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::query(filter);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						void* __values1 = pObjectX->query(filter);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_geodataset_VectorFeatureClassPostGisOperator_register_1query_1CDataStream(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCVectorFeatureClassPostGisOperatorProxy *pObjectX = (JCVectorFeatureClassPostGisOperatorProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_query_CDataStream_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"query_CDataStream_callback", "(J)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_geodataset_VectorFeatureClassPostGisOperator_query_1CDataStream_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong filter_j)
				{
					EarthView::World::Core::CDataStream &filter = *(EarthView::World::Core::CDataStream*) filter_j;
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjXXXX;
					void* __values1 = pObjectX->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::query(filter);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_geodataset_VectorFeatureClassPostGisOperator_nextFeature_1vector<EarthView_1World_1Core_1CVariant>_1ev_1real64_1ev_1real64_1vector<ev_1bool>_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong values_j, jlong lenght_j, jlong area_j, jlong pos_j, jlong queryData_j)
				{
					vector<EarthView::World::Core::CVariant> &values = *(vector<EarthView::World::Core::CVariant>*) values_j;
					ev_real64 &lenght = *(ev_real64*) lenght_j;
					ev_real64 &area = *(ev_real64*) area_j;
					vector<ev_bool> &pos = *(vector<ev_bool>*) pos_j;
					void *queryData = (void*) queryData_j;
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCVectorFeatureClassPostGisOperatorProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::nextFeature(values, lenght, area, pos, queryData);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->nextFeature(values, lenght, area, pos, queryData);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_geodataset_VectorFeatureClassPostGisOperator_register_1nextFeature_1vector<EarthView_1World_1Core_1CVariant>_1ev_1real64_1ev_1real64_1vector<ev_1bool>_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCVectorFeatureClassPostGisOperatorProxy *pObjectX = (JCVectorFeatureClassPostGisOperatorProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_nextFeature_vector<EarthView_World_Core_CVariant>_ev_real64_ev_real64_vector<ev_bool>_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"nextFeature_vector<EarthView_World_Core_CVariant>_ev_real64_ev_real64_vector<ev_bool>_void_callback", "(JJJJJ)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_geodataset_VectorFeatureClassPostGisOperator_nextFeature_1vector<EarthView_1World_1Core_1CVariant>_1ev_1real64_1ev_1real64_1vector<ev_1bool>_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong values_j, jlong lenght_j, jlong area_j, jlong pos_j, jlong queryData_j)
				{
					vector<EarthView::World::Core::CVariant> &values = *(vector<EarthView::World::Core::CVariant>*) values_j;
					ev_real64 &lenght = *(ev_real64*) lenght_j;
					ev_real64 &area = *(ev_real64*) area_j;
					vector<ev_bool> &pos = *(vector<ev_bool>*) pos_j;
					void *queryData = (void*) queryData_j;
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::nextFeature(values, lenght, area, pos, queryData);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_geodataset_VectorFeatureClassPostGisOperator_select_1CDataStream_1CDataStream(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong os_j, jlong filter_j)
				{
					EarthView::World::Core::CDataStream &os = *(EarthView::World::Core::CDataStream*) os_j;
					EarthView::World::Core::CDataStream &filter = *(EarthView::World::Core::CDataStream*) filter_j;
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCVectorFeatureClassPostGisOperatorProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::select(os, filter);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->select(os, filter);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_geodataset_VectorFeatureClassPostGisOperator_register_1select_1CDataStream_1CDataStream(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCVectorFeatureClassPostGisOperatorProxy *pObjectX = (JCVectorFeatureClassPostGisOperatorProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_select_CDataStream_CDataStream_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"select_CDataStream_CDataStream_callback", "(JJ)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_geodataset_VectorFeatureClassPostGisOperator_select_1CDataStream_1CDataStream_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong os_j, jlong filter_j)
				{
					EarthView::World::Core::CDataStream &os = *(EarthView::World::Core::CDataStream*) os_j;
					EarthView::World::Core::CDataStream &filter = *(EarthView::World::Core::CDataStream*) filter_j;
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::select(os, filter);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_geodataset_VectorFeatureClassPostGisOperator_endQuery_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong queryData_j)
				{
					void *queryData = (void*) queryData_j;
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCVectorFeatureClassPostGisOperatorProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::endQuery(queryData);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->endQuery(queryData);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_geodataset_VectorFeatureClassPostGisOperator_register_1endQuery_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCVectorFeatureClassPostGisOperatorProxy *pObjectX = (JCVectorFeatureClassPostGisOperatorProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_endQuery_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"endQuery_void_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_geodataset_VectorFeatureClassPostGisOperator_endQuery_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong queryData_j)
				{
					void *queryData = (void*) queryData_j;
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::endQuery(queryData);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_geodataset_VectorFeatureClassPostGisOperator_queryCount_1CDataStream(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong filter_j)
				{
					EarthView::World::Core::CDataStream &filter = *(EarthView::World::Core::CDataStream*) filter_j;
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCVectorFeatureClassPostGisOperatorProxy))
					{
						ev_uint32 __values1 = pObjectX->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::queryCount(filter);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						ev_uint32 __values1 = pObjectX->queryCount(filter);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_geodataset_VectorFeatureClassPostGisOperator_register_1queryCount_1CDataStream(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCVectorFeatureClassPostGisOperatorProxy *pObjectX = (JCVectorFeatureClassPostGisOperatorProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_queryCount_CDataStream_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"queryCount_CDataStream_callback", "(J)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_geodataset_VectorFeatureClassPostGisOperator_queryCount_1CDataStream_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong filter_j)
				{
					EarthView::World::Core::CDataStream &filter = *(EarthView::World::Core::CDataStream*) filter_j;
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::queryCount(filter);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_geodataset_VectorFeatureClassPostGisOperator_createSpatialIndex_1ISpatialIndexParam(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong param_j)
				{
					EarthView::World::Spatial::GeoDataset::ISpatialIndexParam *param = (EarthView::World::Spatial::GeoDataset::ISpatialIndexParam*) param_j;
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCVectorFeatureClassPostGisOperatorProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::createSpatialIndex(param);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->createSpatialIndex(param);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_geodataset_VectorFeatureClassPostGisOperator_register_1createSpatialIndex_1ISpatialIndexParam(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCVectorFeatureClassPostGisOperatorProxy *pObjectX = (JCVectorFeatureClassPostGisOperatorProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_createSpatialIndex_ISpatialIndexParam_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"createSpatialIndex_ISpatialIndexParam_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_geodataset_VectorFeatureClassPostGisOperator_createSpatialIndex_1ISpatialIndexParam_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong param_j)
				{
					EarthView::World::Spatial::GeoDataset::ISpatialIndexParam *param = (EarthView::World::Spatial::GeoDataset::ISpatialIndexParam*) param_j;
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::createSpatialIndex(param);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_geodataset_VectorFeatureClassPostGisOperator_rebulidSpatialIndex_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCVectorFeatureClassPostGisOperatorProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::rebulidSpatialIndex();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_geodataset_VectorFeatureClassPostGisOperator_register_1rebulidSpatialIndex_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCVectorFeatureClassPostGisOperatorProxy *pObjectX = (JCVectorFeatureClassPostGisOperatorProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_geodataset_VectorFeatureClassPostGisOperator_rebulidSpatialIndex_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::rebulidSpatialIndex();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_geodataset_VectorFeatureClassPostGisOperator_deleteSpatialIndex_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCVectorFeatureClassPostGisOperatorProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::deleteSpatialIndex();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_geodataset_VectorFeatureClassPostGisOperator_register_1deleteSpatialIndex_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCVectorFeatureClassPostGisOperatorProxy *pObjectX = (JCVectorFeatureClassPostGisOperatorProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_geodataset_VectorFeatureClassPostGisOperator_deleteSpatialIndex_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::deleteSpatialIndex();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_geodataset_VectorFeatureClassPostGisOperator_deleteField_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint index_j)
				{
					ev_int32 index = (ev_int32) index_j;
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCVectorFeatureClassPostGisOperatorProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::deleteField(index);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->deleteField(index);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_geodataset_VectorFeatureClassPostGisOperator_register_1deleteField_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCVectorFeatureClassPostGisOperatorProxy *pObjectX = (JCVectorFeatureClassPostGisOperatorProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_deleteField_ev_int32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"deleteField_ev_int32_callback", "(I)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_geodataset_VectorFeatureClassPostGisOperator_deleteField_1ev_1int32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint index_j)
				{
					ev_int32 index = (ev_int32) index_j;
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::deleteField(index);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_geodataset_VectorFeatureClassPostGisOperator_max_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring expression_j)
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
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCVectorFeatureClassPostGisOperatorProxy))
					{
						EarthView::World::Core::CVariant __values1 = pObjectX->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::max(expression);
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_geodataset_VectorFeatureClassPostGisOperator_register_1max_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCVectorFeatureClassPostGisOperatorProxy *pObjectX = (JCVectorFeatureClassPostGisOperatorProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_geodataset_VectorFeatureClassPostGisOperator_max_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring expression_j)
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
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjXXXX;
					EarthView::World::Core::CVariant __values1 = pObjectX->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::max(expression);
					EarthView::World::Core::CVariant *returnvalues = new EarthView::World::Core::CVariant(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_geodataset_VectorFeatureClassPostGisOperator_min_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring expression_j)
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
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCVectorFeatureClassPostGisOperatorProxy))
					{
						EarthView::World::Core::CVariant __values1 = pObjectX->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::min(expression);
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_geodataset_VectorFeatureClassPostGisOperator_register_1min_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCVectorFeatureClassPostGisOperatorProxy *pObjectX = (JCVectorFeatureClassPostGisOperatorProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_geodataset_VectorFeatureClassPostGisOperator_min_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring expression_j)
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
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjXXXX;
					EarthView::World::Core::CVariant __values1 = pObjectX->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::min(expression);
					EarthView::World::Core::CVariant *returnvalues = new EarthView::World::Core::CVariant(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_geodataset_VectorFeatureClassPostGisOperator_getFieldValues_1EVString_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring fieldName_j, jboolean isUnique_j)
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
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCVectorFeatureClassPostGisOperatorProxy))
					{
						EarthView::World::Core::CVariantArray __values1 = pObjectX->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::getFieldValues(fieldName, isUnique);
						EarthView::World::Core::CVariantArray *returnvalues = new EarthView::World::Core::CVariantArray(__values1);
						((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
						jlong __values1_j = (jlong) returnvalues;
						return __values1_j;
					}
					else
					{
						EarthView::World::Core::CVariantArray __values1 = pObjectX->getFieldValues(fieldName, isUnique);
						EarthView::World::Core::CVariantArray *returnvalues = new EarthView::World::Core::CVariantArray(__values1);
						((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
						jlong __values1_j = (jlong) returnvalues;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_geodataset_VectorFeatureClassPostGisOperator_register_1getFieldValues_1EVString_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCVectorFeatureClassPostGisOperatorProxy *pObjectX = (JCVectorFeatureClassPostGisOperatorProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getFieldValues_EVString_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getFieldValues_EVString_ev_bool_callback", "(Ljava/lang/String;Z)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_geodataset_VectorFeatureClassPostGisOperator_getFieldValues_1EVString_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring fieldName_j, jboolean isUnique_j)
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
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjXXXX;
					EarthView::World::Core::CVariantArray __values1 = pObjectX->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::getFieldValues(fieldName, isUnique);
					EarthView::World::Core::CVariantArray *returnvalues = new EarthView::World::Core::CVariantArray(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_geodataset_VectorFeatureClassPostGisOperator_getFiledTypes_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCVectorFeatureClassPostGisOperatorProxy))
					{
						ev_vector<ev_int32> __values1 = pObjectX->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::getFiledTypes();
						ev_vector<ev_int32> *returnvalues = new ev_vector<ev_int32>(__values1);
						((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
						jlong __values1_j = (jlong) returnvalues;
						return __values1_j;
					}
					else
					{
						ev_vector<ev_int32> __values1 = pObjectX->getFiledTypes();
						ev_vector<ev_int32> *returnvalues = new ev_vector<ev_int32>(__values1);
						((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
						jlong __values1_j = (jlong) returnvalues;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_geodataset_VectorFeatureClassPostGisOperator_register_1getFiledTypes_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCVectorFeatureClassPostGisOperatorProxy *pObjectX = (JCVectorFeatureClassPostGisOperatorProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getFiledTypes_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getFiledTypes_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_geodataset_VectorFeatureClassPostGisOperator_getFiledTypes_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjXXXX;
					ev_vector<ev_int32> __values1 = pObjectX->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::getFiledTypes();
					ev_vector<ev_int32> *returnvalues = new ev_vector<ev_int32>(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_geodataset_VectorFeatureClassPostGisOperator_Lock_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCVectorFeatureClassPostGisOperatorProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::Lock();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->Lock();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_geodataset_VectorFeatureClassPostGisOperator_register_1Lock_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCVectorFeatureClassPostGisOperatorProxy *pObjectX = (JCVectorFeatureClassPostGisOperatorProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_Lock_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"Lock_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_geodataset_VectorFeatureClassPostGisOperator_Lock_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::Lock();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_geodataset_VectorFeatureClassPostGisOperator_UnLock_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCVectorFeatureClassPostGisOperatorProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::UnLock();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->UnLock();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_geodataset_VectorFeatureClassPostGisOperator_register_1UnLock_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCVectorFeatureClassPostGisOperatorProxy *pObjectX = (JCVectorFeatureClassPostGisOperatorProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_UnLock_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"UnLock_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_geodataset_VectorFeatureClassPostGisOperator_UnLock_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::UnLock();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial2d_geodataset_VectorFeatureClassPostGisOperator_getIdName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCVectorFeatureClassPostGisOperatorProxy))
					{
						EVString __values1 = pObjectX->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::getIdName();
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
					else
					{
						EVString __values1 = pObjectX->getIdName();
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_geodataset_VectorFeatureClassPostGisOperator_register_1getIdName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCVectorFeatureClassPostGisOperatorProxy *pObjectX = (JCVectorFeatureClassPostGisOperatorProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getIdName_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getIdName_void_callback", "()Ljava/lang/String;");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial2d_geodataset_VectorFeatureClassPostGisOperator_getIdName_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjXXXX;
					EVString __values1 = pObjectX->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::getIdName();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial2d_geodataset_VectorFeatureClassPostGisOperator_getUpdateTime_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCVectorFeatureClassPostGisOperatorProxy))
					{
						EVString __values1 = pObjectX->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::getUpdateTime();
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
					else
					{
						EVString __values1 = pObjectX->getUpdateTime();
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_geodataset_VectorFeatureClassPostGisOperator_register_1getUpdateTime_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCVectorFeatureClassPostGisOperatorProxy *pObjectX = (JCVectorFeatureClassPostGisOperatorProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial2d_geodataset_VectorFeatureClassPostGisOperator_getUpdateTime_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjXXXX;
					EVString __values1 = pObjectX->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::getUpdateTime();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial2d_geodataset_VectorFeatureClassPostGisOperator_getDataVersion_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCVectorFeatureClassPostGisOperatorProxy))
					{
						ev_uint64 __values1 = pObjectX->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::getDataVersion();
						EarthView::World::Core::ev_string __values1_ch;
						__values1_ch<<__values1;
						jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
						return __values1_j;
					}
					else
					{
						ev_uint64 __values1 = pObjectX->getDataVersion();
						EarthView::World::Core::ev_string __values1_ch;
						__values1_ch<<__values1;
						jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_geodataset_VectorFeatureClassPostGisOperator_register_1getDataVersion_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCVectorFeatureClassPostGisOperatorProxy *pObjectX = (JCVectorFeatureClassPostGisOperatorProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial2d_geodataset_VectorFeatureClassPostGisOperator_getDataVersion_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjXXXX;
					ev_uint64 __values1 = pObjectX->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::getDataVersion();
					EarthView::World::Core::ev_string __values1_ch;
					__values1_ch<<__values1;
					jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_geodataset_VectorFeatureClassPostGisOperator_updateTime_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCVectorFeatureClassPostGisOperatorProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::updateTime();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->updateTime();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_geodataset_VectorFeatureClassPostGisOperator_register_1updateTime_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCVectorFeatureClassPostGisOperatorProxy *pObjectX = (JCVectorFeatureClassPostGisOperatorProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_updateTime_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"updateTime_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_geodataset_VectorFeatureClassPostGisOperator_updateTime_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::updateTime();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_geodataset_VectorFeatureClassPostGisOperator_updateDataVersion_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCVectorFeatureClassPostGisOperatorProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::updateDataVersion();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->updateDataVersion();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_geodataset_VectorFeatureClassPostGisOperator_register_1updateDataVersion_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCVectorFeatureClassPostGisOperatorProxy *pObjectX = (JCVectorFeatureClassPostGisOperatorProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_updateDataVersion_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"updateDataVersion_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_geodataset_VectorFeatureClassPostGisOperator_updateDataVersion_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::updateDataVersion();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_geodataset_VectorFeatureClassPostGisOperator_setSpatialReference_1ISpatialReference(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong sr_j)
				{
					const EarthView::World::Spatial::Geometry::ISpatialReference *sr = (const EarthView::World::Spatial::Geometry::ISpatialReference*) sr_j;
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCVectorFeatureClassPostGisOperatorProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::setSpatialReference(sr);
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_geodataset_VectorFeatureClassPostGisOperator_register_1setSpatialReference_1ISpatialReference(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCVectorFeatureClassPostGisOperatorProxy *pObjectX = (JCVectorFeatureClassPostGisOperatorProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_geodataset_VectorFeatureClassPostGisOperator_setSpatialReference_1ISpatialReference_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong sr_j)
				{
					const EarthView::World::Spatial::Geometry::ISpatialReference *sr = (const EarthView::World::Spatial::Geometry::ISpatialReference*) sr_j;
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::setSpatialReference(sr);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_geodataset_VectorFeatureClassPostGisOperator_getGeomStremType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCVectorFeatureClassPostGisOperatorProxy))
					{
						int __values1 = pObjectX->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::getGeomStremType();
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
					else
					{
						int __values1 = pObjectX->getGeomStremType();
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_geodataset_VectorFeatureClassPostGisOperator_register_1getGeomStremType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCVectorFeatureClassPostGisOperatorProxy *pObjectX = (JCVectorFeatureClassPostGisOperatorProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getGeomStremType_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getGeomStremType_void_callback", "()I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_geodataset_VectorFeatureClassPostGisOperator_getGeomStremType_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjXXXX;
					int __values1 = pObjectX->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::getGeomStremType();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
			}
		}
	}
}
