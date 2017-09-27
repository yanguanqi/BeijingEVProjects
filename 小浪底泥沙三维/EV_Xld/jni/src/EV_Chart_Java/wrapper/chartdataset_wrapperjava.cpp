/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "chart/chartdataset.h"
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
			namespace Display
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
			namespace Atlas
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
			namespace GeoDataset
			{
				class JCChartQueryFilterProxy : public EarthView::World::Spatial::GeoDataset::CChartQueryFilter
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
					JCChartQueryFilterProxy(EarthView::World::Core::CNameValuePairList *pList) : CChartQueryFilter(pList)
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
							return this->CChartQueryFilter::getFieldName();
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
							return this->CChartQueryFilter::getWhereClause();
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
							return this->CChartQueryFilter::getLimitNum();
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
							return this->CChartQueryFilter::getOffsetNum();
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
							return this->CChartQueryFilter::getQueryGeometryRef();
						}
					}
					virtual EarthView::World::Spatial::GeoDataset::EVQueryModeType getQueryMode()
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
							return this->CChartQueryFilter::getQueryMode();
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
							return this->CChartQueryFilter::getSpatialRelation();
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
							return this->CChartQueryFilter::setFieldName(names);
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
							return this->CChartQueryFilter::setWhereClause(whereclause);
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
							return this->CChartQueryFilter::setLimitNum(limit);
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
							return this->CChartQueryFilter::setOffsetNum(offset);
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
							return this->CChartQueryFilter::setQueryGeometry(geometry);
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
							return this->CChartQueryFilter::setQueryMode(queryMode);
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
							return this->CChartQueryFilter::setSpatialRelation(spatialRelType);
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
							return this->CChartQueryFilter::clone();
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCChartQueryFilterProxy);
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_geodataset_ChartQueryFilter_getFieldName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::GeoDataset::CChartQueryFilter *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartQueryFilter*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartQueryFilterProxy))
					{
						EVString __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::CChartQueryFilter::getFieldName();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_ChartQueryFilter_register_1getFieldName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartQueryFilterProxy *pObjectX = (JCChartQueryFilterProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_geodataset_ChartQueryFilter_getFieldName_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::GeoDataset::CChartQueryFilter *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartQueryFilter*) pObjXXXX;
					EVString __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::CChartQueryFilter::getFieldName();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_geodataset_ChartQueryFilter_getWhereClause_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::GeoDataset::CChartQueryFilter *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartQueryFilter*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartQueryFilterProxy))
					{
						EVString __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::CChartQueryFilter::getWhereClause();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_ChartQueryFilter_register_1getWhereClause_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartQueryFilterProxy *pObjectX = (JCChartQueryFilterProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_geodataset_ChartQueryFilter_getWhereClause_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::GeoDataset::CChartQueryFilter *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartQueryFilter*) pObjXXXX;
					EVString __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::CChartQueryFilter::getWhereClause();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geodataset_ChartQueryFilter_getLimitNum_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::GeoDataset::CChartQueryFilter *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartQueryFilter*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartQueryFilterProxy))
					{
						ev_uint32 __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::CChartQueryFilter::getLimitNum();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_ChartQueryFilter_register_1getLimitNum_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartQueryFilterProxy *pObjectX = (JCChartQueryFilterProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geodataset_ChartQueryFilter_getLimitNum_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::GeoDataset::CChartQueryFilter *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartQueryFilter*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::CChartQueryFilter::getLimitNum();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geodataset_ChartQueryFilter_getOffsetNum_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::GeoDataset::CChartQueryFilter *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartQueryFilter*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartQueryFilterProxy))
					{
						ev_uint32 __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::CChartQueryFilter::getOffsetNum();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_ChartQueryFilter_register_1getOffsetNum_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartQueryFilterProxy *pObjectX = (JCChartQueryFilterProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geodataset_ChartQueryFilter_getOffsetNum_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::GeoDataset::CChartQueryFilter *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartQueryFilter*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::CChartQueryFilter::getOffsetNum();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geodataset_ChartQueryFilter_getQueryGeometryRef_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::GeoDataset::CChartQueryFilter *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartQueryFilter*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartQueryFilterProxy))
					{
						const EarthView::World::Spatial::Geometry::IGeometry* __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::CChartQueryFilter::getQueryGeometryRef();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_ChartQueryFilter_register_1getQueryGeometryRef_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartQueryFilterProxy *pObjectX = (JCChartQueryFilterProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geodataset_ChartQueryFilter_getQueryGeometryRef_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::GeoDataset::CChartQueryFilter *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartQueryFilter*) pObjXXXX;
					const EarthView::World::Spatial::Geometry::IGeometry* __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::CChartQueryFilter::getQueryGeometryRef();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_geodataset_ChartQueryFilter_getQueryMode_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::GeoDataset::CChartQueryFilter *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartQueryFilter*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartQueryFilterProxy))
					{
						EarthView::World::Spatial::GeoDataset::EVQueryModeType __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::CChartQueryFilter::getQueryMode();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_ChartQueryFilter_register_1getQueryMode_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartQueryFilterProxy *pObjectX = (JCChartQueryFilterProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_geodataset_ChartQueryFilter_getQueryMode_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::GeoDataset::CChartQueryFilter *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartQueryFilter*) pObjXXXX;
					EarthView::World::Spatial::GeoDataset::EVQueryModeType __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::CChartQueryFilter::getQueryMode();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_geodataset_ChartQueryFilter_getSpatialRelation_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::GeoDataset::CChartQueryFilter *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartQueryFilter*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartQueryFilterProxy))
					{
						EarthView::World::Spatial::GeoDataset::EVSpatialQueryRelationType __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::CChartQueryFilter::getSpatialRelation();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_ChartQueryFilter_register_1getSpatialRelation_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartQueryFilterProxy *pObjectX = (JCChartQueryFilterProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_geodataset_ChartQueryFilter_getSpatialRelation_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::GeoDataset::CChartQueryFilter *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartQueryFilter*) pObjXXXX;
					EarthView::World::Spatial::GeoDataset::EVSpatialQueryRelationType __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::CChartQueryFilter::getSpatialRelation();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_ChartQueryFilter_setFieldName_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring names_j)
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
					EarthView::World::Spatial::GeoDataset::CChartQueryFilter *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartQueryFilter*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartQueryFilterProxy))
					{
						pObjectX->EarthView::World::Spatial::GeoDataset::CChartQueryFilter::setFieldName(names);
					}
					else
					{
						pObjectX->setFieldName(names);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_ChartQueryFilter_register_1setFieldName_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartQueryFilterProxy *pObjectX = (JCChartQueryFilterProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_ChartQueryFilter_setFieldName_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring names_j)
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
					EarthView::World::Spatial::GeoDataset::CChartQueryFilter *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartQueryFilter*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::GeoDataset::CChartQueryFilter::setFieldName(names);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_ChartQueryFilter_setWhereClause_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring whereclause_j)
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
					EarthView::World::Spatial::GeoDataset::CChartQueryFilter *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartQueryFilter*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartQueryFilterProxy))
					{
						pObjectX->EarthView::World::Spatial::GeoDataset::CChartQueryFilter::setWhereClause(whereclause);
					}
					else
					{
						pObjectX->setWhereClause(whereclause);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_ChartQueryFilter_register_1setWhereClause_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartQueryFilterProxy *pObjectX = (JCChartQueryFilterProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_ChartQueryFilter_setWhereClause_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring whereclause_j)
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
					EarthView::World::Spatial::GeoDataset::CChartQueryFilter *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartQueryFilter*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::GeoDataset::CChartQueryFilter::setWhereClause(whereclause);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_ChartQueryFilter_setLimitNum_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong limit_j)
				{
					ev_uint32 limit = (ev_uint32) limit_j;
					EarthView::World::Spatial::GeoDataset::CChartQueryFilter *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartQueryFilter*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartQueryFilterProxy))
					{
						pObjectX->EarthView::World::Spatial::GeoDataset::CChartQueryFilter::setLimitNum(limit);
					}
					else
					{
						pObjectX->setLimitNum(limit);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_ChartQueryFilter_register_1setLimitNum_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartQueryFilterProxy *pObjectX = (JCChartQueryFilterProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_ChartQueryFilter_setLimitNum_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong limit_j)
				{
					ev_uint32 limit = (ev_uint32) limit_j;
					EarthView::World::Spatial::GeoDataset::CChartQueryFilter *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartQueryFilter*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::GeoDataset::CChartQueryFilter::setLimitNum(limit);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_ChartQueryFilter_setOffsetNum_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong offset_j)
				{
					ev_uint32 offset = (ev_uint32) offset_j;
					EarthView::World::Spatial::GeoDataset::CChartQueryFilter *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartQueryFilter*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartQueryFilterProxy))
					{
						pObjectX->EarthView::World::Spatial::GeoDataset::CChartQueryFilter::setOffsetNum(offset);
					}
					else
					{
						pObjectX->setOffsetNum(offset);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_ChartQueryFilter_register_1setOffsetNum_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartQueryFilterProxy *pObjectX = (JCChartQueryFilterProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_ChartQueryFilter_setOffsetNum_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong offset_j)
				{
					ev_uint32 offset = (ev_uint32) offset_j;
					EarthView::World::Spatial::GeoDataset::CChartQueryFilter *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartQueryFilter*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::GeoDataset::CChartQueryFilter::setOffsetNum(offset);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_ChartQueryFilter_setQueryGeometry_1IGeometry(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong geometry_j)
				{
					const EarthView::World::Spatial::Geometry::IGeometry *geometry = (const EarthView::World::Spatial::Geometry::IGeometry*) geometry_j;
					EarthView::World::Spatial::GeoDataset::CChartQueryFilter *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartQueryFilter*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartQueryFilterProxy))
					{
						pObjectX->EarthView::World::Spatial::GeoDataset::CChartQueryFilter::setQueryGeometry(geometry);
					}
					else
					{
						pObjectX->setQueryGeometry(geometry);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_ChartQueryFilter_register_1setQueryGeometry_1IGeometry(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartQueryFilterProxy *pObjectX = (JCChartQueryFilterProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_ChartQueryFilter_setQueryGeometry_1IGeometry_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong geometry_j)
				{
					const EarthView::World::Spatial::Geometry::IGeometry *geometry = (const EarthView::World::Spatial::Geometry::IGeometry*) geometry_j;
					EarthView::World::Spatial::GeoDataset::CChartQueryFilter *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartQueryFilter*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::GeoDataset::CChartQueryFilter::setQueryGeometry(geometry);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_ChartQueryFilter_setQueryMode_1EVQueryModeType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint queryMode_j)
				{
					EarthView::World::Spatial::GeoDataset::EVQueryModeType queryMode = (EarthView::World::Spatial::GeoDataset::EVQueryModeType) queryMode_j;
					EarthView::World::Spatial::GeoDataset::CChartQueryFilter *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartQueryFilter*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartQueryFilterProxy))
					{
						pObjectX->EarthView::World::Spatial::GeoDataset::CChartQueryFilter::setQueryMode(queryMode);
					}
					else
					{
						pObjectX->setQueryMode(queryMode);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_ChartQueryFilter_register_1setQueryMode_1EVQueryModeType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartQueryFilterProxy *pObjectX = (JCChartQueryFilterProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_ChartQueryFilter_setQueryMode_1EVQueryModeType_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint queryMode_j)
				{
					EarthView::World::Spatial::GeoDataset::EVQueryModeType queryMode = (EarthView::World::Spatial::GeoDataset::EVQueryModeType) queryMode_j;
					EarthView::World::Spatial::GeoDataset::CChartQueryFilter *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartQueryFilter*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::GeoDataset::CChartQueryFilter::setQueryMode(queryMode);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_ChartQueryFilter_setSpatialRelation_1EVSpatialQueryRelationType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint spatialRelType_j)
				{
					EarthView::World::Spatial::GeoDataset::EVSpatialQueryRelationType spatialRelType = (EarthView::World::Spatial::GeoDataset::EVSpatialQueryRelationType) spatialRelType_j;
					EarthView::World::Spatial::GeoDataset::CChartQueryFilter *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartQueryFilter*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartQueryFilterProxy))
					{
						pObjectX->EarthView::World::Spatial::GeoDataset::CChartQueryFilter::setSpatialRelation(spatialRelType);
					}
					else
					{
						pObjectX->setSpatialRelation(spatialRelType);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_ChartQueryFilter_register_1setSpatialRelation_1EVSpatialQueryRelationType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartQueryFilterProxy *pObjectX = (JCChartQueryFilterProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_ChartQueryFilter_setSpatialRelation_1EVSpatialQueryRelationType_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint spatialRelType_j)
				{
					EarthView::World::Spatial::GeoDataset::EVSpatialQueryRelationType spatialRelType = (EarthView::World::Spatial::GeoDataset::EVSpatialQueryRelationType) spatialRelType_j;
					EarthView::World::Spatial::GeoDataset::CChartQueryFilter *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartQueryFilter*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::GeoDataset::CChartQueryFilter::setSpatialRelation(spatialRelType);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geodataset_ChartQueryFilter_ev_1clone_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::GeoDataset::CChartQueryFilter *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartQueryFilter*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartQueryFilterProxy))
					{
						EarthView::World::Spatial::GeoDataset::IQueryFilter* __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::CChartQueryFilter::clone();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_ChartQueryFilter_register_1ev_1clone_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartQueryFilterProxy *pObjectX = (JCChartQueryFilterProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geodataset_ChartQueryFilter_ev_1clone_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::GeoDataset::CChartQueryFilter *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartQueryFilter*) pObjXXXX;
					EarthView::World::Spatial::GeoDataset::IQueryFilter* __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::CChartQueryFilter::clone();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_ChartQueryFilter_setBlurQuery_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean blur_j)
				{
					ev_bool blur = (ev_bool) blur_j;
					EarthView::World::Spatial::GeoDataset::CChartQueryFilter *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartQueryFilter*) pObjXXXX;
					pObjectX->setBlurQuery(blur);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_geodataset_ChartQueryFilter_isBlurQuery_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::GeoDataset::CChartQueryFilter *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartQueryFilter*) pObjXXXX;
					ev_bool __values1 = pObjectX->isBlurQuery();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_ChartQueryFilter_setQueryClassName_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
					EarthView::World::Spatial::GeoDataset::CChartQueryFilter *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartQueryFilter*) pObjXXXX;
					pObjectX->setQueryClassName(name);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_geodataset_ChartQueryFilter_getQueryClassName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::GeoDataset::CChartQueryFilter *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartQueryFilter*) pObjXXXX;
					const EVString __values1 = pObjectX->getQueryClassName();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_ChartQueryFilter_setSkipFeatureNum_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong num_j)
				{
					ev_uint32 num = (ev_uint32) num_j;
					EarthView::World::Spatial::GeoDataset::CChartQueryFilter *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartQueryFilter*) pObjXXXX;
					pObjectX->setSkipFeatureNum(num);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geodataset_ChartQueryFilter_getSkipFeatureNum_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::GeoDataset::CChartQueryFilter *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartQueryFilter*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->getSkipFeatureNum();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				class JCChartFeatureSelectionProxy : public EarthView::World::Spatial::GeoDataset::CChartFeatureSelection
				{
				 private:
					EarthView::World::Core::ev_string m_getCount_void_callback;
					EarthView::World::Core::ev_string m_getID_ev_uint32_callback;
					EarthView::World::Core::ev_string m_getIDs_ev_uint32_callback;
					EarthView::World::Core::ev_string m_findID_ev_uint32_callback;
					EarthView::World::Core::ev_string m_query_IQueryFilter_callback;
					EarthView::World::Core::ev_string m_select_IQueryFilter_callback;
					EarthView::World::Core::ev_string m_addID_ev_uint32_callback;
					EarthView::World::Core::ev_string m_addIDs_ev_uint32_ev_uint32_callback;
					EarthView::World::Core::ev_string m_remove_ev_uint32_ev_uint32_callback;
					EarthView::World::Core::ev_string m_clear_void_callback;
					EarthView::World::Core::ev_string m_intersect_IFeatureSelection_callback;
					EarthView::World::Core::ev_string m_difference_IFeatureSelection_callback;
					EarthView::World::Core::ev_string m_append_IFeatureSelection_callback;
				public:
					JCChartFeatureSelectionProxy(EarthView::World::Core::CNameValuePairList *pList) : CChartFeatureSelection(pList)
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
					void register_getID_ev_uint32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getID_ev_uint32_callback = __method;
					}
					void register_getIDs_ev_uint32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getIDs_ev_uint32_callback = __method;
					}
					void register_findID_ev_uint32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_findID_ev_uint32_callback = __method;
					}
					void register_query_IQueryFilter_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_query_IQueryFilter_callback = __method;
					}
					void register_select_IQueryFilter_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_select_IQueryFilter_callback = __method;
					}
					void register_addID_ev_uint32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_addID_ev_uint32_callback = __method;
					}
					void register_addIDs_ev_uint32_ev_uint32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_addIDs_ev_uint32_ev_uint32_callback = __method;
					}
					void register_remove_ev_uint32_ev_uint32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_remove_ev_uint32_ev_uint32_callback = __method;
					}
					void register_clear_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_clear_void_callback = __method;
					}
					void register_intersect_IFeatureSelection_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_intersect_IFeatureSelection_callback = __method;
					}
					void register_difference_IFeatureSelection_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_difference_IFeatureSelection_callback = __method;
					}
					void register_append_IFeatureSelection_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_append_IFeatureSelection_callback = __method;
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
							return this->CChartFeatureSelection::getCount();
						}
					}
					virtual ev_uint32 getID(ev_uint32 index) const
					{
						if (this->_gRef != NULL && this->m_getID_ev_uint32_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getID_ev_uint32_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , index_j);
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
							return this->CChartFeatureSelection::getID(index);
						}
					}
					virtual ev_uint32 getIDs(ev_uint32* ids) const
					{
						if (this->_gRef != NULL && this->m_getIDs_ev_uint32_callback != "" && this->isCustomExtend())
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
							jlong ids_j = (jlong) ids;
							jmethodID __method = __gr->getMethod("getIDs_ev_uint32_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , ids_j);
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
							return this->CChartFeatureSelection::getIDs(ids);
						}
					}
					virtual ev_int32 findID(ev_uint32 id) const
					{
						if (this->_gRef != NULL && this->m_findID_ev_uint32_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("findID_ev_uint32_callback");
							jint __values1_j = (jint)__env->CallIntMethod(__obj, __method , id_j);
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
							return this->CChartFeatureSelection::findID(id);
						}
					}
					virtual EarthView::World::Spatial::GeoDataset::IFeatureIterator* query(EarthView::World::Spatial::GeoDataset::IQueryFilter* filter) const
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
							return this->CChartFeatureSelection::query(filter);
						}
					}
					virtual EarthView::World::Spatial::GeoDataset::IFeatureSelection* select(EarthView::World::Spatial::GeoDataset::IQueryFilter* filter) const
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
							return this->CChartFeatureSelection::select(filter);
						}
					}
					virtual ev_bool addID(ev_uint32 id)
					{
						if (this->_gRef != NULL && this->m_addID_ev_uint32_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("addID_ev_uint32_callback");
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
							return this->CChartFeatureSelection::addID(id);
						}
					}
					virtual ev_uint32 addIDs(ev_uint32* id, ev_uint32 size)
					{
						if (this->_gRef != NULL && this->m_addIDs_ev_uint32_ev_uint32_callback != "" && this->isCustomExtend())
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
							jlong size_j = (jlong) size;
							jmethodID __method = __gr->getMethod("addIDs_ev_uint32_ev_uint32_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , id_j, size_j);
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
							return this->CChartFeatureSelection::addIDs(id, size);
						}
					}
					virtual ev_uint32 remove(ev_uint32 index, ev_uint32 size)
					{
						if (this->_gRef != NULL && this->m_remove_ev_uint32_ev_uint32_callback != "" && this->isCustomExtend())
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
							jlong size_j = (jlong) size;
							jmethodID __method = __gr->getMethod("remove_ev_uint32_ev_uint32_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , index_j, size_j);
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
							return this->CChartFeatureSelection::remove(index, size);
						}
					}
					virtual ev_uint32 clear()
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
							return this->CChartFeatureSelection::clear();
						}
					}
					virtual void intersect(const EarthView::World::Spatial::GeoDataset::IFeatureSelection* set)
					{
						if (this->_gRef != NULL && this->m_intersect_IFeatureSelection_callback != "" && this->isCustomExtend())
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
							jlong set_j = (jlong) set;
							jmethodID __method = __gr->getMethod("intersect_IFeatureSelection_callback");
							__env->CallVoidMethod(__obj, __method , set_j);
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
							return this->CChartFeatureSelection::intersect(set);
						}
					}
					virtual void difference(const EarthView::World::Spatial::GeoDataset::IFeatureSelection* set)
					{
						if (this->_gRef != NULL && this->m_difference_IFeatureSelection_callback != "" && this->isCustomExtend())
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
							jlong set_j = (jlong) set;
							jmethodID __method = __gr->getMethod("difference_IFeatureSelection_callback");
							__env->CallVoidMethod(__obj, __method , set_j);
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
							return this->CChartFeatureSelection::difference(set);
						}
					}
					virtual void append(const EarthView::World::Spatial::GeoDataset::IFeatureSelection* set)
					{
						if (this->_gRef != NULL && this->m_append_IFeatureSelection_callback != "" && this->isCustomExtend())
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
							jlong set_j = (jlong) set;
							jmethodID __method = __gr->getMethod("append_IFeatureSelection_callback");
							__env->CallVoidMethod(__obj, __method , set_j);
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
							return this->CChartFeatureSelection::append(set);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCChartFeatureSelectionProxy);
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geodataset_ChartFeatureSelection_getCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::GeoDataset::CChartFeatureSelection *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartFeatureSelection*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartFeatureSelectionProxy))
					{
						ev_uint32 __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::CChartFeatureSelection::getCount();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_ChartFeatureSelection_register_1getCount_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartFeatureSelectionProxy *pObjectX = (JCChartFeatureSelectionProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geodataset_ChartFeatureSelection_getCount_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::GeoDataset::CChartFeatureSelection *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartFeatureSelection*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::CChartFeatureSelection::getCount();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geodataset_ChartFeatureSelection_getID_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					const 					EarthView::World::Spatial::GeoDataset::CChartFeatureSelection *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartFeatureSelection*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartFeatureSelectionProxy))
					{
						ev_uint32 __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::CChartFeatureSelection::getID(index);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						ev_uint32 __values1 = pObjectX->getID(index);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_ChartFeatureSelection_register_1getID_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartFeatureSelectionProxy *pObjectX = (JCChartFeatureSelectionProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getID_ev_uint32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getID_ev_uint32_callback", "(J)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geodataset_ChartFeatureSelection_getID_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					const 					EarthView::World::Spatial::GeoDataset::CChartFeatureSelection *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartFeatureSelection*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::CChartFeatureSelection::getID(index);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geodataset_ChartFeatureSelection_getIDs_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ids_j)
				{
					ev_uint32 *ids = (ev_uint32*) ids_j;
					const 					EarthView::World::Spatial::GeoDataset::CChartFeatureSelection *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartFeatureSelection*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartFeatureSelectionProxy))
					{
						ev_uint32 __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::CChartFeatureSelection::getIDs(ids);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						ev_uint32 __values1 = pObjectX->getIDs(ids);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_ChartFeatureSelection_register_1getIDs_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartFeatureSelectionProxy *pObjectX = (JCChartFeatureSelectionProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getIDs_ev_uint32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getIDs_ev_uint32_callback", "(J)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geodataset_ChartFeatureSelection_getIDs_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ids_j)
				{
					ev_uint32 *ids = (ev_uint32*) ids_j;
					const 					EarthView::World::Spatial::GeoDataset::CChartFeatureSelection *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartFeatureSelection*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::CChartFeatureSelection::getIDs(ids);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_geodataset_ChartFeatureSelection_findID_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong id_j)
				{
					ev_uint32 id = (ev_uint32) id_j;
					const 					EarthView::World::Spatial::GeoDataset::CChartFeatureSelection *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartFeatureSelection*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartFeatureSelectionProxy))
					{
						ev_int32 __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::CChartFeatureSelection::findID(id);
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
					else
					{
						ev_int32 __values1 = pObjectX->findID(id);
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_ChartFeatureSelection_register_1findID_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartFeatureSelectionProxy *pObjectX = (JCChartFeatureSelectionProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_findID_ev_uint32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"findID_ev_uint32_callback", "(J)I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_geodataset_ChartFeatureSelection_findID_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong id_j)
				{
					ev_uint32 id = (ev_uint32) id_j;
					const 					EarthView::World::Spatial::GeoDataset::CChartFeatureSelection *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartFeatureSelection*) pObjXXXX;
					ev_int32 __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::CChartFeatureSelection::findID(id);
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geodataset_ChartFeatureSelection_query_1IQueryFilter(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong filter_j)
				{
					EarthView::World::Spatial::GeoDataset::IQueryFilter *filter = (EarthView::World::Spatial::GeoDataset::IQueryFilter*) filter_j;
					const 					EarthView::World::Spatial::GeoDataset::CChartFeatureSelection *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartFeatureSelection*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartFeatureSelectionProxy))
					{
						EarthView::World::Spatial::GeoDataset::IFeatureIterator* __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::CChartFeatureSelection::query(filter);
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_ChartFeatureSelection_register_1query_1IQueryFilter(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartFeatureSelectionProxy *pObjectX = (JCChartFeatureSelectionProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geodataset_ChartFeatureSelection_query_1IQueryFilter_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong filter_j)
				{
					EarthView::World::Spatial::GeoDataset::IQueryFilter *filter = (EarthView::World::Spatial::GeoDataset::IQueryFilter*) filter_j;
					const 					EarthView::World::Spatial::GeoDataset::CChartFeatureSelection *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartFeatureSelection*) pObjXXXX;
					EarthView::World::Spatial::GeoDataset::IFeatureIterator* __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::CChartFeatureSelection::query(filter);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geodataset_ChartFeatureSelection_select_1IQueryFilter(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong filter_j)
				{
					EarthView::World::Spatial::GeoDataset::IQueryFilter *filter = (EarthView::World::Spatial::GeoDataset::IQueryFilter*) filter_j;
					const 					EarthView::World::Spatial::GeoDataset::CChartFeatureSelection *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartFeatureSelection*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartFeatureSelectionProxy))
					{
						EarthView::World::Spatial::GeoDataset::IFeatureSelection* __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::CChartFeatureSelection::select(filter);
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_ChartFeatureSelection_register_1select_1IQueryFilter(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartFeatureSelectionProxy *pObjectX = (JCChartFeatureSelectionProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geodataset_ChartFeatureSelection_select_1IQueryFilter_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong filter_j)
				{
					EarthView::World::Spatial::GeoDataset::IQueryFilter *filter = (EarthView::World::Spatial::GeoDataset::IQueryFilter*) filter_j;
					const 					EarthView::World::Spatial::GeoDataset::CChartFeatureSelection *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartFeatureSelection*) pObjXXXX;
					EarthView::World::Spatial::GeoDataset::IFeatureSelection* __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::CChartFeatureSelection::select(filter);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_geodataset_ChartFeatureSelection_addID_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong id_j)
				{
					ev_uint32 id = (ev_uint32) id_j;
					EarthView::World::Spatial::GeoDataset::CChartFeatureSelection *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartFeatureSelection*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartFeatureSelectionProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::CChartFeatureSelection::addID(id);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->addID(id);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_ChartFeatureSelection_register_1addID_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartFeatureSelectionProxy *pObjectX = (JCChartFeatureSelectionProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_addID_ev_uint32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"addID_ev_uint32_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_geodataset_ChartFeatureSelection_addID_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong id_j)
				{
					ev_uint32 id = (ev_uint32) id_j;
					EarthView::World::Spatial::GeoDataset::CChartFeatureSelection *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartFeatureSelection*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::CChartFeatureSelection::addID(id);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geodataset_ChartFeatureSelection_addIDs_1ev_1uint32_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong id_j, jlong size_j)
				{
					ev_uint32 *id = (ev_uint32*) id_j;
					ev_uint32 size = (ev_uint32) size_j;
					EarthView::World::Spatial::GeoDataset::CChartFeatureSelection *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartFeatureSelection*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartFeatureSelectionProxy))
					{
						ev_uint32 __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::CChartFeatureSelection::addIDs(id, size);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						ev_uint32 __values1 = pObjectX->addIDs(id, size);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_ChartFeatureSelection_register_1addIDs_1ev_1uint32_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartFeatureSelectionProxy *pObjectX = (JCChartFeatureSelectionProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_addIDs_ev_uint32_ev_uint32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"addIDs_ev_uint32_ev_uint32_callback", "(JJ)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geodataset_ChartFeatureSelection_addIDs_1ev_1uint32_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong id_j, jlong size_j)
				{
					ev_uint32 *id = (ev_uint32*) id_j;
					ev_uint32 size = (ev_uint32) size_j;
					EarthView::World::Spatial::GeoDataset::CChartFeatureSelection *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartFeatureSelection*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::CChartFeatureSelection::addIDs(id, size);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geodataset_ChartFeatureSelection_remove_1ev_1uint32_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j, jlong size_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					ev_uint32 size = (ev_uint32) size_j;
					EarthView::World::Spatial::GeoDataset::CChartFeatureSelection *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartFeatureSelection*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartFeatureSelectionProxy))
					{
						ev_uint32 __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::CChartFeatureSelection::remove(index, size);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						ev_uint32 __values1 = pObjectX->remove(index, size);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_ChartFeatureSelection_register_1remove_1ev_1uint32_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartFeatureSelectionProxy *pObjectX = (JCChartFeatureSelectionProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_remove_ev_uint32_ev_uint32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"remove_ev_uint32_ev_uint32_callback", "(JJ)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geodataset_ChartFeatureSelection_remove_1ev_1uint32_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j, jlong size_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					ev_uint32 size = (ev_uint32) size_j;
					EarthView::World::Spatial::GeoDataset::CChartFeatureSelection *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartFeatureSelection*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::CChartFeatureSelection::remove(index, size);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geodataset_ChartFeatureSelection_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::GeoDataset::CChartFeatureSelection *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartFeatureSelection*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartFeatureSelectionProxy))
					{
						ev_uint32 __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::CChartFeatureSelection::clear();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						ev_uint32 __values1 = pObjectX->clear();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_ChartFeatureSelection_register_1clear_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartFeatureSelectionProxy *pObjectX = (JCChartFeatureSelectionProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_clear_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"clear_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geodataset_ChartFeatureSelection_clear_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::GeoDataset::CChartFeatureSelection *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartFeatureSelection*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::CChartFeatureSelection::clear();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_ChartFeatureSelection_intersect_1IFeatureSelection(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong set_j)
				{
					const EarthView::World::Spatial::GeoDataset::IFeatureSelection *set = (const EarthView::World::Spatial::GeoDataset::IFeatureSelection*) set_j;
					EarthView::World::Spatial::GeoDataset::CChartFeatureSelection *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartFeatureSelection*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartFeatureSelectionProxy))
					{
						pObjectX->EarthView::World::Spatial::GeoDataset::CChartFeatureSelection::intersect(set);
					}
					else
					{
						pObjectX->intersect(set);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_ChartFeatureSelection_register_1intersect_1IFeatureSelection(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartFeatureSelectionProxy *pObjectX = (JCChartFeatureSelectionProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_intersect_IFeatureSelection_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"intersect_IFeatureSelection_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_ChartFeatureSelection_intersect_1IFeatureSelection_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong set_j)
				{
					const EarthView::World::Spatial::GeoDataset::IFeatureSelection *set = (const EarthView::World::Spatial::GeoDataset::IFeatureSelection*) set_j;
					EarthView::World::Spatial::GeoDataset::CChartFeatureSelection *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartFeatureSelection*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::GeoDataset::CChartFeatureSelection::intersect(set);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_ChartFeatureSelection_difference_1IFeatureSelection(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong set_j)
				{
					const EarthView::World::Spatial::GeoDataset::IFeatureSelection *set = (const EarthView::World::Spatial::GeoDataset::IFeatureSelection*) set_j;
					EarthView::World::Spatial::GeoDataset::CChartFeatureSelection *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartFeatureSelection*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartFeatureSelectionProxy))
					{
						pObjectX->EarthView::World::Spatial::GeoDataset::CChartFeatureSelection::difference(set);
					}
					else
					{
						pObjectX->difference(set);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_ChartFeatureSelection_register_1difference_1IFeatureSelection(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartFeatureSelectionProxy *pObjectX = (JCChartFeatureSelectionProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_difference_IFeatureSelection_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"difference_IFeatureSelection_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_ChartFeatureSelection_difference_1IFeatureSelection_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong set_j)
				{
					const EarthView::World::Spatial::GeoDataset::IFeatureSelection *set = (const EarthView::World::Spatial::GeoDataset::IFeatureSelection*) set_j;
					EarthView::World::Spatial::GeoDataset::CChartFeatureSelection *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartFeatureSelection*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::GeoDataset::CChartFeatureSelection::difference(set);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_ChartFeatureSelection_append_1IFeatureSelection(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong set_j)
				{
					const EarthView::World::Spatial::GeoDataset::IFeatureSelection *set = (const EarthView::World::Spatial::GeoDataset::IFeatureSelection*) set_j;
					EarthView::World::Spatial::GeoDataset::CChartFeatureSelection *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartFeatureSelection*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartFeatureSelectionProxy))
					{
						pObjectX->EarthView::World::Spatial::GeoDataset::CChartFeatureSelection::append(set);
					}
					else
					{
						pObjectX->append(set);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_ChartFeatureSelection_register_1append_1IFeatureSelection(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartFeatureSelectionProxy *pObjectX = (JCChartFeatureSelectionProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_append_IFeatureSelection_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"append_IFeatureSelection_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_ChartFeatureSelection_append_1IFeatureSelection_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong set_j)
				{
					const EarthView::World::Spatial::GeoDataset::IFeatureSelection *set = (const EarthView::World::Spatial::GeoDataset::IFeatureSelection*) set_j;
					EarthView::World::Spatial::GeoDataset::CChartFeatureSelection *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartFeatureSelection*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::GeoDataset::CChartFeatureSelection::append(set);
				}
				class JCChartFeatureIteratorProxy : public EarthView::World::Spatial::GeoDataset::CChartFeatureIterator
				{
				 private:
					EarthView::World::Core::ev_string m_next_void_callback;
					EarthView::World::Core::ev_string m_getFields_void_callback;
					EarthView::World::Core::ev_string m_getField_ev_uint32_callback;
					EarthView::World::Core::ev_string m_findField_EVString_callback;
				public:
					JCChartFeatureIteratorProxy(EarthView::World::Core::CNameValuePairList *pList) : CChartFeatureIterator(pList)
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
							return this->CChartFeatureIterator::next();
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
							return this->CChartFeatureIterator::getFields();
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
							return this->CChartFeatureIterator::getField(index);
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
							return this->CChartFeatureIterator::findField(fieldName);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCChartFeatureIteratorProxy);
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geodataset_ChartFeatureIterator_getTestedFeatureNum_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::GeoDataset::CChartFeatureIterator *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartFeatureIterator*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->getTestedFeatureNum();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geodataset_ChartFeatureIterator_next_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::GeoDataset::CChartFeatureIterator *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartFeatureIterator*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartFeatureIteratorProxy))
					{
						EarthView::World::Spatial::GeoDataset::IFeature* __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::CChartFeatureIterator::next();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_ChartFeatureIterator_register_1next_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartFeatureIteratorProxy *pObjectX = (JCChartFeatureIteratorProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geodataset_ChartFeatureIterator_next_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::GeoDataset::CChartFeatureIterator *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartFeatureIterator*) pObjXXXX;
					EarthView::World::Spatial::GeoDataset::IFeature* __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::CChartFeatureIterator::next();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geodataset_ChartFeatureIterator_getFields_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::GeoDataset::CChartFeatureIterator *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartFeatureIterator*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartFeatureIteratorProxy))
					{
						const EarthView::World::Spatial::GeoDataset::IFields* __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::CChartFeatureIterator::getFields();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						const EarthView::World::Spatial::GeoDataset::IFields* __values1 = pObjectX->getFields();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_ChartFeatureIterator_register_1getFields_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartFeatureIteratorProxy *pObjectX = (JCChartFeatureIteratorProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geodataset_ChartFeatureIterator_getFields_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::GeoDataset::CChartFeatureIterator *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartFeatureIterator*) pObjXXXX;
					const EarthView::World::Spatial::GeoDataset::IFields* __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::CChartFeatureIterator::getFields();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geodataset_ChartFeatureIterator_getField_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					const 					EarthView::World::Spatial::GeoDataset::CChartFeatureIterator *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartFeatureIterator*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartFeatureIteratorProxy))
					{
						const EarthView::World::Spatial::GeoDataset::IField* __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::CChartFeatureIterator::getField(index);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						const EarthView::World::Spatial::GeoDataset::IField* __values1 = pObjectX->getField(index);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_ChartFeatureIterator_register_1getField_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartFeatureIteratorProxy *pObjectX = (JCChartFeatureIteratorProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geodataset_ChartFeatureIterator_getField_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					const 					EarthView::World::Spatial::GeoDataset::CChartFeatureIterator *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartFeatureIterator*) pObjXXXX;
					const EarthView::World::Spatial::GeoDataset::IField* __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::CChartFeatureIterator::getField(index);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_geodataset_ChartFeatureIterator_findField_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring fieldName_j)
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
					const 					EarthView::World::Spatial::GeoDataset::CChartFeatureIterator *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartFeatureIterator*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartFeatureIteratorProxy))
					{
						ev_int32 __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::CChartFeatureIterator::findField(fieldName);
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_ChartFeatureIterator_register_1findField_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartFeatureIteratorProxy *pObjectX = (JCChartFeatureIteratorProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_geodataset_ChartFeatureIterator_findField_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring fieldName_j)
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
					const 					EarthView::World::Spatial::GeoDataset::CChartFeatureIterator *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartFeatureIterator*) pObjXXXX;
					ev_int32 __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::CChartFeatureIterator::findField(fieldName);
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_geodataset_ChartDatasetHeaderInfo_getHeaderInfo_1EVString_1EVString_1CVariant(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring fieldName_j, jstring subFieldName_j, jlong var_j)
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
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* subFieldName_ch = (const ev_char*)__env->GetStringUTFChars(subFieldName_j,JNI_FALSE);
					const EVString subFieldName = subFieldName_ch;
					__env->ReleaseStringUTFChars(subFieldName_j, (const char *)subFieldName_ch);
					#else
					const ev_wchar* subFieldName_ch = (const ev_wchar*)__env->GetStringChars(subFieldName_j,JNI_FALSE);
					const EVString subFieldName = subFieldName_ch;
					__env->ReleaseStringChars(subFieldName_j, (const jchar *)subFieldName_ch);
					#endif
					EarthView::World::Core::CVariant &var = *(EarthView::World::Core::CVariant*) var_j;
					EarthView::World::Spatial::GeoDataset::CChartDatasetHeaderInfo *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartDatasetHeaderInfo*) pObjXXXX;
					ev_bool __values1 = pObjectX->getHeaderInfo(fieldName, subFieldName, var);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geodataset_ChartDatasetHeaderInfo_getHeaderFieldCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::GeoDataset::CChartDatasetHeaderInfo *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartDatasetHeaderInfo*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->getHeaderFieldCount();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geodataset_ChartDatasetHeaderInfo_getHeaderSubFieldCount_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					EarthView::World::Spatial::GeoDataset::CChartDatasetHeaderInfo *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartDatasetHeaderInfo*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->getHeaderSubFieldCount(index);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_geodataset_ChartDatasetHeaderInfo_getHeaderInfo_1ev_1uint32_1ev_1uint32_1CVariant(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong fieldIndex_j, jlong subfieldIndex_j, jlong var_j)
				{
					ev_uint32 fieldIndex = (ev_uint32) fieldIndex_j;
					ev_uint32 subfieldIndex = (ev_uint32) subfieldIndex_j;
					EarthView::World::Core::CVariant &var = *(EarthView::World::Core::CVariant*) var_j;
					EarthView::World::Spatial::GeoDataset::CChartDatasetHeaderInfo *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartDatasetHeaderInfo*) pObjXXXX;
					ev_bool __values1 = pObjectX->getHeaderInfo(fieldIndex, subfieldIndex, var);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_geodataset_ChartDatasetHeaderInfo_getHeaderFieldName_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					EarthView::World::Spatial::GeoDataset::CChartDatasetHeaderInfo *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartDatasetHeaderInfo*) pObjXXXX;
					EVString __values1 = pObjectX->getHeaderFieldName(index);
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_geodataset_ChartDatasetHeaderInfo_getHeaderSubFieldName_1ev_1uint32_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong fieldIndex_j, jlong subfieldIndex_j)
				{
					ev_uint32 fieldIndex = (ev_uint32) fieldIndex_j;
					ev_uint32 subfieldIndex = (ev_uint32) subfieldIndex_j;
					EarthView::World::Spatial::GeoDataset::CChartDatasetHeaderInfo *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartDatasetHeaderInfo*) pObjXXXX;
					EVString __values1 = pObjectX->getHeaderSubFieldName(fieldIndex, subfieldIndex);
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_ChartDatasetHeaderInfo_toStream_1CDataStream(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j)
				{
					EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
					EarthView::World::Spatial::GeoDataset::CChartDatasetHeaderInfo *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartDatasetHeaderInfo*) pObjXXXX;
					pObjectX->toStream(stream);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geodataset_ChartDatasetHeaderInfo_fromStream_1CDataStream(JNIEnv *__env , jclass __clazz, jlong stream_j)
				{
					EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
					EarthView::World::Spatial::GeoDataset::CChartDatasetHeaderInfo* __values1 = EarthView::World::Spatial::GeoDataset::CChartDatasetHeaderInfo::fromStream(stream);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				class JCChartDatasetProxy : public EarthView::World::Spatial::GeoDataset::CChartDataset
				{
				 private:
					EarthView::World::Core::ev_string m_query_IQueryFilter_callback;
					EarthView::World::Core::ev_string m_select_IQueryFilter_callback;
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
					JCChartDatasetProxy(EarthView::World::Core::CNameValuePairList *pList) : CChartDataset(pList)
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
					void register_query_IQueryFilter_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_query_IQueryFilter_callback = __method;
					}
					void register_select_IQueryFilter_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_select_IQueryFilter_callback = __method;
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
							if(__values1 != NULL) {
								((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(false);
							}
							return __values1;
						}
						else
						{
							return this->CChartDataset::query(filter);
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
							if(__values1 != NULL) {
								((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(false);
							}
							return __values1;
						}
						else
						{
							return this->CChartDataset::select(filter);
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
							return this->CChartDataset::getDataSourceRef();
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
							return this->CChartDataset::getType();
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
							return this->CChartDataset::getName();
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
							return this->CChartDataset::getDataVersion();
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
							return this->CChartDataset::getDescription();
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
							return this->CChartDataset::getUpdateTime();
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
							return this->CChartDataset::hasSubDataset();
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
							return this->CChartDataset::canEdit();
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
							return this->CChartDataset::isEditing();
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
							return this->CChartDataset::startEditing(withUndo);
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
							return this->CChartDataset::stopEditing(isSave);
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
							return this->CChartDataset::isBeginEditingOperation();
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
							return this->CChartDataset::beginEditingOperation();
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
							return this->CChartDataset::endEditingOperation(isConfirm);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCChartDatasetProxy);
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_geodataset_ChartDataset_getClassNameList_1StringVector(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong namelist_j)
				{
					EarthView::World::Core::StringVector &namelist = *(EarthView::World::Core::StringVector*) namelist_j;
					EarthView::World::Spatial::GeoDataset::CChartDataset *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartDataset*) pObjXXXX;
					bool __values1 = pObjectX->getClassNameList(namelist);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geodataset_ChartDataset_getEnvelopeRef_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::GeoDataset::CChartDataset *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartDataset*) pObjXXXX;
					const EarthView::World::Spatial::Geometry::IEnvelope* __values1 = pObjectX->getEnvelopeRef();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geodataset_ChartDataset_getSpatialReferenceRef_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::GeoDataset::CChartDataset *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartDataset*) pObjXXXX;
					const EarthView::World::Spatial::Geometry::ISpatialReference* __values1 = pObjectX->getSpatialReferenceRef();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geodataset_ChartDataset_query_1IQueryFilter(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong filter_j)
				{
					EarthView::World::Spatial::GeoDataset::IQueryFilter *filter = (EarthView::World::Spatial::GeoDataset::IQueryFilter*) filter_j;
					EarthView::World::Spatial::GeoDataset::CChartDataset *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartDataset*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartDatasetProxy))
					{
						EarthView::World::Spatial::GeoDataset::IFeatureIterator* __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::CChartDataset::query(filter);
						if(__values1 != NULL) {							((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
						}						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IFeatureIterator* __values1 = pObjectX->query(filter);
						if(__values1 != NULL) {							((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
						}						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_ChartDataset_register_1query_1IQueryFilter(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartDatasetProxy *pObjectX = (JCChartDatasetProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geodataset_ChartDataset_query_1IQueryFilter_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong filter_j)
				{
					EarthView::World::Spatial::GeoDataset::IQueryFilter *filter = (EarthView::World::Spatial::GeoDataset::IQueryFilter*) filter_j;
					EarthView::World::Spatial::GeoDataset::CChartDataset *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartDataset*) pObjXXXX;
					EarthView::World::Spatial::GeoDataset::IFeatureIterator* __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::CChartDataset::query(filter);
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geodataset_ChartDataset_select_1IQueryFilter(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong filter_j)
				{
					EarthView::World::Spatial::GeoDataset::IQueryFilter *filter = (EarthView::World::Spatial::GeoDataset::IQueryFilter*) filter_j;
					EarthView::World::Spatial::GeoDataset::CChartDataset *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartDataset*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartDatasetProxy))
					{
						EarthView::World::Spatial::GeoDataset::IFeatureSelection* __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::CChartDataset::select(filter);
						if(__values1 != NULL) {							((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
						}						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IFeatureSelection* __values1 = pObjectX->select(filter);
						if(__values1 != NULL) {							((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
						}						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_ChartDataset_register_1select_1IQueryFilter(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartDatasetProxy *pObjectX = (JCChartDatasetProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geodataset_ChartDataset_select_1IQueryFilter_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong filter_j)
				{
					EarthView::World::Spatial::GeoDataset::IQueryFilter *filter = (EarthView::World::Spatial::GeoDataset::IQueryFilter*) filter_j;
					EarthView::World::Spatial::GeoDataset::CChartDataset *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartDataset*) pObjXXXX;
					EarthView::World::Spatial::GeoDataset::IFeatureSelection* __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::CChartDataset::select(filter);
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_geodataset_ChartDataset_isClassExists_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring className_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* className_ch = (const ev_char*)__env->GetStringUTFChars(className_j,JNI_FALSE);
					const EVString className = className_ch;
					__env->ReleaseStringUTFChars(className_j, (const char *)className_ch);
					#else
					const ev_wchar* className_ch = (const ev_wchar*)__env->GetStringChars(className_j,JNI_FALSE);
					const EVString className = className_ch;
					__env->ReleaseStringChars(className_j, (const jchar *)className_ch);
					#endif
					EarthView::World::Spatial::GeoDataset::CChartDataset *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartDataset*) pObjXXXX;
					ev_bool __values1 = pObjectX->isClassExists(className);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geodataset_ChartDataset_getDataSourceRef_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::GeoDataset::CChartDataset *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartDataset*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartDatasetProxy))
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::CChartDataset::getDataSourceRef();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_ChartDataset_register_1getDataSourceRef_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartDatasetProxy *pObjectX = (JCChartDatasetProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geodataset_ChartDataset_getDataSourceRef_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::GeoDataset::CChartDataset *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartDataset*) pObjXXXX;
					EarthView::World::Spatial::GeoDataset::IDataSource* __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::CChartDataset::getDataSourceRef();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_geodataset_ChartDataset_getType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::GeoDataset::CChartDataset *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartDataset*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartDatasetProxy))
					{
						EarthView::World::Spatial::GeoDataset::EVDatasetType __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::CChartDataset::getType();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_ChartDataset_register_1getType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartDatasetProxy *pObjectX = (JCChartDatasetProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_geodataset_ChartDataset_getType_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::GeoDataset::CChartDataset *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartDataset*) pObjXXXX;
					EarthView::World::Spatial::GeoDataset::EVDatasetType __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::CChartDataset::getType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_geodataset_ChartDataset_getName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::GeoDataset::CChartDataset *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartDataset*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartDatasetProxy))
					{
						EVString __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::CChartDataset::getName();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_ChartDataset_register_1getName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartDatasetProxy *pObjectX = (JCChartDatasetProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_geodataset_ChartDataset_getName_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::GeoDataset::CChartDataset *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartDataset*) pObjXXXX;
					EVString __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::CChartDataset::getName();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_geodataset_ChartDataset_getDataVersion_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::GeoDataset::CChartDataset *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartDataset*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartDatasetProxy))
					{
						ev_uint64 __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::CChartDataset::getDataVersion();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_ChartDataset_register_1getDataVersion_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartDatasetProxy *pObjectX = (JCChartDatasetProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_geodataset_ChartDataset_getDataVersion_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::GeoDataset::CChartDataset *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartDataset*) pObjXXXX;
					ev_uint64 __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::CChartDataset::getDataVersion();
					EarthView::World::Core::ev_string __values1_ch;
					__values1_ch<<__values1;
					jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_geodataset_ChartDataset_getDescription_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::GeoDataset::CChartDataset *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartDataset*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartDatasetProxy))
					{
						EVString __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::CChartDataset::getDescription();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_ChartDataset_register_1getDescription_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartDatasetProxy *pObjectX = (JCChartDatasetProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_geodataset_ChartDataset_getDescription_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::GeoDataset::CChartDataset *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartDataset*) pObjXXXX;
					EVString __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::CChartDataset::getDescription();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_geodataset_ChartDataset_getUpdateTime_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::GeoDataset::CChartDataset *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartDataset*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartDatasetProxy))
					{
						EVString __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::CChartDataset::getUpdateTime();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_ChartDataset_register_1getUpdateTime_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartDatasetProxy *pObjectX = (JCChartDatasetProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_geodataset_ChartDataset_getUpdateTime_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::GeoDataset::CChartDataset *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartDataset*) pObjXXXX;
					EVString __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::CChartDataset::getUpdateTime();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_geodataset_ChartDataset_hasSubDataset_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::GeoDataset::CChartDataset *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartDataset*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartDatasetProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::CChartDataset::hasSubDataset();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->hasSubDataset();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_ChartDataset_register_1hasSubDataset_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartDatasetProxy *pObjectX = (JCChartDatasetProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_geodataset_ChartDataset_hasSubDataset_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::GeoDataset::CChartDataset *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartDataset*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::CChartDataset::hasSubDataset();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_geodataset_ChartDataset_getClassCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::GeoDataset::CChartDataset *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartDataset*) pObjXXXX;
					ev_int32 __values1 = pObjectX->getClassCount();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_geodataset_ChartDataset_getClassName_1ev_1int32_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint index_j, jlong name_j)
				{
					ev_int32 index = (ev_int32) index_j;
					EVString &name = *(EVString*) name_j;
					EarthView::World::Spatial::GeoDataset::CChartDataset *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartDataset*) pObjXXXX;
					ev_bool __values1 = pObjectX->getClassName(index, name);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geodataset_ChartDataset_getHeaderInfo_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::GeoDataset::CChartDataset *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartDataset*) pObjXXXX;
					EarthView::World::Spatial::GeoDataset::CChartDatasetHeaderInfo* __values1 = pObjectX->getHeaderInfo();
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_geodataset_ChartDataset_canEdit_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::GeoDataset::CChartDataset *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartDataset*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartDatasetProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::CChartDataset::canEdit();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_ChartDataset_register_1canEdit_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartDatasetProxy *pObjectX = (JCChartDatasetProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_geodataset_ChartDataset_canEdit_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::GeoDataset::CChartDataset *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartDataset*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::CChartDataset::canEdit();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_geodataset_ChartDataset_isEditing_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::GeoDataset::CChartDataset *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartDataset*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartDatasetProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::CChartDataset::isEditing();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_ChartDataset_register_1isEditing_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartDatasetProxy *pObjectX = (JCChartDatasetProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_geodataset_ChartDataset_isEditing_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::GeoDataset::CChartDataset *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartDataset*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::CChartDataset::isEditing();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_geodataset_ChartDataset_startEditing_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean withUndo_j)
				{
					ev_bool withUndo = (ev_bool) withUndo_j;
					EarthView::World::Spatial::GeoDataset::CChartDataset *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartDataset*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartDatasetProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::CChartDataset::startEditing(withUndo);
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_ChartDataset_register_1startEditing_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartDatasetProxy *pObjectX = (JCChartDatasetProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_geodataset_ChartDataset_startEditing_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean withUndo_j)
				{
					ev_bool withUndo = (ev_bool) withUndo_j;
					EarthView::World::Spatial::GeoDataset::CChartDataset *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartDataset*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::CChartDataset::startEditing(withUndo);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_geodataset_ChartDataset_stopEditing_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean isSave_j)
				{
					ev_bool isSave = (ev_bool) isSave_j;
					EarthView::World::Spatial::GeoDataset::CChartDataset *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartDataset*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartDatasetProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::CChartDataset::stopEditing(isSave);
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_ChartDataset_register_1stopEditing_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartDatasetProxy *pObjectX = (JCChartDatasetProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_geodataset_ChartDataset_stopEditing_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean isSave_j)
				{
					ev_bool isSave = (ev_bool) isSave_j;
					EarthView::World::Spatial::GeoDataset::CChartDataset *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartDataset*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::CChartDataset::stopEditing(isSave);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_geodataset_ChartDataset_isBeginEditingOperation_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::GeoDataset::CChartDataset *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartDataset*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartDatasetProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::CChartDataset::isBeginEditingOperation();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_ChartDataset_register_1isBeginEditingOperation_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartDatasetProxy *pObjectX = (JCChartDatasetProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_geodataset_ChartDataset_isBeginEditingOperation_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::GeoDataset::CChartDataset *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartDataset*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::CChartDataset::isBeginEditingOperation();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_geodataset_ChartDataset_beginEditingOperation_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::GeoDataset::CChartDataset *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartDataset*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartDatasetProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::CChartDataset::beginEditingOperation();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_ChartDataset_register_1beginEditingOperation_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartDatasetProxy *pObjectX = (JCChartDatasetProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_geodataset_ChartDataset_beginEditingOperation_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::GeoDataset::CChartDataset *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartDataset*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::CChartDataset::beginEditingOperation();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_geodataset_ChartDataset_endEditingOperation_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean isConfirm_j)
				{
					ev_bool isConfirm = (ev_bool) isConfirm_j;
					EarthView::World::Spatial::GeoDataset::CChartDataset *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartDataset*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartDatasetProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::CChartDataset::endEditingOperation(isConfirm);
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_ChartDataset_register_1endEditingOperation_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartDatasetProxy *pObjectX = (JCChartDatasetProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_geodataset_ChartDataset_endEditingOperation_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean isConfirm_j)
				{
					ev_bool isConfirm = (ev_bool) isConfirm_j;
					EarthView::World::Spatial::GeoDataset::CChartDataset *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartDataset*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::CChartDataset::endEditingOperation(isConfirm);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_geodataset_ChartDataset_destroyFeature_1IFeature(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pFeature_j)
				{
					EarthView::World::Spatial::GeoDataset::IFeature *pFeature = (EarthView::World::Spatial::GeoDataset::IFeature*) pFeature_j;
					EarthView::World::Spatial::GeoDataset::CChartDataset *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartDataset*) pObjXXXX;
					ev_bool __values1 = pObjectX->destroyFeature(pFeature);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geodataset_ChartDataset_getFeatureFromID_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint id_j)
				{
					ev_int32 id = (ev_int32) id_j;
					EarthView::World::Spatial::GeoDataset::CChartDataset *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartDataset*) pObjXXXX;
					EarthView::World::Spatial::GeoDataset::IFeature* __values1 = pObjectX->getFeatureFromID(id);
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geodataset_ChartDataset_getFeatureCount_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring classname_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* classname_ch = (const ev_char*)__env->GetStringUTFChars(classname_j,JNI_FALSE);
					const EVString classname = classname_ch;
					__env->ReleaseStringUTFChars(classname_j, (const char *)classname_ch);
					#else
					const ev_wchar* classname_ch = (const ev_wchar*)__env->GetStringChars(classname_j,JNI_FALSE);
					const EVString classname = classname_ch;
					__env->ReleaseStringChars(classname_j, (const jchar *)classname_ch);
					#endif
					EarthView::World::Spatial::GeoDataset::CChartDataset *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartDataset*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->getFeatureCount(classname);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_geodataset_ChartDataset_getFeatureIDList_1EVString_1IntVector(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring className_j, jlong idList_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* className_ch = (const ev_char*)__env->GetStringUTFChars(className_j,JNI_FALSE);
					const EVString className = className_ch;
					__env->ReleaseStringUTFChars(className_j, (const char *)className_ch);
					#else
					const ev_wchar* className_ch = (const ev_wchar*)__env->GetStringChars(className_j,JNI_FALSE);
					const EVString className = className_ch;
					__env->ReleaseStringChars(className_j, (const jchar *)className_ch);
					#endif
					EarthView::World::Core::IntVector &idList = *(EarthView::World::Core::IntVector*) idList_j;
					EarthView::World::Spatial::GeoDataset::CChartDataset *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartDataset*) pObjXXXX;
					bool __values1 = pObjectX->getFeatureIDList(className, idList);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
		}
	}
}
