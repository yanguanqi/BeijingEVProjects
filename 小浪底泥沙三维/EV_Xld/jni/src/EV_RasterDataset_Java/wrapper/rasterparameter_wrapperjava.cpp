/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "rasterdataset/rasterparameter.h"
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
				class JCBandHistogramProxy : public EarthView::World::Spatial2D::Raster::CBandHistogram
				{
				 private:
					EarthView::World::Core::ev_string m_getGrayFraquaency_void_callback;
				public:
					JCBandHistogramProxy(EarthView::World::Core::CNameValuePairList *pList) : CBandHistogram(pList)
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
					void register_getGrayFraquaency_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getGrayFraquaency_void_callback = __method;
					}
					virtual const ev_int32* getGrayFraquaency() const
					{
						if (this->_gRef != NULL && this->m_getGrayFraquaency_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getGrayFraquaency_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							const ev_int32 *__values1 = (const ev_int32*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CBandHistogram::getGrayFraquaency();
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCBandHistogramProxy);
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_raster_BandHistogram_getGrayFraquaency_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Raster::CBandHistogram *pObjectX = (EarthView::World::Spatial2D::Raster::CBandHistogram*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCBandHistogramProxy))
					{
						const ev_int32* __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CBandHistogram::getGrayFraquaency();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						const ev_int32* __values1 = pObjectX->getGrayFraquaency();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_BandHistogram_register_1getGrayFraquaency_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCBandHistogramProxy *pObjectX = (JCBandHistogramProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getGrayFraquaency_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getGrayFraquaency_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_raster_BandHistogram_getGrayFraquaency_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Raster::CBandHistogram *pObjectX = (EarthView::World::Spatial2D::Raster::CBandHistogram*) pObjXXXX;
					const ev_int32* __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CBandHistogram::getGrayFraquaency();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_BandHistogram_toStream_1CDataStream(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j)
				{
					EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
					const 					EarthView::World::Spatial2D::Raster::CBandHistogram *pObjectX = (EarthView::World::Spatial2D::Raster::CBandHistogram*) pObjXXXX;
					pObjectX->toStream(stream);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_BandHistogram_fromStream_1CDataStream(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j)
				{
					EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
					EarthView::World::Spatial2D::Raster::CBandHistogram *pObjectX = (EarthView::World::Spatial2D::Raster::CBandHistogram*) pObjXXXX;
					pObjectX->fromStream(stream);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_raster_BandHistogram_toXmlElement_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Raster::CBandHistogram *pObjectX = (EarthView::World::Spatial2D::Raster::CBandHistogram*) pObjXXXX;
					EarthView::World::Core::CXmlElement __values1 = pObjectX->toXmlElement();
					EarthView::World::Core::CXmlElement *returnvalues = new EarthView::World::Core::CXmlElement(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_BandHistogram_fromXmlElement_1CXmlElement(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong element_j)
				{
					EarthView::World::Core::CXmlElement &element = *(EarthView::World::Core::CXmlElement*) element_j;
					EarthView::World::Spatial2D::Raster::CBandHistogram *pObjectX = (EarthView::World::Spatial2D::Raster::CBandHistogram*) pObjXXXX;
					pObjectX->fromXmlElement(element);
				}
				class JCBandStatisticsInfoProxy : public EarthView::World::Spatial2D::Raster::CBandStatisticsInfo
				{
				 private:
					EarthView::World::Core::ev_string m_getMax_void_callback;
					EarthView::World::Core::ev_string m_getMin_void_callback;
					EarthView::World::Core::ev_string m_getMean_void_callback;
					EarthView::World::Core::ev_string m_getStdDev_void_callback;
				public:
					JCBandStatisticsInfoProxy(EarthView::World::Core::CNameValuePairList *pList) : CBandStatisticsInfo(pList)
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
					void register_getMax_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getMax_void_callback = __method;
					}
					void register_getMin_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getMin_void_callback = __method;
					}
					void register_getMean_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getMean_void_callback = __method;
					}
					void register_getStdDev_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getStdDev_void_callback = __method;
					}
					virtual const ev_real64 getMax() const
					{
						if (this->_gRef != NULL && this->m_getMax_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getMax_void_callback");
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
							return this->CBandStatisticsInfo::getMax();
						}
					}
					virtual const ev_real64 getMin() const
					{
						if (this->_gRef != NULL && this->m_getMin_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getMin_void_callback");
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
							return this->CBandStatisticsInfo::getMin();
						}
					}
					virtual const ev_real64 getMean() const
					{
						if (this->_gRef != NULL && this->m_getMean_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getMean_void_callback");
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
							return this->CBandStatisticsInfo::getMean();
						}
					}
					virtual const ev_real64 getStdDev() const
					{
						if (this->_gRef != NULL && this->m_getStdDev_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getStdDev_void_callback");
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
							return this->CBandStatisticsInfo::getStdDev();
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCBandStatisticsInfoProxy);
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial2d_raster_BandStatisticsInfo_getMax_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Raster::CBandStatisticsInfo *pObjectX = (EarthView::World::Spatial2D::Raster::CBandStatisticsInfo*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCBandStatisticsInfoProxy))
					{
						const ev_real64 __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CBandStatisticsInfo::getMax();
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
					else
					{
						const ev_real64 __values1 = pObjectX->getMax();
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_BandStatisticsInfo_register_1getMax_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCBandStatisticsInfoProxy *pObjectX = (JCBandStatisticsInfoProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getMax_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getMax_void_callback", "()D");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial2d_raster_BandStatisticsInfo_getMax_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Raster::CBandStatisticsInfo *pObjectX = (EarthView::World::Spatial2D::Raster::CBandStatisticsInfo*) pObjXXXX;
					const ev_real64 __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CBandStatisticsInfo::getMax();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial2d_raster_BandStatisticsInfo_getMin_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Raster::CBandStatisticsInfo *pObjectX = (EarthView::World::Spatial2D::Raster::CBandStatisticsInfo*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCBandStatisticsInfoProxy))
					{
						const ev_real64 __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CBandStatisticsInfo::getMin();
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
					else
					{
						const ev_real64 __values1 = pObjectX->getMin();
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_BandStatisticsInfo_register_1getMin_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCBandStatisticsInfoProxy *pObjectX = (JCBandStatisticsInfoProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getMin_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getMin_void_callback", "()D");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial2d_raster_BandStatisticsInfo_getMin_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Raster::CBandStatisticsInfo *pObjectX = (EarthView::World::Spatial2D::Raster::CBandStatisticsInfo*) pObjXXXX;
					const ev_real64 __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CBandStatisticsInfo::getMin();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial2d_raster_BandStatisticsInfo_getMean_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Raster::CBandStatisticsInfo *pObjectX = (EarthView::World::Spatial2D::Raster::CBandStatisticsInfo*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCBandStatisticsInfoProxy))
					{
						const ev_real64 __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CBandStatisticsInfo::getMean();
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
					else
					{
						const ev_real64 __values1 = pObjectX->getMean();
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_BandStatisticsInfo_register_1getMean_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCBandStatisticsInfoProxy *pObjectX = (JCBandStatisticsInfoProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getMean_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getMean_void_callback", "()D");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial2d_raster_BandStatisticsInfo_getMean_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Raster::CBandStatisticsInfo *pObjectX = (EarthView::World::Spatial2D::Raster::CBandStatisticsInfo*) pObjXXXX;
					const ev_real64 __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CBandStatisticsInfo::getMean();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial2d_raster_BandStatisticsInfo_getStdDev_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Raster::CBandStatisticsInfo *pObjectX = (EarthView::World::Spatial2D::Raster::CBandStatisticsInfo*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCBandStatisticsInfoProxy))
					{
						const ev_real64 __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CBandStatisticsInfo::getStdDev();
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
					else
					{
						const ev_real64 __values1 = pObjectX->getStdDev();
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_BandStatisticsInfo_register_1getStdDev_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCBandStatisticsInfoProxy *pObjectX = (JCBandStatisticsInfoProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getStdDev_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getStdDev_void_callback", "()D");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial2d_raster_BandStatisticsInfo_getStdDev_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Raster::CBandStatisticsInfo *pObjectX = (EarthView::World::Spatial2D::Raster::CBandStatisticsInfo*) pObjXXXX;
					const ev_real64 __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CBandStatisticsInfo::getStdDev();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_BandStatisticsInfo_toStream_1CDataStream(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j)
				{
					EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
					const 					EarthView::World::Spatial2D::Raster::CBandStatisticsInfo *pObjectX = (EarthView::World::Spatial2D::Raster::CBandStatisticsInfo*) pObjXXXX;
					pObjectX->toStream(stream);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_BandStatisticsInfo_fromStream_1CDataStream(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j)
				{
					EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
					EarthView::World::Spatial2D::Raster::CBandStatisticsInfo *pObjectX = (EarthView::World::Spatial2D::Raster::CBandStatisticsInfo*) pObjXXXX;
					pObjectX->fromStream(stream);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_raster_BandStatisticsInfo_toXmlElement_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Raster::CBandStatisticsInfo *pObjectX = (EarthView::World::Spatial2D::Raster::CBandStatisticsInfo*) pObjXXXX;
					EarthView::World::Core::CXmlElement __values1 = pObjectX->toXmlElement();
					EarthView::World::Core::CXmlElement *returnvalues = new EarthView::World::Core::CXmlElement(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_BandStatisticsInfo_fromXmlElement_1CXmlElement(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong element_j)
				{
					EarthView::World::Core::CXmlElement &element = *(EarthView::World::Core::CXmlElement*) element_j;
					EarthView::World::Spatial2D::Raster::CBandStatisticsInfo *pObjectX = (EarthView::World::Spatial2D::Raster::CBandStatisticsInfo*) pObjXXXX;
					pObjectX->fromXmlElement(element);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_raster_DataTime_getYear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Raster::CDataTime *pObjectX = (EarthView::World::Spatial2D::Raster::CDataTime*) pObjXXXX;
					const ev_int32 __values1 = pObjectX->getYear();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_raster_DataTime_getMonth_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Raster::CDataTime *pObjectX = (EarthView::World::Spatial2D::Raster::CDataTime*) pObjXXXX;
					const ev_int32 __values1 = pObjectX->getMonth();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_raster_DataTime_getDate_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Raster::CDataTime *pObjectX = (EarthView::World::Spatial2D::Raster::CDataTime*) pObjXXXX;
					const ev_int32 __values1 = pObjectX->getDate();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_raster_DataTime_getHour_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Raster::CDataTime *pObjectX = (EarthView::World::Spatial2D::Raster::CDataTime*) pObjXXXX;
					const ev_int32 __values1 = pObjectX->getHour();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_raster_DataTime_getMinute_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Raster::CDataTime *pObjectX = (EarthView::World::Spatial2D::Raster::CDataTime*) pObjXXXX;
					const ev_int32 __values1 = pObjectX->getMinute();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				class JCSensorInfoProxy : public EarthView::World::Spatial2D::Raster::CSensorInfo
				{
				 private:
					EarthView::World::Core::ev_string m_getRasterFormat_void_callback;
					EarthView::World::Core::ev_string m_getSensorName_void_callback;
					EarthView::World::Core::ev_string m_getDataTime_void_callback;
				public:
					JCSensorInfoProxy(EarthView::World::Core::CNameValuePairList *pList) : CSensorInfo(pList)
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
					void register_getRasterFormat_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getRasterFormat_void_callback = __method;
					}
					void register_getSensorName_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getSensorName_void_callback = __method;
					}
					void register_getDataTime_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getDataTime_void_callback = __method;
					}
					virtual const EVString getRasterFormat() const
					{
						if (this->_gRef != NULL && this->m_getRasterFormat_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getRasterFormat_void_callback");
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
							const EVString __values1 = values_ch;
							__env->ReleaseStringUTFChars(__values1_j,values_ch);
							#else
							const ev_wchar* values_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
							const EVString __values1 = values_ch;
							__env->ReleaseStringChars(__values1_j,(const jchar *)values_ch);
							#endif
							return __values1;
						}
						else
						{
							return this->CSensorInfo::getRasterFormat();
						}
					}
					virtual const EVString getSensorName() const
					{
						if (this->_gRef != NULL && this->m_getSensorName_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getSensorName_void_callback");
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
							const EVString __values1 = values_ch;
							__env->ReleaseStringUTFChars(__values1_j,values_ch);
							#else
							const ev_wchar* values_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
							const EVString __values1 = values_ch;
							__env->ReleaseStringChars(__values1_j,(const jchar *)values_ch);
							#endif
							return __values1;
						}
						else
						{
							return this->CSensorInfo::getSensorName();
						}
					}
					virtual const EarthView::World::Spatial2D::Raster::CDataTime& getDataTime() const
					{
						if (this->_gRef != NULL && this->m_getDataTime_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getDataTime_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							const EarthView::World::Spatial2D::Raster::CDataTime &__values1 = *(const EarthView::World::Spatial2D::Raster::CDataTime*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CSensorInfo::getDataTime();
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCSensorInfoProxy);
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_raster_SensorInfo_OperatorAssign_1CSensorInfo(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong objsensor_j )
				{
					EarthView::World::Spatial2D::Raster::CSensorInfo& pObjectX = *(EarthView::World::Spatial2D::Raster::CSensorInfo*) pObjXXXX;
					const EarthView::World::Spatial2D::Raster::CSensorInfo &objsensor = *(EarthView::World::Spatial2D::Raster::CSensorInfo*) objsensor_j;
					pObjectX = objsensor;
					EarthView::World::Spatial2D::Raster::CSensorInfo& __values1 = pObjectX;
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial2d_raster_SensorInfo_getRasterFormat_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Raster::CSensorInfo *pObjectX = (EarthView::World::Spatial2D::Raster::CSensorInfo*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCSensorInfoProxy))
					{
						const EVString __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CSensorInfo::getRasterFormat();
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
					else
					{
						const EVString __values1 = pObjectX->getRasterFormat();
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_SensorInfo_register_1getRasterFormat_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCSensorInfoProxy *pObjectX = (JCSensorInfoProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getRasterFormat_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getRasterFormat_void_callback", "()Ljava/lang/String;");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial2d_raster_SensorInfo_getRasterFormat_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Raster::CSensorInfo *pObjectX = (EarthView::World::Spatial2D::Raster::CSensorInfo*) pObjXXXX;
					const EVString __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CSensorInfo::getRasterFormat();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial2d_raster_SensorInfo_getSensorName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Raster::CSensorInfo *pObjectX = (EarthView::World::Spatial2D::Raster::CSensorInfo*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCSensorInfoProxy))
					{
						const EVString __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CSensorInfo::getSensorName();
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
					else
					{
						const EVString __values1 = pObjectX->getSensorName();
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_SensorInfo_register_1getSensorName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCSensorInfoProxy *pObjectX = (JCSensorInfoProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getSensorName_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getSensorName_void_callback", "()Ljava/lang/String;");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial2d_raster_SensorInfo_getSensorName_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Raster::CSensorInfo *pObjectX = (EarthView::World::Spatial2D::Raster::CSensorInfo*) pObjXXXX;
					const EVString __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CSensorInfo::getSensorName();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_raster_SensorInfo_getDataTime_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Raster::CSensorInfo *pObjectX = (EarthView::World::Spatial2D::Raster::CSensorInfo*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCSensorInfoProxy))
					{
						const EarthView::World::Spatial2D::Raster::CDataTime& __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CSensorInfo::getDataTime();
						jlong __values1_j = (jlong) &__values1;
						return __values1_j;
					}
					else
					{
						const EarthView::World::Spatial2D::Raster::CDataTime& __values1 = pObjectX->getDataTime();
						jlong __values1_j = (jlong) &__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_SensorInfo_register_1getDataTime_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCSensorInfoProxy *pObjectX = (JCSensorInfoProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getDataTime_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getDataTime_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_raster_SensorInfo_getDataTime_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Raster::CSensorInfo *pObjectX = (EarthView::World::Spatial2D::Raster::CSensorInfo*) pObjXXXX;
					const EarthView::World::Spatial2D::Raster::CDataTime& __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CSensorInfo::getDataTime();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
			}
		}
	}
}
