/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "display/printengine.h"
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
			class JCPrintEngineProxy : public EarthView::World::Display::CPrintEngine
			{
			 private:
				EarthView::World::Core::ev_string m_type_void_callback;
				EarthView::World::Core::ev_string m_setProperty_EVPrintEnginePropertyKey_CVariant_callback;
				EarthView::World::Core::ev_string m_property_EVPrintEnginePropertyKey_callback;
				EarthView::World::Core::ev_string m_newPage_void_callback;
				EarthView::World::Core::ev_string m_abort_void_callback;
				EarthView::World::Core::ev_string m_begin_void_callback;
				EarthView::World::Core::ev_string m_end_void_callback;
				EarthView::World::Core::ev_string m_metric_EVPrintDeviceMetric_callback;
				EarthView::World::Core::ev_string m_printerState_void_callback;
				EarthView::World::Core::ev_string m_getPaintEngine_void_callback;
				EarthView::World::Core::ev_string m_getPrinterDC_void_callback;
				EarthView::World::Core::ev_string m_releasePrinterDC_void_callback;
				EarthView::World::Core::ev_string m_setPageMargins_ev_real64_ev_real64_ev_real64_ev_real64_callback;
				EarthView::World::Core::ev_string m_getPageMargins_ev_real64_ev_real64_ev_real64_ev_real64_callback;
				EarthView::World::Core::ev_string m_getPageRect_void_callback;
				EarthView::World::Core::ev_string m_setPageSize_CPageSize_callback;
				EarthView::World::Core::ev_string m_getPageSize_void_callback;
				EarthView::World::Core::ev_string m_setResolution_ev_int32_callback;
				EarthView::World::Core::ev_string m_setPaperSources_EVPaperSource_callback;
				EarthView::World::Core::ev_string m_setPrinterProperty_void_callback;
			public:
				JCPrintEngineProxy(EarthView::World::Core::CNameValuePairList *pList) : CPrintEngine(pList)
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
				void register_type_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_type_void_callback = __method;
				}
				void register_setProperty_EVPrintEnginePropertyKey_CVariant_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setProperty_EVPrintEnginePropertyKey_CVariant_callback = __method;
				}
				void register_property_EVPrintEnginePropertyKey_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_property_EVPrintEnginePropertyKey_callback = __method;
				}
				void register_newPage_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_newPage_void_callback = __method;
				}
				void register_abort_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_abort_void_callback = __method;
				}
				void register_begin_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_begin_void_callback = __method;
				}
				void register_end_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_end_void_callback = __method;
				}
				void register_metric_EVPrintDeviceMetric_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_metric_EVPrintDeviceMetric_callback = __method;
				}
				void register_printerState_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_printerState_void_callback = __method;
				}
				void register_getPaintEngine_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getPaintEngine_void_callback = __method;
				}
				void register_getPrinterDC_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getPrinterDC_void_callback = __method;
				}
				void register_releasePrinterDC_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_releasePrinterDC_void_callback = __method;
				}
				void register_setPageMargins_ev_real64_ev_real64_ev_real64_ev_real64_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setPageMargins_ev_real64_ev_real64_ev_real64_ev_real64_callback = __method;
				}
				void register_getPageMargins_ev_real64_ev_real64_ev_real64_ev_real64_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getPageMargins_ev_real64_ev_real64_ev_real64_ev_real64_callback = __method;
				}
				void register_getPageRect_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getPageRect_void_callback = __method;
				}
				void register_setPageSize_CPageSize_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setPageSize_CPageSize_callback = __method;
				}
				void register_getPageSize_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getPageSize_void_callback = __method;
				}
				void register_setResolution_ev_int32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setResolution_ev_int32_callback = __method;
				}
				void register_setPaperSources_EVPaperSource_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setPaperSources_EVPaperSource_callback = __method;
				}
				void register_setPrinterProperty_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setPrinterProperty_void_callback = __method;
				}
				virtual EarthView::World::Display::CPrintEngine::Type type()
				{
					if (this->_gRef != NULL && this->m_type_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("type_void_callback");
						jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Display::CPrintEngine::Type __values1 = (EarthView::World::Display::CPrintEngine::Type) __values1_j;
						return __values1;
					}
					else
					{
						return this->CPrintEngine::type();
					}
				}
				virtual void setProperty(EarthView::World::Display::CPrintEngine::EVPrintEnginePropertyKey key, const EarthView::World::Core::CVariant& value)
				{
					if (this->_gRef != NULL && this->m_setProperty_EVPrintEnginePropertyKey_CVariant_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jint key_j = (jint) key;
						jlong value_j = (jlong) &value;
						jmethodID __method = __gr->getMethod("setProperty_EVPrintEnginePropertyKey_CVariant_callback");
						__env->CallVoidMethod(__obj, __method , key_j, value_j);
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
						return this->CPrintEngine::setProperty(key, value);
					}
				}
				virtual EarthView::World::Core::CVariant property(EarthView::World::Display::CPrintEngine::EVPrintEnginePropertyKey key) const
				{
					if (this->_gRef != NULL && this->m_property_EVPrintEnginePropertyKey_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jint key_j = (jint) key;
						jmethodID __method = __gr->getMethod("property_EVPrintEnginePropertyKey_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , key_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Core::CVariant __values1 = *(EarthView::World::Core::CVariant*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CPrintEngine::property(key);
					}
				}
				virtual bool newPage()
				{
					if (this->_gRef != NULL && this->m_newPage_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("newPage_void_callback");
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
						return this->CPrintEngine::newPage();
					}
				}
				virtual bool abort()
				{
					if (this->_gRef != NULL && this->m_abort_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("abort_void_callback");
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
						return this->CPrintEngine::abort();
					}
				}
				virtual ev_bool begin()
				{
					if (this->_gRef != NULL && this->m_begin_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("begin_void_callback");
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
						return this->CPrintEngine::begin();
					}
				}
				virtual ev_bool end()
				{
					if (this->_gRef != NULL && this->m_end_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("end_void_callback");
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
						return this->CPrintEngine::end();
					}
				}
				virtual ev_int32 metric(EarthView::World::Display::CPrinter::EVPrintDeviceMetric dm)
				{
					if (this->_gRef != NULL && this->m_metric_EVPrintDeviceMetric_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jint dm_j = (jint) dm;
						jmethodID __method = __gr->getMethod("metric_EVPrintDeviceMetric_callback");
						jint __values1_j = (jint)__env->CallIntMethod(__obj, __method , dm_j);
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
						return this->CPrintEngine::metric(dm);
					}
				}
				virtual EarthView::World::Display::CPrinter::EVPrinterState printerState() const
				{
					if (this->_gRef != NULL && this->m_printerState_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("printerState_void_callback");
						jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Display::CPrinter::EVPrinterState __values1 = (EarthView::World::Display::CPrinter::EVPrinterState) __values1_j;
						return __values1;
					}
					else
					{
						return this->CPrintEngine::printerState();
					}
				}
				virtual void* getPaintEngine()
				{
					if (this->_gRef != NULL && this->m_getPaintEngine_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getPaintEngine_void_callback");
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
						return this->CPrintEngine::getPaintEngine();
					}
				}
				virtual ev_int64 getPrinterDC() const
				{
					if (this->_gRef != NULL && this->m_getPrinterDC_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getPrinterDC_void_callback");
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
						return this->CPrintEngine::getPrinterDC();
					}
				}
				virtual void releasePrinterDC()
				{
					if (this->_gRef != NULL && this->m_releasePrinterDC_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("releasePrinterDC_void_callback");
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
						return this->CPrintEngine::releasePrinterDC();
					}
				}
				virtual void setPageMargins(ev_real64 left, ev_real64 top, ev_real64 right, ev_real64 bottom)
				{
					if (this->_gRef != NULL && this->m_setPageMargins_ev_real64_ev_real64_ev_real64_ev_real64_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jdouble left_j = (jdouble) left;
						jdouble top_j = (jdouble) top;
						jdouble right_j = (jdouble) right;
						jdouble bottom_j = (jdouble) bottom;
						jmethodID __method = __gr->getMethod("setPageMargins_ev_real64_ev_real64_ev_real64_ev_real64_callback");
						__env->CallVoidMethod(__obj, __method , left_j, top_j, right_j, bottom_j);
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
						return this->CPrintEngine::setPageMargins(left, top, right, bottom);
					}
				}
				virtual void getPageMargins(ev_real64* left, ev_real64* top, ev_real64* right, ev_real64* bottom) const
				{
					if (this->_gRef != NULL && this->m_getPageMargins_ev_real64_ev_real64_ev_real64_ev_real64_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong left_j = (jlong) left;
						jlong top_j = (jlong) top;
						jlong right_j = (jlong) right;
						jlong bottom_j = (jlong) bottom;
						jmethodID __method = __gr->getMethod("getPageMargins_ev_real64_ev_real64_ev_real64_ev_real64_callback");
						__env->CallVoidMethod(__obj, __method , left_j, top_j, right_j, bottom_j);
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
						return this->CPrintEngine::getPageMargins(left, top, right, bottom);
					}
				}
				virtual EarthView::World::Display::CPageRect getPageRect() const
				{
					if (this->_gRef != NULL && this->m_getPageRect_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getPageRect_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Display::CPageRect __values1 = *(EarthView::World::Display::CPageRect*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CPrintEngine::getPageRect();
					}
				}
				virtual void setPageSize(const EarthView::World::Display::CPageSize& paperSize)
				{
					if (this->_gRef != NULL && this->m_setPageSize_CPageSize_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong paperSize_j = (jlong) &paperSize;
						jmethodID __method = __gr->getMethod("setPageSize_CPageSize_callback");
						__env->CallVoidMethod(__obj, __method , paperSize_j);
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
						return this->CPrintEngine::setPageSize(paperSize);
					}
				}
				virtual EarthView::World::Spatial::Carto::EVPageSize getPageSize()
				{
					if (this->_gRef != NULL && this->m_getPageSize_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getPageSize_void_callback");
						jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Spatial::Carto::EVPageSize __values1 = (EarthView::World::Spatial::Carto::EVPageSize) __values1_j;
						return __values1;
					}
					else
					{
						return this->CPrintEngine::getPageSize();
					}
				}
				virtual void setResolution(ev_int32 resolution)
				{
					if (this->_gRef != NULL && this->m_setResolution_ev_int32_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jint resolution_j = (jint) resolution;
						jmethodID __method = __gr->getMethod("setResolution_ev_int32_callback");
						__env->CallVoidMethod(__obj, __method , resolution_j);
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
						return this->CPrintEngine::setResolution(resolution);
					}
				}
				virtual void setPaperSources(EarthView::World::Display::CPrinter::EVPaperSource source)
				{
					if (this->_gRef != NULL && this->m_setPaperSources_EVPaperSource_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
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
						jmethodID __method = __gr->getMethod("setPaperSources_EVPaperSource_callback");
						__env->CallVoidMethod(__obj, __method , source_j);
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
						return this->CPrintEngine::setPaperSources(source);
					}
				}
				virtual ev_int32 setPrinterProperty()
				{
					if (this->_gRef != NULL && this->m_setPrinterProperty_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("setPrinterProperty_void_callback");
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
						return this->CPrintEngine::setPrinterProperty();
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCPrintEngineProxy);
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_display_PrintEngine_00024EVPrintEnginePropertyKeyHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					CPrintEngine::PPK_CollateCopies,
					CPrintEngine::PPK_ColorMode,
					CPrintEngine::PPK_DocumentName,
					CPrintEngine::PPK_Orientation,
					CPrintEngine::PPK_OutputFileName,
					CPrintEngine::PPK_PageOrder,
					CPrintEngine::PPK_PaperRect,
					CPrintEngine::PPK_PaperSource,
					CPrintEngine::PPK_PrinterName,
					CPrintEngine::PPK_PrinterProgram,
					CPrintEngine::PPK_Resolution,
					CPrintEngine::PPK_SupportedResolutions,
					CPrintEngine::PPK_WindowsPageSize,
					CPrintEngine::PPK_FontEmbedding,
					CPrintEngine::PPK_SuppressSystemPrintStatus,
					CPrintEngine::PPK_Duplex,
					CPrintEngine::PPK_PaperSources,
					CPrintEngine::PPK_PaperSize,
					CPrintEngine::PPK_CustomPaperSize,
					CPrintEngine::PPK_CopyCount,
					CPrintEngine::PPK_SupportsMultipleCopies,
					CPrintEngine::PPK_CustomBase
				};
				jintArray array = __env->NewIntArray(22);
				__env->SetIntArrayRegion(array, 0, 22, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_display_PrintEngine_00024TypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					CPrintEngine::Windows,
					CPrintEngine::Linux,
					CPrintEngine::Pdf
				};
				jintArray array = __env->NewIntArray(3);
				__env->SetIntArrayRegion(array, 0, 3, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_display_PrintEngine_type_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Display::CPrintEngine *pObjectX = (EarthView::World::Display::CPrintEngine*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCPrintEngineProxy))
				{
					EarthView::World::Display::CPrintEngine::Type __values1 = pObjectX->EarthView::World::Display::CPrintEngine::type();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Display::CPrintEngine::Type __values1 = pObjectX->type();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_PrintEngine_register_1type_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCPrintEngineProxy *pObjectX = (JCPrintEngineProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_type_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"type_void_callback", "()I");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_display_PrintEngine_type_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Display::CPrintEngine *pObjectX = (EarthView::World::Display::CPrintEngine*) pObjXXXX;
				EarthView::World::Display::CPrintEngine::Type __values1 = pObjectX->EarthView::World::Display::CPrintEngine::type();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_PrintEngine_setProperty_1EVPrintEnginePropertyKey_1CVariant(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint key_j, jlong value_j)
			{
				EarthView::World::Display::CPrintEngine::EVPrintEnginePropertyKey key = (EarthView::World::Display::CPrintEngine::EVPrintEnginePropertyKey) key_j;
				const EarthView::World::Core::CVariant &value = *(EarthView::World::Core::CVariant*) value_j;
				EarthView::World::Display::CPrintEngine *pObjectX = (EarthView::World::Display::CPrintEngine*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCPrintEngineProxy))
				{
					pObjectX->EarthView::World::Display::CPrintEngine::setProperty(key, value);
				}
				else
				{
					pObjectX->setProperty(key, value);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_PrintEngine_register_1setProperty_1EVPrintEnginePropertyKey_1CVariant(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCPrintEngineProxy *pObjectX = (JCPrintEngineProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setProperty_EVPrintEnginePropertyKey_CVariant_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setProperty_EVPrintEnginePropertyKey_CVariant_callback", "(IJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_PrintEngine_setProperty_1EVPrintEnginePropertyKey_1CVariant_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint key_j, jlong value_j)
			{
				EarthView::World::Display::CPrintEngine::EVPrintEnginePropertyKey key = (EarthView::World::Display::CPrintEngine::EVPrintEnginePropertyKey) key_j;
				const EarthView::World::Core::CVariant &value = *(EarthView::World::Core::CVariant*) value_j;
				EarthView::World::Display::CPrintEngine *pObjectX = (EarthView::World::Display::CPrintEngine*) pObjXXXX;
				pObjectX->EarthView::World::Display::CPrintEngine::setProperty(key, value);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_display_PrintEngine_property_1EVPrintEnginePropertyKey(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint key_j)
			{
				EarthView::World::Display::CPrintEngine::EVPrintEnginePropertyKey key = (EarthView::World::Display::CPrintEngine::EVPrintEnginePropertyKey) key_j;
				const 				EarthView::World::Display::CPrintEngine *pObjectX = (EarthView::World::Display::CPrintEngine*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCPrintEngineProxy))
				{
					EarthView::World::Core::CVariant __values1 = pObjectX->EarthView::World::Display::CPrintEngine::property(key);
					EarthView::World::Core::CVariant *returnvalues = new EarthView::World::Core::CVariant(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Core::CVariant __values1 = pObjectX->property(key);
					EarthView::World::Core::CVariant *returnvalues = new EarthView::World::Core::CVariant(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_PrintEngine_register_1property_1EVPrintEnginePropertyKey(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCPrintEngineProxy *pObjectX = (JCPrintEngineProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_property_EVPrintEnginePropertyKey_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"property_EVPrintEnginePropertyKey_callback", "(I)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_display_PrintEngine_property_1EVPrintEnginePropertyKey_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint key_j)
			{
				EarthView::World::Display::CPrintEngine::EVPrintEnginePropertyKey key = (EarthView::World::Display::CPrintEngine::EVPrintEnginePropertyKey) key_j;
				const 				EarthView::World::Display::CPrintEngine *pObjectX = (EarthView::World::Display::CPrintEngine*) pObjXXXX;
				EarthView::World::Core::CVariant __values1 = pObjectX->EarthView::World::Display::CPrintEngine::property(key);
				EarthView::World::Core::CVariant *returnvalues = new EarthView::World::Core::CVariant(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_display_PrintEngine_newPage_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Display::CPrintEngine *pObjectX = (EarthView::World::Display::CPrintEngine*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCPrintEngineProxy))
				{
					bool __values1 = pObjectX->EarthView::World::Display::CPrintEngine::newPage();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					bool __values1 = pObjectX->newPage();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_PrintEngine_register_1newPage_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCPrintEngineProxy *pObjectX = (JCPrintEngineProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_newPage_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"newPage_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_display_PrintEngine_newPage_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Display::CPrintEngine *pObjectX = (EarthView::World::Display::CPrintEngine*) pObjXXXX;
				bool __values1 = pObjectX->EarthView::World::Display::CPrintEngine::newPage();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_display_PrintEngine_abort_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Display::CPrintEngine *pObjectX = (EarthView::World::Display::CPrintEngine*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCPrintEngineProxy))
				{
					bool __values1 = pObjectX->EarthView::World::Display::CPrintEngine::abort();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					bool __values1 = pObjectX->abort();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_PrintEngine_register_1abort_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCPrintEngineProxy *pObjectX = (JCPrintEngineProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_abort_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"abort_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_display_PrintEngine_abort_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Display::CPrintEngine *pObjectX = (EarthView::World::Display::CPrintEngine*) pObjXXXX;
				bool __values1 = pObjectX->EarthView::World::Display::CPrintEngine::abort();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_display_PrintEngine_begin_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Display::CPrintEngine *pObjectX = (EarthView::World::Display::CPrintEngine*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCPrintEngineProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Display::CPrintEngine::begin();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->begin();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_PrintEngine_register_1begin_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCPrintEngineProxy *pObjectX = (JCPrintEngineProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_begin_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"begin_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_display_PrintEngine_begin_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Display::CPrintEngine *pObjectX = (EarthView::World::Display::CPrintEngine*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Display::CPrintEngine::begin();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_display_PrintEngine_end_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Display::CPrintEngine *pObjectX = (EarthView::World::Display::CPrintEngine*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCPrintEngineProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Display::CPrintEngine::end();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->end();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_PrintEngine_register_1end_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCPrintEngineProxy *pObjectX = (JCPrintEngineProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_end_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"end_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_display_PrintEngine_end_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Display::CPrintEngine *pObjectX = (EarthView::World::Display::CPrintEngine*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Display::CPrintEngine::end();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_display_PrintEngine_metric_1EVPrintDeviceMetric(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint dm_j)
			{
				EarthView::World::Display::CPrinter::EVPrintDeviceMetric dm = (EarthView::World::Display::CPrinter::EVPrintDeviceMetric) dm_j;
				EarthView::World::Display::CPrintEngine *pObjectX = (EarthView::World::Display::CPrintEngine*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCPrintEngineProxy))
				{
					ev_int32 __values1 = pObjectX->EarthView::World::Display::CPrintEngine::metric(dm);
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				else
				{
					ev_int32 __values1 = pObjectX->metric(dm);
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_PrintEngine_register_1metric_1EVPrintDeviceMetric(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCPrintEngineProxy *pObjectX = (JCPrintEngineProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_metric_EVPrintDeviceMetric_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"metric_EVPrintDeviceMetric_callback", "(I)I");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_display_PrintEngine_metric_1EVPrintDeviceMetric_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint dm_j)
			{
				EarthView::World::Display::CPrinter::EVPrintDeviceMetric dm = (EarthView::World::Display::CPrinter::EVPrintDeviceMetric) dm_j;
				EarthView::World::Display::CPrintEngine *pObjectX = (EarthView::World::Display::CPrintEngine*) pObjXXXX;
				ev_int32 __values1 = pObjectX->EarthView::World::Display::CPrintEngine::metric(dm);
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_display_PrintEngine_printerState_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Display::CPrintEngine *pObjectX = (EarthView::World::Display::CPrintEngine*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCPrintEngineProxy))
				{
					EarthView::World::Display::CPrinter::EVPrinterState __values1 = pObjectX->EarthView::World::Display::CPrintEngine::printerState();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Display::CPrinter::EVPrinterState __values1 = pObjectX->printerState();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_PrintEngine_register_1printerState_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCPrintEngineProxy *pObjectX = (JCPrintEngineProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_printerState_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"printerState_void_callback", "()I");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_display_PrintEngine_printerState_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Display::CPrintEngine *pObjectX = (EarthView::World::Display::CPrintEngine*) pObjXXXX;
				EarthView::World::Display::CPrinter::EVPrinterState __values1 = pObjectX->EarthView::World::Display::CPrintEngine::printerState();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_display_PrintEngine_getPaintEngine_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Display::CPrintEngine *pObjectX = (EarthView::World::Display::CPrintEngine*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCPrintEngineProxy))
				{
					void* __values1 = pObjectX->EarthView::World::Display::CPrintEngine::getPaintEngine();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					void* __values1 = pObjectX->getPaintEngine();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_PrintEngine_register_1getPaintEngine_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCPrintEngineProxy *pObjectX = (JCPrintEngineProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getPaintEngine_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getPaintEngine_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_display_PrintEngine_getPaintEngine_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Display::CPrintEngine *pObjectX = (EarthView::World::Display::CPrintEngine*) pObjXXXX;
				void* __values1 = pObjectX->EarthView::World::Display::CPrintEngine::getPaintEngine();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_display_PrintEngine_getPrinterDC_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Display::CPrintEngine *pObjectX = (EarthView::World::Display::CPrintEngine*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCPrintEngineProxy))
				{
					ev_int64 __values1 = pObjectX->EarthView::World::Display::CPrintEngine::getPrinterDC();
					jlong __values1_j = (jlong)__values1;
					return __values1_j;
				}
				else
				{
					ev_int64 __values1 = pObjectX->getPrinterDC();
					jlong __values1_j = (jlong)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_PrintEngine_register_1getPrinterDC_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCPrintEngineProxy *pObjectX = (JCPrintEngineProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getPrinterDC_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getPrinterDC_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_display_PrintEngine_getPrinterDC_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Display::CPrintEngine *pObjectX = (EarthView::World::Display::CPrintEngine*) pObjXXXX;
				ev_int64 __values1 = pObjectX->EarthView::World::Display::CPrintEngine::getPrinterDC();
				jlong __values1_j = (jlong)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_PrintEngine_releasePrinterDC_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Display::CPrintEngine *pObjectX = (EarthView::World::Display::CPrintEngine*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCPrintEngineProxy))
				{
					pObjectX->EarthView::World::Display::CPrintEngine::releasePrinterDC();
				}
				else
				{
					pObjectX->releasePrinterDC();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_PrintEngine_register_1releasePrinterDC_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCPrintEngineProxy *pObjectX = (JCPrintEngineProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_releasePrinterDC_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"releasePrinterDC_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_PrintEngine_releasePrinterDC_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Display::CPrintEngine *pObjectX = (EarthView::World::Display::CPrintEngine*) pObjXXXX;
				pObjectX->EarthView::World::Display::CPrintEngine::releasePrinterDC();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_PrintEngine_setPageMargins_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble left_j, jdouble top_j, jdouble right_j, jdouble bottom_j)
			{
				ev_real64 left = (ev_real64) left_j;
				ev_real64 top = (ev_real64) top_j;
				ev_real64 right = (ev_real64) right_j;
				ev_real64 bottom = (ev_real64) bottom_j;
				EarthView::World::Display::CPrintEngine *pObjectX = (EarthView::World::Display::CPrintEngine*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCPrintEngineProxy))
				{
					pObjectX->EarthView::World::Display::CPrintEngine::setPageMargins(left, top, right, bottom);
				}
				else
				{
					pObjectX->setPageMargins(left, top, right, bottom);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_PrintEngine_register_1setPageMargins_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCPrintEngineProxy *pObjectX = (JCPrintEngineProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setPageMargins_ev_real64_ev_real64_ev_real64_ev_real64_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setPageMargins_ev_real64_ev_real64_ev_real64_ev_real64_callback", "(DDDD)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_PrintEngine_setPageMargins_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble left_j, jdouble top_j, jdouble right_j, jdouble bottom_j)
			{
				ev_real64 left = (ev_real64) left_j;
				ev_real64 top = (ev_real64) top_j;
				ev_real64 right = (ev_real64) right_j;
				ev_real64 bottom = (ev_real64) bottom_j;
				EarthView::World::Display::CPrintEngine *pObjectX = (EarthView::World::Display::CPrintEngine*) pObjXXXX;
				pObjectX->EarthView::World::Display::CPrintEngine::setPageMargins(left, top, right, bottom);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_PrintEngine_getPageMargins_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong left_j, jlong top_j, jlong right_j, jlong bottom_j)
			{
				ev_real64 *left = (ev_real64*) left_j;
				ev_real64 *top = (ev_real64*) top_j;
				ev_real64 *right = (ev_real64*) right_j;
				ev_real64 *bottom = (ev_real64*) bottom_j;
				const 				EarthView::World::Display::CPrintEngine *pObjectX = (EarthView::World::Display::CPrintEngine*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCPrintEngineProxy))
				{
					pObjectX->EarthView::World::Display::CPrintEngine::getPageMargins(left, top, right, bottom);
				}
				else
				{
					pObjectX->getPageMargins(left, top, right, bottom);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_PrintEngine_register_1getPageMargins_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCPrintEngineProxy *pObjectX = (JCPrintEngineProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getPageMargins_ev_real64_ev_real64_ev_real64_ev_real64_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getPageMargins_ev_real64_ev_real64_ev_real64_ev_real64_callback", "(JJJJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_PrintEngine_getPageMargins_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong left_j, jlong top_j, jlong right_j, jlong bottom_j)
			{
				ev_real64 *left = (ev_real64*) left_j;
				ev_real64 *top = (ev_real64*) top_j;
				ev_real64 *right = (ev_real64*) right_j;
				ev_real64 *bottom = (ev_real64*) bottom_j;
				const 				EarthView::World::Display::CPrintEngine *pObjectX = (EarthView::World::Display::CPrintEngine*) pObjXXXX;
				pObjectX->EarthView::World::Display::CPrintEngine::getPageMargins(left, top, right, bottom);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_display_PrintEngine_getPageRect_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Display::CPrintEngine *pObjectX = (EarthView::World::Display::CPrintEngine*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCPrintEngineProxy))
				{
					EarthView::World::Display::CPageRect __values1 = pObjectX->EarthView::World::Display::CPrintEngine::getPageRect();
					EarthView::World::Display::CPageRect *returnvalues = new EarthView::World::Display::CPageRect(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Display::CPageRect __values1 = pObjectX->getPageRect();
					EarthView::World::Display::CPageRect *returnvalues = new EarthView::World::Display::CPageRect(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_PrintEngine_register_1getPageRect_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCPrintEngineProxy *pObjectX = (JCPrintEngineProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getPageRect_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getPageRect_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_display_PrintEngine_getPageRect_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Display::CPrintEngine *pObjectX = (EarthView::World::Display::CPrintEngine*) pObjXXXX;
				EarthView::World::Display::CPageRect __values1 = pObjectX->EarthView::World::Display::CPrintEngine::getPageRect();
				EarthView::World::Display::CPageRect *returnvalues = new EarthView::World::Display::CPageRect(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_PrintEngine_setPageSize_1CPageSize(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong paperSize_j)
			{
				const EarthView::World::Display::CPageSize &paperSize = *(EarthView::World::Display::CPageSize*) paperSize_j;
				EarthView::World::Display::CPrintEngine *pObjectX = (EarthView::World::Display::CPrintEngine*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCPrintEngineProxy))
				{
					pObjectX->EarthView::World::Display::CPrintEngine::setPageSize(paperSize);
				}
				else
				{
					pObjectX->setPageSize(paperSize);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_PrintEngine_register_1setPageSize_1CPageSize(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCPrintEngineProxy *pObjectX = (JCPrintEngineProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setPageSize_CPageSize_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setPageSize_CPageSize_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_PrintEngine_setPageSize_1CPageSize_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong paperSize_j)
			{
				const EarthView::World::Display::CPageSize &paperSize = *(EarthView::World::Display::CPageSize*) paperSize_j;
				EarthView::World::Display::CPrintEngine *pObjectX = (EarthView::World::Display::CPrintEngine*) pObjXXXX;
				pObjectX->EarthView::World::Display::CPrintEngine::setPageSize(paperSize);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_display_PrintEngine_getPageSize_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Display::CPrintEngine *pObjectX = (EarthView::World::Display::CPrintEngine*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCPrintEngineProxy))
				{
					EarthView::World::Spatial::Carto::EVPageSize __values1 = pObjectX->EarthView::World::Display::CPrintEngine::getPageSize();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Spatial::Carto::EVPageSize __values1 = pObjectX->getPageSize();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_PrintEngine_register_1getPageSize_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCPrintEngineProxy *pObjectX = (JCPrintEngineProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getPageSize_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getPageSize_void_callback", "()I");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_display_PrintEngine_getPageSize_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Display::CPrintEngine *pObjectX = (EarthView::World::Display::CPrintEngine*) pObjXXXX;
				EarthView::World::Spatial::Carto::EVPageSize __values1 = pObjectX->EarthView::World::Display::CPrintEngine::getPageSize();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_PrintEngine_setResolution_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint resolution_j)
			{
				ev_int32 resolution = (ev_int32) resolution_j;
				EarthView::World::Display::CPrintEngine *pObjectX = (EarthView::World::Display::CPrintEngine*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCPrintEngineProxy))
				{
					pObjectX->EarthView::World::Display::CPrintEngine::setResolution(resolution);
				}
				else
				{
					pObjectX->setResolution(resolution);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_PrintEngine_register_1setResolution_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCPrintEngineProxy *pObjectX = (JCPrintEngineProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setResolution_ev_int32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setResolution_ev_int32_callback", "(I)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_PrintEngine_setResolution_1ev_1int32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint resolution_j)
			{
				ev_int32 resolution = (ev_int32) resolution_j;
				EarthView::World::Display::CPrintEngine *pObjectX = (EarthView::World::Display::CPrintEngine*) pObjXXXX;
				pObjectX->EarthView::World::Display::CPrintEngine::setResolution(resolution);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_PrintEngine_setPaperSources_1EVPaperSource(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint source_j)
			{
				EarthView::World::Display::CPrinter::EVPaperSource source = (EarthView::World::Display::CPrinter::EVPaperSource) source_j;
				EarthView::World::Display::CPrintEngine *pObjectX = (EarthView::World::Display::CPrintEngine*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCPrintEngineProxy))
				{
					pObjectX->EarthView::World::Display::CPrintEngine::setPaperSources(source);
				}
				else
				{
					pObjectX->setPaperSources(source);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_PrintEngine_register_1setPaperSources_1EVPaperSource(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCPrintEngineProxy *pObjectX = (JCPrintEngineProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setPaperSources_EVPaperSource_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setPaperSources_EVPaperSource_callback", "(I)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_PrintEngine_setPaperSources_1EVPaperSource_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint source_j)
			{
				EarthView::World::Display::CPrinter::EVPaperSource source = (EarthView::World::Display::CPrinter::EVPaperSource) source_j;
				EarthView::World::Display::CPrintEngine *pObjectX = (EarthView::World::Display::CPrintEngine*) pObjXXXX;
				pObjectX->EarthView::World::Display::CPrintEngine::setPaperSources(source);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_display_PrintEngine_setPrinterProperty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Display::CPrintEngine *pObjectX = (EarthView::World::Display::CPrintEngine*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCPrintEngineProxy))
				{
					ev_int32 __values1 = pObjectX->EarthView::World::Display::CPrintEngine::setPrinterProperty();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				else
				{
					ev_int32 __values1 = pObjectX->setPrinterProperty();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_PrintEngine_register_1setPrinterProperty_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCPrintEngineProxy *pObjectX = (JCPrintEngineProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setPrinterProperty_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setPrinterProperty_void_callback", "()I");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_display_PrintEngine_setPrinterProperty_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Display::CPrintEngine *pObjectX = (EarthView::World::Display::CPrintEngine*) pObjXXXX;
				ev_int32 __values1 = pObjectX->EarthView::World::Display::CPrintEngine::setPrinterProperty();
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
		}
	}
}
