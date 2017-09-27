/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "core/datastream.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Core
		{
			class JCDataStreamProxy : public EarthView::World::Core::CDataStream
			{
			 private:
				EarthView::World::Core::ev_string m_isReadable_void_callback;
				EarthView::World::Core::ev_string m_isWriteable_void_callback;
				EarthView::World::Core::ev_string m_read_void_ev_size_t_callback;
				EarthView::World::Core::ev_string m_write_void_ev_size_t_callback;
				EarthView::World::Core::ev_string m_readLine_ev_char_ev_size_t_EVString_callback;
				EarthView::World::Core::ev_string m_readLine_ev_char_ev_size_t_callback;
				EarthView::World::Core::ev_string m_getLine_ev_bool_callback;
				EarthView::World::Core::ev_string m_getLine_void_callback;
				EarthView::World::Core::ev_string m_getAsString_void_callback;
				EarthView::World::Core::ev_string m_skipLine_EVString_callback;
				EarthView::World::Core::ev_string m_skipLine_void_callback;
				EarthView::World::Core::ev_string m_skip_ev_int32_callback;
				EarthView::World::Core::ev_string m_seek_ev_size_t_callback;
				EarthView::World::Core::ev_string m_tell_void_callback;
				EarthView::World::Core::ev_string m_eof_void_callback;
				EarthView::World::Core::ev_string m_close_void_callback;
			public:
				JCDataStreamProxy(EarthView::World::Core::CNameValuePairList *pList) : CDataStream(pList)
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
				void register_isReadable_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_isReadable_void_callback = __method;
				}
				void register_isWriteable_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_isWriteable_void_callback = __method;
				}
				void register_read_void_ev_size_t_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_read_void_ev_size_t_callback = __method;
				}
				void register_write_void_ev_size_t_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_write_void_ev_size_t_callback = __method;
				}
				void register_readLine_ev_char_ev_size_t_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_readLine_ev_char_ev_size_t_EVString_callback = __method;
				}
				void register_readLine_ev_char_ev_size_t_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_readLine_ev_char_ev_size_t_callback = __method;
				}
				void register_getLine_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getLine_ev_bool_callback = __method;
				}
				void register_getLine_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getLine_void_callback = __method;
				}
				void register_getAsString_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getAsString_void_callback = __method;
				}
				void register_skipLine_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_skipLine_EVString_callback = __method;
				}
				void register_skipLine_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_skipLine_void_callback = __method;
				}
				void register_skip_ev_int32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_skip_ev_int32_callback = __method;
				}
				void register_seek_ev_size_t_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_seek_ev_size_t_callback = __method;
				}
				void register_tell_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_tell_void_callback = __method;
				}
				void register_eof_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_eof_void_callback = __method;
				}
				void register_close_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_close_void_callback = __method;
				}
				virtual ev_bool isReadable() const
				{
					if (this->_gRef != NULL && this->m_isReadable_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("isReadable_void_callback");
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
						return this->CDataStream::isReadable();
					}
				}
				virtual ev_bool isWriteable() const
				{
					if (this->_gRef != NULL && this->m_isWriteable_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("isWriteable_void_callback");
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
						return this->CDataStream::isWriteable();
					}
				}
				virtual ev_size_t read(void* buf, ev_size_t count)
				{
					if (this->_gRef != NULL && this->m_read_void_ev_size_t_callback != "" && this->isCustomExtend())
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
						jlong buf_j = (jlong) buf;
						jlong count_j = (jlong) count;
						jmethodID __method = __gr->getMethod("read_void_ev_size_t_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , buf_j, count_j);
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
						return this->CDataStream::read(buf, count);
					}
				}
				virtual ev_size_t write(const void* buf, ev_size_t count)
				{
					if (this->_gRef != NULL && this->m_write_void_ev_size_t_callback != "" && this->isCustomExtend())
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
						jlong buf_j = (jlong) buf;
						jlong count_j = (jlong) count;
						jmethodID __method = __gr->getMethod("write_void_ev_size_t_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , buf_j, count_j);
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
						return this->CDataStream::write(buf, count);
					}
				}
				virtual ev_size_t readLine(ev_char* buf, ev_size_t maxCount, const EVString& delim)
				{
					if (this->_gRef != NULL && this->m_readLine_ev_char_ev_size_t_EVString_callback != "" && this->isCustomExtend())
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
						jlong buf_j = (jlong) buf;
						jlong maxCount_j = (jlong) maxCount;
						EarthView::World::Core::ev_wstring delim_wch = delim;
						jstring delim_j = __env->NewString((const jchar*)delim_wch.getString(), delim_wch.size());
						jmethodID __method = __gr->getMethod("readLine_ev_char_ev_size_t_EVString_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , buf_j, maxCount_j, delim_j);
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
						return this->CDataStream::readLine(buf, maxCount, delim);
					}
				}
				virtual ev_size_t readLine(ev_char* buf, ev_size_t maxCount)
				{
					if (this->_gRef != NULL && this->m_readLine_ev_char_ev_size_t_callback != "" && this->isCustomExtend())
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
						jlong buf_j = (jlong) buf;
						jlong maxCount_j = (jlong) maxCount;
						jmethodID __method = __gr->getMethod("readLine_ev_char_ev_size_t_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , buf_j, maxCount_j);
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
						return this->CDataStream::readLine(buf, maxCount);
					}
				}
				virtual EVString getLine(ev_bool trimAfter)
				{
					if (this->_gRef != NULL && this->m_getLine_ev_bool_callback != "" && this->isCustomExtend())
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
						jboolean trimAfter_j = (jboolean) trimAfter;
						jmethodID __method = __gr->getMethod("getLine_ev_bool_callback");
						jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method , trimAfter_j);
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
						return this->CDataStream::getLine(trimAfter);
					}
				}
				virtual EVString getLine()
				{
					if (this->_gRef != NULL && this->m_getLine_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getLine_void_callback");
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
						return this->CDataStream::getLine();
					}
				}
				virtual EVString getAsString()
				{
					if (this->_gRef != NULL && this->m_getAsString_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getAsString_void_callback");
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
						return this->CDataStream::getAsString();
					}
				}
				virtual ev_size_t skipLine(const EVString& delim)
				{
					if (this->_gRef != NULL && this->m_skipLine_EVString_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring delim_wch = delim;
						jstring delim_j = __env->NewString((const jchar*)delim_wch.getString(), delim_wch.size());
						jmethodID __method = __gr->getMethod("skipLine_EVString_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , delim_j);
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
						return this->CDataStream::skipLine(delim);
					}
				}
				virtual ev_size_t skipLine()
				{
					if (this->_gRef != NULL && this->m_skipLine_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("skipLine_void_callback");
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
						return this->CDataStream::skipLine();
					}
				}
				virtual void skip(ev_int32 count)
				{
					if (this->_gRef != NULL && this->m_skip_ev_int32_callback != "" && this->isCustomExtend())
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
						jint count_j = (jint) count;
						jmethodID __method = __gr->getMethod("skip_ev_int32_callback");
						__env->CallVoidMethod(__obj, __method , count_j);
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
						return this->CDataStream::skip(count);
					}
				}
				virtual void seek(ev_size_t pos)
				{
					if (this->_gRef != NULL && this->m_seek_ev_size_t_callback != "" && this->isCustomExtend())
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
						jlong pos_j = (jlong) pos;
						jmethodID __method = __gr->getMethod("seek_ev_size_t_callback");
						__env->CallVoidMethod(__obj, __method , pos_j);
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
						return this->CDataStream::seek(pos);
					}
				}
				virtual ev_size_t tell() const
				{
					if (this->_gRef != NULL && this->m_tell_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("tell_void_callback");
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
						return this->CDataStream::tell();
					}
				}
				virtual ev_bool eof() const
				{
					if (this->_gRef != NULL && this->m_eof_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("eof_void_callback");
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
						return this->CDataStream::eof();
					}
				}
				virtual void close()
				{
					if (this->_gRef != NULL && this->m_close_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("close_void_callback");
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
						return this->CDataStream::close();
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCDataStreamProxy);
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_core_DataStream_00024AccessModeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					CDataStream::READ,
					CDataStream::WRITE
				};
				jintArray array = __env->NewIntArray(2);
				__env->SetIntArrayRegion(array, 0, 2, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_DataStream_getName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CDataStream *pObjectX = (EarthView::World::Core::CDataStream*) pObjXXXX;
				const EVString& __values1 = pObjectX->getName();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DataStream_setName_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				EarthView::World::Core::CDataStream *pObjectX = (EarthView::World::Core::CDataStream*) pObjXXXX;
				pObjectX->setName(name);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_core_DataStream_getAccessMode_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CDataStream *pObjectX = (EarthView::World::Core::CDataStream*) pObjXXXX;
				ev_uint16 __values1 = pObjectX->getAccessMode();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_DataStream_isReadable_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CDataStream *pObjectX = (EarthView::World::Core::CDataStream*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDataStreamProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Core::CDataStream::isReadable();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->isReadable();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DataStream_register_1isReadable_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDataStreamProxy *pObjectX = (JCDataStreamProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_isReadable_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"isReadable_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_DataStream_isReadable_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CDataStream *pObjectX = (EarthView::World::Core::CDataStream*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Core::CDataStream::isReadable();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_DataStream_isWriteable_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CDataStream *pObjectX = (EarthView::World::Core::CDataStream*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDataStreamProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Core::CDataStream::isWriteable();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->isWriteable();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DataStream_register_1isWriteable_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDataStreamProxy *pObjectX = (JCDataStreamProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_isWriteable_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"isWriteable_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_DataStream_isWriteable_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CDataStream *pObjectX = (EarthView::World::Core::CDataStream*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Core::CDataStream::isWriteable();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_DataStream_read_1void_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong buf_j, jlong count_j)
			{
				void *buf = (void*) buf_j;
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Core::CDataStream *pObjectX = (EarthView::World::Core::CDataStream*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDataStreamProxy))
				{
					ev_size_t __values1 = pObjectX->EarthView::World::Core::CDataStream::read(buf, count);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					ev_size_t __values1 = pObjectX->read(buf, count);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DataStream_register_1read_1void_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDataStreamProxy *pObjectX = (JCDataStreamProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_read_void_ev_size_t_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"read_void_ev_size_t_callback", "(JJ)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_DataStream_read_1void_1ev_1size_1t_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong buf_j, jlong count_j)
			{
				void *buf = (void*) buf_j;
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Core::CDataStream *pObjectX = (EarthView::World::Core::CDataStream*) pObjXXXX;
				ev_size_t __values1 = pObjectX->EarthView::World::Core::CDataStream::read(buf, count);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_DataStream_write_1void_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong buf_j, jlong count_j)
			{
				const void *buf = (const void*) buf_j;
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Core::CDataStream *pObjectX = (EarthView::World::Core::CDataStream*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDataStreamProxy))
				{
					ev_size_t __values1 = pObjectX->EarthView::World::Core::CDataStream::write(buf, count);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					ev_size_t __values1 = pObjectX->write(buf, count);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DataStream_register_1write_1void_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDataStreamProxy *pObjectX = (JCDataStreamProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_write_void_ev_size_t_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"write_void_ev_size_t_callback", "(JJ)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_DataStream_write_1void_1ev_1size_1t_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong buf_j, jlong count_j)
			{
				const void *buf = (const void*) buf_j;
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Core::CDataStream *pObjectX = (EarthView::World::Core::CDataStream*) pObjXXXX;
				ev_size_t __values1 = pObjectX->EarthView::World::Core::CDataStream::write(buf, count);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_DataStream_readLine_1ev_1char_1ev_1size_1t_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong buf_j, jlong maxCount_j, jstring delim_j)
			{
				ev_char *buf = (ev_char*) buf_j;
				ev_size_t maxCount = (ev_size_t) maxCount_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* delim_ch = (const ev_char*)__env->GetStringUTFChars(delim_j,JNI_FALSE);
				const EVString delim = delim_ch;
				__env->ReleaseStringUTFChars(delim_j, (const char *)delim_ch);
				#else
				const ev_wchar* delim_ch = (const ev_wchar*)__env->GetStringChars(delim_j,JNI_FALSE);
				const EVString delim = delim_ch;
				__env->ReleaseStringChars(delim_j, (const jchar *)delim_ch);
				#endif
				EarthView::World::Core::CDataStream *pObjectX = (EarthView::World::Core::CDataStream*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDataStreamProxy))
				{
					ev_size_t __values1 = pObjectX->EarthView::World::Core::CDataStream::readLine(buf, maxCount, delim);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					ev_size_t __values1 = pObjectX->readLine(buf, maxCount, delim);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DataStream_register_1readLine_1ev_1char_1ev_1size_1t_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDataStreamProxy *pObjectX = (JCDataStreamProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_readLine_ev_char_ev_size_t_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"readLine_ev_char_ev_size_t_EVString_callback", "(JJLjava/lang/String;)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_DataStream_readLine_1ev_1char_1ev_1size_1t_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong buf_j, jlong maxCount_j, jstring delim_j)
			{
				ev_char *buf = (ev_char*) buf_j;
				ev_size_t maxCount = (ev_size_t) maxCount_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* delim_ch = (const ev_char*)__env->GetStringUTFChars(delim_j,JNI_FALSE);
				const EVString delim = delim_ch;
				__env->ReleaseStringUTFChars(delim_j, (const char *)delim_ch);
				#else
				const ev_wchar* delim_ch = (const ev_wchar*)__env->GetStringChars(delim_j,JNI_FALSE);
				const EVString delim = delim_ch;
				__env->ReleaseStringChars(delim_j, (const jchar *)delim_ch);
				#endif
				EarthView::World::Core::CDataStream *pObjectX = (EarthView::World::Core::CDataStream*) pObjXXXX;
				ev_size_t __values1 = pObjectX->EarthView::World::Core::CDataStream::readLine(buf, maxCount, delim);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_DataStream_readLine_1ev_1char_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong buf_j, jlong maxCount_j)
			{
				ev_char *buf = (ev_char*) buf_j;
				ev_size_t maxCount = (ev_size_t) maxCount_j;
				EarthView::World::Core::CDataStream *pObjectX = (EarthView::World::Core::CDataStream*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDataStreamProxy))
				{
					ev_size_t __values1 = pObjectX->EarthView::World::Core::CDataStream::readLine(buf, maxCount);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					ev_size_t __values1 = pObjectX->readLine(buf, maxCount);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DataStream_register_1readLine_1ev_1char_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDataStreamProxy *pObjectX = (JCDataStreamProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_readLine_ev_char_ev_size_t_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"readLine_ev_char_ev_size_t_callback", "(JJ)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_DataStream_readLine_1ev_1char_1ev_1size_1t_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong buf_j, jlong maxCount_j)
			{
				ev_char *buf = (ev_char*) buf_j;
				ev_size_t maxCount = (ev_size_t) maxCount_j;
				EarthView::World::Core::CDataStream *pObjectX = (EarthView::World::Core::CDataStream*) pObjXXXX;
				ev_size_t __values1 = pObjectX->EarthView::World::Core::CDataStream::readLine(buf, maxCount);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_core_DataStream_getLine_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean trimAfter_j)
			{
				ev_bool trimAfter = (ev_bool) trimAfter_j;
				EarthView::World::Core::CDataStream *pObjectX = (EarthView::World::Core::CDataStream*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDataStreamProxy))
				{
					EVString __values1 = pObjectX->EarthView::World::Core::CDataStream::getLine(trimAfter);
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				else
				{
					EVString __values1 = pObjectX->getLine(trimAfter);
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DataStream_register_1getLine_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDataStreamProxy *pObjectX = (JCDataStreamProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getLine_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getLine_ev_bool_callback", "(Z)Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_core_DataStream_getLine_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean trimAfter_j)
			{
				ev_bool trimAfter = (ev_bool) trimAfter_j;
				EarthView::World::Core::CDataStream *pObjectX = (EarthView::World::Core::CDataStream*) pObjXXXX;
				EVString __values1 = pObjectX->EarthView::World::Core::CDataStream::getLine(trimAfter);
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_core_DataStream_getLine_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CDataStream *pObjectX = (EarthView::World::Core::CDataStream*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDataStreamProxy))
				{
					EVString __values1 = pObjectX->EarthView::World::Core::CDataStream::getLine();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				else
				{
					EVString __values1 = pObjectX->getLine();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DataStream_register_1getLine_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDataStreamProxy *pObjectX = (JCDataStreamProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getLine_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getLine_void_callback", "()Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_core_DataStream_getLine_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CDataStream *pObjectX = (EarthView::World::Core::CDataStream*) pObjXXXX;
				EVString __values1 = pObjectX->EarthView::World::Core::CDataStream::getLine();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_core_DataStream_getAsString_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CDataStream *pObjectX = (EarthView::World::Core::CDataStream*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDataStreamProxy))
				{
					EVString __values1 = pObjectX->EarthView::World::Core::CDataStream::getAsString();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				else
				{
					EVString __values1 = pObjectX->getAsString();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DataStream_register_1getAsString_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDataStreamProxy *pObjectX = (JCDataStreamProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getAsString_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getAsString_void_callback", "()Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_core_DataStream_getAsString_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CDataStream *pObjectX = (EarthView::World::Core::CDataStream*) pObjXXXX;
				EVString __values1 = pObjectX->EarthView::World::Core::CDataStream::getAsString();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_DataStream_skipLine_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring delim_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* delim_ch = (const ev_char*)__env->GetStringUTFChars(delim_j,JNI_FALSE);
				const EVString delim = delim_ch;
				__env->ReleaseStringUTFChars(delim_j, (const char *)delim_ch);
				#else
				const ev_wchar* delim_ch = (const ev_wchar*)__env->GetStringChars(delim_j,JNI_FALSE);
				const EVString delim = delim_ch;
				__env->ReleaseStringChars(delim_j, (const jchar *)delim_ch);
				#endif
				EarthView::World::Core::CDataStream *pObjectX = (EarthView::World::Core::CDataStream*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDataStreamProxy))
				{
					ev_size_t __values1 = pObjectX->EarthView::World::Core::CDataStream::skipLine(delim);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					ev_size_t __values1 = pObjectX->skipLine(delim);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DataStream_register_1skipLine_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDataStreamProxy *pObjectX = (JCDataStreamProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_skipLine_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"skipLine_EVString_callback", "(Ljava/lang/String;)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_DataStream_skipLine_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring delim_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* delim_ch = (const ev_char*)__env->GetStringUTFChars(delim_j,JNI_FALSE);
				const EVString delim = delim_ch;
				__env->ReleaseStringUTFChars(delim_j, (const char *)delim_ch);
				#else
				const ev_wchar* delim_ch = (const ev_wchar*)__env->GetStringChars(delim_j,JNI_FALSE);
				const EVString delim = delim_ch;
				__env->ReleaseStringChars(delim_j, (const jchar *)delim_ch);
				#endif
				EarthView::World::Core::CDataStream *pObjectX = (EarthView::World::Core::CDataStream*) pObjXXXX;
				ev_size_t __values1 = pObjectX->EarthView::World::Core::CDataStream::skipLine(delim);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_DataStream_skipLine_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CDataStream *pObjectX = (EarthView::World::Core::CDataStream*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDataStreamProxy))
				{
					ev_size_t __values1 = pObjectX->EarthView::World::Core::CDataStream::skipLine();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					ev_size_t __values1 = pObjectX->skipLine();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DataStream_register_1skipLine_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDataStreamProxy *pObjectX = (JCDataStreamProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_skipLine_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"skipLine_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_DataStream_skipLine_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CDataStream *pObjectX = (EarthView::World::Core::CDataStream*) pObjXXXX;
				ev_size_t __values1 = pObjectX->EarthView::World::Core::CDataStream::skipLine();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DataStream_skip_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint count_j)
			{
				ev_int32 count = (ev_int32) count_j;
				EarthView::World::Core::CDataStream *pObjectX = (EarthView::World::Core::CDataStream*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDataStreamProxy))
				{
					pObjectX->EarthView::World::Core::CDataStream::skip(count);
				}
				else
				{
					pObjectX->skip(count);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DataStream_register_1skip_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDataStreamProxy *pObjectX = (JCDataStreamProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_skip_ev_int32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"skip_ev_int32_callback", "(I)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DataStream_skip_1ev_1int32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint count_j)
			{
				ev_int32 count = (ev_int32) count_j;
				EarthView::World::Core::CDataStream *pObjectX = (EarthView::World::Core::CDataStream*) pObjXXXX;
				pObjectX->EarthView::World::Core::CDataStream::skip(count);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DataStream_seek_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_size_t pos = (ev_size_t) pos_j;
				EarthView::World::Core::CDataStream *pObjectX = (EarthView::World::Core::CDataStream*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDataStreamProxy))
				{
					pObjectX->EarthView::World::Core::CDataStream::seek(pos);
				}
				else
				{
					pObjectX->seek(pos);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DataStream_register_1seek_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDataStreamProxy *pObjectX = (JCDataStreamProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_seek_ev_size_t_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"seek_ev_size_t_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DataStream_seek_1ev_1size_1t_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_size_t pos = (ev_size_t) pos_j;
				EarthView::World::Core::CDataStream *pObjectX = (EarthView::World::Core::CDataStream*) pObjXXXX;
				pObjectX->EarthView::World::Core::CDataStream::seek(pos);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_DataStream_tell_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CDataStream *pObjectX = (EarthView::World::Core::CDataStream*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDataStreamProxy))
				{
					ev_size_t __values1 = pObjectX->EarthView::World::Core::CDataStream::tell();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					ev_size_t __values1 = pObjectX->tell();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DataStream_register_1tell_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDataStreamProxy *pObjectX = (JCDataStreamProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_tell_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"tell_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_DataStream_tell_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CDataStream *pObjectX = (EarthView::World::Core::CDataStream*) pObjXXXX;
				ev_size_t __values1 = pObjectX->EarthView::World::Core::CDataStream::tell();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_DataStream_eof_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CDataStream *pObjectX = (EarthView::World::Core::CDataStream*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDataStreamProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Core::CDataStream::eof();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->eof();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DataStream_register_1eof_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDataStreamProxy *pObjectX = (JCDataStreamProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_eof_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"eof_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_DataStream_eof_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CDataStream *pObjectX = (EarthView::World::Core::CDataStream*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Core::CDataStream::eof();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_DataStream_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CDataStream *pObjectX = (EarthView::World::Core::CDataStream*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DataStream_close_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CDataStream *pObjectX = (EarthView::World::Core::CDataStream*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDataStreamProxy))
				{
					pObjectX->EarthView::World::Core::CDataStream::close();
				}
				else
				{
					pObjectX->close();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DataStream_register_1close_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDataStreamProxy *pObjectX = (JCDataStreamProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_close_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"close_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DataStream_close_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CDataStream *pObjectX = (EarthView::World::Core::CDataStream*) pObjXXXX;
				pObjectX->EarthView::World::Core::CDataStream::close();
			}
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_core_DataStreamReader_00024DataStreamOrderHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					CDataStreamReader::BIG_ENDIAN_ORDER,
					CDataStreamReader::LITTLE_ENDIAN_ORDER
				};
				jintArray array = __env->NewIntArray(2);
				__env->SetIntArrayRegion(array, 0, 2, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_core_DataStreamReader_readBool_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong value_j)
			{
				ev_bool &value = *(ev_bool*) value_j;
				EarthView::World::Core::CDataStreamReader *pObjectX = (EarthView::World::Core::CDataStreamReader*) pObjXXXX;
				ev_int32 __values1 = pObjectX->readBool(value);
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_core_DataStreamReader_readChar_1ev_1char(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong value_j)
			{
				ev_char &value = *(ev_char*) value_j;
				EarthView::World::Core::CDataStreamReader *pObjectX = (EarthView::World::Core::CDataStreamReader*) pObjXXXX;
				ev_int32 __values1 = pObjectX->readChar(value);
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_core_DataStreamReader_readUChar_1ev_1uchar(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong value_j)
			{
				ev_uchar &value = *(ev_uchar*) value_j;
				EarthView::World::Core::CDataStreamReader *pObjectX = (EarthView::World::Core::CDataStreamReader*) pObjXXXX;
				ev_int32 __values1 = pObjectX->readUChar(value);
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_core_DataStreamReader_readWChar_1ev_1wchar(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong value_j)
			{
				ev_wchar &value = *(ev_wchar*) value_j;
				EarthView::World::Core::CDataStreamReader *pObjectX = (EarthView::World::Core::CDataStreamReader*) pObjXXXX;
				ev_int32 __values1 = pObjectX->readWChar(value);
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_core_DataStreamReader_readByte_1ev_1byte(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong value_j)
			{
				ev_byte &value = *(ev_byte*) value_j;
				EarthView::World::Core::CDataStreamReader *pObjectX = (EarthView::World::Core::CDataStreamReader*) pObjXXXX;
				ev_int32 __values1 = pObjectX->readByte(value);
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_core_DataStreamReader_readInt8_1ev_1int8(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong value_j)
			{
				ev_int8 &value = *(ev_int8*) value_j;
				EarthView::World::Core::CDataStreamReader *pObjectX = (EarthView::World::Core::CDataStreamReader*) pObjXXXX;
				ev_int32 __values1 = pObjectX->readInt8(value);
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_core_DataStreamReader_readUInt8_1ev_1uint8(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong value_j)
			{
				ev_uint8 &value = *(ev_uint8*) value_j;
				EarthView::World::Core::CDataStreamReader *pObjectX = (EarthView::World::Core::CDataStreamReader*) pObjXXXX;
				ev_int32 __values1 = pObjectX->readUInt8(value);
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_core_DataStreamReader_readInt16_1ev_1int16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong value_j)
			{
				ev_int16 &value = *(ev_int16*) value_j;
				EarthView::World::Core::CDataStreamReader *pObjectX = (EarthView::World::Core::CDataStreamReader*) pObjXXXX;
				ev_int32 __values1 = pObjectX->readInt16(value);
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_core_DataStreamReader_readUInt16_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong value_j)
			{
				ev_uint16 &value = *(ev_uint16*) value_j;
				EarthView::World::Core::CDataStreamReader *pObjectX = (EarthView::World::Core::CDataStreamReader*) pObjXXXX;
				ev_int32 __values1 = pObjectX->readUInt16(value);
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_core_DataStreamReader_readInt32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong value_j)
			{
				ev_int32 &value = *(ev_int32*) value_j;
				EarthView::World::Core::CDataStreamReader *pObjectX = (EarthView::World::Core::CDataStreamReader*) pObjXXXX;
				ev_int32 __values1 = pObjectX->readInt32(value);
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_core_DataStreamReader_readUInt32_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong value_j)
			{
				ev_uint32 &value = *(ev_uint32*) value_j;
				EarthView::World::Core::CDataStreamReader *pObjectX = (EarthView::World::Core::CDataStreamReader*) pObjXXXX;
				ev_int32 __values1 = pObjectX->readUInt32(value);
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_core_DataStreamReader_readInt64_1ev_1int64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong value_j)
			{
				ev_int64 &value = *(ev_int64*) value_j;
				EarthView::World::Core::CDataStreamReader *pObjectX = (EarthView::World::Core::CDataStreamReader*) pObjXXXX;
				ev_int32 __values1 = pObjectX->readInt64(value);
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_core_DataStreamReader_readUInt64_1ev_1uint64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong value_j)
			{
				ev_uint64 &value = *(ev_uint64*) value_j;
				EarthView::World::Core::CDataStreamReader *pObjectX = (EarthView::World::Core::CDataStreamReader*) pObjXXXX;
				ev_int32 __values1 = pObjectX->readUInt64(value);
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_core_DataStreamReader_readReal32_1ev_1real32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong value_j)
			{
				ev_real32 &value = *(ev_real32*) value_j;
				EarthView::World::Core::CDataStreamReader *pObjectX = (EarthView::World::Core::CDataStreamReader*) pObjXXXX;
				ev_int32 __values1 = pObjectX->readReal32(value);
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_core_DataStreamReader_readReal64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong value_j)
			{
				ev_real64 &value = *(ev_real64*) value_j;
				EarthView::World::Core::CDataStreamReader *pObjectX = (EarthView::World::Core::CDataStreamReader*) pObjXXXX;
				ev_int32 __values1 = pObjectX->readReal64(value);
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_core_DataStreamReader_readObjectAddr_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong value_j)
			{
				void *&value = *(void**) value_j;
				EarthView::World::Core::CDataStreamReader *pObjectX = (EarthView::World::Core::CDataStreamReader*) pObjXXXX;
				ev_int32 __values1 = pObjectX->readObjectAddr(value);
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_core_DataStreamReader_readString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong value_j)
			{
				EVString &value = *(EVString*) value_j;
				EarthView::World::Core::CDataStreamReader *pObjectX = (EarthView::World::Core::CDataStreamReader*) pObjXXXX;
				ev_int32 __values1 = pObjectX->readString(value);
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_core_DataStreamReader_readString_1EVString_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong value_j, jint length_j)
			{
				EVString &value = *(EVString*) value_j;
				ev_int32 length = (ev_int32) length_j;
				EarthView::World::Core::CDataStreamReader *pObjectX = (EarthView::World::Core::CDataStreamReader*) pObjXXXX;
				ev_int32 __values1 = pObjectX->readString(value, length);
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_core_DataStreamReader_readRaw_1CMemoryDataStream_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong value_j, jint length_j)
			{
				EarthView::World::Core::CMemoryDataStream &value = *(EarthView::World::Core::CMemoryDataStream*) value_j;
				ev_int32 length = (ev_int32) length_j;
				EarthView::World::Core::CDataStreamReader *pObjectX = (EarthView::World::Core::CDataStreamReader*) pObjXXXX;
				ev_int32 __values1 = pObjectX->readRaw(value, length);
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_DataStreamReader_eof_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CDataStreamReader *pObjectX = (EarthView::World::Core::CDataStreamReader*) pObjXXXX;
				ev_bool __values1 = pObjectX->eof();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_DataStreamReader_dataStream_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CDataStreamReader *pObjectX = (EarthView::World::Core::CDataStreamReader*) pObjXXXX;
				EarthView::World::Core::CDataStream& __values1 = pObjectX->dataStream();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_core_DataStreamWriter_00024DataStreamOrderHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					CDataStreamWriter::BIG_ENDIAN_ORDER,
					CDataStreamWriter::LITTLE_ENDIAN_ORDER
				};
				jintArray array = __env->NewIntArray(2);
				__env->SetIntArrayRegion(array, 0, 2, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_core_DataStreamWriter_writeBool_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean value_j)
			{
				ev_bool value = (ev_bool) value_j;
				EarthView::World::Core::CDataStreamWriter *pObjectX = (EarthView::World::Core::CDataStreamWriter*) pObjXXXX;
				ev_int32 __values1 = pObjectX->writeBool(value);
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_core_DataStreamWriter_writeChar_1ev_1char(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jbyte value_j)
			{
				ev_char value = (ev_char) value_j;
				EarthView::World::Core::CDataStreamWriter *pObjectX = (EarthView::World::Core::CDataStreamWriter*) pObjXXXX;
				ev_int32 __values1 = pObjectX->writeChar(value);
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_core_DataStreamWriter_writeUChar_1ev_1uchar(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jshort value_j)
			{
				ev_uchar value = (ev_uchar) value_j;
				EarthView::World::Core::CDataStreamWriter *pObjectX = (EarthView::World::Core::CDataStreamWriter*) pObjXXXX;
				ev_int32 __values1 = pObjectX->writeUChar(value);
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_core_DataStreamWriter_writeWChar_1ev_1wchar(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jchar value_j)
			{
				ev_wchar value = (ev_wchar) value_j;
				EarthView::World::Core::CDataStreamWriter *pObjectX = (EarthView::World::Core::CDataStreamWriter*) pObjXXXX;
				ev_int32 __values1 = pObjectX->writeWChar(value);
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_core_DataStreamWriter_writeByte_1ev_1byte(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jshort value_j)
			{
				ev_byte value = (ev_byte) value_j;
				EarthView::World::Core::CDataStreamWriter *pObjectX = (EarthView::World::Core::CDataStreamWriter*) pObjXXXX;
				ev_int32 __values1 = pObjectX->writeByte(value);
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_core_DataStreamWriter_writeInt8_1ev_1int8(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jbyte value_j)
			{
				ev_int8 value = (ev_int8) value_j;
				EarthView::World::Core::CDataStreamWriter *pObjectX = (EarthView::World::Core::CDataStreamWriter*) pObjXXXX;
				ev_int32 __values1 = pObjectX->writeInt8(value);
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_core_DataStreamWriter_writeUInt8_1ev_1uint8(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jshort value_j)
			{
				ev_uint8 value = (ev_uint8) value_j;
				EarthView::World::Core::CDataStreamWriter *pObjectX = (EarthView::World::Core::CDataStreamWriter*) pObjXXXX;
				ev_int32 __values1 = pObjectX->writeUInt8(value);
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_core_DataStreamWriter_writeInt16_1ev_1int16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jshort value_j)
			{
				ev_int16 value = (ev_int16) value_j;
				EarthView::World::Core::CDataStreamWriter *pObjectX = (EarthView::World::Core::CDataStreamWriter*) pObjXXXX;
				ev_int32 __values1 = pObjectX->writeInt16(value);
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_core_DataStreamWriter_writeUInt16_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint value_j)
			{
				ev_uint16 value = (ev_uint16) value_j;
				EarthView::World::Core::CDataStreamWriter *pObjectX = (EarthView::World::Core::CDataStreamWriter*) pObjXXXX;
				ev_int32 __values1 = pObjectX->writeUInt16(value);
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_core_DataStreamWriter_writeInt32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint value_j)
			{
				ev_int32 value = (ev_int32) value_j;
				EarthView::World::Core::CDataStreamWriter *pObjectX = (EarthView::World::Core::CDataStreamWriter*) pObjXXXX;
				ev_int32 __values1 = pObjectX->writeInt32(value);
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_core_DataStreamWriter_writeUInt32_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong value_j)
			{
				ev_uint32 value = (ev_uint32) value_j;
				EarthView::World::Core::CDataStreamWriter *pObjectX = (EarthView::World::Core::CDataStreamWriter*) pObjXXXX;
				ev_int32 __values1 = pObjectX->writeUInt32(value);
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_core_DataStreamWriter_writeInt64_1ev_1int64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong value_j)
			{
				ev_int64 value = (ev_int64) value_j;
				EarthView::World::Core::CDataStreamWriter *pObjectX = (EarthView::World::Core::CDataStreamWriter*) pObjXXXX;
				ev_int32 __values1 = pObjectX->writeInt64(value);
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_core_DataStreamWriter_writeUInt64_1ev_1uint64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong value_j)
			{
				ev_uint64 value = *(ev_uint64*) value_j;
				EarthView::World::Core::CDataStreamWriter *pObjectX = (EarthView::World::Core::CDataStreamWriter*) pObjXXXX;
				ev_int32 __values1 = pObjectX->writeUInt64(value);
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_core_DataStreamWriter_writeReal32_1ev_1real32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jfloat value_j)
			{
				ev_real32 value = (ev_real32) value_j;
				EarthView::World::Core::CDataStreamWriter *pObjectX = (EarthView::World::Core::CDataStreamWriter*) pObjXXXX;
				ev_int32 __values1 = pObjectX->writeReal32(value);
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_core_DataStreamWriter_writeReal64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble value_j)
			{
				ev_real64 value = (ev_real64) value_j;
				EarthView::World::Core::CDataStreamWriter *pObjectX = (EarthView::World::Core::CDataStreamWriter*) pObjXXXX;
				ev_int32 __values1 = pObjectX->writeReal64(value);
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_core_DataStreamWriter_writeObjectAddr_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong value_j)
			{
				void *value = (void*) value_j;
				EarthView::World::Core::CDataStreamWriter *pObjectX = (EarthView::World::Core::CDataStreamWriter*) pObjXXXX;
				ev_int32 __values1 = pObjectX->writeObjectAddr(value);
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_core_DataStreamWriter_writeString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring value_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* value_ch = (const ev_char*)__env->GetStringUTFChars(value_j,JNI_FALSE);
				const EVString value = value_ch;
				__env->ReleaseStringUTFChars(value_j, (const char *)value_ch);
				#else
				const ev_wchar* value_ch = (const ev_wchar*)__env->GetStringChars(value_j,JNI_FALSE);
				const EVString value = value_ch;
				__env->ReleaseStringChars(value_j, (const jchar *)value_ch);
				#endif
				EarthView::World::Core::CDataStreamWriter *pObjectX = (EarthView::World::Core::CDataStreamWriter*) pObjXXXX;
				ev_int32 __values1 = pObjectX->writeString(value);
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_core_DataStreamWriter_writeString_1EVString_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring value_j, jint length_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* value_ch = (const ev_char*)__env->GetStringUTFChars(value_j,JNI_FALSE);
				const EVString value = value_ch;
				__env->ReleaseStringUTFChars(value_j, (const char *)value_ch);
				#else
				const ev_wchar* value_ch = (const ev_wchar*)__env->GetStringChars(value_j,JNI_FALSE);
				const EVString value = value_ch;
				__env->ReleaseStringChars(value_j, (const jchar *)value_ch);
				#endif
				ev_int32 length = (ev_int32) length_j;
				EarthView::World::Core::CDataStreamWriter *pObjectX = (EarthView::World::Core::CDataStreamWriter*) pObjXXXX;
				ev_int32 __values1 = pObjectX->writeString(value, length);
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_core_DataStreamWriter_writeRaw_1CMemoryDataStream(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong value_j)
			{
				EarthView::World::Core::CMemoryDataStream &value = *(EarthView::World::Core::CMemoryDataStream*) value_j;
				EarthView::World::Core::CDataStreamWriter *pObjectX = (EarthView::World::Core::CDataStreamWriter*) pObjXXXX;
				ev_int32 __values1 = pObjectX->writeRaw(value);
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_DataStreamWriter_eof_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CDataStreamWriter *pObjectX = (EarthView::World::Core::CDataStreamWriter*) pObjXXXX;
				ev_bool __values1 = pObjectX->eof();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_DataStreamWriter_dataStream_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CDataStreamWriter *pObjectX = (EarthView::World::Core::CDataStreamWriter*) pObjXXXX;
				EarthView::World::Core::CDataStream& __values1 = pObjectX->dataStream();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_DataStreamPtr_get_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::DataStreamPtr *pObjectX = (EarthView::World::Core::DataStreamPtr*) pObjXXXX;
				EarthView::World::Core::CDataStream* __values1 = pObjectX->get();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DataStreamList_push_1back_1DataStreamPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
			{
				EarthView::World::Core::DataStreamPtr &t = *(EarthView::World::Core::DataStreamPtr*) t_j;
				EarthView::World::Core::DataStreamList *pObjectX = (EarthView::World::Core::DataStreamList*) pObjXXXX;
				pObjectX->push_back(t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DataStreamList_push_1front_1DataStreamPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
			{
				EarthView::World::Core::DataStreamPtr &t = *(EarthView::World::Core::DataStreamPtr*) t_j;
				EarthView::World::Core::DataStreamList *pObjectX = (EarthView::World::Core::DataStreamList*) pObjXXXX;
				pObjectX->push_front(t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DataStreamList_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::DataStreamList *pObjectX = (EarthView::World::Core::DataStreamList*) pObjXXXX;
				pObjectX->pop_back();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DataStreamList_pop_1front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::DataStreamList *pObjectX = (EarthView::World::Core::DataStreamList*) pObjXXXX;
				pObjectX->pop_front();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_DataStreamList_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::DataStreamList *pObjectX = (EarthView::World::Core::DataStreamList*) pObjXXXX;
				EarthView::World::Core::DataStreamPtr& __values1 = pObjectX->front();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_DataStreamList_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::DataStreamList *pObjectX = (EarthView::World::Core::DataStreamList*) pObjXXXX;
				EarthView::World::Core::DataStreamPtr& __values1 = pObjectX->back();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_DataStreamList_at_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_uint32 pos = (ev_uint32) pos_j;
				EarthView::World::Core::DataStreamList *pObjectX = (EarthView::World::Core::DataStreamList*) pObjXXXX;
				EarthView::World::Core::DataStreamPtr& __values1 = pObjectX->at(pos);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DataStreamList_insert_1ev_1uint32_1DataStreamPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong t_j)
			{
				ev_uint32 pos = (ev_uint32) pos_j;
				EarthView::World::Core::DataStreamPtr &t = *(EarthView::World::Core::DataStreamPtr*) t_j;
				EarthView::World::Core::DataStreamList *pObjectX = (EarthView::World::Core::DataStreamList*) pObjXXXX;
				pObjectX->insert(pos, t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DataStreamList_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_size_t pos = (ev_size_t) pos_j;
				EarthView::World::Core::DataStreamList *pObjectX = (EarthView::World::Core::DataStreamList*) pObjXXXX;
				pObjectX->remove(pos);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_DataStreamList_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::DataStreamList *pObjectX = (EarthView::World::Core::DataStreamList*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_DataStreamList_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::DataStreamList *pObjectX = (EarthView::World::Core::DataStreamList*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DataStreamList_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
			{
				ev_size_t newSize = (ev_size_t) newSize_j;
				EarthView::World::Core::DataStreamList *pObjectX = (EarthView::World::Core::DataStreamList*) pObjXXXX;
				pObjectX->resize(newSize);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DataStreamList_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::DataStreamList *pObjectX = (EarthView::World::Core::DataStreamList*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_DataStreamListPtr_get_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::DataStreamListPtr *pObjectX = (EarthView::World::Core::DataStreamListPtr*) pObjXXXX;
				EarthView::World::Core::DataStreamList* __values1 = pObjectX->get();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			class JCMemoryDataStreamProxy : public EarthView::World::Core::CMemoryDataStream
			{
			 private:
				EarthView::World::Core::ev_string m_isReadable_void_callback;
				EarthView::World::Core::ev_string m_isWriteable_void_callback;
				EarthView::World::Core::ev_string m_read_void_ev_size_t_callback;
				EarthView::World::Core::ev_string m_write_void_ev_size_t_callback;
				EarthView::World::Core::ev_string m_readLine_ev_char_ev_size_t_EVString_callback;
				EarthView::World::Core::ev_string m_readLine_ev_char_ev_size_t_callback;
				EarthView::World::Core::ev_string m_getLine_ev_bool_callback;
				EarthView::World::Core::ev_string m_getLine_void_callback;
				EarthView::World::Core::ev_string m_getAsString_void_callback;
				EarthView::World::Core::ev_string m_skipLine_EVString_callback;
				EarthView::World::Core::ev_string m_skipLine_void_callback;
				EarthView::World::Core::ev_string m_skip_ev_int32_callback;
				EarthView::World::Core::ev_string m_seek_ev_size_t_callback;
				EarthView::World::Core::ev_string m_tell_void_callback;
				EarthView::World::Core::ev_string m_eof_void_callback;
				EarthView::World::Core::ev_string m_close_void_callback;
			public:
				JCMemoryDataStreamProxy(EarthView::World::Core::CNameValuePairList *pList) : CMemoryDataStream(pList)
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
				void register_isReadable_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_isReadable_void_callback = __method;
				}
				void register_isWriteable_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_isWriteable_void_callback = __method;
				}
				void register_read_void_ev_size_t_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_read_void_ev_size_t_callback = __method;
				}
				void register_write_void_ev_size_t_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_write_void_ev_size_t_callback = __method;
				}
				void register_readLine_ev_char_ev_size_t_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_readLine_ev_char_ev_size_t_EVString_callback = __method;
				}
				void register_readLine_ev_char_ev_size_t_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_readLine_ev_char_ev_size_t_callback = __method;
				}
				void register_getLine_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getLine_ev_bool_callback = __method;
				}
				void register_getLine_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getLine_void_callback = __method;
				}
				void register_getAsString_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getAsString_void_callback = __method;
				}
				void register_skipLine_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_skipLine_EVString_callback = __method;
				}
				void register_skipLine_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_skipLine_void_callback = __method;
				}
				void register_skip_ev_int32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_skip_ev_int32_callback = __method;
				}
				void register_seek_ev_size_t_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_seek_ev_size_t_callback = __method;
				}
				void register_tell_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_tell_void_callback = __method;
				}
				void register_eof_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_eof_void_callback = __method;
				}
				void register_close_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_close_void_callback = __method;
				}
				virtual ev_size_t read(void* buf, ev_size_t count)
				{
					if (this->_gRef != NULL && this->m_read_void_ev_size_t_callback != "" && this->isCustomExtend())
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
						jlong buf_j = (jlong) buf;
						jlong count_j = (jlong) count;
						jmethodID __method = __gr->getMethod("read_void_ev_size_t_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , buf_j, count_j);
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
						return this->CMemoryDataStream::read(buf, count);
					}
				}
				virtual ev_size_t write(const void* buf, ev_size_t count)
				{
					if (this->_gRef != NULL && this->m_write_void_ev_size_t_callback != "" && this->isCustomExtend())
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
						jlong buf_j = (jlong) buf;
						jlong count_j = (jlong) count;
						jmethodID __method = __gr->getMethod("write_void_ev_size_t_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , buf_j, count_j);
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
						return this->CMemoryDataStream::write(buf, count);
					}
				}
				virtual ev_size_t readLine(ev_char* buf, ev_size_t maxCount, const EVString& delim)
				{
					if (this->_gRef != NULL && this->m_readLine_ev_char_ev_size_t_EVString_callback != "" && this->isCustomExtend())
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
						jlong buf_j = (jlong) buf;
						jlong maxCount_j = (jlong) maxCount;
						EarthView::World::Core::ev_wstring delim_wch = delim;
						jstring delim_j = __env->NewString((const jchar*)delim_wch.getString(), delim_wch.size());
						jmethodID __method = __gr->getMethod("readLine_ev_char_ev_size_t_EVString_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , buf_j, maxCount_j, delim_j);
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
						return this->CMemoryDataStream::readLine(buf, maxCount, delim);
					}
				}
				virtual ev_size_t readLine(ev_char* buf, ev_size_t maxCount)
				{
					if (this->_gRef != NULL && this->m_readLine_ev_char_ev_size_t_callback != "" && this->isCustomExtend())
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
						jlong buf_j = (jlong) buf;
						jlong maxCount_j = (jlong) maxCount;
						jmethodID __method = __gr->getMethod("readLine_ev_char_ev_size_t_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , buf_j, maxCount_j);
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
						return this->CMemoryDataStream::readLine(buf, maxCount);
					}
				}
				virtual ev_size_t skipLine(const EVString& delim)
				{
					if (this->_gRef != NULL && this->m_skipLine_EVString_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring delim_wch = delim;
						jstring delim_j = __env->NewString((const jchar*)delim_wch.getString(), delim_wch.size());
						jmethodID __method = __gr->getMethod("skipLine_EVString_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , delim_j);
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
						return this->CMemoryDataStream::skipLine(delim);
					}
				}
				virtual ev_size_t skipLine()
				{
					if (this->_gRef != NULL && this->m_skipLine_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("skipLine_void_callback");
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
						return this->CMemoryDataStream::skipLine();
					}
				}
				virtual void skip(ev_int32 count)
				{
					if (this->_gRef != NULL && this->m_skip_ev_int32_callback != "" && this->isCustomExtend())
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
						jint count_j = (jint) count;
						jmethodID __method = __gr->getMethod("skip_ev_int32_callback");
						__env->CallVoidMethod(__obj, __method , count_j);
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
						return this->CMemoryDataStream::skip(count);
					}
				}
				virtual void seek(ev_size_t pos)
				{
					if (this->_gRef != NULL && this->m_seek_ev_size_t_callback != "" && this->isCustomExtend())
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
						jlong pos_j = (jlong) pos;
						jmethodID __method = __gr->getMethod("seek_ev_size_t_callback");
						__env->CallVoidMethod(__obj, __method , pos_j);
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
						return this->CMemoryDataStream::seek(pos);
					}
				}
				virtual ev_size_t tell() const
				{
					if (this->_gRef != NULL && this->m_tell_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("tell_void_callback");
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
						return this->CMemoryDataStream::tell();
					}
				}
				virtual ev_bool eof() const
				{
					if (this->_gRef != NULL && this->m_eof_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("eof_void_callback");
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
						return this->CMemoryDataStream::eof();
					}
				}
				virtual void close()
				{
					if (this->_gRef != NULL && this->m_close_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("close_void_callback");
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
						return this->CMemoryDataStream::close();
					}
				}
				virtual ev_bool isReadable() const
				{
					if (this->_gRef != NULL && this->m_isReadable_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("isReadable_void_callback");
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
						return this->CMemoryDataStream::isReadable();
					}
				}
				virtual ev_bool isWriteable() const
				{
					if (this->_gRef != NULL && this->m_isWriteable_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("isWriteable_void_callback");
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
						return this->CMemoryDataStream::isWriteable();
					}
				}
				virtual EVString getLine(ev_bool trimAfter)
				{
					if (this->_gRef != NULL && this->m_getLine_ev_bool_callback != "" && this->isCustomExtend())
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
						jboolean trimAfter_j = (jboolean) trimAfter;
						jmethodID __method = __gr->getMethod("getLine_ev_bool_callback");
						jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method , trimAfter_j);
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
						return this->CMemoryDataStream::getLine(trimAfter);
					}
				}
				virtual EVString getLine()
				{
					if (this->_gRef != NULL && this->m_getLine_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getLine_void_callback");
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
						return this->CMemoryDataStream::getLine();
					}
				}
				virtual EVString getAsString()
				{
					if (this->_gRef != NULL && this->m_getAsString_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getAsString_void_callback");
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
						return this->CMemoryDataStream::getAsString();
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCMemoryDataStreamProxy);
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_MemoryDataStream_getPtr_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CMemoryDataStream *pObjectX = (EarthView::World::Core::CMemoryDataStream*) pObjXXXX;
				ev_uchar* __values1 = pObjectX->getPtr();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_MemoryDataStream_getCurrentPtr_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CMemoryDataStream *pObjectX = (EarthView::World::Core::CMemoryDataStream*) pObjXXXX;
				ev_uchar* __values1 = pObjectX->getCurrentPtr();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_MemoryDataStream_read_1void_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong buf_j, jlong count_j)
			{
				void *buf = (void*) buf_j;
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Core::CMemoryDataStream *pObjectX = (EarthView::World::Core::CMemoryDataStream*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCMemoryDataStreamProxy))
				{
					ev_size_t __values1 = pObjectX->EarthView::World::Core::CMemoryDataStream::read(buf, count);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					ev_size_t __values1 = pObjectX->read(buf, count);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_MemoryDataStream_register_1read_1void_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMemoryDataStreamProxy *pObjectX = (JCMemoryDataStreamProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_read_void_ev_size_t_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"read_void_ev_size_t_callback", "(JJ)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_MemoryDataStream_read_1void_1ev_1size_1t_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong buf_j, jlong count_j)
			{
				void *buf = (void*) buf_j;
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Core::CMemoryDataStream *pObjectX = (EarthView::World::Core::CMemoryDataStream*) pObjXXXX;
				ev_size_t __values1 = pObjectX->EarthView::World::Core::CMemoryDataStream::read(buf, count);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_MemoryDataStream_write_1void_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong buf_j, jlong count_j)
			{
				const void *buf = (const void*) buf_j;
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Core::CMemoryDataStream *pObjectX = (EarthView::World::Core::CMemoryDataStream*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCMemoryDataStreamProxy))
				{
					ev_size_t __values1 = pObjectX->EarthView::World::Core::CMemoryDataStream::write(buf, count);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					ev_size_t __values1 = pObjectX->write(buf, count);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_MemoryDataStream_register_1write_1void_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMemoryDataStreamProxy *pObjectX = (JCMemoryDataStreamProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_write_void_ev_size_t_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"write_void_ev_size_t_callback", "(JJ)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_MemoryDataStream_write_1void_1ev_1size_1t_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong buf_j, jlong count_j)
			{
				const void *buf = (const void*) buf_j;
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Core::CMemoryDataStream *pObjectX = (EarthView::World::Core::CMemoryDataStream*) pObjXXXX;
				ev_size_t __values1 = pObjectX->EarthView::World::Core::CMemoryDataStream::write(buf, count);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_MemoryDataStream_readLine_1ev_1char_1ev_1size_1t_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong buf_j, jlong maxCount_j, jstring delim_j)
			{
				ev_char *buf = (ev_char*) buf_j;
				ev_size_t maxCount = (ev_size_t) maxCount_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* delim_ch = (const ev_char*)__env->GetStringUTFChars(delim_j,JNI_FALSE);
				const EVString delim = delim_ch;
				__env->ReleaseStringUTFChars(delim_j, (const char *)delim_ch);
				#else
				const ev_wchar* delim_ch = (const ev_wchar*)__env->GetStringChars(delim_j,JNI_FALSE);
				const EVString delim = delim_ch;
				__env->ReleaseStringChars(delim_j, (const jchar *)delim_ch);
				#endif
				EarthView::World::Core::CMemoryDataStream *pObjectX = (EarthView::World::Core::CMemoryDataStream*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCMemoryDataStreamProxy))
				{
					ev_size_t __values1 = pObjectX->EarthView::World::Core::CMemoryDataStream::readLine(buf, maxCount, delim);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					ev_size_t __values1 = pObjectX->readLine(buf, maxCount, delim);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_MemoryDataStream_register_1readLine_1ev_1char_1ev_1size_1t_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMemoryDataStreamProxy *pObjectX = (JCMemoryDataStreamProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_readLine_ev_char_ev_size_t_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"readLine_ev_char_ev_size_t_EVString_callback", "(JJLjava/lang/String;)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_MemoryDataStream_readLine_1ev_1char_1ev_1size_1t_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong buf_j, jlong maxCount_j, jstring delim_j)
			{
				ev_char *buf = (ev_char*) buf_j;
				ev_size_t maxCount = (ev_size_t) maxCount_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* delim_ch = (const ev_char*)__env->GetStringUTFChars(delim_j,JNI_FALSE);
				const EVString delim = delim_ch;
				__env->ReleaseStringUTFChars(delim_j, (const char *)delim_ch);
				#else
				const ev_wchar* delim_ch = (const ev_wchar*)__env->GetStringChars(delim_j,JNI_FALSE);
				const EVString delim = delim_ch;
				__env->ReleaseStringChars(delim_j, (const jchar *)delim_ch);
				#endif
				EarthView::World::Core::CMemoryDataStream *pObjectX = (EarthView::World::Core::CMemoryDataStream*) pObjXXXX;
				ev_size_t __values1 = pObjectX->EarthView::World::Core::CMemoryDataStream::readLine(buf, maxCount, delim);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_MemoryDataStream_readLine_1ev_1char_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong buf_j, jlong maxCount_j)
			{
				ev_char *buf = (ev_char*) buf_j;
				ev_size_t maxCount = (ev_size_t) maxCount_j;
				EarthView::World::Core::CMemoryDataStream *pObjectX = (EarthView::World::Core::CMemoryDataStream*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCMemoryDataStreamProxy))
				{
					ev_size_t __values1 = pObjectX->EarthView::World::Core::CMemoryDataStream::readLine(buf, maxCount);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					ev_size_t __values1 = pObjectX->readLine(buf, maxCount);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_MemoryDataStream_register_1readLine_1ev_1char_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMemoryDataStreamProxy *pObjectX = (JCMemoryDataStreamProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_readLine_ev_char_ev_size_t_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"readLine_ev_char_ev_size_t_callback", "(JJ)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_MemoryDataStream_readLine_1ev_1char_1ev_1size_1t_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong buf_j, jlong maxCount_j)
			{
				ev_char *buf = (ev_char*) buf_j;
				ev_size_t maxCount = (ev_size_t) maxCount_j;
				EarthView::World::Core::CMemoryDataStream *pObjectX = (EarthView::World::Core::CMemoryDataStream*) pObjXXXX;
				ev_size_t __values1 = pObjectX->EarthView::World::Core::CMemoryDataStream::readLine(buf, maxCount);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_MemoryDataStream_skipLine_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring delim_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* delim_ch = (const ev_char*)__env->GetStringUTFChars(delim_j,JNI_FALSE);
				const EVString delim = delim_ch;
				__env->ReleaseStringUTFChars(delim_j, (const char *)delim_ch);
				#else
				const ev_wchar* delim_ch = (const ev_wchar*)__env->GetStringChars(delim_j,JNI_FALSE);
				const EVString delim = delim_ch;
				__env->ReleaseStringChars(delim_j, (const jchar *)delim_ch);
				#endif
				EarthView::World::Core::CMemoryDataStream *pObjectX = (EarthView::World::Core::CMemoryDataStream*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCMemoryDataStreamProxy))
				{
					ev_size_t __values1 = pObjectX->EarthView::World::Core::CMemoryDataStream::skipLine(delim);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					ev_size_t __values1 = pObjectX->skipLine(delim);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_MemoryDataStream_register_1skipLine_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMemoryDataStreamProxy *pObjectX = (JCMemoryDataStreamProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_skipLine_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"skipLine_EVString_callback", "(Ljava/lang/String;)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_MemoryDataStream_skipLine_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring delim_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* delim_ch = (const ev_char*)__env->GetStringUTFChars(delim_j,JNI_FALSE);
				const EVString delim = delim_ch;
				__env->ReleaseStringUTFChars(delim_j, (const char *)delim_ch);
				#else
				const ev_wchar* delim_ch = (const ev_wchar*)__env->GetStringChars(delim_j,JNI_FALSE);
				const EVString delim = delim_ch;
				__env->ReleaseStringChars(delim_j, (const jchar *)delim_ch);
				#endif
				EarthView::World::Core::CMemoryDataStream *pObjectX = (EarthView::World::Core::CMemoryDataStream*) pObjXXXX;
				ev_size_t __values1 = pObjectX->EarthView::World::Core::CMemoryDataStream::skipLine(delim);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_MemoryDataStream_skipLine_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CMemoryDataStream *pObjectX = (EarthView::World::Core::CMemoryDataStream*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCMemoryDataStreamProxy))
				{
					ev_size_t __values1 = pObjectX->EarthView::World::Core::CMemoryDataStream::skipLine();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					ev_size_t __values1 = pObjectX->skipLine();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_MemoryDataStream_register_1skipLine_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMemoryDataStreamProxy *pObjectX = (JCMemoryDataStreamProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_skipLine_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"skipLine_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_MemoryDataStream_skipLine_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CMemoryDataStream *pObjectX = (EarthView::World::Core::CMemoryDataStream*) pObjXXXX;
				ev_size_t __values1 = pObjectX->EarthView::World::Core::CMemoryDataStream::skipLine();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_MemoryDataStream_skip_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint count_j)
			{
				ev_int32 count = (ev_int32) count_j;
				EarthView::World::Core::CMemoryDataStream *pObjectX = (EarthView::World::Core::CMemoryDataStream*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCMemoryDataStreamProxy))
				{
					pObjectX->EarthView::World::Core::CMemoryDataStream::skip(count);
				}
				else
				{
					pObjectX->skip(count);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_MemoryDataStream_register_1skip_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMemoryDataStreamProxy *pObjectX = (JCMemoryDataStreamProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_skip_ev_int32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"skip_ev_int32_callback", "(I)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_MemoryDataStream_skip_1ev_1int32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint count_j)
			{
				ev_int32 count = (ev_int32) count_j;
				EarthView::World::Core::CMemoryDataStream *pObjectX = (EarthView::World::Core::CMemoryDataStream*) pObjXXXX;
				pObjectX->EarthView::World::Core::CMemoryDataStream::skip(count);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_MemoryDataStream_seek_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_size_t pos = (ev_size_t) pos_j;
				EarthView::World::Core::CMemoryDataStream *pObjectX = (EarthView::World::Core::CMemoryDataStream*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCMemoryDataStreamProxy))
				{
					pObjectX->EarthView::World::Core::CMemoryDataStream::seek(pos);
				}
				else
				{
					pObjectX->seek(pos);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_MemoryDataStream_register_1seek_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMemoryDataStreamProxy *pObjectX = (JCMemoryDataStreamProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_seek_ev_size_t_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"seek_ev_size_t_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_MemoryDataStream_seek_1ev_1size_1t_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_size_t pos = (ev_size_t) pos_j;
				EarthView::World::Core::CMemoryDataStream *pObjectX = (EarthView::World::Core::CMemoryDataStream*) pObjXXXX;
				pObjectX->EarthView::World::Core::CMemoryDataStream::seek(pos);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_MemoryDataStream_tell_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CMemoryDataStream *pObjectX = (EarthView::World::Core::CMemoryDataStream*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCMemoryDataStreamProxy))
				{
					ev_size_t __values1 = pObjectX->EarthView::World::Core::CMemoryDataStream::tell();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					ev_size_t __values1 = pObjectX->tell();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_MemoryDataStream_register_1tell_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMemoryDataStreamProxy *pObjectX = (JCMemoryDataStreamProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_tell_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"tell_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_MemoryDataStream_tell_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CMemoryDataStream *pObjectX = (EarthView::World::Core::CMemoryDataStream*) pObjXXXX;
				ev_size_t __values1 = pObjectX->EarthView::World::Core::CMemoryDataStream::tell();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_MemoryDataStream_eof_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CMemoryDataStream *pObjectX = (EarthView::World::Core::CMemoryDataStream*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCMemoryDataStreamProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Core::CMemoryDataStream::eof();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->eof();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_MemoryDataStream_register_1eof_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMemoryDataStreamProxy *pObjectX = (JCMemoryDataStreamProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_eof_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"eof_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_MemoryDataStream_eof_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CMemoryDataStream *pObjectX = (EarthView::World::Core::CMemoryDataStream*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Core::CMemoryDataStream::eof();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_MemoryDataStream_close_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CMemoryDataStream *pObjectX = (EarthView::World::Core::CMemoryDataStream*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCMemoryDataStreamProxy))
				{
					pObjectX->EarthView::World::Core::CMemoryDataStream::close();
				}
				else
				{
					pObjectX->close();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_MemoryDataStream_register_1close_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMemoryDataStreamProxy *pObjectX = (JCMemoryDataStreamProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_close_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"close_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_MemoryDataStream_close_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CMemoryDataStream *pObjectX = (EarthView::World::Core::CMemoryDataStream*) pObjXXXX;
				pObjectX->EarthView::World::Core::CMemoryDataStream::close();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_MemoryDataStream_setFreeOnClose_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean free_j)
			{
				ev_bool free = (ev_bool) free_j;
				EarthView::World::Core::CMemoryDataStream *pObjectX = (EarthView::World::Core::CMemoryDataStream*) pObjXXXX;
				pObjectX->setFreeOnClose(free);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_MemoryDataStream_register_1isReadable_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMemoryDataStreamProxy *pObjectX = (JCMemoryDataStreamProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_isReadable_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"isReadable_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_MemoryDataStream_register_1isWriteable_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMemoryDataStreamProxy *pObjectX = (JCMemoryDataStreamProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_isWriteable_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"isWriteable_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_MemoryDataStream_register_1getLine_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMemoryDataStreamProxy *pObjectX = (JCMemoryDataStreamProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getLine_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getLine_ev_bool_callback", "(Z)Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_MemoryDataStream_register_1getLine_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMemoryDataStreamProxy *pObjectX = (JCMemoryDataStreamProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getLine_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getLine_void_callback", "()Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_MemoryDataStream_register_1getAsString_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMemoryDataStreamProxy *pObjectX = (JCMemoryDataStreamProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getAsString_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getAsString_void_callback", "()Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_MemoryDataStreamPtr_get_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::MemoryDataStreamPtr *pObjectX = (EarthView::World::Core::MemoryDataStreamPtr*) pObjXXXX;
				EarthView::World::Core::CMemoryDataStream* __values1 = pObjectX->get();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_MemoryDataStreamPtr_OperatorConvertionDataStreamPtr_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX )
			{
				EarthView::World::Core::MemoryDataStreamPtr& pObjectX = *(EarthView::World::Core::MemoryDataStreamPtr*) pObjXXXX;
				EarthView::World::Core::DataStreamPtr __values1 = pObjectX ;
				EarthView::World::Core::DataStreamPtr *returnvalues = new EarthView::World::Core::DataStreamPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			class JCFileStreamDataStreamProxy : public EarthView::World::Core::CFileStreamDataStream
			{
			 private:
				EarthView::World::Core::ev_string m_isReadable_void_callback;
				EarthView::World::Core::ev_string m_isWriteable_void_callback;
				EarthView::World::Core::ev_string m_read_void_ev_size_t_callback;
				EarthView::World::Core::ev_string m_write_void_ev_size_t_callback;
				EarthView::World::Core::ev_string m_readLine_ev_char_ev_size_t_EVString_callback;
				EarthView::World::Core::ev_string m_readLine_ev_char_ev_size_t_callback;
				EarthView::World::Core::ev_string m_getLine_ev_bool_callback;
				EarthView::World::Core::ev_string m_getLine_void_callback;
				EarthView::World::Core::ev_string m_getAsString_void_callback;
				EarthView::World::Core::ev_string m_skipLine_EVString_callback;
				EarthView::World::Core::ev_string m_skipLine_void_callback;
				EarthView::World::Core::ev_string m_skip_ev_int32_callback;
				EarthView::World::Core::ev_string m_seek_ev_size_t_callback;
				EarthView::World::Core::ev_string m_tell_void_callback;
				EarthView::World::Core::ev_string m_eof_void_callback;
				EarthView::World::Core::ev_string m_close_void_callback;
			public:
				JCFileStreamDataStreamProxy(EarthView::World::Core::CNameValuePairList *pList) : CFileStreamDataStream(pList)
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
				void register_isReadable_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_isReadable_void_callback = __method;
				}
				void register_isWriteable_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_isWriteable_void_callback = __method;
				}
				void register_read_void_ev_size_t_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_read_void_ev_size_t_callback = __method;
				}
				void register_write_void_ev_size_t_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_write_void_ev_size_t_callback = __method;
				}
				void register_readLine_ev_char_ev_size_t_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_readLine_ev_char_ev_size_t_EVString_callback = __method;
				}
				void register_readLine_ev_char_ev_size_t_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_readLine_ev_char_ev_size_t_callback = __method;
				}
				void register_getLine_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getLine_ev_bool_callback = __method;
				}
				void register_getLine_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getLine_void_callback = __method;
				}
				void register_getAsString_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getAsString_void_callback = __method;
				}
				void register_skipLine_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_skipLine_EVString_callback = __method;
				}
				void register_skipLine_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_skipLine_void_callback = __method;
				}
				void register_skip_ev_int32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_skip_ev_int32_callback = __method;
				}
				void register_seek_ev_size_t_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_seek_ev_size_t_callback = __method;
				}
				void register_tell_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_tell_void_callback = __method;
				}
				void register_eof_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_eof_void_callback = __method;
				}
				void register_close_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_close_void_callback = __method;
				}
				virtual ev_size_t read(void* buf, ev_size_t count)
				{
					if (this->_gRef != NULL && this->m_read_void_ev_size_t_callback != "" && this->isCustomExtend())
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
						jlong buf_j = (jlong) buf;
						jlong count_j = (jlong) count;
						jmethodID __method = __gr->getMethod("read_void_ev_size_t_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , buf_j, count_j);
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
						return this->CFileStreamDataStream::read(buf, count);
					}
				}
				virtual ev_size_t write(const void* buf, ev_size_t count)
				{
					if (this->_gRef != NULL && this->m_write_void_ev_size_t_callback != "" && this->isCustomExtend())
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
						jlong buf_j = (jlong) buf;
						jlong count_j = (jlong) count;
						jmethodID __method = __gr->getMethod("write_void_ev_size_t_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , buf_j, count_j);
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
						return this->CFileStreamDataStream::write(buf, count);
					}
				}
				virtual ev_size_t readLine(ev_char* buf, ev_size_t maxCount, const EVString& delim)
				{
					if (this->_gRef != NULL && this->m_readLine_ev_char_ev_size_t_EVString_callback != "" && this->isCustomExtend())
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
						jlong buf_j = (jlong) buf;
						jlong maxCount_j = (jlong) maxCount;
						EarthView::World::Core::ev_wstring delim_wch = delim;
						jstring delim_j = __env->NewString((const jchar*)delim_wch.getString(), delim_wch.size());
						jmethodID __method = __gr->getMethod("readLine_ev_char_ev_size_t_EVString_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , buf_j, maxCount_j, delim_j);
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
						return this->CFileStreamDataStream::readLine(buf, maxCount, delim);
					}
				}
				virtual ev_size_t readLine(ev_char* buf, ev_size_t maxCount)
				{
					if (this->_gRef != NULL && this->m_readLine_ev_char_ev_size_t_callback != "" && this->isCustomExtend())
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
						jlong buf_j = (jlong) buf;
						jlong maxCount_j = (jlong) maxCount;
						jmethodID __method = __gr->getMethod("readLine_ev_char_ev_size_t_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , buf_j, maxCount_j);
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
						return this->CFileStreamDataStream::readLine(buf, maxCount);
					}
				}
				virtual void skip(ev_int32 count)
				{
					if (this->_gRef != NULL && this->m_skip_ev_int32_callback != "" && this->isCustomExtend())
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
						jint count_j = (jint) count;
						jmethodID __method = __gr->getMethod("skip_ev_int32_callback");
						__env->CallVoidMethod(__obj, __method , count_j);
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
						return this->CFileStreamDataStream::skip(count);
					}
				}
				virtual void seek(ev_size_t pos)
				{
					if (this->_gRef != NULL && this->m_seek_ev_size_t_callback != "" && this->isCustomExtend())
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
						jlong pos_j = (jlong) pos;
						jmethodID __method = __gr->getMethod("seek_ev_size_t_callback");
						__env->CallVoidMethod(__obj, __method , pos_j);
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
						return this->CFileStreamDataStream::seek(pos);
					}
				}
				virtual ev_size_t tell() const
				{
					if (this->_gRef != NULL && this->m_tell_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("tell_void_callback");
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
						return this->CFileStreamDataStream::tell();
					}
				}
				virtual ev_bool eof() const
				{
					if (this->_gRef != NULL && this->m_eof_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("eof_void_callback");
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
						return this->CFileStreamDataStream::eof();
					}
				}
				virtual void close()
				{
					if (this->_gRef != NULL && this->m_close_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("close_void_callback");
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
						return this->CFileStreamDataStream::close();
					}
				}
				virtual ev_bool isReadable() const
				{
					if (this->_gRef != NULL && this->m_isReadable_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("isReadable_void_callback");
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
						return this->CFileStreamDataStream::isReadable();
					}
				}
				virtual ev_bool isWriteable() const
				{
					if (this->_gRef != NULL && this->m_isWriteable_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("isWriteable_void_callback");
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
						return this->CFileStreamDataStream::isWriteable();
					}
				}
				virtual EVString getLine(ev_bool trimAfter)
				{
					if (this->_gRef != NULL && this->m_getLine_ev_bool_callback != "" && this->isCustomExtend())
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
						jboolean trimAfter_j = (jboolean) trimAfter;
						jmethodID __method = __gr->getMethod("getLine_ev_bool_callback");
						jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method , trimAfter_j);
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
						return this->CFileStreamDataStream::getLine(trimAfter);
					}
				}
				virtual EVString getLine()
				{
					if (this->_gRef != NULL && this->m_getLine_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getLine_void_callback");
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
						return this->CFileStreamDataStream::getLine();
					}
				}
				virtual EVString getAsString()
				{
					if (this->_gRef != NULL && this->m_getAsString_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getAsString_void_callback");
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
						return this->CFileStreamDataStream::getAsString();
					}
				}
				virtual ev_size_t skipLine(const EVString& delim)
				{
					if (this->_gRef != NULL && this->m_skipLine_EVString_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring delim_wch = delim;
						jstring delim_j = __env->NewString((const jchar*)delim_wch.getString(), delim_wch.size());
						jmethodID __method = __gr->getMethod("skipLine_EVString_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , delim_j);
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
						return this->CFileStreamDataStream::skipLine(delim);
					}
				}
				virtual ev_size_t skipLine()
				{
					if (this->_gRef != NULL && this->m_skipLine_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("skipLine_void_callback");
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
						return this->CFileStreamDataStream::skipLine();
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCFileStreamDataStreamProxy);
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_FileStreamDataStream_read_1void_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong buf_j, jlong count_j)
			{
				void *buf = (void*) buf_j;
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Core::CFileStreamDataStream *pObjectX = (EarthView::World::Core::CFileStreamDataStream*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCFileStreamDataStreamProxy))
				{
					ev_size_t __values1 = pObjectX->EarthView::World::Core::CFileStreamDataStream::read(buf, count);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					ev_size_t __values1 = pObjectX->read(buf, count);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_FileStreamDataStream_register_1read_1void_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCFileStreamDataStreamProxy *pObjectX = (JCFileStreamDataStreamProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_read_void_ev_size_t_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"read_void_ev_size_t_callback", "(JJ)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_FileStreamDataStream_read_1void_1ev_1size_1t_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong buf_j, jlong count_j)
			{
				void *buf = (void*) buf_j;
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Core::CFileStreamDataStream *pObjectX = (EarthView::World::Core::CFileStreamDataStream*) pObjXXXX;
				ev_size_t __values1 = pObjectX->EarthView::World::Core::CFileStreamDataStream::read(buf, count);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_FileStreamDataStream_write_1void_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong buf_j, jlong count_j)
			{
				const void *buf = (const void*) buf_j;
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Core::CFileStreamDataStream *pObjectX = (EarthView::World::Core::CFileStreamDataStream*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCFileStreamDataStreamProxy))
				{
					ev_size_t __values1 = pObjectX->EarthView::World::Core::CFileStreamDataStream::write(buf, count);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					ev_size_t __values1 = pObjectX->write(buf, count);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_FileStreamDataStream_register_1write_1void_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCFileStreamDataStreamProxy *pObjectX = (JCFileStreamDataStreamProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_write_void_ev_size_t_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"write_void_ev_size_t_callback", "(JJ)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_FileStreamDataStream_write_1void_1ev_1size_1t_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong buf_j, jlong count_j)
			{
				const void *buf = (const void*) buf_j;
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Core::CFileStreamDataStream *pObjectX = (EarthView::World::Core::CFileStreamDataStream*) pObjXXXX;
				ev_size_t __values1 = pObjectX->EarthView::World::Core::CFileStreamDataStream::write(buf, count);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_FileStreamDataStream_readLine_1ev_1char_1ev_1size_1t_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong buf_j, jlong maxCount_j, jstring delim_j)
			{
				ev_char *buf = (ev_char*) buf_j;
				ev_size_t maxCount = (ev_size_t) maxCount_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* delim_ch = (const ev_char*)__env->GetStringUTFChars(delim_j,JNI_FALSE);
				const EVString delim = delim_ch;
				__env->ReleaseStringUTFChars(delim_j, (const char *)delim_ch);
				#else
				const ev_wchar* delim_ch = (const ev_wchar*)__env->GetStringChars(delim_j,JNI_FALSE);
				const EVString delim = delim_ch;
				__env->ReleaseStringChars(delim_j, (const jchar *)delim_ch);
				#endif
				EarthView::World::Core::CFileStreamDataStream *pObjectX = (EarthView::World::Core::CFileStreamDataStream*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCFileStreamDataStreamProxy))
				{
					ev_size_t __values1 = pObjectX->EarthView::World::Core::CFileStreamDataStream::readLine(buf, maxCount, delim);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					ev_size_t __values1 = pObjectX->readLine(buf, maxCount, delim);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_FileStreamDataStream_register_1readLine_1ev_1char_1ev_1size_1t_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCFileStreamDataStreamProxy *pObjectX = (JCFileStreamDataStreamProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_readLine_ev_char_ev_size_t_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"readLine_ev_char_ev_size_t_EVString_callback", "(JJLjava/lang/String;)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_FileStreamDataStream_readLine_1ev_1char_1ev_1size_1t_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong buf_j, jlong maxCount_j, jstring delim_j)
			{
				ev_char *buf = (ev_char*) buf_j;
				ev_size_t maxCount = (ev_size_t) maxCount_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* delim_ch = (const ev_char*)__env->GetStringUTFChars(delim_j,JNI_FALSE);
				const EVString delim = delim_ch;
				__env->ReleaseStringUTFChars(delim_j, (const char *)delim_ch);
				#else
				const ev_wchar* delim_ch = (const ev_wchar*)__env->GetStringChars(delim_j,JNI_FALSE);
				const EVString delim = delim_ch;
				__env->ReleaseStringChars(delim_j, (const jchar *)delim_ch);
				#endif
				EarthView::World::Core::CFileStreamDataStream *pObjectX = (EarthView::World::Core::CFileStreamDataStream*) pObjXXXX;
				ev_size_t __values1 = pObjectX->EarthView::World::Core::CFileStreamDataStream::readLine(buf, maxCount, delim);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_FileStreamDataStream_readLine_1ev_1char_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong buf_j, jlong maxCount_j)
			{
				ev_char *buf = (ev_char*) buf_j;
				ev_size_t maxCount = (ev_size_t) maxCount_j;
				EarthView::World::Core::CFileStreamDataStream *pObjectX = (EarthView::World::Core::CFileStreamDataStream*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCFileStreamDataStreamProxy))
				{
					ev_size_t __values1 = pObjectX->EarthView::World::Core::CFileStreamDataStream::readLine(buf, maxCount);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					ev_size_t __values1 = pObjectX->readLine(buf, maxCount);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_FileStreamDataStream_register_1readLine_1ev_1char_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCFileStreamDataStreamProxy *pObjectX = (JCFileStreamDataStreamProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_readLine_ev_char_ev_size_t_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"readLine_ev_char_ev_size_t_callback", "(JJ)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_FileStreamDataStream_readLine_1ev_1char_1ev_1size_1t_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong buf_j, jlong maxCount_j)
			{
				ev_char *buf = (ev_char*) buf_j;
				ev_size_t maxCount = (ev_size_t) maxCount_j;
				EarthView::World::Core::CFileStreamDataStream *pObjectX = (EarthView::World::Core::CFileStreamDataStream*) pObjXXXX;
				ev_size_t __values1 = pObjectX->EarthView::World::Core::CFileStreamDataStream::readLine(buf, maxCount);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_FileStreamDataStream_skip_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint count_j)
			{
				ev_int32 count = (ev_int32) count_j;
				EarthView::World::Core::CFileStreamDataStream *pObjectX = (EarthView::World::Core::CFileStreamDataStream*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCFileStreamDataStreamProxy))
				{
					pObjectX->EarthView::World::Core::CFileStreamDataStream::skip(count);
				}
				else
				{
					pObjectX->skip(count);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_FileStreamDataStream_register_1skip_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCFileStreamDataStreamProxy *pObjectX = (JCFileStreamDataStreamProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_skip_ev_int32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"skip_ev_int32_callback", "(I)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_FileStreamDataStream_skip_1ev_1int32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint count_j)
			{
				ev_int32 count = (ev_int32) count_j;
				EarthView::World::Core::CFileStreamDataStream *pObjectX = (EarthView::World::Core::CFileStreamDataStream*) pObjXXXX;
				pObjectX->EarthView::World::Core::CFileStreamDataStream::skip(count);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_FileStreamDataStream_seek_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_size_t pos = (ev_size_t) pos_j;
				EarthView::World::Core::CFileStreamDataStream *pObjectX = (EarthView::World::Core::CFileStreamDataStream*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCFileStreamDataStreamProxy))
				{
					pObjectX->EarthView::World::Core::CFileStreamDataStream::seek(pos);
				}
				else
				{
					pObjectX->seek(pos);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_FileStreamDataStream_register_1seek_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCFileStreamDataStreamProxy *pObjectX = (JCFileStreamDataStreamProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_seek_ev_size_t_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"seek_ev_size_t_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_FileStreamDataStream_seek_1ev_1size_1t_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_size_t pos = (ev_size_t) pos_j;
				EarthView::World::Core::CFileStreamDataStream *pObjectX = (EarthView::World::Core::CFileStreamDataStream*) pObjXXXX;
				pObjectX->EarthView::World::Core::CFileStreamDataStream::seek(pos);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_FileStreamDataStream_tell_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CFileStreamDataStream *pObjectX = (EarthView::World::Core::CFileStreamDataStream*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCFileStreamDataStreamProxy))
				{
					ev_size_t __values1 = pObjectX->EarthView::World::Core::CFileStreamDataStream::tell();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					ev_size_t __values1 = pObjectX->tell();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_FileStreamDataStream_register_1tell_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCFileStreamDataStreamProxy *pObjectX = (JCFileStreamDataStreamProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_tell_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"tell_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_FileStreamDataStream_tell_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CFileStreamDataStream *pObjectX = (EarthView::World::Core::CFileStreamDataStream*) pObjXXXX;
				ev_size_t __values1 = pObjectX->EarthView::World::Core::CFileStreamDataStream::tell();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_FileStreamDataStream_eof_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CFileStreamDataStream *pObjectX = (EarthView::World::Core::CFileStreamDataStream*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCFileStreamDataStreamProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Core::CFileStreamDataStream::eof();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->eof();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_FileStreamDataStream_register_1eof_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCFileStreamDataStreamProxy *pObjectX = (JCFileStreamDataStreamProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_eof_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"eof_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_FileStreamDataStream_eof_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CFileStreamDataStream *pObjectX = (EarthView::World::Core::CFileStreamDataStream*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Core::CFileStreamDataStream::eof();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_FileStreamDataStream_close_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CFileStreamDataStream *pObjectX = (EarthView::World::Core::CFileStreamDataStream*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCFileStreamDataStreamProxy))
				{
					pObjectX->EarthView::World::Core::CFileStreamDataStream::close();
				}
				else
				{
					pObjectX->close();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_FileStreamDataStream_register_1close_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCFileStreamDataStreamProxy *pObjectX = (JCFileStreamDataStreamProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_close_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"close_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_FileStreamDataStream_close_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CFileStreamDataStream *pObjectX = (EarthView::World::Core::CFileStreamDataStream*) pObjXXXX;
				pObjectX->EarthView::World::Core::CFileStreamDataStream::close();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_FileStreamDataStream_register_1isReadable_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCFileStreamDataStreamProxy *pObjectX = (JCFileStreamDataStreamProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_isReadable_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"isReadable_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_FileStreamDataStream_register_1isWriteable_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCFileStreamDataStreamProxy *pObjectX = (JCFileStreamDataStreamProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_isWriteable_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"isWriteable_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_FileStreamDataStream_register_1getLine_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCFileStreamDataStreamProxy *pObjectX = (JCFileStreamDataStreamProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getLine_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getLine_ev_bool_callback", "(Z)Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_FileStreamDataStream_register_1getLine_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCFileStreamDataStreamProxy *pObjectX = (JCFileStreamDataStreamProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getLine_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getLine_void_callback", "()Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_FileStreamDataStream_register_1getAsString_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCFileStreamDataStreamProxy *pObjectX = (JCFileStreamDataStreamProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getAsString_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getAsString_void_callback", "()Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_FileStreamDataStream_register_1skipLine_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCFileStreamDataStreamProxy *pObjectX = (JCFileStreamDataStreamProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_skipLine_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"skipLine_EVString_callback", "(Ljava/lang/String;)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_FileStreamDataStream_register_1skipLine_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCFileStreamDataStreamProxy *pObjectX = (JCFileStreamDataStreamProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_skipLine_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"skipLine_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			class JCBufferDataStreamProxy : public EarthView::World::Core::CBufferDataStream
			{
			 private:
				EarthView::World::Core::ev_string m_isReadable_void_callback;
				EarthView::World::Core::ev_string m_isWriteable_void_callback;
				EarthView::World::Core::ev_string m_read_void_ev_size_t_callback;
				EarthView::World::Core::ev_string m_write_void_ev_size_t_callback;
				EarthView::World::Core::ev_string m_readLine_ev_char_ev_size_t_EVString_callback;
				EarthView::World::Core::ev_string m_readLine_ev_char_ev_size_t_callback;
				EarthView::World::Core::ev_string m_getLine_ev_bool_callback;
				EarthView::World::Core::ev_string m_getLine_void_callback;
				EarthView::World::Core::ev_string m_getAsString_void_callback;
				EarthView::World::Core::ev_string m_skipLine_EVString_callback;
				EarthView::World::Core::ev_string m_skipLine_void_callback;
				EarthView::World::Core::ev_string m_skip_ev_int32_callback;
				EarthView::World::Core::ev_string m_seek_ev_size_t_callback;
				EarthView::World::Core::ev_string m_tell_void_callback;
				EarthView::World::Core::ev_string m_eof_void_callback;
				EarthView::World::Core::ev_string m_close_void_callback;
			public:
				JCBufferDataStreamProxy(EarthView::World::Core::CNameValuePairList *pList) : CBufferDataStream(pList)
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
				void register_isReadable_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_isReadable_void_callback = __method;
				}
				void register_isWriteable_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_isWriteable_void_callback = __method;
				}
				void register_read_void_ev_size_t_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_read_void_ev_size_t_callback = __method;
				}
				void register_write_void_ev_size_t_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_write_void_ev_size_t_callback = __method;
				}
				void register_readLine_ev_char_ev_size_t_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_readLine_ev_char_ev_size_t_EVString_callback = __method;
				}
				void register_readLine_ev_char_ev_size_t_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_readLine_ev_char_ev_size_t_callback = __method;
				}
				void register_getLine_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getLine_ev_bool_callback = __method;
				}
				void register_getLine_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getLine_void_callback = __method;
				}
				void register_getAsString_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getAsString_void_callback = __method;
				}
				void register_skipLine_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_skipLine_EVString_callback = __method;
				}
				void register_skipLine_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_skipLine_void_callback = __method;
				}
				void register_skip_ev_int32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_skip_ev_int32_callback = __method;
				}
				void register_seek_ev_size_t_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_seek_ev_size_t_callback = __method;
				}
				void register_tell_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_tell_void_callback = __method;
				}
				void register_eof_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_eof_void_callback = __method;
				}
				void register_close_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_close_void_callback = __method;
				}
				virtual ev_size_t read(void* buf, ev_size_t count)
				{
					if (this->_gRef != NULL && this->m_read_void_ev_size_t_callback != "" && this->isCustomExtend())
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
						jlong buf_j = (jlong) buf;
						jlong count_j = (jlong) count;
						jmethodID __method = __gr->getMethod("read_void_ev_size_t_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , buf_j, count_j);
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
						return this->CBufferDataStream::read(buf, count);
					}
				}
				virtual ev_size_t write(const void* buf, ev_size_t count)
				{
					if (this->_gRef != NULL && this->m_write_void_ev_size_t_callback != "" && this->isCustomExtend())
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
						jlong buf_j = (jlong) buf;
						jlong count_j = (jlong) count;
						jmethodID __method = __gr->getMethod("write_void_ev_size_t_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , buf_j, count_j);
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
						return this->CBufferDataStream::write(buf, count);
					}
				}
				virtual ev_size_t readLine(ev_char* buf, ev_size_t maxCount, const EVString& delim)
				{
					if (this->_gRef != NULL && this->m_readLine_ev_char_ev_size_t_EVString_callback != "" && this->isCustomExtend())
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
						jlong buf_j = (jlong) buf;
						jlong maxCount_j = (jlong) maxCount;
						EarthView::World::Core::ev_wstring delim_wch = delim;
						jstring delim_j = __env->NewString((const jchar*)delim_wch.getString(), delim_wch.size());
						jmethodID __method = __gr->getMethod("readLine_ev_char_ev_size_t_EVString_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , buf_j, maxCount_j, delim_j);
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
						return this->CBufferDataStream::readLine(buf, maxCount, delim);
					}
				}
				virtual ev_size_t readLine(ev_char* buf, ev_size_t maxCount)
				{
					if (this->_gRef != NULL && this->m_readLine_ev_char_ev_size_t_callback != "" && this->isCustomExtend())
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
						jlong buf_j = (jlong) buf;
						jlong maxCount_j = (jlong) maxCount;
						jmethodID __method = __gr->getMethod("readLine_ev_char_ev_size_t_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , buf_j, maxCount_j);
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
						return this->CBufferDataStream::readLine(buf, maxCount);
					}
				}
				virtual EVString getLine(ev_bool trimAfter)
				{
					if (this->_gRef != NULL && this->m_getLine_ev_bool_callback != "" && this->isCustomExtend())
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
						jboolean trimAfter_j = (jboolean) trimAfter;
						jmethodID __method = __gr->getMethod("getLine_ev_bool_callback");
						jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method , trimAfter_j);
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
						return this->CBufferDataStream::getLine(trimAfter);
					}
				}
				virtual EVString getLine()
				{
					if (this->_gRef != NULL && this->m_getLine_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getLine_void_callback");
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
						return this->CBufferDataStream::getLine();
					}
				}
				virtual EVString getAsString()
				{
					if (this->_gRef != NULL && this->m_getAsString_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getAsString_void_callback");
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
						return this->CBufferDataStream::getAsString();
					}
				}
				virtual ev_size_t skipLine(const EVString& delim)
				{
					if (this->_gRef != NULL && this->m_skipLine_EVString_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring delim_wch = delim;
						jstring delim_j = __env->NewString((const jchar*)delim_wch.getString(), delim_wch.size());
						jmethodID __method = __gr->getMethod("skipLine_EVString_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , delim_j);
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
						return this->CBufferDataStream::skipLine(delim);
					}
				}
				virtual ev_size_t skipLine()
				{
					if (this->_gRef != NULL && this->m_skipLine_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("skipLine_void_callback");
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
						return this->CBufferDataStream::skipLine();
					}
				}
				virtual void skip(ev_int32 count)
				{
					if (this->_gRef != NULL && this->m_skip_ev_int32_callback != "" && this->isCustomExtend())
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
						jint count_j = (jint) count;
						jmethodID __method = __gr->getMethod("skip_ev_int32_callback");
						__env->CallVoidMethod(__obj, __method , count_j);
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
						return this->CBufferDataStream::skip(count);
					}
				}
				virtual void seek(ev_size_t pos)
				{
					if (this->_gRef != NULL && this->m_seek_ev_size_t_callback != "" && this->isCustomExtend())
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
						jlong pos_j = (jlong) pos;
						jmethodID __method = __gr->getMethod("seek_ev_size_t_callback");
						__env->CallVoidMethod(__obj, __method , pos_j);
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
						return this->CBufferDataStream::seek(pos);
					}
				}
				virtual ev_size_t tell() const
				{
					if (this->_gRef != NULL && this->m_tell_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("tell_void_callback");
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
						return this->CBufferDataStream::tell();
					}
				}
				virtual ev_bool eof() const
				{
					if (this->_gRef != NULL && this->m_eof_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("eof_void_callback");
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
						return this->CBufferDataStream::eof();
					}
				}
				virtual void close()
				{
					if (this->_gRef != NULL && this->m_close_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("close_void_callback");
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
						return this->CBufferDataStream::close();
					}
				}
				virtual ev_bool isReadable() const
				{
					if (this->_gRef != NULL && this->m_isReadable_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("isReadable_void_callback");
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
						return this->CBufferDataStream::isReadable();
					}
				}
				virtual ev_bool isWriteable() const
				{
					if (this->_gRef != NULL && this->m_isWriteable_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("isWriteable_void_callback");
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
						return this->CBufferDataStream::isWriteable();
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCBufferDataStreamProxy);
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_BufferDataStream_read_1void_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong buf_j, jlong count_j)
			{
				void *buf = (void*) buf_j;
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Core::CBufferDataStream *pObjectX = (EarthView::World::Core::CBufferDataStream*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCBufferDataStreamProxy))
				{
					ev_size_t __values1 = pObjectX->EarthView::World::Core::CBufferDataStream::read(buf, count);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					ev_size_t __values1 = pObjectX->read(buf, count);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_BufferDataStream_register_1read_1void_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCBufferDataStreamProxy *pObjectX = (JCBufferDataStreamProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_read_void_ev_size_t_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"read_void_ev_size_t_callback", "(JJ)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_BufferDataStream_read_1void_1ev_1size_1t_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong buf_j, jlong count_j)
			{
				void *buf = (void*) buf_j;
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Core::CBufferDataStream *pObjectX = (EarthView::World::Core::CBufferDataStream*) pObjXXXX;
				ev_size_t __values1 = pObjectX->EarthView::World::Core::CBufferDataStream::read(buf, count);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_BufferDataStream_write_1void_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong buf_j, jlong count_j)
			{
				const void *buf = (const void*) buf_j;
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Core::CBufferDataStream *pObjectX = (EarthView::World::Core::CBufferDataStream*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCBufferDataStreamProxy))
				{
					ev_size_t __values1 = pObjectX->EarthView::World::Core::CBufferDataStream::write(buf, count);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					ev_size_t __values1 = pObjectX->write(buf, count);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_BufferDataStream_register_1write_1void_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCBufferDataStreamProxy *pObjectX = (JCBufferDataStreamProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_write_void_ev_size_t_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"write_void_ev_size_t_callback", "(JJ)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_BufferDataStream_write_1void_1ev_1size_1t_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong buf_j, jlong count_j)
			{
				const void *buf = (const void*) buf_j;
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Core::CBufferDataStream *pObjectX = (EarthView::World::Core::CBufferDataStream*) pObjXXXX;
				ev_size_t __values1 = pObjectX->EarthView::World::Core::CBufferDataStream::write(buf, count);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_BufferDataStream_readLine_1ev_1char_1ev_1size_1t_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong buf_j, jlong maxCount_j, jstring delim_j)
			{
				ev_char *buf = (ev_char*) buf_j;
				ev_size_t maxCount = (ev_size_t) maxCount_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* delim_ch = (const ev_char*)__env->GetStringUTFChars(delim_j,JNI_FALSE);
				const EVString delim = delim_ch;
				__env->ReleaseStringUTFChars(delim_j, (const char *)delim_ch);
				#else
				const ev_wchar* delim_ch = (const ev_wchar*)__env->GetStringChars(delim_j,JNI_FALSE);
				const EVString delim = delim_ch;
				__env->ReleaseStringChars(delim_j, (const jchar *)delim_ch);
				#endif
				EarthView::World::Core::CBufferDataStream *pObjectX = (EarthView::World::Core::CBufferDataStream*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCBufferDataStreamProxy))
				{
					ev_size_t __values1 = pObjectX->EarthView::World::Core::CBufferDataStream::readLine(buf, maxCount, delim);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					ev_size_t __values1 = pObjectX->readLine(buf, maxCount, delim);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_BufferDataStream_register_1readLine_1ev_1char_1ev_1size_1t_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCBufferDataStreamProxy *pObjectX = (JCBufferDataStreamProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_readLine_ev_char_ev_size_t_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"readLine_ev_char_ev_size_t_EVString_callback", "(JJLjava/lang/String;)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_BufferDataStream_readLine_1ev_1char_1ev_1size_1t_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong buf_j, jlong maxCount_j, jstring delim_j)
			{
				ev_char *buf = (ev_char*) buf_j;
				ev_size_t maxCount = (ev_size_t) maxCount_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* delim_ch = (const ev_char*)__env->GetStringUTFChars(delim_j,JNI_FALSE);
				const EVString delim = delim_ch;
				__env->ReleaseStringUTFChars(delim_j, (const char *)delim_ch);
				#else
				const ev_wchar* delim_ch = (const ev_wchar*)__env->GetStringChars(delim_j,JNI_FALSE);
				const EVString delim = delim_ch;
				__env->ReleaseStringChars(delim_j, (const jchar *)delim_ch);
				#endif
				EarthView::World::Core::CBufferDataStream *pObjectX = (EarthView::World::Core::CBufferDataStream*) pObjXXXX;
				ev_size_t __values1 = pObjectX->EarthView::World::Core::CBufferDataStream::readLine(buf, maxCount, delim);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_BufferDataStream_readLine_1ev_1char_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong buf_j, jlong maxCount_j)
			{
				ev_char *buf = (ev_char*) buf_j;
				ev_size_t maxCount = (ev_size_t) maxCount_j;
				EarthView::World::Core::CBufferDataStream *pObjectX = (EarthView::World::Core::CBufferDataStream*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCBufferDataStreamProxy))
				{
					ev_size_t __values1 = pObjectX->EarthView::World::Core::CBufferDataStream::readLine(buf, maxCount);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					ev_size_t __values1 = pObjectX->readLine(buf, maxCount);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_BufferDataStream_register_1readLine_1ev_1char_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCBufferDataStreamProxy *pObjectX = (JCBufferDataStreamProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_readLine_ev_char_ev_size_t_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"readLine_ev_char_ev_size_t_callback", "(JJ)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_BufferDataStream_readLine_1ev_1char_1ev_1size_1t_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong buf_j, jlong maxCount_j)
			{
				ev_char *buf = (ev_char*) buf_j;
				ev_size_t maxCount = (ev_size_t) maxCount_j;
				EarthView::World::Core::CBufferDataStream *pObjectX = (EarthView::World::Core::CBufferDataStream*) pObjXXXX;
				ev_size_t __values1 = pObjectX->EarthView::World::Core::CBufferDataStream::readLine(buf, maxCount);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_core_BufferDataStream_getLine_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean trimAfter_j)
			{
				ev_bool trimAfter = (ev_bool) trimAfter_j;
				EarthView::World::Core::CBufferDataStream *pObjectX = (EarthView::World::Core::CBufferDataStream*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCBufferDataStreamProxy))
				{
					EVString __values1 = pObjectX->EarthView::World::Core::CBufferDataStream::getLine(trimAfter);
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				else
				{
					EVString __values1 = pObjectX->getLine(trimAfter);
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_BufferDataStream_register_1getLine_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCBufferDataStreamProxy *pObjectX = (JCBufferDataStreamProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getLine_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getLine_ev_bool_callback", "(Z)Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_core_BufferDataStream_getLine_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean trimAfter_j)
			{
				ev_bool trimAfter = (ev_bool) trimAfter_j;
				EarthView::World::Core::CBufferDataStream *pObjectX = (EarthView::World::Core::CBufferDataStream*) pObjXXXX;
				EVString __values1 = pObjectX->EarthView::World::Core::CBufferDataStream::getLine(trimAfter);
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_core_BufferDataStream_getLine_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CBufferDataStream *pObjectX = (EarthView::World::Core::CBufferDataStream*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCBufferDataStreamProxy))
				{
					EVString __values1 = pObjectX->EarthView::World::Core::CBufferDataStream::getLine();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				else
				{
					EVString __values1 = pObjectX->getLine();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_BufferDataStream_register_1getLine_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCBufferDataStreamProxy *pObjectX = (JCBufferDataStreamProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getLine_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getLine_void_callback", "()Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_core_BufferDataStream_getLine_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CBufferDataStream *pObjectX = (EarthView::World::Core::CBufferDataStream*) pObjXXXX;
				EVString __values1 = pObjectX->EarthView::World::Core::CBufferDataStream::getLine();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_core_BufferDataStream_getAsString_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CBufferDataStream *pObjectX = (EarthView::World::Core::CBufferDataStream*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCBufferDataStreamProxy))
				{
					EVString __values1 = pObjectX->EarthView::World::Core::CBufferDataStream::getAsString();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				else
				{
					EVString __values1 = pObjectX->getAsString();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_BufferDataStream_register_1getAsString_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCBufferDataStreamProxy *pObjectX = (JCBufferDataStreamProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getAsString_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getAsString_void_callback", "()Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_core_BufferDataStream_getAsString_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CBufferDataStream *pObjectX = (EarthView::World::Core::CBufferDataStream*) pObjXXXX;
				EVString __values1 = pObjectX->EarthView::World::Core::CBufferDataStream::getAsString();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_BufferDataStream_skipLine_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring delim_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* delim_ch = (const ev_char*)__env->GetStringUTFChars(delim_j,JNI_FALSE);
				const EVString delim = delim_ch;
				__env->ReleaseStringUTFChars(delim_j, (const char *)delim_ch);
				#else
				const ev_wchar* delim_ch = (const ev_wchar*)__env->GetStringChars(delim_j,JNI_FALSE);
				const EVString delim = delim_ch;
				__env->ReleaseStringChars(delim_j, (const jchar *)delim_ch);
				#endif
				EarthView::World::Core::CBufferDataStream *pObjectX = (EarthView::World::Core::CBufferDataStream*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCBufferDataStreamProxy))
				{
					ev_size_t __values1 = pObjectX->EarthView::World::Core::CBufferDataStream::skipLine(delim);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					ev_size_t __values1 = pObjectX->skipLine(delim);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_BufferDataStream_register_1skipLine_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCBufferDataStreamProxy *pObjectX = (JCBufferDataStreamProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_skipLine_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"skipLine_EVString_callback", "(Ljava/lang/String;)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_BufferDataStream_skipLine_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring delim_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* delim_ch = (const ev_char*)__env->GetStringUTFChars(delim_j,JNI_FALSE);
				const EVString delim = delim_ch;
				__env->ReleaseStringUTFChars(delim_j, (const char *)delim_ch);
				#else
				const ev_wchar* delim_ch = (const ev_wchar*)__env->GetStringChars(delim_j,JNI_FALSE);
				const EVString delim = delim_ch;
				__env->ReleaseStringChars(delim_j, (const jchar *)delim_ch);
				#endif
				EarthView::World::Core::CBufferDataStream *pObjectX = (EarthView::World::Core::CBufferDataStream*) pObjXXXX;
				ev_size_t __values1 = pObjectX->EarthView::World::Core::CBufferDataStream::skipLine(delim);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_BufferDataStream_skipLine_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CBufferDataStream *pObjectX = (EarthView::World::Core::CBufferDataStream*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCBufferDataStreamProxy))
				{
					ev_size_t __values1 = pObjectX->EarthView::World::Core::CBufferDataStream::skipLine();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					ev_size_t __values1 = pObjectX->skipLine();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_BufferDataStream_register_1skipLine_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCBufferDataStreamProxy *pObjectX = (JCBufferDataStreamProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_skipLine_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"skipLine_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_BufferDataStream_skipLine_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CBufferDataStream *pObjectX = (EarthView::World::Core::CBufferDataStream*) pObjXXXX;
				ev_size_t __values1 = pObjectX->EarthView::World::Core::CBufferDataStream::skipLine();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_BufferDataStream_skip_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint count_j)
			{
				ev_int32 count = (ev_int32) count_j;
				EarthView::World::Core::CBufferDataStream *pObjectX = (EarthView::World::Core::CBufferDataStream*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCBufferDataStreamProxy))
				{
					pObjectX->EarthView::World::Core::CBufferDataStream::skip(count);
				}
				else
				{
					pObjectX->skip(count);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_BufferDataStream_register_1skip_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCBufferDataStreamProxy *pObjectX = (JCBufferDataStreamProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_skip_ev_int32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"skip_ev_int32_callback", "(I)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_BufferDataStream_skip_1ev_1int32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint count_j)
			{
				ev_int32 count = (ev_int32) count_j;
				EarthView::World::Core::CBufferDataStream *pObjectX = (EarthView::World::Core::CBufferDataStream*) pObjXXXX;
				pObjectX->EarthView::World::Core::CBufferDataStream::skip(count);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_BufferDataStream_seek_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_size_t pos = (ev_size_t) pos_j;
				EarthView::World::Core::CBufferDataStream *pObjectX = (EarthView::World::Core::CBufferDataStream*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCBufferDataStreamProxy))
				{
					pObjectX->EarthView::World::Core::CBufferDataStream::seek(pos);
				}
				else
				{
					pObjectX->seek(pos);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_BufferDataStream_register_1seek_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCBufferDataStreamProxy *pObjectX = (JCBufferDataStreamProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_seek_ev_size_t_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"seek_ev_size_t_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_BufferDataStream_seek_1ev_1size_1t_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_size_t pos = (ev_size_t) pos_j;
				EarthView::World::Core::CBufferDataStream *pObjectX = (EarthView::World::Core::CBufferDataStream*) pObjXXXX;
				pObjectX->EarthView::World::Core::CBufferDataStream::seek(pos);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_BufferDataStream_tell_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CBufferDataStream *pObjectX = (EarthView::World::Core::CBufferDataStream*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCBufferDataStreamProxy))
				{
					ev_size_t __values1 = pObjectX->EarthView::World::Core::CBufferDataStream::tell();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					ev_size_t __values1 = pObjectX->tell();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_BufferDataStream_register_1tell_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCBufferDataStreamProxy *pObjectX = (JCBufferDataStreamProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_tell_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"tell_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_BufferDataStream_tell_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CBufferDataStream *pObjectX = (EarthView::World::Core::CBufferDataStream*) pObjXXXX;
				ev_size_t __values1 = pObjectX->EarthView::World::Core::CBufferDataStream::tell();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_BufferDataStream_eof_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CBufferDataStream *pObjectX = (EarthView::World::Core::CBufferDataStream*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCBufferDataStreamProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Core::CBufferDataStream::eof();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->eof();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_BufferDataStream_register_1eof_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCBufferDataStreamProxy *pObjectX = (JCBufferDataStreamProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_eof_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"eof_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_BufferDataStream_eof_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CBufferDataStream *pObjectX = (EarthView::World::Core::CBufferDataStream*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Core::CBufferDataStream::eof();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_BufferDataStream_close_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CBufferDataStream *pObjectX = (EarthView::World::Core::CBufferDataStream*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCBufferDataStreamProxy))
				{
					pObjectX->EarthView::World::Core::CBufferDataStream::close();
				}
				else
				{
					pObjectX->close();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_BufferDataStream_register_1close_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCBufferDataStreamProxy *pObjectX = (JCBufferDataStreamProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_close_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"close_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_BufferDataStream_close_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CBufferDataStream *pObjectX = (EarthView::World::Core::CBufferDataStream*) pObjXXXX;
				pObjectX->EarthView::World::Core::CBufferDataStream::close();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_BufferDataStream_register_1isReadable_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCBufferDataStreamProxy *pObjectX = (JCBufferDataStreamProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_isReadable_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"isReadable_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_BufferDataStream_register_1isWriteable_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCBufferDataStreamProxy *pObjectX = (JCBufferDataStreamProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_isWriteable_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"isWriteable_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			class JCFileHandleDataStreamProxy : public EarthView::World::Core::CFileHandleDataStream
			{
			 private:
				EarthView::World::Core::ev_string m_isReadable_void_callback;
				EarthView::World::Core::ev_string m_isWriteable_void_callback;
				EarthView::World::Core::ev_string m_read_void_ev_size_t_callback;
				EarthView::World::Core::ev_string m_write_void_ev_size_t_callback;
				EarthView::World::Core::ev_string m_readLine_ev_char_ev_size_t_EVString_callback;
				EarthView::World::Core::ev_string m_readLine_ev_char_ev_size_t_callback;
				EarthView::World::Core::ev_string m_getLine_ev_bool_callback;
				EarthView::World::Core::ev_string m_getLine_void_callback;
				EarthView::World::Core::ev_string m_getAsString_void_callback;
				EarthView::World::Core::ev_string m_skipLine_EVString_callback;
				EarthView::World::Core::ev_string m_skipLine_void_callback;
				EarthView::World::Core::ev_string m_skip_ev_int32_callback;
				EarthView::World::Core::ev_string m_seek_ev_size_t_callback;
				EarthView::World::Core::ev_string m_tell_void_callback;
				EarthView::World::Core::ev_string m_eof_void_callback;
				EarthView::World::Core::ev_string m_close_void_callback;
			public:
				JCFileHandleDataStreamProxy(EarthView::World::Core::CNameValuePairList *pList) : CFileHandleDataStream(pList)
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
				void register_isReadable_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_isReadable_void_callback = __method;
				}
				void register_isWriteable_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_isWriteable_void_callback = __method;
				}
				void register_read_void_ev_size_t_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_read_void_ev_size_t_callback = __method;
				}
				void register_write_void_ev_size_t_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_write_void_ev_size_t_callback = __method;
				}
				void register_readLine_ev_char_ev_size_t_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_readLine_ev_char_ev_size_t_EVString_callback = __method;
				}
				void register_readLine_ev_char_ev_size_t_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_readLine_ev_char_ev_size_t_callback = __method;
				}
				void register_getLine_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getLine_ev_bool_callback = __method;
				}
				void register_getLine_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getLine_void_callback = __method;
				}
				void register_getAsString_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getAsString_void_callback = __method;
				}
				void register_skipLine_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_skipLine_EVString_callback = __method;
				}
				void register_skipLine_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_skipLine_void_callback = __method;
				}
				void register_skip_ev_int32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_skip_ev_int32_callback = __method;
				}
				void register_seek_ev_size_t_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_seek_ev_size_t_callback = __method;
				}
				void register_tell_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_tell_void_callback = __method;
				}
				void register_eof_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_eof_void_callback = __method;
				}
				void register_close_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_close_void_callback = __method;
				}
				virtual ev_size_t read(void* buf, ev_size_t count)
				{
					if (this->_gRef != NULL && this->m_read_void_ev_size_t_callback != "" && this->isCustomExtend())
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
						jlong buf_j = (jlong) buf;
						jlong count_j = (jlong) count;
						jmethodID __method = __gr->getMethod("read_void_ev_size_t_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , buf_j, count_j);
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
						return this->CFileHandleDataStream::read(buf, count);
					}
				}
				virtual ev_size_t write(const void* buf, ev_size_t count)
				{
					if (this->_gRef != NULL && this->m_write_void_ev_size_t_callback != "" && this->isCustomExtend())
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
						jlong buf_j = (jlong) buf;
						jlong count_j = (jlong) count;
						jmethodID __method = __gr->getMethod("write_void_ev_size_t_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , buf_j, count_j);
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
						return this->CFileHandleDataStream::write(buf, count);
					}
				}
				virtual void skip(ev_int32 count)
				{
					if (this->_gRef != NULL && this->m_skip_ev_int32_callback != "" && this->isCustomExtend())
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
						jint count_j = (jint) count;
						jmethodID __method = __gr->getMethod("skip_ev_int32_callback");
						__env->CallVoidMethod(__obj, __method , count_j);
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
						return this->CFileHandleDataStream::skip(count);
					}
				}
				virtual void seek(ev_size_t pos)
				{
					if (this->_gRef != NULL && this->m_seek_ev_size_t_callback != "" && this->isCustomExtend())
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
						jlong pos_j = (jlong) pos;
						jmethodID __method = __gr->getMethod("seek_ev_size_t_callback");
						__env->CallVoidMethod(__obj, __method , pos_j);
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
						return this->CFileHandleDataStream::seek(pos);
					}
				}
				virtual ev_size_t tell() const
				{
					if (this->_gRef != NULL && this->m_tell_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("tell_void_callback");
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
						return this->CFileHandleDataStream::tell();
					}
				}
				virtual ev_bool eof() const
				{
					if (this->_gRef != NULL && this->m_eof_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("eof_void_callback");
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
						return this->CFileHandleDataStream::eof();
					}
				}
				virtual void close()
				{
					if (this->_gRef != NULL && this->m_close_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("close_void_callback");
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
						return this->CFileHandleDataStream::close();
					}
				}
				virtual ev_bool isReadable() const
				{
					if (this->_gRef != NULL && this->m_isReadable_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("isReadable_void_callback");
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
						return this->CFileHandleDataStream::isReadable();
					}
				}
				virtual ev_bool isWriteable() const
				{
					if (this->_gRef != NULL && this->m_isWriteable_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("isWriteable_void_callback");
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
						return this->CFileHandleDataStream::isWriteable();
					}
				}
				virtual ev_size_t readLine(ev_char* buf, ev_size_t maxCount, const EVString& delim)
				{
					if (this->_gRef != NULL && this->m_readLine_ev_char_ev_size_t_EVString_callback != "" && this->isCustomExtend())
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
						jlong buf_j = (jlong) buf;
						jlong maxCount_j = (jlong) maxCount;
						EarthView::World::Core::ev_wstring delim_wch = delim;
						jstring delim_j = __env->NewString((const jchar*)delim_wch.getString(), delim_wch.size());
						jmethodID __method = __gr->getMethod("readLine_ev_char_ev_size_t_EVString_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , buf_j, maxCount_j, delim_j);
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
						return this->CFileHandleDataStream::readLine(buf, maxCount, delim);
					}
				}
				virtual ev_size_t readLine(ev_char* buf, ev_size_t maxCount)
				{
					if (this->_gRef != NULL && this->m_readLine_ev_char_ev_size_t_callback != "" && this->isCustomExtend())
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
						jlong buf_j = (jlong) buf;
						jlong maxCount_j = (jlong) maxCount;
						jmethodID __method = __gr->getMethod("readLine_ev_char_ev_size_t_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , buf_j, maxCount_j);
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
						return this->CFileHandleDataStream::readLine(buf, maxCount);
					}
				}
				virtual EVString getLine(ev_bool trimAfter)
				{
					if (this->_gRef != NULL && this->m_getLine_ev_bool_callback != "" && this->isCustomExtend())
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
						jboolean trimAfter_j = (jboolean) trimAfter;
						jmethodID __method = __gr->getMethod("getLine_ev_bool_callback");
						jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method , trimAfter_j);
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
						return this->CFileHandleDataStream::getLine(trimAfter);
					}
				}
				virtual EVString getLine()
				{
					if (this->_gRef != NULL && this->m_getLine_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getLine_void_callback");
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
						return this->CFileHandleDataStream::getLine();
					}
				}
				virtual EVString getAsString()
				{
					if (this->_gRef != NULL && this->m_getAsString_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getAsString_void_callback");
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
						return this->CFileHandleDataStream::getAsString();
					}
				}
				virtual ev_size_t skipLine(const EVString& delim)
				{
					if (this->_gRef != NULL && this->m_skipLine_EVString_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring delim_wch = delim;
						jstring delim_j = __env->NewString((const jchar*)delim_wch.getString(), delim_wch.size());
						jmethodID __method = __gr->getMethod("skipLine_EVString_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , delim_j);
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
						return this->CFileHandleDataStream::skipLine(delim);
					}
				}
				virtual ev_size_t skipLine()
				{
					if (this->_gRef != NULL && this->m_skipLine_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("skipLine_void_callback");
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
						return this->CFileHandleDataStream::skipLine();
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCFileHandleDataStreamProxy);
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_FileHandleDataStream_read_1void_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong buf_j, jlong count_j)
			{
				void *buf = (void*) buf_j;
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Core::CFileHandleDataStream *pObjectX = (EarthView::World::Core::CFileHandleDataStream*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCFileHandleDataStreamProxy))
				{
					ev_size_t __values1 = pObjectX->EarthView::World::Core::CFileHandleDataStream::read(buf, count);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					ev_size_t __values1 = pObjectX->read(buf, count);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_FileHandleDataStream_register_1read_1void_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCFileHandleDataStreamProxy *pObjectX = (JCFileHandleDataStreamProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_read_void_ev_size_t_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"read_void_ev_size_t_callback", "(JJ)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_FileHandleDataStream_read_1void_1ev_1size_1t_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong buf_j, jlong count_j)
			{
				void *buf = (void*) buf_j;
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Core::CFileHandleDataStream *pObjectX = (EarthView::World::Core::CFileHandleDataStream*) pObjXXXX;
				ev_size_t __values1 = pObjectX->EarthView::World::Core::CFileHandleDataStream::read(buf, count);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_FileHandleDataStream_write_1void_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong buf_j, jlong count_j)
			{
				const void *buf = (const void*) buf_j;
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Core::CFileHandleDataStream *pObjectX = (EarthView::World::Core::CFileHandleDataStream*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCFileHandleDataStreamProxy))
				{
					ev_size_t __values1 = pObjectX->EarthView::World::Core::CFileHandleDataStream::write(buf, count);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					ev_size_t __values1 = pObjectX->write(buf, count);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_FileHandleDataStream_register_1write_1void_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCFileHandleDataStreamProxy *pObjectX = (JCFileHandleDataStreamProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_write_void_ev_size_t_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"write_void_ev_size_t_callback", "(JJ)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_FileHandleDataStream_write_1void_1ev_1size_1t_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong buf_j, jlong count_j)
			{
				const void *buf = (const void*) buf_j;
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Core::CFileHandleDataStream *pObjectX = (EarthView::World::Core::CFileHandleDataStream*) pObjXXXX;
				ev_size_t __values1 = pObjectX->EarthView::World::Core::CFileHandleDataStream::write(buf, count);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_FileHandleDataStream_skip_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint count_j)
			{
				ev_int32 count = (ev_int32) count_j;
				EarthView::World::Core::CFileHandleDataStream *pObjectX = (EarthView::World::Core::CFileHandleDataStream*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCFileHandleDataStreamProxy))
				{
					pObjectX->EarthView::World::Core::CFileHandleDataStream::skip(count);
				}
				else
				{
					pObjectX->skip(count);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_FileHandleDataStream_register_1skip_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCFileHandleDataStreamProxy *pObjectX = (JCFileHandleDataStreamProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_skip_ev_int32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"skip_ev_int32_callback", "(I)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_FileHandleDataStream_skip_1ev_1int32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint count_j)
			{
				ev_int32 count = (ev_int32) count_j;
				EarthView::World::Core::CFileHandleDataStream *pObjectX = (EarthView::World::Core::CFileHandleDataStream*) pObjXXXX;
				pObjectX->EarthView::World::Core::CFileHandleDataStream::skip(count);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_FileHandleDataStream_seek_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_size_t pos = (ev_size_t) pos_j;
				EarthView::World::Core::CFileHandleDataStream *pObjectX = (EarthView::World::Core::CFileHandleDataStream*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCFileHandleDataStreamProxy))
				{
					pObjectX->EarthView::World::Core::CFileHandleDataStream::seek(pos);
				}
				else
				{
					pObjectX->seek(pos);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_FileHandleDataStream_register_1seek_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCFileHandleDataStreamProxy *pObjectX = (JCFileHandleDataStreamProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_seek_ev_size_t_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"seek_ev_size_t_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_FileHandleDataStream_seek_1ev_1size_1t_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_size_t pos = (ev_size_t) pos_j;
				EarthView::World::Core::CFileHandleDataStream *pObjectX = (EarthView::World::Core::CFileHandleDataStream*) pObjXXXX;
				pObjectX->EarthView::World::Core::CFileHandleDataStream::seek(pos);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_FileHandleDataStream_tell_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CFileHandleDataStream *pObjectX = (EarthView::World::Core::CFileHandleDataStream*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCFileHandleDataStreamProxy))
				{
					ev_size_t __values1 = pObjectX->EarthView::World::Core::CFileHandleDataStream::tell();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					ev_size_t __values1 = pObjectX->tell();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_FileHandleDataStream_register_1tell_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCFileHandleDataStreamProxy *pObjectX = (JCFileHandleDataStreamProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_tell_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"tell_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_FileHandleDataStream_tell_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CFileHandleDataStream *pObjectX = (EarthView::World::Core::CFileHandleDataStream*) pObjXXXX;
				ev_size_t __values1 = pObjectX->EarthView::World::Core::CFileHandleDataStream::tell();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_FileHandleDataStream_eof_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CFileHandleDataStream *pObjectX = (EarthView::World::Core::CFileHandleDataStream*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCFileHandleDataStreamProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Core::CFileHandleDataStream::eof();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->eof();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_FileHandleDataStream_register_1eof_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCFileHandleDataStreamProxy *pObjectX = (JCFileHandleDataStreamProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_eof_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"eof_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_FileHandleDataStream_eof_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CFileHandleDataStream *pObjectX = (EarthView::World::Core::CFileHandleDataStream*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Core::CFileHandleDataStream::eof();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_FileHandleDataStream_close_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CFileHandleDataStream *pObjectX = (EarthView::World::Core::CFileHandleDataStream*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCFileHandleDataStreamProxy))
				{
					pObjectX->EarthView::World::Core::CFileHandleDataStream::close();
				}
				else
				{
					pObjectX->close();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_FileHandleDataStream_register_1close_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCFileHandleDataStreamProxy *pObjectX = (JCFileHandleDataStreamProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_close_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"close_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_FileHandleDataStream_close_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CFileHandleDataStream *pObjectX = (EarthView::World::Core::CFileHandleDataStream*) pObjXXXX;
				pObjectX->EarthView::World::Core::CFileHandleDataStream::close();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_FileHandleDataStream_register_1isReadable_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCFileHandleDataStreamProxy *pObjectX = (JCFileHandleDataStreamProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_isReadable_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"isReadable_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_FileHandleDataStream_register_1isWriteable_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCFileHandleDataStreamProxy *pObjectX = (JCFileHandleDataStreamProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_isWriteable_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"isWriteable_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_FileHandleDataStream_register_1readLine_1ev_1char_1ev_1size_1t_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCFileHandleDataStreamProxy *pObjectX = (JCFileHandleDataStreamProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_readLine_ev_char_ev_size_t_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"readLine_ev_char_ev_size_t_EVString_callback", "(JJLjava/lang/String;)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_FileHandleDataStream_register_1readLine_1ev_1char_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCFileHandleDataStreamProxy *pObjectX = (JCFileHandleDataStreamProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_readLine_ev_char_ev_size_t_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"readLine_ev_char_ev_size_t_callback", "(JJ)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_FileHandleDataStream_register_1getLine_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCFileHandleDataStreamProxy *pObjectX = (JCFileHandleDataStreamProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getLine_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getLine_ev_bool_callback", "(Z)Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_FileHandleDataStream_register_1getLine_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCFileHandleDataStreamProxy *pObjectX = (JCFileHandleDataStreamProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getLine_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getLine_void_callback", "()Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_FileHandleDataStream_register_1getAsString_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCFileHandleDataStreamProxy *pObjectX = (JCFileHandleDataStreamProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getAsString_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getAsString_void_callback", "()Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_FileHandleDataStream_register_1skipLine_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCFileHandleDataStreamProxy *pObjectX = (JCFileHandleDataStreamProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_skipLine_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"skipLine_EVString_callback", "(Ljava/lang/String;)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_FileHandleDataStream_register_1skipLine_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCFileHandleDataStreamProxy *pObjectX = (JCFileHandleDataStreamProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_skipLine_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"skipLine_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			class JCSqlBlobStreamProxy : public EarthView::World::Core::CSqlBlobStream
			{
			 private:
				EarthView::World::Core::ev_string m_toDataStream_void_callback;
				EarthView::World::Core::ev_string m_DriverName_void_callback;
				EarthView::World::Core::ev_string m_data_void_callback;
				EarthView::World::Core::ev_string m_isReadable_void_callback;
				EarthView::World::Core::ev_string m_isWriteable_void_callback;
				EarthView::World::Core::ev_string m_read_void_ev_size_t_callback;
				EarthView::World::Core::ev_string m_write_void_ev_size_t_callback;
				EarthView::World::Core::ev_string m_readLine_ev_char_ev_size_t_EVString_callback;
				EarthView::World::Core::ev_string m_readLine_ev_char_ev_size_t_callback;
				EarthView::World::Core::ev_string m_getLine_ev_bool_callback;
				EarthView::World::Core::ev_string m_getLine_void_callback;
				EarthView::World::Core::ev_string m_getAsString_void_callback;
				EarthView::World::Core::ev_string m_skipLine_EVString_callback;
				EarthView::World::Core::ev_string m_skipLine_void_callback;
				EarthView::World::Core::ev_string m_skip_ev_int32_callback;
				EarthView::World::Core::ev_string m_seek_ev_size_t_callback;
				EarthView::World::Core::ev_string m_tell_void_callback;
				EarthView::World::Core::ev_string m_eof_void_callback;
				EarthView::World::Core::ev_string m_close_void_callback;
			public:
				JCSqlBlobStreamProxy(EarthView::World::Core::CNameValuePairList *pList) : CSqlBlobStream(pList)
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
				void register_toDataStream_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_toDataStream_void_callback = __method;
				}
				void register_DriverName_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_DriverName_void_callback = __method;
				}
				void register_data_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_data_void_callback = __method;
				}
				void register_isReadable_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_isReadable_void_callback = __method;
				}
				void register_isWriteable_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_isWriteable_void_callback = __method;
				}
				void register_read_void_ev_size_t_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_read_void_ev_size_t_callback = __method;
				}
				void register_write_void_ev_size_t_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_write_void_ev_size_t_callback = __method;
				}
				void register_readLine_ev_char_ev_size_t_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_readLine_ev_char_ev_size_t_EVString_callback = __method;
				}
				void register_readLine_ev_char_ev_size_t_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_readLine_ev_char_ev_size_t_callback = __method;
				}
				void register_getLine_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getLine_ev_bool_callback = __method;
				}
				void register_getLine_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getLine_void_callback = __method;
				}
				void register_getAsString_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getAsString_void_callback = __method;
				}
				void register_skipLine_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_skipLine_EVString_callback = __method;
				}
				void register_skipLine_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_skipLine_void_callback = __method;
				}
				void register_skip_ev_int32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_skip_ev_int32_callback = __method;
				}
				void register_seek_ev_size_t_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_seek_ev_size_t_callback = __method;
				}
				void register_tell_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_tell_void_callback = __method;
				}
				void register_eof_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_eof_void_callback = __method;
				}
				void register_close_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_close_void_callback = __method;
				}
				virtual ev_size_t read(void* buf, ev_size_t count)
				{
					if (this->_gRef != NULL && this->m_read_void_ev_size_t_callback != "" && this->isCustomExtend())
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
						jlong buf_j = (jlong) buf;
						jlong count_j = (jlong) count;
						jmethodID __method = __gr->getMethod("read_void_ev_size_t_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , buf_j, count_j);
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
						return this->CSqlBlobStream::read(buf, count);
					}
				}
				virtual void skip(ev_int32 count)
				{
					if (this->_gRef != NULL && this->m_skip_ev_int32_callback != "" && this->isCustomExtend())
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
						jint count_j = (jint) count;
						jmethodID __method = __gr->getMethod("skip_ev_int32_callback");
						__env->CallVoidMethod(__obj, __method , count_j);
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
						return this->CSqlBlobStream::skip(count);
					}
				}
				virtual void seek(ev_size_t pos)
				{
					if (this->_gRef != NULL && this->m_seek_ev_size_t_callback != "" && this->isCustomExtend())
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
						jlong pos_j = (jlong) pos;
						jmethodID __method = __gr->getMethod("seek_ev_size_t_callback");
						__env->CallVoidMethod(__obj, __method , pos_j);
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
						return this->CSqlBlobStream::seek(pos);
					}
				}
				virtual ev_size_t tell() const
				{
					if (this->_gRef != NULL && this->m_tell_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("tell_void_callback");
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
						return this->CSqlBlobStream::tell();
					}
				}
				virtual ev_bool eof() const
				{
					if (this->_gRef != NULL && this->m_eof_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("eof_void_callback");
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
						return this->CSqlBlobStream::eof();
					}
				}
				virtual void close()
				{
					if (this->_gRef != NULL && this->m_close_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("close_void_callback");
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
						return this->CSqlBlobStream::close();
					}
				}
				virtual EarthView::World::Core::MemoryDataStreamPtr toDataStream()
				{
					if (this->_gRef != NULL && this->m_toDataStream_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("toDataStream_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Core::MemoryDataStreamPtr __values1 = *(EarthView::World::Core::MemoryDataStreamPtr*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CSqlBlobStream::toDataStream();
					}
				}
				virtual ev_size_t write(const void* buf, ev_size_t count)
				{
					if (this->_gRef != NULL && this->m_write_void_ev_size_t_callback != "" && this->isCustomExtend())
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
						jlong buf_j = (jlong) buf;
						jlong count_j = (jlong) count;
						jmethodID __method = __gr->getMethod("write_void_ev_size_t_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , buf_j, count_j);
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
						return this->CSqlBlobStream::write(buf, count);
					}
				}
				virtual ev_size_t readLine(ev_char* buf, ev_size_t maxCount, const EVString& delim)
				{
					if (this->_gRef != NULL && this->m_readLine_ev_char_ev_size_t_EVString_callback != "" && this->isCustomExtend())
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
						jlong buf_j = (jlong) buf;
						jlong maxCount_j = (jlong) maxCount;
						EarthView::World::Core::ev_wstring delim_wch = delim;
						jstring delim_j = __env->NewString((const jchar*)delim_wch.getString(), delim_wch.size());
						jmethodID __method = __gr->getMethod("readLine_ev_char_ev_size_t_EVString_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , buf_j, maxCount_j, delim_j);
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
						return this->CSqlBlobStream::readLine(buf, maxCount, delim);
					}
				}
				virtual ev_size_t readLine(ev_char* buf, ev_size_t maxCount)
				{
					if (this->_gRef != NULL && this->m_readLine_ev_char_ev_size_t_callback != "" && this->isCustomExtend())
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
						jlong buf_j = (jlong) buf;
						jlong maxCount_j = (jlong) maxCount;
						jmethodID __method = __gr->getMethod("readLine_ev_char_ev_size_t_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , buf_j, maxCount_j);
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
						return this->CSqlBlobStream::readLine(buf, maxCount);
					}
				}
				virtual EVString getLine(ev_bool trimAfter)
				{
					if (this->_gRef != NULL && this->m_getLine_ev_bool_callback != "" && this->isCustomExtend())
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
						jboolean trimAfter_j = (jboolean) trimAfter;
						jmethodID __method = __gr->getMethod("getLine_ev_bool_callback");
						jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method , trimAfter_j);
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
						return this->CSqlBlobStream::getLine(trimAfter);
					}
				}
				virtual EVString getLine()
				{
					if (this->_gRef != NULL && this->m_getLine_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getLine_void_callback");
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
						return this->CSqlBlobStream::getLine();
					}
				}
				virtual EVString getAsString()
				{
					if (this->_gRef != NULL && this->m_getAsString_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getAsString_void_callback");
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
						return this->CSqlBlobStream::getAsString();
					}
				}
				virtual ev_size_t skipLine(const EVString& delim)
				{
					if (this->_gRef != NULL && this->m_skipLine_EVString_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring delim_wch = delim;
						jstring delim_j = __env->NewString((const jchar*)delim_wch.getString(), delim_wch.size());
						jmethodID __method = __gr->getMethod("skipLine_EVString_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , delim_j);
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
						return this->CSqlBlobStream::skipLine(delim);
					}
				}
				virtual ev_size_t skipLine()
				{
					if (this->_gRef != NULL && this->m_skipLine_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("skipLine_void_callback");
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
						return this->CSqlBlobStream::skipLine();
					}
				}
				virtual EVString DriverName() const
				{
					if (this->_gRef != NULL && this->m_DriverName_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("DriverName_void_callback");
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
						return this->CSqlBlobStream::DriverName();
					}
				}
				virtual const ev_char* data() const
				{
					if (this->_gRef != NULL && this->m_data_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("data_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const ev_char *__values1 = (const ev_char*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CSqlBlobStream::data();
					}
				}
				virtual ev_bool isReadable() const
				{
					if (this->_gRef != NULL && this->m_isReadable_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("isReadable_void_callback");
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
						return this->CSqlBlobStream::isReadable();
					}
				}
				virtual ev_bool isWriteable() const
				{
					if (this->_gRef != NULL && this->m_isWriteable_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("isWriteable_void_callback");
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
						return this->CSqlBlobStream::isWriteable();
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCSqlBlobStreamProxy);
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_SqlBlobStream_read_1void_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong buf_j, jlong count_j)
			{
				void *buf = (void*) buf_j;
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Core::CSqlBlobStream *pObjectX = (EarthView::World::Core::CSqlBlobStream*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSqlBlobStreamProxy))
				{
					ev_size_t __values1 = pObjectX->EarthView::World::Core::CSqlBlobStream::read(buf, count);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					ev_size_t __values1 = pObjectX->read(buf, count);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_SqlBlobStream_register_1read_1void_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSqlBlobStreamProxy *pObjectX = (JCSqlBlobStreamProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_read_void_ev_size_t_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"read_void_ev_size_t_callback", "(JJ)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_SqlBlobStream_read_1void_1ev_1size_1t_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong buf_j, jlong count_j)
			{
				void *buf = (void*) buf_j;
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Core::CSqlBlobStream *pObjectX = (EarthView::World::Core::CSqlBlobStream*) pObjXXXX;
				ev_size_t __values1 = pObjectX->EarthView::World::Core::CSqlBlobStream::read(buf, count);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_SqlBlobStream_skip_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint count_j)
			{
				ev_int32 count = (ev_int32) count_j;
				EarthView::World::Core::CSqlBlobStream *pObjectX = (EarthView::World::Core::CSqlBlobStream*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSqlBlobStreamProxy))
				{
					pObjectX->EarthView::World::Core::CSqlBlobStream::skip(count);
				}
				else
				{
					pObjectX->skip(count);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_SqlBlobStream_register_1skip_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSqlBlobStreamProxy *pObjectX = (JCSqlBlobStreamProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_skip_ev_int32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"skip_ev_int32_callback", "(I)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_SqlBlobStream_skip_1ev_1int32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint count_j)
			{
				ev_int32 count = (ev_int32) count_j;
				EarthView::World::Core::CSqlBlobStream *pObjectX = (EarthView::World::Core::CSqlBlobStream*) pObjXXXX;
				pObjectX->EarthView::World::Core::CSqlBlobStream::skip(count);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_SqlBlobStream_seek_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_size_t pos = (ev_size_t) pos_j;
				EarthView::World::Core::CSqlBlobStream *pObjectX = (EarthView::World::Core::CSqlBlobStream*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSqlBlobStreamProxy))
				{
					pObjectX->EarthView::World::Core::CSqlBlobStream::seek(pos);
				}
				else
				{
					pObjectX->seek(pos);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_SqlBlobStream_register_1seek_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSqlBlobStreamProxy *pObjectX = (JCSqlBlobStreamProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_seek_ev_size_t_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"seek_ev_size_t_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_SqlBlobStream_seek_1ev_1size_1t_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_size_t pos = (ev_size_t) pos_j;
				EarthView::World::Core::CSqlBlobStream *pObjectX = (EarthView::World::Core::CSqlBlobStream*) pObjXXXX;
				pObjectX->EarthView::World::Core::CSqlBlobStream::seek(pos);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_SqlBlobStream_tell_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CSqlBlobStream *pObjectX = (EarthView::World::Core::CSqlBlobStream*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSqlBlobStreamProxy))
				{
					ev_size_t __values1 = pObjectX->EarthView::World::Core::CSqlBlobStream::tell();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					ev_size_t __values1 = pObjectX->tell();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_SqlBlobStream_register_1tell_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSqlBlobStreamProxy *pObjectX = (JCSqlBlobStreamProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_tell_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"tell_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_SqlBlobStream_tell_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CSqlBlobStream *pObjectX = (EarthView::World::Core::CSqlBlobStream*) pObjXXXX;
				ev_size_t __values1 = pObjectX->EarthView::World::Core::CSqlBlobStream::tell();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_SqlBlobStream_eof_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CSqlBlobStream *pObjectX = (EarthView::World::Core::CSqlBlobStream*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSqlBlobStreamProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Core::CSqlBlobStream::eof();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->eof();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_SqlBlobStream_register_1eof_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSqlBlobStreamProxy *pObjectX = (JCSqlBlobStreamProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_eof_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"eof_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_SqlBlobStream_eof_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CSqlBlobStream *pObjectX = (EarthView::World::Core::CSqlBlobStream*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Core::CSqlBlobStream::eof();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_SqlBlobStream_close_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CSqlBlobStream *pObjectX = (EarthView::World::Core::CSqlBlobStream*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSqlBlobStreamProxy))
				{
					pObjectX->EarthView::World::Core::CSqlBlobStream::close();
				}
				else
				{
					pObjectX->close();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_SqlBlobStream_register_1close_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSqlBlobStreamProxy *pObjectX = (JCSqlBlobStreamProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_close_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"close_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_SqlBlobStream_close_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CSqlBlobStream *pObjectX = (EarthView::World::Core::CSqlBlobStream*) pObjXXXX;
				pObjectX->EarthView::World::Core::CSqlBlobStream::close();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_SqlBlobStream_toDataStream_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CSqlBlobStream *pObjectX = (EarthView::World::Core::CSqlBlobStream*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSqlBlobStreamProxy))
				{
					EarthView::World::Core::MemoryDataStreamPtr __values1 = pObjectX->EarthView::World::Core::CSqlBlobStream::toDataStream();
					EarthView::World::Core::MemoryDataStreamPtr *returnvalues = new EarthView::World::Core::MemoryDataStreamPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Core::MemoryDataStreamPtr __values1 = pObjectX->toDataStream();
					EarthView::World::Core::MemoryDataStreamPtr *returnvalues = new EarthView::World::Core::MemoryDataStreamPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_SqlBlobStream_register_1toDataStream_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSqlBlobStreamProxy *pObjectX = (JCSqlBlobStreamProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_toDataStream_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"toDataStream_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_SqlBlobStream_toDataStream_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CSqlBlobStream *pObjectX = (EarthView::World::Core::CSqlBlobStream*) pObjXXXX;
				EarthView::World::Core::MemoryDataStreamPtr __values1 = pObjectX->EarthView::World::Core::CSqlBlobStream::toDataStream();
				EarthView::World::Core::MemoryDataStreamPtr *returnvalues = new EarthView::World::Core::MemoryDataStreamPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_SqlBlobStream_write_1void_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong buf_j, jlong count_j)
			{
				const void *buf = (const void*) buf_j;
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Core::CSqlBlobStream *pObjectX = (EarthView::World::Core::CSqlBlobStream*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSqlBlobStreamProxy))
				{
					ev_size_t __values1 = pObjectX->EarthView::World::Core::CSqlBlobStream::write(buf, count);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					ev_size_t __values1 = pObjectX->write(buf, count);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_SqlBlobStream_register_1write_1void_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSqlBlobStreamProxy *pObjectX = (JCSqlBlobStreamProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_write_void_ev_size_t_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"write_void_ev_size_t_callback", "(JJ)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_SqlBlobStream_write_1void_1ev_1size_1t_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong buf_j, jlong count_j)
			{
				const void *buf = (const void*) buf_j;
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Core::CSqlBlobStream *pObjectX = (EarthView::World::Core::CSqlBlobStream*) pObjXXXX;
				ev_size_t __values1 = pObjectX->EarthView::World::Core::CSqlBlobStream::write(buf, count);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_SqlBlobStream_readLine_1ev_1char_1ev_1size_1t_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong buf_j, jlong maxCount_j, jstring delim_j)
			{
				ev_char *buf = (ev_char*) buf_j;
				ev_size_t maxCount = (ev_size_t) maxCount_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* delim_ch = (const ev_char*)__env->GetStringUTFChars(delim_j,JNI_FALSE);
				const EVString delim = delim_ch;
				__env->ReleaseStringUTFChars(delim_j, (const char *)delim_ch);
				#else
				const ev_wchar* delim_ch = (const ev_wchar*)__env->GetStringChars(delim_j,JNI_FALSE);
				const EVString delim = delim_ch;
				__env->ReleaseStringChars(delim_j, (const jchar *)delim_ch);
				#endif
				EarthView::World::Core::CSqlBlobStream *pObjectX = (EarthView::World::Core::CSqlBlobStream*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSqlBlobStreamProxy))
				{
					ev_size_t __values1 = pObjectX->EarthView::World::Core::CSqlBlobStream::readLine(buf, maxCount, delim);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					ev_size_t __values1 = pObjectX->readLine(buf, maxCount, delim);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_SqlBlobStream_register_1readLine_1ev_1char_1ev_1size_1t_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSqlBlobStreamProxy *pObjectX = (JCSqlBlobStreamProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_readLine_ev_char_ev_size_t_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"readLine_ev_char_ev_size_t_EVString_callback", "(JJLjava/lang/String;)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_SqlBlobStream_readLine_1ev_1char_1ev_1size_1t_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong buf_j, jlong maxCount_j, jstring delim_j)
			{
				ev_char *buf = (ev_char*) buf_j;
				ev_size_t maxCount = (ev_size_t) maxCount_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* delim_ch = (const ev_char*)__env->GetStringUTFChars(delim_j,JNI_FALSE);
				const EVString delim = delim_ch;
				__env->ReleaseStringUTFChars(delim_j, (const char *)delim_ch);
				#else
				const ev_wchar* delim_ch = (const ev_wchar*)__env->GetStringChars(delim_j,JNI_FALSE);
				const EVString delim = delim_ch;
				__env->ReleaseStringChars(delim_j, (const jchar *)delim_ch);
				#endif
				EarthView::World::Core::CSqlBlobStream *pObjectX = (EarthView::World::Core::CSqlBlobStream*) pObjXXXX;
				ev_size_t __values1 = pObjectX->EarthView::World::Core::CSqlBlobStream::readLine(buf, maxCount, delim);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_SqlBlobStream_readLine_1ev_1char_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong buf_j, jlong maxCount_j)
			{
				ev_char *buf = (ev_char*) buf_j;
				ev_size_t maxCount = (ev_size_t) maxCount_j;
				EarthView::World::Core::CSqlBlobStream *pObjectX = (EarthView::World::Core::CSqlBlobStream*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSqlBlobStreamProxy))
				{
					ev_size_t __values1 = pObjectX->EarthView::World::Core::CSqlBlobStream::readLine(buf, maxCount);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					ev_size_t __values1 = pObjectX->readLine(buf, maxCount);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_SqlBlobStream_register_1readLine_1ev_1char_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSqlBlobStreamProxy *pObjectX = (JCSqlBlobStreamProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_readLine_ev_char_ev_size_t_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"readLine_ev_char_ev_size_t_callback", "(JJ)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_SqlBlobStream_readLine_1ev_1char_1ev_1size_1t_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong buf_j, jlong maxCount_j)
			{
				ev_char *buf = (ev_char*) buf_j;
				ev_size_t maxCount = (ev_size_t) maxCount_j;
				EarthView::World::Core::CSqlBlobStream *pObjectX = (EarthView::World::Core::CSqlBlobStream*) pObjXXXX;
				ev_size_t __values1 = pObjectX->EarthView::World::Core::CSqlBlobStream::readLine(buf, maxCount);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_core_SqlBlobStream_getLine_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean trimAfter_j)
			{
				ev_bool trimAfter = (ev_bool) trimAfter_j;
				EarthView::World::Core::CSqlBlobStream *pObjectX = (EarthView::World::Core::CSqlBlobStream*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSqlBlobStreamProxy))
				{
					EVString __values1 = pObjectX->EarthView::World::Core::CSqlBlobStream::getLine(trimAfter);
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				else
				{
					EVString __values1 = pObjectX->getLine(trimAfter);
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_SqlBlobStream_register_1getLine_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSqlBlobStreamProxy *pObjectX = (JCSqlBlobStreamProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getLine_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getLine_ev_bool_callback", "(Z)Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_core_SqlBlobStream_getLine_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean trimAfter_j)
			{
				ev_bool trimAfter = (ev_bool) trimAfter_j;
				EarthView::World::Core::CSqlBlobStream *pObjectX = (EarthView::World::Core::CSqlBlobStream*) pObjXXXX;
				EVString __values1 = pObjectX->EarthView::World::Core::CSqlBlobStream::getLine(trimAfter);
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_core_SqlBlobStream_getLine_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CSqlBlobStream *pObjectX = (EarthView::World::Core::CSqlBlobStream*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSqlBlobStreamProxy))
				{
					EVString __values1 = pObjectX->EarthView::World::Core::CSqlBlobStream::getLine();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				else
				{
					EVString __values1 = pObjectX->getLine();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_SqlBlobStream_register_1getLine_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSqlBlobStreamProxy *pObjectX = (JCSqlBlobStreamProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getLine_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getLine_void_callback", "()Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_core_SqlBlobStream_getLine_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CSqlBlobStream *pObjectX = (EarthView::World::Core::CSqlBlobStream*) pObjXXXX;
				EVString __values1 = pObjectX->EarthView::World::Core::CSqlBlobStream::getLine();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_core_SqlBlobStream_getAsString_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CSqlBlobStream *pObjectX = (EarthView::World::Core::CSqlBlobStream*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSqlBlobStreamProxy))
				{
					EVString __values1 = pObjectX->EarthView::World::Core::CSqlBlobStream::getAsString();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				else
				{
					EVString __values1 = pObjectX->getAsString();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_SqlBlobStream_register_1getAsString_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSqlBlobStreamProxy *pObjectX = (JCSqlBlobStreamProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getAsString_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getAsString_void_callback", "()Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_core_SqlBlobStream_getAsString_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CSqlBlobStream *pObjectX = (EarthView::World::Core::CSqlBlobStream*) pObjXXXX;
				EVString __values1 = pObjectX->EarthView::World::Core::CSqlBlobStream::getAsString();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_SqlBlobStream_skipLine_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring delim_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* delim_ch = (const ev_char*)__env->GetStringUTFChars(delim_j,JNI_FALSE);
				const EVString delim = delim_ch;
				__env->ReleaseStringUTFChars(delim_j, (const char *)delim_ch);
				#else
				const ev_wchar* delim_ch = (const ev_wchar*)__env->GetStringChars(delim_j,JNI_FALSE);
				const EVString delim = delim_ch;
				__env->ReleaseStringChars(delim_j, (const jchar *)delim_ch);
				#endif
				EarthView::World::Core::CSqlBlobStream *pObjectX = (EarthView::World::Core::CSqlBlobStream*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSqlBlobStreamProxy))
				{
					ev_size_t __values1 = pObjectX->EarthView::World::Core::CSqlBlobStream::skipLine(delim);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					ev_size_t __values1 = pObjectX->skipLine(delim);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_SqlBlobStream_register_1skipLine_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSqlBlobStreamProxy *pObjectX = (JCSqlBlobStreamProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_skipLine_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"skipLine_EVString_callback", "(Ljava/lang/String;)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_SqlBlobStream_skipLine_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring delim_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* delim_ch = (const ev_char*)__env->GetStringUTFChars(delim_j,JNI_FALSE);
				const EVString delim = delim_ch;
				__env->ReleaseStringUTFChars(delim_j, (const char *)delim_ch);
				#else
				const ev_wchar* delim_ch = (const ev_wchar*)__env->GetStringChars(delim_j,JNI_FALSE);
				const EVString delim = delim_ch;
				__env->ReleaseStringChars(delim_j, (const jchar *)delim_ch);
				#endif
				EarthView::World::Core::CSqlBlobStream *pObjectX = (EarthView::World::Core::CSqlBlobStream*) pObjXXXX;
				ev_size_t __values1 = pObjectX->EarthView::World::Core::CSqlBlobStream::skipLine(delim);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_SqlBlobStream_skipLine_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CSqlBlobStream *pObjectX = (EarthView::World::Core::CSqlBlobStream*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSqlBlobStreamProxy))
				{
					ev_size_t __values1 = pObjectX->EarthView::World::Core::CSqlBlobStream::skipLine();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					ev_size_t __values1 = pObjectX->skipLine();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_SqlBlobStream_register_1skipLine_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSqlBlobStreamProxy *pObjectX = (JCSqlBlobStreamProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_skipLine_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"skipLine_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_SqlBlobStream_skipLine_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CSqlBlobStream *pObjectX = (EarthView::World::Core::CSqlBlobStream*) pObjXXXX;
				ev_size_t __values1 = pObjectX->EarthView::World::Core::CSqlBlobStream::skipLine();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_core_SqlBlobStream_DriverName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CSqlBlobStream *pObjectX = (EarthView::World::Core::CSqlBlobStream*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSqlBlobStreamProxy))
				{
					EVString __values1 = pObjectX->EarthView::World::Core::CSqlBlobStream::DriverName();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				else
				{
					EVString __values1 = pObjectX->DriverName();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_SqlBlobStream_register_1DriverName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSqlBlobStreamProxy *pObjectX = (JCSqlBlobStreamProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_DriverName_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"DriverName_void_callback", "()Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_core_SqlBlobStream_DriverName_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CSqlBlobStream *pObjectX = (EarthView::World::Core::CSqlBlobStream*) pObjXXXX;
				EVString __values1 = pObjectX->EarthView::World::Core::CSqlBlobStream::DriverName();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_SqlBlobStream_data_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CSqlBlobStream *pObjectX = (EarthView::World::Core::CSqlBlobStream*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSqlBlobStreamProxy))
				{
					const ev_char* __values1 = pObjectX->EarthView::World::Core::CSqlBlobStream::data();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					const ev_char* __values1 = pObjectX->data();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_SqlBlobStream_register_1data_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSqlBlobStreamProxy *pObjectX = (JCSqlBlobStreamProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_data_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"data_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_SqlBlobStream_data_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CSqlBlobStream *pObjectX = (EarthView::World::Core::CSqlBlobStream*) pObjXXXX;
				const ev_char* __values1 = pObjectX->EarthView::World::Core::CSqlBlobStream::data();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_SqlBlobStream_register_1isReadable_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSqlBlobStreamProxy *pObjectX = (JCSqlBlobStreamProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_isReadable_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"isReadable_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_SqlBlobStream_register_1isWriteable_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSqlBlobStreamProxy *pObjectX = (JCSqlBlobStreamProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_isWriteable_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"isWriteable_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_MemoryDataStreamVector_push_1back_1MemoryDataStreamPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
			{
				EarthView::World::Core::MemoryDataStreamPtr &t = *(EarthView::World::Core::MemoryDataStreamPtr*) t_j;
				EarthView::World::Core::MemoryDataStreamVector *pObjectX = (EarthView::World::Core::MemoryDataStreamVector*) pObjXXXX;
				pObjectX->push_back(t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_MemoryDataStreamVector_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::MemoryDataStreamVector *pObjectX = (EarthView::World::Core::MemoryDataStreamVector*) pObjXXXX;
				pObjectX->pop_back();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_MemoryDataStreamVector_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::MemoryDataStreamVector *pObjectX = (EarthView::World::Core::MemoryDataStreamVector*) pObjXXXX;
				EarthView::World::Core::MemoryDataStreamPtr& __values1 = pObjectX->front();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_MemoryDataStreamVector_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::MemoryDataStreamVector *pObjectX = (EarthView::World::Core::MemoryDataStreamVector*) pObjXXXX;
				EarthView::World::Core::MemoryDataStreamPtr& __values1 = pObjectX->back();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_MemoryDataStreamVector_at_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_uint32 pos = (ev_uint32) pos_j;
				EarthView::World::Core::MemoryDataStreamVector *pObjectX = (EarthView::World::Core::MemoryDataStreamVector*) pObjXXXX;
				EarthView::World::Core::MemoryDataStreamPtr& __values1 = pObjectX->at(pos);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_MemoryDataStreamVector_insert_1ev_1uint32_1MemoryDataStreamPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong t_j)
			{
				ev_uint32 pos = (ev_uint32) pos_j;
				EarthView::World::Core::MemoryDataStreamPtr &t = *(EarthView::World::Core::MemoryDataStreamPtr*) t_j;
				EarthView::World::Core::MemoryDataStreamVector *pObjectX = (EarthView::World::Core::MemoryDataStreamVector*) pObjXXXX;
				pObjectX->insert(pos, t);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_MemoryDataStreamVector_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::MemoryDataStreamVector *pObjectX = (EarthView::World::Core::MemoryDataStreamVector*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_MemoryDataStreamVector_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::MemoryDataStreamVector *pObjectX = (EarthView::World::Core::MemoryDataStreamVector*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_MemoryDataStreamVector_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
			{
				ev_size_t newSize = (ev_size_t) newSize_j;
				EarthView::World::Core::MemoryDataStreamVector *pObjectX = (EarthView::World::Core::MemoryDataStreamVector*) pObjXXXX;
				pObjectX->resize(newSize);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_MemoryDataStreamVector_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::MemoryDataStreamVector *pObjectX = (EarthView::World::Core::MemoryDataStreamVector*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_MemoryDataStreamVector_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
			{
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Core::MemoryDataStreamVector *pObjectX = (EarthView::World::Core::MemoryDataStreamVector*) pObjXXXX;
				pObjectX->reserve(count);
			}
		}
	}
}
