/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialinterface/irenderer.h"
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
			namespace Display
			{
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial_display_EVRendererTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						RT_UNKNOWN,
						RT_FEATURERENDERER,
						RT_RASTERRENDERER,
						RT_LABELRENDERER
					};
					jintArray array = __env->NewIntArray(4);
					__env->SetIntArrayRegion(array, 0, 4, enum_values);
					return array;
				}
				class JIRendererProxy : public EarthView::World::Spatial::Display::IRenderer
				{
				 private:
					EarthView::World::Core::ev_string m_getType_void_callback;
				public:
					JIRendererProxy(EarthView::World::Core::CNameValuePairList *pList) : IRenderer(pList)
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
					void register_getType_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getType_void_callback = __method;
					}
					virtual EarthView::World::Spatial::Display::EVRendererType getType() const
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
							EarthView::World::Spatial::Display::EVRendererType __values1 = (EarthView::World::Spatial::Display::EVRendererType) __values1_j;
							return __values1;
						}
						else
						{
							return this->IRenderer::getType();
						}
					}
				};
				REGISTER_FACTORY_CLASS(JIRendererProxy);
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_display_Irenderer_getType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::IRenderer *pObjectX = (EarthView::World::Spatial::Display::IRenderer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIRendererProxy))
					{
						EarthView::World::Spatial::Display::EVRendererType __values1 = pObjectX->EarthView::World::Spatial::Display::IRenderer::getType();
						jint __values1_j = (jint) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Display::EVRendererType __values1 = pObjectX->getType();
						jint __values1_j = (jint) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Irenderer_register_1getType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIRendererProxy *pObjectX = (JIRendererProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_display_Irenderer_getType_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::IRenderer *pObjectX = (EarthView::World::Spatial::Display::IRenderer*) pObjXXXX;
					EarthView::World::Spatial::Display::EVRendererType __values1 = pObjectX->EarthView::World::Spatial::Display::IRenderer::getType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
			}
		}
	}
}
