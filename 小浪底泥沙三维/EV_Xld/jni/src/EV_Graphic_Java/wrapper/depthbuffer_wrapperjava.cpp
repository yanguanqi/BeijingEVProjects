/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/depthbuffer.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			class JCDepthBufferProxy : public EarthView::World::Graphic::CDepthBuffer
			{
			 private:
				EarthView::World::Core::ev_string m_getPoolId_void_callback;
				EarthView::World::Core::ev_string m_getBitDepth_void_callback;
				EarthView::World::Core::ev_string m_getWidth_void_callback;
				EarthView::World::Core::ev_string m_getHeight_void_callback;
				EarthView::World::Core::ev_string m_getFsaa_void_callback;
				EarthView::World::Core::ev_string m_getFsaaHint_void_callback;
				EarthView::World::Core::ev_string m_isCompatible_CRenderTarget_callback;
				EarthView::World::Core::ev_string m__notifyRenderTargetAttached_CRenderTarget_callback;
				EarthView::World::Core::ev_string m__notifyRenderTargetDetached_CRenderTarget_callback;
			public:
				JCDepthBufferProxy(EarthView::World::Core::CNameValuePairList *pList) : CDepthBuffer(pList)
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
				void register_getPoolId_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getPoolId_void_callback = __method;
				}
				void register_getBitDepth_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getBitDepth_void_callback = __method;
				}
				void register_getWidth_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getWidth_void_callback = __method;
				}
				void register_getHeight_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getHeight_void_callback = __method;
				}
				void register_getFsaa_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getFsaa_void_callback = __method;
				}
				void register_getFsaaHint_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getFsaaHint_void_callback = __method;
				}
				void register_isCompatible_CRenderTarget_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_isCompatible_CRenderTarget_callback = __method;
				}
				void register__notifyRenderTargetAttached_CRenderTarget_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__notifyRenderTargetAttached_CRenderTarget_callback = __method;
				}
				void register__notifyRenderTargetDetached_CRenderTarget_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__notifyRenderTargetDetached_CRenderTarget_callback = __method;
				}
				virtual ev_uint16 getPoolId() const
				{
					if (this->_gRef != NULL && this->m_getPoolId_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getPoolId_void_callback");
						jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_uint16 __values1 = (ev_uint16) __values1_j;
						return __values1;
					}
					else
					{
						return this->CDepthBuffer::getPoolId();
					}
				}
				virtual ev_uint16 getBitDepth() const
				{
					if (this->_gRef != NULL && this->m_getBitDepth_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getBitDepth_void_callback");
						jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_uint16 __values1 = (ev_uint16) __values1_j;
						return __values1;
					}
					else
					{
						return this->CDepthBuffer::getBitDepth();
					}
				}
				virtual ev_size_t getWidth() const
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
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_size_t __values1 = (ev_size_t) __values1_j;
						return __values1;
					}
					else
					{
						return this->CDepthBuffer::getWidth();
					}
				}
				virtual ev_size_t getHeight() const
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
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_size_t __values1 = (ev_size_t) __values1_j;
						return __values1;
					}
					else
					{
						return this->CDepthBuffer::getHeight();
					}
				}
				virtual ev_size_t getFsaa() const
				{
					if (this->_gRef != NULL && this->m_getFsaa_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getFsaa_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_size_t __values1 = (ev_size_t) __values1_j;
						return __values1;
					}
					else
					{
						return this->CDepthBuffer::getFsaa();
					}
				}
				virtual EVString getFsaaHint() const
				{
					if (this->_gRef != NULL && this->m_getFsaaHint_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getFsaaHint_void_callback");
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
						return this->CDepthBuffer::getFsaaHint();
					}
				}
				virtual ev_bool isCompatible(EarthView::World::Graphic::CRenderTarget* renderTarget) const
				{
					if (this->_gRef != NULL && this->m_isCompatible_CRenderTarget_callback != "" && this->isCustomExtend())
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
						jlong renderTarget_j = (jlong) renderTarget;
						jmethodID __method = __gr->getMethod("isCompatible_CRenderTarget_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , renderTarget_j);
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
						return this->CDepthBuffer::isCompatible(renderTarget);
					}
				}
				virtual void _notifyRenderTargetAttached(EarthView::World::Graphic::CRenderTarget* ref_renderTarget)
				{
					if (this->_gRef != NULL && this->m__notifyRenderTargetAttached_CRenderTarget_callback != "" && this->isCustomExtend())
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
						jlong ref_renderTarget_j = (jlong) ref_renderTarget;
						jmethodID __method = __gr->getMethod("_notifyRenderTargetAttached_CRenderTarget_callback");
						__env->CallVoidMethod(__obj, __method , ref_renderTarget_j);
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
						return this->CDepthBuffer::_notifyRenderTargetAttached(ref_renderTarget);
					}
				}
				virtual void _notifyRenderTargetDetached(EarthView::World::Graphic::CRenderTarget* renderTarget)
				{
					if (this->_gRef != NULL && this->m__notifyRenderTargetDetached_CRenderTarget_callback != "" && this->isCustomExtend())
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
						jlong renderTarget_j = (jlong) renderTarget;
						jmethodID __method = __gr->getMethod("_notifyRenderTargetDetached_CRenderTarget_callback");
						__env->CallVoidMethod(__obj, __method , renderTarget_j);
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
						return this->CDepthBuffer::_notifyRenderTargetDetached(renderTarget);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCDepthBufferProxy);
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_graphic_DepthBuffer_00024PoolIdHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					CDepthBuffer::POOL_NO_DEPTH,
					CDepthBuffer::POOL_MANUAL_USAGE,
					CDepthBuffer::POOL_DEFAULT
				};
				jintArray array = __env->NewIntArray(3);
				__env->SetIntArrayRegion(array, 0, 3, enum_values);
				return array;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DepthBuffer__1setPoolId_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint poolId_j)
			{
				ev_uint16 poolId = (ev_uint16) poolId_j;
				EarthView::World::Graphic::CDepthBuffer *pObjectX = (EarthView::World::Graphic::CDepthBuffer*) pObjXXXX;
				pObjectX->_setPoolId(poolId);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_DepthBuffer_getPoolId_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CDepthBuffer *pObjectX = (EarthView::World::Graphic::CDepthBuffer*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDepthBufferProxy))
				{
					ev_uint16 __values1 = pObjectX->EarthView::World::Graphic::CDepthBuffer::getPoolId();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				else
				{
					ev_uint16 __values1 = pObjectX->getPoolId();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DepthBuffer_register_1getPoolId_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDepthBufferProxy *pObjectX = (JCDepthBufferProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getPoolId_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getPoolId_void_callback", "()I");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_DepthBuffer_getPoolId_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CDepthBuffer *pObjectX = (EarthView::World::Graphic::CDepthBuffer*) pObjXXXX;
				ev_uint16 __values1 = pObjectX->EarthView::World::Graphic::CDepthBuffer::getPoolId();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_DepthBuffer_getBitDepth_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CDepthBuffer *pObjectX = (EarthView::World::Graphic::CDepthBuffer*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDepthBufferProxy))
				{
					ev_uint16 __values1 = pObjectX->EarthView::World::Graphic::CDepthBuffer::getBitDepth();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				else
				{
					ev_uint16 __values1 = pObjectX->getBitDepth();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DepthBuffer_register_1getBitDepth_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDepthBufferProxy *pObjectX = (JCDepthBufferProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getBitDepth_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getBitDepth_void_callback", "()I");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_DepthBuffer_getBitDepth_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CDepthBuffer *pObjectX = (EarthView::World::Graphic::CDepthBuffer*) pObjXXXX;
				ev_uint16 __values1 = pObjectX->EarthView::World::Graphic::CDepthBuffer::getBitDepth();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_DepthBuffer_getWidth_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CDepthBuffer *pObjectX = (EarthView::World::Graphic::CDepthBuffer*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDepthBufferProxy))
				{
					ev_size_t __values1 = pObjectX->EarthView::World::Graphic::CDepthBuffer::getWidth();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					ev_size_t __values1 = pObjectX->getWidth();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DepthBuffer_register_1getWidth_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDepthBufferProxy *pObjectX = (JCDepthBufferProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getWidth_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getWidth_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_DepthBuffer_getWidth_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CDepthBuffer *pObjectX = (EarthView::World::Graphic::CDepthBuffer*) pObjXXXX;
				ev_size_t __values1 = pObjectX->EarthView::World::Graphic::CDepthBuffer::getWidth();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_DepthBuffer_getHeight_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CDepthBuffer *pObjectX = (EarthView::World::Graphic::CDepthBuffer*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDepthBufferProxy))
				{
					ev_size_t __values1 = pObjectX->EarthView::World::Graphic::CDepthBuffer::getHeight();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					ev_size_t __values1 = pObjectX->getHeight();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DepthBuffer_register_1getHeight_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDepthBufferProxy *pObjectX = (JCDepthBufferProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getHeight_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getHeight_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_DepthBuffer_getHeight_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CDepthBuffer *pObjectX = (EarthView::World::Graphic::CDepthBuffer*) pObjXXXX;
				ev_size_t __values1 = pObjectX->EarthView::World::Graphic::CDepthBuffer::getHeight();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_DepthBuffer_getFsaa_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CDepthBuffer *pObjectX = (EarthView::World::Graphic::CDepthBuffer*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDepthBufferProxy))
				{
					ev_size_t __values1 = pObjectX->EarthView::World::Graphic::CDepthBuffer::getFsaa();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					ev_size_t __values1 = pObjectX->getFsaa();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DepthBuffer_register_1getFsaa_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDepthBufferProxy *pObjectX = (JCDepthBufferProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getFsaa_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getFsaa_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_DepthBuffer_getFsaa_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CDepthBuffer *pObjectX = (EarthView::World::Graphic::CDepthBuffer*) pObjXXXX;
				ev_size_t __values1 = pObjectX->EarthView::World::Graphic::CDepthBuffer::getFsaa();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_DepthBuffer_getFsaaHint_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CDepthBuffer *pObjectX = (EarthView::World::Graphic::CDepthBuffer*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDepthBufferProxy))
				{
					EVString __values1 = pObjectX->EarthView::World::Graphic::CDepthBuffer::getFsaaHint();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				else
				{
					EVString __values1 = pObjectX->getFsaaHint();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DepthBuffer_register_1getFsaaHint_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDepthBufferProxy *pObjectX = (JCDepthBufferProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getFsaaHint_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getFsaaHint_void_callback", "()Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_DepthBuffer_getFsaaHint_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CDepthBuffer *pObjectX = (EarthView::World::Graphic::CDepthBuffer*) pObjXXXX;
				EVString __values1 = pObjectX->EarthView::World::Graphic::CDepthBuffer::getFsaaHint();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_DepthBuffer_isManual_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CDepthBuffer *pObjectX = (EarthView::World::Graphic::CDepthBuffer*) pObjXXXX;
				ev_bool __values1 = pObjectX->isManual();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_DepthBuffer_isCompatible_1CRenderTarget(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong renderTarget_j)
			{
				EarthView::World::Graphic::CRenderTarget *renderTarget = (EarthView::World::Graphic::CRenderTarget*) renderTarget_j;
				const 				EarthView::World::Graphic::CDepthBuffer *pObjectX = (EarthView::World::Graphic::CDepthBuffer*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDepthBufferProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Graphic::CDepthBuffer::isCompatible(renderTarget);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->isCompatible(renderTarget);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DepthBuffer_register_1isCompatible_1CRenderTarget(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDepthBufferProxy *pObjectX = (JCDepthBufferProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_isCompatible_CRenderTarget_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"isCompatible_CRenderTarget_callback", "(J)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_DepthBuffer_isCompatible_1CRenderTarget_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong renderTarget_j)
			{
				EarthView::World::Graphic::CRenderTarget *renderTarget = (EarthView::World::Graphic::CRenderTarget*) renderTarget_j;
				const 				EarthView::World::Graphic::CDepthBuffer *pObjectX = (EarthView::World::Graphic::CDepthBuffer*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Graphic::CDepthBuffer::isCompatible(renderTarget);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DepthBuffer__1notifyRenderTargetAttached_1CRenderTarget(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_renderTarget_j)
			{
				EarthView::World::Graphic::CRenderTarget *ref_renderTarget = (EarthView::World::Graphic::CRenderTarget*) ref_renderTarget_j;
				EarthView::World::Graphic::CDepthBuffer *pObjectX = (EarthView::World::Graphic::CDepthBuffer*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDepthBufferProxy))
				{
					pObjectX->EarthView::World::Graphic::CDepthBuffer::_notifyRenderTargetAttached(ref_renderTarget);
				}
				else
				{
					pObjectX->_notifyRenderTargetAttached(ref_renderTarget);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DepthBuffer_register_1_1notifyRenderTargetAttached_1CRenderTarget(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDepthBufferProxy *pObjectX = (JCDepthBufferProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__notifyRenderTargetAttached_CRenderTarget_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_notifyRenderTargetAttached_CRenderTarget_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DepthBuffer__1notifyRenderTargetAttached_1CRenderTarget_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_renderTarget_j)
			{
				EarthView::World::Graphic::CRenderTarget *ref_renderTarget = (EarthView::World::Graphic::CRenderTarget*) ref_renderTarget_j;
				EarthView::World::Graphic::CDepthBuffer *pObjectX = (EarthView::World::Graphic::CDepthBuffer*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CDepthBuffer::_notifyRenderTargetAttached(ref_renderTarget);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DepthBuffer__1notifyRenderTargetDetached_1CRenderTarget(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong renderTarget_j)
			{
				EarthView::World::Graphic::CRenderTarget *renderTarget = (EarthView::World::Graphic::CRenderTarget*) renderTarget_j;
				EarthView::World::Graphic::CDepthBuffer *pObjectX = (EarthView::World::Graphic::CDepthBuffer*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDepthBufferProxy))
				{
					pObjectX->EarthView::World::Graphic::CDepthBuffer::_notifyRenderTargetDetached(renderTarget);
				}
				else
				{
					pObjectX->_notifyRenderTargetDetached(renderTarget);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DepthBuffer_register_1_1notifyRenderTargetDetached_1CRenderTarget(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDepthBufferProxy *pObjectX = (JCDepthBufferProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__notifyRenderTargetDetached_CRenderTarget_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_notifyRenderTargetDetached_CRenderTarget_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DepthBuffer__1notifyRenderTargetDetached_1CRenderTarget_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong renderTarget_j)
			{
				EarthView::World::Graphic::CRenderTarget *renderTarget = (EarthView::World::Graphic::CRenderTarget*) renderTarget_j;
				EarthView::World::Graphic::CDepthBuffer *pObjectX = (EarthView::World::Graphic::CDepthBuffer*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CDepthBuffer::_notifyRenderTargetDetached(renderTarget);
			}
		}
	}
}
