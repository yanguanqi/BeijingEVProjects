/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3ddataset/meshtemplatefeature.h"
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
				class JCMeshTemplateFeatureProxy : public EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature
				{
				 private:
					EarthView::World::Core::ev_string m_getValue_CVariant_EVString_callback;
					EarthView::World::Core::ev_string m_setValue_CVariant_EVString_callback;
					EarthView::World::Core::ev_string m_setMeshDataRef_ev_uint32_callback;
					EarthView::World::Core::ev_string m_getPropertyType_void_callback;
					EarthView::World::Core::ev_string m_getPropertyFieldRef_void_callback;
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
					JCMeshTemplateFeatureProxy(EarthView::World::Core::CNameValuePairList *pList) : CMeshTemplateFeature(pList)
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
					void register_getValue_CVariant_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getValue_CVariant_EVString_callback = __method;
					}
					void register_setValue_CVariant_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setValue_CVariant_EVString_callback = __method;
					}
					void register_setMeshDataRef_ev_uint32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setMeshDataRef_ev_uint32_callback = __method;
					}
					void register_getPropertyType_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getPropertyType_void_callback = __method;
					}
					void register_getPropertyFieldRef_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getPropertyFieldRef_void_callback = __method;
					}
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
							return this->CMeshTemplateFeature::getID();
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
							return this->CMeshTemplateFeature::getFieldsRef();
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
							return this->CMeshTemplateFeature::getFieldCount();
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
							return this->CMeshTemplateFeature::getFieldRef(index);
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
							return this->CMeshTemplateFeature::findField(fieldName);
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
							return this->CMeshTemplateFeature::getValue(value, index);
						}
					}
					virtual void getValue(EarthView::World::Core::CVariant& value, const EVString& name) const
					{
						if (this->_gRef != NULL && this->m_getValue_CVariant_EVString_callback != "" && this->isCustomExtend())
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
							EarthView::World::Core::ev_wstring name_wch = name;
							jstring name_j = __env->NewString((const jchar*)name_wch.getString(), name_wch.size());
							jmethodID __method = __gr->getMethod("getValue_CVariant_EVString_callback");
							__env->CallVoidMethod(__obj, __method , value_j, name_j);
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
							return this->CMeshTemplateFeature::getValue(value, name);
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
							return this->CMeshTemplateFeature::getGeometryRef();
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
							return this->CMeshTemplateFeature::setGeometry(geom);
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
							return this->CMeshTemplateFeature::setValue(value, index);
						}
					}
					virtual void setValue(const EarthView::World::Core::CVariant& value, const EVString& name)
					{
						if (this->_gRef != NULL && this->m_setValue_CVariant_EVString_callback != "" && this->isCustomExtend())
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
							EarthView::World::Core::ev_wstring name_wch = name;
							jstring name_j = __env->NewString((const jchar*)name_wch.getString(), name_wch.size());
							jmethodID __method = __gr->getMethod("setValue_CVariant_EVString_callback");
							__env->CallVoidMethod(__obj, __method , value_j, name_j);
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
							return this->CMeshTemplateFeature::setValue(value, name);
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
							return this->CMeshTemplateFeature::deleteFeature();
						}
					}
					virtual void setMeshDataRef(ev_uint32 meshID)
					{
						if (this->_gRef != NULL && this->m_setMeshDataRef_ev_uint32_callback != "" && this->isCustomExtend())
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
							jlong meshID_j = (jlong) meshID;
							jmethodID __method = __gr->getMethod("setMeshDataRef_ev_uint32_callback");
							__env->CallVoidMethod(__obj, __method , meshID_j);
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
							return this->CMeshTemplateFeature::setMeshDataRef(meshID);
						}
					}
					virtual EVString getPropertyType()
					{
						if (this->_gRef != NULL && this->m_getPropertyType_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getPropertyType_void_callback");
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
							return this->CMeshTemplateFeature::getPropertyType();
						}
					}
					virtual EarthView::World::Spatial::GeoDataset::IFields* getPropertyFieldRef()
					{
						if (this->_gRef != NULL && this->m_getPropertyFieldRef_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getPropertyFieldRef_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::GeoDataset::IFields *__values1 = (EarthView::World::Spatial::GeoDataset::IFields*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CMeshTemplateFeature::getPropertyFieldRef();
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
							return this->CMeshTemplateFeature::clone();
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
							return this->CMeshTemplateFeature::getGeometryType();
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
							return this->CMeshTemplateFeature::getEnvelopeRef();
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
							return this->CMeshTemplateFeature::saveFeature();
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCMeshTemplateFeatureProxy);
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_MeshTemplateFeature_getID_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature *pObjectX = (EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCMeshTemplateFeatureProxy))
					{
						ev_uint32 __values1 = pObjectX->EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature::getID();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_MeshTemplateFeature_register_1getID_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMeshTemplateFeatureProxy *pObjectX = (JCMeshTemplateFeatureProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_MeshTemplateFeature_getID_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature *pObjectX = (EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature::getID();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_MeshTemplateFeature_getFieldsRef_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature *pObjectX = (EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCMeshTemplateFeatureProxy))
					{
						const EarthView::World::Spatial::GeoDataset::IFields* __values1 = pObjectX->EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature::getFieldsRef();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_MeshTemplateFeature_register_1getFieldsRef_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMeshTemplateFeatureProxy *pObjectX = (JCMeshTemplateFeatureProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_MeshTemplateFeature_getFieldsRef_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature *pObjectX = (EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature*) pObjXXXX;
					const EarthView::World::Spatial::GeoDataset::IFields* __values1 = pObjectX->EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature::getFieldsRef();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_MeshTemplateFeature_getFieldCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature *pObjectX = (EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCMeshTemplateFeatureProxy))
					{
						ev_uint32 __values1 = pObjectX->EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature::getFieldCount();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_MeshTemplateFeature_register_1getFieldCount_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMeshTemplateFeatureProxy *pObjectX = (JCMeshTemplateFeatureProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_MeshTemplateFeature_getFieldCount_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature *pObjectX = (EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature::getFieldCount();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_MeshTemplateFeature_getFieldRef_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					const 					EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature *pObjectX = (EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCMeshTemplateFeatureProxy))
					{
						const EarthView::World::Spatial::GeoDataset::IField* __values1 = pObjectX->EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature::getFieldRef(index);
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_MeshTemplateFeature_register_1getFieldRef_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMeshTemplateFeatureProxy *pObjectX = (JCMeshTemplateFeatureProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_MeshTemplateFeature_getFieldRef_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					const 					EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature *pObjectX = (EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature*) pObjXXXX;
					const EarthView::World::Spatial::GeoDataset::IField* __values1 = pObjectX->EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature::getFieldRef(index);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_dataset_MeshTemplateFeature_findField_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring fieldName_j)
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
					const 					EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature *pObjectX = (EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCMeshTemplateFeatureProxy))
					{
						ev_int32 __values1 = pObjectX->EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature::findField(fieldName);
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_MeshTemplateFeature_register_1findField_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMeshTemplateFeatureProxy *pObjectX = (JCMeshTemplateFeatureProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_dataset_MeshTemplateFeature_findField_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring fieldName_j)
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
					const 					EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature *pObjectX = (EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature*) pObjXXXX;
					ev_int32 __values1 = pObjectX->EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature::findField(fieldName);
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_MeshTemplateFeature_getValue_1CVariant_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong value_j, jlong index_j)
				{
					EarthView::World::Core::CVariant &value = *(EarthView::World::Core::CVariant*) value_j;
					ev_uint32 index = (ev_uint32) index_j;
					const 					EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature *pObjectX = (EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCMeshTemplateFeatureProxy))
					{
						pObjectX->EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature::getValue(value, index);
					}
					else
					{
						pObjectX->getValue(value, index);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_MeshTemplateFeature_register_1getValue_1CVariant_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMeshTemplateFeatureProxy *pObjectX = (JCMeshTemplateFeatureProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_MeshTemplateFeature_getValue_1CVariant_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong value_j, jlong index_j)
				{
					EarthView::World::Core::CVariant &value = *(EarthView::World::Core::CVariant*) value_j;
					ev_uint32 index = (ev_uint32) index_j;
					const 					EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature *pObjectX = (EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature::getValue(value, index);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_MeshTemplateFeature_getValue_1CVariant_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong value_j, jstring name_j)
				{
					EarthView::World::Core::CVariant &value = *(EarthView::World::Core::CVariant*) value_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
					const EVString name = name_ch;
					__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
					#else
					const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
					const EVString name = name_ch;
					__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
					#endif
					const 					EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature *pObjectX = (EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCMeshTemplateFeatureProxy))
					{
						pObjectX->EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature::getValue(value, name);
					}
					else
					{
						pObjectX->getValue(value, name);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_MeshTemplateFeature_register_1getValue_1CVariant_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMeshTemplateFeatureProxy *pObjectX = (JCMeshTemplateFeatureProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getValue_CVariant_EVString_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getValue_CVariant_EVString_callback", "(JLjava/lang/String;)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_MeshTemplateFeature_getValue_1CVariant_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong value_j, jstring name_j)
				{
					EarthView::World::Core::CVariant &value = *(EarthView::World::Core::CVariant*) value_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
					const EVString name = name_ch;
					__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
					#else
					const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
					const EVString name = name_ch;
					__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
					#endif
					const 					EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature *pObjectX = (EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature::getValue(value, name);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_MeshTemplateFeature_getGeometryRef_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature *pObjectX = (EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCMeshTemplateFeatureProxy))
					{
						const EarthView::World::Spatial::Geometry::IGeometry* __values1 = pObjectX->EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature::getGeometryRef();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_MeshTemplateFeature_register_1getGeometryRef_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMeshTemplateFeatureProxy *pObjectX = (JCMeshTemplateFeatureProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_MeshTemplateFeature_getGeometryRef_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature *pObjectX = (EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature*) pObjXXXX;
					const EarthView::World::Spatial::Geometry::IGeometry* __values1 = pObjectX->EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature::getGeometryRef();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_MeshTemplateFeature_setGeometry_1IGeometry(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong geom_j)
				{
					const EarthView::World::Spatial::Geometry::IGeometry *geom = (const EarthView::World::Spatial::Geometry::IGeometry*) geom_j;
					EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature *pObjectX = (EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCMeshTemplateFeatureProxy))
					{
						pObjectX->EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature::setGeometry(geom);
					}
					else
					{
						pObjectX->setGeometry(geom);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_MeshTemplateFeature_register_1setGeometry_1IGeometry(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMeshTemplateFeatureProxy *pObjectX = (JCMeshTemplateFeatureProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_MeshTemplateFeature_setGeometry_1IGeometry_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong geom_j)
				{
					const EarthView::World::Spatial::Geometry::IGeometry *geom = (const EarthView::World::Spatial::Geometry::IGeometry*) geom_j;
					EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature *pObjectX = (EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature::setGeometry(geom);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_MeshTemplateFeature_setValue_1CVariant_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong value_j, jlong index_j)
				{
					const EarthView::World::Core::CVariant &value = *(EarthView::World::Core::CVariant*) value_j;
					ev_uint32 index = (ev_uint32) index_j;
					EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature *pObjectX = (EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCMeshTemplateFeatureProxy))
					{
						pObjectX->EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature::setValue(value, index);
					}
					else
					{
						pObjectX->setValue(value, index);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_MeshTemplateFeature_register_1setValue_1CVariant_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMeshTemplateFeatureProxy *pObjectX = (JCMeshTemplateFeatureProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_MeshTemplateFeature_setValue_1CVariant_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong value_j, jlong index_j)
				{
					const EarthView::World::Core::CVariant &value = *(EarthView::World::Core::CVariant*) value_j;
					ev_uint32 index = (ev_uint32) index_j;
					EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature *pObjectX = (EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature::setValue(value, index);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_MeshTemplateFeature_setValue_1CVariant_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong value_j, jstring name_j)
				{
					const EarthView::World::Core::CVariant &value = *(EarthView::World::Core::CVariant*) value_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
					const EVString name = name_ch;
					__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
					#else
					const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
					const EVString name = name_ch;
					__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
					#endif
					EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature *pObjectX = (EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCMeshTemplateFeatureProxy))
					{
						pObjectX->EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature::setValue(value, name);
					}
					else
					{
						pObjectX->setValue(value, name);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_MeshTemplateFeature_register_1setValue_1CVariant_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMeshTemplateFeatureProxy *pObjectX = (JCMeshTemplateFeatureProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setValue_CVariant_EVString_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setValue_CVariant_EVString_callback", "(JLjava/lang/String;)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_MeshTemplateFeature_setValue_1CVariant_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong value_j, jstring name_j)
				{
					const EarthView::World::Core::CVariant &value = *(EarthView::World::Core::CVariant*) value_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
					const EVString name = name_ch;
					__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
					#else
					const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
					const EVString name = name_ch;
					__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
					#endif
					EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature *pObjectX = (EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature::setValue(value, name);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataset_MeshTemplateFeature_deleteFeature_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature *pObjectX = (EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCMeshTemplateFeatureProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature::deleteFeature();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->deleteFeature();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_MeshTemplateFeature_register_1deleteFeature_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMeshTemplateFeatureProxy *pObjectX = (JCMeshTemplateFeatureProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataset_MeshTemplateFeature_deleteFeature_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature *pObjectX = (EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature::deleteFeature();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_MeshTemplateFeature_setMeshDataRef_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong meshID_j)
				{
					ev_uint32 meshID = (ev_uint32) meshID_j;
					EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature *pObjectX = (EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCMeshTemplateFeatureProxy))
					{
						pObjectX->EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature::setMeshDataRef(meshID);
					}
					else
					{
						pObjectX->setMeshDataRef(meshID);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_MeshTemplateFeature_register_1setMeshDataRef_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMeshTemplateFeatureProxy *pObjectX = (JCMeshTemplateFeatureProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setMeshDataRef_ev_uint32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setMeshDataRef_ev_uint32_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_MeshTemplateFeature_setMeshDataRef_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong meshID_j)
				{
					ev_uint32 meshID = (ev_uint32) meshID_j;
					EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature *pObjectX = (EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature::setMeshDataRef(meshID);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_dataset_MeshTemplateFeature_getPropertyType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature *pObjectX = (EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCMeshTemplateFeatureProxy))
					{
						EVString __values1 = pObjectX->EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature::getPropertyType();
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
					else
					{
						EVString __values1 = pObjectX->getPropertyType();
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_MeshTemplateFeature_register_1getPropertyType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMeshTemplateFeatureProxy *pObjectX = (JCMeshTemplateFeatureProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getPropertyType_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getPropertyType_void_callback", "()Ljava/lang/String;");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_dataset_MeshTemplateFeature_getPropertyType_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature *pObjectX = (EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature*) pObjXXXX;
					EVString __values1 = pObjectX->EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature::getPropertyType();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_MeshTemplateFeature_getPropertyFieldRef_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature *pObjectX = (EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCMeshTemplateFeatureProxy))
					{
						EarthView::World::Spatial::GeoDataset::IFields* __values1 = pObjectX->EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature::getPropertyFieldRef();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IFields* __values1 = pObjectX->getPropertyFieldRef();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_MeshTemplateFeature_register_1getPropertyFieldRef_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMeshTemplateFeatureProxy *pObjectX = (JCMeshTemplateFeatureProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getPropertyFieldRef_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getPropertyFieldRef_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_MeshTemplateFeature_getPropertyFieldRef_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature *pObjectX = (EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature*) pObjXXXX;
					EarthView::World::Spatial::GeoDataset::IFields* __values1 = pObjectX->EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature::getPropertyFieldRef();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_MeshTemplateFeature_ev_1clone_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature *pObjectX = (EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCMeshTemplateFeatureProxy))
					{
						EarthView::World::Spatial::GeoDataset::IFeature* __values1 = pObjectX->EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature::clone();
						if(__values1 != NULL) {							((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
						}						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IFeature* __values1 = pObjectX->clone();
						if(__values1 != NULL) {							((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
						}						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_MeshTemplateFeature_register_1ev_1clone_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMeshTemplateFeatureProxy *pObjectX = (JCMeshTemplateFeatureProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_MeshTemplateFeature_ev_1clone_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature *pObjectX = (EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature*) pObjXXXX;
					EarthView::World::Spatial::GeoDataset::IFeature* __values1 = pObjectX->EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature::clone();
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_MeshTemplateFeature_register_1getGeometryType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMeshTemplateFeatureProxy *pObjectX = (JCMeshTemplateFeatureProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_MeshTemplateFeature_register_1getEnvelopeRef_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMeshTemplateFeatureProxy *pObjectX = (JCMeshTemplateFeatureProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_MeshTemplateFeature_register_1saveFeature_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMeshTemplateFeatureProxy *pObjectX = (JCMeshTemplateFeatureProxy*) pObjXXXX;
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
}
