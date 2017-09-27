/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/hardwarebuffer.h"
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
			class JCHardwareBufferProxy : public EarthView::World::Graphic::CHardwareBuffer
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
				JCHardwareBufferProxy(EarthView::World::Core::CNameValuePairList *pList) : CHardwareBuffer(pList)
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
						return this->CHardwareBuffer::lockImpl(offset, length, options);
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
						return this->CHardwareBuffer::unlockImpl();
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
						return this->CHardwareBuffer::lock(offset, length, options);
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
						return this->CHardwareBuffer::unlock();
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
						return this->CHardwareBuffer::readData(offset, length, pDest);
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
						return this->CHardwareBuffer::writeData(offset, length, pSource, discardWholeBuffer);
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
						return this->CHardwareBuffer::writeData(offset, length, pSource);
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
						return this->CHardwareBuffer::copyData(srcBuffer, srcOffset, dstOffset, length, discardWholeBuffer);
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
						return this->CHardwareBuffer::copyData(srcBuffer, srcOffset, dstOffset, length);
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
						return this->CHardwareBuffer::copyData(srcBuffer);
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
						return this->CHardwareBuffer::_updateFromShadow();
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCHardwareBufferProxy);
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_graphic_HardwareBuffer_00024UsageHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					CHardwareBuffer::HBU_STATIC,
					CHardwareBuffer::HBU_DYNAMIC,
					CHardwareBuffer::HBU_WRITE_ONLY,
					CHardwareBuffer::HBU_DISCARDABLE,
					CHardwareBuffer::HBU_STATIC_WRITE_ONLY,
					CHardwareBuffer::HBU_DYNAMIC_WRITE_ONLY,
					CHardwareBuffer::HBU_DYNAMIC_WRITE_ONLY_DISCARDABLE
				};
				jintArray array = __env->NewIntArray(7);
				__env->SetIntArrayRegion(array, 0, 7, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_graphic_HardwareBuffer_00024LockOptionsHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					CHardwareBuffer::HBL_NORMAL,
					CHardwareBuffer::HBL_DISCARD,
					CHardwareBuffer::HBL_READ_ONLY,
					CHardwareBuffer::HBL_NO_OVERWRITE
				};
				jintArray array = __env->NewIntArray(4);
				__env->SetIntArrayRegion(array, 0, 4, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_HardwareBuffer_lockImpl_1ev_1size_1t_1ev_1size_1t_1LockOptions(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong offset_j, jlong length_j, jint options_j)
			{
				ev_size_t offset = (ev_size_t) offset_j;
				ev_size_t length = (ev_size_t) length_j;
				EarthView::World::Graphic::CHardwareBuffer::LockOptions options = (EarthView::World::Graphic::CHardwareBuffer::LockOptions) options_j;
				EarthView::World::Graphic::CHardwareBuffer *pObjectX = (EarthView::World::Graphic::CHardwareBuffer*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCHardwareBufferProxy))
				{
					void* __values1 = pObjectX->EarthView::World::Graphic::CHardwareBuffer::lockImpl(offset, length, options);
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBuffer_register_1lockImpl_1ev_1size_1t_1ev_1size_1t_1LockOptions(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHardwareBufferProxy *pObjectX = (JCHardwareBufferProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_HardwareBuffer_lockImpl_1ev_1size_1t_1ev_1size_1t_1LockOptions_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong offset_j, jlong length_j, jint options_j)
			{
				ev_size_t offset = (ev_size_t) offset_j;
				ev_size_t length = (ev_size_t) length_j;
				EarthView::World::Graphic::CHardwareBuffer::LockOptions options = (EarthView::World::Graphic::CHardwareBuffer::LockOptions) options_j;
				EarthView::World::Graphic::CHardwareBuffer *pObjectX = (EarthView::World::Graphic::CHardwareBuffer*) pObjXXXX;
				void* __values1 = pObjectX->EarthView::World::Graphic::CHardwareBuffer::lockImpl(offset, length, options);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBuffer_unlockImpl_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CHardwareBuffer *pObjectX = (EarthView::World::Graphic::CHardwareBuffer*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCHardwareBufferProxy))
				{
					pObjectX->EarthView::World::Graphic::CHardwareBuffer::unlockImpl();
				}
				else
				{
					pObjectX->unlockImpl();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBuffer_register_1unlockImpl_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHardwareBufferProxy *pObjectX = (JCHardwareBufferProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBuffer_unlockImpl_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CHardwareBuffer *pObjectX = (EarthView::World::Graphic::CHardwareBuffer*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CHardwareBuffer::unlockImpl();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_HardwareBuffer_lock_1ev_1size_1t_1ev_1size_1t_1LockOptions(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong offset_j, jlong length_j, jint options_j)
			{
				ev_size_t offset = (ev_size_t) offset_j;
				ev_size_t length = (ev_size_t) length_j;
				EarthView::World::Graphic::CHardwareBuffer::LockOptions options = (EarthView::World::Graphic::CHardwareBuffer::LockOptions) options_j;
				EarthView::World::Graphic::CHardwareBuffer *pObjectX = (EarthView::World::Graphic::CHardwareBuffer*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCHardwareBufferProxy))
				{
					void* __values1 = pObjectX->EarthView::World::Graphic::CHardwareBuffer::lock(offset, length, options);
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBuffer_register_1lock_1ev_1size_1t_1ev_1size_1t_1LockOptions(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHardwareBufferProxy *pObjectX = (JCHardwareBufferProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_HardwareBuffer_lock_1ev_1size_1t_1ev_1size_1t_1LockOptions_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong offset_j, jlong length_j, jint options_j)
			{
				ev_size_t offset = (ev_size_t) offset_j;
				ev_size_t length = (ev_size_t) length_j;
				EarthView::World::Graphic::CHardwareBuffer::LockOptions options = (EarthView::World::Graphic::CHardwareBuffer::LockOptions) options_j;
				EarthView::World::Graphic::CHardwareBuffer *pObjectX = (EarthView::World::Graphic::CHardwareBuffer*) pObjXXXX;
				void* __values1 = pObjectX->EarthView::World::Graphic::CHardwareBuffer::lock(offset, length, options);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_HardwareBuffer_lock_1LockOptions(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint options_j)
			{
				EarthView::World::Graphic::CHardwareBuffer::LockOptions options = (EarthView::World::Graphic::CHardwareBuffer::LockOptions) options_j;
				EarthView::World::Graphic::CHardwareBuffer *pObjectX = (EarthView::World::Graphic::CHardwareBuffer*) pObjXXXX;
				void* __values1 = pObjectX->lock(options);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBuffer_unlock_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CHardwareBuffer *pObjectX = (EarthView::World::Graphic::CHardwareBuffer*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCHardwareBufferProxy))
				{
					pObjectX->EarthView::World::Graphic::CHardwareBuffer::unlock();
				}
				else
				{
					pObjectX->unlock();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBuffer_register_1unlock_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHardwareBufferProxy *pObjectX = (JCHardwareBufferProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBuffer_unlock_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CHardwareBuffer *pObjectX = (EarthView::World::Graphic::CHardwareBuffer*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CHardwareBuffer::unlock();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBuffer_readData_1ev_1size_1t_1ev_1size_1t_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong offset_j, jlong length_j, jlong pDest_j)
			{
				ev_size_t offset = (ev_size_t) offset_j;
				ev_size_t length = (ev_size_t) length_j;
				void *pDest = (void*) pDest_j;
				EarthView::World::Graphic::CHardwareBuffer *pObjectX = (EarthView::World::Graphic::CHardwareBuffer*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCHardwareBufferProxy))
				{
					pObjectX->EarthView::World::Graphic::CHardwareBuffer::readData(offset, length, pDest);
				}
				else
				{
					pObjectX->readData(offset, length, pDest);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBuffer_register_1readData_1ev_1size_1t_1ev_1size_1t_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHardwareBufferProxy *pObjectX = (JCHardwareBufferProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBuffer_readData_1ev_1size_1t_1ev_1size_1t_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong offset_j, jlong length_j, jlong pDest_j)
			{
				ev_size_t offset = (ev_size_t) offset_j;
				ev_size_t length = (ev_size_t) length_j;
				void *pDest = (void*) pDest_j;
				EarthView::World::Graphic::CHardwareBuffer *pObjectX = (EarthView::World::Graphic::CHardwareBuffer*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CHardwareBuffer::readData(offset, length, pDest);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBuffer_writeData_1ev_1size_1t_1ev_1size_1t_1void_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong offset_j, jlong length_j, jlong pSource_j, jboolean discardWholeBuffer_j)
			{
				ev_size_t offset = (ev_size_t) offset_j;
				ev_size_t length = (ev_size_t) length_j;
				const void *pSource = (const void*) pSource_j;
				ev_bool discardWholeBuffer = (ev_bool) discardWholeBuffer_j;
				EarthView::World::Graphic::CHardwareBuffer *pObjectX = (EarthView::World::Graphic::CHardwareBuffer*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCHardwareBufferProxy))
				{
					pObjectX->EarthView::World::Graphic::CHardwareBuffer::writeData(offset, length, pSource, discardWholeBuffer);
				}
				else
				{
					pObjectX->writeData(offset, length, pSource, discardWholeBuffer);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBuffer_register_1writeData_1ev_1size_1t_1ev_1size_1t_1void_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHardwareBufferProxy *pObjectX = (JCHardwareBufferProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBuffer_writeData_1ev_1size_1t_1ev_1size_1t_1void_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong offset_j, jlong length_j, jlong pSource_j, jboolean discardWholeBuffer_j)
			{
				ev_size_t offset = (ev_size_t) offset_j;
				ev_size_t length = (ev_size_t) length_j;
				const void *pSource = (const void*) pSource_j;
				ev_bool discardWholeBuffer = (ev_bool) discardWholeBuffer_j;
				EarthView::World::Graphic::CHardwareBuffer *pObjectX = (EarthView::World::Graphic::CHardwareBuffer*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CHardwareBuffer::writeData(offset, length, pSource, discardWholeBuffer);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBuffer_writeData_1ev_1size_1t_1ev_1size_1t_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong offset_j, jlong length_j, jlong pSource_j)
			{
				ev_size_t offset = (ev_size_t) offset_j;
				ev_size_t length = (ev_size_t) length_j;
				const void *pSource = (const void*) pSource_j;
				EarthView::World::Graphic::CHardwareBuffer *pObjectX = (EarthView::World::Graphic::CHardwareBuffer*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCHardwareBufferProxy))
				{
					pObjectX->EarthView::World::Graphic::CHardwareBuffer::writeData(offset, length, pSource);
				}
				else
				{
					pObjectX->writeData(offset, length, pSource);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBuffer_register_1writeData_1ev_1size_1t_1ev_1size_1t_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHardwareBufferProxy *pObjectX = (JCHardwareBufferProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBuffer_writeData_1ev_1size_1t_1ev_1size_1t_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong offset_j, jlong length_j, jlong pSource_j)
			{
				ev_size_t offset = (ev_size_t) offset_j;
				ev_size_t length = (ev_size_t) length_j;
				const void *pSource = (const void*) pSource_j;
				EarthView::World::Graphic::CHardwareBuffer *pObjectX = (EarthView::World::Graphic::CHardwareBuffer*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CHardwareBuffer::writeData(offset, length, pSource);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBuffer_copyData_1CHardwareBuffer_1ev_1size_1t_1ev_1size_1t_1ev_1size_1t_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong srcBuffer_j, jlong srcOffset_j, jlong dstOffset_j, jlong length_j, jboolean discardWholeBuffer_j)
			{
				EarthView::World::Graphic::CHardwareBuffer &srcBuffer = *(EarthView::World::Graphic::CHardwareBuffer*) srcBuffer_j;
				ev_size_t srcOffset = (ev_size_t) srcOffset_j;
				ev_size_t dstOffset = (ev_size_t) dstOffset_j;
				ev_size_t length = (ev_size_t) length_j;
				ev_bool discardWholeBuffer = (ev_bool) discardWholeBuffer_j;
				EarthView::World::Graphic::CHardwareBuffer *pObjectX = (EarthView::World::Graphic::CHardwareBuffer*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCHardwareBufferProxy))
				{
					pObjectX->EarthView::World::Graphic::CHardwareBuffer::copyData(srcBuffer, srcOffset, dstOffset, length, discardWholeBuffer);
				}
				else
				{
					pObjectX->copyData(srcBuffer, srcOffset, dstOffset, length, discardWholeBuffer);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBuffer_register_1copyData_1CHardwareBuffer_1ev_1size_1t_1ev_1size_1t_1ev_1size_1t_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHardwareBufferProxy *pObjectX = (JCHardwareBufferProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBuffer_copyData_1CHardwareBuffer_1ev_1size_1t_1ev_1size_1t_1ev_1size_1t_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong srcBuffer_j, jlong srcOffset_j, jlong dstOffset_j, jlong length_j, jboolean discardWholeBuffer_j)
			{
				EarthView::World::Graphic::CHardwareBuffer &srcBuffer = *(EarthView::World::Graphic::CHardwareBuffer*) srcBuffer_j;
				ev_size_t srcOffset = (ev_size_t) srcOffset_j;
				ev_size_t dstOffset = (ev_size_t) dstOffset_j;
				ev_size_t length = (ev_size_t) length_j;
				ev_bool discardWholeBuffer = (ev_bool) discardWholeBuffer_j;
				EarthView::World::Graphic::CHardwareBuffer *pObjectX = (EarthView::World::Graphic::CHardwareBuffer*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CHardwareBuffer::copyData(srcBuffer, srcOffset, dstOffset, length, discardWholeBuffer);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBuffer_copyData_1CHardwareBuffer_1ev_1size_1t_1ev_1size_1t_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong srcBuffer_j, jlong srcOffset_j, jlong dstOffset_j, jlong length_j)
			{
				EarthView::World::Graphic::CHardwareBuffer &srcBuffer = *(EarthView::World::Graphic::CHardwareBuffer*) srcBuffer_j;
				ev_size_t srcOffset = (ev_size_t) srcOffset_j;
				ev_size_t dstOffset = (ev_size_t) dstOffset_j;
				ev_size_t length = (ev_size_t) length_j;
				EarthView::World::Graphic::CHardwareBuffer *pObjectX = (EarthView::World::Graphic::CHardwareBuffer*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCHardwareBufferProxy))
				{
					pObjectX->EarthView::World::Graphic::CHardwareBuffer::copyData(srcBuffer, srcOffset, dstOffset, length);
				}
				else
				{
					pObjectX->copyData(srcBuffer, srcOffset, dstOffset, length);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBuffer_register_1copyData_1CHardwareBuffer_1ev_1size_1t_1ev_1size_1t_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHardwareBufferProxy *pObjectX = (JCHardwareBufferProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBuffer_copyData_1CHardwareBuffer_1ev_1size_1t_1ev_1size_1t_1ev_1size_1t_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong srcBuffer_j, jlong srcOffset_j, jlong dstOffset_j, jlong length_j)
			{
				EarthView::World::Graphic::CHardwareBuffer &srcBuffer = *(EarthView::World::Graphic::CHardwareBuffer*) srcBuffer_j;
				ev_size_t srcOffset = (ev_size_t) srcOffset_j;
				ev_size_t dstOffset = (ev_size_t) dstOffset_j;
				ev_size_t length = (ev_size_t) length_j;
				EarthView::World::Graphic::CHardwareBuffer *pObjectX = (EarthView::World::Graphic::CHardwareBuffer*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CHardwareBuffer::copyData(srcBuffer, srcOffset, dstOffset, length);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBuffer_copyData_1CHardwareBuffer(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong srcBuffer_j)
			{
				EarthView::World::Graphic::CHardwareBuffer &srcBuffer = *(EarthView::World::Graphic::CHardwareBuffer*) srcBuffer_j;
				EarthView::World::Graphic::CHardwareBuffer *pObjectX = (EarthView::World::Graphic::CHardwareBuffer*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCHardwareBufferProxy))
				{
					pObjectX->EarthView::World::Graphic::CHardwareBuffer::copyData(srcBuffer);
				}
				else
				{
					pObjectX->copyData(srcBuffer);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBuffer_register_1copyData_1CHardwareBuffer(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHardwareBufferProxy *pObjectX = (JCHardwareBufferProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBuffer_copyData_1CHardwareBuffer_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong srcBuffer_j)
			{
				EarthView::World::Graphic::CHardwareBuffer &srcBuffer = *(EarthView::World::Graphic::CHardwareBuffer*) srcBuffer_j;
				EarthView::World::Graphic::CHardwareBuffer *pObjectX = (EarthView::World::Graphic::CHardwareBuffer*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CHardwareBuffer::copyData(srcBuffer);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBuffer__1updateFromShadow_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CHardwareBuffer *pObjectX = (EarthView::World::Graphic::CHardwareBuffer*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCHardwareBufferProxy))
				{
					pObjectX->EarthView::World::Graphic::CHardwareBuffer::_updateFromShadow();
				}
				else
				{
					pObjectX->_updateFromShadow();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBuffer_register_1_1updateFromShadow_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHardwareBufferProxy *pObjectX = (JCHardwareBufferProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBuffer__1updateFromShadow_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CHardwareBuffer *pObjectX = (EarthView::World::Graphic::CHardwareBuffer*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CHardwareBuffer::_updateFromShadow();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_HardwareBuffer_getSizeInBytes_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CHardwareBuffer *pObjectX = (EarthView::World::Graphic::CHardwareBuffer*) pObjXXXX;
				ev_size_t __values1 = pObjectX->getSizeInBytes();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_HardwareBuffer_getUsage_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CHardwareBuffer *pObjectX = (EarthView::World::Graphic::CHardwareBuffer*) pObjXXXX;
				EarthView::World::Graphic::CHardwareBuffer::Usage __values1 = pObjectX->getUsage();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_HardwareBuffer_isSystemMemory_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CHardwareBuffer *pObjectX = (EarthView::World::Graphic::CHardwareBuffer*) pObjXXXX;
				ev_bool __values1 = pObjectX->isSystemMemory();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_HardwareBuffer_hasShadowBuffer_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CHardwareBuffer *pObjectX = (EarthView::World::Graphic::CHardwareBuffer*) pObjXXXX;
				ev_bool __values1 = pObjectX->hasShadowBuffer();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_HardwareBuffer_isLocked_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CHardwareBuffer *pObjectX = (EarthView::World::Graphic::CHardwareBuffer*) pObjXXXX;
				ev_bool __values1 = pObjectX->isLocked();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBuffer_suppressHardwareUpdate_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean suppress_j)
			{
				ev_bool suppress = (ev_bool) suppress_j;
				EarthView::World::Graphic::CHardwareBuffer *pObjectX = (EarthView::World::Graphic::CHardwareBuffer*) pObjXXXX;
				pObjectX->suppressHardwareUpdate(suppress);
			}
		}
	}
}
