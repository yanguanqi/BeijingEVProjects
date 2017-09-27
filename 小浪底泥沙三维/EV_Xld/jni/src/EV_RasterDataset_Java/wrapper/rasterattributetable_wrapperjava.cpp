/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "rasterdataset/rasterattributetable.h"
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
			namespace Raster
			{
				class JCRasterAttributeTableProxy : public EarthView::World::Spatial2D::Raster::CRasterAttributeTable
				{
				 private:
					EarthView::World::Core::ev_string m_getRowCount_void_callback;
					EarthView::World::Core::ev_string m_getFieldCount_void_callback;
					EarthView::World::Core::ev_string m_getFields_void_callback;
					EarthView::World::Core::ev_string m_getField_ev_uint32_callback;
					EarthView::World::Core::ev_string m_getValueField_void_callback;
					EarthView::World::Core::ev_string m_findField_EVString_callback;
					EarthView::World::Core::ev_string m_addField_IField_callback;
					EarthView::World::Core::ev_string m_removeField_ev_uint32_callback;
					EarthView::World::Core::ev_string m_removeAllFields_void_callback;
					EarthView::World::Core::ev_string m_addRow_CVariantArray_callback;
					EarthView::World::Core::ev_string m_removeRow_ev_uint32_callback;
					EarthView::World::Core::ev_string m_removeAllRows_void_callback;
					EarthView::World::Core::ev_string m_getElement_ev_uint32_ev_uint32_CVariant_callback;
					EarthView::World::Core::ev_string m_setElement_ev_uint32_ev_uint32_CVariant_callback;
					EarthView::World::Core::ev_string m_toXmlElement_void_callback;
					EarthView::World::Core::ev_string m_fromXmlElement_CXmlElement_callback;
				public:
					JCRasterAttributeTableProxy(EarthView::World::Core::CNameValuePairList *pList) : CRasterAttributeTable(pList)
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
					void register_getRowCount_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getRowCount_void_callback = __method;
					}
					void register_getFieldCount_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getFieldCount_void_callback = __method;
					}
					void register_getFields_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getFields_void_callback = __method;
					}
					void register_getField_ev_uint32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getField_ev_uint32_callback = __method;
					}
					void register_getValueField_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getValueField_void_callback = __method;
					}
					void register_findField_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_findField_EVString_callback = __method;
					}
					void register_addField_IField_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_addField_IField_callback = __method;
					}
					void register_removeField_ev_uint32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_removeField_ev_uint32_callback = __method;
					}
					void register_removeAllFields_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_removeAllFields_void_callback = __method;
					}
					void register_addRow_CVariantArray_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_addRow_CVariantArray_callback = __method;
					}
					void register_removeRow_ev_uint32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_removeRow_ev_uint32_callback = __method;
					}
					void register_removeAllRows_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_removeAllRows_void_callback = __method;
					}
					void register_getElement_ev_uint32_ev_uint32_CVariant_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getElement_ev_uint32_ev_uint32_CVariant_callback = __method;
					}
					void register_setElement_ev_uint32_ev_uint32_CVariant_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setElement_ev_uint32_ev_uint32_CVariant_callback = __method;
					}
					void register_toXmlElement_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_toXmlElement_void_callback = __method;
					}
					void register_fromXmlElement_CXmlElement_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_fromXmlElement_CXmlElement_callback = __method;
					}
					virtual ev_uint32 getRowCount() const
					{
						if (this->_gRef != NULL && this->m_getRowCount_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getRowCount_void_callback");
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
							return this->CRasterAttributeTable::getRowCount();
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
							return this->CRasterAttributeTable::getFieldCount();
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
							return this->CRasterAttributeTable::getFields();
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
							return this->CRasterAttributeTable::getField(index);
						}
					}
					virtual const EarthView::World::Spatial::GeoDataset::IField* getValueField() const
					{
						if (this->_gRef != NULL && this->m_getValueField_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getValueField_void_callback");
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
							return this->CRasterAttributeTable::getValueField();
						}
					}
					virtual ev_uint32 findField(EVString& fieldName) const
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
							jlong fieldName_j = (jlong) &fieldName;
							jmethodID __method = __gr->getMethod("findField_EVString_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , fieldName_j);
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
							return this->CRasterAttributeTable::findField(fieldName);
						}
					}
					virtual void addField(const EarthView::World::Spatial::GeoDataset::IField* pField)
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
							jlong pField_j = (jlong) pField;
							jmethodID __method = __gr->getMethod("addField_IField_callback");
							__env->CallVoidMethod(__obj, __method , pField_j);
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
							return this->CRasterAttributeTable::addField(pField);
						}
					}
					virtual void removeField(ev_uint32 index)
					{
						if (this->_gRef != NULL && this->m_removeField_ev_uint32_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
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
							jmethodID __method = __gr->getMethod("removeField_ev_uint32_callback");
							__env->CallVoidMethod(__obj, __method , index_j);
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
							return this->CRasterAttributeTable::removeField(index);
						}
					}
					virtual void removeAllFields()
					{
						if (this->_gRef != NULL && this->m_removeAllFields_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("removeAllFields_void_callback");
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
							return this->CRasterAttributeTable::removeAllFields();
						}
					}
					virtual void addRow(EarthView::World::Core::CVariantArray& varArray)
					{
						if (this->_gRef != NULL && this->m_addRow_CVariantArray_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong varArray_j = (jlong) &varArray;
							jmethodID __method = __gr->getMethod("addRow_CVariantArray_callback");
							__env->CallVoidMethod(__obj, __method , varArray_j);
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
							return this->CRasterAttributeTable::addRow(varArray);
						}
					}
					virtual void removeRow(ev_uint32 row)
					{
						if (this->_gRef != NULL && this->m_removeRow_ev_uint32_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong row_j = (jlong) row;
							jmethodID __method = __gr->getMethod("removeRow_ev_uint32_callback");
							__env->CallVoidMethod(__obj, __method , row_j);
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
							return this->CRasterAttributeTable::removeRow(row);
						}
					}
					virtual void removeAllRows()
					{
						if (this->_gRef != NULL && this->m_removeAllRows_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("removeAllRows_void_callback");
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
							return this->CRasterAttributeTable::removeAllRows();
						}
					}
					virtual ev_bool getElement(ev_uint32 row, ev_uint32 fieldIndex, EarthView::World::Core::CVariant& var) const
					{
						if (this->_gRef != NULL && this->m_getElement_ev_uint32_ev_uint32_CVariant_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong row_j = (jlong) row;
							jlong fieldIndex_j = (jlong) fieldIndex;
							jlong var_j = (jlong) &var;
							jmethodID __method = __gr->getMethod("getElement_ev_uint32_ev_uint32_CVariant_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , row_j, fieldIndex_j, var_j);
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
							return this->CRasterAttributeTable::getElement(row, fieldIndex, var);
						}
					}
					virtual ev_bool setElement(ev_uint32 row, ev_uint32 fieldIndex, const EarthView::World::Core::CVariant& var)
					{
						if (this->_gRef != NULL && this->m_setElement_ev_uint32_ev_uint32_CVariant_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong row_j = (jlong) row;
							jlong fieldIndex_j = (jlong) fieldIndex;
							jlong var_j = (jlong) &var;
							jmethodID __method = __gr->getMethod("setElement_ev_uint32_ev_uint32_CVariant_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , row_j, fieldIndex_j, var_j);
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
							return this->CRasterAttributeTable::setElement(row, fieldIndex, var);
						}
					}
					virtual EarthView::World::Core::CXmlElement toXmlElement() const
					{
						if (this->_gRef != NULL && this->m_toXmlElement_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("toXmlElement_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Core::CXmlElement __values1 = *(EarthView::World::Core::CXmlElement*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CRasterAttributeTable::toXmlElement();
						}
					}
					virtual void fromXmlElement(EarthView::World::Core::CXmlElement& element)
					{
						if (this->_gRef != NULL && this->m_fromXmlElement_CXmlElement_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong element_j = (jlong) &element;
							jmethodID __method = __gr->getMethod("fromXmlElement_CXmlElement_callback");
							__env->CallVoidMethod(__obj, __method , element_j);
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
							return this->CRasterAttributeTable::fromXmlElement(element);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCRasterAttributeTableProxy);
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_raster_RasterAttributeTable_getRowCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Raster::CRasterAttributeTable *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterAttributeTable*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRasterAttributeTableProxy))
					{
						ev_uint32 __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterAttributeTable::getRowCount();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						ev_uint32 __values1 = pObjectX->getRowCount();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterAttributeTable_register_1getRowCount_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRasterAttributeTableProxy *pObjectX = (JCRasterAttributeTableProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getRowCount_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getRowCount_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_raster_RasterAttributeTable_getRowCount_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Raster::CRasterAttributeTable *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterAttributeTable*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterAttributeTable::getRowCount();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_raster_RasterAttributeTable_getFieldCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Raster::CRasterAttributeTable *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterAttributeTable*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRasterAttributeTableProxy))
					{
						ev_uint32 __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterAttributeTable::getFieldCount();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterAttributeTable_register_1getFieldCount_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRasterAttributeTableProxy *pObjectX = (JCRasterAttributeTableProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_raster_RasterAttributeTable_getFieldCount_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Raster::CRasterAttributeTable *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterAttributeTable*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterAttributeTable::getFieldCount();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_raster_RasterAttributeTable_getFields_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Raster::CRasterAttributeTable *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterAttributeTable*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRasterAttributeTableProxy))
					{
						const EarthView::World::Spatial::GeoDataset::IFields* __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterAttributeTable::getFields();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterAttributeTable_register_1getFields_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRasterAttributeTableProxy *pObjectX = (JCRasterAttributeTableProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_raster_RasterAttributeTable_getFields_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Raster::CRasterAttributeTable *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterAttributeTable*) pObjXXXX;
					const EarthView::World::Spatial::GeoDataset::IFields* __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterAttributeTable::getFields();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_raster_RasterAttributeTable_getField_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					const 					EarthView::World::Spatial2D::Raster::CRasterAttributeTable *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterAttributeTable*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRasterAttributeTableProxy))
					{
						const EarthView::World::Spatial::GeoDataset::IField* __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterAttributeTable::getField(index);
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterAttributeTable_register_1getField_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRasterAttributeTableProxy *pObjectX = (JCRasterAttributeTableProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_raster_RasterAttributeTable_getField_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					const 					EarthView::World::Spatial2D::Raster::CRasterAttributeTable *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterAttributeTable*) pObjXXXX;
					const EarthView::World::Spatial::GeoDataset::IField* __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterAttributeTable::getField(index);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_raster_RasterAttributeTable_getValueField_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Raster::CRasterAttributeTable *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterAttributeTable*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRasterAttributeTableProxy))
					{
						const EarthView::World::Spatial::GeoDataset::IField* __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterAttributeTable::getValueField();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						const EarthView::World::Spatial::GeoDataset::IField* __values1 = pObjectX->getValueField();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterAttributeTable_register_1getValueField_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRasterAttributeTableProxy *pObjectX = (JCRasterAttributeTableProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getValueField_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getValueField_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_raster_RasterAttributeTable_getValueField_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Raster::CRasterAttributeTable *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterAttributeTable*) pObjXXXX;
					const EarthView::World::Spatial::GeoDataset::IField* __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterAttributeTable::getValueField();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_raster_RasterAttributeTable_findField_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong fieldName_j)
				{
					EVString &fieldName = *(EVString*) fieldName_j;
					const 					EarthView::World::Spatial2D::Raster::CRasterAttributeTable *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterAttributeTable*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRasterAttributeTableProxy))
					{
						ev_uint32 __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterAttributeTable::findField(fieldName);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						ev_uint32 __values1 = pObjectX->findField(fieldName);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterAttributeTable_register_1findField_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRasterAttributeTableProxy *pObjectX = (JCRasterAttributeTableProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_findField_EVString_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"findField_EVString_callback", "(J)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_raster_RasterAttributeTable_findField_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong fieldName_j)
				{
					EVString &fieldName = *(EVString*) fieldName_j;
					const 					EarthView::World::Spatial2D::Raster::CRasterAttributeTable *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterAttributeTable*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterAttributeTable::findField(fieldName);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterAttributeTable_addField_1IField(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pField_j)
				{
					const EarthView::World::Spatial::GeoDataset::IField *pField = (const EarthView::World::Spatial::GeoDataset::IField*) pField_j;
					EarthView::World::Spatial2D::Raster::CRasterAttributeTable *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterAttributeTable*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRasterAttributeTableProxy))
					{
						pObjectX->EarthView::World::Spatial2D::Raster::CRasterAttributeTable::addField(pField);
					}
					else
					{
						pObjectX->addField(pField);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterAttributeTable_register_1addField_1IField(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRasterAttributeTableProxy *pObjectX = (JCRasterAttributeTableProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_addField_IField_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"addField_IField_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterAttributeTable_addField_1IField_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pField_j)
				{
					const EarthView::World::Spatial::GeoDataset::IField *pField = (const EarthView::World::Spatial::GeoDataset::IField*) pField_j;
					EarthView::World::Spatial2D::Raster::CRasterAttributeTable *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterAttributeTable*) pObjXXXX;
					pObjectX->EarthView::World::Spatial2D::Raster::CRasterAttributeTable::addField(pField);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterAttributeTable_removeField_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					EarthView::World::Spatial2D::Raster::CRasterAttributeTable *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterAttributeTable*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRasterAttributeTableProxy))
					{
						pObjectX->EarthView::World::Spatial2D::Raster::CRasterAttributeTable::removeField(index);
					}
					else
					{
						pObjectX->removeField(index);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterAttributeTable_register_1removeField_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRasterAttributeTableProxy *pObjectX = (JCRasterAttributeTableProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_removeField_ev_uint32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"removeField_ev_uint32_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterAttributeTable_removeField_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					EarthView::World::Spatial2D::Raster::CRasterAttributeTable *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterAttributeTable*) pObjXXXX;
					pObjectX->EarthView::World::Spatial2D::Raster::CRasterAttributeTable::removeField(index);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterAttributeTable_removeAllFields_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Raster::CRasterAttributeTable *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterAttributeTable*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRasterAttributeTableProxy))
					{
						pObjectX->EarthView::World::Spatial2D::Raster::CRasterAttributeTable::removeAllFields();
					}
					else
					{
						pObjectX->removeAllFields();
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterAttributeTable_register_1removeAllFields_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRasterAttributeTableProxy *pObjectX = (JCRasterAttributeTableProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_removeAllFields_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"removeAllFields_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterAttributeTable_removeAllFields_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Raster::CRasterAttributeTable *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterAttributeTable*) pObjXXXX;
					pObjectX->EarthView::World::Spatial2D::Raster::CRasterAttributeTable::removeAllFields();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterAttributeTable_addRow_1CVariantArray(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong varArray_j)
				{
					EarthView::World::Core::CVariantArray &varArray = *(EarthView::World::Core::CVariantArray*) varArray_j;
					EarthView::World::Spatial2D::Raster::CRasterAttributeTable *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterAttributeTable*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRasterAttributeTableProxy))
					{
						pObjectX->EarthView::World::Spatial2D::Raster::CRasterAttributeTable::addRow(varArray);
					}
					else
					{
						pObjectX->addRow(varArray);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterAttributeTable_register_1addRow_1CVariantArray(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRasterAttributeTableProxy *pObjectX = (JCRasterAttributeTableProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_addRow_CVariantArray_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"addRow_CVariantArray_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterAttributeTable_addRow_1CVariantArray_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong varArray_j)
				{
					EarthView::World::Core::CVariantArray &varArray = *(EarthView::World::Core::CVariantArray*) varArray_j;
					EarthView::World::Spatial2D::Raster::CRasterAttributeTable *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterAttributeTable*) pObjXXXX;
					pObjectX->EarthView::World::Spatial2D::Raster::CRasterAttributeTable::addRow(varArray);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterAttributeTable_removeRow_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong row_j)
				{
					ev_uint32 row = (ev_uint32) row_j;
					EarthView::World::Spatial2D::Raster::CRasterAttributeTable *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterAttributeTable*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRasterAttributeTableProxy))
					{
						pObjectX->EarthView::World::Spatial2D::Raster::CRasterAttributeTable::removeRow(row);
					}
					else
					{
						pObjectX->removeRow(row);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterAttributeTable_register_1removeRow_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRasterAttributeTableProxy *pObjectX = (JCRasterAttributeTableProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_removeRow_ev_uint32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"removeRow_ev_uint32_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterAttributeTable_removeRow_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong row_j)
				{
					ev_uint32 row = (ev_uint32) row_j;
					EarthView::World::Spatial2D::Raster::CRasterAttributeTable *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterAttributeTable*) pObjXXXX;
					pObjectX->EarthView::World::Spatial2D::Raster::CRasterAttributeTable::removeRow(row);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterAttributeTable_removeAllRows_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Raster::CRasterAttributeTable *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterAttributeTable*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRasterAttributeTableProxy))
					{
						pObjectX->EarthView::World::Spatial2D::Raster::CRasterAttributeTable::removeAllRows();
					}
					else
					{
						pObjectX->removeAllRows();
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterAttributeTable_register_1removeAllRows_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRasterAttributeTableProxy *pObjectX = (JCRasterAttributeTableProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_removeAllRows_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"removeAllRows_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterAttributeTable_removeAllRows_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Raster::CRasterAttributeTable *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterAttributeTable*) pObjXXXX;
					pObjectX->EarthView::World::Spatial2D::Raster::CRasterAttributeTable::removeAllRows();
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_raster_RasterAttributeTable_getElement_1ev_1uint32_1ev_1uint32_1CVariant(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong row_j, jlong fieldIndex_j, jlong var_j)
				{
					ev_uint32 row = (ev_uint32) row_j;
					ev_uint32 fieldIndex = (ev_uint32) fieldIndex_j;
					EarthView::World::Core::CVariant &var = *(EarthView::World::Core::CVariant*) var_j;
					const 					EarthView::World::Spatial2D::Raster::CRasterAttributeTable *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterAttributeTable*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRasterAttributeTableProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterAttributeTable::getElement(row, fieldIndex, var);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->getElement(row, fieldIndex, var);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterAttributeTable_register_1getElement_1ev_1uint32_1ev_1uint32_1CVariant(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRasterAttributeTableProxy *pObjectX = (JCRasterAttributeTableProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getElement_ev_uint32_ev_uint32_CVariant_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getElement_ev_uint32_ev_uint32_CVariant_callback", "(JJJ)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_raster_RasterAttributeTable_getElement_1ev_1uint32_1ev_1uint32_1CVariant_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong row_j, jlong fieldIndex_j, jlong var_j)
				{
					ev_uint32 row = (ev_uint32) row_j;
					ev_uint32 fieldIndex = (ev_uint32) fieldIndex_j;
					EarthView::World::Core::CVariant &var = *(EarthView::World::Core::CVariant*) var_j;
					const 					EarthView::World::Spatial2D::Raster::CRasterAttributeTable *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterAttributeTable*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterAttributeTable::getElement(row, fieldIndex, var);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_raster_RasterAttributeTable_setElement_1ev_1uint32_1ev_1uint32_1CVariant(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong row_j, jlong fieldIndex_j, jlong var_j)
				{
					ev_uint32 row = (ev_uint32) row_j;
					ev_uint32 fieldIndex = (ev_uint32) fieldIndex_j;
					const EarthView::World::Core::CVariant &var = *(EarthView::World::Core::CVariant*) var_j;
					EarthView::World::Spatial2D::Raster::CRasterAttributeTable *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterAttributeTable*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRasterAttributeTableProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterAttributeTable::setElement(row, fieldIndex, var);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->setElement(row, fieldIndex, var);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterAttributeTable_register_1setElement_1ev_1uint32_1ev_1uint32_1CVariant(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRasterAttributeTableProxy *pObjectX = (JCRasterAttributeTableProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setElement_ev_uint32_ev_uint32_CVariant_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setElement_ev_uint32_ev_uint32_CVariant_callback", "(JJJ)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_raster_RasterAttributeTable_setElement_1ev_1uint32_1ev_1uint32_1CVariant_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong row_j, jlong fieldIndex_j, jlong var_j)
				{
					ev_uint32 row = (ev_uint32) row_j;
					ev_uint32 fieldIndex = (ev_uint32) fieldIndex_j;
					const EarthView::World::Core::CVariant &var = *(EarthView::World::Core::CVariant*) var_j;
					EarthView::World::Spatial2D::Raster::CRasterAttributeTable *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterAttributeTable*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterAttributeTable::setElement(row, fieldIndex, var);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_raster_RasterAttributeTable_toXmlElement_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Raster::CRasterAttributeTable *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterAttributeTable*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRasterAttributeTableProxy))
					{
						EarthView::World::Core::CXmlElement __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterAttributeTable::toXmlElement();
						EarthView::World::Core::CXmlElement *returnvalues = new EarthView::World::Core::CXmlElement(__values1);
						((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
						jlong __values1_j = (jlong) returnvalues;
						return __values1_j;
					}
					else
					{
						EarthView::World::Core::CXmlElement __values1 = pObjectX->toXmlElement();
						EarthView::World::Core::CXmlElement *returnvalues = new EarthView::World::Core::CXmlElement(__values1);
						((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
						jlong __values1_j = (jlong) returnvalues;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterAttributeTable_register_1toXmlElement_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRasterAttributeTableProxy *pObjectX = (JCRasterAttributeTableProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_toXmlElement_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"toXmlElement_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_raster_RasterAttributeTable_toXmlElement_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Raster::CRasterAttributeTable *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterAttributeTable*) pObjXXXX;
					EarthView::World::Core::CXmlElement __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterAttributeTable::toXmlElement();
					EarthView::World::Core::CXmlElement *returnvalues = new EarthView::World::Core::CXmlElement(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterAttributeTable_fromXmlElement_1CXmlElement(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong element_j)
				{
					EarthView::World::Core::CXmlElement &element = *(EarthView::World::Core::CXmlElement*) element_j;
					EarthView::World::Spatial2D::Raster::CRasterAttributeTable *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterAttributeTable*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRasterAttributeTableProxy))
					{
						pObjectX->EarthView::World::Spatial2D::Raster::CRasterAttributeTable::fromXmlElement(element);
					}
					else
					{
						pObjectX->fromXmlElement(element);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterAttributeTable_register_1fromXmlElement_1CXmlElement(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRasterAttributeTableProxy *pObjectX = (JCRasterAttributeTableProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_fromXmlElement_CXmlElement_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"fromXmlElement_CXmlElement_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterAttributeTable_fromXmlElement_1CXmlElement_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong element_j)
				{
					EarthView::World::Core::CXmlElement &element = *(EarthView::World::Core::CXmlElement*) element_j;
					EarthView::World::Spatial2D::Raster::CRasterAttributeTable *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterAttributeTable*) pObjXXXX;
					pObjectX->EarthView::World::Spatial2D::Raster::CRasterAttributeTable::fromXmlElement(element);
				}
			}
		}
	}
}
