/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "geometry3d/geometry3dextension/multigeometry3dextensionlistener.h"
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
			namespace Geometry
			{
			}
			namespace Display
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Geometry3D
		{
			class JCMultiGeometry3DExtensionListenerProxy : public EarthView::World::Geometry3D::CMultiGeometry3DExtensionListener
			{
			 private:
				EarthView::World::Core::ev_string m_userExtension_CMultiGeometry3DExtension_callback;
				EarthView::World::Core::ev_string m_onSymbolNotSupported_CMultiGeometry3DExtension_callback;
				EarthView::World::Core::ev_string m_perGeometryExtensionBegun_IGeometry_ISymbol_callback;
				EarthView::World::Core::ev_string m_perGeometryExtensionFinished_IGeometry_callback;
				EarthView::World::Core::ev_string m_preRender_CMultiGeometry3DExtension_callback;
				EarthView::World::Core::ev_string m_postRender_CMultiGeometry3DExtension_callback;
			public:
				JCMultiGeometry3DExtensionListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CMultiGeometry3DExtensionListener(pList)
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
				void register_userExtension_CMultiGeometry3DExtension_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_userExtension_CMultiGeometry3DExtension_callback = __method;
				}
				void register_onSymbolNotSupported_CMultiGeometry3DExtension_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_onSymbolNotSupported_CMultiGeometry3DExtension_callback = __method;
				}
				void register_perGeometryExtensionBegun_IGeometry_ISymbol_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_perGeometryExtensionBegun_IGeometry_ISymbol_callback = __method;
				}
				void register_perGeometryExtensionFinished_IGeometry_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_perGeometryExtensionFinished_IGeometry_callback = __method;
				}
				void register_preRender_CMultiGeometry3DExtension_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_preRender_CMultiGeometry3DExtension_callback = __method;
				}
				void register_postRender_CMultiGeometry3DExtension_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_postRender_CMultiGeometry3DExtension_callback = __method;
				}
				virtual ev_bool userExtension(EarthView::World::Geometry3D::CMultiGeometry3DExtension* extension)
				{
					if (this->_gRef != NULL && this->m_userExtension_CMultiGeometry3DExtension_callback != "" && this->isCustomExtend())
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
						jlong extension_j = (jlong) extension;
						jmethodID __method = __gr->getMethod("userExtension_CMultiGeometry3DExtension_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , extension_j);
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
						return this->CMultiGeometry3DExtensionListener::userExtension(extension);
					}
				}
				virtual ev_bool onSymbolNotSupported(EarthView::World::Geometry3D::CMultiGeometry3DExtension* extension)
				{
					if (this->_gRef != NULL && this->m_onSymbolNotSupported_CMultiGeometry3DExtension_callback != "" && this->isCustomExtend())
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
						jlong extension_j = (jlong) extension;
						jmethodID __method = __gr->getMethod("onSymbolNotSupported_CMultiGeometry3DExtension_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , extension_j);
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
						return this->CMultiGeometry3DExtensionListener::onSymbolNotSupported(extension);
					}
				}
				virtual void perGeometryExtensionBegun(EarthView::World::Spatial::Geometry::IGeometry* pGeometry, EarthView::World::Spatial::Display::ISymbol* pSymbol)
				{
					if (this->_gRef != NULL && this->m_perGeometryExtensionBegun_IGeometry_ISymbol_callback != "" && this->isCustomExtend())
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
						jlong pGeometry_j = (jlong) pGeometry;
						jlong pSymbol_j = (jlong) pSymbol;
						jmethodID __method = __gr->getMethod("perGeometryExtensionBegun_IGeometry_ISymbol_callback");
						__env->CallVoidMethod(__obj, __method , pGeometry_j, pSymbol_j);
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
						return this->CMultiGeometry3DExtensionListener::perGeometryExtensionBegun(pGeometry, pSymbol);
					}
				}
				virtual void perGeometryExtensionFinished(const EarthView::World::Spatial::Geometry::IGeometry* pGeometry)
				{
					if (this->_gRef != NULL && this->m_perGeometryExtensionFinished_IGeometry_callback != "" && this->isCustomExtend())
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
						jlong pGeometry_j = (jlong) pGeometry;
						jmethodID __method = __gr->getMethod("perGeometryExtensionFinished_IGeometry_callback");
						__env->CallVoidMethod(__obj, __method , pGeometry_j);
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
						return this->CMultiGeometry3DExtensionListener::perGeometryExtensionFinished(pGeometry);
					}
				}
				virtual void preRender(EarthView::World::Geometry3D::CMultiGeometry3DExtension* extension)
				{
					if (this->_gRef != NULL && this->m_preRender_CMultiGeometry3DExtension_callback != "" && this->isCustomExtend())
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
						jlong extension_j = (jlong) extension;
						jmethodID __method = __gr->getMethod("preRender_CMultiGeometry3DExtension_callback");
						__env->CallVoidMethod(__obj, __method , extension_j);
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
						return this->CMultiGeometry3DExtensionListener::preRender(extension);
					}
				}
				virtual void postRender(EarthView::World::Geometry3D::CMultiGeometry3DExtension* extension)
				{
					if (this->_gRef != NULL && this->m_postRender_CMultiGeometry3DExtension_callback != "" && this->isCustomExtend())
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
						jlong extension_j = (jlong) extension;
						jmethodID __method = __gr->getMethod("postRender_CMultiGeometry3DExtension_callback");
						__env->CallVoidMethod(__obj, __method , extension_j);
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
						return this->CMultiGeometry3DExtensionListener::postRender(extension);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCMultiGeometry3DExtensionListenerProxy);
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtensionListener_userExtension_1CMultiGeometry3DExtension(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong extension_j)
			{
				EarthView::World::Geometry3D::CMultiGeometry3DExtension *extension = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) extension_j;
				EarthView::World::Geometry3D::CMultiGeometry3DExtensionListener *pObjectX = (EarthView::World::Geometry3D::CMultiGeometry3DExtensionListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCMultiGeometry3DExtensionListenerProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Geometry3D::CMultiGeometry3DExtensionListener::userExtension(extension);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->userExtension(extension);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtensionListener_register_1userExtension_1CMultiGeometry3DExtension(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMultiGeometry3DExtensionListenerProxy *pObjectX = (JCMultiGeometry3DExtensionListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_userExtension_CMultiGeometry3DExtension_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"userExtension_CMultiGeometry3DExtension_callback", "(J)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtensionListener_userExtension_1CMultiGeometry3DExtension_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong extension_j)
			{
				EarthView::World::Geometry3D::CMultiGeometry3DExtension *extension = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) extension_j;
				EarthView::World::Geometry3D::CMultiGeometry3DExtensionListener *pObjectX = (EarthView::World::Geometry3D::CMultiGeometry3DExtensionListener*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Geometry3D::CMultiGeometry3DExtensionListener::userExtension(extension);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtensionListener_onSymbolNotSupported_1CMultiGeometry3DExtension(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong extension_j)
			{
				EarthView::World::Geometry3D::CMultiGeometry3DExtension *extension = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) extension_j;
				EarthView::World::Geometry3D::CMultiGeometry3DExtensionListener *pObjectX = (EarthView::World::Geometry3D::CMultiGeometry3DExtensionListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCMultiGeometry3DExtensionListenerProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Geometry3D::CMultiGeometry3DExtensionListener::onSymbolNotSupported(extension);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->onSymbolNotSupported(extension);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtensionListener_register_1onSymbolNotSupported_1CMultiGeometry3DExtension(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMultiGeometry3DExtensionListenerProxy *pObjectX = (JCMultiGeometry3DExtensionListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_onSymbolNotSupported_CMultiGeometry3DExtension_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"onSymbolNotSupported_CMultiGeometry3DExtension_callback", "(J)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtensionListener_onSymbolNotSupported_1CMultiGeometry3DExtension_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong extension_j)
			{
				EarthView::World::Geometry3D::CMultiGeometry3DExtension *extension = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) extension_j;
				EarthView::World::Geometry3D::CMultiGeometry3DExtensionListener *pObjectX = (EarthView::World::Geometry3D::CMultiGeometry3DExtensionListener*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Geometry3D::CMultiGeometry3DExtensionListener::onSymbolNotSupported(extension);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtensionListener_perGeometryExtensionBegun_1IGeometry_1ISymbol(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pGeometry_j, jlong pSymbol_j)
			{
				EarthView::World::Spatial::Geometry::IGeometry *pGeometry = (EarthView::World::Spatial::Geometry::IGeometry*) pGeometry_j;
				EarthView::World::Spatial::Display::ISymbol *pSymbol = (EarthView::World::Spatial::Display::ISymbol*) pSymbol_j;
				EarthView::World::Geometry3D::CMultiGeometry3DExtensionListener *pObjectX = (EarthView::World::Geometry3D::CMultiGeometry3DExtensionListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCMultiGeometry3DExtensionListenerProxy))
				{
					pObjectX->EarthView::World::Geometry3D::CMultiGeometry3DExtensionListener::perGeometryExtensionBegun(pGeometry, pSymbol);
				}
				else
				{
					pObjectX->perGeometryExtensionBegun(pGeometry, pSymbol);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtensionListener_register_1perGeometryExtensionBegun_1IGeometry_1ISymbol(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMultiGeometry3DExtensionListenerProxy *pObjectX = (JCMultiGeometry3DExtensionListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_perGeometryExtensionBegun_IGeometry_ISymbol_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"perGeometryExtensionBegun_IGeometry_ISymbol_callback", "(JJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtensionListener_perGeometryExtensionBegun_1IGeometry_1ISymbol_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pGeometry_j, jlong pSymbol_j)
			{
				EarthView::World::Spatial::Geometry::IGeometry *pGeometry = (EarthView::World::Spatial::Geometry::IGeometry*) pGeometry_j;
				EarthView::World::Spatial::Display::ISymbol *pSymbol = (EarthView::World::Spatial::Display::ISymbol*) pSymbol_j;
				EarthView::World::Geometry3D::CMultiGeometry3DExtensionListener *pObjectX = (EarthView::World::Geometry3D::CMultiGeometry3DExtensionListener*) pObjXXXX;
				pObjectX->EarthView::World::Geometry3D::CMultiGeometry3DExtensionListener::perGeometryExtensionBegun(pGeometry, pSymbol);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtensionListener_perGeometryExtensionFinished_1IGeometry(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pGeometry_j)
			{
				const EarthView::World::Spatial::Geometry::IGeometry *pGeometry = (const EarthView::World::Spatial::Geometry::IGeometry*) pGeometry_j;
				EarthView::World::Geometry3D::CMultiGeometry3DExtensionListener *pObjectX = (EarthView::World::Geometry3D::CMultiGeometry3DExtensionListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCMultiGeometry3DExtensionListenerProxy))
				{
					pObjectX->EarthView::World::Geometry3D::CMultiGeometry3DExtensionListener::perGeometryExtensionFinished(pGeometry);
				}
				else
				{
					pObjectX->perGeometryExtensionFinished(pGeometry);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtensionListener_register_1perGeometryExtensionFinished_1IGeometry(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMultiGeometry3DExtensionListenerProxy *pObjectX = (JCMultiGeometry3DExtensionListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_perGeometryExtensionFinished_IGeometry_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"perGeometryExtensionFinished_IGeometry_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtensionListener_perGeometryExtensionFinished_1IGeometry_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pGeometry_j)
			{
				const EarthView::World::Spatial::Geometry::IGeometry *pGeometry = (const EarthView::World::Spatial::Geometry::IGeometry*) pGeometry_j;
				EarthView::World::Geometry3D::CMultiGeometry3DExtensionListener *pObjectX = (EarthView::World::Geometry3D::CMultiGeometry3DExtensionListener*) pObjXXXX;
				pObjectX->EarthView::World::Geometry3D::CMultiGeometry3DExtensionListener::perGeometryExtensionFinished(pGeometry);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtensionListener_preRender_1CMultiGeometry3DExtension(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong extension_j)
			{
				EarthView::World::Geometry3D::CMultiGeometry3DExtension *extension = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) extension_j;
				EarthView::World::Geometry3D::CMultiGeometry3DExtensionListener *pObjectX = (EarthView::World::Geometry3D::CMultiGeometry3DExtensionListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCMultiGeometry3DExtensionListenerProxy))
				{
					pObjectX->EarthView::World::Geometry3D::CMultiGeometry3DExtensionListener::preRender(extension);
				}
				else
				{
					pObjectX->preRender(extension);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtensionListener_register_1preRender_1CMultiGeometry3DExtension(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMultiGeometry3DExtensionListenerProxy *pObjectX = (JCMultiGeometry3DExtensionListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_preRender_CMultiGeometry3DExtension_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"preRender_CMultiGeometry3DExtension_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtensionListener_preRender_1CMultiGeometry3DExtension_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong extension_j)
			{
				EarthView::World::Geometry3D::CMultiGeometry3DExtension *extension = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) extension_j;
				EarthView::World::Geometry3D::CMultiGeometry3DExtensionListener *pObjectX = (EarthView::World::Geometry3D::CMultiGeometry3DExtensionListener*) pObjXXXX;
				pObjectX->EarthView::World::Geometry3D::CMultiGeometry3DExtensionListener::preRender(extension);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtensionListener_postRender_1CMultiGeometry3DExtension(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong extension_j)
			{
				EarthView::World::Geometry3D::CMultiGeometry3DExtension *extension = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) extension_j;
				EarthView::World::Geometry3D::CMultiGeometry3DExtensionListener *pObjectX = (EarthView::World::Geometry3D::CMultiGeometry3DExtensionListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCMultiGeometry3DExtensionListenerProxy))
				{
					pObjectX->EarthView::World::Geometry3D::CMultiGeometry3DExtensionListener::postRender(extension);
				}
				else
				{
					pObjectX->postRender(extension);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtensionListener_register_1postRender_1CMultiGeometry3DExtension(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMultiGeometry3DExtensionListenerProxy *pObjectX = (JCMultiGeometry3DExtensionListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_postRender_CMultiGeometry3DExtension_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"postRender_CMultiGeometry3DExtension_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtensionListener_postRender_1CMultiGeometry3DExtension_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong extension_j)
			{
				EarthView::World::Geometry3D::CMultiGeometry3DExtension *extension = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) extension_j;
				EarthView::World::Geometry3D::CMultiGeometry3DExtensionListener *pObjectX = (EarthView::World::Geometry3D::CMultiGeometry3DExtensionListener*) pObjXXXX;
				pObjectX->EarthView::World::Geometry3D::CMultiGeometry3DExtensionListener::postRender(extension);
			}
		}
	}
}
