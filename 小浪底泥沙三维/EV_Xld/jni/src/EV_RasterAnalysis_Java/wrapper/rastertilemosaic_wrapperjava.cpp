/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "rasteranalysis/rastertilemosaic.h"
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
			namespace Analyst
			{
				class JCTileMosaicListenerProxy : public EarthView::World::Spatial2D::Analyst::CRasterTileMosaic::CTileMosaicListener
				{
				 private:
					EarthView::World::Core::ev_string m_progressChanged_ev_uint8_callback;
					EarthView::World::Core::ev_string m_finished_void_callback;
				public:
					JCTileMosaicListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CTileMosaicListener(pList)
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
					void register_progressChanged_ev_uint8_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_progressChanged_ev_uint8_callback = __method;
					}
					void register_finished_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_finished_void_callback = __method;
					}
					virtual void progressChanged(ev_uint8 percent)
					{
						if (this->_gRef != NULL && this->m_progressChanged_ev_uint8_callback != "" && this->isCustomExtend())
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
							jshort percent_j = (jshort) percent;
							jmethodID __method = __gr->getMethod("progressChanged_ev_uint8_callback");
							__env->CallVoidMethod(__obj, __method , percent_j);
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
							return this->CTileMosaicListener::progressChanged(percent);
						}
					}
					virtual void finished()
					{
						if (this->_gRef != NULL && this->m_finished_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("finished_void_callback");
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
							return this->CTileMosaicListener::finished();
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCTileMosaicListenerProxy);
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_analyst_RasterTileMosaic_00024TileMosaicListener_progressChanged_1ev_1uint8(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jshort percent_j)
				{
					ev_uint8 percent = (ev_uint8) percent_j;
					EarthView::World::Spatial2D::Analyst::CRasterTileMosaic::CTileMosaicListener *pObjectX = (EarthView::World::Spatial2D::Analyst::CRasterTileMosaic::CTileMosaicListener*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCTileMosaicListenerProxy))
					{
						pObjectX->EarthView::World::Spatial2D::Analyst::CRasterTileMosaic::CTileMosaicListener::progressChanged(percent);
					}
					else
					{
						pObjectX->progressChanged(percent);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_analyst_RasterTileMosaic_00024TileMosaicListener_register_1progressChanged_1ev_1uint8(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTileMosaicListenerProxy *pObjectX = (JCTileMosaicListenerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_progressChanged_ev_uint8_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"progressChanged_ev_uint8_callback", "(S)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_analyst_RasterTileMosaic_00024TileMosaicListener_progressChanged_1ev_1uint8_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jshort percent_j)
				{
					ev_uint8 percent = (ev_uint8) percent_j;
					EarthView::World::Spatial2D::Analyst::CRasterTileMosaic::CTileMosaicListener *pObjectX = (EarthView::World::Spatial2D::Analyst::CRasterTileMosaic::CTileMosaicListener*) pObjXXXX;
					pObjectX->EarthView::World::Spatial2D::Analyst::CRasterTileMosaic::CTileMosaicListener::progressChanged(percent);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_analyst_RasterTileMosaic_00024TileMosaicListener_finished_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Analyst::CRasterTileMosaic::CTileMosaicListener *pObjectX = (EarthView::World::Spatial2D::Analyst::CRasterTileMosaic::CTileMosaicListener*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCTileMosaicListenerProxy))
					{
						pObjectX->EarthView::World::Spatial2D::Analyst::CRasterTileMosaic::CTileMosaicListener::finished();
					}
					else
					{
						pObjectX->finished();
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_analyst_RasterTileMosaic_00024TileMosaicListener_register_1finished_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTileMosaicListenerProxy *pObjectX = (JCTileMosaicListenerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_finished_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"finished_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_analyst_RasterTileMosaic_00024TileMosaicListener_finished_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Analyst::CRasterTileMosaic::CTileMosaicListener *pObjectX = (EarthView::World::Spatial2D::Analyst::CRasterTileMosaic::CTileMosaicListener*) pObjXXXX;
					pObjectX->EarthView::World::Spatial2D::Analyst::CRasterTileMosaic::CTileMosaicListener::finished();
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_analyst_RasterTileMosaic_mosaic_1ITileDataset_1IRasterDataset_1CTileMosaicListener(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pTileDataset_j, jlong pDstDataset_j, jlong pListener_j)
				{
					EarthView::World::Spatial::ITileDataset *pTileDataset = (EarthView::World::Spatial::ITileDataset*) pTileDataset_j;
					EarthView::World::Spatial::GeoDataset::IRasterDataset *pDstDataset = (EarthView::World::Spatial::GeoDataset::IRasterDataset*) pDstDataset_j;
					EarthView::World::Spatial2D::Analyst::CRasterTileMosaic::CTileMosaicListener *pListener = (EarthView::World::Spatial2D::Analyst::CRasterTileMosaic::CTileMosaicListener*) pListener_j;
					EarthView::World::Spatial2D::Analyst::CRasterTileMosaic *pObjectX = (EarthView::World::Spatial2D::Analyst::CRasterTileMosaic*) pObjXXXX;
					ev_bool __values1 = pObjectX->mosaic(pTileDataset, pDstDataset, pListener);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
		}
	}
}
