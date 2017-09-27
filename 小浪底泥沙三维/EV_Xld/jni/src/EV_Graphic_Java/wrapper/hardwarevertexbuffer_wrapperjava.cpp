/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/hardwarevertexbuffer.h"
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
			class JCHardwareVertexBufferProxy : public EarthView::World::Graphic::CHardwareVertexBuffer
			{
			 private:
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
				JCHardwareVertexBufferProxy(EarthView::World::Core::CNameValuePairList *pList) : CHardwareVertexBuffer(pList)
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
						return this->CHardwareVertexBuffer::lockImpl(offset, length, options);
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
						return this->CHardwareVertexBuffer::unlockImpl();
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
						return this->CHardwareVertexBuffer::readData(offset, length, pDest);
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
						return this->CHardwareVertexBuffer::writeData(offset, length, pSource, discardWholeBuffer);
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
						return this->CHardwareVertexBuffer::writeData(offset, length, pSource);
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
						return this->CHardwareVertexBuffer::lock(offset, length, options);
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
						return this->CHardwareVertexBuffer::unlock();
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
						return this->CHardwareVertexBuffer::copyData(srcBuffer, srcOffset, dstOffset, length, discardWholeBuffer);
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
						return this->CHardwareVertexBuffer::copyData(srcBuffer, srcOffset, dstOffset, length);
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
						return this->CHardwareVertexBuffer::copyData(srcBuffer);
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
						return this->CHardwareVertexBuffer::_updateFromShadow();
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCHardwareVertexBufferProxy);
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_HardwareVertexBuffer_lockImpl_1ev_1size_1t_1ev_1size_1t_1LockOptions(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong offset_j, jlong length_j, jint options_j)
			{
				ev_size_t offset = (ev_size_t) offset_j;
				ev_size_t length = (ev_size_t) length_j;
				EarthView::World::Graphic::CHardwareBuffer::LockOptions options = (EarthView::World::Graphic::CHardwareBuffer::LockOptions) options_j;
				EarthView::World::Graphic::CHardwareVertexBuffer *pObjectX = (EarthView::World::Graphic::CHardwareVertexBuffer*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCHardwareVertexBufferProxy))
				{
					void* __values1 = pObjectX->EarthView::World::Graphic::CHardwareVertexBuffer::lockImpl(offset, length, options);
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareVertexBuffer_register_1lockImpl_1ev_1size_1t_1ev_1size_1t_1LockOptions(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHardwareVertexBufferProxy *pObjectX = (JCHardwareVertexBufferProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_HardwareVertexBuffer_lockImpl_1ev_1size_1t_1ev_1size_1t_1LockOptions_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong offset_j, jlong length_j, jint options_j)
			{
				ev_size_t offset = (ev_size_t) offset_j;
				ev_size_t length = (ev_size_t) length_j;
				EarthView::World::Graphic::CHardwareBuffer::LockOptions options = (EarthView::World::Graphic::CHardwareBuffer::LockOptions) options_j;
				EarthView::World::Graphic::CHardwareVertexBuffer *pObjectX = (EarthView::World::Graphic::CHardwareVertexBuffer*) pObjXXXX;
				void* __values1 = pObjectX->EarthView::World::Graphic::CHardwareVertexBuffer::lockImpl(offset, length, options);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareVertexBuffer_unlockImpl_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CHardwareVertexBuffer *pObjectX = (EarthView::World::Graphic::CHardwareVertexBuffer*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCHardwareVertexBufferProxy))
				{
					pObjectX->EarthView::World::Graphic::CHardwareVertexBuffer::unlockImpl();
				}
				else
				{
					pObjectX->unlockImpl();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareVertexBuffer_register_1unlockImpl_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHardwareVertexBufferProxy *pObjectX = (JCHardwareVertexBufferProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareVertexBuffer_unlockImpl_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CHardwareVertexBuffer *pObjectX = (EarthView::World::Graphic::CHardwareVertexBuffer*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CHardwareVertexBuffer::unlockImpl();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareVertexBuffer_readData_1ev_1size_1t_1ev_1size_1t_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong offset_j, jlong length_j, jlong pDest_j)
			{
				ev_size_t offset = (ev_size_t) offset_j;
				ev_size_t length = (ev_size_t) length_j;
				void *pDest = (void*) pDest_j;
				EarthView::World::Graphic::CHardwareVertexBuffer *pObjectX = (EarthView::World::Graphic::CHardwareVertexBuffer*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCHardwareVertexBufferProxy))
				{
					pObjectX->EarthView::World::Graphic::CHardwareVertexBuffer::readData(offset, length, pDest);
				}
				else
				{
					pObjectX->readData(offset, length, pDest);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareVertexBuffer_register_1readData_1ev_1size_1t_1ev_1size_1t_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHardwareVertexBufferProxy *pObjectX = (JCHardwareVertexBufferProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareVertexBuffer_readData_1ev_1size_1t_1ev_1size_1t_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong offset_j, jlong length_j, jlong pDest_j)
			{
				ev_size_t offset = (ev_size_t) offset_j;
				ev_size_t length = (ev_size_t) length_j;
				void *pDest = (void*) pDest_j;
				EarthView::World::Graphic::CHardwareVertexBuffer *pObjectX = (EarthView::World::Graphic::CHardwareVertexBuffer*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CHardwareVertexBuffer::readData(offset, length, pDest);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareVertexBuffer_writeData_1ev_1size_1t_1ev_1size_1t_1void_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong offset_j, jlong length_j, jlong pSource_j, jboolean discardWholeBuffer_j)
			{
				ev_size_t offset = (ev_size_t) offset_j;
				ev_size_t length = (ev_size_t) length_j;
				const void *pSource = (const void*) pSource_j;
				ev_bool discardWholeBuffer = (ev_bool) discardWholeBuffer_j;
				EarthView::World::Graphic::CHardwareVertexBuffer *pObjectX = (EarthView::World::Graphic::CHardwareVertexBuffer*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCHardwareVertexBufferProxy))
				{
					pObjectX->EarthView::World::Graphic::CHardwareVertexBuffer::writeData(offset, length, pSource, discardWholeBuffer);
				}
				else
				{
					pObjectX->writeData(offset, length, pSource, discardWholeBuffer);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareVertexBuffer_register_1writeData_1ev_1size_1t_1ev_1size_1t_1void_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHardwareVertexBufferProxy *pObjectX = (JCHardwareVertexBufferProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareVertexBuffer_writeData_1ev_1size_1t_1ev_1size_1t_1void_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong offset_j, jlong length_j, jlong pSource_j, jboolean discardWholeBuffer_j)
			{
				ev_size_t offset = (ev_size_t) offset_j;
				ev_size_t length = (ev_size_t) length_j;
				const void *pSource = (const void*) pSource_j;
				ev_bool discardWholeBuffer = (ev_bool) discardWholeBuffer_j;
				EarthView::World::Graphic::CHardwareVertexBuffer *pObjectX = (EarthView::World::Graphic::CHardwareVertexBuffer*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CHardwareVertexBuffer::writeData(offset, length, pSource, discardWholeBuffer);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareVertexBuffer_writeData_1ev_1size_1t_1ev_1size_1t_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong offset_j, jlong length_j, jlong pSource_j)
			{
				ev_size_t offset = (ev_size_t) offset_j;
				ev_size_t length = (ev_size_t) length_j;
				const void *pSource = (const void*) pSource_j;
				EarthView::World::Graphic::CHardwareVertexBuffer *pObjectX = (EarthView::World::Graphic::CHardwareVertexBuffer*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCHardwareVertexBufferProxy))
				{
					pObjectX->EarthView::World::Graphic::CHardwareVertexBuffer::writeData(offset, length, pSource);
				}
				else
				{
					pObjectX->writeData(offset, length, pSource);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareVertexBuffer_register_1writeData_1ev_1size_1t_1ev_1size_1t_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHardwareVertexBufferProxy *pObjectX = (JCHardwareVertexBufferProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareVertexBuffer_writeData_1ev_1size_1t_1ev_1size_1t_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong offset_j, jlong length_j, jlong pSource_j)
			{
				ev_size_t offset = (ev_size_t) offset_j;
				ev_size_t length = (ev_size_t) length_j;
				const void *pSource = (const void*) pSource_j;
				EarthView::World::Graphic::CHardwareVertexBuffer *pObjectX = (EarthView::World::Graphic::CHardwareVertexBuffer*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CHardwareVertexBuffer::writeData(offset, length, pSource);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_HardwareVertexBuffer_getManager_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CHardwareVertexBuffer *pObjectX = (EarthView::World::Graphic::CHardwareVertexBuffer*) pObjXXXX;
				EarthView::World::Graphic::CHardwareBufferManagerBase* __values1 = pObjectX->getManager();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_HardwareVertexBuffer_getVertexSize_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CHardwareVertexBuffer *pObjectX = (EarthView::World::Graphic::CHardwareVertexBuffer*) pObjXXXX;
				ev_size_t __values1 = pObjectX->getVertexSize();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_HardwareVertexBuffer_getNumVertices_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CHardwareVertexBuffer *pObjectX = (EarthView::World::Graphic::CHardwareVertexBuffer*) pObjXXXX;
				ev_size_t __values1 = pObjectX->getNumVertices();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_HardwareVertexBuffer_getIsInstanceData_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CHardwareVertexBuffer *pObjectX = (EarthView::World::Graphic::CHardwareVertexBuffer*) pObjXXXX;
				bool __values1 = pObjectX->getIsInstanceData();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareVertexBuffer_setIsInstanceData_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean val_j)
			{
				const bool val = (bool) val_j;
				EarthView::World::Graphic::CHardwareVertexBuffer *pObjectX = (EarthView::World::Graphic::CHardwareVertexBuffer*) pObjXXXX;
				pObjectX->setIsInstanceData(val);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_HardwareVertexBuffer_getInstanceDataStepRate_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CHardwareVertexBuffer *pObjectX = (EarthView::World::Graphic::CHardwareVertexBuffer*) pObjXXXX;
				size_t __values1 = pObjectX->getInstanceDataStepRate();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareVertexBuffer_setInstanceDataStepRate_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong val_j)
			{
				const size_t val = (size_t) val_j;
				EarthView::World::Graphic::CHardwareVertexBuffer *pObjectX = (EarthView::World::Graphic::CHardwareVertexBuffer*) pObjXXXX;
				pObjectX->setInstanceDataStepRate(val);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareVertexBuffer_register_1lock_1ev_1size_1t_1ev_1size_1t_1LockOptions(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHardwareVertexBufferProxy *pObjectX = (JCHardwareVertexBufferProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareVertexBuffer_register_1unlock_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHardwareVertexBufferProxy *pObjectX = (JCHardwareVertexBufferProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareVertexBuffer_register_1copyData_1CHardwareBuffer_1ev_1size_1t_1ev_1size_1t_1ev_1size_1t_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHardwareVertexBufferProxy *pObjectX = (JCHardwareVertexBufferProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareVertexBuffer_register_1copyData_1CHardwareBuffer_1ev_1size_1t_1ev_1size_1t_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHardwareVertexBufferProxy *pObjectX = (JCHardwareVertexBufferProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareVertexBuffer_register_1copyData_1CHardwareBuffer(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHardwareVertexBufferProxy *pObjectX = (JCHardwareVertexBufferProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareVertexBuffer_register_1_1updateFromShadow_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHardwareVertexBufferProxy *pObjectX = (JCHardwareVertexBufferProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_HardwareVertexBufferSharedPtr_get_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CHardwareVertexBufferSharedPtr *pObjectX = (EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*) pObjXXXX;
				EarthView::World::Graphic::CHardwareVertexBuffer* __values1 = pObjectX->get();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_graphic_VertexElementSemanticHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					VES_POSITION,
					VES_BLEND_WEIGHTS,
					VES_BLEND_INDICES,
					VES_NORMAL,
					VES_DIFFUSE,
					VES_SPECULAR,
					VES_TEXTURE_COORDINATES,
					VES_BINORMAL,
					VES_TANGENT,
					VES_COUNT
				};
				jintArray array = __env->NewIntArray(10);
				__env->SetIntArrayRegion(array, 0, 10, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_graphic_VertexElementTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					VET_FLOAT1,
					VET_FLOAT2,
					VET_FLOAT3,
					VET_FLOAT4,
					VET_COLOUR,
					VET_SHORT1,
					VET_SHORT2,
					VET_SHORT3,
					VET_SHORT4,
					VET_UBYTE4,
					VET_COLOUR_ARGB,
					VET_COLOUR_ABGR
				};
				jintArray array = __env->NewIntArray(12);
				__env->SetIntArrayRegion(array, 0, 12, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_VertexElement_getSource_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CVertexElement *pObjectX = (EarthView::World::Graphic::CVertexElement*) pObjXXXX;
				ev_uint16 __values1 = pObjectX->getSource();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_VertexElement_getOffset_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CVertexElement *pObjectX = (EarthView::World::Graphic::CVertexElement*) pObjXXXX;
				ev_size_t __values1 = pObjectX->getOffset();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_VertexElement_getType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CVertexElement *pObjectX = (EarthView::World::Graphic::CVertexElement*) pObjXXXX;
				EarthView::World::Graphic::VertexElementType __values1 = pObjectX->getType();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_VertexElement_getSemantic_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CVertexElement *pObjectX = (EarthView::World::Graphic::CVertexElement*) pObjXXXX;
				EarthView::World::Graphic::VertexElementSemantic __values1 = pObjectX->getSemantic();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_VertexElement_getIndex_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CVertexElement *pObjectX = (EarthView::World::Graphic::CVertexElement*) pObjXXXX;
				ev_uint16 __values1 = pObjectX->getIndex();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_VertexElement_getSize_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CVertexElement *pObjectX = (EarthView::World::Graphic::CVertexElement*) pObjXXXX;
				ev_size_t __values1 = pObjectX->getSize();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_VertexElement_getTypeSize_1VertexElementType(JNIEnv *__env , jclass __clazz, jint etype_j)
			{
				EarthView::World::Graphic::VertexElementType etype = (EarthView::World::Graphic::VertexElementType) etype_j;
				ev_size_t __values1 = EarthView::World::Graphic::CVertexElement::getTypeSize(etype);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_VertexElement_getTypeCount_1VertexElementType(JNIEnv *__env , jclass __clazz, jint etype_j)
			{
				EarthView::World::Graphic::VertexElementType etype = (EarthView::World::Graphic::VertexElementType) etype_j;
				ev_uint16 __values1 = EarthView::World::Graphic::CVertexElement::getTypeCount(etype);
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_VertexElement_multiplyTypeCount_1VertexElementType_1ev_1uint16(JNIEnv *__env , jclass __clazz, jint baseType_j, jint count_j)
			{
				EarthView::World::Graphic::VertexElementType baseType = (EarthView::World::Graphic::VertexElementType) baseType_j;
				ev_uint16 count = (ev_uint16) count_j;
				EarthView::World::Graphic::VertexElementType __values1 = EarthView::World::Graphic::CVertexElement::multiplyTypeCount(baseType, count);
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_VertexElement_getBaseType_1VertexElementType(JNIEnv *__env , jclass __clazz, jint multiType_j)
			{
				EarthView::World::Graphic::VertexElementType multiType = (EarthView::World::Graphic::VertexElementType) multiType_j;
				EarthView::World::Graphic::VertexElementType __values1 = EarthView::World::Graphic::CVertexElement::getBaseType(multiType);
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexElement_convertColourValue_1VertexElementType_1VertexElementType_1ev_1uint32(JNIEnv *__env , jclass __clazz, jint srcType_j, jint dstType_j, jlong ptr_j)
			{
				EarthView::World::Graphic::VertexElementType srcType = (EarthView::World::Graphic::VertexElementType) srcType_j;
				EarthView::World::Graphic::VertexElementType dstType = (EarthView::World::Graphic::VertexElementType) dstType_j;
				ev_uint32 *ptr = (ev_uint32*) ptr_j;
				EarthView::World::Graphic::CVertexElement::convertColourValue(srcType, dstType, ptr);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_VertexElement_convertColourValue_1CColourValue_1VertexElementType(JNIEnv *__env , jclass __clazz, jlong src_j, jint dst_j)
			{
				const EarthView::World::Graphic::CColourValue &src = *(EarthView::World::Graphic::CColourValue*) src_j;
				EarthView::World::Graphic::VertexElementType dst = (EarthView::World::Graphic::VertexElementType) dst_j;
				ev_uint32 __values1 = EarthView::World::Graphic::CVertexElement::convertColourValue(src, dst);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_VertexElement_toColourValue_1ev_1uint32_1VertexElementType(JNIEnv *__env , jclass __clazz, jlong color_j, jint dst_j)
			{
				ev_uint32 color = (ev_uint32) color_j;
				EarthView::World::Graphic::VertexElementType dst = (EarthView::World::Graphic::VertexElementType) dst_j;
				EarthView::World::Graphic::CColourValue __values1 = EarthView::World::Graphic::CVertexElement::toColourValue(color, dst);
				EarthView::World::Graphic::CColourValue *returnvalues = new EarthView::World::Graphic::CColourValue(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_VertexElement_getBestColourVertexElementType_1void(JNIEnv *__env , jclass __clazz)
			{
				EarthView::World::Graphic::VertexElementType __values1 = EarthView::World::Graphic::CVertexElement::getBestColourVertexElementType();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_VertexElement_OperatorEquals_1CVertexElement(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rhs_j )
			{
				EarthView::World::Graphic::CVertexElement& pObjectX = *(EarthView::World::Graphic::CVertexElement*) pObjXXXX;
				const EarthView::World::Graphic::CVertexElement &rhs = *(EarthView::World::Graphic::CVertexElement*) rhs_j;
				ev_bool __values1 = (pObjectX == rhs);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_VertexElement_OperatorNotEquals_1CVertexElement(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rhs_j )
			{
				EarthView::World::Graphic::CVertexElement& pObjectX = *(EarthView::World::Graphic::CVertexElement*) pObjXXXX;
				const EarthView::World::Graphic::CVertexElement &rhs = *(EarthView::World::Graphic::CVertexElement*) rhs_j;
				ev_bool __values1 = (pObjectX != rhs);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexElement_baseVertexPointerToElement_1void_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pBase_j, jlong pElem_j)
			{
				void *pBase = (void*) pBase_j;
				void **pElem = (void**) pElem_j;
				const 				EarthView::World::Graphic::CVertexElement *pObjectX = (EarthView::World::Graphic::CVertexElement*) pObjXXXX;
				pObjectX->baseVertexPointerToElement(pBase, pElem);
			}
			class JCVertexDeclarationProxy : public EarthView::World::Graphic::CVertexDeclaration
			{
			 private:
				EarthView::World::Core::ev_string m_addElement_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_ev_uint16_callback;
				EarthView::World::Core::ev_string m_addElement_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_callback;
				EarthView::World::Core::ev_string m_insertElement_ev_uint16_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_ev_uint16_callback;
				EarthView::World::Core::ev_string m_insertElement_ev_uint16_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_callback;
				EarthView::World::Core::ev_string m_removeElement_ev_uint16_callback;
				EarthView::World::Core::ev_string m_removeElement_VertexElementSemantic_ev_uint16_callback;
				EarthView::World::Core::ev_string m_removeElement_VertexElementSemantic_callback;
				EarthView::World::Core::ev_string m_removeAllElements_void_callback;
				EarthView::World::Core::ev_string m_modifyElement_ev_uint16_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_ev_uint16_callback;
				EarthView::World::Core::ev_string m_modifyElement_ev_uint16_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_callback;
				EarthView::World::Core::ev_string m_findElementBySemantic_VertexElementSemantic_ev_uint16_callback;
				EarthView::World::Core::ev_string m_findElementBySemantic_VertexElementSemantic_callback;
				EarthView::World::Core::ev_string m_findElementsBySource_ev_uint16_callback;
				EarthView::World::Core::ev_string m_getVertexSize_ev_uint16_callback;
				EarthView::World::Core::ev_string m_getNextFreeTextureCoordinate_void_callback;
				EarthView::World::Core::ev_string m_ev_clone_CHardwareBufferManagerBase_callback;
				EarthView::World::Core::ev_string m_ev_clone_void_callback;
			public:
				JCVertexDeclarationProxy(EarthView::World::Core::CNameValuePairList *pList) : CVertexDeclaration(pList)
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
				void register_addElement_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_ev_uint16_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_addElement_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_ev_uint16_callback = __method;
				}
				void register_addElement_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_addElement_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_callback = __method;
				}
				void register_insertElement_ev_uint16_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_ev_uint16_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_insertElement_ev_uint16_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_ev_uint16_callback = __method;
				}
				void register_insertElement_ev_uint16_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_insertElement_ev_uint16_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_callback = __method;
				}
				void register_removeElement_ev_uint16_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_removeElement_ev_uint16_callback = __method;
				}
				void register_removeElement_VertexElementSemantic_ev_uint16_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_removeElement_VertexElementSemantic_ev_uint16_callback = __method;
				}
				void register_removeElement_VertexElementSemantic_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_removeElement_VertexElementSemantic_callback = __method;
				}
				void register_removeAllElements_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_removeAllElements_void_callback = __method;
				}
				void register_modifyElement_ev_uint16_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_ev_uint16_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_modifyElement_ev_uint16_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_ev_uint16_callback = __method;
				}
				void register_modifyElement_ev_uint16_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_modifyElement_ev_uint16_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_callback = __method;
				}
				void register_findElementBySemantic_VertexElementSemantic_ev_uint16_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_findElementBySemantic_VertexElementSemantic_ev_uint16_callback = __method;
				}
				void register_findElementBySemantic_VertexElementSemantic_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_findElementBySemantic_VertexElementSemantic_callback = __method;
				}
				void register_findElementsBySource_ev_uint16_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_findElementsBySource_ev_uint16_callback = __method;
				}
				void register_getVertexSize_ev_uint16_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getVertexSize_ev_uint16_callback = __method;
				}
				void register_getNextFreeTextureCoordinate_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getNextFreeTextureCoordinate_void_callback = __method;
				}
				void register_ev_clone_CHardwareBufferManagerBase_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_ev_clone_CHardwareBufferManagerBase_callback = __method;
				}
				void register_ev_clone_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_ev_clone_void_callback = __method;
				}
				virtual const EarthView::World::Graphic::CVertexElement& addElement(ev_uint16 source, ev_size_t offset, EarthView::World::Graphic::VertexElementType theType, EarthView::World::Graphic::VertexElementSemantic semantic, ev_uint16 index)
				{
					if (this->_gRef != NULL && this->m_addElement_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_ev_uint16_callback != "" && this->isCustomExtend())
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
						jint source_j = (jint) source;
						jlong offset_j = (jlong) offset;
						jint theType_j = (jint) theType;
						jint semantic_j = (jint) semantic;
						jint index_j = (jint) index;
						jmethodID __method = __gr->getMethod("addElement_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_ev_uint16_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , source_j, offset_j, theType_j, semantic_j, index_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Graphic::CVertexElement &__values1 = *(const EarthView::World::Graphic::CVertexElement*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CVertexDeclaration::addElement(source, offset, theType, semantic, index);
					}
				}
				virtual const EarthView::World::Graphic::CVertexElement& addElement(ev_uint16 source, ev_size_t offset, EarthView::World::Graphic::VertexElementType theType, EarthView::World::Graphic::VertexElementSemantic semantic)
				{
					if (this->_gRef != NULL && this->m_addElement_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_callback != "" && this->isCustomExtend())
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
						jint source_j = (jint) source;
						jlong offset_j = (jlong) offset;
						jint theType_j = (jint) theType;
						jint semantic_j = (jint) semantic;
						jmethodID __method = __gr->getMethod("addElement_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , source_j, offset_j, theType_j, semantic_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Graphic::CVertexElement &__values1 = *(const EarthView::World::Graphic::CVertexElement*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CVertexDeclaration::addElement(source, offset, theType, semantic);
					}
				}
				virtual const EarthView::World::Graphic::CVertexElement& insertElement(ev_uint16 atPosition, ev_uint16 source, ev_size_t offset, EarthView::World::Graphic::VertexElementType theType, EarthView::World::Graphic::VertexElementSemantic semantic, ev_uint16 index)
				{
					if (this->_gRef != NULL && this->m_insertElement_ev_uint16_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_ev_uint16_callback != "" && this->isCustomExtend())
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
						jint atPosition_j = (jint) atPosition;
						jint source_j = (jint) source;
						jlong offset_j = (jlong) offset;
						jint theType_j = (jint) theType;
						jint semantic_j = (jint) semantic;
						jint index_j = (jint) index;
						jmethodID __method = __gr->getMethod("insertElement_ev_uint16_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_ev_uint16_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , atPosition_j, source_j, offset_j, theType_j, semantic_j, index_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Graphic::CVertexElement &__values1 = *(const EarthView::World::Graphic::CVertexElement*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CVertexDeclaration::insertElement(atPosition, source, offset, theType, semantic, index);
					}
				}
				virtual const EarthView::World::Graphic::CVertexElement& insertElement(ev_uint16 atPosition, ev_uint16 source, ev_size_t offset, EarthView::World::Graphic::VertexElementType theType, EarthView::World::Graphic::VertexElementSemantic semantic)
				{
					if (this->_gRef != NULL && this->m_insertElement_ev_uint16_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_callback != "" && this->isCustomExtend())
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
						jint atPosition_j = (jint) atPosition;
						jint source_j = (jint) source;
						jlong offset_j = (jlong) offset;
						jint theType_j = (jint) theType;
						jint semantic_j = (jint) semantic;
						jmethodID __method = __gr->getMethod("insertElement_ev_uint16_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , atPosition_j, source_j, offset_j, theType_j, semantic_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Graphic::CVertexElement &__values1 = *(const EarthView::World::Graphic::CVertexElement*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CVertexDeclaration::insertElement(atPosition, source, offset, theType, semantic);
					}
				}
				virtual void removeElement(ev_uint16 elem_index)
				{
					if (this->_gRef != NULL && this->m_removeElement_ev_uint16_callback != "" && this->isCustomExtend())
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
						jint elem_index_j = (jint) elem_index;
						jmethodID __method = __gr->getMethod("removeElement_ev_uint16_callback");
						__env->CallVoidMethod(__obj, __method , elem_index_j);
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
						return this->CVertexDeclaration::removeElement(elem_index);
					}
				}
				virtual void removeElement(EarthView::World::Graphic::VertexElementSemantic semantic, ev_uint16 index)
				{
					if (this->_gRef != NULL && this->m_removeElement_VertexElementSemantic_ev_uint16_callback != "" && this->isCustomExtend())
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
						jint semantic_j = (jint) semantic;
						jint index_j = (jint) index;
						jmethodID __method = __gr->getMethod("removeElement_VertexElementSemantic_ev_uint16_callback");
						__env->CallVoidMethod(__obj, __method , semantic_j, index_j);
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
						return this->CVertexDeclaration::removeElement(semantic, index);
					}
				}
				virtual void removeElement(EarthView::World::Graphic::VertexElementSemantic semantic)
				{
					if (this->_gRef != NULL && this->m_removeElement_VertexElementSemantic_callback != "" && this->isCustomExtend())
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
						jint semantic_j = (jint) semantic;
						jmethodID __method = __gr->getMethod("removeElement_VertexElementSemantic_callback");
						__env->CallVoidMethod(__obj, __method , semantic_j);
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
						return this->CVertexDeclaration::removeElement(semantic);
					}
				}
				virtual void removeAllElements()
				{
					if (this->_gRef != NULL && this->m_removeAllElements_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("removeAllElements_void_callback");
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
						return this->CVertexDeclaration::removeAllElements();
					}
				}
				virtual void modifyElement(ev_uint16 elem_index, ev_uint16 source, ev_size_t offset, EarthView::World::Graphic::VertexElementType theType, EarthView::World::Graphic::VertexElementSemantic semantic, ev_uint16 index)
				{
					if (this->_gRef != NULL && this->m_modifyElement_ev_uint16_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_ev_uint16_callback != "" && this->isCustomExtend())
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
						jint elem_index_j = (jint) elem_index;
						jint source_j = (jint) source;
						jlong offset_j = (jlong) offset;
						jint theType_j = (jint) theType;
						jint semantic_j = (jint) semantic;
						jint index_j = (jint) index;
						jmethodID __method = __gr->getMethod("modifyElement_ev_uint16_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_ev_uint16_callback");
						__env->CallVoidMethod(__obj, __method , elem_index_j, source_j, offset_j, theType_j, semantic_j, index_j);
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
						return this->CVertexDeclaration::modifyElement(elem_index, source, offset, theType, semantic, index);
					}
				}
				virtual void modifyElement(ev_uint16 elem_index, ev_uint16 source, ev_size_t offset, EarthView::World::Graphic::VertexElementType theType, EarthView::World::Graphic::VertexElementSemantic semantic)
				{
					if (this->_gRef != NULL && this->m_modifyElement_ev_uint16_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_callback != "" && this->isCustomExtend())
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
						jint elem_index_j = (jint) elem_index;
						jint source_j = (jint) source;
						jlong offset_j = (jlong) offset;
						jint theType_j = (jint) theType;
						jint semantic_j = (jint) semantic;
						jmethodID __method = __gr->getMethod("modifyElement_ev_uint16_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_callback");
						__env->CallVoidMethod(__obj, __method , elem_index_j, source_j, offset_j, theType_j, semantic_j);
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
						return this->CVertexDeclaration::modifyElement(elem_index, source, offset, theType, semantic);
					}
				}
				virtual const EarthView::World::Graphic::CVertexElement* findElementBySemantic(EarthView::World::Graphic::VertexElementSemantic sem, ev_uint16 index) const
				{
					if (this->_gRef != NULL && this->m_findElementBySemantic_VertexElementSemantic_ev_uint16_callback != "" && this->isCustomExtend())
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
						jint sem_j = (jint) sem;
						jint index_j = (jint) index;
						jmethodID __method = __gr->getMethod("findElementBySemantic_VertexElementSemantic_ev_uint16_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , sem_j, index_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Graphic::CVertexElement *__values1 = (const EarthView::World::Graphic::CVertexElement*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CVertexDeclaration::findElementBySemantic(sem, index);
					}
				}
				virtual const EarthView::World::Graphic::CVertexElement* findElementBySemantic(EarthView::World::Graphic::VertexElementSemantic sem) const
				{
					if (this->_gRef != NULL && this->m_findElementBySemantic_VertexElementSemantic_callback != "" && this->isCustomExtend())
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
						jint sem_j = (jint) sem;
						jmethodID __method = __gr->getMethod("findElementBySemantic_VertexElementSemantic_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , sem_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Graphic::CVertexElement *__values1 = (const EarthView::World::Graphic::CVertexElement*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CVertexDeclaration::findElementBySemantic(sem);
					}
				}
				virtual EarthView::World::Graphic::CVertexDeclaration::VertexElementList findElementsBySource(ev_uint16 source) const
				{
					if (this->_gRef != NULL && this->m_findElementsBySource_ev_uint16_callback != "" && this->isCustomExtend())
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
						jint source_j = (jint) source;
						jmethodID __method = __gr->getMethod("findElementsBySource_ev_uint16_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , source_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CVertexDeclaration::VertexElementList __values1 = *(EarthView::World::Graphic::CVertexDeclaration::VertexElementList*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CVertexDeclaration::findElementsBySource(source);
					}
				}
				virtual ev_size_t getVertexSize(ev_uint16 source) const
				{
					if (this->_gRef != NULL && this->m_getVertexSize_ev_uint16_callback != "" && this->isCustomExtend())
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
						jint source_j = (jint) source;
						jmethodID __method = __gr->getMethod("getVertexSize_ev_uint16_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , source_j);
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
						return this->CVertexDeclaration::getVertexSize(source);
					}
				}
				virtual ev_uint16 getNextFreeTextureCoordinate() const
				{
					if (this->_gRef != NULL && this->m_getNextFreeTextureCoordinate_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getNextFreeTextureCoordinate_void_callback");
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
						return this->CVertexDeclaration::getNextFreeTextureCoordinate();
					}
				}
				virtual EarthView::World::Graphic::CVertexDeclaration* clone(EarthView::World::Graphic::CHardwareBufferManagerBase* mgr) const
				{
					if (this->_gRef != NULL && this->m_ev_clone_CHardwareBufferManagerBase_callback != "" && this->isCustomExtend())
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
						jlong mgr_j = (jlong) mgr;
						jmethodID __method = __gr->getMethod("ev_clone_CHardwareBufferManagerBase_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , mgr_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CVertexDeclaration *__values1 = (EarthView::World::Graphic::CVertexDeclaration*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CVertexDeclaration::clone(mgr);
					}
				}
				virtual EarthView::World::Graphic::CVertexDeclaration* clone() const
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
						EarthView::World::Graphic::CVertexDeclaration *__values1 = (EarthView::World::Graphic::CVertexDeclaration*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CVertexDeclaration::clone();
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCVertexDeclarationProxy);
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexDeclaration_00024VertexElementList_push_1back_1CVertexElement(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
			{
				EarthView::World::Graphic::CVertexElement &t = *(EarthView::World::Graphic::CVertexElement*) t_j;
				EarthView::World::Graphic::CVertexDeclaration::VertexElementList *pObjectX = (EarthView::World::Graphic::CVertexDeclaration::VertexElementList*) pObjXXXX;
				pObjectX->push_back(t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexDeclaration_00024VertexElementList_push_1front_1CVertexElement(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
			{
				EarthView::World::Graphic::CVertexElement &t = *(EarthView::World::Graphic::CVertexElement*) t_j;
				EarthView::World::Graphic::CVertexDeclaration::VertexElementList *pObjectX = (EarthView::World::Graphic::CVertexDeclaration::VertexElementList*) pObjXXXX;
				pObjectX->push_front(t);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_VertexDeclaration_00024VertexElementList_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CVertexDeclaration::VertexElementList *pObjectX = (EarthView::World::Graphic::CVertexDeclaration::VertexElementList*) pObjXXXX;
				EarthView::World::Graphic::CVertexElement& __values1 = pObjectX->front();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_VertexDeclaration_00024VertexElementList_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CVertexDeclaration::VertexElementList *pObjectX = (EarthView::World::Graphic::CVertexDeclaration::VertexElementList*) pObjXXXX;
				EarthView::World::Graphic::CVertexElement& __values1 = pObjectX->back();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexDeclaration_00024VertexElementList_insert_1ev_1uint32_1CVertexElement(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong t_j)
			{
				ev_uint32 pos = (ev_uint32) pos_j;
				EarthView::World::Graphic::CVertexElement &t = *(EarthView::World::Graphic::CVertexElement*) t_j;
				EarthView::World::Graphic::CVertexDeclaration::VertexElementList *pObjectX = (EarthView::World::Graphic::CVertexDeclaration::VertexElementList*) pObjXXXX;
				pObjectX->insert(pos, t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexDeclaration_00024VertexElementList_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_size_t pos = (ev_size_t) pos_j;
				EarthView::World::Graphic::CVertexDeclaration::VertexElementList *pObjectX = (EarthView::World::Graphic::CVertexDeclaration::VertexElementList*) pObjXXXX;
				pObjectX->remove(pos);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_VertexDeclaration_00024VertexElementList_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CVertexDeclaration::VertexElementList *pObjectX = (EarthView::World::Graphic::CVertexDeclaration::VertexElementList*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_VertexDeclaration_00024VertexElementList_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CVertexDeclaration::VertexElementList *pObjectX = (EarthView::World::Graphic::CVertexDeclaration::VertexElementList*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexDeclaration_00024VertexElementList_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
			{
				ev_size_t newSize = (ev_size_t) newSize_j;
				EarthView::World::Graphic::CVertexDeclaration::VertexElementList *pObjectX = (EarthView::World::Graphic::CVertexDeclaration::VertexElementList*) pObjXXXX;
				pObjectX->resize(newSize);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexDeclaration_00024VertexElementList_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CVertexDeclaration::VertexElementList *pObjectX = (EarthView::World::Graphic::CVertexDeclaration::VertexElementList*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_VertexDeclaration_vertexElementLess_1CVertexElement_1CVertexElement(JNIEnv *__env , jclass __clazz, jlong e1_j, jlong e2_j)
			{
				const EarthView::World::Graphic::CVertexElement &e1 = *(EarthView::World::Graphic::CVertexElement*) e1_j;
				const EarthView::World::Graphic::CVertexElement &e2 = *(EarthView::World::Graphic::CVertexElement*) e2_j;
				ev_bool __values1 = EarthView::World::Graphic::CVertexDeclaration::vertexElementLess(e1, e2);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_VertexDeclaration_getElementCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CVertexDeclaration *pObjectX = (EarthView::World::Graphic::CVertexDeclaration*) pObjXXXX;
				ev_size_t __values1 = pObjectX->getElementCount();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_VertexDeclaration_getElements_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CVertexDeclaration *pObjectX = (EarthView::World::Graphic::CVertexDeclaration*) pObjXXXX;
				const EarthView::World::Graphic::CVertexDeclaration::VertexElementList& __values1 = pObjectX->getElements();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_VertexDeclaration_getElement_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint index_j)
			{
				ev_uint16 index = (ev_uint16) index_j;
				const 				EarthView::World::Graphic::CVertexDeclaration *pObjectX = (EarthView::World::Graphic::CVertexDeclaration*) pObjXXXX;
				const EarthView::World::Graphic::CVertexElement* __values1 = pObjectX->getElement(index);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexDeclaration_sort_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CVertexDeclaration *pObjectX = (EarthView::World::Graphic::CVertexDeclaration*) pObjXXXX;
				pObjectX->sort();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexDeclaration_closeGapsInSource_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CVertexDeclaration *pObjectX = (EarthView::World::Graphic::CVertexDeclaration*) pObjXXXX;
				pObjectX->closeGapsInSource();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_VertexDeclaration_getAutoOrganisedDeclaration_1ev_1bool_1ev_1bool_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean skeletalAnimation_j, jboolean vertexAnimation_j, jboolean vertexAnimationNormals_j)
			{
				ev_bool skeletalAnimation = (ev_bool) skeletalAnimation_j;
				ev_bool vertexAnimation = (ev_bool) vertexAnimation_j;
				bool vertexAnimationNormals = (bool) vertexAnimationNormals_j;
				const 				EarthView::World::Graphic::CVertexDeclaration *pObjectX = (EarthView::World::Graphic::CVertexDeclaration*) pObjXXXX;
				EarthView::World::Graphic::CVertexDeclaration* __values1 = pObjectX->getAutoOrganisedDeclaration(skeletalAnimation, vertexAnimation, vertexAnimationNormals);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_VertexDeclaration_getMaxSource_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CVertexDeclaration *pObjectX = (EarthView::World::Graphic::CVertexDeclaration*) pObjXXXX;
				ev_uint16 __values1 = pObjectX->getMaxSource();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_VertexDeclaration_addElement_1ev_1uint16_1ev_1size_1t_1VertexElementType_1VertexElementSemantic_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint source_j, jlong offset_j, jint theType_j, jint semantic_j, jint index_j)
			{
				ev_uint16 source = (ev_uint16) source_j;
				ev_size_t offset = (ev_size_t) offset_j;
				EarthView::World::Graphic::VertexElementType theType = (EarthView::World::Graphic::VertexElementType) theType_j;
				EarthView::World::Graphic::VertexElementSemantic semantic = (EarthView::World::Graphic::VertexElementSemantic) semantic_j;
				ev_uint16 index = (ev_uint16) index_j;
				EarthView::World::Graphic::CVertexDeclaration *pObjectX = (EarthView::World::Graphic::CVertexDeclaration*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCVertexDeclarationProxy))
				{
					const EarthView::World::Graphic::CVertexElement& __values1 = pObjectX->EarthView::World::Graphic::CVertexDeclaration::addElement(source, offset, theType, semantic, index);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				else
				{
					const EarthView::World::Graphic::CVertexElement& __values1 = pObjectX->addElement(source, offset, theType, semantic, index);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexDeclaration_register_1addElement_1ev_1uint16_1ev_1size_1t_1VertexElementType_1VertexElementSemantic_1ev_1uint16(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCVertexDeclarationProxy *pObjectX = (JCVertexDeclarationProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_addElement_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_ev_uint16_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"addElement_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_ev_uint16_callback", "(IJIII)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_VertexDeclaration_addElement_1ev_1uint16_1ev_1size_1t_1VertexElementType_1VertexElementSemantic_1ev_1uint16_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint source_j, jlong offset_j, jint theType_j, jint semantic_j, jint index_j)
			{
				ev_uint16 source = (ev_uint16) source_j;
				ev_size_t offset = (ev_size_t) offset_j;
				EarthView::World::Graphic::VertexElementType theType = (EarthView::World::Graphic::VertexElementType) theType_j;
				EarthView::World::Graphic::VertexElementSemantic semantic = (EarthView::World::Graphic::VertexElementSemantic) semantic_j;
				ev_uint16 index = (ev_uint16) index_j;
				EarthView::World::Graphic::CVertexDeclaration *pObjectX = (EarthView::World::Graphic::CVertexDeclaration*) pObjXXXX;
				const EarthView::World::Graphic::CVertexElement& __values1 = pObjectX->EarthView::World::Graphic::CVertexDeclaration::addElement(source, offset, theType, semantic, index);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_VertexDeclaration_addElement_1ev_1uint16_1ev_1size_1t_1VertexElementType_1VertexElementSemantic(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint source_j, jlong offset_j, jint theType_j, jint semantic_j)
			{
				ev_uint16 source = (ev_uint16) source_j;
				ev_size_t offset = (ev_size_t) offset_j;
				EarthView::World::Graphic::VertexElementType theType = (EarthView::World::Graphic::VertexElementType) theType_j;
				EarthView::World::Graphic::VertexElementSemantic semantic = (EarthView::World::Graphic::VertexElementSemantic) semantic_j;
				EarthView::World::Graphic::CVertexDeclaration *pObjectX = (EarthView::World::Graphic::CVertexDeclaration*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCVertexDeclarationProxy))
				{
					const EarthView::World::Graphic::CVertexElement& __values1 = pObjectX->EarthView::World::Graphic::CVertexDeclaration::addElement(source, offset, theType, semantic);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				else
				{
					const EarthView::World::Graphic::CVertexElement& __values1 = pObjectX->addElement(source, offset, theType, semantic);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexDeclaration_register_1addElement_1ev_1uint16_1ev_1size_1t_1VertexElementType_1VertexElementSemantic(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCVertexDeclarationProxy *pObjectX = (JCVertexDeclarationProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_addElement_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"addElement_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_callback", "(IJII)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_VertexDeclaration_addElement_1ev_1uint16_1ev_1size_1t_1VertexElementType_1VertexElementSemantic_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint source_j, jlong offset_j, jint theType_j, jint semantic_j)
			{
				ev_uint16 source = (ev_uint16) source_j;
				ev_size_t offset = (ev_size_t) offset_j;
				EarthView::World::Graphic::VertexElementType theType = (EarthView::World::Graphic::VertexElementType) theType_j;
				EarthView::World::Graphic::VertexElementSemantic semantic = (EarthView::World::Graphic::VertexElementSemantic) semantic_j;
				EarthView::World::Graphic::CVertexDeclaration *pObjectX = (EarthView::World::Graphic::CVertexDeclaration*) pObjXXXX;
				const EarthView::World::Graphic::CVertexElement& __values1 = pObjectX->EarthView::World::Graphic::CVertexDeclaration::addElement(source, offset, theType, semantic);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_VertexDeclaration_insertElement_1ev_1uint16_1ev_1uint16_1ev_1size_1t_1VertexElementType_1VertexElementSemantic_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint atPosition_j, jint source_j, jlong offset_j, jint theType_j, jint semantic_j, jint index_j)
			{
				ev_uint16 atPosition = (ev_uint16) atPosition_j;
				ev_uint16 source = (ev_uint16) source_j;
				ev_size_t offset = (ev_size_t) offset_j;
				EarthView::World::Graphic::VertexElementType theType = (EarthView::World::Graphic::VertexElementType) theType_j;
				EarthView::World::Graphic::VertexElementSemantic semantic = (EarthView::World::Graphic::VertexElementSemantic) semantic_j;
				ev_uint16 index = (ev_uint16) index_j;
				EarthView::World::Graphic::CVertexDeclaration *pObjectX = (EarthView::World::Graphic::CVertexDeclaration*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCVertexDeclarationProxy))
				{
					const EarthView::World::Graphic::CVertexElement& __values1 = pObjectX->EarthView::World::Graphic::CVertexDeclaration::insertElement(atPosition, source, offset, theType, semantic, index);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				else
				{
					const EarthView::World::Graphic::CVertexElement& __values1 = pObjectX->insertElement(atPosition, source, offset, theType, semantic, index);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexDeclaration_register_1insertElement_1ev_1uint16_1ev_1uint16_1ev_1size_1t_1VertexElementType_1VertexElementSemantic_1ev_1uint16(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCVertexDeclarationProxy *pObjectX = (JCVertexDeclarationProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_insertElement_ev_uint16_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_ev_uint16_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"insertElement_ev_uint16_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_ev_uint16_callback", "(IIJIII)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_VertexDeclaration_insertElement_1ev_1uint16_1ev_1uint16_1ev_1size_1t_1VertexElementType_1VertexElementSemantic_1ev_1uint16_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint atPosition_j, jint source_j, jlong offset_j, jint theType_j, jint semantic_j, jint index_j)
			{
				ev_uint16 atPosition = (ev_uint16) atPosition_j;
				ev_uint16 source = (ev_uint16) source_j;
				ev_size_t offset = (ev_size_t) offset_j;
				EarthView::World::Graphic::VertexElementType theType = (EarthView::World::Graphic::VertexElementType) theType_j;
				EarthView::World::Graphic::VertexElementSemantic semantic = (EarthView::World::Graphic::VertexElementSemantic) semantic_j;
				ev_uint16 index = (ev_uint16) index_j;
				EarthView::World::Graphic::CVertexDeclaration *pObjectX = (EarthView::World::Graphic::CVertexDeclaration*) pObjXXXX;
				const EarthView::World::Graphic::CVertexElement& __values1 = pObjectX->EarthView::World::Graphic::CVertexDeclaration::insertElement(atPosition, source, offset, theType, semantic, index);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_VertexDeclaration_insertElement_1ev_1uint16_1ev_1uint16_1ev_1size_1t_1VertexElementType_1VertexElementSemantic(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint atPosition_j, jint source_j, jlong offset_j, jint theType_j, jint semantic_j)
			{
				ev_uint16 atPosition = (ev_uint16) atPosition_j;
				ev_uint16 source = (ev_uint16) source_j;
				ev_size_t offset = (ev_size_t) offset_j;
				EarthView::World::Graphic::VertexElementType theType = (EarthView::World::Graphic::VertexElementType) theType_j;
				EarthView::World::Graphic::VertexElementSemantic semantic = (EarthView::World::Graphic::VertexElementSemantic) semantic_j;
				EarthView::World::Graphic::CVertexDeclaration *pObjectX = (EarthView::World::Graphic::CVertexDeclaration*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCVertexDeclarationProxy))
				{
					const EarthView::World::Graphic::CVertexElement& __values1 = pObjectX->EarthView::World::Graphic::CVertexDeclaration::insertElement(atPosition, source, offset, theType, semantic);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				else
				{
					const EarthView::World::Graphic::CVertexElement& __values1 = pObjectX->insertElement(atPosition, source, offset, theType, semantic);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexDeclaration_register_1insertElement_1ev_1uint16_1ev_1uint16_1ev_1size_1t_1VertexElementType_1VertexElementSemantic(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCVertexDeclarationProxy *pObjectX = (JCVertexDeclarationProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_insertElement_ev_uint16_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"insertElement_ev_uint16_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_callback", "(IIJII)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_VertexDeclaration_insertElement_1ev_1uint16_1ev_1uint16_1ev_1size_1t_1VertexElementType_1VertexElementSemantic_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint atPosition_j, jint source_j, jlong offset_j, jint theType_j, jint semantic_j)
			{
				ev_uint16 atPosition = (ev_uint16) atPosition_j;
				ev_uint16 source = (ev_uint16) source_j;
				ev_size_t offset = (ev_size_t) offset_j;
				EarthView::World::Graphic::VertexElementType theType = (EarthView::World::Graphic::VertexElementType) theType_j;
				EarthView::World::Graphic::VertexElementSemantic semantic = (EarthView::World::Graphic::VertexElementSemantic) semantic_j;
				EarthView::World::Graphic::CVertexDeclaration *pObjectX = (EarthView::World::Graphic::CVertexDeclaration*) pObjXXXX;
				const EarthView::World::Graphic::CVertexElement& __values1 = pObjectX->EarthView::World::Graphic::CVertexDeclaration::insertElement(atPosition, source, offset, theType, semantic);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexDeclaration_removeElement_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint elem_index_j)
			{
				ev_uint16 elem_index = (ev_uint16) elem_index_j;
				EarthView::World::Graphic::CVertexDeclaration *pObjectX = (EarthView::World::Graphic::CVertexDeclaration*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCVertexDeclarationProxy))
				{
					pObjectX->EarthView::World::Graphic::CVertexDeclaration::removeElement(elem_index);
				}
				else
				{
					pObjectX->removeElement(elem_index);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexDeclaration_register_1removeElement_1ev_1uint16(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCVertexDeclarationProxy *pObjectX = (JCVertexDeclarationProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_removeElement_ev_uint16_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"removeElement_ev_uint16_callback", "(I)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexDeclaration_removeElement_1ev_1uint16_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint elem_index_j)
			{
				ev_uint16 elem_index = (ev_uint16) elem_index_j;
				EarthView::World::Graphic::CVertexDeclaration *pObjectX = (EarthView::World::Graphic::CVertexDeclaration*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CVertexDeclaration::removeElement(elem_index);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexDeclaration_removeElement_1VertexElementSemantic_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint semantic_j, jint index_j)
			{
				EarthView::World::Graphic::VertexElementSemantic semantic = (EarthView::World::Graphic::VertexElementSemantic) semantic_j;
				ev_uint16 index = (ev_uint16) index_j;
				EarthView::World::Graphic::CVertexDeclaration *pObjectX = (EarthView::World::Graphic::CVertexDeclaration*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCVertexDeclarationProxy))
				{
					pObjectX->EarthView::World::Graphic::CVertexDeclaration::removeElement(semantic, index);
				}
				else
				{
					pObjectX->removeElement(semantic, index);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexDeclaration_register_1removeElement_1VertexElementSemantic_1ev_1uint16(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCVertexDeclarationProxy *pObjectX = (JCVertexDeclarationProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_removeElement_VertexElementSemantic_ev_uint16_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"removeElement_VertexElementSemantic_ev_uint16_callback", "(II)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexDeclaration_removeElement_1VertexElementSemantic_1ev_1uint16_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint semantic_j, jint index_j)
			{
				EarthView::World::Graphic::VertexElementSemantic semantic = (EarthView::World::Graphic::VertexElementSemantic) semantic_j;
				ev_uint16 index = (ev_uint16) index_j;
				EarthView::World::Graphic::CVertexDeclaration *pObjectX = (EarthView::World::Graphic::CVertexDeclaration*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CVertexDeclaration::removeElement(semantic, index);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexDeclaration_removeElement_1VertexElementSemantic(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint semantic_j)
			{
				EarthView::World::Graphic::VertexElementSemantic semantic = (EarthView::World::Graphic::VertexElementSemantic) semantic_j;
				EarthView::World::Graphic::CVertexDeclaration *pObjectX = (EarthView::World::Graphic::CVertexDeclaration*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCVertexDeclarationProxy))
				{
					pObjectX->EarthView::World::Graphic::CVertexDeclaration::removeElement(semantic);
				}
				else
				{
					pObjectX->removeElement(semantic);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexDeclaration_register_1removeElement_1VertexElementSemantic(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCVertexDeclarationProxy *pObjectX = (JCVertexDeclarationProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_removeElement_VertexElementSemantic_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"removeElement_VertexElementSemantic_callback", "(I)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexDeclaration_removeElement_1VertexElementSemantic_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint semantic_j)
			{
				EarthView::World::Graphic::VertexElementSemantic semantic = (EarthView::World::Graphic::VertexElementSemantic) semantic_j;
				EarthView::World::Graphic::CVertexDeclaration *pObjectX = (EarthView::World::Graphic::CVertexDeclaration*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CVertexDeclaration::removeElement(semantic);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexDeclaration_removeAllElements_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CVertexDeclaration *pObjectX = (EarthView::World::Graphic::CVertexDeclaration*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCVertexDeclarationProxy))
				{
					pObjectX->EarthView::World::Graphic::CVertexDeclaration::removeAllElements();
				}
				else
				{
					pObjectX->removeAllElements();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexDeclaration_register_1removeAllElements_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCVertexDeclarationProxy *pObjectX = (JCVertexDeclarationProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_removeAllElements_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"removeAllElements_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexDeclaration_removeAllElements_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CVertexDeclaration *pObjectX = (EarthView::World::Graphic::CVertexDeclaration*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CVertexDeclaration::removeAllElements();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexDeclaration_modifyElement_1ev_1uint16_1ev_1uint16_1ev_1size_1t_1VertexElementType_1VertexElementSemantic_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint elem_index_j, jint source_j, jlong offset_j, jint theType_j, jint semantic_j, jint index_j)
			{
				ev_uint16 elem_index = (ev_uint16) elem_index_j;
				ev_uint16 source = (ev_uint16) source_j;
				ev_size_t offset = (ev_size_t) offset_j;
				EarthView::World::Graphic::VertexElementType theType = (EarthView::World::Graphic::VertexElementType) theType_j;
				EarthView::World::Graphic::VertexElementSemantic semantic = (EarthView::World::Graphic::VertexElementSemantic) semantic_j;
				ev_uint16 index = (ev_uint16) index_j;
				EarthView::World::Graphic::CVertexDeclaration *pObjectX = (EarthView::World::Graphic::CVertexDeclaration*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCVertexDeclarationProxy))
				{
					pObjectX->EarthView::World::Graphic::CVertexDeclaration::modifyElement(elem_index, source, offset, theType, semantic, index);
				}
				else
				{
					pObjectX->modifyElement(elem_index, source, offset, theType, semantic, index);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexDeclaration_register_1modifyElement_1ev_1uint16_1ev_1uint16_1ev_1size_1t_1VertexElementType_1VertexElementSemantic_1ev_1uint16(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCVertexDeclarationProxy *pObjectX = (JCVertexDeclarationProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_modifyElement_ev_uint16_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_ev_uint16_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"modifyElement_ev_uint16_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_ev_uint16_callback", "(IIJIII)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexDeclaration_modifyElement_1ev_1uint16_1ev_1uint16_1ev_1size_1t_1VertexElementType_1VertexElementSemantic_1ev_1uint16_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint elem_index_j, jint source_j, jlong offset_j, jint theType_j, jint semantic_j, jint index_j)
			{
				ev_uint16 elem_index = (ev_uint16) elem_index_j;
				ev_uint16 source = (ev_uint16) source_j;
				ev_size_t offset = (ev_size_t) offset_j;
				EarthView::World::Graphic::VertexElementType theType = (EarthView::World::Graphic::VertexElementType) theType_j;
				EarthView::World::Graphic::VertexElementSemantic semantic = (EarthView::World::Graphic::VertexElementSemantic) semantic_j;
				ev_uint16 index = (ev_uint16) index_j;
				EarthView::World::Graphic::CVertexDeclaration *pObjectX = (EarthView::World::Graphic::CVertexDeclaration*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CVertexDeclaration::modifyElement(elem_index, source, offset, theType, semantic, index);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexDeclaration_modifyElement_1ev_1uint16_1ev_1uint16_1ev_1size_1t_1VertexElementType_1VertexElementSemantic(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint elem_index_j, jint source_j, jlong offset_j, jint theType_j, jint semantic_j)
			{
				ev_uint16 elem_index = (ev_uint16) elem_index_j;
				ev_uint16 source = (ev_uint16) source_j;
				ev_size_t offset = (ev_size_t) offset_j;
				EarthView::World::Graphic::VertexElementType theType = (EarthView::World::Graphic::VertexElementType) theType_j;
				EarthView::World::Graphic::VertexElementSemantic semantic = (EarthView::World::Graphic::VertexElementSemantic) semantic_j;
				EarthView::World::Graphic::CVertexDeclaration *pObjectX = (EarthView::World::Graphic::CVertexDeclaration*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCVertexDeclarationProxy))
				{
					pObjectX->EarthView::World::Graphic::CVertexDeclaration::modifyElement(elem_index, source, offset, theType, semantic);
				}
				else
				{
					pObjectX->modifyElement(elem_index, source, offset, theType, semantic);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexDeclaration_register_1modifyElement_1ev_1uint16_1ev_1uint16_1ev_1size_1t_1VertexElementType_1VertexElementSemantic(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCVertexDeclarationProxy *pObjectX = (JCVertexDeclarationProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_modifyElement_ev_uint16_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"modifyElement_ev_uint16_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_callback", "(IIJII)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexDeclaration_modifyElement_1ev_1uint16_1ev_1uint16_1ev_1size_1t_1VertexElementType_1VertexElementSemantic_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint elem_index_j, jint source_j, jlong offset_j, jint theType_j, jint semantic_j)
			{
				ev_uint16 elem_index = (ev_uint16) elem_index_j;
				ev_uint16 source = (ev_uint16) source_j;
				ev_size_t offset = (ev_size_t) offset_j;
				EarthView::World::Graphic::VertexElementType theType = (EarthView::World::Graphic::VertexElementType) theType_j;
				EarthView::World::Graphic::VertexElementSemantic semantic = (EarthView::World::Graphic::VertexElementSemantic) semantic_j;
				EarthView::World::Graphic::CVertexDeclaration *pObjectX = (EarthView::World::Graphic::CVertexDeclaration*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CVertexDeclaration::modifyElement(elem_index, source, offset, theType, semantic);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_VertexDeclaration_findElementBySemantic_1VertexElementSemantic_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint sem_j, jint index_j)
			{
				EarthView::World::Graphic::VertexElementSemantic sem = (EarthView::World::Graphic::VertexElementSemantic) sem_j;
				ev_uint16 index = (ev_uint16) index_j;
				const 				EarthView::World::Graphic::CVertexDeclaration *pObjectX = (EarthView::World::Graphic::CVertexDeclaration*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCVertexDeclarationProxy))
				{
					const EarthView::World::Graphic::CVertexElement* __values1 = pObjectX->EarthView::World::Graphic::CVertexDeclaration::findElementBySemantic(sem, index);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					const EarthView::World::Graphic::CVertexElement* __values1 = pObjectX->findElementBySemantic(sem, index);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexDeclaration_register_1findElementBySemantic_1VertexElementSemantic_1ev_1uint16(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCVertexDeclarationProxy *pObjectX = (JCVertexDeclarationProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_findElementBySemantic_VertexElementSemantic_ev_uint16_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"findElementBySemantic_VertexElementSemantic_ev_uint16_callback", "(II)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_VertexDeclaration_findElementBySemantic_1VertexElementSemantic_1ev_1uint16_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint sem_j, jint index_j)
			{
				EarthView::World::Graphic::VertexElementSemantic sem = (EarthView::World::Graphic::VertexElementSemantic) sem_j;
				ev_uint16 index = (ev_uint16) index_j;
				const 				EarthView::World::Graphic::CVertexDeclaration *pObjectX = (EarthView::World::Graphic::CVertexDeclaration*) pObjXXXX;
				const EarthView::World::Graphic::CVertexElement* __values1 = pObjectX->EarthView::World::Graphic::CVertexDeclaration::findElementBySemantic(sem, index);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_VertexDeclaration_findElementBySemantic_1VertexElementSemantic(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint sem_j)
			{
				EarthView::World::Graphic::VertexElementSemantic sem = (EarthView::World::Graphic::VertexElementSemantic) sem_j;
				const 				EarthView::World::Graphic::CVertexDeclaration *pObjectX = (EarthView::World::Graphic::CVertexDeclaration*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCVertexDeclarationProxy))
				{
					const EarthView::World::Graphic::CVertexElement* __values1 = pObjectX->EarthView::World::Graphic::CVertexDeclaration::findElementBySemantic(sem);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					const EarthView::World::Graphic::CVertexElement* __values1 = pObjectX->findElementBySemantic(sem);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexDeclaration_register_1findElementBySemantic_1VertexElementSemantic(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCVertexDeclarationProxy *pObjectX = (JCVertexDeclarationProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_findElementBySemantic_VertexElementSemantic_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"findElementBySemantic_VertexElementSemantic_callback", "(I)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_VertexDeclaration_findElementBySemantic_1VertexElementSemantic_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint sem_j)
			{
				EarthView::World::Graphic::VertexElementSemantic sem = (EarthView::World::Graphic::VertexElementSemantic) sem_j;
				const 				EarthView::World::Graphic::CVertexDeclaration *pObjectX = (EarthView::World::Graphic::CVertexDeclaration*) pObjXXXX;
				const EarthView::World::Graphic::CVertexElement* __values1 = pObjectX->EarthView::World::Graphic::CVertexDeclaration::findElementBySemantic(sem);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_VertexDeclaration_findElementsBySource_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint source_j)
			{
				ev_uint16 source = (ev_uint16) source_j;
				const 				EarthView::World::Graphic::CVertexDeclaration *pObjectX = (EarthView::World::Graphic::CVertexDeclaration*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCVertexDeclarationProxy))
				{
					EarthView::World::Graphic::CVertexDeclaration::VertexElementList __values1 = pObjectX->EarthView::World::Graphic::CVertexDeclaration::findElementsBySource(source);
					EarthView::World::Graphic::CVertexDeclaration::VertexElementList *returnvalues = new EarthView::World::Graphic::CVertexDeclaration::VertexElementList(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CVertexDeclaration::VertexElementList __values1 = pObjectX->findElementsBySource(source);
					EarthView::World::Graphic::CVertexDeclaration::VertexElementList *returnvalues = new EarthView::World::Graphic::CVertexDeclaration::VertexElementList(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexDeclaration_register_1findElementsBySource_1ev_1uint16(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCVertexDeclarationProxy *pObjectX = (JCVertexDeclarationProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_findElementsBySource_ev_uint16_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"findElementsBySource_ev_uint16_callback", "(I)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_VertexDeclaration_findElementsBySource_1ev_1uint16_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint source_j)
			{
				ev_uint16 source = (ev_uint16) source_j;
				const 				EarthView::World::Graphic::CVertexDeclaration *pObjectX = (EarthView::World::Graphic::CVertexDeclaration*) pObjXXXX;
				EarthView::World::Graphic::CVertexDeclaration::VertexElementList __values1 = pObjectX->EarthView::World::Graphic::CVertexDeclaration::findElementsBySource(source);
				EarthView::World::Graphic::CVertexDeclaration::VertexElementList *returnvalues = new EarthView::World::Graphic::CVertexDeclaration::VertexElementList(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_VertexDeclaration_getVertexSize_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint source_j)
			{
				ev_uint16 source = (ev_uint16) source_j;
				const 				EarthView::World::Graphic::CVertexDeclaration *pObjectX = (EarthView::World::Graphic::CVertexDeclaration*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCVertexDeclarationProxy))
				{
					ev_size_t __values1 = pObjectX->EarthView::World::Graphic::CVertexDeclaration::getVertexSize(source);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					ev_size_t __values1 = pObjectX->getVertexSize(source);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexDeclaration_register_1getVertexSize_1ev_1uint16(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCVertexDeclarationProxy *pObjectX = (JCVertexDeclarationProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getVertexSize_ev_uint16_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getVertexSize_ev_uint16_callback", "(I)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_VertexDeclaration_getVertexSize_1ev_1uint16_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint source_j)
			{
				ev_uint16 source = (ev_uint16) source_j;
				const 				EarthView::World::Graphic::CVertexDeclaration *pObjectX = (EarthView::World::Graphic::CVertexDeclaration*) pObjXXXX;
				ev_size_t __values1 = pObjectX->EarthView::World::Graphic::CVertexDeclaration::getVertexSize(source);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_VertexDeclaration_getNextFreeTextureCoordinate_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CVertexDeclaration *pObjectX = (EarthView::World::Graphic::CVertexDeclaration*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCVertexDeclarationProxy))
				{
					ev_uint16 __values1 = pObjectX->EarthView::World::Graphic::CVertexDeclaration::getNextFreeTextureCoordinate();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				else
				{
					ev_uint16 __values1 = pObjectX->getNextFreeTextureCoordinate();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexDeclaration_register_1getNextFreeTextureCoordinate_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCVertexDeclarationProxy *pObjectX = (JCVertexDeclarationProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getNextFreeTextureCoordinate_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getNextFreeTextureCoordinate_void_callback", "()I");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_VertexDeclaration_getNextFreeTextureCoordinate_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CVertexDeclaration *pObjectX = (EarthView::World::Graphic::CVertexDeclaration*) pObjXXXX;
				ev_uint16 __values1 = pObjectX->EarthView::World::Graphic::CVertexDeclaration::getNextFreeTextureCoordinate();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_VertexDeclaration_ev_1clone_1CHardwareBufferManagerBase(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong mgr_j)
			{
				EarthView::World::Graphic::CHardwareBufferManagerBase *mgr = (EarthView::World::Graphic::CHardwareBufferManagerBase*) mgr_j;
				const 				EarthView::World::Graphic::CVertexDeclaration *pObjectX = (EarthView::World::Graphic::CVertexDeclaration*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCVertexDeclarationProxy))
				{
					EarthView::World::Graphic::CVertexDeclaration* __values1 = pObjectX->EarthView::World::Graphic::CVertexDeclaration::clone(mgr);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CVertexDeclaration* __values1 = pObjectX->clone(mgr);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexDeclaration_register_1ev_1clone_1CHardwareBufferManagerBase(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCVertexDeclarationProxy *pObjectX = (JCVertexDeclarationProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_ev_clone_CHardwareBufferManagerBase_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"ev_clone_CHardwareBufferManagerBase_callback", "(J)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_VertexDeclaration_ev_1clone_1CHardwareBufferManagerBase_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong mgr_j)
			{
				EarthView::World::Graphic::CHardwareBufferManagerBase *mgr = (EarthView::World::Graphic::CHardwareBufferManagerBase*) mgr_j;
				const 				EarthView::World::Graphic::CVertexDeclaration *pObjectX = (EarthView::World::Graphic::CVertexDeclaration*) pObjXXXX;
				EarthView::World::Graphic::CVertexDeclaration* __values1 = pObjectX->EarthView::World::Graphic::CVertexDeclaration::clone(mgr);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_VertexDeclaration_ev_1clone_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CVertexDeclaration *pObjectX = (EarthView::World::Graphic::CVertexDeclaration*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCVertexDeclarationProxy))
				{
					EarthView::World::Graphic::CVertexDeclaration* __values1 = pObjectX->EarthView::World::Graphic::CVertexDeclaration::clone();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CVertexDeclaration* __values1 = pObjectX->clone();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexDeclaration_register_1ev_1clone_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCVertexDeclarationProxy *pObjectX = (JCVertexDeclarationProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_VertexDeclaration_ev_1clone_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CVertexDeclaration *pObjectX = (EarthView::World::Graphic::CVertexDeclaration*) pObjXXXX;
				EarthView::World::Graphic::CVertexDeclaration* __values1 = pObjectX->EarthView::World::Graphic::CVertexDeclaration::clone();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_VertexDeclaration_OperatorEquals_1CVertexDeclaration(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rhs_j )
			{
				EarthView::World::Graphic::CVertexDeclaration& pObjectX = *(EarthView::World::Graphic::CVertexDeclaration*) pObjXXXX;
				const EarthView::World::Graphic::CVertexDeclaration &rhs = *(EarthView::World::Graphic::CVertexDeclaration*) rhs_j;
				ev_bool __values1 = (pObjectX == rhs);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_VertexDeclaration_OperatorNotEquals_1CVertexDeclaration(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rhs_j )
			{
				EarthView::World::Graphic::CVertexDeclaration& pObjectX = *(EarthView::World::Graphic::CVertexDeclaration*) pObjXXXX;
				const EarthView::World::Graphic::CVertexDeclaration &rhs = *(EarthView::World::Graphic::CVertexDeclaration*) rhs_j;
				ev_bool __values1 = (pObjectX != rhs);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			class JCVertexBufferBindingProxy : public EarthView::World::Graphic::CVertexBufferBinding
			{
			 private:
				EarthView::World::Core::ev_string m_setBinding_ev_uint16_CHardwareVertexBufferSharedPtr_callback;
				EarthView::World::Core::ev_string m_unsetBinding_ev_uint16_callback;
				EarthView::World::Core::ev_string m_unsetAllBindings_void_callback;
				EarthView::World::Core::ev_string m_getBindings_void_callback;
				EarthView::World::Core::ev_string m_getBuffer_ev_uint16_callback;
				EarthView::World::Core::ev_string m_isBufferBound_ev_uint16_callback;
				EarthView::World::Core::ev_string m_getBufferCount_void_callback;
				EarthView::World::Core::ev_string m_getNextIndex_void_callback;
				EarthView::World::Core::ev_string m_getLastBoundIndex_void_callback;
				EarthView::World::Core::ev_string m_hasGaps_void_callback;
				EarthView::World::Core::ev_string m_closeGaps_BindingIndexMap_callback;
				EarthView::World::Core::ev_string m_getHasInstanceData_void_callback;
			public:
				JCVertexBufferBindingProxy(EarthView::World::Core::CNameValuePairList *pList) : CVertexBufferBinding(pList)
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
				void register_setBinding_ev_uint16_CHardwareVertexBufferSharedPtr_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setBinding_ev_uint16_CHardwareVertexBufferSharedPtr_callback = __method;
				}
				void register_unsetBinding_ev_uint16_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_unsetBinding_ev_uint16_callback = __method;
				}
				void register_unsetAllBindings_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_unsetAllBindings_void_callback = __method;
				}
				void register_getBindings_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getBindings_void_callback = __method;
				}
				void register_getBuffer_ev_uint16_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getBuffer_ev_uint16_callback = __method;
				}
				void register_isBufferBound_ev_uint16_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_isBufferBound_ev_uint16_callback = __method;
				}
				void register_getBufferCount_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getBufferCount_void_callback = __method;
				}
				void register_getNextIndex_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getNextIndex_void_callback = __method;
				}
				void register_getLastBoundIndex_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getLastBoundIndex_void_callback = __method;
				}
				void register_hasGaps_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_hasGaps_void_callback = __method;
				}
				void register_closeGaps_BindingIndexMap_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_closeGaps_BindingIndexMap_callback = __method;
				}
				void register_getHasInstanceData_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getHasInstanceData_void_callback = __method;
				}
				virtual void setBinding(ev_uint16 index, const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr& buffer)
				{
					if (this->_gRef != NULL && this->m_setBinding_ev_uint16_CHardwareVertexBufferSharedPtr_callback != "" && this->isCustomExtend())
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
						jint index_j = (jint) index;
						jlong buffer_j = (jlong) &buffer;
						jmethodID __method = __gr->getMethod("setBinding_ev_uint16_CHardwareVertexBufferSharedPtr_callback");
						__env->CallVoidMethod(__obj, __method , index_j, buffer_j);
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
						return this->CVertexBufferBinding::setBinding(index, buffer);
					}
				}
				virtual void unsetBinding(ev_uint16 index)
				{
					if (this->_gRef != NULL && this->m_unsetBinding_ev_uint16_callback != "" && this->isCustomExtend())
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
						jint index_j = (jint) index;
						jmethodID __method = __gr->getMethod("unsetBinding_ev_uint16_callback");
						__env->CallVoidMethod(__obj, __method , index_j);
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
						return this->CVertexBufferBinding::unsetBinding(index);
					}
				}
				virtual void unsetAllBindings()
				{
					if (this->_gRef != NULL && this->m_unsetAllBindings_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("unsetAllBindings_void_callback");
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
						return this->CVertexBufferBinding::unsetAllBindings();
					}
				}
				virtual const EarthView::World::Graphic::CVertexBufferBinding::VertexBufferBindingMap& getBindings() const
				{
					if (this->_gRef != NULL && this->m_getBindings_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getBindings_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Graphic::CVertexBufferBinding::VertexBufferBindingMap &__values1 = *(const EarthView::World::Graphic::CVertexBufferBinding::VertexBufferBindingMap*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CVertexBufferBinding::getBindings();
					}
				}
				virtual const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr& getBuffer(ev_uint16 index) const
				{
					if (this->_gRef != NULL && this->m_getBuffer_ev_uint16_callback != "" && this->isCustomExtend())
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
						jint index_j = (jint) index;
						jmethodID __method = __gr->getMethod("getBuffer_ev_uint16_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , index_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr &__values1 = *(const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CVertexBufferBinding::getBuffer(index);
					}
				}
				virtual ev_bool isBufferBound(ev_uint16 index) const
				{
					if (this->_gRef != NULL && this->m_isBufferBound_ev_uint16_callback != "" && this->isCustomExtend())
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
						jint index_j = (jint) index;
						jmethodID __method = __gr->getMethod("isBufferBound_ev_uint16_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , index_j);
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
						return this->CVertexBufferBinding::isBufferBound(index);
					}
				}
				virtual ev_size_t getBufferCount() const
				{
					if (this->_gRef != NULL && this->m_getBufferCount_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getBufferCount_void_callback");
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
						return this->CVertexBufferBinding::getBufferCount();
					}
				}
				virtual ev_uint16 getNextIndex() const
				{
					if (this->_gRef != NULL && this->m_getNextIndex_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getNextIndex_void_callback");
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
						return this->CVertexBufferBinding::getNextIndex();
					}
				}
				virtual ev_uint16 getLastBoundIndex() const
				{
					if (this->_gRef != NULL && this->m_getLastBoundIndex_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getLastBoundIndex_void_callback");
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
						return this->CVertexBufferBinding::getLastBoundIndex();
					}
				}
				virtual ev_bool hasGaps() const
				{
					if (this->_gRef != NULL && this->m_hasGaps_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("hasGaps_void_callback");
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
						return this->CVertexBufferBinding::hasGaps();
					}
				}
				virtual void closeGaps(EarthView::World::Graphic::CVertexBufferBinding::BindingIndexMap& bindingIndexMap)
				{
					if (this->_gRef != NULL && this->m_closeGaps_BindingIndexMap_callback != "" && this->isCustomExtend())
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
						jlong bindingIndexMap_j = (jlong) &bindingIndexMap;
						jmethodID __method = __gr->getMethod("closeGaps_BindingIndexMap_callback");
						__env->CallVoidMethod(__obj, __method , bindingIndexMap_j);
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
						return this->CVertexBufferBinding::closeGaps(bindingIndexMap);
					}
				}
				virtual bool getHasInstanceData() const
				{
					if (this->_gRef != NULL && this->m_getHasInstanceData_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getHasInstanceData_void_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						bool __values1 = (bool) __values1_j;
						return __values1;
					}
					else
					{
						return this->CVertexBufferBinding::getHasInstanceData();
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCVertexBufferBindingProxy);
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_VertexBufferBinding_00024VertexBufferBindingMap_exist_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint key_j)
			{
				const ev_uint16 key = (const ev_uint16) key_j;
				EarthView::World::Graphic::CVertexBufferBinding::VertexBufferBindingMap *pObjectX = (EarthView::World::Graphic::CVertexBufferBinding::VertexBufferBindingMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->exist(key);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_VertexBufferBinding_00024VertexBufferBindingMap_OperatorIndex_1ev_1uint16(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint key_j )
			{
				EarthView::World::Graphic::CVertexBufferBinding::VertexBufferBindingMap& pObjectX = *(EarthView::World::Graphic::CVertexBufferBinding::VertexBufferBindingMap*) pObjXXXX;
				const ev_uint16 key = (const ev_uint16) key_j;
				EarthView::World::Graphic::CHardwareVertexBufferSharedPtr& __values1 = pObjectX[key];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_VertexBufferBinding_00024VertexBufferBindingMap_get_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint key_j)
			{
				const ev_uint16 key = (const ev_uint16) key_j;
				EarthView::World::Graphic::CVertexBufferBinding::VertexBufferBindingMap *pObjectX = (EarthView::World::Graphic::CVertexBufferBinding::VertexBufferBindingMap*) pObjXXXX;
				EarthView::World::Graphic::CHardwareVertexBufferSharedPtr& __values1 = pObjectX->get(key);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexBufferBinding_00024VertexBufferBindingMap_erase_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint key_j)
			{
				const ev_uint16 key = (const ev_uint16) key_j;
				EarthView::World::Graphic::CVertexBufferBinding::VertexBufferBindingMap *pObjectX = (EarthView::World::Graphic::CVertexBufferBinding::VertexBufferBindingMap*) pObjXXXX;
				pObjectX->erase(key);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_VertexBufferBinding_00024VertexBufferBindingMap_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CVertexBufferBinding::VertexBufferBindingMap *pObjectX = (EarthView::World::Graphic::CVertexBufferBinding::VertexBufferBindingMap*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexBufferBinding_00024VertexBufferBindingMap_swap_1VertexBufferBindingMap(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong rhs_j)
			{
				EarthView::World::Graphic::CVertexBufferBinding::VertexBufferBindingMap &rhs = *(EarthView::World::Graphic::CVertexBufferBinding::VertexBufferBindingMap*) rhs_j;
				EarthView::World::Graphic::CVertexBufferBinding::VertexBufferBindingMap *pObjectX = (EarthView::World::Graphic::CVertexBufferBinding::VertexBufferBindingMap*) pObjXXXX;
				pObjectX->swap(rhs);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexBufferBinding_00024VertexBufferBindingMap_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CVertexBufferBinding::VertexBufferBindingMap *pObjectX = (EarthView::World::Graphic::CVertexBufferBinding::VertexBufferBindingMap*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_VertexBufferBinding_00024VertexBufferBindingMap_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CVertexBufferBinding::VertexBufferBindingMap *pObjectX = (EarthView::World::Graphic::CVertexBufferBinding::VertexBufferBindingMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexBufferBinding_setBinding_1ev_1uint16_1CHardwareVertexBufferSharedPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint index_j, jlong buffer_j)
			{
				ev_uint16 index = (ev_uint16) index_j;
				const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr &buffer = *(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*) buffer_j;
				EarthView::World::Graphic::CVertexBufferBinding *pObjectX = (EarthView::World::Graphic::CVertexBufferBinding*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCVertexBufferBindingProxy))
				{
					pObjectX->EarthView::World::Graphic::CVertexBufferBinding::setBinding(index, buffer);
				}
				else
				{
					pObjectX->setBinding(index, buffer);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexBufferBinding_register_1setBinding_1ev_1uint16_1CHardwareVertexBufferSharedPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCVertexBufferBindingProxy *pObjectX = (JCVertexBufferBindingProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setBinding_ev_uint16_CHardwareVertexBufferSharedPtr_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setBinding_ev_uint16_CHardwareVertexBufferSharedPtr_callback", "(IJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexBufferBinding_setBinding_1ev_1uint16_1CHardwareVertexBufferSharedPtr_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint index_j, jlong buffer_j)
			{
				ev_uint16 index = (ev_uint16) index_j;
				const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr &buffer = *(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*) buffer_j;
				EarthView::World::Graphic::CVertexBufferBinding *pObjectX = (EarthView::World::Graphic::CVertexBufferBinding*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CVertexBufferBinding::setBinding(index, buffer);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexBufferBinding_unsetBinding_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint index_j)
			{
				ev_uint16 index = (ev_uint16) index_j;
				EarthView::World::Graphic::CVertexBufferBinding *pObjectX = (EarthView::World::Graphic::CVertexBufferBinding*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCVertexBufferBindingProxy))
				{
					pObjectX->EarthView::World::Graphic::CVertexBufferBinding::unsetBinding(index);
				}
				else
				{
					pObjectX->unsetBinding(index);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexBufferBinding_register_1unsetBinding_1ev_1uint16(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCVertexBufferBindingProxy *pObjectX = (JCVertexBufferBindingProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_unsetBinding_ev_uint16_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"unsetBinding_ev_uint16_callback", "(I)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexBufferBinding_unsetBinding_1ev_1uint16_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint index_j)
			{
				ev_uint16 index = (ev_uint16) index_j;
				EarthView::World::Graphic::CVertexBufferBinding *pObjectX = (EarthView::World::Graphic::CVertexBufferBinding*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CVertexBufferBinding::unsetBinding(index);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexBufferBinding_unsetAllBindings_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CVertexBufferBinding *pObjectX = (EarthView::World::Graphic::CVertexBufferBinding*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCVertexBufferBindingProxy))
				{
					pObjectX->EarthView::World::Graphic::CVertexBufferBinding::unsetAllBindings();
				}
				else
				{
					pObjectX->unsetAllBindings();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexBufferBinding_register_1unsetAllBindings_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCVertexBufferBindingProxy *pObjectX = (JCVertexBufferBindingProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_unsetAllBindings_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"unsetAllBindings_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexBufferBinding_unsetAllBindings_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CVertexBufferBinding *pObjectX = (EarthView::World::Graphic::CVertexBufferBinding*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CVertexBufferBinding::unsetAllBindings();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_VertexBufferBinding_getBindings_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CVertexBufferBinding *pObjectX = (EarthView::World::Graphic::CVertexBufferBinding*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCVertexBufferBindingProxy))
				{
					const EarthView::World::Graphic::CVertexBufferBinding::VertexBufferBindingMap& __values1 = pObjectX->EarthView::World::Graphic::CVertexBufferBinding::getBindings();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				else
				{
					const EarthView::World::Graphic::CVertexBufferBinding::VertexBufferBindingMap& __values1 = pObjectX->getBindings();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexBufferBinding_register_1getBindings_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCVertexBufferBindingProxy *pObjectX = (JCVertexBufferBindingProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getBindings_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getBindings_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_VertexBufferBinding_getBindings_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CVertexBufferBinding *pObjectX = (EarthView::World::Graphic::CVertexBufferBinding*) pObjXXXX;
				const EarthView::World::Graphic::CVertexBufferBinding::VertexBufferBindingMap& __values1 = pObjectX->EarthView::World::Graphic::CVertexBufferBinding::getBindings();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_VertexBufferBinding_getBuffer_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint index_j)
			{
				ev_uint16 index = (ev_uint16) index_j;
				const 				EarthView::World::Graphic::CVertexBufferBinding *pObjectX = (EarthView::World::Graphic::CVertexBufferBinding*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCVertexBufferBindingProxy))
				{
					const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr& __values1 = pObjectX->EarthView::World::Graphic::CVertexBufferBinding::getBuffer(index);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				else
				{
					const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr& __values1 = pObjectX->getBuffer(index);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexBufferBinding_register_1getBuffer_1ev_1uint16(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCVertexBufferBindingProxy *pObjectX = (JCVertexBufferBindingProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getBuffer_ev_uint16_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getBuffer_ev_uint16_callback", "(I)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_VertexBufferBinding_getBuffer_1ev_1uint16_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint index_j)
			{
				ev_uint16 index = (ev_uint16) index_j;
				const 				EarthView::World::Graphic::CVertexBufferBinding *pObjectX = (EarthView::World::Graphic::CVertexBufferBinding*) pObjXXXX;
				const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr& __values1 = pObjectX->EarthView::World::Graphic::CVertexBufferBinding::getBuffer(index);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_VertexBufferBinding_isBufferBound_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint index_j)
			{
				ev_uint16 index = (ev_uint16) index_j;
				const 				EarthView::World::Graphic::CVertexBufferBinding *pObjectX = (EarthView::World::Graphic::CVertexBufferBinding*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCVertexBufferBindingProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Graphic::CVertexBufferBinding::isBufferBound(index);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->isBufferBound(index);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexBufferBinding_register_1isBufferBound_1ev_1uint16(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCVertexBufferBindingProxy *pObjectX = (JCVertexBufferBindingProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_isBufferBound_ev_uint16_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"isBufferBound_ev_uint16_callback", "(I)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_VertexBufferBinding_isBufferBound_1ev_1uint16_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint index_j)
			{
				ev_uint16 index = (ev_uint16) index_j;
				const 				EarthView::World::Graphic::CVertexBufferBinding *pObjectX = (EarthView::World::Graphic::CVertexBufferBinding*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Graphic::CVertexBufferBinding::isBufferBound(index);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_VertexBufferBinding_getBufferCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CVertexBufferBinding *pObjectX = (EarthView::World::Graphic::CVertexBufferBinding*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCVertexBufferBindingProxy))
				{
					ev_size_t __values1 = pObjectX->EarthView::World::Graphic::CVertexBufferBinding::getBufferCount();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					ev_size_t __values1 = pObjectX->getBufferCount();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexBufferBinding_register_1getBufferCount_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCVertexBufferBindingProxy *pObjectX = (JCVertexBufferBindingProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getBufferCount_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getBufferCount_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_VertexBufferBinding_getBufferCount_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CVertexBufferBinding *pObjectX = (EarthView::World::Graphic::CVertexBufferBinding*) pObjXXXX;
				ev_size_t __values1 = pObjectX->EarthView::World::Graphic::CVertexBufferBinding::getBufferCount();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_VertexBufferBinding_getNextIndex_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CVertexBufferBinding *pObjectX = (EarthView::World::Graphic::CVertexBufferBinding*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCVertexBufferBindingProxy))
				{
					ev_uint16 __values1 = pObjectX->EarthView::World::Graphic::CVertexBufferBinding::getNextIndex();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				else
				{
					ev_uint16 __values1 = pObjectX->getNextIndex();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexBufferBinding_register_1getNextIndex_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCVertexBufferBindingProxy *pObjectX = (JCVertexBufferBindingProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getNextIndex_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getNextIndex_void_callback", "()I");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_VertexBufferBinding_getNextIndex_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CVertexBufferBinding *pObjectX = (EarthView::World::Graphic::CVertexBufferBinding*) pObjXXXX;
				ev_uint16 __values1 = pObjectX->EarthView::World::Graphic::CVertexBufferBinding::getNextIndex();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_VertexBufferBinding_getLastBoundIndex_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CVertexBufferBinding *pObjectX = (EarthView::World::Graphic::CVertexBufferBinding*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCVertexBufferBindingProxy))
				{
					ev_uint16 __values1 = pObjectX->EarthView::World::Graphic::CVertexBufferBinding::getLastBoundIndex();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				else
				{
					ev_uint16 __values1 = pObjectX->getLastBoundIndex();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexBufferBinding_register_1getLastBoundIndex_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCVertexBufferBindingProxy *pObjectX = (JCVertexBufferBindingProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getLastBoundIndex_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getLastBoundIndex_void_callback", "()I");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_VertexBufferBinding_getLastBoundIndex_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CVertexBufferBinding *pObjectX = (EarthView::World::Graphic::CVertexBufferBinding*) pObjXXXX;
				ev_uint16 __values1 = pObjectX->EarthView::World::Graphic::CVertexBufferBinding::getLastBoundIndex();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_VertexBufferBinding_00024BindingIndexMap_exist_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint key_j)
			{
				const ev_uint16 key = (const ev_uint16) key_j;
				EarthView::World::Graphic::CVertexBufferBinding::BindingIndexMap *pObjectX = (EarthView::World::Graphic::CVertexBufferBinding::BindingIndexMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->exist(key);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_VertexBufferBinding_00024BindingIndexMap_OperatorIndex_1ev_1uint16(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint key_j )
			{
				EarthView::World::Graphic::CVertexBufferBinding::BindingIndexMap& pObjectX = *(EarthView::World::Graphic::CVertexBufferBinding::BindingIndexMap*) pObjXXXX;
				const ev_uint16 key = (const ev_uint16) key_j;
				ev_uint16& __values1 = pObjectX[key];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_VertexBufferBinding_00024BindingIndexMap_get_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint key_j)
			{
				const ev_uint16 key = (const ev_uint16) key_j;
				EarthView::World::Graphic::CVertexBufferBinding::BindingIndexMap *pObjectX = (EarthView::World::Graphic::CVertexBufferBinding::BindingIndexMap*) pObjXXXX;
				ev_uint16& __values1 = pObjectX->get(key);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexBufferBinding_00024BindingIndexMap_erase_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint key_j)
			{
				const ev_uint16 key = (const ev_uint16) key_j;
				EarthView::World::Graphic::CVertexBufferBinding::BindingIndexMap *pObjectX = (EarthView::World::Graphic::CVertexBufferBinding::BindingIndexMap*) pObjXXXX;
				pObjectX->erase(key);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_VertexBufferBinding_00024BindingIndexMap_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CVertexBufferBinding::BindingIndexMap *pObjectX = (EarthView::World::Graphic::CVertexBufferBinding::BindingIndexMap*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexBufferBinding_00024BindingIndexMap_swap_1BindingIndexMap(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong rhs_j)
			{
				EarthView::World::Graphic::CVertexBufferBinding::BindingIndexMap &rhs = *(EarthView::World::Graphic::CVertexBufferBinding::BindingIndexMap*) rhs_j;
				EarthView::World::Graphic::CVertexBufferBinding::BindingIndexMap *pObjectX = (EarthView::World::Graphic::CVertexBufferBinding::BindingIndexMap*) pObjXXXX;
				pObjectX->swap(rhs);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexBufferBinding_00024BindingIndexMap_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CVertexBufferBinding::BindingIndexMap *pObjectX = (EarthView::World::Graphic::CVertexBufferBinding::BindingIndexMap*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_VertexBufferBinding_00024BindingIndexMap_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CVertexBufferBinding::BindingIndexMap *pObjectX = (EarthView::World::Graphic::CVertexBufferBinding::BindingIndexMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_VertexBufferBinding_hasGaps_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CVertexBufferBinding *pObjectX = (EarthView::World::Graphic::CVertexBufferBinding*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCVertexBufferBindingProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Graphic::CVertexBufferBinding::hasGaps();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->hasGaps();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexBufferBinding_register_1hasGaps_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCVertexBufferBindingProxy *pObjectX = (JCVertexBufferBindingProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_hasGaps_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"hasGaps_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_VertexBufferBinding_hasGaps_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CVertexBufferBinding *pObjectX = (EarthView::World::Graphic::CVertexBufferBinding*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Graphic::CVertexBufferBinding::hasGaps();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexBufferBinding_closeGaps_1BindingIndexMap(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong bindingIndexMap_j)
			{
				EarthView::World::Graphic::CVertexBufferBinding::BindingIndexMap &bindingIndexMap = *(EarthView::World::Graphic::CVertexBufferBinding::BindingIndexMap*) bindingIndexMap_j;
				EarthView::World::Graphic::CVertexBufferBinding *pObjectX = (EarthView::World::Graphic::CVertexBufferBinding*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCVertexBufferBindingProxy))
				{
					pObjectX->EarthView::World::Graphic::CVertexBufferBinding::closeGaps(bindingIndexMap);
				}
				else
				{
					pObjectX->closeGaps(bindingIndexMap);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexBufferBinding_register_1closeGaps_1BindingIndexMap(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCVertexBufferBindingProxy *pObjectX = (JCVertexBufferBindingProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_closeGaps_BindingIndexMap_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"closeGaps_BindingIndexMap_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexBufferBinding_closeGaps_1BindingIndexMap_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong bindingIndexMap_j)
			{
				EarthView::World::Graphic::CVertexBufferBinding::BindingIndexMap &bindingIndexMap = *(EarthView::World::Graphic::CVertexBufferBinding::BindingIndexMap*) bindingIndexMap_j;
				EarthView::World::Graphic::CVertexBufferBinding *pObjectX = (EarthView::World::Graphic::CVertexBufferBinding*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CVertexBufferBinding::closeGaps(bindingIndexMap);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_VertexBufferBinding_getHasInstanceData_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CVertexBufferBinding *pObjectX = (EarthView::World::Graphic::CVertexBufferBinding*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCVertexBufferBindingProxy))
				{
					bool __values1 = pObjectX->EarthView::World::Graphic::CVertexBufferBinding::getHasInstanceData();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					bool __values1 = pObjectX->getHasInstanceData();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexBufferBinding_register_1getHasInstanceData_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCVertexBufferBindingProxy *pObjectX = (JCVertexBufferBindingProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getHasInstanceData_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getHasInstanceData_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_VertexBufferBinding_getHasInstanceData_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CVertexBufferBinding *pObjectX = (EarthView::World::Graphic::CVertexBufferBinding*) pObjXXXX;
				bool __values1 = pObjectX->EarthView::World::Graphic::CVertexBufferBinding::getHasInstanceData();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
		}
	}
}
