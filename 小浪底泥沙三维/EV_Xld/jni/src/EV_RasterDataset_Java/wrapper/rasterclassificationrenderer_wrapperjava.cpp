/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "rasterdataset/rasterclassificationrenderer.h"
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
				class JCRasterClassificationRendererProxy : public EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer
				{
				 private:
					EarthView::World::Core::ev_string m_getRendererType_void_callback;
					EarthView::World::Core::ev_string m_draw_ISpatialDisplay_IRasterBlock_ev_int32_ev_int32_ev_int32_ev_int32_callback;
					EarthView::World::Core::ev_string m_getBandCount_void_callback;
					EarthView::World::Core::ev_string m_getBandIndex_ev_int32_callback;
					EarthView::World::Core::ev_string m_ev_clone_void_callback;
					EarthView::World::Core::ev_string m_toStream_CDataStream_callback;
					EarthView::World::Core::ev_string m_fromXmlElement_CXmlElement_callback;
					EarthView::World::Core::ev_string m_toXmlElement_void_callback;
					EarthView::World::Core::ev_string m_equal_IRasterRenderer_callback;
					EarthView::World::Core::ev_string m_fromStream_CDataStream_callback;
				public:
					JCRasterClassificationRendererProxy(EarthView::World::Core::CNameValuePairList *pList) : CRasterClassificationRenderer(pList)
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
					void register_getRendererType_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getRendererType_void_callback = __method;
					}
					void register_draw_ISpatialDisplay_IRasterBlock_ev_int32_ev_int32_ev_int32_ev_int32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_draw_ISpatialDisplay_IRasterBlock_ev_int32_ev_int32_ev_int32_ev_int32_callback = __method;
					}
					void register_getBandCount_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getBandCount_void_callback = __method;
					}
					void register_getBandIndex_ev_int32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getBandIndex_ev_int32_callback = __method;
					}
					void register_ev_clone_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_ev_clone_void_callback = __method;
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
					void register_equal_IRasterRenderer_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_equal_IRasterRenderer_callback = __method;
					}
					void register_fromStream_CDataStream_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_fromStream_CDataStream_callback = __method;
					}
					virtual EarthView::World::Spatial2D::Raster::EVRasterRendererType getRendererType() const
					{
						if (this->_gRef != NULL && this->m_getRendererType_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getRendererType_void_callback");
							jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial2D::Raster::EVRasterRendererType __values1 = (EarthView::World::Spatial2D::Raster::EVRasterRendererType) __values1_j;
							return __values1;
						}
						else
						{
							return this->CRasterClassificationRenderer::getRendererType();
						}
					}
					virtual ev_bool draw(EarthView::World::Spatial::Display::ISpatialDisplay* pDisplay, EarthView::World::Spatial2D::Raster::IRasterBlock* pRaster, ev_int32 leftUpX, ev_int32 leftUpY, ev_int32 width, ev_int32 height)
					{
						if (this->_gRef != NULL && this->m_draw_ISpatialDisplay_IRasterBlock_ev_int32_ev_int32_ev_int32_ev_int32_callback != "" && this->isCustomExtend())
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
							jlong pDisplay_j = (jlong) pDisplay;
							jlong pRaster_j = (jlong) pRaster;
							jint leftUpX_j = (jint) leftUpX;
							jint leftUpY_j = (jint) leftUpY;
							jint width_j = (jint) width;
							jint height_j = (jint) height;
							jmethodID __method = __gr->getMethod("draw_ISpatialDisplay_IRasterBlock_ev_int32_ev_int32_ev_int32_ev_int32_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , pDisplay_j, pRaster_j, leftUpX_j, leftUpY_j, width_j, height_j);
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
							return this->CRasterClassificationRenderer::draw(pDisplay, pRaster, leftUpX, leftUpY, width, height);
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
							return this->CRasterClassificationRenderer::getBandCount();
						}
					}
					virtual ev_int32 getBandIndex(ev_int32 channel) const
					{
						if (this->_gRef != NULL && this->m_getBandIndex_ev_int32_callback != "" && this->isCustomExtend())
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
							jint channel_j = (jint) channel;
							jmethodID __method = __gr->getMethod("getBandIndex_ev_int32_callback");
							jint __values1_j = (jint)__env->CallIntMethod(__obj, __method , channel_j);
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
							return this->CRasterClassificationRenderer::getBandIndex(channel);
						}
					}
					virtual EarthView::World::Spatial2D::Raster::IRasterRenderer* clone() const
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
							EarthView::World::Spatial2D::Raster::IRasterRenderer *__values1 = (EarthView::World::Spatial2D::Raster::IRasterRenderer*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CRasterClassificationRenderer::clone();
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
							return this->CRasterClassificationRenderer::fromXmlElement(element);
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
							return this->CRasterClassificationRenderer::toXmlElement();
						}
					}
					virtual ev_bool equal(const EarthView::World::Spatial2D::Raster::IRasterRenderer* other)
					{
						if (this->_gRef != NULL && this->m_equal_IRasterRenderer_callback != "" && this->isCustomExtend())
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
							jlong other_j = (jlong) other;
							jmethodID __method = __gr->getMethod("equal_IRasterRenderer_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , other_j);
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
							return this->CRasterClassificationRenderer::equal(other);
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
							return this->CRasterClassificationRenderer::toStream(stream);
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
							return this->CRasterClassificationRenderer::fromStream(stream);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCRasterClassificationRendererProxy);
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_raster_RasterClassificationRenderer_getRendererType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRasterClassificationRendererProxy))
					{
						EarthView::World::Spatial2D::Raster::EVRasterRendererType __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer::getRendererType();
						jint __values1_j = (jint) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial2D::Raster::EVRasterRendererType __values1 = pObjectX->getRendererType();
						jint __values1_j = (jint) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterClassificationRenderer_register_1getRendererType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRasterClassificationRendererProxy *pObjectX = (JCRasterClassificationRendererProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getRendererType_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getRendererType_void_callback", "()I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_raster_RasterClassificationRenderer_getRendererType_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer*) pObjXXXX;
					EarthView::World::Spatial2D::Raster::EVRasterRendererType __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer::getRendererType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_raster_RasterClassificationRenderer_draw_1ISpatialDisplay_1IRasterBlock_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pDisplay_j, jlong pRaster_j, jint leftUpX_j, jint leftUpY_j, jint width_j, jint height_j)
				{
					EarthView::World::Spatial::Display::ISpatialDisplay *pDisplay = (EarthView::World::Spatial::Display::ISpatialDisplay*) pDisplay_j;
					EarthView::World::Spatial2D::Raster::IRasterBlock *pRaster = (EarthView::World::Spatial2D::Raster::IRasterBlock*) pRaster_j;
					ev_int32 leftUpX = (ev_int32) leftUpX_j;
					ev_int32 leftUpY = (ev_int32) leftUpY_j;
					ev_int32 width = (ev_int32) width_j;
					ev_int32 height = (ev_int32) height_j;
					EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRasterClassificationRendererProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer::draw(pDisplay, pRaster, leftUpX, leftUpY, width, height);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->draw(pDisplay, pRaster, leftUpX, leftUpY, width, height);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterClassificationRenderer_register_1draw_1ISpatialDisplay_1IRasterBlock_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRasterClassificationRendererProxy *pObjectX = (JCRasterClassificationRendererProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_draw_ISpatialDisplay_IRasterBlock_ev_int32_ev_int32_ev_int32_ev_int32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"draw_ISpatialDisplay_IRasterBlock_ev_int32_ev_int32_ev_int32_ev_int32_callback", "(JJIIII)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_raster_RasterClassificationRenderer_draw_1ISpatialDisplay_1IRasterBlock_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pDisplay_j, jlong pRaster_j, jint leftUpX_j, jint leftUpY_j, jint width_j, jint height_j)
				{
					EarthView::World::Spatial::Display::ISpatialDisplay *pDisplay = (EarthView::World::Spatial::Display::ISpatialDisplay*) pDisplay_j;
					EarthView::World::Spatial2D::Raster::IRasterBlock *pRaster = (EarthView::World::Spatial2D::Raster::IRasterBlock*) pRaster_j;
					ev_int32 leftUpX = (ev_int32) leftUpX_j;
					ev_int32 leftUpY = (ev_int32) leftUpY_j;
					ev_int32 width = (ev_int32) width_j;
					ev_int32 height = (ev_int32) height_j;
					EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer::draw(pDisplay, pRaster, leftUpX, leftUpY, width, height);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_raster_RasterClassificationRenderer_getBandCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRasterClassificationRendererProxy))
					{
						ev_int32 __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer::getBandCount();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterClassificationRenderer_register_1getBandCount_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRasterClassificationRendererProxy *pObjectX = (JCRasterClassificationRendererProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_raster_RasterClassificationRenderer_getBandCount_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer*) pObjXXXX;
					ev_int32 __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer::getBandCount();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_raster_RasterClassificationRenderer_getBandIndex_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint channel_j)
				{
					ev_int32 channel = (ev_int32) channel_j;
					const 					EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRasterClassificationRendererProxy))
					{
						ev_int32 __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer::getBandIndex(channel);
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
					else
					{
						ev_int32 __values1 = pObjectX->getBandIndex(channel);
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterClassificationRenderer_register_1getBandIndex_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRasterClassificationRendererProxy *pObjectX = (JCRasterClassificationRendererProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getBandIndex_ev_int32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getBandIndex_ev_int32_callback", "(I)I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_raster_RasterClassificationRenderer_getBandIndex_1ev_1int32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint channel_j)
				{
					ev_int32 channel = (ev_int32) channel_j;
					const 					EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer*) pObjXXXX;
					ev_int32 __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer::getBandIndex(channel);
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_raster_RasterClassificationRenderer_ev_1clone_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRasterClassificationRendererProxy))
					{
						EarthView::World::Spatial2D::Raster::IRasterRenderer* __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer::clone();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial2D::Raster::IRasterRenderer* __values1 = pObjectX->clone();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterClassificationRenderer_register_1ev_1clone_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRasterClassificationRendererProxy *pObjectX = (JCRasterClassificationRendererProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_raster_RasterClassificationRenderer_ev_1clone_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer*) pObjXXXX;
					EarthView::World::Spatial2D::Raster::IRasterRenderer* __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer::clone();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterClassificationRenderer_fromXmlElement_1CXmlElement(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong element_j)
				{
					EarthView::World::Core::CXmlElement &element = *(EarthView::World::Core::CXmlElement*) element_j;
					EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRasterClassificationRendererProxy))
					{
						pObjectX->EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer::fromXmlElement(element);
					}
					else
					{
						pObjectX->fromXmlElement(element);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterClassificationRenderer_register_1fromXmlElement_1CXmlElement(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRasterClassificationRendererProxy *pObjectX = (JCRasterClassificationRendererProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterClassificationRenderer_fromXmlElement_1CXmlElement_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong element_j)
				{
					EarthView::World::Core::CXmlElement &element = *(EarthView::World::Core::CXmlElement*) element_j;
					EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer::fromXmlElement(element);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_raster_RasterClassificationRenderer_toXmlElement_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRasterClassificationRendererProxy))
					{
						EarthView::World::Core::CXmlElement __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer::toXmlElement();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterClassificationRenderer_register_1toXmlElement_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRasterClassificationRendererProxy *pObjectX = (JCRasterClassificationRendererProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_raster_RasterClassificationRenderer_toXmlElement_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer*) pObjXXXX;
					EarthView::World::Core::CXmlElement __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer::toXmlElement();
					EarthView::World::Core::CXmlElement *returnvalues = new EarthView::World::Core::CXmlElement(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial2d_raster_RasterClassificationRenderer_getCaption_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer*) pObjXXXX;
					EVString __values1 = pObjectX->getCaption();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterClassificationRenderer_setCaption_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong caption_j)
				{
					EVString &caption = *(EVString*) caption_j;
					EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer*) pObjXXXX;
					pObjectX->setCaption(caption);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial2d_raster_RasterClassificationRenderer_getSubCaption_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					const 					EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer*) pObjXXXX;
					EVString __values1 = pObjectX->getSubCaption(index);
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterClassificationRenderer_setSubCaption_1ev_1uint32_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j, jlong subCaption_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					EVString &subCaption = *(EVString*) subCaption_j;
					EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer*) pObjXXXX;
					pObjectX->setSubCaption(index, subCaption);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_raster_RasterClassificationRenderer_getBandIndex_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer*) pObjXXXX;
					ev_int32 __values1 = pObjectX->getBandIndex();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterClassificationRenderer_setBandIndex_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint index_j)
				{
					ev_int32 index = (ev_int32) index_j;
					EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer*) pObjXXXX;
					pObjectX->setBandIndex(index);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial2d_raster_RasterClassificationRenderer_getFieldName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer*) pObjXXXX;
					EVString __values1 = pObjectX->getFieldName();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterClassificationRenderer_setFieldName_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong fieldName_j)
				{
					EVString &fieldName = *(EVString*) fieldName_j;
					EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer*) pObjXXXX;
					pObjectX->setFieldName(fieldName);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_raster_RasterClassificationRenderer_getColor_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					const 					EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer*) pObjXXXX;
					const EarthView::World::Spatial::Display::IColor* __values1 = pObjectX->getColor(index);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_raster_RasterClassificationRenderer_getColor_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble value_j)
				{
					ev_real64 value = (ev_real64) value_j;
					const 					EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer*) pObjXXXX;
					const EarthView::World::Spatial::Display::IColor* __values1 = pObjectX->getColor(value);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterClassificationRenderer_setColor_1ev_1uint32_1IColor(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j, jlong pColor_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					const EarthView::World::Spatial::Display::IColor &pColor = *(EarthView::World::Spatial::Display::IColor*) pColor_j;
					EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer*) pObjXXXX;
					pObjectX->setColor(index, pColor);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterClassificationRenderer_addBreak_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble value_j)
				{
					ev_real64 value = (ev_real64) value_j;
					EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer*) pObjXXXX;
					pObjectX->addBreak(value);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterClassificationRenderer_removeBreak_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer*) pObjXXXX;
					pObjectX->removeBreak(index);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterClassificationRenderer_removeAll_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer*) pObjXXXX;
					pObjectX->removeAll();
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_raster_RasterClassificationRenderer_getBreakCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->getBreakCount();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial2d_raster_RasterClassificationRenderer_getBreakValue_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					const 					EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getBreakValue(index);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterClassificationRenderer_setBreakValue_1ev_1uint32_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j, jdouble value_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					ev_real64 value = (ev_real64) value_j;
					EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer*) pObjXXXX;
					pObjectX->setBreakValue(index, value);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial2d_raster_RasterClassificationRenderer_getMaxValue_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getMaxValue();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterClassificationRenderer_setMaxValue_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble value_j)
				{
					ev_real64 value = (ev_real64) value_j;
					EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer*) pObjXXXX;
					pObjectX->setMaxValue(value);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial2d_raster_RasterClassificationRenderer_getMinValue_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getMinValue();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterClassificationRenderer_setMinValue_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble value_j)
				{
					ev_real64 value = (ev_real64) value_j;
					EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer*) pObjXXXX;
					pObjectX->setMinValue(value);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterClassificationRenderer_getValueRange_1ev_1uint32_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j, jlong dfMinValue_j, jlong dfMaxValue_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					ev_real64 &dfMinValue = *(ev_real64*) dfMinValue_j;
					ev_real64 &dfMaxValue = *(ev_real64*) dfMaxValue_j;
					const 					EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer*) pObjXXXX;
					pObjectX->getValueRange(index, dfMinValue, dfMaxValue);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_raster_RasterClassificationRenderer_equal_1IRasterRenderer(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong other_j)
				{
					const EarthView::World::Spatial2D::Raster::IRasterRenderer *other = (const EarthView::World::Spatial2D::Raster::IRasterRenderer*) other_j;
					EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRasterClassificationRendererProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer::equal(other);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->equal(other);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterClassificationRenderer_register_1equal_1IRasterRenderer(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRasterClassificationRendererProxy *pObjectX = (JCRasterClassificationRendererProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_equal_IRasterRenderer_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"equal_IRasterRenderer_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_raster_RasterClassificationRenderer_equal_1IRasterRenderer_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong other_j)
				{
					const EarthView::World::Spatial2D::Raster::IRasterRenderer *other = (const EarthView::World::Spatial2D::Raster::IRasterRenderer*) other_j;
					EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer::equal(other);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterClassificationRenderer_toStream_1CDataStream(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j)
				{
					EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
					const 					EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRasterClassificationRendererProxy))
					{
						pObjectX->EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer::toStream(stream);
					}
					else
					{
						pObjectX->toStream(stream);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterClassificationRenderer_register_1toStream_1CDataStream(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRasterClassificationRendererProxy *pObjectX = (JCRasterClassificationRendererProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterClassificationRenderer_toStream_1CDataStream_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j)
				{
					EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
					const 					EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer::toStream(stream);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterClassificationRenderer_fromStream_1CDataStream(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j)
				{
					EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
					EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRasterClassificationRendererProxy))
					{
						pObjectX->EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer::fromStream(stream);
					}
					else
					{
						pObjectX->fromStream(stream);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterClassificationRenderer_register_1fromStream_1CDataStream(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRasterClassificationRendererProxy *pObjectX = (JCRasterClassificationRendererProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterClassificationRenderer_fromStream_1CDataStream_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j)
				{
					EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
					EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer *pObjectX = (EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer::fromStream(stream);
				}
			}
		}
	}
}
