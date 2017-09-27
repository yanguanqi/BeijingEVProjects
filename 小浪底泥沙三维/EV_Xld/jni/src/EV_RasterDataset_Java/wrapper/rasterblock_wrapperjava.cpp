/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "rasterdataset/rasterblock.h"
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
				class JCRasterBlockProxy : public EarthView::World::Spatial2D::Raster::CRasterBlock
				{
				 private:
					EarthView::World::Core::ev_string m_getWidth_void_callback;
					EarthView::World::Core::ev_string m_getHeight_void_callback;
					EarthView::World::Core::ev_string m_getBandCount_void_callback;
					EarthView::World::Core::ev_string m_getDataType_void_callback;
					EarthView::World::Core::ev_string m_getPixelValue_ev_int32_ev_int32_callback;
					EarthView::World::Core::ev_string m_setPixelValue_ev_int32_ev_int32_ev_real64_callback;
					EarthView::World::Core::ev_string m_getNodataValue_void_callback;
					EarthView::World::Core::ev_string m_setNodataValue_ev_real64_callback;
					EarthView::World::Core::ev_string m_getDataRef_ev_int32_callback;
					EarthView::World::Core::ev_string m_ev_clone_void_callback;
					EarthView::World::Core::ev_string m_setDefaultValue_ev_real64_callback;
					EarthView::World::Core::ev_string m_createValidMask_void_callback;
					EarthView::World::Core::ev_string m_getValidMaskDataRef_void_callback;
					EarthView::World::Core::ev_string m_toStream_CDataStream_callback;
					EarthView::World::Core::ev_string m_fromXmlElement_CXmlElement_callback;
					EarthView::World::Core::ev_string m_toXmlElement_void_callback;
					EarthView::World::Core::ev_string m_fromStream_CDataStream_callback;
				public:
					JCRasterBlockProxy(EarthView::World::Core::CNameValuePairList *pList) : CRasterBlock(pList)
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
					void register_getWidth_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getWidth_void_callback = __method;
					}
					void register_getHeight_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getHeight_void_callback = __method;
					}
					void register_getBandCount_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getBandCount_void_callback = __method;
					}
					void register_getDataType_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getDataType_void_callback = __method;
					}
					void register_getPixelValue_ev_int32_ev_int32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getPixelValue_ev_int32_ev_int32_callback = __method;
					}
					void register_setPixelValue_ev_int32_ev_int32_ev_real64_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setPixelValue_ev_int32_ev_int32_ev_real64_callback = __method;
					}
					void register_getNodataValue_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getNodataValue_void_callback = __method;
					}
					void register_setNodataValue_ev_real64_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setNodataValue_ev_real64_callback = __method;
					}
					void register_getDataRef_ev_int32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getDataRef_ev_int32_callback = __method;
					}
					void register_ev_clone_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_ev_clone_void_callback = __method;
					}
					void register_setDefaultValue_ev_real64_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setDefaultValue_ev_real64_callback = __method;
					}
					void register_createValidMask_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_createValidMask_void_callback = __method;
					}
					void register_getValidMaskDataRef_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getValidMaskDataRef_void_callback = __method;
					}
					void register_toStream_CDataStream_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_toStream_CDataStream_callback = __method;
					}
					void register_fromXmlElement_CXmlElement_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_fromXmlElement_CXmlElement_callback = __method;
					}
					void register_toXmlElement_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_toXmlElement_void_callback = __method;
					}
					void register_fromStream_CDataStream_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_fromStream_CDataStream_callback = __method;
					}
					virtual ev_int32 getWidth() const
					{
						if (this->_gRef != NULL && this->m_getWidth_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getWidth_void_callback");
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
							return this->CRasterBlock::getWidth();
						}
					}
					virtual ev_int32 getHeight() const
					{
						if (this->_gRef != NULL && this->m_getHeight_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getHeight_void_callback");
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
							return this->CRasterBlock::getHeight();
						}
					}
					virtual ev_int32 getBandCount() const
					{
						if (this->_gRef != NULL && this->m_getBandCount_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getBandCount_void_callback");
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
							return this->CRasterBlock::getBandCount();
						}
					}
					virtual EarthView::World::Spatial::GeoDataset::EVRasterDataType getDataType() const
					{
						if (this->_gRef != NULL && this->m_getDataType_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getDataType_void_callback");
							jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::GeoDataset::EVRasterDataType __values1 = (EarthView::World::Spatial::GeoDataset::EVRasterDataType) __values1_j;
							return __values1;
						}
						else
						{
							return this->CRasterBlock::getDataType();
						}
					}
					virtual ev_real64 getPixelValue(ev_int32 bandIndex, ev_int32 offset) const
					{
						if (this->_gRef != NULL && this->m_getPixelValue_ev_int32_ev_int32_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jint bandIndex_j = (jint) bandIndex;
							jint offset_j = (jint) offset;
							jmethodID __method = __gr->getMethod("getPixelValue_ev_int32_ev_int32_callback");
							jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method , bandIndex_j, offset_j);
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
							return this->CRasterBlock::getPixelValue(bandIndex, offset);
						}
					}
					virtual void setPixelValue(ev_int32 bandIndex, ev_int32 offset, ev_real64 value)
					{
						if (this->_gRef != NULL && this->m_setPixelValue_ev_int32_ev_int32_ev_real64_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jint bandIndex_j = (jint) bandIndex;
							jint offset_j = (jint) offset;
							jdouble value_j = (jdouble) value;
							jmethodID __method = __gr->getMethod("setPixelValue_ev_int32_ev_int32_ev_real64_callback");
							__env->CallVoidMethod(__obj, __method , bandIndex_j, offset_j, value_j);
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
							return this->CRasterBlock::setPixelValue(bandIndex, offset, value);
						}
					}
					virtual ev_real64 getNodataValue() const
					{
						if (this->_gRef != NULL && this->m_getNodataValue_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getNodataValue_void_callback");
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
							return this->CRasterBlock::getNodataValue();
						}
					}
					virtual void setNodataValue(ev_real64 nodataValue)
					{
						if (this->_gRef != NULL && this->m_setNodataValue_ev_real64_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jdouble nodataValue_j = (jdouble) nodataValue;
							jmethodID __method = __gr->getMethod("setNodataValue_ev_real64_callback");
							__env->CallVoidMethod(__obj, __method , nodataValue_j);
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
							return this->CRasterBlock::setNodataValue(nodataValue);
						}
					}
					virtual ev_byte* getDataRef(ev_int32 bandIndex) const
					{
						if (this->_gRef != NULL && this->m_getDataRef_ev_int32_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jint bandIndex_j = (jint) bandIndex;
							jmethodID __method = __gr->getMethod("getDataRef_ev_int32_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , bandIndex_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_byte *__values1 = (ev_byte*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CRasterBlock::getDataRef(bandIndex);
						}
					}
					virtual EarthView::World::Spatial2D::Raster::IRasterBlock* clone() const
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
							EarthView::World::Spatial2D::Raster::IRasterBlock *__values1 = (EarthView::World::Spatial2D::Raster::IRasterBlock*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CRasterBlock::clone();
						}
					}
					virtual void setDefaultValue(ev_real64 value)
					{
						if (this->_gRef != NULL && this->m_setDefaultValue_ev_real64_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
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
							jmethodID __method = __gr->getMethod("setDefaultValue_ev_real64_callback");
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
							return this->CRasterBlock::setDefaultValue(value);
						}
					}
					virtual void createValidMask()
					{
						if (this->_gRef != NULL && this->m_createValidMask_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("createValidMask_void_callback");
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
							return this->CRasterBlock::createValidMask();
						}
					}
					virtual ev_byte* getValidMaskDataRef() const
					{
						if (this->_gRef != NULL && this->m_getValidMaskDataRef_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getValidMaskDataRef_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_byte *__values1 = (ev_byte*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CRasterBlock::getValidMaskDataRef();
						}
					}
					virtual void toStream(EarthView::World::Core::CDataStream& stream) const
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
							jlong stream_j = (jlong) &stream;
							jmethodID __method = __gr->getMethod("toStream_CDataStream_callback");
							__env->CallVoidMethod(__obj, __method , stream_j);
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
							return this->CRasterBlock::toStream(stream);
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
							return this->CRasterBlock::fromXmlElement(element);
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
							return this->CRasterBlock::toXmlElement();
						}
					}
					virtual void fromStream(EarthView::World::Core::CDataStream& stream)
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
							jlong stream_j = (jlong) &stream;
							jmethodID __method = __gr->getMethod("fromStream_CDataStream_callback");
							__env->CallVoidMethod(__obj, __method , stream_j);
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
							return this->CRasterBlock::fromStream(stream);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCRasterBlockProxy);
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_raster_RasterBlock_getWidth_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Raster::CRasterBlock *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterBlock*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRasterBlockProxy))
					{
						ev_int32 __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterBlock::getWidth();
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
					else
					{
						ev_int32 __values1 = pObjectX->getWidth();
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterBlock_register_1getWidth_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRasterBlockProxy *pObjectX = (JCRasterBlockProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getWidth_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getWidth_void_callback", "()I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_raster_RasterBlock_getWidth_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Raster::CRasterBlock *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterBlock*) pObjXXXX;
					ev_int32 __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterBlock::getWidth();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_raster_RasterBlock_getHeight_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Raster::CRasterBlock *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterBlock*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRasterBlockProxy))
					{
						ev_int32 __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterBlock::getHeight();
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
					else
					{
						ev_int32 __values1 = pObjectX->getHeight();
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterBlock_register_1getHeight_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRasterBlockProxy *pObjectX = (JCRasterBlockProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getHeight_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getHeight_void_callback", "()I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_raster_RasterBlock_getHeight_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Raster::CRasterBlock *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterBlock*) pObjXXXX;
					ev_int32 __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterBlock::getHeight();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_raster_RasterBlock_getBandCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Raster::CRasterBlock *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterBlock*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRasterBlockProxy))
					{
						ev_int32 __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterBlock::getBandCount();
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
					else
					{
						ev_int32 __values1 = pObjectX->getBandCount();
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterBlock_register_1getBandCount_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRasterBlockProxy *pObjectX = (JCRasterBlockProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getBandCount_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getBandCount_void_callback", "()I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_raster_RasterBlock_getBandCount_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Raster::CRasterBlock *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterBlock*) pObjXXXX;
					ev_int32 __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterBlock::getBandCount();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_raster_RasterBlock_getDataType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Raster::CRasterBlock *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterBlock*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRasterBlockProxy))
					{
						EarthView::World::Spatial::GeoDataset::EVRasterDataType __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterBlock::getDataType();
						jint __values1_j = (jint) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::EVRasterDataType __values1 = pObjectX->getDataType();
						jint __values1_j = (jint) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterBlock_register_1getDataType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRasterBlockProxy *pObjectX = (JCRasterBlockProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getDataType_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getDataType_void_callback", "()I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_raster_RasterBlock_getDataType_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Raster::CRasterBlock *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterBlock*) pObjXXXX;
					EarthView::World::Spatial::GeoDataset::EVRasterDataType __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterBlock::getDataType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial2d_raster_RasterBlock_getPixelValue_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint bandIndex_j, jint offset_j)
				{
					ev_int32 bandIndex = (ev_int32) bandIndex_j;
					ev_int32 offset = (ev_int32) offset_j;
					const 					EarthView::World::Spatial2D::Raster::CRasterBlock *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterBlock*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRasterBlockProxy))
					{
						ev_real64 __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterBlock::getPixelValue(bandIndex, offset);
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
					else
					{
						ev_real64 __values1 = pObjectX->getPixelValue(bandIndex, offset);
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterBlock_register_1getPixelValue_1ev_1int32_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRasterBlockProxy *pObjectX = (JCRasterBlockProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getPixelValue_ev_int32_ev_int32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getPixelValue_ev_int32_ev_int32_callback", "(II)D");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial2d_raster_RasterBlock_getPixelValue_1ev_1int32_1ev_1int32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint bandIndex_j, jint offset_j)
				{
					ev_int32 bandIndex = (ev_int32) bandIndex_j;
					ev_int32 offset = (ev_int32) offset_j;
					const 					EarthView::World::Spatial2D::Raster::CRasterBlock *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterBlock*) pObjXXXX;
					ev_real64 __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterBlock::getPixelValue(bandIndex, offset);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterBlock_setPixelValue_1ev_1int32_1ev_1int32_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint bandIndex_j, jint offset_j, jdouble value_j)
				{
					ev_int32 bandIndex = (ev_int32) bandIndex_j;
					ev_int32 offset = (ev_int32) offset_j;
					ev_real64 value = (ev_real64) value_j;
					EarthView::World::Spatial2D::Raster::CRasterBlock *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterBlock*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRasterBlockProxy))
					{
						pObjectX->EarthView::World::Spatial2D::Raster::CRasterBlock::setPixelValue(bandIndex, offset, value);
					}
					else
					{
						pObjectX->setPixelValue(bandIndex, offset, value);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterBlock_register_1setPixelValue_1ev_1int32_1ev_1int32_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRasterBlockProxy *pObjectX = (JCRasterBlockProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setPixelValue_ev_int32_ev_int32_ev_real64_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setPixelValue_ev_int32_ev_int32_ev_real64_callback", "(IID)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterBlock_setPixelValue_1ev_1int32_1ev_1int32_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint bandIndex_j, jint offset_j, jdouble value_j)
				{
					ev_int32 bandIndex = (ev_int32) bandIndex_j;
					ev_int32 offset = (ev_int32) offset_j;
					ev_real64 value = (ev_real64) value_j;
					EarthView::World::Spatial2D::Raster::CRasterBlock *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterBlock*) pObjXXXX;
					pObjectX->EarthView::World::Spatial2D::Raster::CRasterBlock::setPixelValue(bandIndex, offset, value);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial2d_raster_RasterBlock_getNodataValue_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Raster::CRasterBlock *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterBlock*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRasterBlockProxy))
					{
						ev_real64 __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterBlock::getNodataValue();
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
					else
					{
						ev_real64 __values1 = pObjectX->getNodataValue();
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterBlock_register_1getNodataValue_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRasterBlockProxy *pObjectX = (JCRasterBlockProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getNodataValue_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getNodataValue_void_callback", "()D");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial2d_raster_RasterBlock_getNodataValue_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Raster::CRasterBlock *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterBlock*) pObjXXXX;
					ev_real64 __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterBlock::getNodataValue();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterBlock_setNodataValue_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble nodataValue_j)
				{
					ev_real64 nodataValue = (ev_real64) nodataValue_j;
					EarthView::World::Spatial2D::Raster::CRasterBlock *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterBlock*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRasterBlockProxy))
					{
						pObjectX->EarthView::World::Spatial2D::Raster::CRasterBlock::setNodataValue(nodataValue);
					}
					else
					{
						pObjectX->setNodataValue(nodataValue);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterBlock_register_1setNodataValue_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRasterBlockProxy *pObjectX = (JCRasterBlockProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setNodataValue_ev_real64_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setNodataValue_ev_real64_callback", "(D)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterBlock_setNodataValue_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble nodataValue_j)
				{
					ev_real64 nodataValue = (ev_real64) nodataValue_j;
					EarthView::World::Spatial2D::Raster::CRasterBlock *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterBlock*) pObjXXXX;
					pObjectX->EarthView::World::Spatial2D::Raster::CRasterBlock::setNodataValue(nodataValue);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_raster_RasterBlock_getDataRef_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint bandIndex_j)
				{
					ev_int32 bandIndex = (ev_int32) bandIndex_j;
					const 					EarthView::World::Spatial2D::Raster::CRasterBlock *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterBlock*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRasterBlockProxy))
					{
						ev_byte* __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterBlock::getDataRef(bandIndex);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						ev_byte* __values1 = pObjectX->getDataRef(bandIndex);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterBlock_register_1getDataRef_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRasterBlockProxy *pObjectX = (JCRasterBlockProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getDataRef_ev_int32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getDataRef_ev_int32_callback", "(I)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_raster_RasterBlock_getDataRef_1ev_1int32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint bandIndex_j)
				{
					ev_int32 bandIndex = (ev_int32) bandIndex_j;
					const 					EarthView::World::Spatial2D::Raster::CRasterBlock *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterBlock*) pObjXXXX;
					ev_byte* __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterBlock::getDataRef(bandIndex);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_raster_RasterBlock_ev_1clone_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Raster::CRasterBlock *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterBlock*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRasterBlockProxy))
					{
						EarthView::World::Spatial2D::Raster::IRasterBlock* __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterBlock::clone();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial2D::Raster::IRasterBlock* __values1 = pObjectX->clone();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterBlock_register_1ev_1clone_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRasterBlockProxy *pObjectX = (JCRasterBlockProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_raster_RasterBlock_ev_1clone_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Raster::CRasterBlock *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterBlock*) pObjXXXX;
					EarthView::World::Spatial2D::Raster::IRasterBlock* __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterBlock::clone();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterBlock_setDefaultValue_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble value_j)
				{
					ev_real64 value = (ev_real64) value_j;
					EarthView::World::Spatial2D::Raster::CRasterBlock *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterBlock*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRasterBlockProxy))
					{
						pObjectX->EarthView::World::Spatial2D::Raster::CRasterBlock::setDefaultValue(value);
					}
					else
					{
						pObjectX->setDefaultValue(value);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterBlock_register_1setDefaultValue_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRasterBlockProxy *pObjectX = (JCRasterBlockProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setDefaultValue_ev_real64_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setDefaultValue_ev_real64_callback", "(D)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterBlock_setDefaultValue_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble value_j)
				{
					ev_real64 value = (ev_real64) value_j;
					EarthView::World::Spatial2D::Raster::CRasterBlock *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterBlock*) pObjXXXX;
					pObjectX->EarthView::World::Spatial2D::Raster::CRasterBlock::setDefaultValue(value);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterBlock_createValidMask_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Raster::CRasterBlock *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterBlock*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRasterBlockProxy))
					{
						pObjectX->EarthView::World::Spatial2D::Raster::CRasterBlock::createValidMask();
					}
					else
					{
						pObjectX->createValidMask();
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterBlock_register_1createValidMask_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRasterBlockProxy *pObjectX = (JCRasterBlockProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_createValidMask_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"createValidMask_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterBlock_createValidMask_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Raster::CRasterBlock *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterBlock*) pObjXXXX;
					pObjectX->EarthView::World::Spatial2D::Raster::CRasterBlock::createValidMask();
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_raster_RasterBlock_getValidMaskDataRef_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Raster::CRasterBlock *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterBlock*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRasterBlockProxy))
					{
						ev_byte* __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterBlock::getValidMaskDataRef();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						ev_byte* __values1 = pObjectX->getValidMaskDataRef();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterBlock_register_1getValidMaskDataRef_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRasterBlockProxy *pObjectX = (JCRasterBlockProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getValidMaskDataRef_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getValidMaskDataRef_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_raster_RasterBlock_getValidMaskDataRef_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Raster::CRasterBlock *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterBlock*) pObjXXXX;
					ev_byte* __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterBlock::getValidMaskDataRef();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial2d_raster_RasterBlock_getPixelHeight_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Raster::CRasterBlock *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterBlock*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getPixelHeight();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial2d_raster_RasterBlock_getPixelWidth_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Raster::CRasterBlock *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterBlock*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getPixelWidth();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_raster_RasterBlock_getSpatialReference_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Raster::CRasterBlock *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterBlock*) pObjXXXX;
					const EarthView::World::Spatial::Geometry::ISpatialReference* __values1 = pObjectX->getSpatialReference();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterBlock_setSpatialReference_1ISpatialReference(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pSpatialRef_j)
				{
					const EarthView::World::Spatial::Geometry::ISpatialReference *pSpatialRef = (const EarthView::World::Spatial::Geometry::ISpatialReference*) pSpatialRef_j;
					EarthView::World::Spatial2D::Raster::CRasterBlock *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterBlock*) pObjXXXX;
					pObjectX->setSpatialReference(pSpatialRef);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_raster_RasterBlock_getGeoEnvelope_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Raster::CRasterBlock *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterBlock*) pObjXXXX;
					const EarthView::World::Spatial::Geometry::IEnvelope* __values1 = pObjectX->getGeoEnvelope();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_raster_RasterBlock_getGeoTransform_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Raster::CRasterBlock *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterBlock*) pObjXXXX;
					const EarthView::World::Spatial2D::Raster::CAffineTransform* __values1 = pObjectX->getGeoTransform();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterBlock_setGeoTransform_1CAffineTransform(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong tranform_j)
				{
					const EarthView::World::Spatial2D::Raster::CAffineTransform &tranform = *(EarthView::World::Spatial2D::Raster::CAffineTransform*) tranform_j;
					EarthView::World::Spatial2D::Raster::CRasterBlock *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterBlock*) pObjXXXX;
					pObjectX->setGeoTransform(tranform);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_raster_RasterBlock_getDataset_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Raster::CRasterBlock *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterBlock*) pObjXXXX;
					EarthView::World::Spatial::GeoDataset::IRasterDataset* __values1 = pObjectX->getDataset();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterBlock_setDataset_1IRasterDataset(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pDataset_j)
				{
					EarthView::World::Spatial::GeoDataset::IRasterDataset *pDataset = (EarthView::World::Spatial::GeoDataset::IRasterDataset*) pDataset_j;
					EarthView::World::Spatial2D::Raster::CRasterBlock *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterBlock*) pObjXXXX;
					pObjectX->setDataset(pDataset);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_raster_RasterBlock_getRasterBandIndex_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint index_j)
				{
					ev_int32 index = (ev_int32) index_j;
					const 					EarthView::World::Spatial2D::Raster::CRasterBlock *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterBlock*) pObjXXXX;
					ev_int32 __values1 = pObjectX->getRasterBandIndex(index);
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterBlock_setRasterBandIndex_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint index_j, jint bandIndex_j)
				{
					ev_int32 index = (ev_int32) index_j;
					ev_int32 bandIndex = (ev_int32) bandIndex_j;
					EarthView::World::Spatial2D::Raster::CRasterBlock *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterBlock*) pObjXXXX;
					pObjectX->setRasterBandIndex(index, bandIndex);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterBlock_setRasterResampleType_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint resampleIndex_j)
				{
					ev_int32 resampleIndex = (ev_int32) resampleIndex_j;
					EarthView::World::Spatial2D::Raster::CRasterBlock *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterBlock*) pObjXXXX;
					pObjectX->setRasterResampleType(resampleIndex);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_raster_RasterBlock_getRasterResampleType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Raster::CRasterBlock *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterBlock*) pObjXXXX;
					ev_int32 __values1 = pObjectX->getRasterResampleType();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterBlock_register_1toStream_1CDataStream(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRasterBlockProxy *pObjectX = (JCRasterBlockProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterBlock_register_1fromXmlElement_1CXmlElement(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRasterBlockProxy *pObjectX = (JCRasterBlockProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterBlock_register_1toXmlElement_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRasterBlockProxy *pObjectX = (JCRasterBlockProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterBlock_register_1fromStream_1CDataStream(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRasterBlockProxy *pObjectX = (JCRasterBlockProxy*) pObjXXXX;
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
			}
		}
	}
}
