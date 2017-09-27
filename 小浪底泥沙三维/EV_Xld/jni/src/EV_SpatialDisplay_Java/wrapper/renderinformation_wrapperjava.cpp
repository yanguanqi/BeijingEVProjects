/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialdisplay/renderinformation.h"
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
			namespace Atlas
			{
				class JCRenderInformationProxy : public EarthView::World::Spatial2D::Atlas::CRenderInformation
				{
				 private:
					EarthView::World::Core::ev_string m_isRendering_void_callback;
					EarthView::World::Core::ev_string m_getRenderingLayer_void_callback;
					EarthView::World::Core::ev_string m_getRenderingType_void_callback;
				public:
					JCRenderInformationProxy(EarthView::World::Core::CNameValuePairList *pList) : CRenderInformation(pList)
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
				protected:
					C_DISABLE_COPY(JCRenderInformationProxy)
				public:
					void register_isRendering_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_isRendering_void_callback = __method;
					}
					void register_getRenderingLayer_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getRenderingLayer_void_callback = __method;
					}
					void register_getRenderingType_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getRenderingType_void_callback = __method;
					}
					virtual ev_bool isRendering() const
					{
						if (this->_gRef != NULL && this->m_isRendering_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("isRendering_void_callback");
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
							return this->CRenderInformation::isRendering();
						}
					}
					virtual const EarthView::World::Spatial::Atlas::ILayer* getRenderingLayer() const
					{
						if (this->_gRef != NULL && this->m_getRenderingLayer_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getRenderingLayer_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							const EarthView::World::Spatial::Atlas::ILayer *__values1 = (const EarthView::World::Spatial::Atlas::ILayer*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CRenderInformation::getRenderingLayer();
						}
					}
					virtual EarthView::World::Spatial::Atlas::EVVectorLayerRendererType getRenderingType() const
					{
						if (this->_gRef != NULL && this->m_getRenderingType_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getRenderingType_void_callback");
							jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::Atlas::EVVectorLayerRendererType __values1 = (EarthView::World::Spatial::Atlas::EVVectorLayerRendererType) __values1_j;
							return __values1;
						}
						else
						{
							return this->CRenderInformation::getRenderingType();
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCRenderInformationProxy);
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_atlas_RenderInformation_isRendering_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Atlas::CRenderInformation *pObjectX = (EarthView::World::Spatial2D::Atlas::CRenderInformation*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRenderInformationProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::Atlas::CRenderInformation::isRendering();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->isRendering();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_atlas_RenderInformation_register_1isRendering_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRenderInformationProxy *pObjectX = (JCRenderInformationProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_isRendering_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"isRendering_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_atlas_RenderInformation_isRendering_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Atlas::CRenderInformation *pObjectX = (EarthView::World::Spatial2D::Atlas::CRenderInformation*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::Atlas::CRenderInformation::isRendering();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_atlas_RenderInformation_getRenderingLayer_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Atlas::CRenderInformation *pObjectX = (EarthView::World::Spatial2D::Atlas::CRenderInformation*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRenderInformationProxy))
					{
						const EarthView::World::Spatial::Atlas::ILayer* __values1 = pObjectX->EarthView::World::Spatial2D::Atlas::CRenderInformation::getRenderingLayer();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						const EarthView::World::Spatial::Atlas::ILayer* __values1 = pObjectX->getRenderingLayer();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_atlas_RenderInformation_register_1getRenderingLayer_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRenderInformationProxy *pObjectX = (JCRenderInformationProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getRenderingLayer_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getRenderingLayer_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_atlas_RenderInformation_getRenderingLayer_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Atlas::CRenderInformation *pObjectX = (EarthView::World::Spatial2D::Atlas::CRenderInformation*) pObjXXXX;
					const EarthView::World::Spatial::Atlas::ILayer* __values1 = pObjectX->EarthView::World::Spatial2D::Atlas::CRenderInformation::getRenderingLayer();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_atlas_RenderInformation_getRenderingType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Atlas::CRenderInformation *pObjectX = (EarthView::World::Spatial2D::Atlas::CRenderInformation*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRenderInformationProxy))
					{
						EarthView::World::Spatial::Atlas::EVVectorLayerRendererType __values1 = pObjectX->EarthView::World::Spatial2D::Atlas::CRenderInformation::getRenderingType();
						jint __values1_j = (jint) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Atlas::EVVectorLayerRendererType __values1 = pObjectX->getRenderingType();
						jint __values1_j = (jint) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_atlas_RenderInformation_register_1getRenderingType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRenderInformationProxy *pObjectX = (JCRenderInformationProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getRenderingType_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getRenderingType_void_callback", "()I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_atlas_RenderInformation_getRenderingType_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Atlas::CRenderInformation *pObjectX = (EarthView::World::Spatial2D::Atlas::CRenderInformation*) pObjXXXX;
					EarthView::World::Spatial::Atlas::EVVectorLayerRendererType __values1 = pObjectX->EarthView::World::Spatial2D::Atlas::CRenderInformation::getRenderingType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
			}
		}
	}
}
