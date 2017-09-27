/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "rasterdataset/rasterdataset.h"
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
				class JCRasterBandProxy : public EarthView::World::Spatial2D::Raster::CRasterBand
				{
				 private:
					EarthView::World::Core::ev_string m_getBandHistogram_void_callback;
					EarthView::World::Core::ev_string m_getHistogram_void_callback;
					EarthView::World::Core::ev_string m_getColorTable_void_callback;
					EarthView::World::Core::ev_string m_getAttributeTable_void_callback;
					EarthView::World::Core::ev_string m_getBandStatistics_ev_bool_callback;
					EarthView::World::Core::ev_string m_iRasterIO_EVIOFlag_void_ev_int32_ev_int32_ev_int32_ev_int32_EVRasterDataType_ev_int32_ev_int32_callback;
					EarthView::World::Core::ev_string m_asDataset_void_callback;
					EarthView::World::Core::ev_string m_setNodatavalue_ev_real64_callback;
					EarthView::World::Core::ev_string m_getNodatavalue_void_callback;
				public:
					JCRasterBandProxy(EarthView::World::Core::CNameValuePairList *pList) : CRasterBand(pList)
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
					void register_getBandHistogram_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getBandHistogram_void_callback = __method;
					}
					void register_getHistogram_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getHistogram_void_callback = __method;
					}
					void register_getColorTable_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getColorTable_void_callback = __method;
					}
					void register_getAttributeTable_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getAttributeTable_void_callback = __method;
					}
					void register_getBandStatistics_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getBandStatistics_ev_bool_callback = __method;
					}
					void register_iRasterIO_EVIOFlag_void_ev_int32_ev_int32_ev_int32_ev_int32_EVRasterDataType_ev_int32_ev_int32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_iRasterIO_EVIOFlag_void_ev_int32_ev_int32_ev_int32_ev_int32_EVRasterDataType_ev_int32_ev_int32_callback = __method;
					}
					void register_asDataset_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_asDataset_void_callback = __method;
					}
					void register_setNodatavalue_ev_real64_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setNodatavalue_ev_real64_callback = __method;
					}
					void register_getNodatavalue_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getNodatavalue_void_callback = __method;
					}
					virtual const EarthView::World::Spatial2D::Raster::CBandHistogram* getBandHistogram()
					{
						if (this->_gRef != NULL && this->m_getBandHistogram_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getBandHistogram_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							const EarthView::World::Spatial2D::Raster::CBandHistogram *__values1 = (const EarthView::World::Spatial2D::Raster::CBandHistogram*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CRasterBand::getBandHistogram();
						}
					}
					virtual const EarthView::World::Spatial2D::Raster::CRasterHistogram* getHistogram()
					{
						if (this->_gRef != NULL && this->m_getHistogram_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getHistogram_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							const EarthView::World::Spatial2D::Raster::CRasterHistogram *__values1 = (const EarthView::World::Spatial2D::Raster::CRasterHistogram*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CRasterBand::getHistogram();
						}
					}
					virtual const EarthView::World::Spatial::Display::CColorTable* getColorTable()
					{
						if (this->_gRef != NULL && this->m_getColorTable_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getColorTable_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							const EarthView::World::Spatial::Display::CColorTable *__values1 = (const EarthView::World::Spatial::Display::CColorTable*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CRasterBand::getColorTable();
						}
					}
					virtual const EarthView::World::Spatial2D::Raster::CRasterAttributeTable* getAttributeTable()
					{
						if (this->_gRef != NULL && this->m_getAttributeTable_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getAttributeTable_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							const EarthView::World::Spatial2D::Raster::CRasterAttributeTable *__values1 = (const EarthView::World::Spatial2D::Raster::CRasterAttributeTable*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CRasterBand::getAttributeTable();
						}
					}
					virtual const EarthView::World::Spatial2D::Raster::CBandStatisticsInfo* getBandStatistics(ev_bool isApprox)
					{
						if (this->_gRef != NULL && this->m_getBandStatistics_ev_bool_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jboolean isApprox_j = (jboolean) isApprox;
							jmethodID __method = __gr->getMethod("getBandStatistics_ev_bool_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , isApprox_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							const EarthView::World::Spatial2D::Raster::CBandStatisticsInfo *__values1 = (const EarthView::World::Spatial2D::Raster::CBandStatisticsInfo*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CRasterBand::getBandStatistics(isApprox);
						}
					}
					virtual ev_bool iRasterIO(EarthView::World::Spatial2D::Raster::EVIOFlag bFlag, void* pDstBuffer, ev_int32 iOffsetX, ev_int32 iOffsetY, ev_int32 iWidth, ev_int32 iHeight, EarthView::World::Spatial::GeoDataset::EVRasterDataType eDataType, ev_int32 iBufferX, ev_int32 iBufferY)
					{
						if (this->_gRef != NULL && this->m_iRasterIO_EVIOFlag_void_ev_int32_ev_int32_ev_int32_ev_int32_EVRasterDataType_ev_int32_ev_int32_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jint bFlag_j = (jint) bFlag;
							jlong pDstBuffer_j = (jlong) pDstBuffer;
							jint iOffsetX_j = (jint) iOffsetX;
							jint iOffsetY_j = (jint) iOffsetY;
							jint iWidth_j = (jint) iWidth;
							jint iHeight_j = (jint) iHeight;
							jint eDataType_j = (jint) eDataType;
							jint iBufferX_j = (jint) iBufferX;
							jint iBufferY_j = (jint) iBufferY;
							jmethodID __method = __gr->getMethod("iRasterIO_EVIOFlag_void_ev_int32_ev_int32_ev_int32_ev_int32_EVRasterDataType_ev_int32_ev_int32_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , bFlag_j, pDstBuffer_j, iOffsetX_j, iOffsetY_j, iWidth_j, iHeight_j, eDataType_j, iBufferX_j, iBufferY_j);
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
							return this->CRasterBand::iRasterIO(bFlag, pDstBuffer, iOffsetX, iOffsetY, iWidth, iHeight, eDataType, iBufferX, iBufferY);
						}
					}
					virtual EarthView::World::Spatial2D::Raster::CRasterDataSet* asDataset()
					{
						if (this->_gRef != NULL && this->m_asDataset_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("asDataset_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial2D::Raster::CRasterDataSet *__values1 = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CRasterBand::asDataset();
						}
					}
					virtual void setNodatavalue(ev_real64 dfNodataValue)
					{
						if (this->_gRef != NULL && this->m_setNodatavalue_ev_real64_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jdouble dfNodataValue_j = (jdouble) dfNodataValue;
							jmethodID __method = __gr->getMethod("setNodatavalue_ev_real64_callback");
							__env->CallVoidMethod(__obj, __method , dfNodataValue_j);
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
							return this->CRasterBand::setNodatavalue(dfNodataValue);
						}
					}
					virtual const ev_real64 getNodatavalue() const
					{
						if (this->_gRef != NULL && this->m_getNodatavalue_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getNodatavalue_void_callback");
							jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							const ev_real64 __values1 = (ev_real64) __values1_j;
							return __values1;
						}
						else
						{
							return this->CRasterBand::getNodatavalue();
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCRasterBandProxy);
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_raster_RasterBand_getBandHistogram_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Raster::CRasterBand *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterBand*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRasterBandProxy))
					{
						const EarthView::World::Spatial2D::Raster::CBandHistogram* __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterBand::getBandHistogram();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						const EarthView::World::Spatial2D::Raster::CBandHistogram* __values1 = pObjectX->getBandHistogram();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterBand_register_1getBandHistogram_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRasterBandProxy *pObjectX = (JCRasterBandProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getBandHistogram_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getBandHistogram_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_raster_RasterBand_getBandHistogram_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Raster::CRasterBand *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterBand*) pObjXXXX;
					const EarthView::World::Spatial2D::Raster::CBandHistogram* __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterBand::getBandHistogram();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_raster_RasterBand_getHistogram_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Raster::CRasterBand *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterBand*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRasterBandProxy))
					{
						const EarthView::World::Spatial2D::Raster::CRasterHistogram* __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterBand::getHistogram();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						const EarthView::World::Spatial2D::Raster::CRasterHistogram* __values1 = pObjectX->getHistogram();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterBand_register_1getHistogram_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRasterBandProxy *pObjectX = (JCRasterBandProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getHistogram_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getHistogram_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_raster_RasterBand_getHistogram_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Raster::CRasterBand *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterBand*) pObjXXXX;
					const EarthView::World::Spatial2D::Raster::CRasterHistogram* __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterBand::getHistogram();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_raster_RasterBand_getColorTable_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Raster::CRasterBand *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterBand*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRasterBandProxy))
					{
						const EarthView::World::Spatial::Display::CColorTable* __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterBand::getColorTable();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						const EarthView::World::Spatial::Display::CColorTable* __values1 = pObjectX->getColorTable();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterBand_register_1getColorTable_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRasterBandProxy *pObjectX = (JCRasterBandProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getColorTable_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getColorTable_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_raster_RasterBand_getColorTable_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Raster::CRasterBand *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterBand*) pObjXXXX;
					const EarthView::World::Spatial::Display::CColorTable* __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterBand::getColorTable();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_raster_RasterBand_getAttributeTable_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Raster::CRasterBand *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterBand*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRasterBandProxy))
					{
						const EarthView::World::Spatial2D::Raster::CRasterAttributeTable* __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterBand::getAttributeTable();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						const EarthView::World::Spatial2D::Raster::CRasterAttributeTable* __values1 = pObjectX->getAttributeTable();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterBand_register_1getAttributeTable_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRasterBandProxy *pObjectX = (JCRasterBandProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getAttributeTable_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getAttributeTable_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_raster_RasterBand_getAttributeTable_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Raster::CRasterBand *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterBand*) pObjXXXX;
					const EarthView::World::Spatial2D::Raster::CRasterAttributeTable* __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterBand::getAttributeTable();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_raster_RasterBand_getBandStatistics_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean isApprox_j)
				{
					ev_bool isApprox = (ev_bool) isApprox_j;
					EarthView::World::Spatial2D::Raster::CRasterBand *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterBand*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRasterBandProxy))
					{
						const EarthView::World::Spatial2D::Raster::CBandStatisticsInfo* __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterBand::getBandStatistics(isApprox);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						const EarthView::World::Spatial2D::Raster::CBandStatisticsInfo* __values1 = pObjectX->getBandStatistics(isApprox);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterBand_register_1getBandStatistics_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRasterBandProxy *pObjectX = (JCRasterBandProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getBandStatistics_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getBandStatistics_ev_bool_callback", "(Z)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_raster_RasterBand_getBandStatistics_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean isApprox_j)
				{
					ev_bool isApprox = (ev_bool) isApprox_j;
					EarthView::World::Spatial2D::Raster::CRasterBand *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterBand*) pObjXXXX;
					const EarthView::World::Spatial2D::Raster::CBandStatisticsInfo* __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterBand::getBandStatistics(isApprox);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_raster_RasterBand_iRasterIO_1EVIOFlag_1void_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32_1EVRasterDataType_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint bFlag_j, jlong pDstBuffer_j, jint iOffsetX_j, jint iOffsetY_j, jint iWidth_j, jint iHeight_j, jint eDataType_j, jint iBufferX_j, jint iBufferY_j)
				{
					EarthView::World::Spatial2D::Raster::EVIOFlag bFlag = (EarthView::World::Spatial2D::Raster::EVIOFlag) bFlag_j;
					void *pDstBuffer = (void*) pDstBuffer_j;
					ev_int32 iOffsetX = (ev_int32) iOffsetX_j;
					ev_int32 iOffsetY = (ev_int32) iOffsetY_j;
					ev_int32 iWidth = (ev_int32) iWidth_j;
					ev_int32 iHeight = (ev_int32) iHeight_j;
					EarthView::World::Spatial::GeoDataset::EVRasterDataType eDataType = (EarthView::World::Spatial::GeoDataset::EVRasterDataType) eDataType_j;
					ev_int32 iBufferX = (ev_int32) iBufferX_j;
					ev_int32 iBufferY = (ev_int32) iBufferY_j;
					EarthView::World::Spatial2D::Raster::CRasterBand *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterBand*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRasterBandProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterBand::iRasterIO(bFlag, pDstBuffer, iOffsetX, iOffsetY, iWidth, iHeight, eDataType, iBufferX, iBufferY);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->iRasterIO(bFlag, pDstBuffer, iOffsetX, iOffsetY, iWidth, iHeight, eDataType, iBufferX, iBufferY);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterBand_register_1iRasterIO_1EVIOFlag_1void_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32_1EVRasterDataType_1ev_1int32_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRasterBandProxy *pObjectX = (JCRasterBandProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_iRasterIO_EVIOFlag_void_ev_int32_ev_int32_ev_int32_ev_int32_EVRasterDataType_ev_int32_ev_int32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"iRasterIO_EVIOFlag_void_ev_int32_ev_int32_ev_int32_ev_int32_EVRasterDataType_ev_int32_ev_int32_callback", "(IJIIIIIII)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_raster_RasterBand_iRasterIO_1EVIOFlag_1void_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32_1EVRasterDataType_1ev_1int32_1ev_1int32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint bFlag_j, jlong pDstBuffer_j, jint iOffsetX_j, jint iOffsetY_j, jint iWidth_j, jint iHeight_j, jint eDataType_j, jint iBufferX_j, jint iBufferY_j)
				{
					EarthView::World::Spatial2D::Raster::EVIOFlag bFlag = (EarthView::World::Spatial2D::Raster::EVIOFlag) bFlag_j;
					void *pDstBuffer = (void*) pDstBuffer_j;
					ev_int32 iOffsetX = (ev_int32) iOffsetX_j;
					ev_int32 iOffsetY = (ev_int32) iOffsetY_j;
					ev_int32 iWidth = (ev_int32) iWidth_j;
					ev_int32 iHeight = (ev_int32) iHeight_j;
					EarthView::World::Spatial::GeoDataset::EVRasterDataType eDataType = (EarthView::World::Spatial::GeoDataset::EVRasterDataType) eDataType_j;
					ev_int32 iBufferX = (ev_int32) iBufferX_j;
					ev_int32 iBufferY = (ev_int32) iBufferY_j;
					EarthView::World::Spatial2D::Raster::CRasterBand *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterBand*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterBand::iRasterIO(bFlag, pDstBuffer, iOffsetX, iOffsetY, iWidth, iHeight, eDataType, iBufferX, iBufferY);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_raster_RasterBand_asDataset_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Raster::CRasterBand *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterBand*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRasterBandProxy))
					{
						EarthView::World::Spatial2D::Raster::CRasterDataSet* __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterBand::asDataset();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial2D::Raster::CRasterDataSet* __values1 = pObjectX->asDataset();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterBand_register_1asDataset_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRasterBandProxy *pObjectX = (JCRasterBandProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_asDataset_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"asDataset_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_raster_RasterBand_asDataset_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Raster::CRasterBand *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterBand*) pObjXXXX;
					EarthView::World::Spatial2D::Raster::CRasterDataSet* __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterBand::asDataset();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterBand_setNodatavalue_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble dfNodataValue_j)
				{
					ev_real64 dfNodataValue = (ev_real64) dfNodataValue_j;
					EarthView::World::Spatial2D::Raster::CRasterBand *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterBand*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRasterBandProxy))
					{
						pObjectX->EarthView::World::Spatial2D::Raster::CRasterBand::setNodatavalue(dfNodataValue);
					}
					else
					{
						pObjectX->setNodatavalue(dfNodataValue);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterBand_register_1setNodatavalue_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRasterBandProxy *pObjectX = (JCRasterBandProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setNodatavalue_ev_real64_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setNodatavalue_ev_real64_callback", "(D)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterBand_setNodatavalue_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble dfNodataValue_j)
				{
					ev_real64 dfNodataValue = (ev_real64) dfNodataValue_j;
					EarthView::World::Spatial2D::Raster::CRasterBand *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterBand*) pObjXXXX;
					pObjectX->EarthView::World::Spatial2D::Raster::CRasterBand::setNodatavalue(dfNodataValue);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial2d_raster_RasterBand_getNodatavalue_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Raster::CRasterBand *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterBand*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRasterBandProxy))
					{
						const ev_real64 __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterBand::getNodatavalue();
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
					else
					{
						const ev_real64 __values1 = pObjectX->getNodatavalue();
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterBand_register_1getNodatavalue_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRasterBandProxy *pObjectX = (JCRasterBandProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getNodatavalue_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getNodatavalue_void_callback", "()D");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial2d_raster_RasterBand_getNodatavalue_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Raster::CRasterBand *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterBand*) pObjXXXX;
					const ev_real64 __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterBand::getNodatavalue();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				class JCRasterDataSetProxy : public EarthView::World::Spatial2D::Raster::CRasterDataSet
				{
				 private:
					EarthView::World::Core::ev_string m_setDataSourceRef_IDataSource_callback;
					EarthView::World::Core::ev_string m_getGeoEnvelope_void_callback;
					EarthView::World::Core::ev_string m_getSensorInfo_void_callback;
					EarthView::World::Core::ev_string m_getRasterBand_ev_int32_callback;
					EarthView::World::Core::ev_string m_getSpatialReference_void_callback;
					EarthView::World::Core::ev_string m_setSensorInfo_CSensorInfo_callback;
					EarthView::World::Core::ev_string m_setGeoTransform_CAffineTransform_callback;
					EarthView::World::Core::ev_string m_setSpatialReference_ISpatialReference_callback;
					EarthView::World::Core::ev_string m_reference_void_callback;
					EarthView::World::Core::ev_string m_deReference_void_callback;
					EarthView::World::Core::ev_string m_toStream_ev_uchar_ev_uint64_callback;
					EarthView::World::Core::ev_string m_getOverViewLevels_void_callback;
					EarthView::World::Core::ev_string m_getDatasetFullpath_void_callback;
					EarthView::World::Core::ev_string m_getRasterRect_ev_real64_ev_real64_ev_real64_ev_real64_callback;
					EarthView::World::Core::ev_string m_getRasterWidth_void_callback;
					EarthView::World::Core::ev_string m_getRasterHeight_void_callback;
					EarthView::World::Core::ev_string m_getBandCount_void_callback;
					EarthView::World::Core::ev_string m_getGeoTransform_void_callback;
					EarthView::World::Core::ev_string m_getRasterDataType_void_callback;
					EarthView::World::Core::ev_string m_getSpatialReferenceWkt_EVString_callback;
					EarthView::World::Core::ev_string m_setSpatialReference_EVString_callback;
					EarthView::World::Core::ev_string m_read_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32_callback;
					EarthView::World::Core::ev_string m_write_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32_callback;
					EarthView::World::Core::ev_string m_read_EVString_ev_real64_ev_real64_ev_real64_ev_real64_ev_int32_ev_int32_ev_byte_callback;
					EarthView::World::Core::ev_string m_buildOverViews_ev_int32_ev_int32_ev_int32_ev_int32_CProgressInfo_callback;
					EarthView::World::Core::ev_string m_buildDefaultOverViews_CProgressInfo_callback;
					EarthView::World::Core::ev_string m_rasterIO_EVIOFlag_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_void_ev_int32_ev_int32_EVRasterDataType_callback;
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
					JCRasterDataSetProxy(EarthView::World::Core::CNameValuePairList *pList) : CRasterDataSet(pList)
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
					void register_setDataSourceRef_IDataSource_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setDataSourceRef_IDataSource_callback = __method;
					}
					void register_getGeoEnvelope_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getGeoEnvelope_void_callback = __method;
					}
					void register_getSensorInfo_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getSensorInfo_void_callback = __method;
					}
					void register_getRasterBand_ev_int32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getRasterBand_ev_int32_callback = __method;
					}
					void register_getSpatialReference_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getSpatialReference_void_callback = __method;
					}
					void register_setSensorInfo_CSensorInfo_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setSensorInfo_CSensorInfo_callback = __method;
					}
					void register_setGeoTransform_CAffineTransform_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setGeoTransform_CAffineTransform_callback = __method;
					}
					void register_setSpatialReference_ISpatialReference_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setSpatialReference_ISpatialReference_callback = __method;
					}
					void register_reference_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_reference_void_callback = __method;
					}
					void register_deReference_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_deReference_void_callback = __method;
					}
					void register_toStream_ev_uchar_ev_uint64_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_toStream_ev_uchar_ev_uint64_callback = __method;
					}
					void register_getOverViewLevels_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getOverViewLevels_void_callback = __method;
					}
					void register_getDatasetFullpath_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getDatasetFullpath_void_callback = __method;
					}
					void register_getRasterRect_ev_real64_ev_real64_ev_real64_ev_real64_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getRasterRect_ev_real64_ev_real64_ev_real64_ev_real64_callback = __method;
					}
					void register_getRasterWidth_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getRasterWidth_void_callback = __method;
					}
					void register_getRasterHeight_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getRasterHeight_void_callback = __method;
					}
					void register_getBandCount_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getBandCount_void_callback = __method;
					}
					void register_getGeoTransform_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getGeoTransform_void_callback = __method;
					}
					void register_getRasterDataType_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getRasterDataType_void_callback = __method;
					}
					void register_getSpatialReferenceWkt_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getSpatialReferenceWkt_EVString_callback = __method;
					}
					void register_setSpatialReference_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setSpatialReference_EVString_callback = __method;
					}
					void register_read_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_read_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32_callback = __method;
					}
					void register_write_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_write_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32_callback = __method;
					}
					void register_read_EVString_ev_real64_ev_real64_ev_real64_ev_real64_ev_int32_ev_int32_ev_byte_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_read_EVString_ev_real64_ev_real64_ev_real64_ev_real64_ev_int32_ev_int32_ev_byte_callback = __method;
					}
					void register_buildOverViews_ev_int32_ev_int32_ev_int32_ev_int32_CProgressInfo_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_buildOverViews_ev_int32_ev_int32_ev_int32_ev_int32_CProgressInfo_callback = __method;
					}
					void register_buildDefaultOverViews_CProgressInfo_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_buildDefaultOverViews_CProgressInfo_callback = __method;
					}
					void register_rasterIO_EVIOFlag_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_void_ev_int32_ev_int32_EVRasterDataType_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_rasterIO_EVIOFlag_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_void_ev_int32_ev_int32_EVRasterDataType_callback = __method;
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
							return this->CRasterDataSet::getType();
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
							return this->CRasterDataSet::getName();
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
							return this->CRasterDataSet::getDataVersion();
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
							return this->CRasterDataSet::getDescription();
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
							return this->CRasterDataSet::getUpdateTime();
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
							return this->CRasterDataSet::hasSubDataset();
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
							return this->CRasterDataSet::getDataSourceRef();
						}
					}
					virtual void setDataSourceRef(EarthView::World::Spatial::GeoDataset::IDataSource* ref_pDataSrc)
					{
						if (this->_gRef != NULL && this->m_setDataSourceRef_IDataSource_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong ref_pDataSrc_j = (jlong) ref_pDataSrc;
							jmethodID __method = __gr->getMethod("setDataSourceRef_IDataSource_callback");
							__env->CallVoidMethod(__obj, __method , ref_pDataSrc_j);
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
							return this->CRasterDataSet::setDataSourceRef(ref_pDataSrc);
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
							return this->CRasterDataSet::canEdit();
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
							return this->CRasterDataSet::isEditing();
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
							return this->CRasterDataSet::startEditing(withUndo);
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
							return this->CRasterDataSet::stopEditing(isSave);
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
							return this->CRasterDataSet::isBeginEditingOperation();
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
							return this->CRasterDataSet::beginEditingOperation();
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
							return this->CRasterDataSet::endEditingOperation(isConfirm);
						}
					}
					virtual void getRasterRect(ev_real64& dfUpleftX, ev_real64& dfUpleftY, ev_real64& dfDownRightX, ev_real64& dfDownRightY) const
					{
						if (this->_gRef != NULL && this->m_getRasterRect_ev_real64_ev_real64_ev_real64_ev_real64_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong dfUpleftX_j = (jlong) &dfUpleftX;
							jlong dfUpleftY_j = (jlong) &dfUpleftY;
							jlong dfDownRightX_j = (jlong) &dfDownRightX;
							jlong dfDownRightY_j = (jlong) &dfDownRightY;
							jmethodID __method = __gr->getMethod("getRasterRect_ev_real64_ev_real64_ev_real64_ev_real64_callback");
							__env->CallVoidMethod(__obj, __method , dfUpleftX_j, dfUpleftY_j, dfDownRightX_j, dfDownRightY_j);
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
							return this->CRasterDataSet::getRasterRect(dfUpleftX, dfUpleftY, dfDownRightX, dfDownRightY);
						}
					}
					virtual const EarthView::World::Spatial::Geometry::IEnvelope* getGeoEnvelope()
					{
						if (this->_gRef != NULL && this->m_getGeoEnvelope_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getGeoEnvelope_void_callback");
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
							return this->CRasterDataSet::getGeoEnvelope();
						}
					}
					virtual const ev_int32 getRasterWidth() const
					{
						if (this->_gRef != NULL && this->m_getRasterWidth_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getRasterWidth_void_callback");
							jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							const ev_int32 __values1 = (ev_int32) __values1_j;
							return __values1;
						}
						else
						{
							return this->CRasterDataSet::getRasterWidth();
						}
					}
					virtual const ev_int32 getRasterHeight() const
					{
						if (this->_gRef != NULL && this->m_getRasterHeight_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getRasterHeight_void_callback");
							jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							const ev_int32 __values1 = (ev_int32) __values1_j;
							return __values1;
						}
						else
						{
							return this->CRasterDataSet::getRasterHeight();
						}
					}
					virtual const ev_int32 getBandCount() const
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
							const ev_int32 __values1 = (ev_int32) __values1_j;
							return __values1;
						}
						else
						{
							return this->CRasterDataSet::getBandCount();
						}
					}
					virtual const EarthView::World::Spatial2D::Raster::CSensorInfo* getSensorInfo() const
					{
						if (this->_gRef != NULL && this->m_getSensorInfo_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getSensorInfo_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							const EarthView::World::Spatial2D::Raster::CSensorInfo *__values1 = (const EarthView::World::Spatial2D::Raster::CSensorInfo*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CRasterDataSet::getSensorInfo();
						}
					}
					virtual EarthView::World::Spatial2D::Raster::CRasterBand* getRasterBand(ev_int32 iband)
					{
						if (this->_gRef != NULL && this->m_getRasterBand_ev_int32_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jint iband_j = (jint) iband;
							jmethodID __method = __gr->getMethod("getRasterBand_ev_int32_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , iband_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial2D::Raster::CRasterBand *__values1 = (EarthView::World::Spatial2D::Raster::CRasterBand*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CRasterDataSet::getRasterBand(iband);
						}
					}
					virtual EarthView::World::Spatial::GeoDataset::EVRasterDataType getRasterDataType() const
					{
						if (this->_gRef != NULL && this->m_getRasterDataType_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getRasterDataType_void_callback");
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
							return this->CRasterDataSet::getRasterDataType();
						}
					}
					virtual void getSpatialReferenceWkt(EVString& strWKT) const
					{
						if (this->_gRef != NULL && this->m_getSpatialReferenceWkt_EVString_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong strWKT_j = (jlong) &strWKT;
							jmethodID __method = __gr->getMethod("getSpatialReferenceWkt_EVString_callback");
							__env->CallVoidMethod(__obj, __method , strWKT_j);
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
							return this->CRasterDataSet::getSpatialReferenceWkt(strWKT);
						}
					}
					virtual const EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReference()
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
							return this->CRasterDataSet::getSpatialReference();
						}
					}
					virtual const EarthView::World::Spatial2D::Raster::CAffineTransform* getGeoTransform() const
					{
						if (this->_gRef != NULL && this->m_getGeoTransform_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getGeoTransform_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							const EarthView::World::Spatial2D::Raster::CAffineTransform *__values1 = (const EarthView::World::Spatial2D::Raster::CAffineTransform*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CRasterDataSet::getGeoTransform();
						}
					}
					virtual void setSensorInfo(const EarthView::World::Spatial2D::Raster::CSensorInfo& objSensorInfo)
					{
						if (this->_gRef != NULL && this->m_setSensorInfo_CSensorInfo_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong objSensorInfo_j = (jlong) &objSensorInfo;
							jmethodID __method = __gr->getMethod("setSensorInfo_CSensorInfo_callback");
							__env->CallVoidMethod(__obj, __method , objSensorInfo_j);
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
							return this->CRasterDataSet::setSensorInfo(objSensorInfo);
						}
					}
					virtual void setGeoTransform(const EarthView::World::Spatial2D::Raster::CAffineTransform& objGeoTransForm)
					{
						if (this->_gRef != NULL && this->m_setGeoTransform_CAffineTransform_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong objGeoTransForm_j = (jlong) &objGeoTransForm;
							jmethodID __method = __gr->getMethod("setGeoTransform_CAffineTransform_callback");
							__env->CallVoidMethod(__obj, __method , objGeoTransForm_j);
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
							return this->CRasterDataSet::setGeoTransform(objGeoTransForm);
						}
					}
					virtual void setSpatialReference(const EVString& strWKT)
					{
						if (this->_gRef != NULL && this->m_setSpatialReference_EVString_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							EarthView::World::Core::ev_wstring strWKT_wch = strWKT;
							jstring strWKT_j = __env->NewString((const jchar*)strWKT_wch.getString(), strWKT_wch.size());
							jmethodID __method = __gr->getMethod("setSpatialReference_EVString_callback");
							__env->CallVoidMethod(__obj, __method , strWKT_j);
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
							return this->CRasterDataSet::setSpatialReference(strWKT);
						}
					}
					virtual void setSpatialReference(const EarthView::World::Spatial::Geometry::ISpatialReference* pSpatialRef)
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
							jlong pSpatialRef_j = (jlong) pSpatialRef;
							jmethodID __method = __gr->getMethod("setSpatialReference_ISpatialReference_callback");
							__env->CallVoidMethod(__obj, __method , pSpatialRef_j);
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
							return this->CRasterDataSet::setSpatialReference(pSpatialRef);
						}
					}
					virtual ev_bool read(EarthView::World::Spatial2D::Raster::IRasterBlock* pDstRaster, ev_uint32 upRow, ev_uint32 leftCol, ev_uint32 downRow, ev_uint32 rightCol)
					{
						if (this->_gRef != NULL && this->m_read_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong pDstRaster_j = (jlong) pDstRaster;
							jlong upRow_j = (jlong) upRow;
							jlong leftCol_j = (jlong) leftCol;
							jlong downRow_j = (jlong) downRow;
							jlong rightCol_j = (jlong) rightCol;
							jmethodID __method = __gr->getMethod("read_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , pDstRaster_j, upRow_j, leftCol_j, downRow_j, rightCol_j);
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
							return this->CRasterDataSet::read(pDstRaster, upRow, leftCol, downRow, rightCol);
						}
					}
					virtual ev_bool write(const EarthView::World::Spatial2D::Raster::IRasterBlock* pSrcRaster, ev_uint32 upRow, ev_uint32 leftCol, ev_uint32 downRow, ev_uint32 rightCol)
					{
						if (this->_gRef != NULL && this->m_write_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong pSrcRaster_j = (jlong) pSrcRaster;
							jlong upRow_j = (jlong) upRow;
							jlong leftCol_j = (jlong) leftCol;
							jlong downRow_j = (jlong) downRow;
							jlong rightCol_j = (jlong) rightCol;
							jmethodID __method = __gr->getMethod("write_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , pSrcRaster_j, upRow_j, leftCol_j, downRow_j, rightCol_j);
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
							return this->CRasterDataSet::write(pSrcRaster, upRow, leftCol, downRow, rightCol);
						}
					}
					virtual ev_bool buildOverViews(ev_int32 ibandCount, ev_int32* piBandIndex, ev_int32 nLevelCount, ev_int32* piLevelIndex, EarthView::World::Spatial2D::Raster::CProgressInfo* pDataProgress)
					{
						if (this->_gRef != NULL && this->m_buildOverViews_ev_int32_ev_int32_ev_int32_ev_int32_CProgressInfo_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jint ibandCount_j = (jint) ibandCount;
							jlong piBandIndex_j = (jlong) piBandIndex;
							jint nLevelCount_j = (jint) nLevelCount;
							jlong piLevelIndex_j = (jlong) piLevelIndex;
							jlong pDataProgress_j = (jlong) pDataProgress;
							jmethodID __method = __gr->getMethod("buildOverViews_ev_int32_ev_int32_ev_int32_ev_int32_CProgressInfo_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , ibandCount_j, piBandIndex_j, nLevelCount_j, piLevelIndex_j, pDataProgress_j);
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
							return this->CRasterDataSet::buildOverViews(ibandCount, piBandIndex, nLevelCount, piLevelIndex, pDataProgress);
						}
					}
					virtual ev_bool rasterIO(EarthView::World::Spatial2D::Raster::EVIOFlag bflag, ev_int32 iOffsetX, ev_int32 iOffsetY, ev_int32 iImageWidth, ev_int32 iImageHeight, ev_int32 iBandCount, ev_int32* pIbandIndex, void* pDstBuffer, ev_int32 iBufferWidth, ev_int32 iBufferHeight, EarthView::World::Spatial::GeoDataset::EVRasterDataType eDataType)
					{
						if (this->_gRef != NULL && this->m_rasterIO_EVIOFlag_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_void_ev_int32_ev_int32_EVRasterDataType_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jint bflag_j = (jint) bflag;
							jint iOffsetX_j = (jint) iOffsetX;
							jint iOffsetY_j = (jint) iOffsetY;
							jint iImageWidth_j = (jint) iImageWidth;
							jint iImageHeight_j = (jint) iImageHeight;
							jint iBandCount_j = (jint) iBandCount;
							jlong pIbandIndex_j = (jlong) pIbandIndex;
							jlong pDstBuffer_j = (jlong) pDstBuffer;
							jint iBufferWidth_j = (jint) iBufferWidth;
							jint iBufferHeight_j = (jint) iBufferHeight;
							jint eDataType_j = (jint) eDataType;
							jmethodID __method = __gr->getMethod("rasterIO_EVIOFlag_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_void_ev_int32_ev_int32_EVRasterDataType_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , bflag_j, iOffsetX_j, iOffsetY_j, iImageWidth_j, iImageHeight_j, iBandCount_j, pIbandIndex_j, pDstBuffer_j, iBufferWidth_j, iBufferHeight_j, eDataType_j);
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
							return this->CRasterDataSet::rasterIO(bflag, iOffsetX, iOffsetY, iImageWidth, iImageHeight, iBandCount, pIbandIndex, pDstBuffer, iBufferWidth, iBufferHeight, eDataType);
						}
					}
					virtual void read(EVString& strWKT, ev_real64 lefttopX, ev_real64 lefttopY, ev_real64 resolutionX, ev_real64 resolutionY, ev_int32 xSize, ev_int32 ySize, ev_byte* pBuffer)
					{
						if (this->_gRef != NULL && this->m_read_EVString_ev_real64_ev_real64_ev_real64_ev_real64_ev_int32_ev_int32_ev_byte_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							EarthView::World::Core::ev_wstring strWKT_wch = strWKT;
							jstring strWKT_j = __env->NewString((const jchar*)strWKT_wch.getString(), strWKT_wch.size());
							jdouble lefttopX_j = (jdouble) lefttopX;
							jdouble lefttopY_j = (jdouble) lefttopY;
							jdouble resolutionX_j = (jdouble) resolutionX;
							jdouble resolutionY_j = (jdouble) resolutionY;
							jint xSize_j = (jint) xSize;
							jint ySize_j = (jint) ySize;
							jlong pBuffer_j = (jlong) pBuffer;
							jmethodID __method = __gr->getMethod("read_EVString_ev_real64_ev_real64_ev_real64_ev_real64_ev_int32_ev_int32_ev_byte_callback");
							__env->CallVoidMethod(__obj, __method , strWKT_j, lefttopX_j, lefttopY_j, resolutionX_j, resolutionY_j, xSize_j, ySize_j, pBuffer_j);
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
							return this->CRasterDataSet::read(strWKT, lefttopX, lefttopY, resolutionX, resolutionY, xSize, ySize, pBuffer);
						}
					}
					virtual ev_int32 reference()
					{
						if (this->_gRef != NULL && this->m_reference_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("reference_void_callback");
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
							return this->CRasterDataSet::reference();
						}
					}
					virtual ev_int32 deReference()
					{
						if (this->_gRef != NULL && this->m_deReference_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("deReference_void_callback");
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
							return this->CRasterDataSet::deReference();
						}
					}
					virtual void toStream(ev_uchar*& pBuffer, ev_uint64& longLenth)
					{
						if (this->_gRef != NULL && this->m_toStream_ev_uchar_ev_uint64_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong pBuffer_j = (jlong) &pBuffer;
							jlong longLenth_j = (jlong) &longLenth;
							jmethodID __method = __gr->getMethod("toStream_ev_uchar_ev_uint64_callback");
							__env->CallVoidMethod(__obj, __method , pBuffer_j, longLenth_j);
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
							return this->CRasterDataSet::toStream(pBuffer, longLenth);
						}
					}
					virtual ev_int32 getOverViewLevels() const
					{
						if (this->_gRef != NULL && this->m_getOverViewLevels_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getOverViewLevels_void_callback");
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
							return this->CRasterDataSet::getOverViewLevels();
						}
					}
					virtual ev_bool buildDefaultOverViews(EarthView::World::Spatial2D::Raster::CProgressInfo* pDataProgress)
					{
						if (this->_gRef != NULL && this->m_buildDefaultOverViews_CProgressInfo_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong pDataProgress_j = (jlong) pDataProgress;
							jmethodID __method = __gr->getMethod("buildDefaultOverViews_CProgressInfo_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , pDataProgress_j);
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
							return this->CRasterDataSet::buildDefaultOverViews(pDataProgress);
						}
					}
					virtual EVString getDatasetFullpath() const
					{
						if (this->_gRef != NULL && this->m_getDatasetFullpath_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getDatasetFullpath_void_callback");
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
							return this->CRasterDataSet::getDatasetFullpath();
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCRasterDataSetProxy);
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_raster_RasterDataSet_getType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Raster::CRasterDataSet *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRasterDataSetProxy))
					{
						EarthView::World::Spatial::GeoDataset::EVDatasetType __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterDataSet::getType();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterDataSet_register_1getType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRasterDataSetProxy *pObjectX = (JCRasterDataSetProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_raster_RasterDataSet_getType_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Raster::CRasterDataSet *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjXXXX;
					EarthView::World::Spatial::GeoDataset::EVDatasetType __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterDataSet::getType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial2d_raster_RasterDataSet_getName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Raster::CRasterDataSet *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRasterDataSetProxy))
					{
						EVString __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterDataSet::getName();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterDataSet_register_1getName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRasterDataSetProxy *pObjectX = (JCRasterDataSetProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial2d_raster_RasterDataSet_getName_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Raster::CRasterDataSet *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjXXXX;
					EVString __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterDataSet::getName();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial2d_raster_RasterDataSet_getDataVersion_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Raster::CRasterDataSet *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRasterDataSetProxy))
					{
						ev_uint64 __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterDataSet::getDataVersion();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterDataSet_register_1getDataVersion_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRasterDataSetProxy *pObjectX = (JCRasterDataSetProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial2d_raster_RasterDataSet_getDataVersion_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Raster::CRasterDataSet *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjXXXX;
					ev_uint64 __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterDataSet::getDataVersion();
					EarthView::World::Core::ev_string __values1_ch;
					__values1_ch<<__values1;
					jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial2d_raster_RasterDataSet_getDescription_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Raster::CRasterDataSet *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRasterDataSetProxy))
					{
						EVString __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterDataSet::getDescription();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterDataSet_register_1getDescription_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRasterDataSetProxy *pObjectX = (JCRasterDataSetProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial2d_raster_RasterDataSet_getDescription_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Raster::CRasterDataSet *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjXXXX;
					EVString __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterDataSet::getDescription();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial2d_raster_RasterDataSet_getUpdateTime_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Raster::CRasterDataSet *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRasterDataSetProxy))
					{
						EVString __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterDataSet::getUpdateTime();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterDataSet_register_1getUpdateTime_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRasterDataSetProxy *pObjectX = (JCRasterDataSetProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial2d_raster_RasterDataSet_getUpdateTime_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Raster::CRasterDataSet *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjXXXX;
					EVString __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterDataSet::getUpdateTime();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_raster_RasterDataSet_hasSubDataset_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Raster::CRasterDataSet *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRasterDataSetProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterDataSet::hasSubDataset();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterDataSet_register_1hasSubDataset_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRasterDataSetProxy *pObjectX = (JCRasterDataSetProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_raster_RasterDataSet_hasSubDataset_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Raster::CRasterDataSet *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterDataSet::hasSubDataset();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_raster_RasterDataSet_getDataSourceRef_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Raster::CRasterDataSet *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRasterDataSetProxy))
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterDataSet::getDataSourceRef();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterDataSet_register_1getDataSourceRef_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRasterDataSetProxy *pObjectX = (JCRasterDataSetProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_raster_RasterDataSet_getDataSourceRef_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Raster::CRasterDataSet *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjXXXX;
					EarthView::World::Spatial::GeoDataset::IDataSource* __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterDataSet::getDataSourceRef();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterDataSet_setDataSourceRef_1IDataSource(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_pDataSrc_j)
				{
					EarthView::World::Spatial::GeoDataset::IDataSource *ref_pDataSrc = (EarthView::World::Spatial::GeoDataset::IDataSource*) ref_pDataSrc_j;
					EarthView::World::Spatial2D::Raster::CRasterDataSet *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRasterDataSetProxy))
					{
						pObjectX->EarthView::World::Spatial2D::Raster::CRasterDataSet::setDataSourceRef(ref_pDataSrc);
					}
					else
					{
						pObjectX->setDataSourceRef(ref_pDataSrc);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterDataSet_register_1setDataSourceRef_1IDataSource(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRasterDataSetProxy *pObjectX = (JCRasterDataSetProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setDataSourceRef_IDataSource_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setDataSourceRef_IDataSource_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterDataSet_setDataSourceRef_1IDataSource_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_pDataSrc_j)
				{
					EarthView::World::Spatial::GeoDataset::IDataSource *ref_pDataSrc = (EarthView::World::Spatial::GeoDataset::IDataSource*) ref_pDataSrc_j;
					EarthView::World::Spatial2D::Raster::CRasterDataSet *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjXXXX;
					pObjectX->EarthView::World::Spatial2D::Raster::CRasterDataSet::setDataSourceRef(ref_pDataSrc);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_raster_RasterDataSet_canEdit_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Raster::CRasterDataSet *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRasterDataSetProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterDataSet::canEdit();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterDataSet_register_1canEdit_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRasterDataSetProxy *pObjectX = (JCRasterDataSetProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_raster_RasterDataSet_canEdit_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Raster::CRasterDataSet *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterDataSet::canEdit();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_raster_RasterDataSet_isEditing_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Raster::CRasterDataSet *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRasterDataSetProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterDataSet::isEditing();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterDataSet_register_1isEditing_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRasterDataSetProxy *pObjectX = (JCRasterDataSetProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_raster_RasterDataSet_isEditing_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Raster::CRasterDataSet *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterDataSet::isEditing();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_raster_RasterDataSet_startEditing_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean withUndo_j)
				{
					ev_bool withUndo = (ev_bool) withUndo_j;
					EarthView::World::Spatial2D::Raster::CRasterDataSet *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRasterDataSetProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterDataSet::startEditing(withUndo);
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterDataSet_register_1startEditing_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRasterDataSetProxy *pObjectX = (JCRasterDataSetProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_raster_RasterDataSet_startEditing_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean withUndo_j)
				{
					ev_bool withUndo = (ev_bool) withUndo_j;
					EarthView::World::Spatial2D::Raster::CRasterDataSet *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterDataSet::startEditing(withUndo);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_raster_RasterDataSet_stopEditing_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean isSave_j)
				{
					ev_bool isSave = (ev_bool) isSave_j;
					EarthView::World::Spatial2D::Raster::CRasterDataSet *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRasterDataSetProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterDataSet::stopEditing(isSave);
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterDataSet_register_1stopEditing_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRasterDataSetProxy *pObjectX = (JCRasterDataSetProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_raster_RasterDataSet_stopEditing_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean isSave_j)
				{
					ev_bool isSave = (ev_bool) isSave_j;
					EarthView::World::Spatial2D::Raster::CRasterDataSet *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterDataSet::stopEditing(isSave);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_raster_RasterDataSet_isBeginEditingOperation_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Raster::CRasterDataSet *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRasterDataSetProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterDataSet::isBeginEditingOperation();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterDataSet_register_1isBeginEditingOperation_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRasterDataSetProxy *pObjectX = (JCRasterDataSetProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_raster_RasterDataSet_isBeginEditingOperation_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Raster::CRasterDataSet *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterDataSet::isBeginEditingOperation();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_raster_RasterDataSet_beginEditingOperation_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Raster::CRasterDataSet *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRasterDataSetProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterDataSet::beginEditingOperation();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterDataSet_register_1beginEditingOperation_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRasterDataSetProxy *pObjectX = (JCRasterDataSetProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_raster_RasterDataSet_beginEditingOperation_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Raster::CRasterDataSet *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterDataSet::beginEditingOperation();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_raster_RasterDataSet_endEditingOperation_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean isConfirm_j)
				{
					ev_bool isConfirm = (ev_bool) isConfirm_j;
					EarthView::World::Spatial2D::Raster::CRasterDataSet *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRasterDataSetProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterDataSet::endEditingOperation(isConfirm);
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterDataSet_register_1endEditingOperation_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRasterDataSetProxy *pObjectX = (JCRasterDataSetProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_raster_RasterDataSet_endEditingOperation_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean isConfirm_j)
				{
					ev_bool isConfirm = (ev_bool) isConfirm_j;
					EarthView::World::Spatial2D::Raster::CRasterDataSet *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterDataSet::endEditingOperation(isConfirm);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterDataSet_getRasterRect_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong dfUpleftX_j, jlong dfUpleftY_j, jlong dfDownRightX_j, jlong dfDownRightY_j)
				{
					ev_real64 &dfUpleftX = *(ev_real64*) dfUpleftX_j;
					ev_real64 &dfUpleftY = *(ev_real64*) dfUpleftY_j;
					ev_real64 &dfDownRightX = *(ev_real64*) dfDownRightX_j;
					ev_real64 &dfDownRightY = *(ev_real64*) dfDownRightY_j;
					const 					EarthView::World::Spatial2D::Raster::CRasterDataSet *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRasterDataSetProxy))
					{
						pObjectX->EarthView::World::Spatial2D::Raster::CRasterDataSet::getRasterRect(dfUpleftX, dfUpleftY, dfDownRightX, dfDownRightY);
					}
					else
					{
						pObjectX->getRasterRect(dfUpleftX, dfUpleftY, dfDownRightX, dfDownRightY);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterDataSet_register_1getRasterRect_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRasterDataSetProxy *pObjectX = (JCRasterDataSetProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getRasterRect_ev_real64_ev_real64_ev_real64_ev_real64_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getRasterRect_ev_real64_ev_real64_ev_real64_ev_real64_callback", "(JJJJ)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterDataSet_getRasterRect_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong dfUpleftX_j, jlong dfUpleftY_j, jlong dfDownRightX_j, jlong dfDownRightY_j)
				{
					ev_real64 &dfUpleftX = *(ev_real64*) dfUpleftX_j;
					ev_real64 &dfUpleftY = *(ev_real64*) dfUpleftY_j;
					ev_real64 &dfDownRightX = *(ev_real64*) dfDownRightX_j;
					ev_real64 &dfDownRightY = *(ev_real64*) dfDownRightY_j;
					const 					EarthView::World::Spatial2D::Raster::CRasterDataSet *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjXXXX;
					pObjectX->EarthView::World::Spatial2D::Raster::CRasterDataSet::getRasterRect(dfUpleftX, dfUpleftY, dfDownRightX, dfDownRightY);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_raster_RasterDataSet_getGeoEnvelope_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Raster::CRasterDataSet *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRasterDataSetProxy))
					{
						const EarthView::World::Spatial::Geometry::IEnvelope* __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterDataSet::getGeoEnvelope();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						const EarthView::World::Spatial::Geometry::IEnvelope* __values1 = pObjectX->getGeoEnvelope();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterDataSet_register_1getGeoEnvelope_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRasterDataSetProxy *pObjectX = (JCRasterDataSetProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getGeoEnvelope_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getGeoEnvelope_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_raster_RasterDataSet_getGeoEnvelope_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Raster::CRasterDataSet *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjXXXX;
					const EarthView::World::Spatial::Geometry::IEnvelope* __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterDataSet::getGeoEnvelope();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_raster_RasterDataSet_getRasterWidth_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Raster::CRasterDataSet *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRasterDataSetProxy))
					{
						const ev_int32 __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterDataSet::getRasterWidth();
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
					else
					{
						const ev_int32 __values1 = pObjectX->getRasterWidth();
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterDataSet_register_1getRasterWidth_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRasterDataSetProxy *pObjectX = (JCRasterDataSetProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getRasterWidth_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getRasterWidth_void_callback", "()I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_raster_RasterDataSet_getRasterWidth_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Raster::CRasterDataSet *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjXXXX;
					const ev_int32 __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterDataSet::getRasterWidth();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_raster_RasterDataSet_getRasterHeight_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Raster::CRasterDataSet *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRasterDataSetProxy))
					{
						const ev_int32 __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterDataSet::getRasterHeight();
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
					else
					{
						const ev_int32 __values1 = pObjectX->getRasterHeight();
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterDataSet_register_1getRasterHeight_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRasterDataSetProxy *pObjectX = (JCRasterDataSetProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getRasterHeight_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getRasterHeight_void_callback", "()I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_raster_RasterDataSet_getRasterHeight_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Raster::CRasterDataSet *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjXXXX;
					const ev_int32 __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterDataSet::getRasterHeight();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_raster_RasterDataSet_getBandCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Raster::CRasterDataSet *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRasterDataSetProxy))
					{
						const ev_int32 __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterDataSet::getBandCount();
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
					else
					{
						const ev_int32 __values1 = pObjectX->getBandCount();
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterDataSet_register_1getBandCount_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRasterDataSetProxy *pObjectX = (JCRasterDataSetProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_raster_RasterDataSet_getBandCount_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Raster::CRasterDataSet *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjXXXX;
					const ev_int32 __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterDataSet::getBandCount();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_raster_RasterDataSet_getSensorInfo_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Raster::CRasterDataSet *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRasterDataSetProxy))
					{
						const EarthView::World::Spatial2D::Raster::CSensorInfo* __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterDataSet::getSensorInfo();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						const EarthView::World::Spatial2D::Raster::CSensorInfo* __values1 = pObjectX->getSensorInfo();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterDataSet_register_1getSensorInfo_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRasterDataSetProxy *pObjectX = (JCRasterDataSetProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getSensorInfo_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getSensorInfo_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_raster_RasterDataSet_getSensorInfo_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Raster::CRasterDataSet *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjXXXX;
					const EarthView::World::Spatial2D::Raster::CSensorInfo* __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterDataSet::getSensorInfo();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_raster_RasterDataSet_getRasterBand_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint iband_j)
				{
					ev_int32 iband = (ev_int32) iband_j;
					EarthView::World::Spatial2D::Raster::CRasterDataSet *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRasterDataSetProxy))
					{
						EarthView::World::Spatial2D::Raster::CRasterBand* __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterDataSet::getRasterBand(iband);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial2D::Raster::CRasterBand* __values1 = pObjectX->getRasterBand(iband);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterDataSet_register_1getRasterBand_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRasterDataSetProxy *pObjectX = (JCRasterDataSetProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getRasterBand_ev_int32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getRasterBand_ev_int32_callback", "(I)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_raster_RasterDataSet_getRasterBand_1ev_1int32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint iband_j)
				{
					ev_int32 iband = (ev_int32) iband_j;
					EarthView::World::Spatial2D::Raster::CRasterDataSet *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjXXXX;
					EarthView::World::Spatial2D::Raster::CRasterBand* __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterDataSet::getRasterBand(iband);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_raster_RasterDataSet_getRasterDataType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Raster::CRasterDataSet *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRasterDataSetProxy))
					{
						EarthView::World::Spatial::GeoDataset::EVRasterDataType __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterDataSet::getRasterDataType();
						jint __values1_j = (jint) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::EVRasterDataType __values1 = pObjectX->getRasterDataType();
						jint __values1_j = (jint) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterDataSet_register_1getRasterDataType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRasterDataSetProxy *pObjectX = (JCRasterDataSetProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getRasterDataType_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getRasterDataType_void_callback", "()I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_raster_RasterDataSet_getRasterDataType_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Raster::CRasterDataSet *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjXXXX;
					EarthView::World::Spatial::GeoDataset::EVRasterDataType __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterDataSet::getRasterDataType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_raster_RasterDataSet_getDataTypeSize_1EVRasterDataType(JNIEnv *__env , jclass __clazz, jint dataType_j)
				{
					EarthView::World::Spatial::GeoDataset::EVRasterDataType dataType = (EarthView::World::Spatial::GeoDataset::EVRasterDataType) dataType_j;
					ev_int32 __values1 = EarthView::World::Spatial2D::Raster::CRasterDataSet::getDataTypeSize(dataType);
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterDataSet_getSpatialReferenceWkt_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong strWKT_j)
				{
					EVString &strWKT = *(EVString*) strWKT_j;
					const 					EarthView::World::Spatial2D::Raster::CRasterDataSet *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRasterDataSetProxy))
					{
						pObjectX->EarthView::World::Spatial2D::Raster::CRasterDataSet::getSpatialReferenceWkt(strWKT);
					}
					else
					{
						pObjectX->getSpatialReferenceWkt(strWKT);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterDataSet_register_1getSpatialReferenceWkt_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRasterDataSetProxy *pObjectX = (JCRasterDataSetProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getSpatialReferenceWkt_EVString_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getSpatialReferenceWkt_EVString_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterDataSet_getSpatialReferenceWkt_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong strWKT_j)
				{
					EVString &strWKT = *(EVString*) strWKT_j;
					const 					EarthView::World::Spatial2D::Raster::CRasterDataSet *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjXXXX;
					pObjectX->EarthView::World::Spatial2D::Raster::CRasterDataSet::getSpatialReferenceWkt(strWKT);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_raster_RasterDataSet_getSpatialReference_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Raster::CRasterDataSet *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRasterDataSetProxy))
					{
						const EarthView::World::Spatial::Geometry::ISpatialReference* __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterDataSet::getSpatialReference();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterDataSet_register_1getSpatialReference_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRasterDataSetProxy *pObjectX = (JCRasterDataSetProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_raster_RasterDataSet_getSpatialReference_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Raster::CRasterDataSet *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjXXXX;
					const EarthView::World::Spatial::Geometry::ISpatialReference* __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterDataSet::getSpatialReference();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_raster_RasterDataSet_getGeoTransform_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Raster::CRasterDataSet *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRasterDataSetProxy))
					{
						const EarthView::World::Spatial2D::Raster::CAffineTransform* __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterDataSet::getGeoTransform();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						const EarthView::World::Spatial2D::Raster::CAffineTransform* __values1 = pObjectX->getGeoTransform();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterDataSet_register_1getGeoTransform_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRasterDataSetProxy *pObjectX = (JCRasterDataSetProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getGeoTransform_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getGeoTransform_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_raster_RasterDataSet_getGeoTransform_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Raster::CRasterDataSet *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjXXXX;
					const EarthView::World::Spatial2D::Raster::CAffineTransform* __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterDataSet::getGeoTransform();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterDataSet_setSensorInfo_1CSensorInfo(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong objSensorInfo_j)
				{
					const EarthView::World::Spatial2D::Raster::CSensorInfo &objSensorInfo = *(EarthView::World::Spatial2D::Raster::CSensorInfo*) objSensorInfo_j;
					EarthView::World::Spatial2D::Raster::CRasterDataSet *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRasterDataSetProxy))
					{
						pObjectX->EarthView::World::Spatial2D::Raster::CRasterDataSet::setSensorInfo(objSensorInfo);
					}
					else
					{
						pObjectX->setSensorInfo(objSensorInfo);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterDataSet_register_1setSensorInfo_1CSensorInfo(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRasterDataSetProxy *pObjectX = (JCRasterDataSetProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setSensorInfo_CSensorInfo_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setSensorInfo_CSensorInfo_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterDataSet_setSensorInfo_1CSensorInfo_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong objSensorInfo_j)
				{
					const EarthView::World::Spatial2D::Raster::CSensorInfo &objSensorInfo = *(EarthView::World::Spatial2D::Raster::CSensorInfo*) objSensorInfo_j;
					EarthView::World::Spatial2D::Raster::CRasterDataSet *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjXXXX;
					pObjectX->EarthView::World::Spatial2D::Raster::CRasterDataSet::setSensorInfo(objSensorInfo);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterDataSet_setGeoTransform_1CAffineTransform(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong objGeoTransForm_j)
				{
					const EarthView::World::Spatial2D::Raster::CAffineTransform &objGeoTransForm = *(EarthView::World::Spatial2D::Raster::CAffineTransform*) objGeoTransForm_j;
					EarthView::World::Spatial2D::Raster::CRasterDataSet *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRasterDataSetProxy))
					{
						pObjectX->EarthView::World::Spatial2D::Raster::CRasterDataSet::setGeoTransform(objGeoTransForm);
					}
					else
					{
						pObjectX->setGeoTransform(objGeoTransForm);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterDataSet_register_1setGeoTransform_1CAffineTransform(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRasterDataSetProxy *pObjectX = (JCRasterDataSetProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setGeoTransform_CAffineTransform_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setGeoTransform_CAffineTransform_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterDataSet_setGeoTransform_1CAffineTransform_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong objGeoTransForm_j)
				{
					const EarthView::World::Spatial2D::Raster::CAffineTransform &objGeoTransForm = *(EarthView::World::Spatial2D::Raster::CAffineTransform*) objGeoTransForm_j;
					EarthView::World::Spatial2D::Raster::CRasterDataSet *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjXXXX;
					pObjectX->EarthView::World::Spatial2D::Raster::CRasterDataSet::setGeoTransform(objGeoTransForm);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterDataSet_setSpatialReference_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring strWKT_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* strWKT_ch = (const ev_char*)__env->GetStringUTFChars(strWKT_j,JNI_FALSE);
					const EVString strWKT = strWKT_ch;
					__env->ReleaseStringUTFChars(strWKT_j, (const char *)strWKT_ch);
					#else
					const ev_wchar* strWKT_ch = (const ev_wchar*)__env->GetStringChars(strWKT_j,JNI_FALSE);
					const EVString strWKT = strWKT_ch;
					__env->ReleaseStringChars(strWKT_j, (const jchar *)strWKT_ch);
					#endif
					EarthView::World::Spatial2D::Raster::CRasterDataSet *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRasterDataSetProxy))
					{
						pObjectX->EarthView::World::Spatial2D::Raster::CRasterDataSet::setSpatialReference(strWKT);
					}
					else
					{
						pObjectX->setSpatialReference(strWKT);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterDataSet_register_1setSpatialReference_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRasterDataSetProxy *pObjectX = (JCRasterDataSetProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setSpatialReference_EVString_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setSpatialReference_EVString_callback", "(Ljava/lang/String;)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterDataSet_setSpatialReference_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring strWKT_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* strWKT_ch = (const ev_char*)__env->GetStringUTFChars(strWKT_j,JNI_FALSE);
					const EVString strWKT = strWKT_ch;
					__env->ReleaseStringUTFChars(strWKT_j, (const char *)strWKT_ch);
					#else
					const ev_wchar* strWKT_ch = (const ev_wchar*)__env->GetStringChars(strWKT_j,JNI_FALSE);
					const EVString strWKT = strWKT_ch;
					__env->ReleaseStringChars(strWKT_j, (const jchar *)strWKT_ch);
					#endif
					EarthView::World::Spatial2D::Raster::CRasterDataSet *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjXXXX;
					pObjectX->EarthView::World::Spatial2D::Raster::CRasterDataSet::setSpatialReference(strWKT);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterDataSet_setSpatialReference_1ISpatialReference(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pSpatialRef_j)
				{
					const EarthView::World::Spatial::Geometry::ISpatialReference *pSpatialRef = (const EarthView::World::Spatial::Geometry::ISpatialReference*) pSpatialRef_j;
					EarthView::World::Spatial2D::Raster::CRasterDataSet *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRasterDataSetProxy))
					{
						pObjectX->EarthView::World::Spatial2D::Raster::CRasterDataSet::setSpatialReference(pSpatialRef);
					}
					else
					{
						pObjectX->setSpatialReference(pSpatialRef);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterDataSet_register_1setSpatialReference_1ISpatialReference(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRasterDataSetProxy *pObjectX = (JCRasterDataSetProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterDataSet_setSpatialReference_1ISpatialReference_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pSpatialRef_j)
				{
					const EarthView::World::Spatial::Geometry::ISpatialReference *pSpatialRef = (const EarthView::World::Spatial::Geometry::ISpatialReference*) pSpatialRef_j;
					EarthView::World::Spatial2D::Raster::CRasterDataSet *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjXXXX;
					pObjectX->EarthView::World::Spatial2D::Raster::CRasterDataSet::setSpatialReference(pSpatialRef);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_raster_RasterDataSet_read_1IRasterBlock_1ev_1uint32_1ev_1uint32_1ev_1uint32_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pDstRaster_j, jlong upRow_j, jlong leftCol_j, jlong downRow_j, jlong rightCol_j)
				{
					EarthView::World::Spatial2D::Raster::IRasterBlock *pDstRaster = (EarthView::World::Spatial2D::Raster::IRasterBlock*) pDstRaster_j;
					ev_uint32 upRow = (ev_uint32) upRow_j;
					ev_uint32 leftCol = (ev_uint32) leftCol_j;
					ev_uint32 downRow = (ev_uint32) downRow_j;
					ev_uint32 rightCol = (ev_uint32) rightCol_j;
					EarthView::World::Spatial2D::Raster::CRasterDataSet *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRasterDataSetProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterDataSet::read(pDstRaster, upRow, leftCol, downRow, rightCol);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->read(pDstRaster, upRow, leftCol, downRow, rightCol);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterDataSet_register_1read_1IRasterBlock_1ev_1uint32_1ev_1uint32_1ev_1uint32_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRasterDataSetProxy *pObjectX = (JCRasterDataSetProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_read_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"read_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32_callback", "(JJJJJ)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_raster_RasterDataSet_read_1IRasterBlock_1ev_1uint32_1ev_1uint32_1ev_1uint32_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pDstRaster_j, jlong upRow_j, jlong leftCol_j, jlong downRow_j, jlong rightCol_j)
				{
					EarthView::World::Spatial2D::Raster::IRasterBlock *pDstRaster = (EarthView::World::Spatial2D::Raster::IRasterBlock*) pDstRaster_j;
					ev_uint32 upRow = (ev_uint32) upRow_j;
					ev_uint32 leftCol = (ev_uint32) leftCol_j;
					ev_uint32 downRow = (ev_uint32) downRow_j;
					ev_uint32 rightCol = (ev_uint32) rightCol_j;
					EarthView::World::Spatial2D::Raster::CRasterDataSet *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterDataSet::read(pDstRaster, upRow, leftCol, downRow, rightCol);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_raster_RasterDataSet_write_1IRasterBlock_1ev_1uint32_1ev_1uint32_1ev_1uint32_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pSrcRaster_j, jlong upRow_j, jlong leftCol_j, jlong downRow_j, jlong rightCol_j)
				{
					const EarthView::World::Spatial2D::Raster::IRasterBlock *pSrcRaster = (const EarthView::World::Spatial2D::Raster::IRasterBlock*) pSrcRaster_j;
					ev_uint32 upRow = (ev_uint32) upRow_j;
					ev_uint32 leftCol = (ev_uint32) leftCol_j;
					ev_uint32 downRow = (ev_uint32) downRow_j;
					ev_uint32 rightCol = (ev_uint32) rightCol_j;
					EarthView::World::Spatial2D::Raster::CRasterDataSet *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRasterDataSetProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterDataSet::write(pSrcRaster, upRow, leftCol, downRow, rightCol);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->write(pSrcRaster, upRow, leftCol, downRow, rightCol);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterDataSet_register_1write_1IRasterBlock_1ev_1uint32_1ev_1uint32_1ev_1uint32_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRasterDataSetProxy *pObjectX = (JCRasterDataSetProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_write_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"write_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32_callback", "(JJJJJ)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_raster_RasterDataSet_write_1IRasterBlock_1ev_1uint32_1ev_1uint32_1ev_1uint32_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pSrcRaster_j, jlong upRow_j, jlong leftCol_j, jlong downRow_j, jlong rightCol_j)
				{
					const EarthView::World::Spatial2D::Raster::IRasterBlock *pSrcRaster = (const EarthView::World::Spatial2D::Raster::IRasterBlock*) pSrcRaster_j;
					ev_uint32 upRow = (ev_uint32) upRow_j;
					ev_uint32 leftCol = (ev_uint32) leftCol_j;
					ev_uint32 downRow = (ev_uint32) downRow_j;
					ev_uint32 rightCol = (ev_uint32) rightCol_j;
					EarthView::World::Spatial2D::Raster::CRasterDataSet *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterDataSet::write(pSrcRaster, upRow, leftCol, downRow, rightCol);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_raster_RasterDataSet_buildOverViews_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32_1CProgressInfo(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint ibandCount_j, jlong piBandIndex_j, jint nLevelCount_j, jlong piLevelIndex_j, jlong pDataProgress_j)
				{
					ev_int32 ibandCount = (ev_int32) ibandCount_j;
					ev_int32 *piBandIndex = (ev_int32*) piBandIndex_j;
					ev_int32 nLevelCount = (ev_int32) nLevelCount_j;
					ev_int32 *piLevelIndex = (ev_int32*) piLevelIndex_j;
					EarthView::World::Spatial2D::Raster::CProgressInfo *pDataProgress = (EarthView::World::Spatial2D::Raster::CProgressInfo*) pDataProgress_j;
					EarthView::World::Spatial2D::Raster::CRasterDataSet *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRasterDataSetProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterDataSet::buildOverViews(ibandCount, piBandIndex, nLevelCount, piLevelIndex, pDataProgress);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->buildOverViews(ibandCount, piBandIndex, nLevelCount, piLevelIndex, pDataProgress);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterDataSet_register_1buildOverViews_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32_1CProgressInfo(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRasterDataSetProxy *pObjectX = (JCRasterDataSetProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_buildOverViews_ev_int32_ev_int32_ev_int32_ev_int32_CProgressInfo_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"buildOverViews_ev_int32_ev_int32_ev_int32_ev_int32_CProgressInfo_callback", "(IJIJJ)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_raster_RasterDataSet_buildOverViews_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32_1CProgressInfo_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint ibandCount_j, jlong piBandIndex_j, jint nLevelCount_j, jlong piLevelIndex_j, jlong pDataProgress_j)
				{
					ev_int32 ibandCount = (ev_int32) ibandCount_j;
					ev_int32 *piBandIndex = (ev_int32*) piBandIndex_j;
					ev_int32 nLevelCount = (ev_int32) nLevelCount_j;
					ev_int32 *piLevelIndex = (ev_int32*) piLevelIndex_j;
					EarthView::World::Spatial2D::Raster::CProgressInfo *pDataProgress = (EarthView::World::Spatial2D::Raster::CProgressInfo*) pDataProgress_j;
					EarthView::World::Spatial2D::Raster::CRasterDataSet *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterDataSet::buildOverViews(ibandCount, piBandIndex, nLevelCount, piLevelIndex, pDataProgress);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_raster_RasterDataSet_rasterIO_1EVIOFlag_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32_1void_1ev_1int32_1ev_1int32_1EVRasterDataType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint bflag_j, jint iOffsetX_j, jint iOffsetY_j, jint iImageWidth_j, jint iImageHeight_j, jint iBandCount_j, jlong pIbandIndex_j, jlong pDstBuffer_j, jint iBufferWidth_j, jint iBufferHeight_j, jint eDataType_j)
				{
					EarthView::World::Spatial2D::Raster::EVIOFlag bflag = (EarthView::World::Spatial2D::Raster::EVIOFlag) bflag_j;
					ev_int32 iOffsetX = (ev_int32) iOffsetX_j;
					ev_int32 iOffsetY = (ev_int32) iOffsetY_j;
					ev_int32 iImageWidth = (ev_int32) iImageWidth_j;
					ev_int32 iImageHeight = (ev_int32) iImageHeight_j;
					ev_int32 iBandCount = (ev_int32) iBandCount_j;
					ev_int32 *pIbandIndex = (ev_int32*) pIbandIndex_j;
					void *pDstBuffer = (void*) pDstBuffer_j;
					ev_int32 iBufferWidth = (ev_int32) iBufferWidth_j;
					ev_int32 iBufferHeight = (ev_int32) iBufferHeight_j;
					EarthView::World::Spatial::GeoDataset::EVRasterDataType eDataType = (EarthView::World::Spatial::GeoDataset::EVRasterDataType) eDataType_j;
					EarthView::World::Spatial2D::Raster::CRasterDataSet *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRasterDataSetProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterDataSet::rasterIO(bflag, iOffsetX, iOffsetY, iImageWidth, iImageHeight, iBandCount, pIbandIndex, pDstBuffer, iBufferWidth, iBufferHeight, eDataType);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->rasterIO(bflag, iOffsetX, iOffsetY, iImageWidth, iImageHeight, iBandCount, pIbandIndex, pDstBuffer, iBufferWidth, iBufferHeight, eDataType);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterDataSet_register_1rasterIO_1EVIOFlag_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32_1void_1ev_1int32_1ev_1int32_1EVRasterDataType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRasterDataSetProxy *pObjectX = (JCRasterDataSetProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_rasterIO_EVIOFlag_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_void_ev_int32_ev_int32_EVRasterDataType_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"rasterIO_EVIOFlag_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_void_ev_int32_ev_int32_EVRasterDataType_callback", "(IIIIIIJJIII)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_raster_RasterDataSet_rasterIO_1EVIOFlag_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32_1void_1ev_1int32_1ev_1int32_1EVRasterDataType_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint bflag_j, jint iOffsetX_j, jint iOffsetY_j, jint iImageWidth_j, jint iImageHeight_j, jint iBandCount_j, jlong pIbandIndex_j, jlong pDstBuffer_j, jint iBufferWidth_j, jint iBufferHeight_j, jint eDataType_j)
				{
					EarthView::World::Spatial2D::Raster::EVIOFlag bflag = (EarthView::World::Spatial2D::Raster::EVIOFlag) bflag_j;
					ev_int32 iOffsetX = (ev_int32) iOffsetX_j;
					ev_int32 iOffsetY = (ev_int32) iOffsetY_j;
					ev_int32 iImageWidth = (ev_int32) iImageWidth_j;
					ev_int32 iImageHeight = (ev_int32) iImageHeight_j;
					ev_int32 iBandCount = (ev_int32) iBandCount_j;
					ev_int32 *pIbandIndex = (ev_int32*) pIbandIndex_j;
					void *pDstBuffer = (void*) pDstBuffer_j;
					ev_int32 iBufferWidth = (ev_int32) iBufferWidth_j;
					ev_int32 iBufferHeight = (ev_int32) iBufferHeight_j;
					EarthView::World::Spatial::GeoDataset::EVRasterDataType eDataType = (EarthView::World::Spatial::GeoDataset::EVRasterDataType) eDataType_j;
					EarthView::World::Spatial2D::Raster::CRasterDataSet *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterDataSet::rasterIO(bflag, iOffsetX, iOffsetY, iImageWidth, iImageHeight, iBandCount, pIbandIndex, pDstBuffer, iBufferWidth, iBufferHeight, eDataType);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterDataSet_read_1EVString_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1int32_1ev_1int32_1ev_1byte(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring strWKT_j, jdouble lefttopX_j, jdouble lefttopY_j, jdouble resolutionX_j, jdouble resolutionY_j, jint xSize_j, jint ySize_j, jlong pBuffer_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* strWKT_ch = (const ev_char*)__env->GetStringUTFChars(strWKT_j,JNI_FALSE);
					EVString strWKT = strWKT_ch;
					__env->ReleaseStringUTFChars(strWKT_j, (const char *)strWKT_ch);
					#else
					const ev_wchar* strWKT_ch = (const ev_wchar*)__env->GetStringChars(strWKT_j,JNI_FALSE);
					EVString strWKT = strWKT_ch;
					__env->ReleaseStringChars(strWKT_j, (const jchar *)strWKT_ch);
					#endif
					ev_real64 lefttopX = (ev_real64) lefttopX_j;
					ev_real64 lefttopY = (ev_real64) lefttopY_j;
					ev_real64 resolutionX = (ev_real64) resolutionX_j;
					ev_real64 resolutionY = (ev_real64) resolutionY_j;
					ev_int32 xSize = (ev_int32) xSize_j;
					ev_int32 ySize = (ev_int32) ySize_j;
					ev_byte *pBuffer = (ev_byte*) pBuffer_j;
					EarthView::World::Spatial2D::Raster::CRasterDataSet *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRasterDataSetProxy))
					{
						pObjectX->EarthView::World::Spatial2D::Raster::CRasterDataSet::read(strWKT, lefttopX, lefttopY, resolutionX, resolutionY, xSize, ySize, pBuffer);
					}
					else
					{
						pObjectX->read(strWKT, lefttopX, lefttopY, resolutionX, resolutionY, xSize, ySize, pBuffer);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterDataSet_register_1read_1EVString_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1int32_1ev_1int32_1ev_1byte(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRasterDataSetProxy *pObjectX = (JCRasterDataSetProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_read_EVString_ev_real64_ev_real64_ev_real64_ev_real64_ev_int32_ev_int32_ev_byte_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"read_EVString_ev_real64_ev_real64_ev_real64_ev_real64_ev_int32_ev_int32_ev_byte_callback", "(Ljava/lang/String;DDDDIIJ)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterDataSet_read_1EVString_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1int32_1ev_1int32_1ev_1byte_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring strWKT_j, jdouble lefttopX_j, jdouble lefttopY_j, jdouble resolutionX_j, jdouble resolutionY_j, jint xSize_j, jint ySize_j, jlong pBuffer_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* strWKT_ch = (const ev_char*)__env->GetStringUTFChars(strWKT_j,JNI_FALSE);
					EVString strWKT = strWKT_ch;
					__env->ReleaseStringUTFChars(strWKT_j, (const char *)strWKT_ch);
					#else
					const ev_wchar* strWKT_ch = (const ev_wchar*)__env->GetStringChars(strWKT_j,JNI_FALSE);
					EVString strWKT = strWKT_ch;
					__env->ReleaseStringChars(strWKT_j, (const jchar *)strWKT_ch);
					#endif
					ev_real64 lefttopX = (ev_real64) lefttopX_j;
					ev_real64 lefttopY = (ev_real64) lefttopY_j;
					ev_real64 resolutionX = (ev_real64) resolutionX_j;
					ev_real64 resolutionY = (ev_real64) resolutionY_j;
					ev_int32 xSize = (ev_int32) xSize_j;
					ev_int32 ySize = (ev_int32) ySize_j;
					ev_byte *pBuffer = (ev_byte*) pBuffer_j;
					EarthView::World::Spatial2D::Raster::CRasterDataSet *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjXXXX;
					pObjectX->EarthView::World::Spatial2D::Raster::CRasterDataSet::read(strWKT, lefttopX, lefttopY, resolutionX, resolutionY, xSize, ySize, pBuffer);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_raster_RasterDataSet_reference_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Raster::CRasterDataSet *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRasterDataSetProxy))
					{
						ev_int32 __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterDataSet::reference();
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
					else
					{
						ev_int32 __values1 = pObjectX->reference();
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterDataSet_register_1reference_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRasterDataSetProxy *pObjectX = (JCRasterDataSetProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_reference_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"reference_void_callback", "()I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_raster_RasterDataSet_reference_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Raster::CRasterDataSet *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjXXXX;
					ev_int32 __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterDataSet::reference();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_raster_RasterDataSet_deReference_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Raster::CRasterDataSet *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRasterDataSetProxy))
					{
						ev_int32 __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterDataSet::deReference();
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
					else
					{
						ev_int32 __values1 = pObjectX->deReference();
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterDataSet_register_1deReference_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRasterDataSetProxy *pObjectX = (JCRasterDataSetProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_deReference_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"deReference_void_callback", "()I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_raster_RasterDataSet_deReference_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Raster::CRasterDataSet *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjXXXX;
					ev_int32 __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterDataSet::deReference();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterDataSet_toStream_1ev_1uchar_1ev_1uint64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pBuffer_j, jlong longLenth_j)
				{
					ev_uchar *&pBuffer = *(ev_uchar**) pBuffer_j;
					ev_uint64 &longLenth = *(ev_uint64*) longLenth_j;
					EarthView::World::Spatial2D::Raster::CRasterDataSet *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRasterDataSetProxy))
					{
						pObjectX->EarthView::World::Spatial2D::Raster::CRasterDataSet::toStream(pBuffer, longLenth);
					}
					else
					{
						pObjectX->toStream(pBuffer, longLenth);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterDataSet_register_1toStream_1ev_1uchar_1ev_1uint64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRasterDataSetProxy *pObjectX = (JCRasterDataSetProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_toStream_ev_uchar_ev_uint64_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"toStream_ev_uchar_ev_uint64_callback", "(JJ)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterDataSet_toStream_1ev_1uchar_1ev_1uint64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pBuffer_j, jlong longLenth_j)
				{
					ev_uchar *&pBuffer = *(ev_uchar**) pBuffer_j;
					ev_uint64 &longLenth = *(ev_uint64*) longLenth_j;
					EarthView::World::Spatial2D::Raster::CRasterDataSet *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjXXXX;
					pObjectX->EarthView::World::Spatial2D::Raster::CRasterDataSet::toStream(pBuffer, longLenth);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_raster_RasterDataSet_getOverViewLevels_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Raster::CRasterDataSet *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRasterDataSetProxy))
					{
						ev_int32 __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterDataSet::getOverViewLevels();
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
					else
					{
						ev_int32 __values1 = pObjectX->getOverViewLevels();
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterDataSet_register_1getOverViewLevels_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRasterDataSetProxy *pObjectX = (JCRasterDataSetProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getOverViewLevels_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getOverViewLevels_void_callback", "()I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_raster_RasterDataSet_getOverViewLevels_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Raster::CRasterDataSet *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjXXXX;
					ev_int32 __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterDataSet::getOverViewLevels();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_raster_RasterDataSet_buildDefaultOverViews_1CProgressInfo(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pDataProgress_j)
				{
					EarthView::World::Spatial2D::Raster::CProgressInfo *pDataProgress = (EarthView::World::Spatial2D::Raster::CProgressInfo*) pDataProgress_j;
					EarthView::World::Spatial2D::Raster::CRasterDataSet *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRasterDataSetProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterDataSet::buildDefaultOverViews(pDataProgress);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->buildDefaultOverViews(pDataProgress);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterDataSet_register_1buildDefaultOverViews_1CProgressInfo(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRasterDataSetProxy *pObjectX = (JCRasterDataSetProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_buildDefaultOverViews_CProgressInfo_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"buildDefaultOverViews_CProgressInfo_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_raster_RasterDataSet_buildDefaultOverViews_1CProgressInfo_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pDataProgress_j)
				{
					EarthView::World::Spatial2D::Raster::CProgressInfo *pDataProgress = (EarthView::World::Spatial2D::Raster::CProgressInfo*) pDataProgress_j;
					EarthView::World::Spatial2D::Raster::CRasterDataSet *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterDataSet::buildDefaultOverViews(pDataProgress);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial2d_raster_RasterDataSet_getDatasetFullpath_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Raster::CRasterDataSet *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRasterDataSetProxy))
					{
						EVString __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterDataSet::getDatasetFullpath();
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
					else
					{
						EVString __values1 = pObjectX->getDatasetFullpath();
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterDataSet_register_1getDatasetFullpath_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRasterDataSetProxy *pObjectX = (JCRasterDataSetProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getDatasetFullpath_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getDatasetFullpath_void_callback", "()Ljava/lang/String;");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial2d_raster_RasterDataSet_getDatasetFullpath_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Raster::CRasterDataSet *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjXXXX;
					EVString __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterDataSet::getDatasetFullpath();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
			}
		}
	}
}
