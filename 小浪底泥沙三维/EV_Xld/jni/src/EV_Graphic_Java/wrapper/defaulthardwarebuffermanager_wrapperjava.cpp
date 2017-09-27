/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/defaulthardwarebuffermanager.h"
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
			class JCDefaultHardwareVertexBufferProxy : public EarthView::World::Graphic::CDefaultHardwareVertexBuffer
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
				JCDefaultHardwareVertexBufferProxy(EarthView::World::Core::CNameValuePairList *pList) : CDefaultHardwareVertexBuffer(pList)
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
						return this->CDefaultHardwareVertexBuffer::lockImpl(offset, length, options);
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
						return this->CDefaultHardwareVertexBuffer::unlockImpl();
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
						return this->CDefaultHardwareVertexBuffer::readData(offset, length, pDest);
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
						return this->CDefaultHardwareVertexBuffer::writeData(offset, length, pSource, discardWholeBuffer);
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
						return this->CDefaultHardwareVertexBuffer::writeData(offset, length, pSource);
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
						return this->CDefaultHardwareVertexBuffer::lock(offset, length, options);
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
						return this->CDefaultHardwareVertexBuffer::unlock();
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
						return this->CDefaultHardwareVertexBuffer::copyData(srcBuffer, srcOffset, dstOffset, length, discardWholeBuffer);
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
						return this->CDefaultHardwareVertexBuffer::copyData(srcBuffer, srcOffset, dstOffset, length);
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
						return this->CDefaultHardwareVertexBuffer::copyData(srcBuffer);
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
						return this->CDefaultHardwareVertexBuffer::_updateFromShadow();
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCDefaultHardwareVertexBufferProxy);
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_DefaultHardwareVertexBuffer_lockImpl_1ev_1size_1t_1ev_1size_1t_1LockOptions(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong offset_j, jlong length_j, jint options_j)
			{
				ev_size_t offset = (ev_size_t) offset_j;
				ev_size_t length = (ev_size_t) length_j;
				EarthView::World::Graphic::CHardwareBuffer::LockOptions options = (EarthView::World::Graphic::CHardwareBuffer::LockOptions) options_j;
				EarthView::World::Graphic::CDefaultHardwareVertexBuffer *pObjectX = (EarthView::World::Graphic::CDefaultHardwareVertexBuffer*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDefaultHardwareVertexBufferProxy))
				{
					void* __values1 = pObjectX->EarthView::World::Graphic::CDefaultHardwareVertexBuffer::lockImpl(offset, length, options);
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultHardwareVertexBuffer_register_1lockImpl_1ev_1size_1t_1ev_1size_1t_1LockOptions(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultHardwareVertexBufferProxy *pObjectX = (JCDefaultHardwareVertexBufferProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_DefaultHardwareVertexBuffer_lockImpl_1ev_1size_1t_1ev_1size_1t_1LockOptions_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong offset_j, jlong length_j, jint options_j)
			{
				ev_size_t offset = (ev_size_t) offset_j;
				ev_size_t length = (ev_size_t) length_j;
				EarthView::World::Graphic::CHardwareBuffer::LockOptions options = (EarthView::World::Graphic::CHardwareBuffer::LockOptions) options_j;
				EarthView::World::Graphic::CDefaultHardwareVertexBuffer *pObjectX = (EarthView::World::Graphic::CDefaultHardwareVertexBuffer*) pObjXXXX;
				void* __values1 = pObjectX->EarthView::World::Graphic::CDefaultHardwareVertexBuffer::lockImpl(offset, length, options);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultHardwareVertexBuffer_unlockImpl_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CDefaultHardwareVertexBuffer *pObjectX = (EarthView::World::Graphic::CDefaultHardwareVertexBuffer*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDefaultHardwareVertexBufferProxy))
				{
					pObjectX->EarthView::World::Graphic::CDefaultHardwareVertexBuffer::unlockImpl();
				}
				else
				{
					pObjectX->unlockImpl();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultHardwareVertexBuffer_register_1unlockImpl_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultHardwareVertexBufferProxy *pObjectX = (JCDefaultHardwareVertexBufferProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultHardwareVertexBuffer_unlockImpl_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CDefaultHardwareVertexBuffer *pObjectX = (EarthView::World::Graphic::CDefaultHardwareVertexBuffer*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CDefaultHardwareVertexBuffer::unlockImpl();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultHardwareVertexBuffer_readData_1ev_1size_1t_1ev_1size_1t_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong offset_j, jlong length_j, jlong pDest_j)
			{
				ev_size_t offset = (ev_size_t) offset_j;
				ev_size_t length = (ev_size_t) length_j;
				void *pDest = (void*) pDest_j;
				EarthView::World::Graphic::CDefaultHardwareVertexBuffer *pObjectX = (EarthView::World::Graphic::CDefaultHardwareVertexBuffer*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDefaultHardwareVertexBufferProxy))
				{
					pObjectX->EarthView::World::Graphic::CDefaultHardwareVertexBuffer::readData(offset, length, pDest);
				}
				else
				{
					pObjectX->readData(offset, length, pDest);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultHardwareVertexBuffer_register_1readData_1ev_1size_1t_1ev_1size_1t_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultHardwareVertexBufferProxy *pObjectX = (JCDefaultHardwareVertexBufferProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultHardwareVertexBuffer_readData_1ev_1size_1t_1ev_1size_1t_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong offset_j, jlong length_j, jlong pDest_j)
			{
				ev_size_t offset = (ev_size_t) offset_j;
				ev_size_t length = (ev_size_t) length_j;
				void *pDest = (void*) pDest_j;
				EarthView::World::Graphic::CDefaultHardwareVertexBuffer *pObjectX = (EarthView::World::Graphic::CDefaultHardwareVertexBuffer*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CDefaultHardwareVertexBuffer::readData(offset, length, pDest);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultHardwareVertexBuffer_writeData_1ev_1size_1t_1ev_1size_1t_1void_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong offset_j, jlong length_j, jlong pSource_j, jboolean discardWholeBuffer_j)
			{
				ev_size_t offset = (ev_size_t) offset_j;
				ev_size_t length = (ev_size_t) length_j;
				const void *pSource = (const void*) pSource_j;
				ev_bool discardWholeBuffer = (ev_bool) discardWholeBuffer_j;
				EarthView::World::Graphic::CDefaultHardwareVertexBuffer *pObjectX = (EarthView::World::Graphic::CDefaultHardwareVertexBuffer*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDefaultHardwareVertexBufferProxy))
				{
					pObjectX->EarthView::World::Graphic::CDefaultHardwareVertexBuffer::writeData(offset, length, pSource, discardWholeBuffer);
				}
				else
				{
					pObjectX->writeData(offset, length, pSource, discardWholeBuffer);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultHardwareVertexBuffer_register_1writeData_1ev_1size_1t_1ev_1size_1t_1void_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultHardwareVertexBufferProxy *pObjectX = (JCDefaultHardwareVertexBufferProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultHardwareVertexBuffer_writeData_1ev_1size_1t_1ev_1size_1t_1void_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong offset_j, jlong length_j, jlong pSource_j, jboolean discardWholeBuffer_j)
			{
				ev_size_t offset = (ev_size_t) offset_j;
				ev_size_t length = (ev_size_t) length_j;
				const void *pSource = (const void*) pSource_j;
				ev_bool discardWholeBuffer = (ev_bool) discardWholeBuffer_j;
				EarthView::World::Graphic::CDefaultHardwareVertexBuffer *pObjectX = (EarthView::World::Graphic::CDefaultHardwareVertexBuffer*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CDefaultHardwareVertexBuffer::writeData(offset, length, pSource, discardWholeBuffer);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultHardwareVertexBuffer_writeData_1ev_1size_1t_1ev_1size_1t_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong offset_j, jlong length_j, jlong pSource_j)
			{
				ev_size_t offset = (ev_size_t) offset_j;
				ev_size_t length = (ev_size_t) length_j;
				const void *pSource = (const void*) pSource_j;
				EarthView::World::Graphic::CDefaultHardwareVertexBuffer *pObjectX = (EarthView::World::Graphic::CDefaultHardwareVertexBuffer*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDefaultHardwareVertexBufferProxy))
				{
					pObjectX->EarthView::World::Graphic::CDefaultHardwareVertexBuffer::writeData(offset, length, pSource);
				}
				else
				{
					pObjectX->writeData(offset, length, pSource);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultHardwareVertexBuffer_register_1writeData_1ev_1size_1t_1ev_1size_1t_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultHardwareVertexBufferProxy *pObjectX = (JCDefaultHardwareVertexBufferProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultHardwareVertexBuffer_writeData_1ev_1size_1t_1ev_1size_1t_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong offset_j, jlong length_j, jlong pSource_j)
			{
				ev_size_t offset = (ev_size_t) offset_j;
				ev_size_t length = (ev_size_t) length_j;
				const void *pSource = (const void*) pSource_j;
				EarthView::World::Graphic::CDefaultHardwareVertexBuffer *pObjectX = (EarthView::World::Graphic::CDefaultHardwareVertexBuffer*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CDefaultHardwareVertexBuffer::writeData(offset, length, pSource);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_DefaultHardwareVertexBuffer_lock_1ev_1size_1t_1ev_1size_1t_1LockOptions(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong offset_j, jlong length_j, jint options_j)
			{
				ev_size_t offset = (ev_size_t) offset_j;
				ev_size_t length = (ev_size_t) length_j;
				EarthView::World::Graphic::CHardwareBuffer::LockOptions options = (EarthView::World::Graphic::CHardwareBuffer::LockOptions) options_j;
				EarthView::World::Graphic::CDefaultHardwareVertexBuffer *pObjectX = (EarthView::World::Graphic::CDefaultHardwareVertexBuffer*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDefaultHardwareVertexBufferProxy))
				{
					void* __values1 = pObjectX->EarthView::World::Graphic::CDefaultHardwareVertexBuffer::lock(offset, length, options);
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultHardwareVertexBuffer_register_1lock_1ev_1size_1t_1ev_1size_1t_1LockOptions(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultHardwareVertexBufferProxy *pObjectX = (JCDefaultHardwareVertexBufferProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_DefaultHardwareVertexBuffer_lock_1ev_1size_1t_1ev_1size_1t_1LockOptions_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong offset_j, jlong length_j, jint options_j)
			{
				ev_size_t offset = (ev_size_t) offset_j;
				ev_size_t length = (ev_size_t) length_j;
				EarthView::World::Graphic::CHardwareBuffer::LockOptions options = (EarthView::World::Graphic::CHardwareBuffer::LockOptions) options_j;
				EarthView::World::Graphic::CDefaultHardwareVertexBuffer *pObjectX = (EarthView::World::Graphic::CDefaultHardwareVertexBuffer*) pObjXXXX;
				void* __values1 = pObjectX->EarthView::World::Graphic::CDefaultHardwareVertexBuffer::lock(offset, length, options);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultHardwareVertexBuffer_unlock_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CDefaultHardwareVertexBuffer *pObjectX = (EarthView::World::Graphic::CDefaultHardwareVertexBuffer*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDefaultHardwareVertexBufferProxy))
				{
					pObjectX->EarthView::World::Graphic::CDefaultHardwareVertexBuffer::unlock();
				}
				else
				{
					pObjectX->unlock();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultHardwareVertexBuffer_register_1unlock_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultHardwareVertexBufferProxy *pObjectX = (JCDefaultHardwareVertexBufferProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultHardwareVertexBuffer_unlock_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CDefaultHardwareVertexBuffer *pObjectX = (EarthView::World::Graphic::CDefaultHardwareVertexBuffer*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CDefaultHardwareVertexBuffer::unlock();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultHardwareVertexBuffer_register_1copyData_1CHardwareBuffer_1ev_1size_1t_1ev_1size_1t_1ev_1size_1t_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultHardwareVertexBufferProxy *pObjectX = (JCDefaultHardwareVertexBufferProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultHardwareVertexBuffer_register_1copyData_1CHardwareBuffer_1ev_1size_1t_1ev_1size_1t_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultHardwareVertexBufferProxy *pObjectX = (JCDefaultHardwareVertexBufferProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultHardwareVertexBuffer_register_1copyData_1CHardwareBuffer(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultHardwareVertexBufferProxy *pObjectX = (JCDefaultHardwareVertexBufferProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultHardwareVertexBuffer_register_1_1updateFromShadow_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultHardwareVertexBufferProxy *pObjectX = (JCDefaultHardwareVertexBufferProxy*) pObjXXXX;
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
			class JCDefaultHardwareIndexBufferProxy : public EarthView::World::Graphic::CDefaultHardwareIndexBuffer
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
				JCDefaultHardwareIndexBufferProxy(EarthView::World::Core::CNameValuePairList *pList) : CDefaultHardwareIndexBuffer(pList)
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
						return this->CDefaultHardwareIndexBuffer::lockImpl(offset, length, options);
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
						return this->CDefaultHardwareIndexBuffer::unlockImpl();
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
						return this->CDefaultHardwareIndexBuffer::readData(offset, length, pDest);
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
						return this->CDefaultHardwareIndexBuffer::writeData(offset, length, pSource, discardWholeBuffer);
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
						return this->CDefaultHardwareIndexBuffer::writeData(offset, length, pSource);
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
						return this->CDefaultHardwareIndexBuffer::lock(offset, length, options);
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
						return this->CDefaultHardwareIndexBuffer::unlock();
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
						return this->CDefaultHardwareIndexBuffer::copyData(srcBuffer, srcOffset, dstOffset, length, discardWholeBuffer);
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
						return this->CDefaultHardwareIndexBuffer::copyData(srcBuffer, srcOffset, dstOffset, length);
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
						return this->CDefaultHardwareIndexBuffer::copyData(srcBuffer);
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
						return this->CDefaultHardwareIndexBuffer::_updateFromShadow();
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCDefaultHardwareIndexBufferProxy);
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_DefaultHardwareIndexBuffer_lockImpl_1ev_1size_1t_1ev_1size_1t_1LockOptions(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong offset_j, jlong length_j, jint options_j)
			{
				ev_size_t offset = (ev_size_t) offset_j;
				ev_size_t length = (ev_size_t) length_j;
				EarthView::World::Graphic::CHardwareBuffer::LockOptions options = (EarthView::World::Graphic::CHardwareBuffer::LockOptions) options_j;
				EarthView::World::Graphic::CDefaultHardwareIndexBuffer *pObjectX = (EarthView::World::Graphic::CDefaultHardwareIndexBuffer*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDefaultHardwareIndexBufferProxy))
				{
					void* __values1 = pObjectX->EarthView::World::Graphic::CDefaultHardwareIndexBuffer::lockImpl(offset, length, options);
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultHardwareIndexBuffer_register_1lockImpl_1ev_1size_1t_1ev_1size_1t_1LockOptions(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultHardwareIndexBufferProxy *pObjectX = (JCDefaultHardwareIndexBufferProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_DefaultHardwareIndexBuffer_lockImpl_1ev_1size_1t_1ev_1size_1t_1LockOptions_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong offset_j, jlong length_j, jint options_j)
			{
				ev_size_t offset = (ev_size_t) offset_j;
				ev_size_t length = (ev_size_t) length_j;
				EarthView::World::Graphic::CHardwareBuffer::LockOptions options = (EarthView::World::Graphic::CHardwareBuffer::LockOptions) options_j;
				EarthView::World::Graphic::CDefaultHardwareIndexBuffer *pObjectX = (EarthView::World::Graphic::CDefaultHardwareIndexBuffer*) pObjXXXX;
				void* __values1 = pObjectX->EarthView::World::Graphic::CDefaultHardwareIndexBuffer::lockImpl(offset, length, options);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultHardwareIndexBuffer_unlockImpl_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CDefaultHardwareIndexBuffer *pObjectX = (EarthView::World::Graphic::CDefaultHardwareIndexBuffer*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDefaultHardwareIndexBufferProxy))
				{
					pObjectX->EarthView::World::Graphic::CDefaultHardwareIndexBuffer::unlockImpl();
				}
				else
				{
					pObjectX->unlockImpl();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultHardwareIndexBuffer_register_1unlockImpl_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultHardwareIndexBufferProxy *pObjectX = (JCDefaultHardwareIndexBufferProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultHardwareIndexBuffer_unlockImpl_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CDefaultHardwareIndexBuffer *pObjectX = (EarthView::World::Graphic::CDefaultHardwareIndexBuffer*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CDefaultHardwareIndexBuffer::unlockImpl();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultHardwareIndexBuffer_readData_1ev_1size_1t_1ev_1size_1t_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong offset_j, jlong length_j, jlong pDest_j)
			{
				ev_size_t offset = (ev_size_t) offset_j;
				ev_size_t length = (ev_size_t) length_j;
				void *pDest = (void*) pDest_j;
				EarthView::World::Graphic::CDefaultHardwareIndexBuffer *pObjectX = (EarthView::World::Graphic::CDefaultHardwareIndexBuffer*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDefaultHardwareIndexBufferProxy))
				{
					pObjectX->EarthView::World::Graphic::CDefaultHardwareIndexBuffer::readData(offset, length, pDest);
				}
				else
				{
					pObjectX->readData(offset, length, pDest);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultHardwareIndexBuffer_register_1readData_1ev_1size_1t_1ev_1size_1t_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultHardwareIndexBufferProxy *pObjectX = (JCDefaultHardwareIndexBufferProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultHardwareIndexBuffer_readData_1ev_1size_1t_1ev_1size_1t_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong offset_j, jlong length_j, jlong pDest_j)
			{
				ev_size_t offset = (ev_size_t) offset_j;
				ev_size_t length = (ev_size_t) length_j;
				void *pDest = (void*) pDest_j;
				EarthView::World::Graphic::CDefaultHardwareIndexBuffer *pObjectX = (EarthView::World::Graphic::CDefaultHardwareIndexBuffer*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CDefaultHardwareIndexBuffer::readData(offset, length, pDest);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultHardwareIndexBuffer_writeData_1ev_1size_1t_1ev_1size_1t_1void_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong offset_j, jlong length_j, jlong pSource_j, jboolean discardWholeBuffer_j)
			{
				ev_size_t offset = (ev_size_t) offset_j;
				ev_size_t length = (ev_size_t) length_j;
				const void *pSource = (const void*) pSource_j;
				ev_bool discardWholeBuffer = (ev_bool) discardWholeBuffer_j;
				EarthView::World::Graphic::CDefaultHardwareIndexBuffer *pObjectX = (EarthView::World::Graphic::CDefaultHardwareIndexBuffer*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDefaultHardwareIndexBufferProxy))
				{
					pObjectX->EarthView::World::Graphic::CDefaultHardwareIndexBuffer::writeData(offset, length, pSource, discardWholeBuffer);
				}
				else
				{
					pObjectX->writeData(offset, length, pSource, discardWholeBuffer);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultHardwareIndexBuffer_register_1writeData_1ev_1size_1t_1ev_1size_1t_1void_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultHardwareIndexBufferProxy *pObjectX = (JCDefaultHardwareIndexBufferProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultHardwareIndexBuffer_writeData_1ev_1size_1t_1ev_1size_1t_1void_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong offset_j, jlong length_j, jlong pSource_j, jboolean discardWholeBuffer_j)
			{
				ev_size_t offset = (ev_size_t) offset_j;
				ev_size_t length = (ev_size_t) length_j;
				const void *pSource = (const void*) pSource_j;
				ev_bool discardWholeBuffer = (ev_bool) discardWholeBuffer_j;
				EarthView::World::Graphic::CDefaultHardwareIndexBuffer *pObjectX = (EarthView::World::Graphic::CDefaultHardwareIndexBuffer*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CDefaultHardwareIndexBuffer::writeData(offset, length, pSource, discardWholeBuffer);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultHardwareIndexBuffer_writeData_1ev_1size_1t_1ev_1size_1t_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong offset_j, jlong length_j, jlong pSource_j)
			{
				ev_size_t offset = (ev_size_t) offset_j;
				ev_size_t length = (ev_size_t) length_j;
				const void *pSource = (const void*) pSource_j;
				EarthView::World::Graphic::CDefaultHardwareIndexBuffer *pObjectX = (EarthView::World::Graphic::CDefaultHardwareIndexBuffer*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDefaultHardwareIndexBufferProxy))
				{
					pObjectX->EarthView::World::Graphic::CDefaultHardwareIndexBuffer::writeData(offset, length, pSource);
				}
				else
				{
					pObjectX->writeData(offset, length, pSource);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultHardwareIndexBuffer_register_1writeData_1ev_1size_1t_1ev_1size_1t_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultHardwareIndexBufferProxy *pObjectX = (JCDefaultHardwareIndexBufferProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultHardwareIndexBuffer_writeData_1ev_1size_1t_1ev_1size_1t_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong offset_j, jlong length_j, jlong pSource_j)
			{
				ev_size_t offset = (ev_size_t) offset_j;
				ev_size_t length = (ev_size_t) length_j;
				const void *pSource = (const void*) pSource_j;
				EarthView::World::Graphic::CDefaultHardwareIndexBuffer *pObjectX = (EarthView::World::Graphic::CDefaultHardwareIndexBuffer*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CDefaultHardwareIndexBuffer::writeData(offset, length, pSource);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_DefaultHardwareIndexBuffer_lock_1ev_1size_1t_1ev_1size_1t_1LockOptions(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong offset_j, jlong length_j, jint options_j)
			{
				ev_size_t offset = (ev_size_t) offset_j;
				ev_size_t length = (ev_size_t) length_j;
				EarthView::World::Graphic::CHardwareBuffer::LockOptions options = (EarthView::World::Graphic::CHardwareBuffer::LockOptions) options_j;
				EarthView::World::Graphic::CDefaultHardwareIndexBuffer *pObjectX = (EarthView::World::Graphic::CDefaultHardwareIndexBuffer*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDefaultHardwareIndexBufferProxy))
				{
					void* __values1 = pObjectX->EarthView::World::Graphic::CDefaultHardwareIndexBuffer::lock(offset, length, options);
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultHardwareIndexBuffer_register_1lock_1ev_1size_1t_1ev_1size_1t_1LockOptions(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultHardwareIndexBufferProxy *pObjectX = (JCDefaultHardwareIndexBufferProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_DefaultHardwareIndexBuffer_lock_1ev_1size_1t_1ev_1size_1t_1LockOptions_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong offset_j, jlong length_j, jint options_j)
			{
				ev_size_t offset = (ev_size_t) offset_j;
				ev_size_t length = (ev_size_t) length_j;
				EarthView::World::Graphic::CHardwareBuffer::LockOptions options = (EarthView::World::Graphic::CHardwareBuffer::LockOptions) options_j;
				EarthView::World::Graphic::CDefaultHardwareIndexBuffer *pObjectX = (EarthView::World::Graphic::CDefaultHardwareIndexBuffer*) pObjXXXX;
				void* __values1 = pObjectX->EarthView::World::Graphic::CDefaultHardwareIndexBuffer::lock(offset, length, options);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultHardwareIndexBuffer_unlock_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CDefaultHardwareIndexBuffer *pObjectX = (EarthView::World::Graphic::CDefaultHardwareIndexBuffer*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDefaultHardwareIndexBufferProxy))
				{
					pObjectX->EarthView::World::Graphic::CDefaultHardwareIndexBuffer::unlock();
				}
				else
				{
					pObjectX->unlock();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultHardwareIndexBuffer_register_1unlock_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultHardwareIndexBufferProxy *pObjectX = (JCDefaultHardwareIndexBufferProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultHardwareIndexBuffer_unlock_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CDefaultHardwareIndexBuffer *pObjectX = (EarthView::World::Graphic::CDefaultHardwareIndexBuffer*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CDefaultHardwareIndexBuffer::unlock();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultHardwareIndexBuffer_register_1copyData_1CHardwareBuffer_1ev_1size_1t_1ev_1size_1t_1ev_1size_1t_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultHardwareIndexBufferProxy *pObjectX = (JCDefaultHardwareIndexBufferProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultHardwareIndexBuffer_register_1copyData_1CHardwareBuffer_1ev_1size_1t_1ev_1size_1t_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultHardwareIndexBufferProxy *pObjectX = (JCDefaultHardwareIndexBufferProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultHardwareIndexBuffer_register_1copyData_1CHardwareBuffer(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultHardwareIndexBufferProxy *pObjectX = (JCDefaultHardwareIndexBufferProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultHardwareIndexBuffer_register_1_1updateFromShadow_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultHardwareIndexBufferProxy *pObjectX = (JCDefaultHardwareIndexBufferProxy*) pObjXXXX;
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
			class JCDefaultHardwareBufferManagerBaseProxy : public EarthView::World::Graphic::CDefaultHardwareBufferManagerBase
			{
			 private:
				EarthView::World::Core::ev_string m_destroyAllDeclarations_void_callback;
				EarthView::World::Core::ev_string m_destroyAllBindings_void_callback;
				EarthView::World::Core::ev_string m_createVertexDeclarationImpl_void_callback;
				EarthView::World::Core::ev_string m_destroyVertexDeclarationImpl_CVertexDeclaration_callback;
				EarthView::World::Core::ev_string m_createVertexBufferBindingImpl_void_callback;
				EarthView::World::Core::ev_string m_destroyVertexBufferBindingImpl_CVertexBufferBinding_callback;
				EarthView::World::Core::ev_string m_makeBufferCopy_CHardwareVertexBufferSharedPtr_Usage_ev_bool_callback;
				EarthView::World::Core::ev_string m_createVertexBuffer_ev_size_t_ev_size_t_Usage_ev_bool_callback;
				EarthView::World::Core::ev_string m_createVertexBuffer_ev_size_t_ev_size_t_Usage_callback;
				EarthView::World::Core::ev_string m_createIndexBuffer_IndexType_ev_size_t_Usage_ev_bool_callback;
				EarthView::World::Core::ev_string m_createIndexBuffer_IndexType_ev_size_t_Usage_callback;
				EarthView::World::Core::ev_string m_createRenderToVertexBuffer_void_callback;
				EarthView::World::Core::ev_string m_createVertexDeclaration_void_callback;
				EarthView::World::Core::ev_string m_destroyVertexDeclaration_CVertexDeclaration_callback;
				EarthView::World::Core::ev_string m_createVertexBufferBinding_void_callback;
				EarthView::World::Core::ev_string m_destroyVertexBufferBinding_CVertexBufferBinding_callback;
				EarthView::World::Core::ev_string m_registerVertexBufferSourceAndCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_callback;
				EarthView::World::Core::ev_string m_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_ev_bool_callback;
				EarthView::World::Core::ev_string m_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_callback;
				EarthView::World::Core::ev_string m_releaseVertexBufferCopy_CHardwareVertexBufferSharedPtr_callback;
				EarthView::World::Core::ev_string m_touchVertexBufferCopy_CHardwareVertexBufferSharedPtr_callback;
				EarthView::World::Core::ev_string m__freeUnusedBufferCopies_void_callback;
				EarthView::World::Core::ev_string m__releaseBufferCopies_ev_bool_callback;
				EarthView::World::Core::ev_string m__releaseBufferCopies_void_callback;
				EarthView::World::Core::ev_string m__forceReleaseBufferCopies_CHardwareVertexBufferSharedPtr_callback;
				EarthView::World::Core::ev_string m__forceReleaseBufferCopies_CHardwareVertexBuffer_callback;
			public:
				JCDefaultHardwareBufferManagerBaseProxy(EarthView::World::Core::CNameValuePairList *pList) : CDefaultHardwareBufferManagerBase(pList)
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
				void register_destroyAllDeclarations_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_destroyAllDeclarations_void_callback = __method;
				}
				void register_destroyAllBindings_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_destroyAllBindings_void_callback = __method;
				}
				void register_createVertexDeclarationImpl_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createVertexDeclarationImpl_void_callback = __method;
				}
				void register_destroyVertexDeclarationImpl_CVertexDeclaration_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_destroyVertexDeclarationImpl_CVertexDeclaration_callback = __method;
				}
				void register_createVertexBufferBindingImpl_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createVertexBufferBindingImpl_void_callback = __method;
				}
				void register_destroyVertexBufferBindingImpl_CVertexBufferBinding_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_destroyVertexBufferBindingImpl_CVertexBufferBinding_callback = __method;
				}
				void register_makeBufferCopy_CHardwareVertexBufferSharedPtr_Usage_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_makeBufferCopy_CHardwareVertexBufferSharedPtr_Usage_ev_bool_callback = __method;
				}
				void register_createVertexBuffer_ev_size_t_ev_size_t_Usage_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createVertexBuffer_ev_size_t_ev_size_t_Usage_ev_bool_callback = __method;
				}
				void register_createVertexBuffer_ev_size_t_ev_size_t_Usage_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createVertexBuffer_ev_size_t_ev_size_t_Usage_callback = __method;
				}
				void register_createIndexBuffer_IndexType_ev_size_t_Usage_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createIndexBuffer_IndexType_ev_size_t_Usage_ev_bool_callback = __method;
				}
				void register_createIndexBuffer_IndexType_ev_size_t_Usage_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createIndexBuffer_IndexType_ev_size_t_Usage_callback = __method;
				}
				void register_createRenderToVertexBuffer_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createRenderToVertexBuffer_void_callback = __method;
				}
				void register_createVertexDeclaration_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createVertexDeclaration_void_callback = __method;
				}
				void register_destroyVertexDeclaration_CVertexDeclaration_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_destroyVertexDeclaration_CVertexDeclaration_callback = __method;
				}
				void register_createVertexBufferBinding_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createVertexBufferBinding_void_callback = __method;
				}
				void register_destroyVertexBufferBinding_CVertexBufferBinding_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_destroyVertexBufferBinding_CVertexBufferBinding_callback = __method;
				}
				void register_registerVertexBufferSourceAndCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_registerVertexBufferSourceAndCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_callback = __method;
				}
				void register_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_ev_bool_callback = __method;
				}
				void register_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_callback = __method;
				}
				void register_releaseVertexBufferCopy_CHardwareVertexBufferSharedPtr_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_releaseVertexBufferCopy_CHardwareVertexBufferSharedPtr_callback = __method;
				}
				void register_touchVertexBufferCopy_CHardwareVertexBufferSharedPtr_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_touchVertexBufferCopy_CHardwareVertexBufferSharedPtr_callback = __method;
				}
				void register__freeUnusedBufferCopies_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__freeUnusedBufferCopies_void_callback = __method;
				}
				void register__releaseBufferCopies_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__releaseBufferCopies_ev_bool_callback = __method;
				}
				void register__releaseBufferCopies_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__releaseBufferCopies_void_callback = __method;
				}
				void register__forceReleaseBufferCopies_CHardwareVertexBufferSharedPtr_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__forceReleaseBufferCopies_CHardwareVertexBufferSharedPtr_callback = __method;
				}
				void register__forceReleaseBufferCopies_CHardwareVertexBuffer_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__forceReleaseBufferCopies_CHardwareVertexBuffer_callback = __method;
				}
				virtual EarthView::World::Graphic::CHardwareVertexBufferSharedPtr createVertexBuffer(ev_size_t vertexSize, ev_size_t numVerts, EarthView::World::Graphic::CHardwareBuffer::Usage usage, ev_bool useShadowBuffer)
				{
					if (this->_gRef != NULL && this->m_createVertexBuffer_ev_size_t_ev_size_t_Usage_ev_bool_callback != "" && this->isCustomExtend())
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
						jlong vertexSize_j = (jlong) vertexSize;
						jlong numVerts_j = (jlong) numVerts;
						jint usage_j = (jint) usage;
						jboolean useShadowBuffer_j = (jboolean) useShadowBuffer;
						jmethodID __method = __gr->getMethod("createVertexBuffer_ev_size_t_ev_size_t_Usage_ev_bool_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , vertexSize_j, numVerts_j, usage_j, useShadowBuffer_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CHardwareVertexBufferSharedPtr __values1 = *(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CDefaultHardwareBufferManagerBase::createVertexBuffer(vertexSize, numVerts, usage, useShadowBuffer);
					}
				}
				virtual EarthView::World::Graphic::CHardwareVertexBufferSharedPtr createVertexBuffer(ev_size_t vertexSize, ev_size_t numVerts, EarthView::World::Graphic::CHardwareBuffer::Usage usage)
				{
					if (this->_gRef != NULL && this->m_createVertexBuffer_ev_size_t_ev_size_t_Usage_callback != "" && this->isCustomExtend())
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
						jlong vertexSize_j = (jlong) vertexSize;
						jlong numVerts_j = (jlong) numVerts;
						jint usage_j = (jint) usage;
						jmethodID __method = __gr->getMethod("createVertexBuffer_ev_size_t_ev_size_t_Usage_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , vertexSize_j, numVerts_j, usage_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CHardwareVertexBufferSharedPtr __values1 = *(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CDefaultHardwareBufferManagerBase::createVertexBuffer(vertexSize, numVerts, usage);
					}
				}
				virtual EarthView::World::Graphic::CHardwareIndexBufferSharedPtr createIndexBuffer(EarthView::World::Graphic::CHardwareIndexBuffer::IndexType itype, ev_size_t numIndexes, EarthView::World::Graphic::CHardwareBuffer::Usage usage, ev_bool useShadowBuffer)
				{
					if (this->_gRef != NULL && this->m_createIndexBuffer_IndexType_ev_size_t_Usage_ev_bool_callback != "" && this->isCustomExtend())
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
						jint itype_j = (jint) itype;
						jlong numIndexes_j = (jlong) numIndexes;
						jint usage_j = (jint) usage;
						jboolean useShadowBuffer_j = (jboolean) useShadowBuffer;
						jmethodID __method = __gr->getMethod("createIndexBuffer_IndexType_ev_size_t_Usage_ev_bool_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , itype_j, numIndexes_j, usage_j, useShadowBuffer_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CHardwareIndexBufferSharedPtr __values1 = *(EarthView::World::Graphic::CHardwareIndexBufferSharedPtr*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CDefaultHardwareBufferManagerBase::createIndexBuffer(itype, numIndexes, usage, useShadowBuffer);
					}
				}
				virtual EarthView::World::Graphic::CHardwareIndexBufferSharedPtr createIndexBuffer(EarthView::World::Graphic::CHardwareIndexBuffer::IndexType itype, ev_size_t numIndexes, EarthView::World::Graphic::CHardwareBuffer::Usage usage)
				{
					if (this->_gRef != NULL && this->m_createIndexBuffer_IndexType_ev_size_t_Usage_callback != "" && this->isCustomExtend())
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
						jint itype_j = (jint) itype;
						jlong numIndexes_j = (jlong) numIndexes;
						jint usage_j = (jint) usage;
						jmethodID __method = __gr->getMethod("createIndexBuffer_IndexType_ev_size_t_Usage_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , itype_j, numIndexes_j, usage_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CHardwareIndexBufferSharedPtr __values1 = *(EarthView::World::Graphic::CHardwareIndexBufferSharedPtr*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CDefaultHardwareBufferManagerBase::createIndexBuffer(itype, numIndexes, usage);
					}
				}
				virtual EarthView::World::Graphic::RenderToVertexBufferSharedPtr createRenderToVertexBuffer()
				{
					if (this->_gRef != NULL && this->m_createRenderToVertexBuffer_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("createRenderToVertexBuffer_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::RenderToVertexBufferSharedPtr __values1 = *(EarthView::World::Graphic::RenderToVertexBufferSharedPtr*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CDefaultHardwareBufferManagerBase::createRenderToVertexBuffer();
					}
				}
				virtual void destroyAllDeclarations()
				{
					if (this->_gRef != NULL && this->m_destroyAllDeclarations_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("destroyAllDeclarations_void_callback");
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
						return this->CDefaultHardwareBufferManagerBase::destroyAllDeclarations();
					}
				}
				virtual void destroyAllBindings()
				{
					if (this->_gRef != NULL && this->m_destroyAllBindings_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("destroyAllBindings_void_callback");
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
						return this->CDefaultHardwareBufferManagerBase::destroyAllBindings();
					}
				}
				virtual EarthView::World::Graphic::CVertexDeclaration* createVertexDeclarationImpl()
				{
					if (this->_gRef != NULL && this->m_createVertexDeclarationImpl_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("createVertexDeclarationImpl_void_callback");
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
						if(__values1 != NULL) {
							((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(false);
						}
						return __values1;
					}
					else
					{
						return this->CDefaultHardwareBufferManagerBase::createVertexDeclarationImpl();
					}
				}
				virtual void destroyVertexDeclarationImpl(EarthView::World::Graphic::CVertexDeclaration* decl)
				{
					if (this->_gRef != NULL && this->m_destroyVertexDeclarationImpl_CVertexDeclaration_callback != "" && this->isCustomExtend())
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
						jlong decl_j = (jlong) decl;
						jmethodID __method = __gr->getMethod("destroyVertexDeclarationImpl_CVertexDeclaration_callback");
						__env->CallVoidMethod(__obj, __method , decl_j);
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
						return this->CDefaultHardwareBufferManagerBase::destroyVertexDeclarationImpl(decl);
					}
				}
				virtual EarthView::World::Graphic::CVertexBufferBinding* createVertexBufferBindingImpl()
				{
					if (this->_gRef != NULL && this->m_createVertexBufferBindingImpl_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("createVertexBufferBindingImpl_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CVertexBufferBinding *__values1 = (EarthView::World::Graphic::CVertexBufferBinding*) __values1_j;
						if(__values1 != NULL) {
							((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(false);
						}
						return __values1;
					}
					else
					{
						return this->CDefaultHardwareBufferManagerBase::createVertexBufferBindingImpl();
					}
				}
				virtual void destroyVertexBufferBindingImpl(EarthView::World::Graphic::CVertexBufferBinding* binding)
				{
					if (this->_gRef != NULL && this->m_destroyVertexBufferBindingImpl_CVertexBufferBinding_callback != "" && this->isCustomExtend())
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
						jlong binding_j = (jlong) binding;
						jmethodID __method = __gr->getMethod("destroyVertexBufferBindingImpl_CVertexBufferBinding_callback");
						__env->CallVoidMethod(__obj, __method , binding_j);
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
						return this->CDefaultHardwareBufferManagerBase::destroyVertexBufferBindingImpl(binding);
					}
				}
				virtual EarthView::World::Graphic::CHardwareVertexBufferSharedPtr makeBufferCopy(const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr& source, EarthView::World::Graphic::CHardwareBuffer::Usage usage, ev_bool useShadowBuffer)
				{
					if (this->_gRef != NULL && this->m_makeBufferCopy_CHardwareVertexBufferSharedPtr_Usage_ev_bool_callback != "" && this->isCustomExtend())
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
						jlong source_j = (jlong) &source;
						jint usage_j = (jint) usage;
						jboolean useShadowBuffer_j = (jboolean) useShadowBuffer;
						jmethodID __method = __gr->getMethod("makeBufferCopy_CHardwareVertexBufferSharedPtr_Usage_ev_bool_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , source_j, usage_j, useShadowBuffer_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CHardwareVertexBufferSharedPtr __values1 = *(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CDefaultHardwareBufferManagerBase::makeBufferCopy(source, usage, useShadowBuffer);
					}
				}
				virtual EarthView::World::Graphic::CVertexDeclaration* createVertexDeclaration()
				{
					if (this->_gRef != NULL && this->m_createVertexDeclaration_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("createVertexDeclaration_void_callback");
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
						return this->CDefaultHardwareBufferManagerBase::createVertexDeclaration();
					}
				}
				virtual void destroyVertexDeclaration(EarthView::World::Graphic::CVertexDeclaration* decl)
				{
					if (this->_gRef != NULL && this->m_destroyVertexDeclaration_CVertexDeclaration_callback != "" && this->isCustomExtend())
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
						jlong decl_j = (jlong) decl;
						jmethodID __method = __gr->getMethod("destroyVertexDeclaration_CVertexDeclaration_callback");
						__env->CallVoidMethod(__obj, __method , decl_j);
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
						return this->CDefaultHardwareBufferManagerBase::destroyVertexDeclaration(decl);
					}
				}
				virtual EarthView::World::Graphic::CVertexBufferBinding* createVertexBufferBinding()
				{
					if (this->_gRef != NULL && this->m_createVertexBufferBinding_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("createVertexBufferBinding_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CVertexBufferBinding *__values1 = (EarthView::World::Graphic::CVertexBufferBinding*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CDefaultHardwareBufferManagerBase::createVertexBufferBinding();
					}
				}
				virtual void destroyVertexBufferBinding(EarthView::World::Graphic::CVertexBufferBinding* binding)
				{
					if (this->_gRef != NULL && this->m_destroyVertexBufferBinding_CVertexBufferBinding_callback != "" && this->isCustomExtend())
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
						jlong binding_j = (jlong) binding;
						jmethodID __method = __gr->getMethod("destroyVertexBufferBinding_CVertexBufferBinding_callback");
						__env->CallVoidMethod(__obj, __method , binding_j);
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
						return this->CDefaultHardwareBufferManagerBase::destroyVertexBufferBinding(binding);
					}
				}
				virtual void registerVertexBufferSourceAndCopy(const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr& sourceBuffer, const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr& copy)
				{
					if (this->_gRef != NULL && this->m_registerVertexBufferSourceAndCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_callback != "" && this->isCustomExtend())
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
						jlong sourceBuffer_j = (jlong) &sourceBuffer;
						jlong copy_j = (jlong) &copy;
						jmethodID __method = __gr->getMethod("registerVertexBufferSourceAndCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_callback");
						__env->CallVoidMethod(__obj, __method , sourceBuffer_j, copy_j);
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
						return this->CDefaultHardwareBufferManagerBase::registerVertexBufferSourceAndCopy(sourceBuffer, copy);
					}
				}
				virtual EarthView::World::Graphic::CHardwareVertexBufferSharedPtr allocateVertexBufferCopy(const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr& sourceBuffer, EarthView::World::Graphic::CHardwareBufferManagerBase::BufferLicenseType licenseType, EarthView::World::Graphic::CHardwareBufferLicensee* licensee, ev_bool copyData)
				{
					if (this->_gRef != NULL && this->m_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_ev_bool_callback != "" && this->isCustomExtend())
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
						jlong sourceBuffer_j = (jlong) &sourceBuffer;
						jint licenseType_j = (jint) licenseType;
						jlong licensee_j = (jlong) licensee;
						jboolean copyData_j = (jboolean) copyData;
						jmethodID __method = __gr->getMethod("allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_ev_bool_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , sourceBuffer_j, licenseType_j, licensee_j, copyData_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CHardwareVertexBufferSharedPtr __values1 = *(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CDefaultHardwareBufferManagerBase::allocateVertexBufferCopy(sourceBuffer, licenseType, licensee, copyData);
					}
				}
				virtual EarthView::World::Graphic::CHardwareVertexBufferSharedPtr allocateVertexBufferCopy(const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr& sourceBuffer, EarthView::World::Graphic::CHardwareBufferManagerBase::BufferLicenseType licenseType, EarthView::World::Graphic::CHardwareBufferLicensee* licensee)
				{
					if (this->_gRef != NULL && this->m_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_callback != "" && this->isCustomExtend())
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
						jlong sourceBuffer_j = (jlong) &sourceBuffer;
						jint licenseType_j = (jint) licenseType;
						jlong licensee_j = (jlong) licensee;
						jmethodID __method = __gr->getMethod("allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , sourceBuffer_j, licenseType_j, licensee_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CHardwareVertexBufferSharedPtr __values1 = *(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CDefaultHardwareBufferManagerBase::allocateVertexBufferCopy(sourceBuffer, licenseType, licensee);
					}
				}
				virtual void releaseVertexBufferCopy(const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr& bufferCopy)
				{
					if (this->_gRef != NULL && this->m_releaseVertexBufferCopy_CHardwareVertexBufferSharedPtr_callback != "" && this->isCustomExtend())
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
						jlong bufferCopy_j = (jlong) &bufferCopy;
						jmethodID __method = __gr->getMethod("releaseVertexBufferCopy_CHardwareVertexBufferSharedPtr_callback");
						__env->CallVoidMethod(__obj, __method , bufferCopy_j);
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
						return this->CDefaultHardwareBufferManagerBase::releaseVertexBufferCopy(bufferCopy);
					}
				}
				virtual void touchVertexBufferCopy(const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr& bufferCopy)
				{
					if (this->_gRef != NULL && this->m_touchVertexBufferCopy_CHardwareVertexBufferSharedPtr_callback != "" && this->isCustomExtend())
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
						jlong bufferCopy_j = (jlong) &bufferCopy;
						jmethodID __method = __gr->getMethod("touchVertexBufferCopy_CHardwareVertexBufferSharedPtr_callback");
						__env->CallVoidMethod(__obj, __method , bufferCopy_j);
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
						return this->CDefaultHardwareBufferManagerBase::touchVertexBufferCopy(bufferCopy);
					}
				}
				virtual void _freeUnusedBufferCopies()
				{
					if (this->_gRef != NULL && this->m__freeUnusedBufferCopies_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("_freeUnusedBufferCopies_void_callback");
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
						return this->CDefaultHardwareBufferManagerBase::_freeUnusedBufferCopies();
					}
				}
				virtual void _releaseBufferCopies(ev_bool forceFreeUnused)
				{
					if (this->_gRef != NULL && this->m__releaseBufferCopies_ev_bool_callback != "" && this->isCustomExtend())
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
						jboolean forceFreeUnused_j = (jboolean) forceFreeUnused;
						jmethodID __method = __gr->getMethod("_releaseBufferCopies_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , forceFreeUnused_j);
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
						return this->CDefaultHardwareBufferManagerBase::_releaseBufferCopies(forceFreeUnused);
					}
				}
				virtual void _releaseBufferCopies()
				{
					if (this->_gRef != NULL && this->m__releaseBufferCopies_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("_releaseBufferCopies_void_callback");
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
						return this->CDefaultHardwareBufferManagerBase::_releaseBufferCopies();
					}
				}
				virtual void _forceReleaseBufferCopies(const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr& sourceBuffer)
				{
					if (this->_gRef != NULL && this->m__forceReleaseBufferCopies_CHardwareVertexBufferSharedPtr_callback != "" && this->isCustomExtend())
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
						jlong sourceBuffer_j = (jlong) &sourceBuffer;
						jmethodID __method = __gr->getMethod("_forceReleaseBufferCopies_CHardwareVertexBufferSharedPtr_callback");
						__env->CallVoidMethod(__obj, __method , sourceBuffer_j);
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
						return this->CDefaultHardwareBufferManagerBase::_forceReleaseBufferCopies(sourceBuffer);
					}
				}
				virtual void _forceReleaseBufferCopies(EarthView::World::Graphic::CHardwareVertexBuffer* sourceBuffer)
				{
					if (this->_gRef != NULL && this->m__forceReleaseBufferCopies_CHardwareVertexBuffer_callback != "" && this->isCustomExtend())
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
						jlong sourceBuffer_j = (jlong) sourceBuffer;
						jmethodID __method = __gr->getMethod("_forceReleaseBufferCopies_CHardwareVertexBuffer_callback");
						__env->CallVoidMethod(__obj, __method , sourceBuffer_j);
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
						return this->CDefaultHardwareBufferManagerBase::_forceReleaseBufferCopies(sourceBuffer);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCDefaultHardwareBufferManagerBaseProxy);
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_DefaultHardwareBufferManagerBase_createVertexBuffer_1ev_1size_1t_1ev_1size_1t_1Usage_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong vertexSize_j, jlong numVerts_j, jint usage_j, jboolean useShadowBuffer_j)
			{
				ev_size_t vertexSize = (ev_size_t) vertexSize_j;
				ev_size_t numVerts = (ev_size_t) numVerts_j;
				EarthView::World::Graphic::CHardwareBuffer::Usage usage = (EarthView::World::Graphic::CHardwareBuffer::Usage) usage_j;
				ev_bool useShadowBuffer = (ev_bool) useShadowBuffer_j;
				EarthView::World::Graphic::CDefaultHardwareBufferManagerBase *pObjectX = (EarthView::World::Graphic::CDefaultHardwareBufferManagerBase*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDefaultHardwareBufferManagerBaseProxy))
				{
					EarthView::World::Graphic::CHardwareVertexBufferSharedPtr __values1 = pObjectX->EarthView::World::Graphic::CDefaultHardwareBufferManagerBase::createVertexBuffer(vertexSize, numVerts, usage, useShadowBuffer);
					EarthView::World::Graphic::CHardwareVertexBufferSharedPtr *returnvalues = new EarthView::World::Graphic::CHardwareVertexBufferSharedPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CHardwareVertexBufferSharedPtr __values1 = pObjectX->createVertexBuffer(vertexSize, numVerts, usage, useShadowBuffer);
					EarthView::World::Graphic::CHardwareVertexBufferSharedPtr *returnvalues = new EarthView::World::Graphic::CHardwareVertexBufferSharedPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultHardwareBufferManagerBase_register_1createVertexBuffer_1ev_1size_1t_1ev_1size_1t_1Usage_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultHardwareBufferManagerBaseProxy *pObjectX = (JCDefaultHardwareBufferManagerBaseProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createVertexBuffer_ev_size_t_ev_size_t_Usage_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createVertexBuffer_ev_size_t_ev_size_t_Usage_ev_bool_callback", "(JJIZ)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_DefaultHardwareBufferManagerBase_createVertexBuffer_1ev_1size_1t_1ev_1size_1t_1Usage_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong vertexSize_j, jlong numVerts_j, jint usage_j, jboolean useShadowBuffer_j)
			{
				ev_size_t vertexSize = (ev_size_t) vertexSize_j;
				ev_size_t numVerts = (ev_size_t) numVerts_j;
				EarthView::World::Graphic::CHardwareBuffer::Usage usage = (EarthView::World::Graphic::CHardwareBuffer::Usage) usage_j;
				ev_bool useShadowBuffer = (ev_bool) useShadowBuffer_j;
				EarthView::World::Graphic::CDefaultHardwareBufferManagerBase *pObjectX = (EarthView::World::Graphic::CDefaultHardwareBufferManagerBase*) pObjXXXX;
				EarthView::World::Graphic::CHardwareVertexBufferSharedPtr __values1 = pObjectX->EarthView::World::Graphic::CDefaultHardwareBufferManagerBase::createVertexBuffer(vertexSize, numVerts, usage, useShadowBuffer);
				EarthView::World::Graphic::CHardwareVertexBufferSharedPtr *returnvalues = new EarthView::World::Graphic::CHardwareVertexBufferSharedPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_DefaultHardwareBufferManagerBase_createVertexBuffer_1ev_1size_1t_1ev_1size_1t_1Usage(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong vertexSize_j, jlong numVerts_j, jint usage_j)
			{
				ev_size_t vertexSize = (ev_size_t) vertexSize_j;
				ev_size_t numVerts = (ev_size_t) numVerts_j;
				EarthView::World::Graphic::CHardwareBuffer::Usage usage = (EarthView::World::Graphic::CHardwareBuffer::Usage) usage_j;
				EarthView::World::Graphic::CDefaultHardwareBufferManagerBase *pObjectX = (EarthView::World::Graphic::CDefaultHardwareBufferManagerBase*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDefaultHardwareBufferManagerBaseProxy))
				{
					EarthView::World::Graphic::CHardwareVertexBufferSharedPtr __values1 = pObjectX->EarthView::World::Graphic::CDefaultHardwareBufferManagerBase::createVertexBuffer(vertexSize, numVerts, usage);
					EarthView::World::Graphic::CHardwareVertexBufferSharedPtr *returnvalues = new EarthView::World::Graphic::CHardwareVertexBufferSharedPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CHardwareVertexBufferSharedPtr __values1 = pObjectX->createVertexBuffer(vertexSize, numVerts, usage);
					EarthView::World::Graphic::CHardwareVertexBufferSharedPtr *returnvalues = new EarthView::World::Graphic::CHardwareVertexBufferSharedPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultHardwareBufferManagerBase_register_1createVertexBuffer_1ev_1size_1t_1ev_1size_1t_1Usage(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultHardwareBufferManagerBaseProxy *pObjectX = (JCDefaultHardwareBufferManagerBaseProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createVertexBuffer_ev_size_t_ev_size_t_Usage_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createVertexBuffer_ev_size_t_ev_size_t_Usage_callback", "(JJI)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_DefaultHardwareBufferManagerBase_createVertexBuffer_1ev_1size_1t_1ev_1size_1t_1Usage_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong vertexSize_j, jlong numVerts_j, jint usage_j)
			{
				ev_size_t vertexSize = (ev_size_t) vertexSize_j;
				ev_size_t numVerts = (ev_size_t) numVerts_j;
				EarthView::World::Graphic::CHardwareBuffer::Usage usage = (EarthView::World::Graphic::CHardwareBuffer::Usage) usage_j;
				EarthView::World::Graphic::CDefaultHardwareBufferManagerBase *pObjectX = (EarthView::World::Graphic::CDefaultHardwareBufferManagerBase*) pObjXXXX;
				EarthView::World::Graphic::CHardwareVertexBufferSharedPtr __values1 = pObjectX->EarthView::World::Graphic::CDefaultHardwareBufferManagerBase::createVertexBuffer(vertexSize, numVerts, usage);
				EarthView::World::Graphic::CHardwareVertexBufferSharedPtr *returnvalues = new EarthView::World::Graphic::CHardwareVertexBufferSharedPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_DefaultHardwareBufferManagerBase_createIndexBuffer_1IndexType_1ev_1size_1t_1Usage_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint itype_j, jlong numIndexes_j, jint usage_j, jboolean useShadowBuffer_j)
			{
				EarthView::World::Graphic::CHardwareIndexBuffer::IndexType itype = (EarthView::World::Graphic::CHardwareIndexBuffer::IndexType) itype_j;
				ev_size_t numIndexes = (ev_size_t) numIndexes_j;
				EarthView::World::Graphic::CHardwareBuffer::Usage usage = (EarthView::World::Graphic::CHardwareBuffer::Usage) usage_j;
				ev_bool useShadowBuffer = (ev_bool) useShadowBuffer_j;
				EarthView::World::Graphic::CDefaultHardwareBufferManagerBase *pObjectX = (EarthView::World::Graphic::CDefaultHardwareBufferManagerBase*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDefaultHardwareBufferManagerBaseProxy))
				{
					EarthView::World::Graphic::CHardwareIndexBufferSharedPtr __values1 = pObjectX->EarthView::World::Graphic::CDefaultHardwareBufferManagerBase::createIndexBuffer(itype, numIndexes, usage, useShadowBuffer);
					EarthView::World::Graphic::CHardwareIndexBufferSharedPtr *returnvalues = new EarthView::World::Graphic::CHardwareIndexBufferSharedPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CHardwareIndexBufferSharedPtr __values1 = pObjectX->createIndexBuffer(itype, numIndexes, usage, useShadowBuffer);
					EarthView::World::Graphic::CHardwareIndexBufferSharedPtr *returnvalues = new EarthView::World::Graphic::CHardwareIndexBufferSharedPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultHardwareBufferManagerBase_register_1createIndexBuffer_1IndexType_1ev_1size_1t_1Usage_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultHardwareBufferManagerBaseProxy *pObjectX = (JCDefaultHardwareBufferManagerBaseProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createIndexBuffer_IndexType_ev_size_t_Usage_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createIndexBuffer_IndexType_ev_size_t_Usage_ev_bool_callback", "(IJIZ)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_DefaultHardwareBufferManagerBase_createIndexBuffer_1IndexType_1ev_1size_1t_1Usage_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint itype_j, jlong numIndexes_j, jint usage_j, jboolean useShadowBuffer_j)
			{
				EarthView::World::Graphic::CHardwareIndexBuffer::IndexType itype = (EarthView::World::Graphic::CHardwareIndexBuffer::IndexType) itype_j;
				ev_size_t numIndexes = (ev_size_t) numIndexes_j;
				EarthView::World::Graphic::CHardwareBuffer::Usage usage = (EarthView::World::Graphic::CHardwareBuffer::Usage) usage_j;
				ev_bool useShadowBuffer = (ev_bool) useShadowBuffer_j;
				EarthView::World::Graphic::CDefaultHardwareBufferManagerBase *pObjectX = (EarthView::World::Graphic::CDefaultHardwareBufferManagerBase*) pObjXXXX;
				EarthView::World::Graphic::CHardwareIndexBufferSharedPtr __values1 = pObjectX->EarthView::World::Graphic::CDefaultHardwareBufferManagerBase::createIndexBuffer(itype, numIndexes, usage, useShadowBuffer);
				EarthView::World::Graphic::CHardwareIndexBufferSharedPtr *returnvalues = new EarthView::World::Graphic::CHardwareIndexBufferSharedPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_DefaultHardwareBufferManagerBase_createIndexBuffer_1IndexType_1ev_1size_1t_1Usage(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint itype_j, jlong numIndexes_j, jint usage_j)
			{
				EarthView::World::Graphic::CHardwareIndexBuffer::IndexType itype = (EarthView::World::Graphic::CHardwareIndexBuffer::IndexType) itype_j;
				ev_size_t numIndexes = (ev_size_t) numIndexes_j;
				EarthView::World::Graphic::CHardwareBuffer::Usage usage = (EarthView::World::Graphic::CHardwareBuffer::Usage) usage_j;
				EarthView::World::Graphic::CDefaultHardwareBufferManagerBase *pObjectX = (EarthView::World::Graphic::CDefaultHardwareBufferManagerBase*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDefaultHardwareBufferManagerBaseProxy))
				{
					EarthView::World::Graphic::CHardwareIndexBufferSharedPtr __values1 = pObjectX->EarthView::World::Graphic::CDefaultHardwareBufferManagerBase::createIndexBuffer(itype, numIndexes, usage);
					EarthView::World::Graphic::CHardwareIndexBufferSharedPtr *returnvalues = new EarthView::World::Graphic::CHardwareIndexBufferSharedPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CHardwareIndexBufferSharedPtr __values1 = pObjectX->createIndexBuffer(itype, numIndexes, usage);
					EarthView::World::Graphic::CHardwareIndexBufferSharedPtr *returnvalues = new EarthView::World::Graphic::CHardwareIndexBufferSharedPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultHardwareBufferManagerBase_register_1createIndexBuffer_1IndexType_1ev_1size_1t_1Usage(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultHardwareBufferManagerBaseProxy *pObjectX = (JCDefaultHardwareBufferManagerBaseProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createIndexBuffer_IndexType_ev_size_t_Usage_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createIndexBuffer_IndexType_ev_size_t_Usage_callback", "(IJI)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_DefaultHardwareBufferManagerBase_createIndexBuffer_1IndexType_1ev_1size_1t_1Usage_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint itype_j, jlong numIndexes_j, jint usage_j)
			{
				EarthView::World::Graphic::CHardwareIndexBuffer::IndexType itype = (EarthView::World::Graphic::CHardwareIndexBuffer::IndexType) itype_j;
				ev_size_t numIndexes = (ev_size_t) numIndexes_j;
				EarthView::World::Graphic::CHardwareBuffer::Usage usage = (EarthView::World::Graphic::CHardwareBuffer::Usage) usage_j;
				EarthView::World::Graphic::CDefaultHardwareBufferManagerBase *pObjectX = (EarthView::World::Graphic::CDefaultHardwareBufferManagerBase*) pObjXXXX;
				EarthView::World::Graphic::CHardwareIndexBufferSharedPtr __values1 = pObjectX->EarthView::World::Graphic::CDefaultHardwareBufferManagerBase::createIndexBuffer(itype, numIndexes, usage);
				EarthView::World::Graphic::CHardwareIndexBufferSharedPtr *returnvalues = new EarthView::World::Graphic::CHardwareIndexBufferSharedPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_DefaultHardwareBufferManagerBase_createRenderToVertexBuffer_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CDefaultHardwareBufferManagerBase *pObjectX = (EarthView::World::Graphic::CDefaultHardwareBufferManagerBase*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDefaultHardwareBufferManagerBaseProxy))
				{
					EarthView::World::Graphic::RenderToVertexBufferSharedPtr __values1 = pObjectX->EarthView::World::Graphic::CDefaultHardwareBufferManagerBase::createRenderToVertexBuffer();
					EarthView::World::Graphic::RenderToVertexBufferSharedPtr *returnvalues = new EarthView::World::Graphic::RenderToVertexBufferSharedPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::RenderToVertexBufferSharedPtr __values1 = pObjectX->createRenderToVertexBuffer();
					EarthView::World::Graphic::RenderToVertexBufferSharedPtr *returnvalues = new EarthView::World::Graphic::RenderToVertexBufferSharedPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultHardwareBufferManagerBase_register_1createRenderToVertexBuffer_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultHardwareBufferManagerBaseProxy *pObjectX = (JCDefaultHardwareBufferManagerBaseProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createRenderToVertexBuffer_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createRenderToVertexBuffer_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_DefaultHardwareBufferManagerBase_createRenderToVertexBuffer_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CDefaultHardwareBufferManagerBase *pObjectX = (EarthView::World::Graphic::CDefaultHardwareBufferManagerBase*) pObjXXXX;
				EarthView::World::Graphic::RenderToVertexBufferSharedPtr __values1 = pObjectX->EarthView::World::Graphic::CDefaultHardwareBufferManagerBase::createRenderToVertexBuffer();
				EarthView::World::Graphic::RenderToVertexBufferSharedPtr *returnvalues = new EarthView::World::Graphic::RenderToVertexBufferSharedPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultHardwareBufferManagerBase_register_1destroyAllDeclarations_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultHardwareBufferManagerBaseProxy *pObjectX = (JCDefaultHardwareBufferManagerBaseProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_destroyAllDeclarations_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"destroyAllDeclarations_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultHardwareBufferManagerBase_register_1destroyAllBindings_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultHardwareBufferManagerBaseProxy *pObjectX = (JCDefaultHardwareBufferManagerBaseProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_destroyAllBindings_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"destroyAllBindings_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultHardwareBufferManagerBase_register_1createVertexDeclarationImpl_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultHardwareBufferManagerBaseProxy *pObjectX = (JCDefaultHardwareBufferManagerBaseProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createVertexDeclarationImpl_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createVertexDeclarationImpl_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultHardwareBufferManagerBase_register_1destroyVertexDeclarationImpl_1CVertexDeclaration(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultHardwareBufferManagerBaseProxy *pObjectX = (JCDefaultHardwareBufferManagerBaseProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_destroyVertexDeclarationImpl_CVertexDeclaration_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"destroyVertexDeclarationImpl_CVertexDeclaration_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultHardwareBufferManagerBase_register_1createVertexBufferBindingImpl_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultHardwareBufferManagerBaseProxy *pObjectX = (JCDefaultHardwareBufferManagerBaseProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createVertexBufferBindingImpl_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createVertexBufferBindingImpl_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultHardwareBufferManagerBase_register_1destroyVertexBufferBindingImpl_1CVertexBufferBinding(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultHardwareBufferManagerBaseProxy *pObjectX = (JCDefaultHardwareBufferManagerBaseProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_destroyVertexBufferBindingImpl_CVertexBufferBinding_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"destroyVertexBufferBindingImpl_CVertexBufferBinding_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultHardwareBufferManagerBase_register_1makeBufferCopy_1CHardwareVertexBufferSharedPtr_1Usage_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultHardwareBufferManagerBaseProxy *pObjectX = (JCDefaultHardwareBufferManagerBaseProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_makeBufferCopy_CHardwareVertexBufferSharedPtr_Usage_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"makeBufferCopy_CHardwareVertexBufferSharedPtr_Usage_ev_bool_callback", "(JIZ)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultHardwareBufferManagerBase_register_1createVertexDeclaration_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultHardwareBufferManagerBaseProxy *pObjectX = (JCDefaultHardwareBufferManagerBaseProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createVertexDeclaration_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createVertexDeclaration_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultHardwareBufferManagerBase_register_1destroyVertexDeclaration_1CVertexDeclaration(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultHardwareBufferManagerBaseProxy *pObjectX = (JCDefaultHardwareBufferManagerBaseProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_destroyVertexDeclaration_CVertexDeclaration_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"destroyVertexDeclaration_CVertexDeclaration_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultHardwareBufferManagerBase_register_1createVertexBufferBinding_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultHardwareBufferManagerBaseProxy *pObjectX = (JCDefaultHardwareBufferManagerBaseProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createVertexBufferBinding_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createVertexBufferBinding_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultHardwareBufferManagerBase_register_1destroyVertexBufferBinding_1CVertexBufferBinding(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultHardwareBufferManagerBaseProxy *pObjectX = (JCDefaultHardwareBufferManagerBaseProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_destroyVertexBufferBinding_CVertexBufferBinding_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"destroyVertexBufferBinding_CVertexBufferBinding_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultHardwareBufferManagerBase_register_1registerVertexBufferSourceAndCopy_1CHardwareVertexBufferSharedPtr_1CHardwareVertexBufferSharedPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultHardwareBufferManagerBaseProxy *pObjectX = (JCDefaultHardwareBufferManagerBaseProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_registerVertexBufferSourceAndCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"registerVertexBufferSourceAndCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_callback", "(JJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultHardwareBufferManagerBase_register_1allocateVertexBufferCopy_1CHardwareVertexBufferSharedPtr_1BufferLicenseType_1CHardwareBufferLicensee_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultHardwareBufferManagerBaseProxy *pObjectX = (JCDefaultHardwareBufferManagerBaseProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_ev_bool_callback", "(JIJZ)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultHardwareBufferManagerBase_register_1allocateVertexBufferCopy_1CHardwareVertexBufferSharedPtr_1BufferLicenseType_1CHardwareBufferLicensee(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultHardwareBufferManagerBaseProxy *pObjectX = (JCDefaultHardwareBufferManagerBaseProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_callback", "(JIJ)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultHardwareBufferManagerBase_register_1releaseVertexBufferCopy_1CHardwareVertexBufferSharedPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultHardwareBufferManagerBaseProxy *pObjectX = (JCDefaultHardwareBufferManagerBaseProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_releaseVertexBufferCopy_CHardwareVertexBufferSharedPtr_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"releaseVertexBufferCopy_CHardwareVertexBufferSharedPtr_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultHardwareBufferManagerBase_register_1touchVertexBufferCopy_1CHardwareVertexBufferSharedPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultHardwareBufferManagerBaseProxy *pObjectX = (JCDefaultHardwareBufferManagerBaseProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_touchVertexBufferCopy_CHardwareVertexBufferSharedPtr_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"touchVertexBufferCopy_CHardwareVertexBufferSharedPtr_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultHardwareBufferManagerBase_register_1_1freeUnusedBufferCopies_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultHardwareBufferManagerBaseProxy *pObjectX = (JCDefaultHardwareBufferManagerBaseProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__freeUnusedBufferCopies_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_freeUnusedBufferCopies_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultHardwareBufferManagerBase_register_1_1releaseBufferCopies_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultHardwareBufferManagerBaseProxy *pObjectX = (JCDefaultHardwareBufferManagerBaseProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__releaseBufferCopies_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_releaseBufferCopies_ev_bool_callback", "(Z)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultHardwareBufferManagerBase_register_1_1releaseBufferCopies_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultHardwareBufferManagerBaseProxy *pObjectX = (JCDefaultHardwareBufferManagerBaseProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__releaseBufferCopies_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_releaseBufferCopies_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultHardwareBufferManagerBase_register_1_1forceReleaseBufferCopies_1CHardwareVertexBufferSharedPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultHardwareBufferManagerBaseProxy *pObjectX = (JCDefaultHardwareBufferManagerBaseProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__forceReleaseBufferCopies_CHardwareVertexBufferSharedPtr_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_forceReleaseBufferCopies_CHardwareVertexBufferSharedPtr_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultHardwareBufferManagerBase_register_1_1forceReleaseBufferCopies_1CHardwareVertexBuffer(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultHardwareBufferManagerBaseProxy *pObjectX = (JCDefaultHardwareBufferManagerBaseProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__forceReleaseBufferCopies_CHardwareVertexBuffer_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_forceReleaseBufferCopies_CHardwareVertexBuffer_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			class JCDefaultHardwareBufferManagerProxy : public EarthView::World::Graphic::CDefaultHardwareBufferManager
			{
			 private:
				EarthView::World::Core::ev_string m_destroyAllDeclarations_void_callback;
				EarthView::World::Core::ev_string m_destroyAllBindings_void_callback;
				EarthView::World::Core::ev_string m_createVertexDeclarationImpl_void_callback;
				EarthView::World::Core::ev_string m_destroyVertexDeclarationImpl_CVertexDeclaration_callback;
				EarthView::World::Core::ev_string m_createVertexBufferBindingImpl_void_callback;
				EarthView::World::Core::ev_string m_destroyVertexBufferBindingImpl_CVertexBufferBinding_callback;
				EarthView::World::Core::ev_string m_makeBufferCopy_CHardwareVertexBufferSharedPtr_Usage_ev_bool_callback;
				EarthView::World::Core::ev_string m_createVertexBuffer_ev_size_t_ev_size_t_Usage_ev_bool_callback;
				EarthView::World::Core::ev_string m_createVertexBuffer_ev_size_t_ev_size_t_Usage_callback;
				EarthView::World::Core::ev_string m_createIndexBuffer_IndexType_ev_size_t_Usage_ev_bool_callback;
				EarthView::World::Core::ev_string m_createIndexBuffer_IndexType_ev_size_t_Usage_callback;
				EarthView::World::Core::ev_string m_createRenderToVertexBuffer_void_callback;
				EarthView::World::Core::ev_string m_createVertexDeclaration_void_callback;
				EarthView::World::Core::ev_string m_destroyVertexDeclaration_CVertexDeclaration_callback;
				EarthView::World::Core::ev_string m_createVertexBufferBinding_void_callback;
				EarthView::World::Core::ev_string m_destroyVertexBufferBinding_CVertexBufferBinding_callback;
				EarthView::World::Core::ev_string m_registerVertexBufferSourceAndCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_callback;
				EarthView::World::Core::ev_string m_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_ev_bool_callback;
				EarthView::World::Core::ev_string m_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_callback;
				EarthView::World::Core::ev_string m_releaseVertexBufferCopy_CHardwareVertexBufferSharedPtr_callback;
				EarthView::World::Core::ev_string m_touchVertexBufferCopy_CHardwareVertexBufferSharedPtr_callback;
				EarthView::World::Core::ev_string m__freeUnusedBufferCopies_void_callback;
				EarthView::World::Core::ev_string m__releaseBufferCopies_ev_bool_callback;
				EarthView::World::Core::ev_string m__releaseBufferCopies_void_callback;
				EarthView::World::Core::ev_string m__forceReleaseBufferCopies_CHardwareVertexBufferSharedPtr_callback;
				EarthView::World::Core::ev_string m__forceReleaseBufferCopies_CHardwareVertexBuffer_callback;
			public:
				JCDefaultHardwareBufferManagerProxy(EarthView::World::Core::CNameValuePairList *pList) : CDefaultHardwareBufferManager(pList)
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
				void register_destroyAllDeclarations_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_destroyAllDeclarations_void_callback = __method;
				}
				void register_destroyAllBindings_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_destroyAllBindings_void_callback = __method;
				}
				void register_createVertexDeclarationImpl_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createVertexDeclarationImpl_void_callback = __method;
				}
				void register_destroyVertexDeclarationImpl_CVertexDeclaration_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_destroyVertexDeclarationImpl_CVertexDeclaration_callback = __method;
				}
				void register_createVertexBufferBindingImpl_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createVertexBufferBindingImpl_void_callback = __method;
				}
				void register_destroyVertexBufferBindingImpl_CVertexBufferBinding_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_destroyVertexBufferBindingImpl_CVertexBufferBinding_callback = __method;
				}
				void register_makeBufferCopy_CHardwareVertexBufferSharedPtr_Usage_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_makeBufferCopy_CHardwareVertexBufferSharedPtr_Usage_ev_bool_callback = __method;
				}
				void register_createVertexBuffer_ev_size_t_ev_size_t_Usage_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createVertexBuffer_ev_size_t_ev_size_t_Usage_ev_bool_callback = __method;
				}
				void register_createVertexBuffer_ev_size_t_ev_size_t_Usage_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createVertexBuffer_ev_size_t_ev_size_t_Usage_callback = __method;
				}
				void register_createIndexBuffer_IndexType_ev_size_t_Usage_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createIndexBuffer_IndexType_ev_size_t_Usage_ev_bool_callback = __method;
				}
				void register_createIndexBuffer_IndexType_ev_size_t_Usage_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createIndexBuffer_IndexType_ev_size_t_Usage_callback = __method;
				}
				void register_createRenderToVertexBuffer_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createRenderToVertexBuffer_void_callback = __method;
				}
				void register_createVertexDeclaration_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createVertexDeclaration_void_callback = __method;
				}
				void register_destroyVertexDeclaration_CVertexDeclaration_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_destroyVertexDeclaration_CVertexDeclaration_callback = __method;
				}
				void register_createVertexBufferBinding_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createVertexBufferBinding_void_callback = __method;
				}
				void register_destroyVertexBufferBinding_CVertexBufferBinding_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_destroyVertexBufferBinding_CVertexBufferBinding_callback = __method;
				}
				void register_registerVertexBufferSourceAndCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_registerVertexBufferSourceAndCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_callback = __method;
				}
				void register_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_ev_bool_callback = __method;
				}
				void register_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_callback = __method;
				}
				void register_releaseVertexBufferCopy_CHardwareVertexBufferSharedPtr_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_releaseVertexBufferCopy_CHardwareVertexBufferSharedPtr_callback = __method;
				}
				void register_touchVertexBufferCopy_CHardwareVertexBufferSharedPtr_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_touchVertexBufferCopy_CHardwareVertexBufferSharedPtr_callback = __method;
				}
				void register__freeUnusedBufferCopies_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__freeUnusedBufferCopies_void_callback = __method;
				}
				void register__releaseBufferCopies_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__releaseBufferCopies_ev_bool_callback = __method;
				}
				void register__releaseBufferCopies_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__releaseBufferCopies_void_callback = __method;
				}
				void register__forceReleaseBufferCopies_CHardwareVertexBufferSharedPtr_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__forceReleaseBufferCopies_CHardwareVertexBufferSharedPtr_callback = __method;
				}
				void register__forceReleaseBufferCopies_CHardwareVertexBuffer_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__forceReleaseBufferCopies_CHardwareVertexBuffer_callback = __method;
				}
				virtual EarthView::World::Graphic::CHardwareVertexBufferSharedPtr createVertexBuffer(ev_size_t vertexSize, ev_size_t numVerts, EarthView::World::Graphic::CHardwareBuffer::Usage usage, ev_bool useShadowBuffer)
				{
					if (this->_gRef != NULL && this->m_createVertexBuffer_ev_size_t_ev_size_t_Usage_ev_bool_callback != "" && this->isCustomExtend())
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
						jlong vertexSize_j = (jlong) vertexSize;
						jlong numVerts_j = (jlong) numVerts;
						jint usage_j = (jint) usage;
						jboolean useShadowBuffer_j = (jboolean) useShadowBuffer;
						jmethodID __method = __gr->getMethod("createVertexBuffer_ev_size_t_ev_size_t_Usage_ev_bool_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , vertexSize_j, numVerts_j, usage_j, useShadowBuffer_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CHardwareVertexBufferSharedPtr __values1 = *(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CDefaultHardwareBufferManager::createVertexBuffer(vertexSize, numVerts, usage, useShadowBuffer);
					}
				}
				virtual EarthView::World::Graphic::CHardwareVertexBufferSharedPtr createVertexBuffer(ev_size_t vertexSize, ev_size_t numVerts, EarthView::World::Graphic::CHardwareBuffer::Usage usage)
				{
					if (this->_gRef != NULL && this->m_createVertexBuffer_ev_size_t_ev_size_t_Usage_callback != "" && this->isCustomExtend())
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
						jlong vertexSize_j = (jlong) vertexSize;
						jlong numVerts_j = (jlong) numVerts;
						jint usage_j = (jint) usage;
						jmethodID __method = __gr->getMethod("createVertexBuffer_ev_size_t_ev_size_t_Usage_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , vertexSize_j, numVerts_j, usage_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CHardwareVertexBufferSharedPtr __values1 = *(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CDefaultHardwareBufferManager::createVertexBuffer(vertexSize, numVerts, usage);
					}
				}
				virtual EarthView::World::Graphic::CHardwareIndexBufferSharedPtr createIndexBuffer(EarthView::World::Graphic::CHardwareIndexBuffer::IndexType itype, ev_size_t numIndexes, EarthView::World::Graphic::CHardwareBuffer::Usage usage, ev_bool useShadowBuffer)
				{
					if (this->_gRef != NULL && this->m_createIndexBuffer_IndexType_ev_size_t_Usage_ev_bool_callback != "" && this->isCustomExtend())
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
						jint itype_j = (jint) itype;
						jlong numIndexes_j = (jlong) numIndexes;
						jint usage_j = (jint) usage;
						jboolean useShadowBuffer_j = (jboolean) useShadowBuffer;
						jmethodID __method = __gr->getMethod("createIndexBuffer_IndexType_ev_size_t_Usage_ev_bool_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , itype_j, numIndexes_j, usage_j, useShadowBuffer_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CHardwareIndexBufferSharedPtr __values1 = *(EarthView::World::Graphic::CHardwareIndexBufferSharedPtr*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CDefaultHardwareBufferManager::createIndexBuffer(itype, numIndexes, usage, useShadowBuffer);
					}
				}
				virtual EarthView::World::Graphic::CHardwareIndexBufferSharedPtr createIndexBuffer(EarthView::World::Graphic::CHardwareIndexBuffer::IndexType itype, ev_size_t numIndexes, EarthView::World::Graphic::CHardwareBuffer::Usage usage)
				{
					if (this->_gRef != NULL && this->m_createIndexBuffer_IndexType_ev_size_t_Usage_callback != "" && this->isCustomExtend())
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
						jint itype_j = (jint) itype;
						jlong numIndexes_j = (jlong) numIndexes;
						jint usage_j = (jint) usage;
						jmethodID __method = __gr->getMethod("createIndexBuffer_IndexType_ev_size_t_Usage_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , itype_j, numIndexes_j, usage_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CHardwareIndexBufferSharedPtr __values1 = *(EarthView::World::Graphic::CHardwareIndexBufferSharedPtr*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CDefaultHardwareBufferManager::createIndexBuffer(itype, numIndexes, usage);
					}
				}
				virtual EarthView::World::Graphic::RenderToVertexBufferSharedPtr createRenderToVertexBuffer()
				{
					if (this->_gRef != NULL && this->m_createRenderToVertexBuffer_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("createRenderToVertexBuffer_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::RenderToVertexBufferSharedPtr __values1 = *(EarthView::World::Graphic::RenderToVertexBufferSharedPtr*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CDefaultHardwareBufferManager::createRenderToVertexBuffer();
					}
				}
				virtual EarthView::World::Graphic::CVertexDeclaration* createVertexDeclaration()
				{
					if (this->_gRef != NULL && this->m_createVertexDeclaration_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("createVertexDeclaration_void_callback");
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
						return this->CDefaultHardwareBufferManager::createVertexDeclaration();
					}
				}
				virtual void destroyVertexDeclaration(EarthView::World::Graphic::CVertexDeclaration* decl)
				{
					if (this->_gRef != NULL && this->m_destroyVertexDeclaration_CVertexDeclaration_callback != "" && this->isCustomExtend())
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
						jlong decl_j = (jlong) decl;
						jmethodID __method = __gr->getMethod("destroyVertexDeclaration_CVertexDeclaration_callback");
						__env->CallVoidMethod(__obj, __method , decl_j);
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
						return this->CDefaultHardwareBufferManager::destroyVertexDeclaration(decl);
					}
				}
				virtual EarthView::World::Graphic::CVertexBufferBinding* createVertexBufferBinding()
				{
					if (this->_gRef != NULL && this->m_createVertexBufferBinding_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("createVertexBufferBinding_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CVertexBufferBinding *__values1 = (EarthView::World::Graphic::CVertexBufferBinding*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CDefaultHardwareBufferManager::createVertexBufferBinding();
					}
				}
				virtual void destroyVertexBufferBinding(EarthView::World::Graphic::CVertexBufferBinding* binding)
				{
					if (this->_gRef != NULL && this->m_destroyVertexBufferBinding_CVertexBufferBinding_callback != "" && this->isCustomExtend())
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
						jlong binding_j = (jlong) binding;
						jmethodID __method = __gr->getMethod("destroyVertexBufferBinding_CVertexBufferBinding_callback");
						__env->CallVoidMethod(__obj, __method , binding_j);
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
						return this->CDefaultHardwareBufferManager::destroyVertexBufferBinding(binding);
					}
				}
				virtual void registerVertexBufferSourceAndCopy(const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr& sourceBuffer, const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr& copy)
				{
					if (this->_gRef != NULL && this->m_registerVertexBufferSourceAndCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_callback != "" && this->isCustomExtend())
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
						jlong sourceBuffer_j = (jlong) &sourceBuffer;
						jlong copy_j = (jlong) &copy;
						jmethodID __method = __gr->getMethod("registerVertexBufferSourceAndCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_callback");
						__env->CallVoidMethod(__obj, __method , sourceBuffer_j, copy_j);
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
						return this->CDefaultHardwareBufferManager::registerVertexBufferSourceAndCopy(sourceBuffer, copy);
					}
				}
				virtual EarthView::World::Graphic::CHardwareVertexBufferSharedPtr allocateVertexBufferCopy(const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr& sourceBuffer, EarthView::World::Graphic::CHardwareBufferManagerBase::BufferLicenseType licenseType, EarthView::World::Graphic::CHardwareBufferLicensee* licensee, ev_bool copyData)
				{
					if (this->_gRef != NULL && this->m_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_ev_bool_callback != "" && this->isCustomExtend())
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
						jlong sourceBuffer_j = (jlong) &sourceBuffer;
						jint licenseType_j = (jint) licenseType;
						jlong licensee_j = (jlong) licensee;
						jboolean copyData_j = (jboolean) copyData;
						jmethodID __method = __gr->getMethod("allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_ev_bool_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , sourceBuffer_j, licenseType_j, licensee_j, copyData_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CHardwareVertexBufferSharedPtr __values1 = *(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CDefaultHardwareBufferManager::allocateVertexBufferCopy(sourceBuffer, licenseType, licensee, copyData);
					}
				}
				virtual EarthView::World::Graphic::CHardwareVertexBufferSharedPtr allocateVertexBufferCopy(const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr& sourceBuffer, EarthView::World::Graphic::CHardwareBufferManagerBase::BufferLicenseType licenseType, EarthView::World::Graphic::CHardwareBufferLicensee* licensee)
				{
					if (this->_gRef != NULL && this->m_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_callback != "" && this->isCustomExtend())
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
						jlong sourceBuffer_j = (jlong) &sourceBuffer;
						jint licenseType_j = (jint) licenseType;
						jlong licensee_j = (jlong) licensee;
						jmethodID __method = __gr->getMethod("allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , sourceBuffer_j, licenseType_j, licensee_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CHardwareVertexBufferSharedPtr __values1 = *(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CDefaultHardwareBufferManager::allocateVertexBufferCopy(sourceBuffer, licenseType, licensee);
					}
				}
				virtual void releaseVertexBufferCopy(const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr& bufferCopy)
				{
					if (this->_gRef != NULL && this->m_releaseVertexBufferCopy_CHardwareVertexBufferSharedPtr_callback != "" && this->isCustomExtend())
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
						jlong bufferCopy_j = (jlong) &bufferCopy;
						jmethodID __method = __gr->getMethod("releaseVertexBufferCopy_CHardwareVertexBufferSharedPtr_callback");
						__env->CallVoidMethod(__obj, __method , bufferCopy_j);
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
						return this->CDefaultHardwareBufferManager::releaseVertexBufferCopy(bufferCopy);
					}
				}
				virtual void touchVertexBufferCopy(const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr& bufferCopy)
				{
					if (this->_gRef != NULL && this->m_touchVertexBufferCopy_CHardwareVertexBufferSharedPtr_callback != "" && this->isCustomExtend())
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
						jlong bufferCopy_j = (jlong) &bufferCopy;
						jmethodID __method = __gr->getMethod("touchVertexBufferCopy_CHardwareVertexBufferSharedPtr_callback");
						__env->CallVoidMethod(__obj, __method , bufferCopy_j);
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
						return this->CDefaultHardwareBufferManager::touchVertexBufferCopy(bufferCopy);
					}
				}
				virtual void _freeUnusedBufferCopies()
				{
					if (this->_gRef != NULL && this->m__freeUnusedBufferCopies_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("_freeUnusedBufferCopies_void_callback");
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
						return this->CDefaultHardwareBufferManager::_freeUnusedBufferCopies();
					}
				}
				virtual void _releaseBufferCopies(ev_bool forceFreeUnused)
				{
					if (this->_gRef != NULL && this->m__releaseBufferCopies_ev_bool_callback != "" && this->isCustomExtend())
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
						jboolean forceFreeUnused_j = (jboolean) forceFreeUnused;
						jmethodID __method = __gr->getMethod("_releaseBufferCopies_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , forceFreeUnused_j);
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
						return this->CDefaultHardwareBufferManager::_releaseBufferCopies(forceFreeUnused);
					}
				}
				virtual void _releaseBufferCopies()
				{
					if (this->_gRef != NULL && this->m__releaseBufferCopies_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("_releaseBufferCopies_void_callback");
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
						return this->CDefaultHardwareBufferManager::_releaseBufferCopies();
					}
				}
				virtual void _forceReleaseBufferCopies(const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr& sourceBuffer)
				{
					if (this->_gRef != NULL && this->m__forceReleaseBufferCopies_CHardwareVertexBufferSharedPtr_callback != "" && this->isCustomExtend())
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
						jlong sourceBuffer_j = (jlong) &sourceBuffer;
						jmethodID __method = __gr->getMethod("_forceReleaseBufferCopies_CHardwareVertexBufferSharedPtr_callback");
						__env->CallVoidMethod(__obj, __method , sourceBuffer_j);
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
						return this->CDefaultHardwareBufferManager::_forceReleaseBufferCopies(sourceBuffer);
					}
				}
				virtual void _forceReleaseBufferCopies(EarthView::World::Graphic::CHardwareVertexBuffer* sourceBuffer)
				{
					if (this->_gRef != NULL && this->m__forceReleaseBufferCopies_CHardwareVertexBuffer_callback != "" && this->isCustomExtend())
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
						jlong sourceBuffer_j = (jlong) sourceBuffer;
						jmethodID __method = __gr->getMethod("_forceReleaseBufferCopies_CHardwareVertexBuffer_callback");
						__env->CallVoidMethod(__obj, __method , sourceBuffer_j);
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
						return this->CDefaultHardwareBufferManager::_forceReleaseBufferCopies(sourceBuffer);
					}
				}
				virtual void destroyAllDeclarations()
				{
					if (this->_gRef != NULL && this->m_destroyAllDeclarations_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("destroyAllDeclarations_void_callback");
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
						return this->CDefaultHardwareBufferManager::destroyAllDeclarations();
					}
				}
				virtual void destroyAllBindings()
				{
					if (this->_gRef != NULL && this->m_destroyAllBindings_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("destroyAllBindings_void_callback");
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
						return this->CDefaultHardwareBufferManager::destroyAllBindings();
					}
				}
				virtual EarthView::World::Graphic::CVertexDeclaration* createVertexDeclarationImpl()
				{
					if (this->_gRef != NULL && this->m_createVertexDeclarationImpl_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("createVertexDeclarationImpl_void_callback");
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
						if(__values1 != NULL) {
							((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(false);
						}
						return __values1;
					}
					else
					{
						return this->CDefaultHardwareBufferManager::createVertexDeclarationImpl();
					}
				}
				virtual void destroyVertexDeclarationImpl(EarthView::World::Graphic::CVertexDeclaration* decl)
				{
					if (this->_gRef != NULL && this->m_destroyVertexDeclarationImpl_CVertexDeclaration_callback != "" && this->isCustomExtend())
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
						jlong decl_j = (jlong) decl;
						jmethodID __method = __gr->getMethod("destroyVertexDeclarationImpl_CVertexDeclaration_callback");
						__env->CallVoidMethod(__obj, __method , decl_j);
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
						return this->CDefaultHardwareBufferManager::destroyVertexDeclarationImpl(decl);
					}
				}
				virtual EarthView::World::Graphic::CVertexBufferBinding* createVertexBufferBindingImpl()
				{
					if (this->_gRef != NULL && this->m_createVertexBufferBindingImpl_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("createVertexBufferBindingImpl_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CVertexBufferBinding *__values1 = (EarthView::World::Graphic::CVertexBufferBinding*) __values1_j;
						if(__values1 != NULL) {
							((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(false);
						}
						return __values1;
					}
					else
					{
						return this->CDefaultHardwareBufferManager::createVertexBufferBindingImpl();
					}
				}
				virtual void destroyVertexBufferBindingImpl(EarthView::World::Graphic::CVertexBufferBinding* binding)
				{
					if (this->_gRef != NULL && this->m_destroyVertexBufferBindingImpl_CVertexBufferBinding_callback != "" && this->isCustomExtend())
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
						jlong binding_j = (jlong) binding;
						jmethodID __method = __gr->getMethod("destroyVertexBufferBindingImpl_CVertexBufferBinding_callback");
						__env->CallVoidMethod(__obj, __method , binding_j);
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
						return this->CDefaultHardwareBufferManager::destroyVertexBufferBindingImpl(binding);
					}
				}
				virtual EarthView::World::Graphic::CHardwareVertexBufferSharedPtr makeBufferCopy(const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr& source, EarthView::World::Graphic::CHardwareBuffer::Usage usage, ev_bool useShadowBuffer)
				{
					if (this->_gRef != NULL && this->m_makeBufferCopy_CHardwareVertexBufferSharedPtr_Usage_ev_bool_callback != "" && this->isCustomExtend())
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
						jlong source_j = (jlong) &source;
						jint usage_j = (jint) usage;
						jboolean useShadowBuffer_j = (jboolean) useShadowBuffer;
						jmethodID __method = __gr->getMethod("makeBufferCopy_CHardwareVertexBufferSharedPtr_Usage_ev_bool_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , source_j, usage_j, useShadowBuffer_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CHardwareVertexBufferSharedPtr __values1 = *(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CDefaultHardwareBufferManager::makeBufferCopy(source, usage, useShadowBuffer);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCDefaultHardwareBufferManagerProxy);
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_DefaultHardwareBufferManager_getSingleton_1void(JNIEnv *__env , jclass __clazz)
			{
				EarthView::World::Graphic::CDefaultHardwareBufferManager& __values1 = EarthView::World::Graphic::CDefaultHardwareBufferManager::getSingleton();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_DefaultHardwareBufferManager_getSingletonPtr_1void(JNIEnv *__env , jclass __clazz)
			{
				EarthView::World::Graphic::CDefaultHardwareBufferManager* __values1 = EarthView::World::Graphic::CDefaultHardwareBufferManager::getSingletonPtr();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultHardwareBufferManager_register_1destroyAllDeclarations_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultHardwareBufferManagerProxy *pObjectX = (JCDefaultHardwareBufferManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_destroyAllDeclarations_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"destroyAllDeclarations_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultHardwareBufferManager_register_1destroyAllBindings_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultHardwareBufferManagerProxy *pObjectX = (JCDefaultHardwareBufferManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_destroyAllBindings_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"destroyAllBindings_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultHardwareBufferManager_register_1createVertexDeclarationImpl_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultHardwareBufferManagerProxy *pObjectX = (JCDefaultHardwareBufferManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createVertexDeclarationImpl_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createVertexDeclarationImpl_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultHardwareBufferManager_register_1destroyVertexDeclarationImpl_1CVertexDeclaration(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultHardwareBufferManagerProxy *pObjectX = (JCDefaultHardwareBufferManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_destroyVertexDeclarationImpl_CVertexDeclaration_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"destroyVertexDeclarationImpl_CVertexDeclaration_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultHardwareBufferManager_register_1createVertexBufferBindingImpl_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultHardwareBufferManagerProxy *pObjectX = (JCDefaultHardwareBufferManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createVertexBufferBindingImpl_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createVertexBufferBindingImpl_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultHardwareBufferManager_register_1destroyVertexBufferBindingImpl_1CVertexBufferBinding(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultHardwareBufferManagerProxy *pObjectX = (JCDefaultHardwareBufferManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_destroyVertexBufferBindingImpl_CVertexBufferBinding_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"destroyVertexBufferBindingImpl_CVertexBufferBinding_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultHardwareBufferManager_register_1makeBufferCopy_1CHardwareVertexBufferSharedPtr_1Usage_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultHardwareBufferManagerProxy *pObjectX = (JCDefaultHardwareBufferManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_makeBufferCopy_CHardwareVertexBufferSharedPtr_Usage_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"makeBufferCopy_CHardwareVertexBufferSharedPtr_Usage_ev_bool_callback", "(JIZ)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultHardwareBufferManager_register_1createVertexBuffer_1ev_1size_1t_1ev_1size_1t_1Usage_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultHardwareBufferManagerProxy *pObjectX = (JCDefaultHardwareBufferManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createVertexBuffer_ev_size_t_ev_size_t_Usage_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createVertexBuffer_ev_size_t_ev_size_t_Usage_ev_bool_callback", "(JJIZ)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultHardwareBufferManager_register_1createVertexBuffer_1ev_1size_1t_1ev_1size_1t_1Usage(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultHardwareBufferManagerProxy *pObjectX = (JCDefaultHardwareBufferManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createVertexBuffer_ev_size_t_ev_size_t_Usage_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createVertexBuffer_ev_size_t_ev_size_t_Usage_callback", "(JJI)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultHardwareBufferManager_register_1createIndexBuffer_1IndexType_1ev_1size_1t_1Usage_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultHardwareBufferManagerProxy *pObjectX = (JCDefaultHardwareBufferManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createIndexBuffer_IndexType_ev_size_t_Usage_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createIndexBuffer_IndexType_ev_size_t_Usage_ev_bool_callback", "(IJIZ)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultHardwareBufferManager_register_1createIndexBuffer_1IndexType_1ev_1size_1t_1Usage(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultHardwareBufferManagerProxy *pObjectX = (JCDefaultHardwareBufferManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createIndexBuffer_IndexType_ev_size_t_Usage_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createIndexBuffer_IndexType_ev_size_t_Usage_callback", "(IJI)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultHardwareBufferManager_register_1createRenderToVertexBuffer_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultHardwareBufferManagerProxy *pObjectX = (JCDefaultHardwareBufferManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createRenderToVertexBuffer_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createRenderToVertexBuffer_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultHardwareBufferManager_register_1createVertexDeclaration_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultHardwareBufferManagerProxy *pObjectX = (JCDefaultHardwareBufferManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createVertexDeclaration_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createVertexDeclaration_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultHardwareBufferManager_register_1destroyVertexDeclaration_1CVertexDeclaration(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultHardwareBufferManagerProxy *pObjectX = (JCDefaultHardwareBufferManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_destroyVertexDeclaration_CVertexDeclaration_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"destroyVertexDeclaration_CVertexDeclaration_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultHardwareBufferManager_register_1createVertexBufferBinding_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultHardwareBufferManagerProxy *pObjectX = (JCDefaultHardwareBufferManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createVertexBufferBinding_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createVertexBufferBinding_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultHardwareBufferManager_register_1destroyVertexBufferBinding_1CVertexBufferBinding(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultHardwareBufferManagerProxy *pObjectX = (JCDefaultHardwareBufferManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_destroyVertexBufferBinding_CVertexBufferBinding_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"destroyVertexBufferBinding_CVertexBufferBinding_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultHardwareBufferManager_register_1registerVertexBufferSourceAndCopy_1CHardwareVertexBufferSharedPtr_1CHardwareVertexBufferSharedPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultHardwareBufferManagerProxy *pObjectX = (JCDefaultHardwareBufferManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_registerVertexBufferSourceAndCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"registerVertexBufferSourceAndCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_callback", "(JJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultHardwareBufferManager_register_1allocateVertexBufferCopy_1CHardwareVertexBufferSharedPtr_1BufferLicenseType_1CHardwareBufferLicensee_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultHardwareBufferManagerProxy *pObjectX = (JCDefaultHardwareBufferManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_ev_bool_callback", "(JIJZ)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultHardwareBufferManager_register_1allocateVertexBufferCopy_1CHardwareVertexBufferSharedPtr_1BufferLicenseType_1CHardwareBufferLicensee(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultHardwareBufferManagerProxy *pObjectX = (JCDefaultHardwareBufferManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_callback", "(JIJ)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultHardwareBufferManager_register_1releaseVertexBufferCopy_1CHardwareVertexBufferSharedPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultHardwareBufferManagerProxy *pObjectX = (JCDefaultHardwareBufferManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_releaseVertexBufferCopy_CHardwareVertexBufferSharedPtr_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"releaseVertexBufferCopy_CHardwareVertexBufferSharedPtr_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultHardwareBufferManager_register_1touchVertexBufferCopy_1CHardwareVertexBufferSharedPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultHardwareBufferManagerProxy *pObjectX = (JCDefaultHardwareBufferManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_touchVertexBufferCopy_CHardwareVertexBufferSharedPtr_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"touchVertexBufferCopy_CHardwareVertexBufferSharedPtr_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultHardwareBufferManager_register_1_1freeUnusedBufferCopies_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultHardwareBufferManagerProxy *pObjectX = (JCDefaultHardwareBufferManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__freeUnusedBufferCopies_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_freeUnusedBufferCopies_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultHardwareBufferManager_register_1_1releaseBufferCopies_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultHardwareBufferManagerProxy *pObjectX = (JCDefaultHardwareBufferManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__releaseBufferCopies_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_releaseBufferCopies_ev_bool_callback", "(Z)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultHardwareBufferManager_register_1_1releaseBufferCopies_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultHardwareBufferManagerProxy *pObjectX = (JCDefaultHardwareBufferManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__releaseBufferCopies_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_releaseBufferCopies_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultHardwareBufferManager_register_1_1forceReleaseBufferCopies_1CHardwareVertexBufferSharedPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultHardwareBufferManagerProxy *pObjectX = (JCDefaultHardwareBufferManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__forceReleaseBufferCopies_CHardwareVertexBufferSharedPtr_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_forceReleaseBufferCopies_CHardwareVertexBufferSharedPtr_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DefaultHardwareBufferManager_register_1_1forceReleaseBufferCopies_1CHardwareVertexBuffer(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDefaultHardwareBufferManagerProxy *pObjectX = (JCDefaultHardwareBufferManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__forceReleaseBufferCopies_CHardwareVertexBuffer_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_forceReleaseBufferCopies_CHardwareVertexBuffer_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
		}
	}
}
