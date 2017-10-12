/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "symbol/evoutputenginemanager.h"
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
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Display
			{
				class JCOutputEngineProxy : public EarthView::World::Spatial::Display::COutputEngine
				{
				 private:
					EarthView::World::Core::ev_string m_getName_void_callback;
					EarthView::World::Core::ev_string m_createDrawSymbol_ev_int32_callback;
					EarthView::World::Core::ev_string m_isSupportDevice_IPaintDevice_callback;
					EarthView::World::Core::ev_string m_getSupportedFormat_CStringArray_callback;
					EarthView::World::Core::ev_string m_createOutputDevice_EVString_char_double_double_callback;
				public:
					JCOutputEngineProxy(EarthView::World::Core::CNameValuePairList *pList) : COutputEngine(pList)
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
					C_DISABLE_COPY(JCOutputEngineProxy)
				public:
					void register_getName_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getName_void_callback = __method;
					}
					void register_createDrawSymbol_ev_int32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_createDrawSymbol_ev_int32_callback = __method;
					}
					void register_isSupportDevice_IPaintDevice_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_isSupportDevice_IPaintDevice_callback = __method;
					}
					void register_getSupportedFormat_CStringArray_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getSupportedFormat_CStringArray_callback = __method;
					}
					void register_createOutputDevice_EVString_char_double_double_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_createOutputDevice_EVString_char_double_double_callback = __method;
					}
					virtual const EVString getName() const
					{
						if (this->_gRef != NULL && this->m_getName_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getName_void_callback");
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
							const EVString __values1 = values_ch;
							__env->ReleaseStringUTFChars(__values1_j,values_ch);
							#else
							const ev_wchar* values_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
							const EVString __values1 = values_ch;
							__env->ReleaseStringChars(__values1_j,(const jchar *)values_ch);
							#endif
							return __values1;
						}
						else
						{
							return this->COutputEngine::getName();
						}
					}
					virtual EarthView::World::Spatial::Display::CDrawSymbol* createDrawSymbol(ev_int32 symbolType) const
					{
						if (this->_gRef != NULL && this->m_createDrawSymbol_ev_int32_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jint symbolType_j = (jint) symbolType;
							jmethodID __method = __gr->getMethod("createDrawSymbol_ev_int32_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , symbolType_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::Display::CDrawSymbol *__values1 = (EarthView::World::Spatial::Display::CDrawSymbol*) __values1_j;
							if(__values1 != NULL) {
								((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(false);
							}
							return __values1;
						}
						else
						{
							return this->COutputEngine::createDrawSymbol(symbolType);
						}
					}
					virtual ev_bool isSupportDevice(EarthView::World::Display::IPaintDevice* device) const
					{
						if (this->_gRef != NULL && this->m_isSupportDevice_IPaintDevice_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong device_j = (jlong) device;
							jmethodID __method = __gr->getMethod("isSupportDevice_IPaintDevice_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , device_j);
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
							return this->COutputEngine::isSupportDevice(device);
						}
					}
					virtual void getSupportedFormat(EarthView::World::Core::CStringArray& array) const
					{
						if (this->_gRef != NULL && this->m_getSupportedFormat_CStringArray_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong array_j = (jlong) &array;
							jmethodID __method = __gr->getMethod("getSupportedFormat_CStringArray_callback");
							__env->CallVoidMethod(__obj, __method , array_j);
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
							return this->COutputEngine::getSupportedFormat(array);
						}
					}
					virtual EarthView::World::Display::IPaintDevice* createOutputDevice(const EVString& format, char* fileName, double w_in_p, double h_in_p) const
					{
						if (this->_gRef != NULL && this->m_createOutputDevice_EVString_char_double_double_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							EarthView::World::Core::ev_wstring format_wch = format;
							jstring format_j = __env->NewString((const jchar*)format_wch.getString(), format_wch.size());
							jlong fileName_j = (jlong) fileName;
							jdouble w_in_p_j = (jdouble) w_in_p;
							jdouble h_in_p_j = (jdouble) h_in_p;
							jmethodID __method = __gr->getMethod("createOutputDevice_EVString_char_double_double_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , format_j, fileName_j, w_in_p_j, h_in_p_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Display::IPaintDevice *__values1 = (EarthView::World::Display::IPaintDevice*) __values1_j;
							return __values1;
						}
						else
						{
							return this->COutputEngine::createOutputDevice(format, fileName, w_in_p, h_in_p);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCOutputEngineProxy);
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_display_OutputEngine_getName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::COutputEngine *pObjectX = (EarthView::World::Spatial::Display::COutputEngine*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCOutputEngineProxy))
					{
						const EVString __values1 = pObjectX->EarthView::World::Spatial::Display::COutputEngine::getName();
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
					else
					{
						const EVString __values1 = pObjectX->getName();
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_OutputEngine_register_1getName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCOutputEngineProxy *pObjectX = (JCOutputEngineProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getName_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getName_void_callback", "()Ljava/lang/String;");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_display_OutputEngine_getName_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::COutputEngine *pObjectX = (EarthView::World::Spatial::Display::COutputEngine*) pObjXXXX;
					const EVString __values1 = pObjectX->EarthView::World::Spatial::Display::COutputEngine::getName();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_OutputEngine_createDrawSymbol_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint symbolType_j)
				{
					ev_int32 symbolType = (ev_int32) symbolType_j;
					const 					EarthView::World::Spatial::Display::COutputEngine *pObjectX = (EarthView::World::Spatial::Display::COutputEngine*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCOutputEngineProxy))
					{
						EarthView::World::Spatial::Display::CDrawSymbol* __values1 = pObjectX->EarthView::World::Spatial::Display::COutputEngine::createDrawSymbol(symbolType);
						if(__values1 != NULL) {							((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
						}						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Display::CDrawSymbol* __values1 = pObjectX->createDrawSymbol(symbolType);
						if(__values1 != NULL) {							((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
						}						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_OutputEngine_register_1createDrawSymbol_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCOutputEngineProxy *pObjectX = (JCOutputEngineProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_createDrawSymbol_ev_int32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"createDrawSymbol_ev_int32_callback", "(I)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_OutputEngine_createDrawSymbol_1ev_1int32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint symbolType_j)
				{
					ev_int32 symbolType = (ev_int32) symbolType_j;
					const 					EarthView::World::Spatial::Display::COutputEngine *pObjectX = (EarthView::World::Spatial::Display::COutputEngine*) pObjXXXX;
					EarthView::World::Spatial::Display::CDrawSymbol* __values1 = pObjectX->EarthView::World::Spatial::Display::COutputEngine::createDrawSymbol(symbolType);
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_display_OutputEngine_isSupportDevice_1IPaintDevice(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong device_j)
				{
					EarthView::World::Display::IPaintDevice *device = (EarthView::World::Display::IPaintDevice*) device_j;
					const 					EarthView::World::Spatial::Display::COutputEngine *pObjectX = (EarthView::World::Spatial::Display::COutputEngine*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCOutputEngineProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::Display::COutputEngine::isSupportDevice(device);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->isSupportDevice(device);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_OutputEngine_register_1isSupportDevice_1IPaintDevice(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCOutputEngineProxy *pObjectX = (JCOutputEngineProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_isSupportDevice_IPaintDevice_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"isSupportDevice_IPaintDevice_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_display_OutputEngine_isSupportDevice_1IPaintDevice_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong device_j)
				{
					EarthView::World::Display::IPaintDevice *device = (EarthView::World::Display::IPaintDevice*) device_j;
					const 					EarthView::World::Spatial::Display::COutputEngine *pObjectX = (EarthView::World::Spatial::Display::COutputEngine*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::Display::COutputEngine::isSupportDevice(device);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_OutputEngine_getSupportedFormat_1CStringArray(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong array_j)
				{
					EarthView::World::Core::CStringArray &array = *(EarthView::World::Core::CStringArray*) array_j;
					const 					EarthView::World::Spatial::Display::COutputEngine *pObjectX = (EarthView::World::Spatial::Display::COutputEngine*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCOutputEngineProxy))
					{
						pObjectX->EarthView::World::Spatial::Display::COutputEngine::getSupportedFormat(array);
					}
					else
					{
						pObjectX->getSupportedFormat(array);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_OutputEngine_register_1getSupportedFormat_1CStringArray(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCOutputEngineProxy *pObjectX = (JCOutputEngineProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getSupportedFormat_CStringArray_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getSupportedFormat_CStringArray_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_OutputEngine_getSupportedFormat_1CStringArray_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong array_j)
				{
					EarthView::World::Core::CStringArray &array = *(EarthView::World::Core::CStringArray*) array_j;
					const 					EarthView::World::Spatial::Display::COutputEngine *pObjectX = (EarthView::World::Spatial::Display::COutputEngine*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Display::COutputEngine::getSupportedFormat(array);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_OutputEngine_createOutputDevice_1EVString_1char_1double_1double(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring format_j, jlong fileName_j, jdouble w_in_p_j, jdouble h_in_p_j)
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
					char *fileName = (char*) fileName_j;
					double w_in_p = (double) w_in_p_j;
					double h_in_p = (double) h_in_p_j;
					const 					EarthView::World::Spatial::Display::COutputEngine *pObjectX = (EarthView::World::Spatial::Display::COutputEngine*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCOutputEngineProxy))
					{
						EarthView::World::Display::IPaintDevice* __values1 = pObjectX->EarthView::World::Spatial::Display::COutputEngine::createOutputDevice(format, fileName, w_in_p, h_in_p);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Display::IPaintDevice* __values1 = pObjectX->createOutputDevice(format, fileName, w_in_p, h_in_p);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_OutputEngine_register_1createOutputDevice_1EVString_1char_1double_1double(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCOutputEngineProxy *pObjectX = (JCOutputEngineProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_createOutputDevice_EVString_char_double_double_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"createOutputDevice_EVString_char_double_double_callback", "(Ljava/lang/String;JDD)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_OutputEngine_createOutputDevice_1EVString_1char_1double_1double_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring format_j, jlong fileName_j, jdouble w_in_p_j, jdouble h_in_p_j)
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
					char *fileName = (char*) fileName_j;
					double w_in_p = (double) w_in_p_j;
					double h_in_p = (double) h_in_p_j;
					const 					EarthView::World::Spatial::Display::COutputEngine *pObjectX = (EarthView::World::Spatial::Display::COutputEngine*) pObjXXXX;
					EarthView::World::Display::IPaintDevice* __values1 = pObjectX->EarthView::World::Spatial::Display::COutputEngine::createOutputDevice(format, fileName, w_in_p, h_in_p);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_Evoutputenginemanager_getSingletonPtr_1void(JNIEnv *__env , jclass __clazz)
				{
					EarthView::World::Spatial::Display::EVOutputEngineManager* __values1 = EarthView::World::Spatial::Display::EVOutputEngineManager::getSingletonPtr();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_Evoutputenginemanager_getOutputEngine_1IPaintDevice(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong device_j)
				{
					EarthView::World::Display::IPaintDevice *device = (EarthView::World::Display::IPaintDevice*) device_j;
					EarthView::World::Spatial::Display::EVOutputEngineManager *pObjectX = (EarthView::World::Spatial::Display::EVOutputEngineManager*) pObjXXXX;
					const EarthView::World::Spatial::Display::COutputEngine* __values1 = pObjectX->getOutputEngine(device);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_Evoutputenginemanager_getSupportedFormat_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Display::EVOutputEngineManager *pObjectX = (EarthView::World::Spatial::Display::EVOutputEngineManager*) pObjXXXX;
					EarthView::World::Core::CStringArray __values1 = pObjectX->getSupportedFormat();
					EarthView::World::Core::CStringArray *returnvalues = new EarthView::World::Core::CStringArray(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_Evoutputenginemanager_createOutputDevice_1EVString_1char_1double_1double(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring format_j, jlong fileName_j, jdouble w_in_p_j, jdouble h_in_p_j)
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
					char *fileName = (char*) fileName_j;
					double w_in_p = (double) w_in_p_j;
					double h_in_p = (double) h_in_p_j;
					EarthView::World::Spatial::Display::EVOutputEngineManager *pObjectX = (EarthView::World::Spatial::Display::EVOutputEngineManager*) pObjXXXX;
					EarthView::World::Display::IPaintDevice* __values1 = pObjectX->createOutputDevice(format, fileName, w_in_p, h_in_p);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Evoutputenginemanager_registerOutputEngine_1COutputEngine(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pEngine_j)
				{
					const EarthView::World::Spatial::Display::COutputEngine *pEngine = (const EarthView::World::Spatial::Display::COutputEngine*) pEngine_j;
					EarthView::World::Spatial::Display::EVOutputEngineManager *pObjectX = (EarthView::World::Spatial::Display::EVOutputEngineManager*) pObjXXXX;
					pObjectX->registerOutputEngine(pEngine);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_Evoutputenginemanager_getOutputEngine_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring engineName_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* engineName_ch = (const ev_char*)__env->GetStringUTFChars(engineName_j,JNI_FALSE);
					const EVString engineName = engineName_ch;
					__env->ReleaseStringUTFChars(engineName_j, (const char *)engineName_ch);
					#else
					const ev_wchar* engineName_ch = (const ev_wchar*)__env->GetStringChars(engineName_j,JNI_FALSE);
					const EVString engineName = engineName_ch;
					__env->ReleaseStringChars(engineName_j, (const jchar *)engineName_ch);
					#endif
					EarthView::World::Spatial::Display::EVOutputEngineManager *pObjectX = (EarthView::World::Spatial::Display::EVOutputEngineManager*) pObjXXXX;
					const EarthView::World::Spatial::Display::COutputEngine* __values1 = pObjectX->getOutputEngine(engineName);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_Evoutputenginemanager_getOutputEngine_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					EarthView::World::Spatial::Display::EVOutputEngineManager *pObjectX = (EarthView::World::Spatial::Display::EVOutputEngineManager*) pObjXXXX;
					const EarthView::World::Spatial::Display::COutputEngine* __values1 = pObjectX->getOutputEngine(index);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_Evoutputenginemanager_getOutputEngineCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::EVOutputEngineManager *pObjectX = (EarthView::World::Spatial::Display::EVOutputEngineManager*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->getOutputEngineCount();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Evoutputenginemanager_loadEngines_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Display::EVOutputEngineManager *pObjectX = (EarthView::World::Spatial::Display::EVOutputEngineManager*) pObjXXXX;
					pObjectX->loadEngines();
				}
			}
		}
	}
}
