/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "rasterdataset/dbrasterdatasource.h"
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
				class JCDBRasterDataSourceProxy : public EarthView::World::Spatial2D::Raster::CDBRasterDataSource
				{
				 private:
					EarthView::World::Core::ev_string m_createDataset_EVString_callback;
					EarthView::World::Core::ev_string m_createDataset_EVString_CDataStream_callback;
					EarthView::World::Core::ev_string m_getDatabase_void_callback;
					EarthView::World::Core::ev_string m_IsEditing_void_callback;
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
					JCDBRasterDataSourceProxy(EarthView::World::Core::CNameValuePairList *pList) : CDBRasterDataSource(pList)
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
					void register_createDataset_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_createDataset_EVString_callback = __method;
					}
					void register_createDataset_EVString_CDataStream_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_createDataset_EVString_CDataStream_callback = __method;
					}
					void register_getDatabase_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getDatabase_void_callback = __method;
					}
					void register_IsEditing_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_IsEditing_void_callback = __method;
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
							return this->CDBRasterDataSource::getName();
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
							return this->CDBRasterDataSource::getType();
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
							return this->CDBRasterDataSource::isValid();
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
							return this->CDBRasterDataSource::getDatasetInfo(name);
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
							return this->CDBRasterDataSource::getDatasetInfos(type);
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
							return this->CDBRasterDataSource::getPropertySet();
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
							return this->CDBRasterDataSource::openDataset(name);
						}
					}
					virtual ev_bool closeDataset(EarthView::World::Spatial::GeoDataset::IDataset* pDataset)
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
							jlong pDataset_j = (jlong) pDataset;
							jmethodID __method = __gr->getMethod("closeDataset_IDataset_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , pDataset_j);
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
							return this->CDBRasterDataSource::closeDataset(pDataset);
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
							return this->CDBRasterDataSource::deleteDataset(name);
						}
					}
					virtual EarthView::World::Spatial2D::Raster::CDBRasterDataset* createDataset(const EVString& name)
					{
						if (this->_gRef != NULL && this->m_createDataset_EVString_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
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
							jmethodID __method = __gr->getMethod("createDataset_EVString_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , name_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial2D::Raster::CDBRasterDataset *__values1 = (EarthView::World::Spatial2D::Raster::CDBRasterDataset*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CDBRasterDataSource::createDataset(name);
						}
					}
					virtual EarthView::World::Spatial2D::Raster::CDBRasterDataset* createDataset(const EVString& name, EarthView::World::Core::CDataStream& stream)
					{
						if (this->_gRef != NULL && this->m_createDataset_EVString_CDataStream_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
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
							jlong stream_j = (jlong) &stream;
							jmethodID __method = __gr->getMethod("createDataset_EVString_CDataStream_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , name_j, stream_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial2D::Raster::CDBRasterDataset *__values1 = (EarthView::World::Spatial2D::Raster::CDBRasterDataset*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CDBRasterDataSource::createDataset(name, stream);
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
							return this->CDBRasterDataSource::toXML();
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
							return this->CDBRasterDataSource::getDatabase();
						}
					}
					virtual ev_bool IsEditing() const
					{
						if (this->_gRef != NULL && this->m_IsEditing_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("IsEditing_void_callback");
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
							return this->CDBRasterDataSource::IsEditing();
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
							return this->CDBRasterDataSource::createFeatureClass(name, geofield, fields);
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
							return this->CDBRasterDataSource::clone();
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCDBRasterDataSourceProxy);
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial2d_raster_Dbrasterdatasource_getName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Raster::CDBRasterDataSource *pObjectX = (EarthView::World::Spatial2D::Raster::CDBRasterDataSource*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCDBRasterDataSourceProxy))
					{
						EVString __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CDBRasterDataSource::getName();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_Dbrasterdatasource_register_1getName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCDBRasterDataSourceProxy *pObjectX = (JCDBRasterDataSourceProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial2d_raster_Dbrasterdatasource_getName_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Raster::CDBRasterDataSource *pObjectX = (EarthView::World::Spatial2D::Raster::CDBRasterDataSource*) pObjXXXX;
					EVString __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CDBRasterDataSource::getName();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_raster_Dbrasterdatasource_getType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Raster::CDBRasterDataSource *pObjectX = (EarthView::World::Spatial2D::Raster::CDBRasterDataSource*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCDBRasterDataSourceProxy))
					{
						ev_int32 __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CDBRasterDataSource::getType();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_Dbrasterdatasource_register_1getType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCDBRasterDataSourceProxy *pObjectX = (JCDBRasterDataSourceProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_raster_Dbrasterdatasource_getType_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Raster::CDBRasterDataSource *pObjectX = (EarthView::World::Spatial2D::Raster::CDBRasterDataSource*) pObjXXXX;
					ev_int32 __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CDBRasterDataSource::getType();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_raster_Dbrasterdatasource_isValid_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Raster::CDBRasterDataSource *pObjectX = (EarthView::World::Spatial2D::Raster::CDBRasterDataSource*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCDBRasterDataSourceProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CDBRasterDataSource::isValid();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_Dbrasterdatasource_register_1isValid_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCDBRasterDataSourceProxy *pObjectX = (JCDBRasterDataSourceProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_raster_Dbrasterdatasource_isValid_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Raster::CDBRasterDataSource *pObjectX = (EarthView::World::Spatial2D::Raster::CDBRasterDataSource*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CDBRasterDataSource::isValid();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_raster_Dbrasterdatasource_getDatasetInfo_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
					EarthView::World::Spatial2D::Raster::CDBRasterDataSource *pObjectX = (EarthView::World::Spatial2D::Raster::CDBRasterDataSource*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCDBRasterDataSourceProxy))
					{
						EarthView::World::Spatial::GeoDataset::IDataMetaInfo* __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CDBRasterDataSource::getDatasetInfo(name);
						if(__values1 != NULL) {							((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
						}						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IDataMetaInfo* __values1 = pObjectX->getDatasetInfo(name);
						if(__values1 != NULL) {							((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
						}						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_Dbrasterdatasource_register_1getDatasetInfo_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCDBRasterDataSourceProxy *pObjectX = (JCDBRasterDataSourceProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_raster_Dbrasterdatasource_getDatasetInfo_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
					EarthView::World::Spatial2D::Raster::CDBRasterDataSource *pObjectX = (EarthView::World::Spatial2D::Raster::CDBRasterDataSource*) pObjXXXX;
					EarthView::World::Spatial::GeoDataset::IDataMetaInfo* __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CDBRasterDataSource::getDatasetInfo(name);
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_raster_Dbrasterdatasource_getDatasetInfos_1EVDatasetType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint type_j)
				{
					EarthView::World::Spatial::GeoDataset::EVDatasetType type = (EarthView::World::Spatial::GeoDataset::EVDatasetType) type_j;
					EarthView::World::Spatial2D::Raster::CDBRasterDataSource *pObjectX = (EarthView::World::Spatial2D::Raster::CDBRasterDataSource*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCDBRasterDataSourceProxy))
					{
						EarthView::World::Spatial::GeoDataset::IDataMetaInfos* __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CDBRasterDataSource::getDatasetInfos(type);
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_Dbrasterdatasource_register_1getDatasetInfos_1EVDatasetType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCDBRasterDataSourceProxy *pObjectX = (JCDBRasterDataSourceProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_raster_Dbrasterdatasource_getDatasetInfos_1EVDatasetType_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint type_j)
				{
					EarthView::World::Spatial::GeoDataset::EVDatasetType type = (EarthView::World::Spatial::GeoDataset::EVDatasetType) type_j;
					EarthView::World::Spatial2D::Raster::CDBRasterDataSource *pObjectX = (EarthView::World::Spatial2D::Raster::CDBRasterDataSource*) pObjXXXX;
					EarthView::World::Spatial::GeoDataset::IDataMetaInfos* __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CDBRasterDataSource::getDatasetInfos(type);
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_raster_Dbrasterdatasource_getPropertySet_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Raster::CDBRasterDataSource *pObjectX = (EarthView::World::Spatial2D::Raster::CDBRasterDataSource*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCDBRasterDataSourceProxy))
					{
						EarthView::World::Spatial::GeoDataset::IPropertySet* __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CDBRasterDataSource::getPropertySet();
						if(__values1 != NULL) {							((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
						}						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IPropertySet* __values1 = pObjectX->getPropertySet();
						if(__values1 != NULL) {							((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
						}						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_Dbrasterdatasource_register_1getPropertySet_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCDBRasterDataSourceProxy *pObjectX = (JCDBRasterDataSourceProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_raster_Dbrasterdatasource_getPropertySet_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Raster::CDBRasterDataSource *pObjectX = (EarthView::World::Spatial2D::Raster::CDBRasterDataSource*) pObjXXXX;
					EarthView::World::Spatial::GeoDataset::IPropertySet* __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CDBRasterDataSource::getPropertySet();
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_raster_Dbrasterdatasource_openDataset_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
					EarthView::World::Spatial2D::Raster::CDBRasterDataSource *pObjectX = (EarthView::World::Spatial2D::Raster::CDBRasterDataSource*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCDBRasterDataSourceProxy))
					{
						EarthView::World::Spatial::GeoDataset::IDataset* __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CDBRasterDataSource::openDataset(name);
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_Dbrasterdatasource_register_1openDataset_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCDBRasterDataSourceProxy *pObjectX = (JCDBRasterDataSourceProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_raster_Dbrasterdatasource_openDataset_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
					EarthView::World::Spatial2D::Raster::CDBRasterDataSource *pObjectX = (EarthView::World::Spatial2D::Raster::CDBRasterDataSource*) pObjXXXX;
					EarthView::World::Spatial::GeoDataset::IDataset* __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CDBRasterDataSource::openDataset(name);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_raster_Dbrasterdatasource_closeDataset_1IDataset(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pDataset_j)
				{
					EarthView::World::Spatial::GeoDataset::IDataset *pDataset = (EarthView::World::Spatial::GeoDataset::IDataset*) pDataset_j;
					EarthView::World::Spatial2D::Raster::CDBRasterDataSource *pObjectX = (EarthView::World::Spatial2D::Raster::CDBRasterDataSource*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCDBRasterDataSourceProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CDBRasterDataSource::closeDataset(pDataset);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->closeDataset(pDataset);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_Dbrasterdatasource_register_1closeDataset_1IDataset(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCDBRasterDataSourceProxy *pObjectX = (JCDBRasterDataSourceProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_raster_Dbrasterdatasource_closeDataset_1IDataset_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pDataset_j)
				{
					EarthView::World::Spatial::GeoDataset::IDataset *pDataset = (EarthView::World::Spatial::GeoDataset::IDataset*) pDataset_j;
					EarthView::World::Spatial2D::Raster::CDBRasterDataSource *pObjectX = (EarthView::World::Spatial2D::Raster::CDBRasterDataSource*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CDBRasterDataSource::closeDataset(pDataset);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_raster_Dbrasterdatasource_deleteDataset_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
					EarthView::World::Spatial2D::Raster::CDBRasterDataSource *pObjectX = (EarthView::World::Spatial2D::Raster::CDBRasterDataSource*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCDBRasterDataSourceProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CDBRasterDataSource::deleteDataset(name);
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_Dbrasterdatasource_register_1deleteDataset_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCDBRasterDataSourceProxy *pObjectX = (JCDBRasterDataSourceProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_raster_Dbrasterdatasource_deleteDataset_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
					EarthView::World::Spatial2D::Raster::CDBRasterDataSource *pObjectX = (EarthView::World::Spatial2D::Raster::CDBRasterDataSource*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CDBRasterDataSource::deleteDataset(name);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_raster_Dbrasterdatasource_createDataset_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
					EarthView::World::Spatial2D::Raster::CDBRasterDataSource *pObjectX = (EarthView::World::Spatial2D::Raster::CDBRasterDataSource*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCDBRasterDataSourceProxy))
					{
						EarthView::World::Spatial2D::Raster::CDBRasterDataset* __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CDBRasterDataSource::createDataset(name);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial2D::Raster::CDBRasterDataset* __values1 = pObjectX->createDataset(name);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_Dbrasterdatasource_register_1createDataset_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCDBRasterDataSourceProxy *pObjectX = (JCDBRasterDataSourceProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_createDataset_EVString_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"createDataset_EVString_callback", "(Ljava/lang/String;)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_raster_Dbrasterdatasource_createDataset_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
					EarthView::World::Spatial2D::Raster::CDBRasterDataSource *pObjectX = (EarthView::World::Spatial2D::Raster::CDBRasterDataSource*) pObjXXXX;
					EarthView::World::Spatial2D::Raster::CDBRasterDataset* __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CDBRasterDataSource::createDataset(name);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_raster_Dbrasterdatasource_createDataset_1EVString_1CDataStream(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jlong stream_j)
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
					EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
					EarthView::World::Spatial2D::Raster::CDBRasterDataSource *pObjectX = (EarthView::World::Spatial2D::Raster::CDBRasterDataSource*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCDBRasterDataSourceProxy))
					{
						EarthView::World::Spatial2D::Raster::CDBRasterDataset* __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CDBRasterDataSource::createDataset(name, stream);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial2D::Raster::CDBRasterDataset* __values1 = pObjectX->createDataset(name, stream);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_Dbrasterdatasource_register_1createDataset_1EVString_1CDataStream(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCDBRasterDataSourceProxy *pObjectX = (JCDBRasterDataSourceProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_createDataset_EVString_CDataStream_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"createDataset_EVString_CDataStream_callback", "(Ljava/lang/String;J)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_raster_Dbrasterdatasource_createDataset_1EVString_1CDataStream_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jlong stream_j)
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
					EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
					EarthView::World::Spatial2D::Raster::CDBRasterDataSource *pObjectX = (EarthView::World::Spatial2D::Raster::CDBRasterDataSource*) pObjXXXX;
					EarthView::World::Spatial2D::Raster::CDBRasterDataset* __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CDBRasterDataSource::createDataset(name, stream);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial2d_raster_Dbrasterdatasource_toXML_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Raster::CDBRasterDataSource *pObjectX = (EarthView::World::Spatial2D::Raster::CDBRasterDataSource*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCDBRasterDataSourceProxy))
					{
						EVString __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CDBRasterDataSource::toXML();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_Dbrasterdatasource_register_1toXML_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCDBRasterDataSourceProxy *pObjectX = (JCDBRasterDataSourceProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial2d_raster_Dbrasterdatasource_toXML_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Raster::CDBRasterDataSource *pObjectX = (EarthView::World::Spatial2D::Raster::CDBRasterDataSource*) pObjXXXX;
					EVString __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CDBRasterDataSource::toXML();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_raster_Dbrasterdatasource_getDatabase_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Raster::CDBRasterDataSource *pObjectX = (EarthView::World::Spatial2D::Raster::CDBRasterDataSource*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCDBRasterDataSourceProxy))
					{
						EarthView::World::Core::Database::CSqlDatabase& __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CDBRasterDataSource::getDatabase();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_Dbrasterdatasource_register_1getDatabase_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCDBRasterDataSourceProxy *pObjectX = (JCDBRasterDataSourceProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_raster_Dbrasterdatasource_getDatabase_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Raster::CDBRasterDataSource *pObjectX = (EarthView::World::Spatial2D::Raster::CDBRasterDataSource*) pObjXXXX;
					EarthView::World::Core::Database::CSqlDatabase& __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CDBRasterDataSource::getDatabase();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_raster_Dbrasterdatasource_IsEditing_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Raster::CDBRasterDataSource *pObjectX = (EarthView::World::Spatial2D::Raster::CDBRasterDataSource*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCDBRasterDataSourceProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CDBRasterDataSource::IsEditing();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->IsEditing();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_Dbrasterdatasource_register_1IsEditing_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCDBRasterDataSourceProxy *pObjectX = (JCDBRasterDataSourceProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_IsEditing_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"IsEditing_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_raster_Dbrasterdatasource_IsEditing_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Raster::CDBRasterDataSource *pObjectX = (EarthView::World::Spatial2D::Raster::CDBRasterDataSource*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CDBRasterDataSource::IsEditing();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_Dbrasterdatasource_register_1createFeatureClass_1EVString_1IGeometryField_1IFields(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCDBRasterDataSourceProxy *pObjectX = (JCDBRasterDataSourceProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_Dbrasterdatasource_register_1ev_1clone_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCDBRasterDataSourceProxy *pObjectX = (JCDBRasterDataSourceProxy*) pObjXXXX;
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
			}
		}
	}
}
