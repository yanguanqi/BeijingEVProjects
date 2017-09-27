/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "tileutility/tileattachment.h"
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
			class JITileAttachmentProxy : public EarthView::World::Spatial::ITileAttachment
			{
			 private:
				EarthView::World::Core::ev_string m_onTileShown_LodParam_callback;
				EarthView::World::Core::ev_string m_onTileHid_LodParam_callback;
				EarthView::World::Core::ev_string m_onDetachFromTile_void_callback;
				EarthView::World::Core::ev_string m_onTileDestroyed_void_callback;
			public:
				JITileAttachmentProxy(EarthView::World::Core::CNameValuePairList *pList) : ITileAttachment(pList)
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
				void register_onTileShown_LodParam_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_onTileShown_LodParam_callback = __method;
				}
				void register_onTileHid_LodParam_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_onTileHid_LodParam_callback = __method;
				}
				void register_onDetachFromTile_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_onDetachFromTile_void_callback = __method;
				}
				void register_onTileDestroyed_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_onTileDestroyed_void_callback = __method;
				}
				virtual void onTileShown(const EarthView::World::Spatial::ITileAttachment::LodParam& param)
				{
					if (this->_gRef != NULL && this->m_onTileShown_LodParam_callback != "" && this->isCustomExtend())
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
						jlong param_j = (jlong) &param;
						jmethodID __method = __gr->getMethod("onTileShown_LodParam_callback");
						__env->CallVoidMethod(__obj, __method , param_j);
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
						return this->ITileAttachment::onTileShown(param);
					}
				}
				virtual void onTileHid(const EarthView::World::Spatial::ITileAttachment::LodParam& param)
				{
					if (this->_gRef != NULL && this->m_onTileHid_LodParam_callback != "" && this->isCustomExtend())
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
						jlong param_j = (jlong) &param;
						jmethodID __method = __gr->getMethod("onTileHid_LodParam_callback");
						__env->CallVoidMethod(__obj, __method , param_j);
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
						return this->ITileAttachment::onTileHid(param);
					}
				}
				virtual void onDetachFromTile()
				{
					if (this->_gRef != NULL && this->m_onDetachFromTile_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("onDetachFromTile_void_callback");
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
						return this->ITileAttachment::onDetachFromTile();
					}
				}
				virtual void onTileDestroyed()
				{
					if (this->_gRef != NULL && this->m_onTileDestroyed_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("onTileDestroyed_void_callback");
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
						return this->ITileAttachment::onTileDestroyed();
					}
				}
			};
			REGISTER_FACTORY_CLASS(JITileAttachmentProxy);
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_Itileattachment_00024LodParam_get_1tileLevel_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::ITileAttachment::LodParam *pObjectX = (EarthView::World::Spatial::ITileAttachment::LodParam*)pObjXXXX;
				jint __values1_j = (jint)(pObjectX->tileLevel);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Itileattachment_00024LodParam_set_1tileLevel_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
			{
				EarthView::World::Spatial::ITileAttachment::LodParam *pObjectX = (EarthView::World::Spatial::ITileAttachment::LodParam*)pObjXXXX;
				pObjectX->tileLevel = (ev_int32)__values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_Itileattachment_00024LodParam_get_1cameraLevel_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::ITileAttachment::LodParam *pObjectX = (EarthView::World::Spatial::ITileAttachment::LodParam*)pObjXXXX;
				jint __values1_j = (jint)(pObjectX->cameraLevel);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Itileattachment_00024LodParam_set_1cameraLevel_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
			{
				EarthView::World::Spatial::ITileAttachment::LodParam *pObjectX = (EarthView::World::Spatial::ITileAttachment::LodParam*)pObjXXXX;
				pObjectX->cameraLevel = (ev_int32)__values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Itileattachment_00024LodParam_get_1tileChildCount_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::ITileAttachment::LodParam *pObjectX = (EarthView::World::Spatial::ITileAttachment::LodParam*)pObjXXXX;
				jlong __values1_j = (jlong) (pObjectX->tileChildCount);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Itileattachment_00024LodParam_set_1tileChildCount_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Spatial::ITileAttachment::LodParam *pObjectX = (EarthView::World::Spatial::ITileAttachment::LodParam*)pObjXXXX;
				pObjectX->tileChildCount = (ev_size_t)__values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Itileattachment_onTileShown_1LodParam(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong param_j)
			{
				const EarthView::World::Spatial::ITileAttachment::LodParam &param = *(EarthView::World::Spatial::ITileAttachment::LodParam*) param_j;
				EarthView::World::Spatial::ITileAttachment *pObjectX = (EarthView::World::Spatial::ITileAttachment*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JITileAttachmentProxy))
				{
					pObjectX->EarthView::World::Spatial::ITileAttachment::onTileShown(param);
				}
				else
				{
					pObjectX->onTileShown(param);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Itileattachment_register_1onTileShown_1LodParam(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JITileAttachmentProxy *pObjectX = (JITileAttachmentProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_onTileShown_LodParam_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"onTileShown_LodParam_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Itileattachment_onTileShown_1LodParam_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong param_j)
			{
				const EarthView::World::Spatial::ITileAttachment::LodParam &param = *(EarthView::World::Spatial::ITileAttachment::LodParam*) param_j;
				EarthView::World::Spatial::ITileAttachment *pObjectX = (EarthView::World::Spatial::ITileAttachment*) pObjXXXX;
				pObjectX->EarthView::World::Spatial::ITileAttachment::onTileShown(param);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Itileattachment_onTileHid_1LodParam(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong param_j)
			{
				const EarthView::World::Spatial::ITileAttachment::LodParam &param = *(EarthView::World::Spatial::ITileAttachment::LodParam*) param_j;
				EarthView::World::Spatial::ITileAttachment *pObjectX = (EarthView::World::Spatial::ITileAttachment*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JITileAttachmentProxy))
				{
					pObjectX->EarthView::World::Spatial::ITileAttachment::onTileHid(param);
				}
				else
				{
					pObjectX->onTileHid(param);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Itileattachment_register_1onTileHid_1LodParam(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JITileAttachmentProxy *pObjectX = (JITileAttachmentProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_onTileHid_LodParam_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"onTileHid_LodParam_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Itileattachment_onTileHid_1LodParam_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong param_j)
			{
				const EarthView::World::Spatial::ITileAttachment::LodParam &param = *(EarthView::World::Spatial::ITileAttachment::LodParam*) param_j;
				EarthView::World::Spatial::ITileAttachment *pObjectX = (EarthView::World::Spatial::ITileAttachment*) pObjXXXX;
				pObjectX->EarthView::World::Spatial::ITileAttachment::onTileHid(param);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Itileattachment_onDetachFromTile_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::ITileAttachment *pObjectX = (EarthView::World::Spatial::ITileAttachment*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JITileAttachmentProxy))
				{
					pObjectX->EarthView::World::Spatial::ITileAttachment::onDetachFromTile();
				}
				else
				{
					pObjectX->onDetachFromTile();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Itileattachment_register_1onDetachFromTile_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JITileAttachmentProxy *pObjectX = (JITileAttachmentProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_onDetachFromTile_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"onDetachFromTile_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Itileattachment_onDetachFromTile_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::ITileAttachment *pObjectX = (EarthView::World::Spatial::ITileAttachment*) pObjXXXX;
				pObjectX->EarthView::World::Spatial::ITileAttachment::onDetachFromTile();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Itileattachment_onTileDestroyed_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::ITileAttachment *pObjectX = (EarthView::World::Spatial::ITileAttachment*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JITileAttachmentProxy))
				{
					pObjectX->EarthView::World::Spatial::ITileAttachment::onTileDestroyed();
				}
				else
				{
					pObjectX->onTileDestroyed();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Itileattachment_register_1onTileDestroyed_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JITileAttachmentProxy *pObjectX = (JITileAttachmentProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_onTileDestroyed_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"onTileDestroyed_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Itileattachment_onTileDestroyed_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::ITileAttachment *pObjectX = (EarthView::World::Spatial::ITileAttachment*) pObjXXXX;
				pObjectX->EarthView::World::Spatial::ITileAttachment::onTileDestroyed();
			}
		}
	}
}
