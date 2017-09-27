/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialinterface/iqueryfilter.h"
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
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial_geodataset_EVSpatialQueryRelationTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						EVSQRelTypeUnknown,
						EVSQRelTypeIntersects,
						EVSQRelTypeTouches,
						EVSQRelTypeOverlaps,
						EVSQRelTypeCrosses,
						EVSQRelTypeWithin,
						EVSQRelTypeContains,
						EVSQRelTypeEnvelopeIntersects,
						EVSQRelTypeCustom
					};
					jintArray array = __env->NewIntArray(9);
					__env->SetIntArrayRegion(array, 0, 9, enum_values);
					return array;
				}
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial_geodataset_EVQueryModeTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						EVQueryModeUnknown,
						EVQueryModeAttribute,
						EVQueryModeSpatial,
						EVQueryModeAttributeAndSpatial
					};
					jintArray array = __env->NewIntArray(4);
					__env->SetIntArrayRegion(array, 0, 4, enum_values);
					return array;
				}
				class JIQueryFilterProxy : public EarthView::World::Spatial::GeoDataset::IQueryFilter
				{
				 private:
					EarthView::World::Core::ev_string m_getFieldName_void_callback;
					EarthView::World::Core::ev_string m_getWhereClause_void_callback;
					EarthView::World::Core::ev_string m_getLimitNum_void_callback;
					EarthView::World::Core::ev_string m_getOffsetNum_void_callback;
					EarthView::World::Core::ev_string m_getQueryGeometryRef_void_callback;
					EarthView::World::Core::ev_string m_getSpatialRelation_void_callback;
					EarthView::World::Core::ev_string m_getQueryMode_void_callback;
					EarthView::World::Core::ev_string m_setFieldName_EVString_callback;
					EarthView::World::Core::ev_string m_setWhereClause_EVString_callback;
					EarthView::World::Core::ev_string m_setLimitNum_ev_uint32_callback;
					EarthView::World::Core::ev_string m_setOffsetNum_ev_uint32_callback;
					EarthView::World::Core::ev_string m_setQueryGeometry_IGeometry_callback;
					EarthView::World::Core::ev_string m_setQueryMode_EVQueryModeType_callback;
					EarthView::World::Core::ev_string m_setSpatialRelation_EVSpatialQueryRelationType_callback;
					EarthView::World::Core::ev_string m_ev_clone_void_callback;
				public:
					JIQueryFilterProxy(EarthView::World::Core::CNameValuePairList *pList) : IQueryFilter(pList)
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
					void register_getFieldName_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getFieldName_void_callback = __method;
					}
					void register_getWhereClause_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getWhereClause_void_callback = __method;
					}
					void register_getLimitNum_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getLimitNum_void_callback = __method;
					}
					void register_getOffsetNum_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getOffsetNum_void_callback = __method;
					}
					void register_getQueryGeometryRef_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getQueryGeometryRef_void_callback = __method;
					}
					void register_getSpatialRelation_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getSpatialRelation_void_callback = __method;
					}
					void register_getQueryMode_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getQueryMode_void_callback = __method;
					}
					void register_setFieldName_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setFieldName_EVString_callback = __method;
					}
					void register_setWhereClause_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setWhereClause_EVString_callback = __method;
					}
					void register_setLimitNum_ev_uint32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setLimitNum_ev_uint32_callback = __method;
					}
					void register_setOffsetNum_ev_uint32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setOffsetNum_ev_uint32_callback = __method;
					}
					void register_setQueryGeometry_IGeometry_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setQueryGeometry_IGeometry_callback = __method;
					}
					void register_setQueryMode_EVQueryModeType_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setQueryMode_EVQueryModeType_callback = __method;
					}
					void register_setSpatialRelation_EVSpatialQueryRelationType_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setSpatialRelation_EVSpatialQueryRelationType_callback = __method;
					}
					void register_ev_clone_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_ev_clone_void_callback = __method;
					}
					virtual EVString getFieldName() const
					{
						if (this->_gRef != NULL && this->m_getFieldName_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getFieldName_void_callback");
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
							return this->IQueryFilter::getFieldName();
						}
					}
					virtual EVString getWhereClause() const
					{
						if (this->_gRef != NULL && this->m_getWhereClause_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getWhereClause_void_callback");
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
							return this->IQueryFilter::getWhereClause();
						}
					}
					virtual ev_uint32 getLimitNum() const
					{
						if (this->_gRef != NULL && this->m_getLimitNum_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getLimitNum_void_callback");
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
							return this->IQueryFilter::getLimitNum();
						}
					}
					virtual ev_uint32 getOffsetNum() const
					{
						if (this->_gRef != NULL && this->m_getOffsetNum_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getOffsetNum_void_callback");
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
							return this->IQueryFilter::getOffsetNum();
						}
					}
					virtual const EarthView::World::Spatial::Geometry::IGeometry* getQueryGeometryRef() const
					{
						if (this->_gRef != NULL && this->m_getQueryGeometryRef_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getQueryGeometryRef_void_callback");
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
							return this->IQueryFilter::getQueryGeometryRef();
						}
					}
					virtual EarthView::World::Spatial::GeoDataset::EVSpatialQueryRelationType getSpatialRelation()
					{
						if (this->_gRef != NULL && this->m_getSpatialRelation_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getSpatialRelation_void_callback");
							jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::GeoDataset::EVSpatialQueryRelationType __values1 = (EarthView::World::Spatial::GeoDataset::EVSpatialQueryRelationType) __values1_j;
							return __values1;
						}
						else
						{
							return this->IQueryFilter::getSpatialRelation();
						}
					}
					virtual EarthView::World::Spatial::GeoDataset::EVQueryModeType getQueryMode() const
					{
						if (this->_gRef != NULL && this->m_getQueryMode_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getQueryMode_void_callback");
							jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::GeoDataset::EVQueryModeType __values1 = (EarthView::World::Spatial::GeoDataset::EVQueryModeType) __values1_j;
							return __values1;
						}
						else
						{
							return this->IQueryFilter::getQueryMode();
						}
					}
					virtual void setFieldName(const EVString& names)
					{
						if (this->_gRef != NULL && this->m_setFieldName_EVString_callback != "" && this->isCustomExtend())
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
							EarthView::World::Core::ev_wstring names_wch = names;
							jstring names_j = __env->NewString((const jchar*)names_wch.getString(), names_wch.size());
							jmethodID __method = __gr->getMethod("setFieldName_EVString_callback");
							__env->CallVoidMethod(__obj, __method , names_j);
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
							return this->IQueryFilter::setFieldName(names);
						}
					}
					virtual void setWhereClause(const EVString& whereclause)
					{
						if (this->_gRef != NULL && this->m_setWhereClause_EVString_callback != "" && this->isCustomExtend())
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
							EarthView::World::Core::ev_wstring whereclause_wch = whereclause;
							jstring whereclause_j = __env->NewString((const jchar*)whereclause_wch.getString(), whereclause_wch.size());
							jmethodID __method = __gr->getMethod("setWhereClause_EVString_callback");
							__env->CallVoidMethod(__obj, __method , whereclause_j);
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
							return this->IQueryFilter::setWhereClause(whereclause);
						}
					}
					virtual void setLimitNum(ev_uint32 limit)
					{
						if (this->_gRef != NULL && this->m_setLimitNum_ev_uint32_callback != "" && this->isCustomExtend())
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
							jlong limit_j = (jlong) limit;
							jmethodID __method = __gr->getMethod("setLimitNum_ev_uint32_callback");
							__env->CallVoidMethod(__obj, __method , limit_j);
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
							return this->IQueryFilter::setLimitNum(limit);
						}
					}
					virtual void setOffsetNum(ev_uint32 offset)
					{
						if (this->_gRef != NULL && this->m_setOffsetNum_ev_uint32_callback != "" && this->isCustomExtend())
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
							jlong offset_j = (jlong) offset;
							jmethodID __method = __gr->getMethod("setOffsetNum_ev_uint32_callback");
							__env->CallVoidMethod(__obj, __method , offset_j);
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
							return this->IQueryFilter::setOffsetNum(offset);
						}
					}
					virtual void setQueryGeometry(const EarthView::World::Spatial::Geometry::IGeometry* geometry)
					{
						if (this->_gRef != NULL && this->m_setQueryGeometry_IGeometry_callback != "" && this->isCustomExtend())
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
							jlong geometry_j = (jlong) geometry;
							jmethodID __method = __gr->getMethod("setQueryGeometry_IGeometry_callback");
							__env->CallVoidMethod(__obj, __method , geometry_j);
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
							return this->IQueryFilter::setQueryGeometry(geometry);
						}
					}
					virtual void setQueryMode(EarthView::World::Spatial::GeoDataset::EVQueryModeType queryMode)
					{
						if (this->_gRef != NULL && this->m_setQueryMode_EVQueryModeType_callback != "" && this->isCustomExtend())
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
							jint queryMode_j = (jint) queryMode;
							jmethodID __method = __gr->getMethod("setQueryMode_EVQueryModeType_callback");
							__env->CallVoidMethod(__obj, __method , queryMode_j);
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
							return this->IQueryFilter::setQueryMode(queryMode);
						}
					}
					virtual void setSpatialRelation(EarthView::World::Spatial::GeoDataset::EVSpatialQueryRelationType spatialRelType)
					{
						if (this->_gRef != NULL && this->m_setSpatialRelation_EVSpatialQueryRelationType_callback != "" && this->isCustomExtend())
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
							jint spatialRelType_j = (jint) spatialRelType;
							jmethodID __method = __gr->getMethod("setSpatialRelation_EVSpatialQueryRelationType_callback");
							__env->CallVoidMethod(__obj, __method , spatialRelType_j);
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
							return this->IQueryFilter::setSpatialRelation(spatialRelType);
						}
					}
					virtual EarthView::World::Spatial::GeoDataset::IQueryFilter* clone() const
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
							EarthView::World::Spatial::GeoDataset::IQueryFilter *__values1 = (EarthView::World::Spatial::GeoDataset::IQueryFilter*) __values1_j;
							return __values1;
						}
						else
						{
							return this->IQueryFilter::clone();
						}
					}
				};
				REGISTER_FACTORY_CLASS(JIQueryFilterProxy);
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_geodataset_Iqueryfilter_getFieldName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::GeoDataset::IQueryFilter *pObjectX = (EarthView::World::Spatial::GeoDataset::IQueryFilter*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIQueryFilterProxy))
					{
						EVString __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::IQueryFilter::getFieldName();
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
					else
					{
						EVString __values1 = pObjectX->getFieldName();
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_Iqueryfilter_register_1getFieldName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIQueryFilterProxy *pObjectX = (JIQueryFilterProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getFieldName_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getFieldName_void_callback", "()Ljava/lang/String;");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_geodataset_Iqueryfilter_getFieldName_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::GeoDataset::IQueryFilter *pObjectX = (EarthView::World::Spatial::GeoDataset::IQueryFilter*) pObjXXXX;
					EVString __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::IQueryFilter::getFieldName();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_geodataset_Iqueryfilter_getWhereClause_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::GeoDataset::IQueryFilter *pObjectX = (EarthView::World::Spatial::GeoDataset::IQueryFilter*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIQueryFilterProxy))
					{
						EVString __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::IQueryFilter::getWhereClause();
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
					else
					{
						EVString __values1 = pObjectX->getWhereClause();
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_Iqueryfilter_register_1getWhereClause_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIQueryFilterProxy *pObjectX = (JIQueryFilterProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getWhereClause_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getWhereClause_void_callback", "()Ljava/lang/String;");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_geodataset_Iqueryfilter_getWhereClause_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::GeoDataset::IQueryFilter *pObjectX = (EarthView::World::Spatial::GeoDataset::IQueryFilter*) pObjXXXX;
					EVString __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::IQueryFilter::getWhereClause();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geodataset_Iqueryfilter_getLimitNum_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::GeoDataset::IQueryFilter *pObjectX = (EarthView::World::Spatial::GeoDataset::IQueryFilter*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIQueryFilterProxy))
					{
						ev_uint32 __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::IQueryFilter::getLimitNum();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						ev_uint32 __values1 = pObjectX->getLimitNum();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_Iqueryfilter_register_1getLimitNum_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIQueryFilterProxy *pObjectX = (JIQueryFilterProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getLimitNum_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getLimitNum_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geodataset_Iqueryfilter_getLimitNum_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::GeoDataset::IQueryFilter *pObjectX = (EarthView::World::Spatial::GeoDataset::IQueryFilter*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::IQueryFilter::getLimitNum();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geodataset_Iqueryfilter_getOffsetNum_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::GeoDataset::IQueryFilter *pObjectX = (EarthView::World::Spatial::GeoDataset::IQueryFilter*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIQueryFilterProxy))
					{
						ev_uint32 __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::IQueryFilter::getOffsetNum();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						ev_uint32 __values1 = pObjectX->getOffsetNum();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_Iqueryfilter_register_1getOffsetNum_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIQueryFilterProxy *pObjectX = (JIQueryFilterProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getOffsetNum_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getOffsetNum_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geodataset_Iqueryfilter_getOffsetNum_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::GeoDataset::IQueryFilter *pObjectX = (EarthView::World::Spatial::GeoDataset::IQueryFilter*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::IQueryFilter::getOffsetNum();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geodataset_Iqueryfilter_getQueryGeometryRef_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::GeoDataset::IQueryFilter *pObjectX = (EarthView::World::Spatial::GeoDataset::IQueryFilter*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIQueryFilterProxy))
					{
						const EarthView::World::Spatial::Geometry::IGeometry* __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::IQueryFilter::getQueryGeometryRef();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						const EarthView::World::Spatial::Geometry::IGeometry* __values1 = pObjectX->getQueryGeometryRef();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_Iqueryfilter_register_1getQueryGeometryRef_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIQueryFilterProxy *pObjectX = (JIQueryFilterProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getQueryGeometryRef_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getQueryGeometryRef_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geodataset_Iqueryfilter_getQueryGeometryRef_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::GeoDataset::IQueryFilter *pObjectX = (EarthView::World::Spatial::GeoDataset::IQueryFilter*) pObjXXXX;
					const EarthView::World::Spatial::Geometry::IGeometry* __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::IQueryFilter::getQueryGeometryRef();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_geodataset_Iqueryfilter_getSpatialRelation_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::GeoDataset::IQueryFilter *pObjectX = (EarthView::World::Spatial::GeoDataset::IQueryFilter*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIQueryFilterProxy))
					{
						EarthView::World::Spatial::GeoDataset::EVSpatialQueryRelationType __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::IQueryFilter::getSpatialRelation();
						jint __values1_j = (jint) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::EVSpatialQueryRelationType __values1 = pObjectX->getSpatialRelation();
						jint __values1_j = (jint) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_Iqueryfilter_register_1getSpatialRelation_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIQueryFilterProxy *pObjectX = (JIQueryFilterProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getSpatialRelation_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getSpatialRelation_void_callback", "()I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_geodataset_Iqueryfilter_getSpatialRelation_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::GeoDataset::IQueryFilter *pObjectX = (EarthView::World::Spatial::GeoDataset::IQueryFilter*) pObjXXXX;
					EarthView::World::Spatial::GeoDataset::EVSpatialQueryRelationType __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::IQueryFilter::getSpatialRelation();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_geodataset_Iqueryfilter_getQueryMode_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::GeoDataset::IQueryFilter *pObjectX = (EarthView::World::Spatial::GeoDataset::IQueryFilter*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIQueryFilterProxy))
					{
						EarthView::World::Spatial::GeoDataset::EVQueryModeType __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::IQueryFilter::getQueryMode();
						jint __values1_j = (jint) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::EVQueryModeType __values1 = pObjectX->getQueryMode();
						jint __values1_j = (jint) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_Iqueryfilter_register_1getQueryMode_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIQueryFilterProxy *pObjectX = (JIQueryFilterProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getQueryMode_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getQueryMode_void_callback", "()I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_geodataset_Iqueryfilter_getQueryMode_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::GeoDataset::IQueryFilter *pObjectX = (EarthView::World::Spatial::GeoDataset::IQueryFilter*) pObjXXXX;
					EarthView::World::Spatial::GeoDataset::EVQueryModeType __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::IQueryFilter::getQueryMode();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_Iqueryfilter_setFieldName_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring names_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* names_ch = (const ev_char*)__env->GetStringUTFChars(names_j,JNI_FALSE);
					const EVString names = names_ch;
					__env->ReleaseStringUTFChars(names_j, (const char *)names_ch);
					#else
					const ev_wchar* names_ch = (const ev_wchar*)__env->GetStringChars(names_j,JNI_FALSE);
					const EVString names = names_ch;
					__env->ReleaseStringChars(names_j, (const jchar *)names_ch);
					#endif
					EarthView::World::Spatial::GeoDataset::IQueryFilter *pObjectX = (EarthView::World::Spatial::GeoDataset::IQueryFilter*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIQueryFilterProxy))
					{
						pObjectX->EarthView::World::Spatial::GeoDataset::IQueryFilter::setFieldName(names);
					}
					else
					{
						pObjectX->setFieldName(names);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_Iqueryfilter_register_1setFieldName_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIQueryFilterProxy *pObjectX = (JIQueryFilterProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setFieldName_EVString_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setFieldName_EVString_callback", "(Ljava/lang/String;)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_Iqueryfilter_setFieldName_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring names_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* names_ch = (const ev_char*)__env->GetStringUTFChars(names_j,JNI_FALSE);
					const EVString names = names_ch;
					__env->ReleaseStringUTFChars(names_j, (const char *)names_ch);
					#else
					const ev_wchar* names_ch = (const ev_wchar*)__env->GetStringChars(names_j,JNI_FALSE);
					const EVString names = names_ch;
					__env->ReleaseStringChars(names_j, (const jchar *)names_ch);
					#endif
					EarthView::World::Spatial::GeoDataset::IQueryFilter *pObjectX = (EarthView::World::Spatial::GeoDataset::IQueryFilter*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::GeoDataset::IQueryFilter::setFieldName(names);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_Iqueryfilter_setWhereClause_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring whereclause_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* whereclause_ch = (const ev_char*)__env->GetStringUTFChars(whereclause_j,JNI_FALSE);
					const EVString whereclause = whereclause_ch;
					__env->ReleaseStringUTFChars(whereclause_j, (const char *)whereclause_ch);
					#else
					const ev_wchar* whereclause_ch = (const ev_wchar*)__env->GetStringChars(whereclause_j,JNI_FALSE);
					const EVString whereclause = whereclause_ch;
					__env->ReleaseStringChars(whereclause_j, (const jchar *)whereclause_ch);
					#endif
					EarthView::World::Spatial::GeoDataset::IQueryFilter *pObjectX = (EarthView::World::Spatial::GeoDataset::IQueryFilter*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIQueryFilterProxy))
					{
						pObjectX->EarthView::World::Spatial::GeoDataset::IQueryFilter::setWhereClause(whereclause);
					}
					else
					{
						pObjectX->setWhereClause(whereclause);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_Iqueryfilter_register_1setWhereClause_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIQueryFilterProxy *pObjectX = (JIQueryFilterProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setWhereClause_EVString_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setWhereClause_EVString_callback", "(Ljava/lang/String;)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_Iqueryfilter_setWhereClause_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring whereclause_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* whereclause_ch = (const ev_char*)__env->GetStringUTFChars(whereclause_j,JNI_FALSE);
					const EVString whereclause = whereclause_ch;
					__env->ReleaseStringUTFChars(whereclause_j, (const char *)whereclause_ch);
					#else
					const ev_wchar* whereclause_ch = (const ev_wchar*)__env->GetStringChars(whereclause_j,JNI_FALSE);
					const EVString whereclause = whereclause_ch;
					__env->ReleaseStringChars(whereclause_j, (const jchar *)whereclause_ch);
					#endif
					EarthView::World::Spatial::GeoDataset::IQueryFilter *pObjectX = (EarthView::World::Spatial::GeoDataset::IQueryFilter*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::GeoDataset::IQueryFilter::setWhereClause(whereclause);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_Iqueryfilter_setLimitNum_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong limit_j)
				{
					ev_uint32 limit = (ev_uint32) limit_j;
					EarthView::World::Spatial::GeoDataset::IQueryFilter *pObjectX = (EarthView::World::Spatial::GeoDataset::IQueryFilter*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIQueryFilterProxy))
					{
						pObjectX->EarthView::World::Spatial::GeoDataset::IQueryFilter::setLimitNum(limit);
					}
					else
					{
						pObjectX->setLimitNum(limit);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_Iqueryfilter_register_1setLimitNum_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIQueryFilterProxy *pObjectX = (JIQueryFilterProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setLimitNum_ev_uint32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setLimitNum_ev_uint32_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_Iqueryfilter_setLimitNum_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong limit_j)
				{
					ev_uint32 limit = (ev_uint32) limit_j;
					EarthView::World::Spatial::GeoDataset::IQueryFilter *pObjectX = (EarthView::World::Spatial::GeoDataset::IQueryFilter*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::GeoDataset::IQueryFilter::setLimitNum(limit);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_Iqueryfilter_setOffsetNum_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong offset_j)
				{
					ev_uint32 offset = (ev_uint32) offset_j;
					EarthView::World::Spatial::GeoDataset::IQueryFilter *pObjectX = (EarthView::World::Spatial::GeoDataset::IQueryFilter*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIQueryFilterProxy))
					{
						pObjectX->EarthView::World::Spatial::GeoDataset::IQueryFilter::setOffsetNum(offset);
					}
					else
					{
						pObjectX->setOffsetNum(offset);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_Iqueryfilter_register_1setOffsetNum_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIQueryFilterProxy *pObjectX = (JIQueryFilterProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setOffsetNum_ev_uint32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setOffsetNum_ev_uint32_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_Iqueryfilter_setOffsetNum_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong offset_j)
				{
					ev_uint32 offset = (ev_uint32) offset_j;
					EarthView::World::Spatial::GeoDataset::IQueryFilter *pObjectX = (EarthView::World::Spatial::GeoDataset::IQueryFilter*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::GeoDataset::IQueryFilter::setOffsetNum(offset);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_Iqueryfilter_setQueryGeometry_1IGeometry(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong geometry_j)
				{
					const EarthView::World::Spatial::Geometry::IGeometry *geometry = (const EarthView::World::Spatial::Geometry::IGeometry*) geometry_j;
					EarthView::World::Spatial::GeoDataset::IQueryFilter *pObjectX = (EarthView::World::Spatial::GeoDataset::IQueryFilter*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIQueryFilterProxy))
					{
						pObjectX->EarthView::World::Spatial::GeoDataset::IQueryFilter::setQueryGeometry(geometry);
					}
					else
					{
						pObjectX->setQueryGeometry(geometry);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_Iqueryfilter_register_1setQueryGeometry_1IGeometry(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIQueryFilterProxy *pObjectX = (JIQueryFilterProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setQueryGeometry_IGeometry_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setQueryGeometry_IGeometry_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_Iqueryfilter_setQueryGeometry_1IGeometry_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong geometry_j)
				{
					const EarthView::World::Spatial::Geometry::IGeometry *geometry = (const EarthView::World::Spatial::Geometry::IGeometry*) geometry_j;
					EarthView::World::Spatial::GeoDataset::IQueryFilter *pObjectX = (EarthView::World::Spatial::GeoDataset::IQueryFilter*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::GeoDataset::IQueryFilter::setQueryGeometry(geometry);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_Iqueryfilter_setQueryMode_1EVQueryModeType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint queryMode_j)
				{
					EarthView::World::Spatial::GeoDataset::EVQueryModeType queryMode = (EarthView::World::Spatial::GeoDataset::EVQueryModeType) queryMode_j;
					EarthView::World::Spatial::GeoDataset::IQueryFilter *pObjectX = (EarthView::World::Spatial::GeoDataset::IQueryFilter*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIQueryFilterProxy))
					{
						pObjectX->EarthView::World::Spatial::GeoDataset::IQueryFilter::setQueryMode(queryMode);
					}
					else
					{
						pObjectX->setQueryMode(queryMode);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_Iqueryfilter_register_1setQueryMode_1EVQueryModeType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIQueryFilterProxy *pObjectX = (JIQueryFilterProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setQueryMode_EVQueryModeType_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setQueryMode_EVQueryModeType_callback", "(I)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_Iqueryfilter_setQueryMode_1EVQueryModeType_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint queryMode_j)
				{
					EarthView::World::Spatial::GeoDataset::EVQueryModeType queryMode = (EarthView::World::Spatial::GeoDataset::EVQueryModeType) queryMode_j;
					EarthView::World::Spatial::GeoDataset::IQueryFilter *pObjectX = (EarthView::World::Spatial::GeoDataset::IQueryFilter*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::GeoDataset::IQueryFilter::setQueryMode(queryMode);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_Iqueryfilter_setSpatialRelation_1EVSpatialQueryRelationType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint spatialRelType_j)
				{
					EarthView::World::Spatial::GeoDataset::EVSpatialQueryRelationType spatialRelType = (EarthView::World::Spatial::GeoDataset::EVSpatialQueryRelationType) spatialRelType_j;
					EarthView::World::Spatial::GeoDataset::IQueryFilter *pObjectX = (EarthView::World::Spatial::GeoDataset::IQueryFilter*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIQueryFilterProxy))
					{
						pObjectX->EarthView::World::Spatial::GeoDataset::IQueryFilter::setSpatialRelation(spatialRelType);
					}
					else
					{
						pObjectX->setSpatialRelation(spatialRelType);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_Iqueryfilter_register_1setSpatialRelation_1EVSpatialQueryRelationType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIQueryFilterProxy *pObjectX = (JIQueryFilterProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setSpatialRelation_EVSpatialQueryRelationType_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setSpatialRelation_EVSpatialQueryRelationType_callback", "(I)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_Iqueryfilter_setSpatialRelation_1EVSpatialQueryRelationType_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint spatialRelType_j)
				{
					EarthView::World::Spatial::GeoDataset::EVSpatialQueryRelationType spatialRelType = (EarthView::World::Spatial::GeoDataset::EVSpatialQueryRelationType) spatialRelType_j;
					EarthView::World::Spatial::GeoDataset::IQueryFilter *pObjectX = (EarthView::World::Spatial::GeoDataset::IQueryFilter*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::GeoDataset::IQueryFilter::setSpatialRelation(spatialRelType);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geodataset_Iqueryfilter_ev_1clone_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::GeoDataset::IQueryFilter *pObjectX = (EarthView::World::Spatial::GeoDataset::IQueryFilter*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIQueryFilterProxy))
					{
						EarthView::World::Spatial::GeoDataset::IQueryFilter* __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::IQueryFilter::clone();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IQueryFilter* __values1 = pObjectX->clone();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_Iqueryfilter_register_1ev_1clone_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIQueryFilterProxy *pObjectX = (JIQueryFilterProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geodataset_Iqueryfilter_ev_1clone_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::GeoDataset::IQueryFilter *pObjectX = (EarthView::World::Spatial::GeoDataset::IQueryFilter*) pObjXXXX;
					EarthView::World::Spatial::GeoDataset::IQueryFilter* __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::IQueryFilter::clone();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
		}
	}
}
