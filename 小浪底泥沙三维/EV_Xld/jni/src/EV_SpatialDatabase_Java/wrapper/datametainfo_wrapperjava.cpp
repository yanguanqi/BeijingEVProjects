/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialdatabase/datametainfo.h"
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
				class JCDataMetaInfoProxy : public EarthView::World::Spatial::GeoDataset::CDataMetaInfo
				{
				 private:
					EarthView::World::Core::ev_string m_setDatasetType_EVDatasetType_callback;
					EarthView::World::Core::ev_string m_setName_EVString_callback;
					EarthView::World::Core::ev_string m_setEnvelope_IEnvelope_callback;
					EarthView::World::Core::ev_string m_setSpatialReference_ISpatialReference_callback;
					EarthView::World::Core::ev_string m_setSRID_ev_int32_callback;
					EarthView::World::Core::ev_string m_getSRID_void_callback;
					EarthView::World::Core::ev_string m_setTypeID_ev_int32_callback;
					EarthView::World::Core::ev_string m_getTypeID_void_callback;
					EarthView::World::Core::ev_string m_setVersion_ev_uint32_callback;
					EarthView::World::Core::ev_string m_getVersion_void_callback;
					EarthView::World::Core::ev_string m_getID_void_callback;
					EarthView::World::Core::ev_string m_setID_ev_uint32_callback;
					EarthView::World::Core::ev_string m_getAltitudeMode_void_callback;
					EarthView::World::Core::ev_string m_setAltitudeMode_EVAltitudeMode_callback;
					EarthView::World::Core::ev_string m_getAltitudeValue_void_callback;
					EarthView::World::Core::ev_string m_setAltitudeValue_ev_real64_callback;
					EarthView::World::Core::ev_string m_getDatasetType_void_callback;
					EarthView::World::Core::ev_string m_getName_void_callback;
					EarthView::World::Core::ev_string m_getEnvelopeRef_void_callback;
					EarthView::World::Core::ev_string m_getSpatialReference_void_callback;
				public:
					JCDataMetaInfoProxy(EarthView::World::Core::CNameValuePairList *pList) : CDataMetaInfo(pList)
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
					void register_setSRID_ev_int32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setSRID_ev_int32_callback = __method;
					}
					void register_getSRID_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getSRID_void_callback = __method;
					}
					void register_setTypeID_ev_int32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setTypeID_ev_int32_callback = __method;
					}
					void register_getTypeID_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getTypeID_void_callback = __method;
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
					void register_getAltitudeMode_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getAltitudeMode_void_callback = __method;
					}
					void register_setAltitudeMode_EVAltitudeMode_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setAltitudeMode_EVAltitudeMode_callback = __method;
					}
					void register_getAltitudeValue_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getAltitudeValue_void_callback = __method;
					}
					void register_setAltitudeValue_ev_real64_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setAltitudeValue_ev_real64_callback = __method;
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
							return this->CDataMetaInfo::getDatasetType();
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
							return this->CDataMetaInfo::setDatasetType(type);
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
							return this->CDataMetaInfo::getName();
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
							return this->CDataMetaInfo::setName(name);
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
							return this->CDataMetaInfo::getEnvelopeRef();
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
							return this->CDataMetaInfo::setEnvelope(pEnv);
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
							return this->CDataMetaInfo::getSpatialReference();
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
							return this->CDataMetaInfo::setSpatialReference(sr);
						}
					}
					virtual void setSRID(ev_int32 srid)
					{
						if (this->_gRef != NULL && this->m_setSRID_ev_int32_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jint srid_j = (jint) srid;
							jmethodID __method = __gr->getMethod("setSRID_ev_int32_callback");
							__env->CallVoidMethod(__obj, __method , srid_j);
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
							return this->CDataMetaInfo::setSRID(srid);
						}
					}
					virtual ev_int32 getSRID()
					{
						if (this->_gRef != NULL && this->m_getSRID_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getSRID_void_callback");
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
							return this->CDataMetaInfo::getSRID();
						}
					}
					virtual void setTypeID(ev_int32 id)
					{
						if (this->_gRef != NULL && this->m_setTypeID_ev_int32_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jint id_j = (jint) id;
							jmethodID __method = __gr->getMethod("setTypeID_ev_int32_callback");
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
							return this->CDataMetaInfo::setTypeID(id);
						}
					}
					virtual ev_int32 getTypeID()
					{
						if (this->_gRef != NULL && this->m_getTypeID_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getTypeID_void_callback");
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
							return this->CDataMetaInfo::getTypeID();
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
							return this->CDataMetaInfo::setVersion(version);
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
							return this->CDataMetaInfo::getVersion();
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
							return this->CDataMetaInfo::getID();
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
							return this->CDataMetaInfo::setID(id);
						}
					}
					virtual EarthView::World::Spatial::Utility::EVAltitudeMode getAltitudeMode()
					{
						if (this->_gRef != NULL && this->m_getAltitudeMode_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getAltitudeMode_void_callback");
							jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::Utility::EVAltitudeMode __values1 = (EarthView::World::Spatial::Utility::EVAltitudeMode) __values1_j;
							return __values1;
						}
						else
						{
							return this->CDataMetaInfo::getAltitudeMode();
						}
					}
					virtual void setAltitudeMode(EarthView::World::Spatial::Utility::EVAltitudeMode mode)
					{
						if (this->_gRef != NULL && this->m_setAltitudeMode_EVAltitudeMode_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jint mode_j = (jint) mode;
							jmethodID __method = __gr->getMethod("setAltitudeMode_EVAltitudeMode_callback");
							__env->CallVoidMethod(__obj, __method , mode_j);
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
							return this->CDataMetaInfo::setAltitudeMode(mode);
						}
					}
					virtual ev_real64 getAltitudeValue()
					{
						if (this->_gRef != NULL && this->m_getAltitudeValue_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getAltitudeValue_void_callback");
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
							return this->CDataMetaInfo::getAltitudeValue();
						}
					}
					virtual void setAltitudeValue(ev_real64 value)
					{
						if (this->_gRef != NULL && this->m_setAltitudeValue_ev_real64_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jdouble value_j = (jdouble) value;
							jmethodID __method = __gr->getMethod("setAltitudeValue_ev_real64_callback");
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
							return this->CDataMetaInfo::setAltitudeValue(value);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCDataMetaInfoProxy);
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_geodataset_DataMetaInfo_getDatasetType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::GeoDataset::CDataMetaInfo *pObjectX = (EarthView::World::Spatial::GeoDataset::CDataMetaInfo*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCDataMetaInfoProxy))
					{
						EarthView::World::Spatial::GeoDataset::EVDatasetType __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::CDataMetaInfo::getDatasetType();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_DataMetaInfo_register_1getDatasetType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCDataMetaInfoProxy *pObjectX = (JCDataMetaInfoProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_geodataset_DataMetaInfo_getDatasetType_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::GeoDataset::CDataMetaInfo *pObjectX = (EarthView::World::Spatial::GeoDataset::CDataMetaInfo*) pObjXXXX;
					EarthView::World::Spatial::GeoDataset::EVDatasetType __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::CDataMetaInfo::getDatasetType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_DataMetaInfo_setDatasetType_1EVDatasetType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint type_j)
				{
					EarthView::World::Spatial::GeoDataset::EVDatasetType type = (EarthView::World::Spatial::GeoDataset::EVDatasetType) type_j;
					EarthView::World::Spatial::GeoDataset::CDataMetaInfo *pObjectX = (EarthView::World::Spatial::GeoDataset::CDataMetaInfo*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCDataMetaInfoProxy))
					{
						pObjectX->EarthView::World::Spatial::GeoDataset::CDataMetaInfo::setDatasetType(type);
					}
					else
					{
						pObjectX->setDatasetType(type);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_DataMetaInfo_register_1setDatasetType_1EVDatasetType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCDataMetaInfoProxy *pObjectX = (JCDataMetaInfoProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_DataMetaInfo_setDatasetType_1EVDatasetType_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint type_j)
				{
					EarthView::World::Spatial::GeoDataset::EVDatasetType type = (EarthView::World::Spatial::GeoDataset::EVDatasetType) type_j;
					EarthView::World::Spatial::GeoDataset::CDataMetaInfo *pObjectX = (EarthView::World::Spatial::GeoDataset::CDataMetaInfo*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::GeoDataset::CDataMetaInfo::setDatasetType(type);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_geodataset_DataMetaInfo_getName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::GeoDataset::CDataMetaInfo *pObjectX = (EarthView::World::Spatial::GeoDataset::CDataMetaInfo*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCDataMetaInfoProxy))
					{
						EVString __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::CDataMetaInfo::getName();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_DataMetaInfo_register_1getName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCDataMetaInfoProxy *pObjectX = (JCDataMetaInfoProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_geodataset_DataMetaInfo_getName_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::GeoDataset::CDataMetaInfo *pObjectX = (EarthView::World::Spatial::GeoDataset::CDataMetaInfo*) pObjXXXX;
					EVString __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::CDataMetaInfo::getName();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_DataMetaInfo_setName_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
					EarthView::World::Spatial::GeoDataset::CDataMetaInfo *pObjectX = (EarthView::World::Spatial::GeoDataset::CDataMetaInfo*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCDataMetaInfoProxy))
					{
						pObjectX->EarthView::World::Spatial::GeoDataset::CDataMetaInfo::setName(name);
					}
					else
					{
						pObjectX->setName(name);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_DataMetaInfo_register_1setName_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCDataMetaInfoProxy *pObjectX = (JCDataMetaInfoProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_DataMetaInfo_setName_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
					EarthView::World::Spatial::GeoDataset::CDataMetaInfo *pObjectX = (EarthView::World::Spatial::GeoDataset::CDataMetaInfo*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::GeoDataset::CDataMetaInfo::setName(name);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geodataset_DataMetaInfo_getEnvelopeRef_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::GeoDataset::CDataMetaInfo *pObjectX = (EarthView::World::Spatial::GeoDataset::CDataMetaInfo*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCDataMetaInfoProxy))
					{
						const EarthView::World::Spatial::Geometry::IEnvelope* __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::CDataMetaInfo::getEnvelopeRef();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_DataMetaInfo_register_1getEnvelopeRef_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCDataMetaInfoProxy *pObjectX = (JCDataMetaInfoProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geodataset_DataMetaInfo_getEnvelopeRef_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::GeoDataset::CDataMetaInfo *pObjectX = (EarthView::World::Spatial::GeoDataset::CDataMetaInfo*) pObjXXXX;
					const EarthView::World::Spatial::Geometry::IEnvelope* __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::CDataMetaInfo::getEnvelopeRef();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_DataMetaInfo_setEnvelope_1IEnvelope(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pEnv_j)
				{
					EarthView::World::Spatial::Geometry::IEnvelope *pEnv = (EarthView::World::Spatial::Geometry::IEnvelope*) pEnv_j;
					EarthView::World::Spatial::GeoDataset::CDataMetaInfo *pObjectX = (EarthView::World::Spatial::GeoDataset::CDataMetaInfo*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCDataMetaInfoProxy))
					{
						pObjectX->EarthView::World::Spatial::GeoDataset::CDataMetaInfo::setEnvelope(pEnv);
					}
					else
					{
						pObjectX->setEnvelope(pEnv);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_DataMetaInfo_register_1setEnvelope_1IEnvelope(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCDataMetaInfoProxy *pObjectX = (JCDataMetaInfoProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_DataMetaInfo_setEnvelope_1IEnvelope_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pEnv_j)
				{
					EarthView::World::Spatial::Geometry::IEnvelope *pEnv = (EarthView::World::Spatial::Geometry::IEnvelope*) pEnv_j;
					EarthView::World::Spatial::GeoDataset::CDataMetaInfo *pObjectX = (EarthView::World::Spatial::GeoDataset::CDataMetaInfo*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::GeoDataset::CDataMetaInfo::setEnvelope(pEnv);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geodataset_DataMetaInfo_getSpatialReference_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::GeoDataset::CDataMetaInfo *pObjectX = (EarthView::World::Spatial::GeoDataset::CDataMetaInfo*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCDataMetaInfoProxy))
					{
						EarthView::World::Spatial::Geometry::ISpatialReference* __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::CDataMetaInfo::getSpatialReference();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_DataMetaInfo_register_1getSpatialReference_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCDataMetaInfoProxy *pObjectX = (JCDataMetaInfoProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geodataset_DataMetaInfo_getSpatialReference_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::GeoDataset::CDataMetaInfo *pObjectX = (EarthView::World::Spatial::GeoDataset::CDataMetaInfo*) pObjXXXX;
					EarthView::World::Spatial::Geometry::ISpatialReference* __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::CDataMetaInfo::getSpatialReference();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_DataMetaInfo_setSpatialReference_1ISpatialReference(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong sr_j)
				{
					EarthView::World::Spatial::Geometry::ISpatialReference *sr = (EarthView::World::Spatial::Geometry::ISpatialReference*) sr_j;
					EarthView::World::Spatial::GeoDataset::CDataMetaInfo *pObjectX = (EarthView::World::Spatial::GeoDataset::CDataMetaInfo*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCDataMetaInfoProxy))
					{
						pObjectX->EarthView::World::Spatial::GeoDataset::CDataMetaInfo::setSpatialReference(sr);
					}
					else
					{
						pObjectX->setSpatialReference(sr);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_DataMetaInfo_register_1setSpatialReference_1ISpatialReference(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCDataMetaInfoProxy *pObjectX = (JCDataMetaInfoProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_DataMetaInfo_setSpatialReference_1ISpatialReference_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong sr_j)
				{
					EarthView::World::Spatial::Geometry::ISpatialReference *sr = (EarthView::World::Spatial::Geometry::ISpatialReference*) sr_j;
					EarthView::World::Spatial::GeoDataset::CDataMetaInfo *pObjectX = (EarthView::World::Spatial::GeoDataset::CDataMetaInfo*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::GeoDataset::CDataMetaInfo::setSpatialReference(sr);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_DataMetaInfo_setSRID_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint srid_j)
				{
					ev_int32 srid = (ev_int32) srid_j;
					EarthView::World::Spatial::GeoDataset::CDataMetaInfo *pObjectX = (EarthView::World::Spatial::GeoDataset::CDataMetaInfo*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCDataMetaInfoProxy))
					{
						pObjectX->EarthView::World::Spatial::GeoDataset::CDataMetaInfo::setSRID(srid);
					}
					else
					{
						pObjectX->setSRID(srid);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_DataMetaInfo_register_1setSRID_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCDataMetaInfoProxy *pObjectX = (JCDataMetaInfoProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setSRID_ev_int32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setSRID_ev_int32_callback", "(I)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_DataMetaInfo_setSRID_1ev_1int32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint srid_j)
				{
					ev_int32 srid = (ev_int32) srid_j;
					EarthView::World::Spatial::GeoDataset::CDataMetaInfo *pObjectX = (EarthView::World::Spatial::GeoDataset::CDataMetaInfo*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::GeoDataset::CDataMetaInfo::setSRID(srid);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_geodataset_DataMetaInfo_getSRID_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::GeoDataset::CDataMetaInfo *pObjectX = (EarthView::World::Spatial::GeoDataset::CDataMetaInfo*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCDataMetaInfoProxy))
					{
						ev_int32 __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::CDataMetaInfo::getSRID();
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
					else
					{
						ev_int32 __values1 = pObjectX->getSRID();
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_DataMetaInfo_register_1getSRID_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCDataMetaInfoProxy *pObjectX = (JCDataMetaInfoProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getSRID_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getSRID_void_callback", "()I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_geodataset_DataMetaInfo_getSRID_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::GeoDataset::CDataMetaInfo *pObjectX = (EarthView::World::Spatial::GeoDataset::CDataMetaInfo*) pObjXXXX;
					ev_int32 __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::CDataMetaInfo::getSRID();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_DataMetaInfo_setTypeID_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint id_j)
				{
					ev_int32 id = (ev_int32) id_j;
					EarthView::World::Spatial::GeoDataset::CDataMetaInfo *pObjectX = (EarthView::World::Spatial::GeoDataset::CDataMetaInfo*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCDataMetaInfoProxy))
					{
						pObjectX->EarthView::World::Spatial::GeoDataset::CDataMetaInfo::setTypeID(id);
					}
					else
					{
						pObjectX->setTypeID(id);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_DataMetaInfo_register_1setTypeID_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCDataMetaInfoProxy *pObjectX = (JCDataMetaInfoProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setTypeID_ev_int32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setTypeID_ev_int32_callback", "(I)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_DataMetaInfo_setTypeID_1ev_1int32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint id_j)
				{
					ev_int32 id = (ev_int32) id_j;
					EarthView::World::Spatial::GeoDataset::CDataMetaInfo *pObjectX = (EarthView::World::Spatial::GeoDataset::CDataMetaInfo*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::GeoDataset::CDataMetaInfo::setTypeID(id);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_geodataset_DataMetaInfo_getTypeID_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::GeoDataset::CDataMetaInfo *pObjectX = (EarthView::World::Spatial::GeoDataset::CDataMetaInfo*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCDataMetaInfoProxy))
					{
						ev_int32 __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::CDataMetaInfo::getTypeID();
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
					else
					{
						ev_int32 __values1 = pObjectX->getTypeID();
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_DataMetaInfo_register_1getTypeID_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCDataMetaInfoProxy *pObjectX = (JCDataMetaInfoProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getTypeID_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getTypeID_void_callback", "()I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_geodataset_DataMetaInfo_getTypeID_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::GeoDataset::CDataMetaInfo *pObjectX = (EarthView::World::Spatial::GeoDataset::CDataMetaInfo*) pObjXXXX;
					ev_int32 __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::CDataMetaInfo::getTypeID();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_DataMetaInfo_setVersion_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong version_j)
				{
					ev_uint32 version = (ev_uint32) version_j;
					EarthView::World::Spatial::GeoDataset::CDataMetaInfo *pObjectX = (EarthView::World::Spatial::GeoDataset::CDataMetaInfo*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCDataMetaInfoProxy))
					{
						pObjectX->EarthView::World::Spatial::GeoDataset::CDataMetaInfo::setVersion(version);
					}
					else
					{
						pObjectX->setVersion(version);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_DataMetaInfo_register_1setVersion_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCDataMetaInfoProxy *pObjectX = (JCDataMetaInfoProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_DataMetaInfo_setVersion_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong version_j)
				{
					ev_uint32 version = (ev_uint32) version_j;
					EarthView::World::Spatial::GeoDataset::CDataMetaInfo *pObjectX = (EarthView::World::Spatial::GeoDataset::CDataMetaInfo*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::GeoDataset::CDataMetaInfo::setVersion(version);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geodataset_DataMetaInfo_getVersion_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::GeoDataset::CDataMetaInfo *pObjectX = (EarthView::World::Spatial::GeoDataset::CDataMetaInfo*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCDataMetaInfoProxy))
					{
						ev_uint32 __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::CDataMetaInfo::getVersion();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_DataMetaInfo_register_1getVersion_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCDataMetaInfoProxy *pObjectX = (JCDataMetaInfoProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geodataset_DataMetaInfo_getVersion_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::GeoDataset::CDataMetaInfo *pObjectX = (EarthView::World::Spatial::GeoDataset::CDataMetaInfo*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::CDataMetaInfo::getVersion();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geodataset_DataMetaInfo_getID_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::GeoDataset::CDataMetaInfo *pObjectX = (EarthView::World::Spatial::GeoDataset::CDataMetaInfo*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCDataMetaInfoProxy))
					{
						ev_uint32 __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::CDataMetaInfo::getID();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_DataMetaInfo_register_1getID_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCDataMetaInfoProxy *pObjectX = (JCDataMetaInfoProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geodataset_DataMetaInfo_getID_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::GeoDataset::CDataMetaInfo *pObjectX = (EarthView::World::Spatial::GeoDataset::CDataMetaInfo*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::CDataMetaInfo::getID();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_DataMetaInfo_setID_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong id_j)
				{
					ev_uint32 id = (ev_uint32) id_j;
					EarthView::World::Spatial::GeoDataset::CDataMetaInfo *pObjectX = (EarthView::World::Spatial::GeoDataset::CDataMetaInfo*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCDataMetaInfoProxy))
					{
						pObjectX->EarthView::World::Spatial::GeoDataset::CDataMetaInfo::setID(id);
					}
					else
					{
						pObjectX->setID(id);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_DataMetaInfo_register_1setID_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCDataMetaInfoProxy *pObjectX = (JCDataMetaInfoProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_DataMetaInfo_setID_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong id_j)
				{
					ev_uint32 id = (ev_uint32) id_j;
					EarthView::World::Spatial::GeoDataset::CDataMetaInfo *pObjectX = (EarthView::World::Spatial::GeoDataset::CDataMetaInfo*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::GeoDataset::CDataMetaInfo::setID(id);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_geodataset_DataMetaInfo_getAltitudeMode_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::GeoDataset::CDataMetaInfo *pObjectX = (EarthView::World::Spatial::GeoDataset::CDataMetaInfo*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCDataMetaInfoProxy))
					{
						EarthView::World::Spatial::Utility::EVAltitudeMode __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::CDataMetaInfo::getAltitudeMode();
						jint __values1_j = (jint) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Utility::EVAltitudeMode __values1 = pObjectX->getAltitudeMode();
						jint __values1_j = (jint) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_DataMetaInfo_register_1getAltitudeMode_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCDataMetaInfoProxy *pObjectX = (JCDataMetaInfoProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getAltitudeMode_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getAltitudeMode_void_callback", "()I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_geodataset_DataMetaInfo_getAltitudeMode_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::GeoDataset::CDataMetaInfo *pObjectX = (EarthView::World::Spatial::GeoDataset::CDataMetaInfo*) pObjXXXX;
					EarthView::World::Spatial::Utility::EVAltitudeMode __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::CDataMetaInfo::getAltitudeMode();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_DataMetaInfo_setAltitudeMode_1EVAltitudeMode(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint mode_j)
				{
					EarthView::World::Spatial::Utility::EVAltitudeMode mode = (EarthView::World::Spatial::Utility::EVAltitudeMode) mode_j;
					EarthView::World::Spatial::GeoDataset::CDataMetaInfo *pObjectX = (EarthView::World::Spatial::GeoDataset::CDataMetaInfo*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCDataMetaInfoProxy))
					{
						pObjectX->EarthView::World::Spatial::GeoDataset::CDataMetaInfo::setAltitudeMode(mode);
					}
					else
					{
						pObjectX->setAltitudeMode(mode);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_DataMetaInfo_register_1setAltitudeMode_1EVAltitudeMode(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCDataMetaInfoProxy *pObjectX = (JCDataMetaInfoProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setAltitudeMode_EVAltitudeMode_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setAltitudeMode_EVAltitudeMode_callback", "(I)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_DataMetaInfo_setAltitudeMode_1EVAltitudeMode_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint mode_j)
				{
					EarthView::World::Spatial::Utility::EVAltitudeMode mode = (EarthView::World::Spatial::Utility::EVAltitudeMode) mode_j;
					EarthView::World::Spatial::GeoDataset::CDataMetaInfo *pObjectX = (EarthView::World::Spatial::GeoDataset::CDataMetaInfo*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::GeoDataset::CDataMetaInfo::setAltitudeMode(mode);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_geodataset_DataMetaInfo_getAltitudeValue_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::GeoDataset::CDataMetaInfo *pObjectX = (EarthView::World::Spatial::GeoDataset::CDataMetaInfo*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCDataMetaInfoProxy))
					{
						ev_real64 __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::CDataMetaInfo::getAltitudeValue();
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
					else
					{
						ev_real64 __values1 = pObjectX->getAltitudeValue();
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_DataMetaInfo_register_1getAltitudeValue_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCDataMetaInfoProxy *pObjectX = (JCDataMetaInfoProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getAltitudeValue_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getAltitudeValue_void_callback", "()D");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_geodataset_DataMetaInfo_getAltitudeValue_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::GeoDataset::CDataMetaInfo *pObjectX = (EarthView::World::Spatial::GeoDataset::CDataMetaInfo*) pObjXXXX;
					ev_real64 __values1 = pObjectX->EarthView::World::Spatial::GeoDataset::CDataMetaInfo::getAltitudeValue();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_DataMetaInfo_setAltitudeValue_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble value_j)
				{
					ev_real64 value = (ev_real64) value_j;
					EarthView::World::Spatial::GeoDataset::CDataMetaInfo *pObjectX = (EarthView::World::Spatial::GeoDataset::CDataMetaInfo*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCDataMetaInfoProxy))
					{
						pObjectX->EarthView::World::Spatial::GeoDataset::CDataMetaInfo::setAltitudeValue(value);
					}
					else
					{
						pObjectX->setAltitudeValue(value);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_DataMetaInfo_register_1setAltitudeValue_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCDataMetaInfoProxy *pObjectX = (JCDataMetaInfoProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setAltitudeValue_ev_real64_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setAltitudeValue_ev_real64_callback", "(D)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_DataMetaInfo_setAltitudeValue_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble value_j)
				{
					ev_real64 value = (ev_real64) value_j;
					EarthView::World::Spatial::GeoDataset::CDataMetaInfo *pObjectX = (EarthView::World::Spatial::GeoDataset::CDataMetaInfo*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::GeoDataset::CDataMetaInfo::setAltitudeValue(value);
				}
			}
		}
	}
}
