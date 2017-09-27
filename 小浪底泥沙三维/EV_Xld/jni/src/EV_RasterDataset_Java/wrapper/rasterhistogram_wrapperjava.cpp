/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "rasterdataset/rasterhistogram.h"
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
				class JCRasterHistogramProxy : public EarthView::World::Spatial2D::Raster::CRasterHistogram
				{
				 private:
					EarthView::World::Core::ev_string m_getFrequence_ev_byte_callback;
					EarthView::World::Core::ev_string m_setFrequence_ev_byte_ev_uint32_callback;
					EarthView::World::Core::ev_string m_getGrayIndex_ev_real64_callback;
				public:
					JCRasterHistogramProxy(EarthView::World::Core::CNameValuePairList *pList) : CRasterHistogram(pList)
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
					void register_getFrequence_ev_byte_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getFrequence_ev_byte_callback = __method;
					}
					void register_setFrequence_ev_byte_ev_uint32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setFrequence_ev_byte_ev_uint32_callback = __method;
					}
					void register_getGrayIndex_ev_real64_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getGrayIndex_ev_real64_callback = __method;
					}
					virtual ev_uint32 getFrequence(ev_byte grayIndex) const
					{
						if (this->_gRef != NULL && this->m_getFrequence_ev_byte_callback != "" && this->isCustomExtend())
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
							jshort grayIndex_j = (jshort) grayIndex;
							jmethodID __method = __gr->getMethod("getFrequence_ev_byte_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , grayIndex_j);
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
							return this->CRasterHistogram::getFrequence(grayIndex);
						}
					}
					virtual void setFrequence(ev_byte grayIndex, ev_uint32 frequence)
					{
						if (this->_gRef != NULL && this->m_setFrequence_ev_byte_ev_uint32_callback != "" && this->isCustomExtend())
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
							jshort grayIndex_j = (jshort) grayIndex;
							jlong frequence_j = (jlong) frequence;
							jmethodID __method = __gr->getMethod("setFrequence_ev_byte_ev_uint32_callback");
							__env->CallVoidMethod(__obj, __method , grayIndex_j, frequence_j);
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
							return this->CRasterHistogram::setFrequence(grayIndex, frequence);
						}
					}
					virtual ev_byte getGrayIndex(ev_real64 value) const
					{
						if (this->_gRef != NULL && this->m_getGrayIndex_ev_real64_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getGrayIndex_ev_real64_callback");
							jshort __values1_j = (jshort)__env->CallShortMethod(__obj, __method , value_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_byte __values1 = (ev_byte) __values1_j;
							return __values1;
						}
						else
						{
							return this->CRasterHistogram::getGrayIndex(value);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCRasterHistogramProxy);
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_raster_RasterHistogram_getFrequence_1ev_1byte(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jshort grayIndex_j)
				{
					ev_byte grayIndex = (ev_byte) grayIndex_j;
					const 					EarthView::World::Spatial2D::Raster::CRasterHistogram *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterHistogram*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRasterHistogramProxy))
					{
						ev_uint32 __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterHistogram::getFrequence(grayIndex);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						ev_uint32 __values1 = pObjectX->getFrequence(grayIndex);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterHistogram_register_1getFrequence_1ev_1byte(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRasterHistogramProxy *pObjectX = (JCRasterHistogramProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getFrequence_ev_byte_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getFrequence_ev_byte_callback", "(S)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_raster_RasterHistogram_getFrequence_1ev_1byte_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jshort grayIndex_j)
				{
					ev_byte grayIndex = (ev_byte) grayIndex_j;
					const 					EarthView::World::Spatial2D::Raster::CRasterHistogram *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterHistogram*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterHistogram::getFrequence(grayIndex);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterHistogram_setFrequence_1ev_1byte_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jshort grayIndex_j, jlong frequence_j)
				{
					ev_byte grayIndex = (ev_byte) grayIndex_j;
					ev_uint32 frequence = (ev_uint32) frequence_j;
					EarthView::World::Spatial2D::Raster::CRasterHistogram *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterHistogram*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRasterHistogramProxy))
					{
						pObjectX->EarthView::World::Spatial2D::Raster::CRasterHistogram::setFrequence(grayIndex, frequence);
					}
					else
					{
						pObjectX->setFrequence(grayIndex, frequence);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterHistogram_register_1setFrequence_1ev_1byte_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRasterHistogramProxy *pObjectX = (JCRasterHistogramProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setFrequence_ev_byte_ev_uint32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setFrequence_ev_byte_ev_uint32_callback", "(SJ)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterHistogram_setFrequence_1ev_1byte_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jshort grayIndex_j, jlong frequence_j)
				{
					ev_byte grayIndex = (ev_byte) grayIndex_j;
					ev_uint32 frequence = (ev_uint32) frequence_j;
					EarthView::World::Spatial2D::Raster::CRasterHistogram *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterHistogram*) pObjXXXX;
					pObjectX->EarthView::World::Spatial2D::Raster::CRasterHistogram::setFrequence(grayIndex, frequence);
				}
				extern "C" JNIEXPORT jshort JNICALL Java_com_earthview_world_spatial2d_raster_RasterHistogram_getGrayIndex_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble value_j)
				{
					ev_real64 value = (ev_real64) value_j;
					const 					EarthView::World::Spatial2D::Raster::CRasterHistogram *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterHistogram*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRasterHistogramProxy))
					{
						ev_byte __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterHistogram::getGrayIndex(value);
						jshort __values1_j = (jshort) __values1;
						return __values1_j;
					}
					else
					{
						ev_byte __values1 = pObjectX->getGrayIndex(value);
						jshort __values1_j = (jshort) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterHistogram_register_1getGrayIndex_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRasterHistogramProxy *pObjectX = (JCRasterHistogramProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getGrayIndex_ev_real64_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getGrayIndex_ev_real64_callback", "(D)S");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jshort JNICALL Java_com_earthview_world_spatial2d_raster_RasterHistogram_getGrayIndex_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble value_j)
				{
					ev_real64 value = (ev_real64) value_j;
					const 					EarthView::World::Spatial2D::Raster::CRasterHistogram *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterHistogram*) pObjXXXX;
					ev_byte __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterHistogram::getGrayIndex(value);
					jshort __values1_j = (jshort) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterHistogram_toStream_1CDataStream(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j)
				{
					EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
					const 					EarthView::World::Spatial2D::Raster::CRasterHistogram *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterHistogram*) pObjXXXX;
					pObjectX->toStream(stream);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterHistogram_fromStream_1CDataStream(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j)
				{
					EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
					EarthView::World::Spatial2D::Raster::CRasterHistogram *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterHistogram*) pObjXXXX;
					pObjectX->fromStream(stream);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_raster_RasterHistogram_toXmlElement_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Raster::CRasterHistogram *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterHistogram*) pObjXXXX;
					EarthView::World::Core::CXmlElement __values1 = pObjectX->toXmlElement();
					EarthView::World::Core::CXmlElement *returnvalues = new EarthView::World::Core::CXmlElement(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterHistogram_fromXmlElement_1CXmlElement(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong element_j)
				{
					EarthView::World::Core::CXmlElement &element = *(EarthView::World::Core::CXmlElement*) element_j;
					EarthView::World::Spatial2D::Raster::CRasterHistogram *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterHistogram*) pObjXXXX;
					pObjectX->fromXmlElement(element);
				}
			}
		}
	}
}
