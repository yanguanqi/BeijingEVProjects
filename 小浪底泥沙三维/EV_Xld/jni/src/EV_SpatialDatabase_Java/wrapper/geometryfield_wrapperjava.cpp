/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialdatabase/geometryfield.h"
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
				class JCGeometryFieldProxy : public EarthView::World::Spatial::GeoDataset::CGeometryField
				{
				 private:
					EarthView::World::Core::ev_string m_setName_EVString_callback;
					EarthView::World::Core::ev_string m_setCanNull_ev_bool_callback;
					EarthView::World::Core::ev_string m_setCanEdit_ev_bool_callback;
					EarthView::World::Core::ev_string m_setCanDelete_ev_bool_callback;
					EarthView::World::Core::ev_string m_toStream_CDataStream_bool_callback;
					EarthView::World::Core::ev_string m_getGeometryType_void_callback;
					EarthView::World::Core::ev_string m_setGeometryType_EVGeometryType_callback;
					EarthView::World::Core::ev_string m_getSpatialReference_void_callback;
					EarthView::World::Core::ev_string m_setSpatialReference_ISpatialReference_callback;
					EarthView::World::Core::ev_string m_getName_void_callback;
					EarthView::World::Core::ev_string m_getAliasName_void_callback;
					EarthView::World::Core::ev_string m_getFieldType_void_callback;
					EarthView::World::Core::ev_string m_getSize_void_callback;
					EarthView::World::Core::ev_string m_getPrecision_void_callback;
					EarthView::World::Core::ev_string m_getDescription_void_callback;
					EarthView::World::Core::ev_string m_isRequest_void_callback;
					EarthView::World::Core::ev_string m_canEdit_void_callback;
					EarthView::World::Core::ev_string m_canDelete_void_callback;
					EarthView::World::Core::ev_string m_canNull_void_callback;
					EarthView::World::Core::ev_string m_setAliasName_EVString_callback;
					EarthView::World::Core::ev_string m_setSize_ev_uint32_callback;
					EarthView::World::Core::ev_string m_setPrecision_ev_uint32_callback;
					EarthView::World::Core::ev_string m_setDescription_EVString_callback;
					EarthView::World::Core::ev_string m_getDefaultValue_void_callback;
					EarthView::World::Core::ev_string m_setDefaultValue_CVariant_callback;
					EarthView::World::Core::ev_string m_ev_clone_void_callback;
				public:
					JCGeometryFieldProxy(EarthView::World::Core::CNameValuePairList *pList) : CGeometryField(pList)
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
					void register_setName_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setName_EVString_callback = __method;
					}
					void register_setCanNull_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setCanNull_ev_bool_callback = __method;
					}
					void register_setCanEdit_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setCanEdit_ev_bool_callback = __method;
					}
					void register_setCanDelete_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setCanDelete_ev_bool_callback = __method;
					}
					void register_toStream_CDataStream_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_toStream_CDataStream_bool_callback = __method;
					}
					void register_getGeometryType_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getGeometryType_void_callback = __method;
					}
					void register_setGeometryType_EVGeometryType_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setGeometryType_EVGeometryType_callback = __method;
					}
					void register_getSpatialReference_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getSpatialReference_void_callback = __method;
					}
					void register_setSpatialReference_ISpatialReference_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setSpatialReference_ISpatialReference_callback = __method;
					}
					void register_getName_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getName_void_callback = __method;
					}
					void register_getAliasName_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getAliasName_void_callback = __method;
					}
					void register_getFieldType_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getFieldType_void_callback = __method;
					}
					void register_getSize_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getSize_void_callback = __method;
					}
					void register_getPrecision_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getPrecision_void_callback = __method;
					}
					void register_getDescription_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getDescription_void_callback = __method;
					}
					void register_isRequest_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_isRequest_void_callback = __method;
					}
					void register_canEdit_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_canEdit_void_callback = __method;
					}
					void register_canDelete_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_canDelete_void_callback = __method;
					}
					void register_canNull_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_canNull_void_callback = __method;
					}
					void register_setAliasName_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setAliasName_EVString_callback = __method;
					}
					void register_setSize_ev_uint32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setSize_ev_uint32_callback = __method;
					}
					void register_setPrecision_ev_uint32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setPrecision_ev_uint32_callback = __method;
					}
					void register_setDescription_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setDescription_EVString_callback = __method;
					}
					void register_getDefaultValue_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getDefaultValue_void_callback = __method;
					}
					void register_setDefaultValue_CVariant_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setDefaultValue_CVariant_callback = __method;
					}
					void register_ev_clone_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_ev_clone_void_callback = __method;
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
							return this->CGeometryField::getGeometryType();
						}
					}
					virtual void setGeometryType(EarthView::World::Spatial::Geometry::EVGeometryType type)
					{
						if (this->_gRef != NULL && this->m_setGeometryType_EVGeometryType_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
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
							jmethodID __method = __gr->getMethod("setGeometryType_EVGeometryType_callback");
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
							return this->CGeometryField::setGeometryType(type);
						}
					}
					virtual const EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReference() const
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
							const EarthView::World::Spatial::Geometry::ISpatialReference *__values1 = (const EarthView::World::Spatial::Geometry::ISpatialReference*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CGeometryField::getSpatialReference();
						}
					}
					virtual void setSpatialReference(const EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr)
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
							jlong ref_sr_j = (jlong) ref_sr;
							jmethodID __method = __gr->getMethod("setSpatialReference_ISpatialReference_callback");
							__env->CallVoidMethod(__obj, __method , ref_sr_j);
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
							return this->CGeometryField::setSpatialReference(ref_sr);
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
							return this->CGeometryField::getName();
						}
					}
					virtual EVString getAliasName() const
					{
						if (this->_gRef != NULL && this->m_getAliasName_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getAliasName_void_callback");
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
							return this->CGeometryField::getAliasName();
						}
					}
					virtual EarthView::World::Spatial::GeoDataset::EVFieldType getFieldType() const
					{
						if (this->_gRef != NULL && this->m_getFieldType_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getFieldType_void_callback");
							jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::GeoDataset::EVFieldType __values1 = (EarthView::World::Spatial::GeoDataset::EVFieldType) __values1_j;
							return __values1;
						}
						else
						{
							return this->CGeometryField::getFieldType();
						}
					}
					virtual ev_uint32 getSize() const
					{
						if (this->_gRef != NULL && this->m_getSize_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getSize_void_callback");
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
							return this->CGeometryField::getSize();
						}
					}
					virtual ev_uint32 getPrecision() const
					{
						if (this->_gRef != NULL && this->m_getPrecision_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getPrecision_void_callback");
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
							return this->CGeometryField::getPrecision();
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
							return this->CGeometryField::getDescription();
						}
					}
					virtual ev_bool isRequest() const
					{
						if (this->_gRef != NULL && this->m_isRequest_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("isRequest_void_callback");
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
							return this->CGeometryField::isRequest();
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
							return this->CGeometryField::canEdit();
						}
					}
					virtual ev_bool canDelete() const
					{
						if (this->_gRef != NULL && this->m_canDelete_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("canDelete_void_callback");
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
							return this->CGeometryField::canDelete();
						}
					}
					virtual ev_bool canNull() const
					{
						if (this->_gRef != NULL && this->m_canNull_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("canNull_void_callback");
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
							return this->CGeometryField::canNull();
						}
					}
					virtual void setAliasName(const EVString& name)
					{
						if (this->_gRef != NULL && this->m_setAliasName_EVString_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
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
							jmethodID __method = __gr->getMethod("setAliasName_EVString_callback");
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
							return this->CGeometryField::setAliasName(name);
						}
					}
					virtual void setSize(ev_uint32 value)
					{
						if (this->_gRef != NULL && this->m_setSize_ev_uint32_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong value_j = (jlong) value;
							jmethodID __method = __gr->getMethod("setSize_ev_uint32_callback");
							__env->CallVoidMethod(__obj, __method , value_j);
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
							return this->CGeometryField::setSize(value);
						}
					}
					virtual void setPrecision(ev_uint32 value)
					{
						if (this->_gRef != NULL && this->m_setPrecision_ev_uint32_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong value_j = (jlong) value;
							jmethodID __method = __gr->getMethod("setPrecision_ev_uint32_callback");
							__env->CallVoidMethod(__obj, __method , value_j);
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
							return this->CGeometryField::setPrecision(value);
						}
					}
					virtual void setDescription(const EVString& description)
					{
						if (this->_gRef != NULL && this->m_setDescription_EVString_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							EarthView::World::Core::ev_wstring description_wch = description;
							jstring description_j = __env->NewString((const jchar*)description_wch.getString(), description_wch.size());
							jmethodID __method = __gr->getMethod("setDescription_EVString_callback");
							__env->CallVoidMethod(__obj, __method , description_j);
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
							return this->CGeometryField::setDescription(description);
						}
					}
					virtual EarthView::World::Spatial::GeoDataset::IField* clone() const
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
							EarthView::World::Spatial::GeoDataset::IField *__values1 = (EarthView::World::Spatial::GeoDataset::IField*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CGeometryField::clone();
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
							return this->CGeometryField::setName(name);
						}
					}
					virtual void setCanNull(ev_bool value)
					{
						if (this->_gRef != NULL && this->m_setCanNull_ev_bool_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jboolean value_j = (jboolean) value;
							jmethodID __method = __gr->getMethod("setCanNull_ev_bool_callback");
							__env->CallVoidMethod(__obj, __method , value_j);
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
							return this->CGeometryField::setCanNull(value);
						}
					}
					virtual void setCanEdit(ev_bool value)
					{
						if (this->_gRef != NULL && this->m_setCanEdit_ev_bool_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jboolean value_j = (jboolean) value;
							jmethodID __method = __gr->getMethod("setCanEdit_ev_bool_callback");
							__env->CallVoidMethod(__obj, __method , value_j);
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
							return this->CGeometryField::setCanEdit(value);
						}
					}
					virtual void setCanDelete(ev_bool value)
					{
						if (this->_gRef != NULL && this->m_setCanDelete_ev_bool_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jboolean value_j = (jboolean) value;
							jmethodID __method = __gr->getMethod("setCanDelete_ev_bool_callback");
							__env->CallVoidMethod(__obj, __method , value_j);
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
							return this->CGeometryField::setCanDelete(value);
						}
					}
					virtual void toStream(EarthView::World::Core::CDataStream& stream, bool hasHead) const
					{
						if (this->_gRef != NULL && this->m_toStream_CDataStream_bool_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
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
							jboolean hasHead_j = (jboolean) hasHead;
							jmethodID __method = __gr->getMethod("toStream_CDataStream_bool_callback");
							__env->CallVoidMethod(__obj, __method , stream_j, hasHead_j);
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
							return this->CGeometryField::toStream(stream, hasHead);
						}
					}
					virtual EarthView::World::Core::CVariant getDefaultValue() const
					{
						if (this->_gRef != NULL && this->m_getDefaultValue_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getDefaultValue_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
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
							return this->CGeometryField::getDefaultValue();
						}
					}
					virtual void setDefaultValue(const EarthView::World::Core::CVariant& defaultValue)
					{
						if (this->_gRef != NULL && this->m_setDefaultValue_CVariant_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong defaultValue_j = (jlong) &defaultValue;
							jmethodID __method = __gr->getMethod("setDefaultValue_CVariant_callback");
							__env->CallVoidMethod(__obj, __method , defaultValue_j);
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
							return this->CGeometryField::setDefaultValue(defaultValue);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCGeometryFieldProxy);
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_geodataset_GeometryField_getGeometryType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::GeoDataset::CGeometryField *pObjectX = (EarthView::World::Spatial::GeoDataset::CGeometryField*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCGeometryFieldProxy))
					{
						EarthView::World::Spatial::Geometry::EVGeometryType __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::CGeometryField::getGeometryType();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_GeometryField_register_1getGeometryType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCGeometryFieldProxy *pObjectX = (JCGeometryFieldProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_geodataset_GeometryField_getGeometryType_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::GeoDataset::CGeometryField *pObjectX = (EarthView::World::Spatial::GeoDataset::CGeometryField*) pObjXXXX;
					EarthView::World::Spatial::Geometry::EVGeometryType __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::CGeometryField::getGeometryType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_GeometryField_setGeometryType_1EVGeometryType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint type_j)
				{
					EarthView::World::Spatial::Geometry::EVGeometryType type = (EarthView::World::Spatial::Geometry::EVGeometryType) type_j;
					EarthView::World::Spatial::GeoDataset::CGeometryField *pObjectX = (EarthView::World::Spatial::GeoDataset::CGeometryField*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCGeometryFieldProxy))
					{
						pObjectX->EarthView::World::Spatial::GeoDataset::CGeometryField::setGeometryType(type);
					}
					else
					{
						pObjectX->setGeometryType(type);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_GeometryField_register_1setGeometryType_1EVGeometryType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCGeometryFieldProxy *pObjectX = (JCGeometryFieldProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setGeometryType_EVGeometryType_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setGeometryType_EVGeometryType_callback", "(I)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_GeometryField_setGeometryType_1EVGeometryType_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint type_j)
				{
					EarthView::World::Spatial::Geometry::EVGeometryType type = (EarthView::World::Spatial::Geometry::EVGeometryType) type_j;
					EarthView::World::Spatial::GeoDataset::CGeometryField *pObjectX = (EarthView::World::Spatial::GeoDataset::CGeometryField*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::GeoDataset::CGeometryField::setGeometryType(type);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geodataset_GeometryField_getSpatialReference_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::GeoDataset::CGeometryField *pObjectX = (EarthView::World::Spatial::GeoDataset::CGeometryField*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCGeometryFieldProxy))
					{
						const EarthView::World::Spatial::Geometry::ISpatialReference* __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::CGeometryField::getSpatialReference();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						const EarthView::World::Spatial::Geometry::ISpatialReference* __values1 = pObjectX->getSpatialReference();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_GeometryField_register_1getSpatialReference_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCGeometryFieldProxy *pObjectX = (JCGeometryFieldProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geodataset_GeometryField_getSpatialReference_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::GeoDataset::CGeometryField *pObjectX = (EarthView::World::Spatial::GeoDataset::CGeometryField*) pObjXXXX;
					const EarthView::World::Spatial::Geometry::ISpatialReference* __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::CGeometryField::getSpatialReference();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_GeometryField_setSpatialReference_1ISpatialReference(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_sr_j)
				{
					const EarthView::World::Spatial::Geometry::ISpatialReference *ref_sr = (const EarthView::World::Spatial::Geometry::ISpatialReference*) ref_sr_j;
					EarthView::World::Spatial::GeoDataset::CGeometryField *pObjectX = (EarthView::World::Spatial::GeoDataset::CGeometryField*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCGeometryFieldProxy))
					{
						pObjectX->EarthView::World::Spatial::GeoDataset::CGeometryField::setSpatialReference(ref_sr);
					}
					else
					{
						pObjectX->setSpatialReference(ref_sr);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_GeometryField_register_1setSpatialReference_1ISpatialReference(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCGeometryFieldProxy *pObjectX = (JCGeometryFieldProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_GeometryField_setSpatialReference_1ISpatialReference_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_sr_j)
				{
					const EarthView::World::Spatial::Geometry::ISpatialReference *ref_sr = (const EarthView::World::Spatial::Geometry::ISpatialReference*) ref_sr_j;
					EarthView::World::Spatial::GeoDataset::CGeometryField *pObjectX = (EarthView::World::Spatial::GeoDataset::CGeometryField*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::GeoDataset::CGeometryField::setSpatialReference(ref_sr);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_geodataset_GeometryField_getName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::GeoDataset::CGeometryField *pObjectX = (EarthView::World::Spatial::GeoDataset::CGeometryField*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCGeometryFieldProxy))
					{
						EVString __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::CGeometryField::getName();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_GeometryField_register_1getName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCGeometryFieldProxy *pObjectX = (JCGeometryFieldProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_geodataset_GeometryField_getName_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::GeoDataset::CGeometryField *pObjectX = (EarthView::World::Spatial::GeoDataset::CGeometryField*) pObjXXXX;
					EVString __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::CGeometryField::getName();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_geodataset_GeometryField_getAliasName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::GeoDataset::CGeometryField *pObjectX = (EarthView::World::Spatial::GeoDataset::CGeometryField*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCGeometryFieldProxy))
					{
						EVString __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::CGeometryField::getAliasName();
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
					else
					{
						EVString __values1 = pObjectX->getAliasName();
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_GeometryField_register_1getAliasName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCGeometryFieldProxy *pObjectX = (JCGeometryFieldProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getAliasName_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getAliasName_void_callback", "()Ljava/lang/String;");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_geodataset_GeometryField_getAliasName_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::GeoDataset::CGeometryField *pObjectX = (EarthView::World::Spatial::GeoDataset::CGeometryField*) pObjXXXX;
					EVString __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::CGeometryField::getAliasName();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_geodataset_GeometryField_getFieldType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::GeoDataset::CGeometryField *pObjectX = (EarthView::World::Spatial::GeoDataset::CGeometryField*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCGeometryFieldProxy))
					{
						EarthView::World::Spatial::GeoDataset::EVFieldType __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::CGeometryField::getFieldType();
						jint __values1_j = (jint) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::EVFieldType __values1 = pObjectX->getFieldType();
						jint __values1_j = (jint) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_GeometryField_register_1getFieldType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCGeometryFieldProxy *pObjectX = (JCGeometryFieldProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getFieldType_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getFieldType_void_callback", "()I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_geodataset_GeometryField_getFieldType_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::GeoDataset::CGeometryField *pObjectX = (EarthView::World::Spatial::GeoDataset::CGeometryField*) pObjXXXX;
					EarthView::World::Spatial::GeoDataset::EVFieldType __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::CGeometryField::getFieldType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geodataset_GeometryField_getSize_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::GeoDataset::CGeometryField *pObjectX = (EarthView::World::Spatial::GeoDataset::CGeometryField*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCGeometryFieldProxy))
					{
						ev_uint32 __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::CGeometryField::getSize();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						ev_uint32 __values1 = pObjectX->getSize();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_GeometryField_register_1getSize_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCGeometryFieldProxy *pObjectX = (JCGeometryFieldProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getSize_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getSize_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geodataset_GeometryField_getSize_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::GeoDataset::CGeometryField *pObjectX = (EarthView::World::Spatial::GeoDataset::CGeometryField*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::CGeometryField::getSize();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geodataset_GeometryField_getPrecision_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::GeoDataset::CGeometryField *pObjectX = (EarthView::World::Spatial::GeoDataset::CGeometryField*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCGeometryFieldProxy))
					{
						ev_uint32 __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::CGeometryField::getPrecision();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						ev_uint32 __values1 = pObjectX->getPrecision();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_GeometryField_register_1getPrecision_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCGeometryFieldProxy *pObjectX = (JCGeometryFieldProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getPrecision_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getPrecision_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geodataset_GeometryField_getPrecision_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::GeoDataset::CGeometryField *pObjectX = (EarthView::World::Spatial::GeoDataset::CGeometryField*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::CGeometryField::getPrecision();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_geodataset_GeometryField_getDescription_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::GeoDataset::CGeometryField *pObjectX = (EarthView::World::Spatial::GeoDataset::CGeometryField*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCGeometryFieldProxy))
					{
						EVString __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::CGeometryField::getDescription();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_GeometryField_register_1getDescription_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCGeometryFieldProxy *pObjectX = (JCGeometryFieldProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_geodataset_GeometryField_getDescription_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::GeoDataset::CGeometryField *pObjectX = (EarthView::World::Spatial::GeoDataset::CGeometryField*) pObjXXXX;
					EVString __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::CGeometryField::getDescription();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_geodataset_GeometryField_isRequest_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::GeoDataset::CGeometryField *pObjectX = (EarthView::World::Spatial::GeoDataset::CGeometryField*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCGeometryFieldProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::CGeometryField::isRequest();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->isRequest();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_GeometryField_register_1isRequest_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCGeometryFieldProxy *pObjectX = (JCGeometryFieldProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_isRequest_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"isRequest_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_geodataset_GeometryField_isRequest_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::GeoDataset::CGeometryField *pObjectX = (EarthView::World::Spatial::GeoDataset::CGeometryField*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::CGeometryField::isRequest();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_geodataset_GeometryField_canEdit_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::GeoDataset::CGeometryField *pObjectX = (EarthView::World::Spatial::GeoDataset::CGeometryField*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCGeometryFieldProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::CGeometryField::canEdit();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_GeometryField_register_1canEdit_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCGeometryFieldProxy *pObjectX = (JCGeometryFieldProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_geodataset_GeometryField_canEdit_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::GeoDataset::CGeometryField *pObjectX = (EarthView::World::Spatial::GeoDataset::CGeometryField*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::CGeometryField::canEdit();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_geodataset_GeometryField_canDelete_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::GeoDataset::CGeometryField *pObjectX = (EarthView::World::Spatial::GeoDataset::CGeometryField*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCGeometryFieldProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::CGeometryField::canDelete();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->canDelete();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_GeometryField_register_1canDelete_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCGeometryFieldProxy *pObjectX = (JCGeometryFieldProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_canDelete_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"canDelete_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_geodataset_GeometryField_canDelete_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::GeoDataset::CGeometryField *pObjectX = (EarthView::World::Spatial::GeoDataset::CGeometryField*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::CGeometryField::canDelete();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_geodataset_GeometryField_canNull_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::GeoDataset::CGeometryField *pObjectX = (EarthView::World::Spatial::GeoDataset::CGeometryField*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCGeometryFieldProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::CGeometryField::canNull();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->canNull();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_GeometryField_register_1canNull_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCGeometryFieldProxy *pObjectX = (JCGeometryFieldProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_canNull_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"canNull_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_geodataset_GeometryField_canNull_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::GeoDataset::CGeometryField *pObjectX = (EarthView::World::Spatial::GeoDataset::CGeometryField*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::CGeometryField::canNull();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_GeometryField_setAliasName_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
					EarthView::World::Spatial::GeoDataset::CGeometryField *pObjectX = (EarthView::World::Spatial::GeoDataset::CGeometryField*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCGeometryFieldProxy))
					{
						pObjectX->EarthView::World::Spatial::GeoDataset::CGeometryField::setAliasName(name);
					}
					else
					{
						pObjectX->setAliasName(name);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_GeometryField_register_1setAliasName_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCGeometryFieldProxy *pObjectX = (JCGeometryFieldProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setAliasName_EVString_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setAliasName_EVString_callback", "(Ljava/lang/String;)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_GeometryField_setAliasName_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
					EarthView::World::Spatial::GeoDataset::CGeometryField *pObjectX = (EarthView::World::Spatial::GeoDataset::CGeometryField*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::GeoDataset::CGeometryField::setAliasName(name);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_GeometryField_setSize_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong value_j)
				{
					ev_uint32 value = (ev_uint32) value_j;
					EarthView::World::Spatial::GeoDataset::CGeometryField *pObjectX = (EarthView::World::Spatial::GeoDataset::CGeometryField*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCGeometryFieldProxy))
					{
						pObjectX->EarthView::World::Spatial::GeoDataset::CGeometryField::setSize(value);
					}
					else
					{
						pObjectX->setSize(value);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_GeometryField_register_1setSize_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCGeometryFieldProxy *pObjectX = (JCGeometryFieldProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setSize_ev_uint32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setSize_ev_uint32_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_GeometryField_setSize_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong value_j)
				{
					ev_uint32 value = (ev_uint32) value_j;
					EarthView::World::Spatial::GeoDataset::CGeometryField *pObjectX = (EarthView::World::Spatial::GeoDataset::CGeometryField*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::GeoDataset::CGeometryField::setSize(value);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_GeometryField_setPrecision_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong value_j)
				{
					ev_uint32 value = (ev_uint32) value_j;
					EarthView::World::Spatial::GeoDataset::CGeometryField *pObjectX = (EarthView::World::Spatial::GeoDataset::CGeometryField*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCGeometryFieldProxy))
					{
						pObjectX->EarthView::World::Spatial::GeoDataset::CGeometryField::setPrecision(value);
					}
					else
					{
						pObjectX->setPrecision(value);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_GeometryField_register_1setPrecision_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCGeometryFieldProxy *pObjectX = (JCGeometryFieldProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setPrecision_ev_uint32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setPrecision_ev_uint32_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_GeometryField_setPrecision_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong value_j)
				{
					ev_uint32 value = (ev_uint32) value_j;
					EarthView::World::Spatial::GeoDataset::CGeometryField *pObjectX = (EarthView::World::Spatial::GeoDataset::CGeometryField*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::GeoDataset::CGeometryField::setPrecision(value);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_GeometryField_setDescription_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring description_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* description_ch = (const ev_char*)__env->GetStringUTFChars(description_j,JNI_FALSE);
					const EVString description = description_ch;
					__env->ReleaseStringUTFChars(description_j, (const char *)description_ch);
					#else
					const ev_wchar* description_ch = (const ev_wchar*)__env->GetStringChars(description_j,JNI_FALSE);
					const EVString description = description_ch;
					__env->ReleaseStringChars(description_j, (const jchar *)description_ch);
					#endif
					EarthView::World::Spatial::GeoDataset::CGeometryField *pObjectX = (EarthView::World::Spatial::GeoDataset::CGeometryField*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCGeometryFieldProxy))
					{
						pObjectX->EarthView::World::Spatial::GeoDataset::CGeometryField::setDescription(description);
					}
					else
					{
						pObjectX->setDescription(description);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_GeometryField_register_1setDescription_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCGeometryFieldProxy *pObjectX = (JCGeometryFieldProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setDescription_EVString_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setDescription_EVString_callback", "(Ljava/lang/String;)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_GeometryField_setDescription_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring description_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* description_ch = (const ev_char*)__env->GetStringUTFChars(description_j,JNI_FALSE);
					const EVString description = description_ch;
					__env->ReleaseStringUTFChars(description_j, (const char *)description_ch);
					#else
					const ev_wchar* description_ch = (const ev_wchar*)__env->GetStringChars(description_j,JNI_FALSE);
					const EVString description = description_ch;
					__env->ReleaseStringChars(description_j, (const jchar *)description_ch);
					#endif
					EarthView::World::Spatial::GeoDataset::CGeometryField *pObjectX = (EarthView::World::Spatial::GeoDataset::CGeometryField*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::GeoDataset::CGeometryField::setDescription(description);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geodataset_GeometryField_ev_1clone_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::GeoDataset::CGeometryField *pObjectX = (EarthView::World::Spatial::GeoDataset::CGeometryField*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCGeometryFieldProxy))
					{
						EarthView::World::Spatial::GeoDataset::IField* __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::CGeometryField::clone();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IField* __values1 = pObjectX->clone();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_GeometryField_register_1ev_1clone_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCGeometryFieldProxy *pObjectX = (JCGeometryFieldProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geodataset_GeometryField_ev_1clone_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::GeoDataset::CGeometryField *pObjectX = (EarthView::World::Spatial::GeoDataset::CGeometryField*) pObjXXXX;
					EarthView::World::Spatial::GeoDataset::IField* __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::CGeometryField::clone();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_GeometryField_setName_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
					EarthView::World::Spatial::GeoDataset::CGeometryField *pObjectX = (EarthView::World::Spatial::GeoDataset::CGeometryField*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCGeometryFieldProxy))
					{
						pObjectX->EarthView::World::Spatial::GeoDataset::CGeometryField::setName(name);
					}
					else
					{
						pObjectX->setName(name);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_GeometryField_register_1setName_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCGeometryFieldProxy *pObjectX = (JCGeometryFieldProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_GeometryField_setName_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
					EarthView::World::Spatial::GeoDataset::CGeometryField *pObjectX = (EarthView::World::Spatial::GeoDataset::CGeometryField*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::GeoDataset::CGeometryField::setName(name);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_GeometryField_setCanNull_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean value_j)
				{
					ev_bool value = (ev_bool) value_j;
					EarthView::World::Spatial::GeoDataset::CGeometryField *pObjectX = (EarthView::World::Spatial::GeoDataset::CGeometryField*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCGeometryFieldProxy))
					{
						pObjectX->EarthView::World::Spatial::GeoDataset::CGeometryField::setCanNull(value);
					}
					else
					{
						pObjectX->setCanNull(value);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_GeometryField_register_1setCanNull_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCGeometryFieldProxy *pObjectX = (JCGeometryFieldProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setCanNull_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setCanNull_ev_bool_callback", "(Z)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_GeometryField_setCanNull_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean value_j)
				{
					ev_bool value = (ev_bool) value_j;
					EarthView::World::Spatial::GeoDataset::CGeometryField *pObjectX = (EarthView::World::Spatial::GeoDataset::CGeometryField*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::GeoDataset::CGeometryField::setCanNull(value);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_GeometryField_setCanEdit_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean value_j)
				{
					ev_bool value = (ev_bool) value_j;
					EarthView::World::Spatial::GeoDataset::CGeometryField *pObjectX = (EarthView::World::Spatial::GeoDataset::CGeometryField*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCGeometryFieldProxy))
					{
						pObjectX->EarthView::World::Spatial::GeoDataset::CGeometryField::setCanEdit(value);
					}
					else
					{
						pObjectX->setCanEdit(value);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_GeometryField_register_1setCanEdit_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCGeometryFieldProxy *pObjectX = (JCGeometryFieldProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setCanEdit_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setCanEdit_ev_bool_callback", "(Z)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_GeometryField_setCanEdit_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean value_j)
				{
					ev_bool value = (ev_bool) value_j;
					EarthView::World::Spatial::GeoDataset::CGeometryField *pObjectX = (EarthView::World::Spatial::GeoDataset::CGeometryField*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::GeoDataset::CGeometryField::setCanEdit(value);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_GeometryField_setCanDelete_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean value_j)
				{
					ev_bool value = (ev_bool) value_j;
					EarthView::World::Spatial::GeoDataset::CGeometryField *pObjectX = (EarthView::World::Spatial::GeoDataset::CGeometryField*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCGeometryFieldProxy))
					{
						pObjectX->EarthView::World::Spatial::GeoDataset::CGeometryField::setCanDelete(value);
					}
					else
					{
						pObjectX->setCanDelete(value);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_GeometryField_register_1setCanDelete_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCGeometryFieldProxy *pObjectX = (JCGeometryFieldProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setCanDelete_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setCanDelete_ev_bool_callback", "(Z)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_GeometryField_setCanDelete_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean value_j)
				{
					ev_bool value = (ev_bool) value_j;
					EarthView::World::Spatial::GeoDataset::CGeometryField *pObjectX = (EarthView::World::Spatial::GeoDataset::CGeometryField*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::GeoDataset::CGeometryField::setCanDelete(value);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_GeometryField_toStream_1CDataStream_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j, jboolean hasHead_j)
				{
					EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
					bool hasHead = (bool) hasHead_j;
					const 					EarthView::World::Spatial::GeoDataset::CGeometryField *pObjectX = (EarthView::World::Spatial::GeoDataset::CGeometryField*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCGeometryFieldProxy))
					{
						pObjectX->EarthView::World::Spatial::GeoDataset::CGeometryField::toStream(stream, hasHead);
					}
					else
					{
						pObjectX->toStream(stream, hasHead);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_GeometryField_register_1toStream_1CDataStream_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCGeometryFieldProxy *pObjectX = (JCGeometryFieldProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_toStream_CDataStream_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"toStream_CDataStream_bool_callback", "(JZ)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_GeometryField_toStream_1CDataStream_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j, jboolean hasHead_j)
				{
					EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
					bool hasHead = (bool) hasHead_j;
					const 					EarthView::World::Spatial::GeoDataset::CGeometryField *pObjectX = (EarthView::World::Spatial::GeoDataset::CGeometryField*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::GeoDataset::CGeometryField::toStream(stream, hasHead);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_GeometryField_register_1getDefaultValue_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCGeometryFieldProxy *pObjectX = (JCGeometryFieldProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getDefaultValue_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getDefaultValue_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_GeometryField_register_1setDefaultValue_1CVariant(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCGeometryFieldProxy *pObjectX = (JCGeometryFieldProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setDefaultValue_CVariant_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setDefaultValue_CVariant_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
			}
		}
	}
}
