/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "display/bitmap.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Display
		{
			class JCBitmapProxy : public EarthView::World::Display::CBitmap
			{
			 private:
				EarthView::World::Core::ev_string m_setTransparent_ev_uint8_callback;
				EarthView::World::Core::ev_string m_getNativeGraphics_void_callback;
				EarthView::World::Core::ev_string m_getFilePath_void_callback;
				EarthView::World::Core::ev_string m_data_void_callback;
				EarthView::World::Core::ev_string m_save_EVString_callback;
				EarthView::World::Core::ev_string m_saveToStream_EVString_callback;
				EarthView::World::Core::ev_string m_save_EVString_ev_char_int_callback;
				EarthView::World::Core::ev_string m_getHIcon_void_callback;
				EarthView::World::Core::ev_string m_getHBITMAP_ev_int32_callback;
				EarthView::World::Core::ev_string m_ev_clone_void_callback;
				EarthView::World::Core::ev_string m_render_IPaintDevice_IEnvelope_callback;
				EarthView::World::Core::ev_string m_render_IPaintDevice_IEnvelope_IEnvelope_callback;
				EarthView::World::Core::ev_string m_render_IPaintDevice_ev_real64_ev_real64_callback;
				EarthView::World::Core::ev_string m_render_IPaintDevice_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_callback;
				EarthView::World::Core::ev_string m_render_IPaintDevice_ev_real64_ev_real64_ev_real64_ev_real64_callback;
				EarthView::World::Core::ev_string m_render_IPaintDevice_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_callback;
				EarthView::World::Core::ev_string m_getDC_void_callback;
				EarthView::World::Core::ev_string m_releaseDC_void_callback;
				EarthView::World::Core::ev_string m_getWidth_void_callback;
				EarthView::World::Core::ev_string m_getHeight_void_callback;
				EarthView::World::Core::ev_string m_fill_IColor_callback;
				EarthView::World::Core::ev_string m_fill_ev_int32_callback;
				EarthView::World::Core::ev_string m_getResolution_void_callback;
			public:
				JCBitmapProxy(EarthView::World::Core::CNameValuePairList *pList) : CBitmap(pList)
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
				C_DISABLE_COPY(JCBitmapProxy)
			public:
				void register_setTransparent_ev_uint8_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setTransparent_ev_uint8_callback = __method;
				}
				void register_getNativeGraphics_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getNativeGraphics_void_callback = __method;
				}
				void register_getFilePath_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getFilePath_void_callback = __method;
				}
				void register_data_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_data_void_callback = __method;
				}
				void register_save_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_save_EVString_callback = __method;
				}
				void register_saveToStream_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_saveToStream_EVString_callback = __method;
				}
				void register_save_EVString_ev_char_int_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_save_EVString_ev_char_int_callback = __method;
				}
				void register_getHIcon_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getHIcon_void_callback = __method;
				}
				void register_getHBITMAP_ev_int32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getHBITMAP_ev_int32_callback = __method;
				}
				void register_ev_clone_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_ev_clone_void_callback = __method;
				}
				void register_render_IPaintDevice_IEnvelope_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_render_IPaintDevice_IEnvelope_callback = __method;
				}
				void register_render_IPaintDevice_IEnvelope_IEnvelope_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_render_IPaintDevice_IEnvelope_IEnvelope_callback = __method;
				}
				void register_render_IPaintDevice_ev_real64_ev_real64_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_render_IPaintDevice_ev_real64_ev_real64_callback = __method;
				}
				void register_render_IPaintDevice_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_render_IPaintDevice_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_callback = __method;
				}
				void register_render_IPaintDevice_ev_real64_ev_real64_ev_real64_ev_real64_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_render_IPaintDevice_ev_real64_ev_real64_ev_real64_ev_real64_callback = __method;
				}
				void register_render_IPaintDevice_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_render_IPaintDevice_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_callback = __method;
				}
				void register_getDC_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getDC_void_callback = __method;
				}
				void register_releaseDC_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_releaseDC_void_callback = __method;
				}
				void register_getWidth_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getWidth_void_callback = __method;
				}
				void register_getHeight_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getHeight_void_callback = __method;
				}
				void register_fill_IColor_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_fill_IColor_callback = __method;
				}
				void register_fill_ev_int32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_fill_ev_int32_callback = __method;
				}
				void register_getResolution_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getResolution_void_callback = __method;
				}
				virtual ev_int64 getDC()
				{
					if (this->_gRef != NULL && this->m_getDC_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getDC_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_int64 __values1 = (ev_int64) __values1_j;
						return __values1;
					}
					else
					{
						return this->CBitmap::getDC();
					}
				}
				virtual void releaseDC()
				{
					if (this->_gRef != NULL && this->m_releaseDC_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("releaseDC_void_callback");
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
						return this->CBitmap::releaseDC();
					}
				}
				virtual void* getNativeGraphics()
				{
					if (this->_gRef != NULL && this->m_getNativeGraphics_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getNativeGraphics_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
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
						return this->CBitmap::getNativeGraphics();
					}
				}
				virtual EVString getFilePath() const
				{
					if (this->_gRef != NULL && this->m_getFilePath_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getFilePath_void_callback");
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
						return this->CBitmap::getFilePath();
					}
				}
				virtual ev_int32 getWidth() const
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
						jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_int32 __values1 = (ev_int32) __values1_j;
						return __values1;
					}
					else
					{
						return this->CBitmap::getWidth();
					}
				}
				virtual ev_int32 getHeight() const
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
						jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_int32 __values1 = (ev_int32) __values1_j;
						return __values1;
					}
					else
					{
						return this->CBitmap::getHeight();
					}
				}
				virtual void fill(const EarthView::World::Spatial::Display::IColor* color)
				{
					if (this->_gRef != NULL && this->m_fill_IColor_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong color_j = (jlong) color;
						jmethodID __method = __gr->getMethod("fill_IColor_callback");
						__env->CallVoidMethod(__obj, __method , color_j);
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
						return this->CBitmap::fill(color);
					}
				}
				virtual void fill(ev_int32 color)
				{
					if (this->_gRef != NULL && this->m_fill_ev_int32_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jint color_j = (jint) color;
						jmethodID __method = __gr->getMethod("fill_ev_int32_callback");
						__env->CallVoidMethod(__obj, __method , color_j);
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
						return this->CBitmap::fill(color);
					}
				}
				virtual ev_uchar* data() const
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
						ev_uchar *__values1 = (ev_uchar*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CBitmap::data();
					}
				}
				virtual ev_int32 getResolution() const
				{
					if (this->_gRef != NULL && this->m_getResolution_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getResolution_void_callback");
						jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_int32 __values1 = (ev_int32) __values1_j;
						return __values1;
					}
					else
					{
						return this->CBitmap::getResolution();
					}
				}
				virtual ev_bool save(const EVString& path)
				{
					if (this->_gRef != NULL && this->m_save_EVString_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						EarthView::World::Core::ev_wstring path_wch = path;
						jstring path_j = __env->NewString((const jchar*)path_wch.getString(), path_wch.size());
						jmethodID __method = __gr->getMethod("save_EVString_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , path_j);
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
						return this->CBitmap::save(path);
					}
				}
				virtual EarthView::World::Core::MemoryDataStreamPtr saveToStream(const EVString& type)
				{
					if (this->_gRef != NULL && this->m_saveToStream_EVString_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						EarthView::World::Core::ev_wstring type_wch = type;
						jstring type_j = __env->NewString((const jchar*)type_wch.getString(), type_wch.size());
						jmethodID __method = __gr->getMethod("saveToStream_EVString_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , type_j);
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
						return this->CBitmap::saveToStream(type);
					}
				}
				virtual ev_bool save(const EVString& type, ev_char* buffer, int& size)
				{
					if (this->_gRef != NULL && this->m_save_EVString_ev_char_int_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						EarthView::World::Core::ev_wstring type_wch = type;
						jstring type_j = __env->NewString((const jchar*)type_wch.getString(), type_wch.size());
						jlong buffer_j = (jlong) buffer;
						jlong size_j = (jlong) &size;
						jmethodID __method = __gr->getMethod("save_EVString_ev_char_int_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , type_j, buffer_j, size_j);
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
						return this->CBitmap::save(type, buffer, size);
					}
				}
				virtual ev_int64 getHIcon() const
				{
					if (this->_gRef != NULL && this->m_getHIcon_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getHIcon_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_int64 __values1 = (ev_int64) __values1_j;
						return __values1;
					}
					else
					{
						return this->CBitmap::getHIcon();
					}
				}
				virtual ev_int64 getHBITMAP(ev_int32 background) const
				{
					if (this->_gRef != NULL && this->m_getHBITMAP_ev_int32_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jint background_j = (jint) background;
						jmethodID __method = __gr->getMethod("getHBITMAP_ev_int32_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , background_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_int64 __values1 = (ev_int64) __values1_j;
						return __values1;
					}
					else
					{
						return this->CBitmap::getHBITMAP(background);
					}
				}
				virtual EarthView::World::Display::IBitmap* clone() const
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
						EarthView::World::Display::IBitmap *__values1 = (EarthView::World::Display::IBitmap*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CBitmap::clone();
					}
				}
				virtual void render(EarthView::World::Display::IPaintDevice* destDevice, const EarthView::World::Spatial::Geometry::IEnvelope* destExt)
				{
					if (this->_gRef != NULL && this->m_render_IPaintDevice_IEnvelope_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong destDevice_j = (jlong) destDevice;
						jlong destExt_j = (jlong) destExt;
						jmethodID __method = __gr->getMethod("render_IPaintDevice_IEnvelope_callback");
						__env->CallVoidMethod(__obj, __method , destDevice_j, destExt_j);
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
						return this->CBitmap::render(destDevice, destExt);
					}
				}
				virtual void render(EarthView::World::Display::IPaintDevice* destDevice, const EarthView::World::Spatial::Geometry::IEnvelope* destExt, const EarthView::World::Spatial::Geometry::IEnvelope* srcExt)
				{
					if (this->_gRef != NULL && this->m_render_IPaintDevice_IEnvelope_IEnvelope_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong destDevice_j = (jlong) destDevice;
						jlong destExt_j = (jlong) destExt;
						jlong srcExt_j = (jlong) srcExt;
						jmethodID __method = __gr->getMethod("render_IPaintDevice_IEnvelope_IEnvelope_callback");
						__env->CallVoidMethod(__obj, __method , destDevice_j, destExt_j, srcExt_j);
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
						return this->CBitmap::render(destDevice, destExt, srcExt);
					}
				}
				virtual void render(EarthView::World::Display::IPaintDevice* destDevice, ev_real64 x, ev_real64 y)
				{
					if (this->_gRef != NULL && this->m_render_IPaintDevice_ev_real64_ev_real64_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong destDevice_j = (jlong) destDevice;
						jdouble x_j = (jdouble) x;
						jdouble y_j = (jdouble) y;
						jmethodID __method = __gr->getMethod("render_IPaintDevice_ev_real64_ev_real64_callback");
						__env->CallVoidMethod(__obj, __method , destDevice_j, x_j, y_j);
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
						return this->CBitmap::render(destDevice, x, y);
					}
				}
				virtual void render(EarthView::World::Display::IPaintDevice* destDevice, ev_real64 x, ev_real64 y, ev_real64 sx, ev_real64 sy, ev_real64 sw, ev_real64 sh)
				{
					if (this->_gRef != NULL && this->m_render_IPaintDevice_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong destDevice_j = (jlong) destDevice;
						jdouble x_j = (jdouble) x;
						jdouble y_j = (jdouble) y;
						jdouble sx_j = (jdouble) sx;
						jdouble sy_j = (jdouble) sy;
						jdouble sw_j = (jdouble) sw;
						jdouble sh_j = (jdouble) sh;
						jmethodID __method = __gr->getMethod("render_IPaintDevice_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_callback");
						__env->CallVoidMethod(__obj, __method , destDevice_j, x_j, y_j, sx_j, sy_j, sw_j, sh_j);
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
						return this->CBitmap::render(destDevice, x, y, sx, sy, sw, sh);
					}
				}
				virtual void render(EarthView::World::Display::IPaintDevice* destDevice, ev_real64 x, ev_real64 y, ev_real64 w, ev_real64 h)
				{
					if (this->_gRef != NULL && this->m_render_IPaintDevice_ev_real64_ev_real64_ev_real64_ev_real64_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong destDevice_j = (jlong) destDevice;
						jdouble x_j = (jdouble) x;
						jdouble y_j = (jdouble) y;
						jdouble w_j = (jdouble) w;
						jdouble h_j = (jdouble) h;
						jmethodID __method = __gr->getMethod("render_IPaintDevice_ev_real64_ev_real64_ev_real64_ev_real64_callback");
						__env->CallVoidMethod(__obj, __method , destDevice_j, x_j, y_j, w_j, h_j);
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
						return this->CBitmap::render(destDevice, x, y, w, h);
					}
				}
				virtual void render(EarthView::World::Display::IPaintDevice* destDevice, ev_real64 x, ev_real64 y, ev_real64 w, ev_real64 h, ev_real64 sx, ev_real64 sy, ev_real64 sw, ev_real64 sh)
				{
					if (this->_gRef != NULL && this->m_render_IPaintDevice_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong destDevice_j = (jlong) destDevice;
						jdouble x_j = (jdouble) x;
						jdouble y_j = (jdouble) y;
						jdouble w_j = (jdouble) w;
						jdouble h_j = (jdouble) h;
						jdouble sx_j = (jdouble) sx;
						jdouble sy_j = (jdouble) sy;
						jdouble sw_j = (jdouble) sw;
						jdouble sh_j = (jdouble) sh;
						jmethodID __method = __gr->getMethod("render_IPaintDevice_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_callback");
						__env->CallVoidMethod(__obj, __method , destDevice_j, x_j, y_j, w_j, h_j, sx_j, sy_j, sw_j, sh_j);
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
						return this->CBitmap::render(destDevice, x, y, w, h, sx, sy, sw, sh);
					}
				}
				virtual void setTransparent(ev_uint8 transparent)
				{
					if (this->_gRef != NULL && this->m_setTransparent_ev_uint8_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jshort transparent_j = (jshort) transparent;
						jmethodID __method = __gr->getMethod("setTransparent_ev_uint8_callback");
						__env->CallVoidMethod(__obj, __method , transparent_j);
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
						return this->CBitmap::setTransparent(transparent);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCBitmapProxy);
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_display_Bitmap_getDC_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Display::CBitmap *pObjectX = (EarthView::World::Display::CBitmap*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCBitmapProxy))
				{
					ev_int64 __values1 = pObjectX->EarthView::World::Display::CBitmap::getDC();
					jlong __values1_j = (jlong)__values1;
					return __values1_j;
				}
				else
				{
					ev_int64 __values1 = pObjectX->getDC();
					jlong __values1_j = (jlong)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Bitmap_register_1getDC_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCBitmapProxy *pObjectX = (JCBitmapProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getDC_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getDC_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_display_Bitmap_getDC_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Display::CBitmap *pObjectX = (EarthView::World::Display::CBitmap*) pObjXXXX;
				ev_int64 __values1 = pObjectX->EarthView::World::Display::CBitmap::getDC();
				jlong __values1_j = (jlong)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Bitmap_releaseDC_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Display::CBitmap *pObjectX = (EarthView::World::Display::CBitmap*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCBitmapProxy))
				{
					pObjectX->EarthView::World::Display::CBitmap::releaseDC();
				}
				else
				{
					pObjectX->releaseDC();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Bitmap_register_1releaseDC_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCBitmapProxy *pObjectX = (JCBitmapProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_releaseDC_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"releaseDC_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Bitmap_releaseDC_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Display::CBitmap *pObjectX = (EarthView::World::Display::CBitmap*) pObjXXXX;
				pObjectX->EarthView::World::Display::CBitmap::releaseDC();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_display_Bitmap_getNativeGraphics_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Display::CBitmap *pObjectX = (EarthView::World::Display::CBitmap*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCBitmapProxy))
				{
					void* __values1 = pObjectX->EarthView::World::Display::CBitmap::getNativeGraphics();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					void* __values1 = pObjectX->getNativeGraphics();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Bitmap_register_1getNativeGraphics_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCBitmapProxy *pObjectX = (JCBitmapProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getNativeGraphics_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getNativeGraphics_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_display_Bitmap_getNativeGraphics_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Display::CBitmap *pObjectX = (EarthView::World::Display::CBitmap*) pObjXXXX;
				void* __values1 = pObjectX->EarthView::World::Display::CBitmap::getNativeGraphics();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_display_Bitmap_getFilePath_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Display::CBitmap *pObjectX = (EarthView::World::Display::CBitmap*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCBitmapProxy))
				{
					EVString __values1 = pObjectX->EarthView::World::Display::CBitmap::getFilePath();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				else
				{
					EVString __values1 = pObjectX->getFilePath();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Bitmap_register_1getFilePath_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCBitmapProxy *pObjectX = (JCBitmapProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getFilePath_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getFilePath_void_callback", "()Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_display_Bitmap_getFilePath_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Display::CBitmap *pObjectX = (EarthView::World::Display::CBitmap*) pObjXXXX;
				EVString __values1 = pObjectX->EarthView::World::Display::CBitmap::getFilePath();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_display_Bitmap_getWidth_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Display::CBitmap *pObjectX = (EarthView::World::Display::CBitmap*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCBitmapProxy))
				{
					ev_int32 __values1 = pObjectX->EarthView::World::Display::CBitmap::getWidth();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				else
				{
					ev_int32 __values1 = pObjectX->getWidth();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Bitmap_register_1getWidth_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCBitmapProxy *pObjectX = (JCBitmapProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getWidth_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getWidth_void_callback", "()I");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_display_Bitmap_getWidth_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Display::CBitmap *pObjectX = (EarthView::World::Display::CBitmap*) pObjXXXX;
				ev_int32 __values1 = pObjectX->EarthView::World::Display::CBitmap::getWidth();
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_display_Bitmap_getHeight_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Display::CBitmap *pObjectX = (EarthView::World::Display::CBitmap*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCBitmapProxy))
				{
					ev_int32 __values1 = pObjectX->EarthView::World::Display::CBitmap::getHeight();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				else
				{
					ev_int32 __values1 = pObjectX->getHeight();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Bitmap_register_1getHeight_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCBitmapProxy *pObjectX = (JCBitmapProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getHeight_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getHeight_void_callback", "()I");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_display_Bitmap_getHeight_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Display::CBitmap *pObjectX = (EarthView::World::Display::CBitmap*) pObjXXXX;
				ev_int32 __values1 = pObjectX->EarthView::World::Display::CBitmap::getHeight();
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Bitmap_fill_1IColor(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong color_j)
			{
				const EarthView::World::Spatial::Display::IColor *color = (const EarthView::World::Spatial::Display::IColor*) color_j;
				EarthView::World::Display::CBitmap *pObjectX = (EarthView::World::Display::CBitmap*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCBitmapProxy))
				{
					pObjectX->EarthView::World::Display::CBitmap::fill(color);
				}
				else
				{
					pObjectX->fill(color);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Bitmap_register_1fill_1IColor(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCBitmapProxy *pObjectX = (JCBitmapProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_fill_IColor_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"fill_IColor_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Bitmap_fill_1IColor_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong color_j)
			{
				const EarthView::World::Spatial::Display::IColor *color = (const EarthView::World::Spatial::Display::IColor*) color_j;
				EarthView::World::Display::CBitmap *pObjectX = (EarthView::World::Display::CBitmap*) pObjXXXX;
				pObjectX->EarthView::World::Display::CBitmap::fill(color);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Bitmap_fill_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint color_j)
			{
				ev_int32 color = (ev_int32) color_j;
				EarthView::World::Display::CBitmap *pObjectX = (EarthView::World::Display::CBitmap*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCBitmapProxy))
				{
					pObjectX->EarthView::World::Display::CBitmap::fill(color);
				}
				else
				{
					pObjectX->fill(color);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Bitmap_register_1fill_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCBitmapProxy *pObjectX = (JCBitmapProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_fill_ev_int32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"fill_ev_int32_callback", "(I)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Bitmap_fill_1ev_1int32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint color_j)
			{
				ev_int32 color = (ev_int32) color_j;
				EarthView::World::Display::CBitmap *pObjectX = (EarthView::World::Display::CBitmap*) pObjXXXX;
				pObjectX->EarthView::World::Display::CBitmap::fill(color);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_display_Bitmap_data_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Display::CBitmap *pObjectX = (EarthView::World::Display::CBitmap*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCBitmapProxy))
				{
					ev_uchar* __values1 = pObjectX->EarthView::World::Display::CBitmap::data();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					ev_uchar* __values1 = pObjectX->data();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Bitmap_register_1data_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCBitmapProxy *pObjectX = (JCBitmapProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_display_Bitmap_data_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Display::CBitmap *pObjectX = (EarthView::World::Display::CBitmap*) pObjXXXX;
				ev_uchar* __values1 = pObjectX->EarthView::World::Display::CBitmap::data();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_display_Bitmap_getResolution_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Display::CBitmap *pObjectX = (EarthView::World::Display::CBitmap*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCBitmapProxy))
				{
					ev_int32 __values1 = pObjectX->EarthView::World::Display::CBitmap::getResolution();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				else
				{
					ev_int32 __values1 = pObjectX->getResolution();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Bitmap_register_1getResolution_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCBitmapProxy *pObjectX = (JCBitmapProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getResolution_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getResolution_void_callback", "()I");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_display_Bitmap_getResolution_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Display::CBitmap *pObjectX = (EarthView::World::Display::CBitmap*) pObjXXXX;
				ev_int32 __values1 = pObjectX->EarthView::World::Display::CBitmap::getResolution();
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_display_Bitmap_save_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring path_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* path_ch = (const ev_char*)__env->GetStringUTFChars(path_j,JNI_FALSE);
				const EVString path = path_ch;
				__env->ReleaseStringUTFChars(path_j, (const char *)path_ch);
				#else
				const ev_wchar* path_ch = (const ev_wchar*)__env->GetStringChars(path_j,JNI_FALSE);
				const EVString path = path_ch;
				__env->ReleaseStringChars(path_j, (const jchar *)path_ch);
				#endif
				EarthView::World::Display::CBitmap *pObjectX = (EarthView::World::Display::CBitmap*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCBitmapProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Display::CBitmap::save(path);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->save(path);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Bitmap_register_1save_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCBitmapProxy *pObjectX = (JCBitmapProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_save_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"save_EVString_callback", "(Ljava/lang/String;)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_display_Bitmap_save_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring path_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* path_ch = (const ev_char*)__env->GetStringUTFChars(path_j,JNI_FALSE);
				const EVString path = path_ch;
				__env->ReleaseStringUTFChars(path_j, (const char *)path_ch);
				#else
				const ev_wchar* path_ch = (const ev_wchar*)__env->GetStringChars(path_j,JNI_FALSE);
				const EVString path = path_ch;
				__env->ReleaseStringChars(path_j, (const jchar *)path_ch);
				#endif
				EarthView::World::Display::CBitmap *pObjectX = (EarthView::World::Display::CBitmap*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Display::CBitmap::save(path);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_display_Bitmap_saveToStream_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring type_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* type_ch = (const ev_char*)__env->GetStringUTFChars(type_j,JNI_FALSE);
				const EVString type = type_ch;
				__env->ReleaseStringUTFChars(type_j, (const char *)type_ch);
				#else
				const ev_wchar* type_ch = (const ev_wchar*)__env->GetStringChars(type_j,JNI_FALSE);
				const EVString type = type_ch;
				__env->ReleaseStringChars(type_j, (const jchar *)type_ch);
				#endif
				EarthView::World::Display::CBitmap *pObjectX = (EarthView::World::Display::CBitmap*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCBitmapProxy))
				{
					EarthView::World::Core::MemoryDataStreamPtr __values1 = pObjectX->EarthView::World::Display::CBitmap::saveToStream(type);
					EarthView::World::Core::MemoryDataStreamPtr *returnvalues = new EarthView::World::Core::MemoryDataStreamPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Core::MemoryDataStreamPtr __values1 = pObjectX->saveToStream(type);
					EarthView::World::Core::MemoryDataStreamPtr *returnvalues = new EarthView::World::Core::MemoryDataStreamPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Bitmap_register_1saveToStream_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCBitmapProxy *pObjectX = (JCBitmapProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_saveToStream_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"saveToStream_EVString_callback", "(Ljava/lang/String;)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_display_Bitmap_saveToStream_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring type_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* type_ch = (const ev_char*)__env->GetStringUTFChars(type_j,JNI_FALSE);
				const EVString type = type_ch;
				__env->ReleaseStringUTFChars(type_j, (const char *)type_ch);
				#else
				const ev_wchar* type_ch = (const ev_wchar*)__env->GetStringChars(type_j,JNI_FALSE);
				const EVString type = type_ch;
				__env->ReleaseStringChars(type_j, (const jchar *)type_ch);
				#endif
				EarthView::World::Display::CBitmap *pObjectX = (EarthView::World::Display::CBitmap*) pObjXXXX;
				EarthView::World::Core::MemoryDataStreamPtr __values1 = pObjectX->EarthView::World::Display::CBitmap::saveToStream(type);
				EarthView::World::Core::MemoryDataStreamPtr *returnvalues = new EarthView::World::Core::MemoryDataStreamPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_display_Bitmap_save_1EVString_1ev_1char_1int(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring type_j, jlong buffer_j, jlong size_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* type_ch = (const ev_char*)__env->GetStringUTFChars(type_j,JNI_FALSE);
				const EVString type = type_ch;
				__env->ReleaseStringUTFChars(type_j, (const char *)type_ch);
				#else
				const ev_wchar* type_ch = (const ev_wchar*)__env->GetStringChars(type_j,JNI_FALSE);
				const EVString type = type_ch;
				__env->ReleaseStringChars(type_j, (const jchar *)type_ch);
				#endif
				ev_char *buffer = (ev_char*) buffer_j;
				int &size = *(int*) size_j;
				EarthView::World::Display::CBitmap *pObjectX = (EarthView::World::Display::CBitmap*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCBitmapProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Display::CBitmap::save(type, buffer, size);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->save(type, buffer, size);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Bitmap_register_1save_1EVString_1ev_1char_1int(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCBitmapProxy *pObjectX = (JCBitmapProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_save_EVString_ev_char_int_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"save_EVString_ev_char_int_callback", "(Ljava/lang/String;JJ)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_display_Bitmap_save_1EVString_1ev_1char_1int_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring type_j, jlong buffer_j, jlong size_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* type_ch = (const ev_char*)__env->GetStringUTFChars(type_j,JNI_FALSE);
				const EVString type = type_ch;
				__env->ReleaseStringUTFChars(type_j, (const char *)type_ch);
				#else
				const ev_wchar* type_ch = (const ev_wchar*)__env->GetStringChars(type_j,JNI_FALSE);
				const EVString type = type_ch;
				__env->ReleaseStringChars(type_j, (const jchar *)type_ch);
				#endif
				ev_char *buffer = (ev_char*) buffer_j;
				int &size = *(int*) size_j;
				EarthView::World::Display::CBitmap *pObjectX = (EarthView::World::Display::CBitmap*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Display::CBitmap::save(type, buffer, size);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_display_Bitmap_getHIcon_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Display::CBitmap *pObjectX = (EarthView::World::Display::CBitmap*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCBitmapProxy))
				{
					ev_int64 __values1 = pObjectX->EarthView::World::Display::CBitmap::getHIcon();
					jlong __values1_j = (jlong)__values1;
					return __values1_j;
				}
				else
				{
					ev_int64 __values1 = pObjectX->getHIcon();
					jlong __values1_j = (jlong)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Bitmap_register_1getHIcon_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCBitmapProxy *pObjectX = (JCBitmapProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getHIcon_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getHIcon_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_display_Bitmap_getHIcon_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Display::CBitmap *pObjectX = (EarthView::World::Display::CBitmap*) pObjXXXX;
				ev_int64 __values1 = pObjectX->EarthView::World::Display::CBitmap::getHIcon();
				jlong __values1_j = (jlong)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_display_Bitmap_getHBITMAP_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint background_j)
			{
				ev_int32 background = (ev_int32) background_j;
				const 				EarthView::World::Display::CBitmap *pObjectX = (EarthView::World::Display::CBitmap*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCBitmapProxy))
				{
					ev_int64 __values1 = pObjectX->EarthView::World::Display::CBitmap::getHBITMAP(background);
					jlong __values1_j = (jlong)__values1;
					return __values1_j;
				}
				else
				{
					ev_int64 __values1 = pObjectX->getHBITMAP(background);
					jlong __values1_j = (jlong)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Bitmap_register_1getHBITMAP_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCBitmapProxy *pObjectX = (JCBitmapProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getHBITMAP_ev_int32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getHBITMAP_ev_int32_callback", "(I)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_display_Bitmap_getHBITMAP_1ev_1int32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint background_j)
			{
				ev_int32 background = (ev_int32) background_j;
				const 				EarthView::World::Display::CBitmap *pObjectX = (EarthView::World::Display::CBitmap*) pObjXXXX;
				ev_int64 __values1 = pObjectX->EarthView::World::Display::CBitmap::getHBITMAP(background);
				jlong __values1_j = (jlong)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_display_Bitmap_ev_1clone_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Display::CBitmap *pObjectX = (EarthView::World::Display::CBitmap*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCBitmapProxy))
				{
					EarthView::World::Display::IBitmap* __values1 = pObjectX->EarthView::World::Display::CBitmap::clone();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Display::IBitmap* __values1 = pObjectX->clone();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Bitmap_register_1ev_1clone_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCBitmapProxy *pObjectX = (JCBitmapProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_display_Bitmap_ev_1clone_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Display::CBitmap *pObjectX = (EarthView::World::Display::CBitmap*) pObjXXXX;
				EarthView::World::Display::IBitmap* __values1 = pObjectX->EarthView::World::Display::CBitmap::clone();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Bitmap_destroyBitmapHandle_1void(JNIEnv *__env , jclass __clazz, jlong bitmapHandle_j)
			{
				void *bitmapHandle = (void*) bitmapHandle_j;
				EarthView::World::Display::CBitmap::destroyBitmapHandle(bitmapHandle);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Bitmap_render_1IPaintDevice_1IEnvelope(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong destDevice_j, jlong destExt_j)
			{
				EarthView::World::Display::IPaintDevice *destDevice = (EarthView::World::Display::IPaintDevice*) destDevice_j;
				const EarthView::World::Spatial::Geometry::IEnvelope *destExt = (const EarthView::World::Spatial::Geometry::IEnvelope*) destExt_j;
				EarthView::World::Display::CBitmap *pObjectX = (EarthView::World::Display::CBitmap*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCBitmapProxy))
				{
					pObjectX->EarthView::World::Display::CBitmap::render(destDevice, destExt);
				}
				else
				{
					pObjectX->render(destDevice, destExt);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Bitmap_register_1render_1IPaintDevice_1IEnvelope(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCBitmapProxy *pObjectX = (JCBitmapProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_render_IPaintDevice_IEnvelope_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"render_IPaintDevice_IEnvelope_callback", "(JJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Bitmap_render_1IPaintDevice_1IEnvelope_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong destDevice_j, jlong destExt_j)
			{
				EarthView::World::Display::IPaintDevice *destDevice = (EarthView::World::Display::IPaintDevice*) destDevice_j;
				const EarthView::World::Spatial::Geometry::IEnvelope *destExt = (const EarthView::World::Spatial::Geometry::IEnvelope*) destExt_j;
				EarthView::World::Display::CBitmap *pObjectX = (EarthView::World::Display::CBitmap*) pObjXXXX;
				pObjectX->EarthView::World::Display::CBitmap::render(destDevice, destExt);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Bitmap_render_1IPaintDevice_1IEnvelope_1IEnvelope(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong destDevice_j, jlong destExt_j, jlong srcExt_j)
			{
				EarthView::World::Display::IPaintDevice *destDevice = (EarthView::World::Display::IPaintDevice*) destDevice_j;
				const EarthView::World::Spatial::Geometry::IEnvelope *destExt = (const EarthView::World::Spatial::Geometry::IEnvelope*) destExt_j;
				const EarthView::World::Spatial::Geometry::IEnvelope *srcExt = (const EarthView::World::Spatial::Geometry::IEnvelope*) srcExt_j;
				EarthView::World::Display::CBitmap *pObjectX = (EarthView::World::Display::CBitmap*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCBitmapProxy))
				{
					pObjectX->EarthView::World::Display::CBitmap::render(destDevice, destExt, srcExt);
				}
				else
				{
					pObjectX->render(destDevice, destExt, srcExt);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Bitmap_register_1render_1IPaintDevice_1IEnvelope_1IEnvelope(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCBitmapProxy *pObjectX = (JCBitmapProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_render_IPaintDevice_IEnvelope_IEnvelope_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"render_IPaintDevice_IEnvelope_IEnvelope_callback", "(JJJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Bitmap_render_1IPaintDevice_1IEnvelope_1IEnvelope_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong destDevice_j, jlong destExt_j, jlong srcExt_j)
			{
				EarthView::World::Display::IPaintDevice *destDevice = (EarthView::World::Display::IPaintDevice*) destDevice_j;
				const EarthView::World::Spatial::Geometry::IEnvelope *destExt = (const EarthView::World::Spatial::Geometry::IEnvelope*) destExt_j;
				const EarthView::World::Spatial::Geometry::IEnvelope *srcExt = (const EarthView::World::Spatial::Geometry::IEnvelope*) srcExt_j;
				EarthView::World::Display::CBitmap *pObjectX = (EarthView::World::Display::CBitmap*) pObjXXXX;
				pObjectX->EarthView::World::Display::CBitmap::render(destDevice, destExt, srcExt);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Bitmap_render_1IPaintDevice_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong destDevice_j, jdouble x_j, jdouble y_j)
			{
				EarthView::World::Display::IPaintDevice *destDevice = (EarthView::World::Display::IPaintDevice*) destDevice_j;
				ev_real64 x = (ev_real64) x_j;
				ev_real64 y = (ev_real64) y_j;
				EarthView::World::Display::CBitmap *pObjectX = (EarthView::World::Display::CBitmap*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCBitmapProxy))
				{
					pObjectX->EarthView::World::Display::CBitmap::render(destDevice, x, y);
				}
				else
				{
					pObjectX->render(destDevice, x, y);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Bitmap_register_1render_1IPaintDevice_1ev_1real64_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCBitmapProxy *pObjectX = (JCBitmapProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_render_IPaintDevice_ev_real64_ev_real64_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"render_IPaintDevice_ev_real64_ev_real64_callback", "(JDD)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Bitmap_render_1IPaintDevice_1ev_1real64_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong destDevice_j, jdouble x_j, jdouble y_j)
			{
				EarthView::World::Display::IPaintDevice *destDevice = (EarthView::World::Display::IPaintDevice*) destDevice_j;
				ev_real64 x = (ev_real64) x_j;
				ev_real64 y = (ev_real64) y_j;
				EarthView::World::Display::CBitmap *pObjectX = (EarthView::World::Display::CBitmap*) pObjXXXX;
				pObjectX->EarthView::World::Display::CBitmap::render(destDevice, x, y);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Bitmap_render_1IPaintDevice_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong destDevice_j, jdouble x_j, jdouble y_j, jdouble sx_j, jdouble sy_j, jdouble sw_j, jdouble sh_j)
			{
				EarthView::World::Display::IPaintDevice *destDevice = (EarthView::World::Display::IPaintDevice*) destDevice_j;
				ev_real64 x = (ev_real64) x_j;
				ev_real64 y = (ev_real64) y_j;
				ev_real64 sx = (ev_real64) sx_j;
				ev_real64 sy = (ev_real64) sy_j;
				ev_real64 sw = (ev_real64) sw_j;
				ev_real64 sh = (ev_real64) sh_j;
				EarthView::World::Display::CBitmap *pObjectX = (EarthView::World::Display::CBitmap*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCBitmapProxy))
				{
					pObjectX->EarthView::World::Display::CBitmap::render(destDevice, x, y, sx, sy, sw, sh);
				}
				else
				{
					pObjectX->render(destDevice, x, y, sx, sy, sw, sh);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Bitmap_register_1render_1IPaintDevice_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCBitmapProxy *pObjectX = (JCBitmapProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_render_IPaintDevice_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"render_IPaintDevice_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_callback", "(JDDDDDD)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Bitmap_render_1IPaintDevice_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong destDevice_j, jdouble x_j, jdouble y_j, jdouble sx_j, jdouble sy_j, jdouble sw_j, jdouble sh_j)
			{
				EarthView::World::Display::IPaintDevice *destDevice = (EarthView::World::Display::IPaintDevice*) destDevice_j;
				ev_real64 x = (ev_real64) x_j;
				ev_real64 y = (ev_real64) y_j;
				ev_real64 sx = (ev_real64) sx_j;
				ev_real64 sy = (ev_real64) sy_j;
				ev_real64 sw = (ev_real64) sw_j;
				ev_real64 sh = (ev_real64) sh_j;
				EarthView::World::Display::CBitmap *pObjectX = (EarthView::World::Display::CBitmap*) pObjXXXX;
				pObjectX->EarthView::World::Display::CBitmap::render(destDevice, x, y, sx, sy, sw, sh);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Bitmap_render_1IPaintDevice_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong destDevice_j, jdouble x_j, jdouble y_j, jdouble w_j, jdouble h_j)
			{
				EarthView::World::Display::IPaintDevice *destDevice = (EarthView::World::Display::IPaintDevice*) destDevice_j;
				ev_real64 x = (ev_real64) x_j;
				ev_real64 y = (ev_real64) y_j;
				ev_real64 w = (ev_real64) w_j;
				ev_real64 h = (ev_real64) h_j;
				EarthView::World::Display::CBitmap *pObjectX = (EarthView::World::Display::CBitmap*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCBitmapProxy))
				{
					pObjectX->EarthView::World::Display::CBitmap::render(destDevice, x, y, w, h);
				}
				else
				{
					pObjectX->render(destDevice, x, y, w, h);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Bitmap_register_1render_1IPaintDevice_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCBitmapProxy *pObjectX = (JCBitmapProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_render_IPaintDevice_ev_real64_ev_real64_ev_real64_ev_real64_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"render_IPaintDevice_ev_real64_ev_real64_ev_real64_ev_real64_callback", "(JDDDD)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Bitmap_render_1IPaintDevice_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong destDevice_j, jdouble x_j, jdouble y_j, jdouble w_j, jdouble h_j)
			{
				EarthView::World::Display::IPaintDevice *destDevice = (EarthView::World::Display::IPaintDevice*) destDevice_j;
				ev_real64 x = (ev_real64) x_j;
				ev_real64 y = (ev_real64) y_j;
				ev_real64 w = (ev_real64) w_j;
				ev_real64 h = (ev_real64) h_j;
				EarthView::World::Display::CBitmap *pObjectX = (EarthView::World::Display::CBitmap*) pObjXXXX;
				pObjectX->EarthView::World::Display::CBitmap::render(destDevice, x, y, w, h);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Bitmap_render_1IPaintDevice_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong destDevice_j, jdouble x_j, jdouble y_j, jdouble w_j, jdouble h_j, jdouble sx_j, jdouble sy_j, jdouble sw_j, jdouble sh_j)
			{
				EarthView::World::Display::IPaintDevice *destDevice = (EarthView::World::Display::IPaintDevice*) destDevice_j;
				ev_real64 x = (ev_real64) x_j;
				ev_real64 y = (ev_real64) y_j;
				ev_real64 w = (ev_real64) w_j;
				ev_real64 h = (ev_real64) h_j;
				ev_real64 sx = (ev_real64) sx_j;
				ev_real64 sy = (ev_real64) sy_j;
				ev_real64 sw = (ev_real64) sw_j;
				ev_real64 sh = (ev_real64) sh_j;
				EarthView::World::Display::CBitmap *pObjectX = (EarthView::World::Display::CBitmap*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCBitmapProxy))
				{
					pObjectX->EarthView::World::Display::CBitmap::render(destDevice, x, y, w, h, sx, sy, sw, sh);
				}
				else
				{
					pObjectX->render(destDevice, x, y, w, h, sx, sy, sw, sh);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Bitmap_register_1render_1IPaintDevice_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCBitmapProxy *pObjectX = (JCBitmapProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_render_IPaintDevice_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"render_IPaintDevice_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_callback", "(JDDDDDDDD)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Bitmap_render_1IPaintDevice_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong destDevice_j, jdouble x_j, jdouble y_j, jdouble w_j, jdouble h_j, jdouble sx_j, jdouble sy_j, jdouble sw_j, jdouble sh_j)
			{
				EarthView::World::Display::IPaintDevice *destDevice = (EarthView::World::Display::IPaintDevice*) destDevice_j;
				ev_real64 x = (ev_real64) x_j;
				ev_real64 y = (ev_real64) y_j;
				ev_real64 w = (ev_real64) w_j;
				ev_real64 h = (ev_real64) h_j;
				ev_real64 sx = (ev_real64) sx_j;
				ev_real64 sy = (ev_real64) sy_j;
				ev_real64 sw = (ev_real64) sw_j;
				ev_real64 sh = (ev_real64) sh_j;
				EarthView::World::Display::CBitmap *pObjectX = (EarthView::World::Display::CBitmap*) pObjXXXX;
				pObjectX->EarthView::World::Display::CBitmap::render(destDevice, x, y, w, h, sx, sy, sw, sh);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_display_Bitmap_fromStream_1MemoryDataStreamPtr(JNIEnv *__env , jclass __clazz, jlong mptr_j)
			{
				EarthView::World::Core::MemoryDataStreamPtr mptr = *(EarthView::World::Core::MemoryDataStreamPtr*) mptr_j;
				EarthView::World::Display::CBitmap* __values1 = EarthView::World::Display::CBitmap::fromStream(mptr);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_display_Bitmap_getEncoderClsid_1EVString_1void(JNIEnv *__env , jclass __clazz, jstring format_j, jlong clsid_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* format_ch = (const ev_char*)__env->GetStringUTFChars(format_j,JNI_FALSE);
				const EVString format = format_ch;
				__env->ReleaseStringUTFChars(format_j, (const char *)format_ch);
				#else
				const ev_wchar* format_ch = (const ev_wchar*)__env->GetStringChars(format_j,JNI_FALSE);
				const EVString format = format_ch;
				__env->ReleaseStringChars(format_j, (const jchar *)format_ch);
				#endif
				void *clsid = (void*) clsid_j;
				ev_bool __values1 = EarthView::World::Display::CBitmap::getEncoderClsid(format, clsid);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Bitmap_setColorKey_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong transparentColor_j)
			{
				ev_uint32 transparentColor = (ev_uint32) transparentColor_j;
				EarthView::World::Display::CBitmap *pObjectX = (EarthView::World::Display::CBitmap*) pObjXXXX;
				pObjectX->setColorKey(transparentColor);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Bitmap_setTransparent_1ev_1uint8(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jshort transparent_j)
			{
				ev_uint8 transparent = (ev_uint8) transparent_j;
				EarthView::World::Display::CBitmap *pObjectX = (EarthView::World::Display::CBitmap*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCBitmapProxy))
				{
					pObjectX->EarthView::World::Display::CBitmap::setTransparent(transparent);
				}
				else
				{
					pObjectX->setTransparent(transparent);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Bitmap_register_1setTransparent_1ev_1uint8(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCBitmapProxy *pObjectX = (JCBitmapProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setTransparent_ev_uint8_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setTransparent_ev_uint8_callback", "(S)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Bitmap_setTransparent_1ev_1uint8_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jshort transparent_j)
			{
				ev_uint8 transparent = (ev_uint8) transparent_j;
				EarthView::World::Display::CBitmap *pObjectX = (EarthView::World::Display::CBitmap*) pObjXXXX;
				pObjectX->EarthView::World::Display::CBitmap::setTransparent(transparent);
			}
		}
	}
}
