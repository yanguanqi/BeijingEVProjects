/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "display/metafile.h"
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
			class JCMetaFileProxy : public EarthView::World::Display::CMetaFile
			{
			 private:
				EarthView::World::Core::ev_string m_getDC_void_callback;
				EarthView::World::Core::ev_string m_releaseDC_void_callback;
				EarthView::World::Core::ev_string m_getWidth_void_callback;
				EarthView::World::Core::ev_string m_getHeight_void_callback;
				EarthView::World::Core::ev_string m_fill_IColor_callback;
				EarthView::World::Core::ev_string m_fill_ev_int32_callback;
				EarthView::World::Core::ev_string m_getResolution_void_callback;
			public:
				JCMetaFileProxy(EarthView::World::Core::CNameValuePairList *pList) : CMetaFile(pList)
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
						return this->CMetaFile::getDC();
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
						return this->CMetaFile::releaseDC();
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
						return this->CMetaFile::getWidth();
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
						return this->CMetaFile::getHeight();
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
						return this->CMetaFile::fill(color);
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
						return this->CMetaFile::fill(color);
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
						return this->CMetaFile::getResolution();
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCMetaFileProxy);
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_display_MetaFile_getDC_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Display::CMetaFile *pObjectX = (EarthView::World::Display::CMetaFile*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCMetaFileProxy))
				{
					ev_int64 __values1 = pObjectX->EarthView::World::Display::CMetaFile::getDC();
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_MetaFile_register_1getDC_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMetaFileProxy *pObjectX = (JCMetaFileProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_display_MetaFile_getDC_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Display::CMetaFile *pObjectX = (EarthView::World::Display::CMetaFile*) pObjXXXX;
				ev_int64 __values1 = pObjectX->EarthView::World::Display::CMetaFile::getDC();
				jlong __values1_j = (jlong)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_MetaFile_releaseDC_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Display::CMetaFile *pObjectX = (EarthView::World::Display::CMetaFile*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCMetaFileProxy))
				{
					pObjectX->EarthView::World::Display::CMetaFile::releaseDC();
				}
				else
				{
					pObjectX->releaseDC();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_MetaFile_register_1releaseDC_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMetaFileProxy *pObjectX = (JCMetaFileProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_MetaFile_releaseDC_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Display::CMetaFile *pObjectX = (EarthView::World::Display::CMetaFile*) pObjXXXX;
				pObjectX->EarthView::World::Display::CMetaFile::releaseDC();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_display_MetaFile_getNativeGraphics_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Display::CMetaFile *pObjectX = (EarthView::World::Display::CMetaFile*) pObjXXXX;
				void* __values1 = pObjectX->getNativeGraphics();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_display_MetaFile_getFilePath_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Display::CMetaFile *pObjectX = (EarthView::World::Display::CMetaFile*) pObjXXXX;
				EVString __values1 = pObjectX->getFilePath();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_display_MetaFile_getWidth_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Display::CMetaFile *pObjectX = (EarthView::World::Display::CMetaFile*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCMetaFileProxy))
				{
					ev_int32 __values1 = pObjectX->EarthView::World::Display::CMetaFile::getWidth();
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_MetaFile_register_1getWidth_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMetaFileProxy *pObjectX = (JCMetaFileProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_display_MetaFile_getWidth_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Display::CMetaFile *pObjectX = (EarthView::World::Display::CMetaFile*) pObjXXXX;
				ev_int32 __values1 = pObjectX->EarthView::World::Display::CMetaFile::getWidth();
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_display_MetaFile_getHeight_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Display::CMetaFile *pObjectX = (EarthView::World::Display::CMetaFile*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCMetaFileProxy))
				{
					ev_int32 __values1 = pObjectX->EarthView::World::Display::CMetaFile::getHeight();
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_MetaFile_register_1getHeight_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMetaFileProxy *pObjectX = (JCMetaFileProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_display_MetaFile_getHeight_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Display::CMetaFile *pObjectX = (EarthView::World::Display::CMetaFile*) pObjXXXX;
				ev_int32 __values1 = pObjectX->EarthView::World::Display::CMetaFile::getHeight();
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_MetaFile_fill_1IColor(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong color_j)
			{
				const EarthView::World::Spatial::Display::IColor *color = (const EarthView::World::Spatial::Display::IColor*) color_j;
				EarthView::World::Display::CMetaFile *pObjectX = (EarthView::World::Display::CMetaFile*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCMetaFileProxy))
				{
					pObjectX->EarthView::World::Display::CMetaFile::fill(color);
				}
				else
				{
					pObjectX->fill(color);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_MetaFile_register_1fill_1IColor(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMetaFileProxy *pObjectX = (JCMetaFileProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_MetaFile_fill_1IColor_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong color_j)
			{
				const EarthView::World::Spatial::Display::IColor *color = (const EarthView::World::Spatial::Display::IColor*) color_j;
				EarthView::World::Display::CMetaFile *pObjectX = (EarthView::World::Display::CMetaFile*) pObjXXXX;
				pObjectX->EarthView::World::Display::CMetaFile::fill(color);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_MetaFile_fill_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint color_j)
			{
				ev_int32 color = (ev_int32) color_j;
				EarthView::World::Display::CMetaFile *pObjectX = (EarthView::World::Display::CMetaFile*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCMetaFileProxy))
				{
					pObjectX->EarthView::World::Display::CMetaFile::fill(color);
				}
				else
				{
					pObjectX->fill(color);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_MetaFile_register_1fill_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMetaFileProxy *pObjectX = (JCMetaFileProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_MetaFile_fill_1ev_1int32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint color_j)
			{
				ev_int32 color = (ev_int32) color_j;
				EarthView::World::Display::CMetaFile *pObjectX = (EarthView::World::Display::CMetaFile*) pObjXXXX;
				pObjectX->EarthView::World::Display::CMetaFile::fill(color);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_MetaFile_render_1IPaintDevice_1IEnvelope(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong destDevice_j, jlong destExt_j)
			{
				EarthView::World::Display::IPaintDevice *destDevice = (EarthView::World::Display::IPaintDevice*) destDevice_j;
				const EarthView::World::Spatial::Geometry::IEnvelope *destExt = (const EarthView::World::Spatial::Geometry::IEnvelope*) destExt_j;
				EarthView::World::Display::CMetaFile *pObjectX = (EarthView::World::Display::CMetaFile*) pObjXXXX;
				pObjectX->render(destDevice, destExt);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_MetaFile_render_1IPaintDevice_1IEnvelope_1IEnvelope(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong destDevice_j, jlong destExt_j, jlong srcExt_j)
			{
				EarthView::World::Display::IPaintDevice *destDevice = (EarthView::World::Display::IPaintDevice*) destDevice_j;
				const EarthView::World::Spatial::Geometry::IEnvelope *destExt = (const EarthView::World::Spatial::Geometry::IEnvelope*) destExt_j;
				const EarthView::World::Spatial::Geometry::IEnvelope *srcExt = (const EarthView::World::Spatial::Geometry::IEnvelope*) srcExt_j;
				EarthView::World::Display::CMetaFile *pObjectX = (EarthView::World::Display::CMetaFile*) pObjXXXX;
				pObjectX->render(destDevice, destExt, srcExt);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_MetaFile_render_1IPaintDevice_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong destDevice_j, jdouble x_j, jdouble y_j)
			{
				EarthView::World::Display::IPaintDevice *destDevice = (EarthView::World::Display::IPaintDevice*) destDevice_j;
				ev_real64 x = (ev_real64) x_j;
				ev_real64 y = (ev_real64) y_j;
				EarthView::World::Display::CMetaFile *pObjectX = (EarthView::World::Display::CMetaFile*) pObjXXXX;
				pObjectX->render(destDevice, x, y);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_MetaFile_render_1IPaintDevice_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong destDevice_j, jdouble x_j, jdouble y_j, jdouble sx_j, jdouble sy_j, jdouble sw_j, jdouble sh_j)
			{
				EarthView::World::Display::IPaintDevice *destDevice = (EarthView::World::Display::IPaintDevice*) destDevice_j;
				ev_real64 x = (ev_real64) x_j;
				ev_real64 y = (ev_real64) y_j;
				ev_real64 sx = (ev_real64) sx_j;
				ev_real64 sy = (ev_real64) sy_j;
				ev_real64 sw = (ev_real64) sw_j;
				ev_real64 sh = (ev_real64) sh_j;
				EarthView::World::Display::CMetaFile *pObjectX = (EarthView::World::Display::CMetaFile*) pObjXXXX;
				pObjectX->render(destDevice, x, y, sx, sy, sw, sh);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_MetaFile_render_1IPaintDevice_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong destDevice_j, jdouble x_j, jdouble y_j, jdouble w_j, jdouble h_j)
			{
				EarthView::World::Display::IPaintDevice *destDevice = (EarthView::World::Display::IPaintDevice*) destDevice_j;
				ev_real64 x = (ev_real64) x_j;
				ev_real64 y = (ev_real64) y_j;
				ev_real64 w = (ev_real64) w_j;
				ev_real64 h = (ev_real64) h_j;
				EarthView::World::Display::CMetaFile *pObjectX = (EarthView::World::Display::CMetaFile*) pObjXXXX;
				pObjectX->render(destDevice, x, y, w, h);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_MetaFile_render_1IPaintDevice_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong destDevice_j, jdouble x_j, jdouble y_j, jdouble w_j, jdouble h_j, jdouble sx_j, jdouble sy_j, jdouble sw_j, jdouble sh_j)
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
				EarthView::World::Display::CMetaFile *pObjectX = (EarthView::World::Display::CMetaFile*) pObjXXXX;
				pObjectX->render(destDevice, x, y, w, h, sx, sy, sw, sh);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_MetaFile_setTransparent_1ev_1uint8(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jshort transparent_j)
			{
				ev_uint8 transparent = (ev_uint8) transparent_j;
				EarthView::World::Display::CMetaFile *pObjectX = (EarthView::World::Display::CMetaFile*) pObjXXXX;
				pObjectX->setTransparent(transparent);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_MetaFile_save_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Display::CMetaFile *pObjectX = (EarthView::World::Display::CMetaFile*) pObjXXXX;
				pObjectX->save();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_MetaFile_register_1getResolution_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMetaFileProxy *pObjectX = (JCMetaFileProxy*) pObjXXXX;
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
		}
	}
}
