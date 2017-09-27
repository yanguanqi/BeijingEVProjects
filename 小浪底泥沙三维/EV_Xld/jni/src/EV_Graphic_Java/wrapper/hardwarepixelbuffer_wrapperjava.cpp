/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/hardwarepixelbuffer.h"
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
			class JCHardwarePixelBufferProxy : public EarthView::World::Graphic::CHardwarePixelBuffer
			{
			 private:
				EarthView::World::Core::ev_string m_lockImpl_Box_LockOptions_callback;
				EarthView::World::Core::ev_string m__clearSliceRTT_ev_size_t_callback;
				EarthView::World::Core::ev_string m_lock_Box_LockOptions_callback;
				EarthView::World::Core::ev_string m_blit_CHardwarePixelBufferSharedPtr_Box_Box_callback;
				EarthView::World::Core::ev_string m_blitFromMemory_CPixelBox_Box_callback;
				EarthView::World::Core::ev_string m_blitToMemory_Box_CPixelBox_callback;
				EarthView::World::Core::ev_string m_getRenderTarget_ev_size_t_callback;
				EarthView::World::Core::ev_string m_lockImpl_ev_size_t_ev_size_t_LockOptions_callback;
				EarthView::World::Core::ev_string m_unlockImpl_void_callback;
				EarthView::World::Core::ev_string m_lock_ev_size_t_ev_size_t_LockOptions_callback;
				EarthView::World::Core::ev_string m_unlock_void_callback;
				EarthView::World::Core::ev_string m_readData_ev_size_t_ev_size_t_void_callback;
				EarthView::World::Core::ev_string m_writeData_ev_size_t_ev_size_t_void_ev_bool_callback;
				EarthView::World::Core::ev_string m_writeData_ev_size_t_ev_size_t_void_callback;
				EarthView::World::Core::ev_string m_copyData_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool_callback;
				EarthView::World::Core::ev_string m_copyData_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_callback;
				EarthView::World::Core::ev_string m_copyData_CHardwareBuffer_callback;
				EarthView::World::Core::ev_string m__updateFromShadow_void_callback;
			public:
				JCHardwarePixelBufferProxy(EarthView::World::Core::CNameValuePairList *pList) : CHardwarePixelBuffer(pList)
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
				void register_lockImpl_Box_LockOptions_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_lockImpl_Box_LockOptions_callback = __method;
				}
				void register__clearSliceRTT_ev_size_t_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__clearSliceRTT_ev_size_t_callback = __method;
				}
				void register_lock_Box_LockOptions_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_lock_Box_LockOptions_callback = __method;
				}
				void register_blit_CHardwarePixelBufferSharedPtr_Box_Box_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_blit_CHardwarePixelBufferSharedPtr_Box_Box_callback = __method;
				}
				void register_blitFromMemory_CPixelBox_Box_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_blitFromMemory_CPixelBox_Box_callback = __method;
				}
				void register_blitToMemory_Box_CPixelBox_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_blitToMemory_Box_CPixelBox_callback = __method;
				}
				void register_getRenderTarget_ev_size_t_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getRenderTarget_ev_size_t_callback = __method;
				}
				void register_lockImpl_ev_size_t_ev_size_t_LockOptions_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_lockImpl_ev_size_t_ev_size_t_LockOptions_callback = __method;
				}
				void register_unlockImpl_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_unlockImpl_void_callback = __method;
				}
				void register_lock_ev_size_t_ev_size_t_LockOptions_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_lock_ev_size_t_ev_size_t_LockOptions_callback = __method;
				}
				void register_unlock_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_unlock_void_callback = __method;
				}
				void register_readData_ev_size_t_ev_size_t_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_readData_ev_size_t_ev_size_t_void_callback = __method;
				}
				void register_writeData_ev_size_t_ev_size_t_void_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_writeData_ev_size_t_ev_size_t_void_ev_bool_callback = __method;
				}
				void register_writeData_ev_size_t_ev_size_t_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_writeData_ev_size_t_ev_size_t_void_callback = __method;
				}
				void register_copyData_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_copyData_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool_callback = __method;
				}
				void register_copyData_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_copyData_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_callback = __method;
				}
				void register_copyData_CHardwareBuffer_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_copyData_CHardwareBuffer_callback = __method;
				}
				void register__updateFromShadow_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__updateFromShadow_void_callback = __method;
				}
				virtual EarthView::World::Graphic::CPixelBox lockImpl(const EarthView::World::Graphic::Box lockBox, EarthView::World::Graphic::CHardwareBuffer::LockOptions options)
				{
					if (this->_gRef != NULL && this->m_lockImpl_Box_LockOptions_callback != "" && this->isCustomExtend())
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
						jlong lockBox_j = (jlong) &lockBox;
						jint options_j = (jint) options;
						jmethodID __method = __gr->getMethod("lockImpl_Box_LockOptions_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , lockBox_j, options_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CPixelBox __values1 = *(EarthView::World::Graphic::CPixelBox*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CHardwarePixelBuffer::lockImpl(lockBox, options);
					}
				}
				virtual void* lockImpl(ev_size_t offset, ev_size_t length, EarthView::World::Graphic::CHardwareBuffer::LockOptions options)
				{
					if (this->_gRef != NULL && this->m_lockImpl_ev_size_t_ev_size_t_LockOptions_callback != "" && this->isCustomExtend())
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
						jlong offset_j = (jlong) offset;
						jlong length_j = (jlong) length;
						jint options_j = (jint) options;
						jmethodID __method = __gr->getMethod("lockImpl_ev_size_t_ev_size_t_LockOptions_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , offset_j, length_j, options_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						void *__values1 = (void*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CHardwarePixelBuffer::lockImpl(offset, length, options);
					}
				}
				virtual void _clearSliceRTT(ev_size_t zoffset)
				{
					if (this->_gRef != NULL && this->m__clearSliceRTT_ev_size_t_callback != "" && this->isCustomExtend())
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
						jlong zoffset_j = (jlong) zoffset;
						jmethodID __method = __gr->getMethod("_clearSliceRTT_ev_size_t_callback");
						__env->CallVoidMethod(__obj, __method , zoffset_j);
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
						return this->CHardwarePixelBuffer::_clearSliceRTT(zoffset);
					}
				}
				virtual const EarthView::World::Graphic::CPixelBox& lock(const EarthView::World::Graphic::Box& lockBox, EarthView::World::Graphic::CHardwareBuffer::LockOptions options)
				{
					if (this->_gRef != NULL && this->m_lock_Box_LockOptions_callback != "" && this->isCustomExtend())
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
						jlong lockBox_j = (jlong) &lockBox;
						jint options_j = (jint) options;
						jmethodID __method = __gr->getMethod("lock_Box_LockOptions_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , lockBox_j, options_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Graphic::CPixelBox &__values1 = *(const EarthView::World::Graphic::CPixelBox*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CHardwarePixelBuffer::lock(lockBox, options);
					}
				}
				virtual void* lock(ev_size_t offset, ev_size_t length, EarthView::World::Graphic::CHardwareBuffer::LockOptions options)
				{
					if (this->_gRef != NULL && this->m_lock_ev_size_t_ev_size_t_LockOptions_callback != "" && this->isCustomExtend())
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
						jlong offset_j = (jlong) offset;
						jlong length_j = (jlong) length;
						jint options_j = (jint) options;
						jmethodID __method = __gr->getMethod("lock_ev_size_t_ev_size_t_LockOptions_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , offset_j, length_j, options_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						void *__values1 = (void*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CHardwarePixelBuffer::lock(offset, length, options);
					}
				}
				virtual void readData(ev_size_t offset, ev_size_t length, void* pDest)
				{
					if (this->_gRef != NULL && this->m_readData_ev_size_t_ev_size_t_void_callback != "" && this->isCustomExtend())
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
						jlong offset_j = (jlong) offset;
						jlong length_j = (jlong) length;
						jlong pDest_j = (jlong) pDest;
						jmethodID __method = __gr->getMethod("readData_ev_size_t_ev_size_t_void_callback");
						__env->CallVoidMethod(__obj, __method , offset_j, length_j, pDest_j);
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
						return this->CHardwarePixelBuffer::readData(offset, length, pDest);
					}
				}
				virtual void writeData(ev_size_t offset, ev_size_t length, const void* pSource, ev_bool discardWholeBuffer)
				{
					if (this->_gRef != NULL && this->m_writeData_ev_size_t_ev_size_t_void_ev_bool_callback != "" && this->isCustomExtend())
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
						jlong offset_j = (jlong) offset;
						jlong length_j = (jlong) length;
						jlong pSource_j = (jlong) pSource;
						jboolean discardWholeBuffer_j = (jboolean) discardWholeBuffer;
						jmethodID __method = __gr->getMethod("writeData_ev_size_t_ev_size_t_void_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , offset_j, length_j, pSource_j, discardWholeBuffer_j);
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
						return this->CHardwarePixelBuffer::writeData(offset, length, pSource, discardWholeBuffer);
					}
				}
				virtual void writeData(ev_size_t offset, ev_size_t length, const void* pSource)
				{
					if (this->_gRef != NULL && this->m_writeData_ev_size_t_ev_size_t_void_callback != "" && this->isCustomExtend())
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
						jlong offset_j = (jlong) offset;
						jlong length_j = (jlong) length;
						jlong pSource_j = (jlong) pSource;
						jmethodID __method = __gr->getMethod("writeData_ev_size_t_ev_size_t_void_callback");
						__env->CallVoidMethod(__obj, __method , offset_j, length_j, pSource_j);
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
						return this->CHardwarePixelBuffer::writeData(offset, length, pSource);
					}
				}
				virtual void blit(const EarthView::World::Graphic::CHardwarePixelBufferSharedPtr& src, const EarthView::World::Graphic::Box& srcBox, const EarthView::World::Graphic::Box& dstBox)
				{
					if (this->_gRef != NULL && this->m_blit_CHardwarePixelBufferSharedPtr_Box_Box_callback != "" && this->isCustomExtend())
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
						jlong src_j = (jlong) &src;
						jlong srcBox_j = (jlong) &srcBox;
						jlong dstBox_j = (jlong) &dstBox;
						jmethodID __method = __gr->getMethod("blit_CHardwarePixelBufferSharedPtr_Box_Box_callback");
						__env->CallVoidMethod(__obj, __method , src_j, srcBox_j, dstBox_j);
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
						return this->CHardwarePixelBuffer::blit(src, srcBox, dstBox);
					}
				}
				virtual void blitFromMemory(const EarthView::World::Graphic::CPixelBox& src, const EarthView::World::Graphic::Box& dstBox)
				{
					if (this->_gRef != NULL && this->m_blitFromMemory_CPixelBox_Box_callback != "" && this->isCustomExtend())
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
						jlong src_j = (jlong) &src;
						jlong dstBox_j = (jlong) &dstBox;
						jmethodID __method = __gr->getMethod("blitFromMemory_CPixelBox_Box_callback");
						__env->CallVoidMethod(__obj, __method , src_j, dstBox_j);
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
						return this->CHardwarePixelBuffer::blitFromMemory(src, dstBox);
					}
				}
				virtual void blitToMemory(const EarthView::World::Graphic::Box& srcBox, const EarthView::World::Graphic::CPixelBox& dst)
				{
					if (this->_gRef != NULL && this->m_blitToMemory_Box_CPixelBox_callback != "" && this->isCustomExtend())
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
						jlong srcBox_j = (jlong) &srcBox;
						jlong dst_j = (jlong) &dst;
						jmethodID __method = __gr->getMethod("blitToMemory_Box_CPixelBox_callback");
						__env->CallVoidMethod(__obj, __method , srcBox_j, dst_j);
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
						return this->CHardwarePixelBuffer::blitToMemory(srcBox, dst);
					}
				}
				virtual EarthView::World::Graphic::CRenderTexture* getRenderTarget(ev_size_t slice)
				{
					if (this->_gRef != NULL && this->m_getRenderTarget_ev_size_t_callback != "" && this->isCustomExtend())
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
						jlong slice_j = (jlong) slice;
						jmethodID __method = __gr->getMethod("getRenderTarget_ev_size_t_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , slice_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CRenderTexture *__values1 = (EarthView::World::Graphic::CRenderTexture*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CHardwarePixelBuffer::getRenderTarget(slice);
					}
				}
				virtual void unlockImpl()
				{
					if (this->_gRef != NULL && this->m_unlockImpl_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("unlockImpl_void_callback");
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
						return this->CHardwarePixelBuffer::unlockImpl();
					}
				}
				virtual void unlock()
				{
					if (this->_gRef != NULL && this->m_unlock_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("unlock_void_callback");
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
						return this->CHardwarePixelBuffer::unlock();
					}
				}
				virtual void copyData(EarthView::World::Graphic::CHardwareBuffer& srcBuffer, ev_size_t srcOffset, ev_size_t dstOffset, ev_size_t length, ev_bool discardWholeBuffer)
				{
					if (this->_gRef != NULL && this->m_copyData_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool_callback != "" && this->isCustomExtend())
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
						jlong srcBuffer_j = (jlong) &srcBuffer;
						jlong srcOffset_j = (jlong) srcOffset;
						jlong dstOffset_j = (jlong) dstOffset;
						jlong length_j = (jlong) length;
						jboolean discardWholeBuffer_j = (jboolean) discardWholeBuffer;
						jmethodID __method = __gr->getMethod("copyData_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , srcBuffer_j, srcOffset_j, dstOffset_j, length_j, discardWholeBuffer_j);
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
						return this->CHardwarePixelBuffer::copyData(srcBuffer, srcOffset, dstOffset, length, discardWholeBuffer);
					}
				}
				virtual void copyData(EarthView::World::Graphic::CHardwareBuffer& srcBuffer, ev_size_t srcOffset, ev_size_t dstOffset, ev_size_t length)
				{
					if (this->_gRef != NULL && this->m_copyData_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_callback != "" && this->isCustomExtend())
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
						jlong srcBuffer_j = (jlong) &srcBuffer;
						jlong srcOffset_j = (jlong) srcOffset;
						jlong dstOffset_j = (jlong) dstOffset;
						jlong length_j = (jlong) length;
						jmethodID __method = __gr->getMethod("copyData_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_callback");
						__env->CallVoidMethod(__obj, __method , srcBuffer_j, srcOffset_j, dstOffset_j, length_j);
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
						return this->CHardwarePixelBuffer::copyData(srcBuffer, srcOffset, dstOffset, length);
					}
				}
				virtual void copyData(EarthView::World::Graphic::CHardwareBuffer& srcBuffer)
				{
					if (this->_gRef != NULL && this->m_copyData_CHardwareBuffer_callback != "" && this->isCustomExtend())
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
						jlong srcBuffer_j = (jlong) &srcBuffer;
						jmethodID __method = __gr->getMethod("copyData_CHardwareBuffer_callback");
						__env->CallVoidMethod(__obj, __method , srcBuffer_j);
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
						return this->CHardwarePixelBuffer::copyData(srcBuffer);
					}
				}
				virtual void _updateFromShadow()
				{
					if (this->_gRef != NULL && this->m__updateFromShadow_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("_updateFromShadow_void_callback");
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
						return this->CHardwarePixelBuffer::_updateFromShadow();
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCHardwarePixelBufferProxy);
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_HardwarePixelBuffer_lockImpl_1Box_1LockOptions(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong lockBox_j, jint options_j)
			{
				const EarthView::World::Graphic::Box lockBox = *(EarthView::World::Graphic::Box*) lockBox_j;
				EarthView::World::Graphic::CHardwareBuffer::LockOptions options = (EarthView::World::Graphic::CHardwareBuffer::LockOptions) options_j;
				EarthView::World::Graphic::CHardwarePixelBuffer *pObjectX = (EarthView::World::Graphic::CHardwarePixelBuffer*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCHardwarePixelBufferProxy))
				{
					EarthView::World::Graphic::CPixelBox __values1 = pObjectX->EarthView::World::Graphic::CHardwarePixelBuffer::lockImpl(lockBox, options);
					EarthView::World::Graphic::CPixelBox *returnvalues = new EarthView::World::Graphic::CPixelBox(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CPixelBox __values1 = pObjectX->lockImpl(lockBox, options);
					EarthView::World::Graphic::CPixelBox *returnvalues = new EarthView::World::Graphic::CPixelBox(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwarePixelBuffer_register_1lockImpl_1Box_1LockOptions(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHardwarePixelBufferProxy *pObjectX = (JCHardwarePixelBufferProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_lockImpl_Box_LockOptions_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"lockImpl_Box_LockOptions_callback", "(JI)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_HardwarePixelBuffer_lockImpl_1Box_1LockOptions_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong lockBox_j, jint options_j)
			{
				const EarthView::World::Graphic::Box lockBox = *(EarthView::World::Graphic::Box*) lockBox_j;
				EarthView::World::Graphic::CHardwareBuffer::LockOptions options = (EarthView::World::Graphic::CHardwareBuffer::LockOptions) options_j;
				EarthView::World::Graphic::CHardwarePixelBuffer *pObjectX = (EarthView::World::Graphic::CHardwarePixelBuffer*) pObjXXXX;
				EarthView::World::Graphic::CPixelBox __values1 = pObjectX->EarthView::World::Graphic::CHardwarePixelBuffer::lockImpl(lockBox, options);
				EarthView::World::Graphic::CPixelBox *returnvalues = new EarthView::World::Graphic::CPixelBox(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_HardwarePixelBuffer_lockImpl_1ev_1size_1t_1ev_1size_1t_1LockOptions(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong offset_j, jlong length_j, jint options_j)
			{
				ev_size_t offset = (ev_size_t) offset_j;
				ev_size_t length = (ev_size_t) length_j;
				EarthView::World::Graphic::CHardwareBuffer::LockOptions options = (EarthView::World::Graphic::CHardwareBuffer::LockOptions) options_j;
				EarthView::World::Graphic::CHardwarePixelBuffer *pObjectX = (EarthView::World::Graphic::CHardwarePixelBuffer*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCHardwarePixelBufferProxy))
				{
					void* __values1 = pObjectX->EarthView::World::Graphic::CHardwarePixelBuffer::lockImpl(offset, length, options);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					void* __values1 = pObjectX->lockImpl(offset, length, options);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwarePixelBuffer_register_1lockImpl_1ev_1size_1t_1ev_1size_1t_1LockOptions(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHardwarePixelBufferProxy *pObjectX = (JCHardwarePixelBufferProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_lockImpl_ev_size_t_ev_size_t_LockOptions_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"lockImpl_ev_size_t_ev_size_t_LockOptions_callback", "(JJI)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_HardwarePixelBuffer_lockImpl_1ev_1size_1t_1ev_1size_1t_1LockOptions_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong offset_j, jlong length_j, jint options_j)
			{
				ev_size_t offset = (ev_size_t) offset_j;
				ev_size_t length = (ev_size_t) length_j;
				EarthView::World::Graphic::CHardwareBuffer::LockOptions options = (EarthView::World::Graphic::CHardwareBuffer::LockOptions) options_j;
				EarthView::World::Graphic::CHardwarePixelBuffer *pObjectX = (EarthView::World::Graphic::CHardwarePixelBuffer*) pObjXXXX;
				void* __values1 = pObjectX->EarthView::World::Graphic::CHardwarePixelBuffer::lockImpl(offset, length, options);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwarePixelBuffer__1clearSliceRTT_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong zoffset_j)
			{
				ev_size_t zoffset = (ev_size_t) zoffset_j;
				EarthView::World::Graphic::CHardwarePixelBuffer *pObjectX = (EarthView::World::Graphic::CHardwarePixelBuffer*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCHardwarePixelBufferProxy))
				{
					pObjectX->EarthView::World::Graphic::CHardwarePixelBuffer::_clearSliceRTT(zoffset);
				}
				else
				{
					pObjectX->_clearSliceRTT(zoffset);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwarePixelBuffer_register_1_1clearSliceRTT_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHardwarePixelBufferProxy *pObjectX = (JCHardwarePixelBufferProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__clearSliceRTT_ev_size_t_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_clearSliceRTT_ev_size_t_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwarePixelBuffer__1clearSliceRTT_1ev_1size_1t_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong zoffset_j)
			{
				ev_size_t zoffset = (ev_size_t) zoffset_j;
				EarthView::World::Graphic::CHardwarePixelBuffer *pObjectX = (EarthView::World::Graphic::CHardwarePixelBuffer*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CHardwarePixelBuffer::_clearSliceRTT(zoffset);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_HardwarePixelBuffer_lock_1Box_1LockOptions(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong lockBox_j, jint options_j)
			{
				const EarthView::World::Graphic::Box &lockBox = *(EarthView::World::Graphic::Box*) lockBox_j;
				EarthView::World::Graphic::CHardwareBuffer::LockOptions options = (EarthView::World::Graphic::CHardwareBuffer::LockOptions) options_j;
				EarthView::World::Graphic::CHardwarePixelBuffer *pObjectX = (EarthView::World::Graphic::CHardwarePixelBuffer*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCHardwarePixelBufferProxy))
				{
					const EarthView::World::Graphic::CPixelBox& __values1 = pObjectX->EarthView::World::Graphic::CHardwarePixelBuffer::lock(lockBox, options);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				else
				{
					const EarthView::World::Graphic::CPixelBox& __values1 = pObjectX->lock(lockBox, options);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwarePixelBuffer_register_1lock_1Box_1LockOptions(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHardwarePixelBufferProxy *pObjectX = (JCHardwarePixelBufferProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_lock_Box_LockOptions_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"lock_Box_LockOptions_callback", "(JI)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_HardwarePixelBuffer_lock_1Box_1LockOptions_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong lockBox_j, jint options_j)
			{
				const EarthView::World::Graphic::Box &lockBox = *(EarthView::World::Graphic::Box*) lockBox_j;
				EarthView::World::Graphic::CHardwareBuffer::LockOptions options = (EarthView::World::Graphic::CHardwareBuffer::LockOptions) options_j;
				EarthView::World::Graphic::CHardwarePixelBuffer *pObjectX = (EarthView::World::Graphic::CHardwarePixelBuffer*) pObjXXXX;
				const EarthView::World::Graphic::CPixelBox& __values1 = pObjectX->EarthView::World::Graphic::CHardwarePixelBuffer::lock(lockBox, options);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_HardwarePixelBuffer_lock_1ev_1size_1t_1ev_1size_1t_1LockOptions(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong offset_j, jlong length_j, jint options_j)
			{
				ev_size_t offset = (ev_size_t) offset_j;
				ev_size_t length = (ev_size_t) length_j;
				EarthView::World::Graphic::CHardwareBuffer::LockOptions options = (EarthView::World::Graphic::CHardwareBuffer::LockOptions) options_j;
				EarthView::World::Graphic::CHardwarePixelBuffer *pObjectX = (EarthView::World::Graphic::CHardwarePixelBuffer*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCHardwarePixelBufferProxy))
				{
					void* __values1 = pObjectX->EarthView::World::Graphic::CHardwarePixelBuffer::lock(offset, length, options);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					void* __values1 = pObjectX->lock(offset, length, options);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwarePixelBuffer_register_1lock_1ev_1size_1t_1ev_1size_1t_1LockOptions(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHardwarePixelBufferProxy *pObjectX = (JCHardwarePixelBufferProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_lock_ev_size_t_ev_size_t_LockOptions_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"lock_ev_size_t_ev_size_t_LockOptions_callback", "(JJI)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_HardwarePixelBuffer_lock_1ev_1size_1t_1ev_1size_1t_1LockOptions_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong offset_j, jlong length_j, jint options_j)
			{
				ev_size_t offset = (ev_size_t) offset_j;
				ev_size_t length = (ev_size_t) length_j;
				EarthView::World::Graphic::CHardwareBuffer::LockOptions options = (EarthView::World::Graphic::CHardwareBuffer::LockOptions) options_j;
				EarthView::World::Graphic::CHardwarePixelBuffer *pObjectX = (EarthView::World::Graphic::CHardwarePixelBuffer*) pObjXXXX;
				void* __values1 = pObjectX->EarthView::World::Graphic::CHardwarePixelBuffer::lock(offset, length, options);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_HardwarePixelBuffer_getCurrentLock_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CHardwarePixelBuffer *pObjectX = (EarthView::World::Graphic::CHardwarePixelBuffer*) pObjXXXX;
				const EarthView::World::Graphic::CPixelBox& __values1 = pObjectX->getCurrentLock();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwarePixelBuffer_readData_1ev_1size_1t_1ev_1size_1t_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong offset_j, jlong length_j, jlong pDest_j)
			{
				ev_size_t offset = (ev_size_t) offset_j;
				ev_size_t length = (ev_size_t) length_j;
				void *pDest = (void*) pDest_j;
				EarthView::World::Graphic::CHardwarePixelBuffer *pObjectX = (EarthView::World::Graphic::CHardwarePixelBuffer*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCHardwarePixelBufferProxy))
				{
					pObjectX->EarthView::World::Graphic::CHardwarePixelBuffer::readData(offset, length, pDest);
				}
				else
				{
					pObjectX->readData(offset, length, pDest);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwarePixelBuffer_register_1readData_1ev_1size_1t_1ev_1size_1t_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHardwarePixelBufferProxy *pObjectX = (JCHardwarePixelBufferProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_readData_ev_size_t_ev_size_t_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"readData_ev_size_t_ev_size_t_void_callback", "(JJJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwarePixelBuffer_readData_1ev_1size_1t_1ev_1size_1t_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong offset_j, jlong length_j, jlong pDest_j)
			{
				ev_size_t offset = (ev_size_t) offset_j;
				ev_size_t length = (ev_size_t) length_j;
				void *pDest = (void*) pDest_j;
				EarthView::World::Graphic::CHardwarePixelBuffer *pObjectX = (EarthView::World::Graphic::CHardwarePixelBuffer*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CHardwarePixelBuffer::readData(offset, length, pDest);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwarePixelBuffer_writeData_1ev_1size_1t_1ev_1size_1t_1void_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong offset_j, jlong length_j, jlong pSource_j, jboolean discardWholeBuffer_j)
			{
				ev_size_t offset = (ev_size_t) offset_j;
				ev_size_t length = (ev_size_t) length_j;
				const void *pSource = (const void*) pSource_j;
				ev_bool discardWholeBuffer = (ev_bool) discardWholeBuffer_j;
				EarthView::World::Graphic::CHardwarePixelBuffer *pObjectX = (EarthView::World::Graphic::CHardwarePixelBuffer*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCHardwarePixelBufferProxy))
				{
					pObjectX->EarthView::World::Graphic::CHardwarePixelBuffer::writeData(offset, length, pSource, discardWholeBuffer);
				}
				else
				{
					pObjectX->writeData(offset, length, pSource, discardWholeBuffer);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwarePixelBuffer_register_1writeData_1ev_1size_1t_1ev_1size_1t_1void_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHardwarePixelBufferProxy *pObjectX = (JCHardwarePixelBufferProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_writeData_ev_size_t_ev_size_t_void_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"writeData_ev_size_t_ev_size_t_void_ev_bool_callback", "(JJJZ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwarePixelBuffer_writeData_1ev_1size_1t_1ev_1size_1t_1void_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong offset_j, jlong length_j, jlong pSource_j, jboolean discardWholeBuffer_j)
			{
				ev_size_t offset = (ev_size_t) offset_j;
				ev_size_t length = (ev_size_t) length_j;
				const void *pSource = (const void*) pSource_j;
				ev_bool discardWholeBuffer = (ev_bool) discardWholeBuffer_j;
				EarthView::World::Graphic::CHardwarePixelBuffer *pObjectX = (EarthView::World::Graphic::CHardwarePixelBuffer*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CHardwarePixelBuffer::writeData(offset, length, pSource, discardWholeBuffer);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwarePixelBuffer_writeData_1ev_1size_1t_1ev_1size_1t_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong offset_j, jlong length_j, jlong pSource_j)
			{
				ev_size_t offset = (ev_size_t) offset_j;
				ev_size_t length = (ev_size_t) length_j;
				const void *pSource = (const void*) pSource_j;
				EarthView::World::Graphic::CHardwarePixelBuffer *pObjectX = (EarthView::World::Graphic::CHardwarePixelBuffer*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCHardwarePixelBufferProxy))
				{
					pObjectX->EarthView::World::Graphic::CHardwarePixelBuffer::writeData(offset, length, pSource);
				}
				else
				{
					pObjectX->writeData(offset, length, pSource);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwarePixelBuffer_register_1writeData_1ev_1size_1t_1ev_1size_1t_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHardwarePixelBufferProxy *pObjectX = (JCHardwarePixelBufferProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_writeData_ev_size_t_ev_size_t_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"writeData_ev_size_t_ev_size_t_void_callback", "(JJJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwarePixelBuffer_writeData_1ev_1size_1t_1ev_1size_1t_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong offset_j, jlong length_j, jlong pSource_j)
			{
				ev_size_t offset = (ev_size_t) offset_j;
				ev_size_t length = (ev_size_t) length_j;
				const void *pSource = (const void*) pSource_j;
				EarthView::World::Graphic::CHardwarePixelBuffer *pObjectX = (EarthView::World::Graphic::CHardwarePixelBuffer*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CHardwarePixelBuffer::writeData(offset, length, pSource);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwarePixelBuffer_blit_1CHardwarePixelBufferSharedPtr_1Box_1Box(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong src_j, jlong srcBox_j, jlong dstBox_j)
			{
				const EarthView::World::Graphic::CHardwarePixelBufferSharedPtr &src = *(EarthView::World::Graphic::CHardwarePixelBufferSharedPtr*) src_j;
				const EarthView::World::Graphic::Box &srcBox = *(EarthView::World::Graphic::Box*) srcBox_j;
				const EarthView::World::Graphic::Box &dstBox = *(EarthView::World::Graphic::Box*) dstBox_j;
				EarthView::World::Graphic::CHardwarePixelBuffer *pObjectX = (EarthView::World::Graphic::CHardwarePixelBuffer*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCHardwarePixelBufferProxy))
				{
					pObjectX->EarthView::World::Graphic::CHardwarePixelBuffer::blit(src, srcBox, dstBox);
				}
				else
				{
					pObjectX->blit(src, srcBox, dstBox);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwarePixelBuffer_register_1blit_1CHardwarePixelBufferSharedPtr_1Box_1Box(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHardwarePixelBufferProxy *pObjectX = (JCHardwarePixelBufferProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_blit_CHardwarePixelBufferSharedPtr_Box_Box_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"blit_CHardwarePixelBufferSharedPtr_Box_Box_callback", "(JJJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwarePixelBuffer_blit_1CHardwarePixelBufferSharedPtr_1Box_1Box_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong src_j, jlong srcBox_j, jlong dstBox_j)
			{
				const EarthView::World::Graphic::CHardwarePixelBufferSharedPtr &src = *(EarthView::World::Graphic::CHardwarePixelBufferSharedPtr*) src_j;
				const EarthView::World::Graphic::Box &srcBox = *(EarthView::World::Graphic::Box*) srcBox_j;
				const EarthView::World::Graphic::Box &dstBox = *(EarthView::World::Graphic::Box*) dstBox_j;
				EarthView::World::Graphic::CHardwarePixelBuffer *pObjectX = (EarthView::World::Graphic::CHardwarePixelBuffer*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CHardwarePixelBuffer::blit(src, srcBox, dstBox);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwarePixelBuffer_blit_1CHardwarePixelBufferSharedPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong src_j)
			{
				const EarthView::World::Graphic::CHardwarePixelBufferSharedPtr &src = *(EarthView::World::Graphic::CHardwarePixelBufferSharedPtr*) src_j;
				EarthView::World::Graphic::CHardwarePixelBuffer *pObjectX = (EarthView::World::Graphic::CHardwarePixelBuffer*) pObjXXXX;
				pObjectX->blit(src);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwarePixelBuffer_blitFromMemory_1CPixelBox_1Box(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong src_j, jlong dstBox_j)
			{
				const EarthView::World::Graphic::CPixelBox &src = *(EarthView::World::Graphic::CPixelBox*) src_j;
				const EarthView::World::Graphic::Box &dstBox = *(EarthView::World::Graphic::Box*) dstBox_j;
				EarthView::World::Graphic::CHardwarePixelBuffer *pObjectX = (EarthView::World::Graphic::CHardwarePixelBuffer*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCHardwarePixelBufferProxy))
				{
					pObjectX->EarthView::World::Graphic::CHardwarePixelBuffer::blitFromMemory(src, dstBox);
				}
				else
				{
					pObjectX->blitFromMemory(src, dstBox);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwarePixelBuffer_register_1blitFromMemory_1CPixelBox_1Box(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHardwarePixelBufferProxy *pObjectX = (JCHardwarePixelBufferProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_blitFromMemory_CPixelBox_Box_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"blitFromMemory_CPixelBox_Box_callback", "(JJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwarePixelBuffer_blitFromMemory_1CPixelBox_1Box_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong src_j, jlong dstBox_j)
			{
				const EarthView::World::Graphic::CPixelBox &src = *(EarthView::World::Graphic::CPixelBox*) src_j;
				const EarthView::World::Graphic::Box &dstBox = *(EarthView::World::Graphic::Box*) dstBox_j;
				EarthView::World::Graphic::CHardwarePixelBuffer *pObjectX = (EarthView::World::Graphic::CHardwarePixelBuffer*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CHardwarePixelBuffer::blitFromMemory(src, dstBox);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwarePixelBuffer_blitFromMemory_1CPixelBox(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong src_j)
			{
				const EarthView::World::Graphic::CPixelBox &src = *(EarthView::World::Graphic::CPixelBox*) src_j;
				EarthView::World::Graphic::CHardwarePixelBuffer *pObjectX = (EarthView::World::Graphic::CHardwarePixelBuffer*) pObjXXXX;
				pObjectX->blitFromMemory(src);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwarePixelBuffer_blitToMemory_1Box_1CPixelBox(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong srcBox_j, jlong dst_j)
			{
				const EarthView::World::Graphic::Box &srcBox = *(EarthView::World::Graphic::Box*) srcBox_j;
				const EarthView::World::Graphic::CPixelBox &dst = *(EarthView::World::Graphic::CPixelBox*) dst_j;
				EarthView::World::Graphic::CHardwarePixelBuffer *pObjectX = (EarthView::World::Graphic::CHardwarePixelBuffer*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCHardwarePixelBufferProxy))
				{
					pObjectX->EarthView::World::Graphic::CHardwarePixelBuffer::blitToMemory(srcBox, dst);
				}
				else
				{
					pObjectX->blitToMemory(srcBox, dst);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwarePixelBuffer_register_1blitToMemory_1Box_1CPixelBox(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHardwarePixelBufferProxy *pObjectX = (JCHardwarePixelBufferProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_blitToMemory_Box_CPixelBox_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"blitToMemory_Box_CPixelBox_callback", "(JJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwarePixelBuffer_blitToMemory_1Box_1CPixelBox_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong srcBox_j, jlong dst_j)
			{
				const EarthView::World::Graphic::Box &srcBox = *(EarthView::World::Graphic::Box*) srcBox_j;
				const EarthView::World::Graphic::CPixelBox &dst = *(EarthView::World::Graphic::CPixelBox*) dst_j;
				EarthView::World::Graphic::CHardwarePixelBuffer *pObjectX = (EarthView::World::Graphic::CHardwarePixelBuffer*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CHardwarePixelBuffer::blitToMemory(srcBox, dst);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwarePixelBuffer_blitToMemory_1CPixelBox(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong dst_j)
			{
				const EarthView::World::Graphic::CPixelBox &dst = *(EarthView::World::Graphic::CPixelBox*) dst_j;
				EarthView::World::Graphic::CHardwarePixelBuffer *pObjectX = (EarthView::World::Graphic::CHardwarePixelBuffer*) pObjXXXX;
				pObjectX->blitToMemory(dst);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_HardwarePixelBuffer_getRenderTarget_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong slice_j)
			{
				ev_size_t slice = (ev_size_t) slice_j;
				EarthView::World::Graphic::CHardwarePixelBuffer *pObjectX = (EarthView::World::Graphic::CHardwarePixelBuffer*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCHardwarePixelBufferProxy))
				{
					EarthView::World::Graphic::CRenderTexture* __values1 = pObjectX->EarthView::World::Graphic::CHardwarePixelBuffer::getRenderTarget(slice);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CRenderTexture* __values1 = pObjectX->getRenderTarget(slice);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwarePixelBuffer_register_1getRenderTarget_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHardwarePixelBufferProxy *pObjectX = (JCHardwarePixelBufferProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getRenderTarget_ev_size_t_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getRenderTarget_ev_size_t_callback", "(J)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_HardwarePixelBuffer_getRenderTarget_1ev_1size_1t_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong slice_j)
			{
				ev_size_t slice = (ev_size_t) slice_j;
				EarthView::World::Graphic::CHardwarePixelBuffer *pObjectX = (EarthView::World::Graphic::CHardwarePixelBuffer*) pObjXXXX;
				EarthView::World::Graphic::CRenderTexture* __values1 = pObjectX->EarthView::World::Graphic::CHardwarePixelBuffer::getRenderTarget(slice);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_HardwarePixelBuffer_getRenderTarget_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CHardwarePixelBuffer *pObjectX = (EarthView::World::Graphic::CHardwarePixelBuffer*) pObjXXXX;
				EarthView::World::Graphic::CRenderTexture* __values1 = pObjectX->getRenderTarget();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_HardwarePixelBuffer_getWidth_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CHardwarePixelBuffer *pObjectX = (EarthView::World::Graphic::CHardwarePixelBuffer*) pObjXXXX;
				ev_size_t __values1 = pObjectX->getWidth();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_HardwarePixelBuffer_getHeight_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CHardwarePixelBuffer *pObjectX = (EarthView::World::Graphic::CHardwarePixelBuffer*) pObjXXXX;
				ev_size_t __values1 = pObjectX->getHeight();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_HardwarePixelBuffer_getDepth_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CHardwarePixelBuffer *pObjectX = (EarthView::World::Graphic::CHardwarePixelBuffer*) pObjXXXX;
				ev_size_t __values1 = pObjectX->getDepth();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_HardwarePixelBuffer_getFormat_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CHardwarePixelBuffer *pObjectX = (EarthView::World::Graphic::CHardwarePixelBuffer*) pObjXXXX;
				EarthView::World::Graphic::PixelFormat __values1 = pObjectX->getFormat();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwarePixelBuffer_register_1unlockImpl_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHardwarePixelBufferProxy *pObjectX = (JCHardwarePixelBufferProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_unlockImpl_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"unlockImpl_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwarePixelBuffer_register_1unlock_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHardwarePixelBufferProxy *pObjectX = (JCHardwarePixelBufferProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_unlock_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"unlock_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwarePixelBuffer_register_1copyData_1CHardwareBuffer_1ev_1size_1t_1ev_1size_1t_1ev_1size_1t_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHardwarePixelBufferProxy *pObjectX = (JCHardwarePixelBufferProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_copyData_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"copyData_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool_callback", "(JJJJZ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwarePixelBuffer_register_1copyData_1CHardwareBuffer_1ev_1size_1t_1ev_1size_1t_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHardwarePixelBufferProxy *pObjectX = (JCHardwarePixelBufferProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_copyData_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"copyData_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_callback", "(JJJJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwarePixelBuffer_register_1copyData_1CHardwareBuffer(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHardwarePixelBufferProxy *pObjectX = (JCHardwarePixelBufferProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_copyData_CHardwareBuffer_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"copyData_CHardwareBuffer_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwarePixelBuffer_register_1_1updateFromShadow_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHardwarePixelBufferProxy *pObjectX = (JCHardwarePixelBufferProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__updateFromShadow_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_updateFromShadow_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_HardwarePixelBufferSharedPtr_get_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CHardwarePixelBufferSharedPtr *pObjectX = (EarthView::World::Graphic::CHardwarePixelBufferSharedPtr*) pObjXXXX;
				EarthView::World::Graphic::CHardwarePixelBuffer* __values1 = pObjectX->get();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
		}
	}
}
