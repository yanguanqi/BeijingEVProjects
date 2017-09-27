/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial2dcarto/cartooutput2d.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Carto
			{
				class JCCartoOutput2DProxy : public EarthView::World::Spatial::Carto::CCartoOutput2D
				{
				 private:
					EarthView::World::Core::ev_string m_getPrinter_void_callback;
					EarthView::World::Core::ev_string m_setUsingPrinterPaperSettings_ev_bool_callback;
					EarthView::World::Core::ev_string m_isUsingPrinterPaperSettings_void_callback;
					EarthView::World::Core::ev_string m_setPrinterAll_ev_bool_callback;
					EarthView::World::Core::ev_string m_isPrinterAll_void_callback;
					EarthView::World::Core::ev_string m_setScaleMap_ev_bool_callback;
					EarthView::World::Core::ev_string m_isScaleMap_void_callback;
					EarthView::World::Core::ev_string m_getPrintCopyCount_void_callback;
					EarthView::World::Core::ev_string m_setPrintCopyCount_ev_uint32_callback;
					EarthView::World::Core::ev_string m_setFromTo_int_int_callback;
					EarthView::World::Core::ev_string m_getFromPage_void_callback;
					EarthView::World::Core::ev_string m_fromXmlElement_CXmlElement_callback;
					EarthView::World::Core::ev_string m_toXmlElement_void_callback;
				public:
					JCCartoOutput2DProxy(EarthView::World::Core::CNameValuePairList *pList) : CCartoOutput2D(pList)
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
					C_DISABLE_COPY(JCCartoOutput2DProxy)
				public:
					void register_getPrinter_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getPrinter_void_callback = __method;
					}
					void register_setUsingPrinterPaperSettings_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setUsingPrinterPaperSettings_ev_bool_callback = __method;
					}
					void register_isUsingPrinterPaperSettings_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_isUsingPrinterPaperSettings_void_callback = __method;
					}
					void register_setPrinterAll_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setPrinterAll_ev_bool_callback = __method;
					}
					void register_isPrinterAll_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_isPrinterAll_void_callback = __method;
					}
					void register_setScaleMap_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setScaleMap_ev_bool_callback = __method;
					}
					void register_isScaleMap_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_isScaleMap_void_callback = __method;
					}
					void register_getPrintCopyCount_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getPrintCopyCount_void_callback = __method;
					}
					void register_setPrintCopyCount_ev_uint32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setPrintCopyCount_ev_uint32_callback = __method;
					}
					void register_setFromTo_int_int_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setFromTo_int_int_callback = __method;
					}
					void register_getFromPage_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getFromPage_void_callback = __method;
					}
					void register_fromXmlElement_CXmlElement_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_fromXmlElement_CXmlElement_callback = __method;
					}
					void register_toXmlElement_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_toXmlElement_void_callback = __method;
					}
					virtual EarthView::World::Display::CPrinter* getPrinter()
					{
						if (this->_gRef != NULL && this->m_getPrinter_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getPrinter_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Display::CPrinter *__values1 = (EarthView::World::Display::CPrinter*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CCartoOutput2D::getPrinter();
						}
					}
					virtual void setUsingPrinterPaperSettings(ev_bool usingMapPageSettings)
					{
						if (this->_gRef != NULL && this->m_setUsingPrinterPaperSettings_ev_bool_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jboolean usingMapPageSettings_j = (jboolean) usingMapPageSettings;
							jmethodID __method = __gr->getMethod("setUsingPrinterPaperSettings_ev_bool_callback");
							__env->CallVoidMethod(__obj, __method , usingMapPageSettings_j);
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
							return this->CCartoOutput2D::setUsingPrinterPaperSettings(usingMapPageSettings);
						}
					}
					virtual ev_bool isUsingPrinterPaperSettings() const
					{
						if (this->_gRef != NULL && this->m_isUsingPrinterPaperSettings_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("isUsingPrinterPaperSettings_void_callback");
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
							return this->CCartoOutput2D::isUsingPrinterPaperSettings();
						}
					}
					virtual void setPrinterAll(ev_bool printerAll)
					{
						if (this->_gRef != NULL && this->m_setPrinterAll_ev_bool_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jboolean printerAll_j = (jboolean) printerAll;
							jmethodID __method = __gr->getMethod("setPrinterAll_ev_bool_callback");
							__env->CallVoidMethod(__obj, __method , printerAll_j);
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
							return this->CCartoOutput2D::setPrinterAll(printerAll);
						}
					}
					virtual ev_bool isPrinterAll() const
					{
						if (this->_gRef != NULL && this->m_isPrinterAll_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("isPrinterAll_void_callback");
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
							return this->CCartoOutput2D::isPrinterAll();
						}
					}
					virtual void setScaleMap(ev_bool scaleMap)
					{
						if (this->_gRef != NULL && this->m_setScaleMap_ev_bool_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jboolean scaleMap_j = (jboolean) scaleMap;
							jmethodID __method = __gr->getMethod("setScaleMap_ev_bool_callback");
							__env->CallVoidMethod(__obj, __method , scaleMap_j);
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
							return this->CCartoOutput2D::setScaleMap(scaleMap);
						}
					}
					virtual ev_bool isScaleMap() const
					{
						if (this->_gRef != NULL && this->m_isScaleMap_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("isScaleMap_void_callback");
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
							return this->CCartoOutput2D::isScaleMap();
						}
					}
					virtual ev_uint32 getPrintCopyCount() const
					{
						if (this->_gRef != NULL && this->m_getPrintCopyCount_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getPrintCopyCount_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_uint32 __values1 = (ev_uint32) __values1_j;
							return __values1;
						}
						else
						{
							return this->CCartoOutput2D::getPrintCopyCount();
						}
					}
					virtual void setPrintCopyCount(ev_uint32 count)
					{
						if (this->_gRef != NULL && this->m_setPrintCopyCount_ev_uint32_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong count_j = (jlong) count;
							jmethodID __method = __gr->getMethod("setPrintCopyCount_ev_uint32_callback");
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
							return this->CCartoOutput2D::setPrintCopyCount(count);
						}
					}
					virtual void setFromTo(int fromPage, int toPage)
					{
						if (this->_gRef != NULL && this->m_setFromTo_int_int_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jint fromPage_j = (jint) fromPage;
							jint toPage_j = (jint) toPage;
							jmethodID __method = __gr->getMethod("setFromTo_int_int_callback");
							__env->CallVoidMethod(__obj, __method , fromPage_j, toPage_j);
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
							return this->CCartoOutput2D::setFromTo(fromPage, toPage);
						}
					}
					virtual ev_int32 getFromPage() const
					{
						if (this->_gRef != NULL && this->m_getFromPage_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getFromPage_void_callback");
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
							return this->CCartoOutput2D::getFromPage();
						}
					}
					virtual void fromXmlElement(EarthView::World::Core::CXmlElement& element)
					{
						if (this->_gRef != NULL && this->m_fromXmlElement_CXmlElement_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong element_j = (jlong) &element;
							jmethodID __method = __gr->getMethod("fromXmlElement_CXmlElement_callback");
							__env->CallVoidMethod(__obj, __method , element_j);
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
							return this->CCartoOutput2D::fromXmlElement(element);
						}
					}
					virtual EarthView::World::Core::CXmlElement toXmlElement() const
					{
						if (this->_gRef != NULL && this->m_toXmlElement_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("toXmlElement_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Core::CXmlElement __values1 = *(EarthView::World::Core::CXmlElement*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CCartoOutput2D::toXmlElement();
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCCartoOutput2DProxy);
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_carto_CartoOutput2D_getPrinter_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Carto::CCartoOutput2D *pObjectX = (EarthView::World::Spatial::Carto::CCartoOutput2D*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCCartoOutput2DProxy))
					{
						EarthView::World::Display::CPrinter* __values1 = pObjectX->EarthView::World::Spatial::Carto::CCartoOutput2D::getPrinter();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Display::CPrinter* __values1 = pObjectX->getPrinter();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_CartoOutput2D_register_1getPrinter_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCartoOutput2DProxy *pObjectX = (JCCartoOutput2DProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getPrinter_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getPrinter_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_carto_CartoOutput2D_getPrinter_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Carto::CCartoOutput2D *pObjectX = (EarthView::World::Spatial::Carto::CCartoOutput2D*) pObjXXXX;
					EarthView::World::Display::CPrinter* __values1 = pObjectX->EarthView::World::Spatial::Carto::CCartoOutput2D::getPrinter();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_CartoOutput2D_setUsingPrinterPaperSettings_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean usingMapPageSettings_j)
				{
					ev_bool usingMapPageSettings = (ev_bool) usingMapPageSettings_j;
					EarthView::World::Spatial::Carto::CCartoOutput2D *pObjectX = (EarthView::World::Spatial::Carto::CCartoOutput2D*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCCartoOutput2DProxy))
					{
						pObjectX->EarthView::World::Spatial::Carto::CCartoOutput2D::setUsingPrinterPaperSettings(usingMapPageSettings);
					}
					else
					{
						pObjectX->setUsingPrinterPaperSettings(usingMapPageSettings);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_CartoOutput2D_register_1setUsingPrinterPaperSettings_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCartoOutput2DProxy *pObjectX = (JCCartoOutput2DProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setUsingPrinterPaperSettings_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setUsingPrinterPaperSettings_ev_bool_callback", "(Z)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_CartoOutput2D_setUsingPrinterPaperSettings_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean usingMapPageSettings_j)
				{
					ev_bool usingMapPageSettings = (ev_bool) usingMapPageSettings_j;
					EarthView::World::Spatial::Carto::CCartoOutput2D *pObjectX = (EarthView::World::Spatial::Carto::CCartoOutput2D*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Carto::CCartoOutput2D::setUsingPrinterPaperSettings(usingMapPageSettings);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_carto_CartoOutput2D_isUsingPrinterPaperSettings_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::CCartoOutput2D *pObjectX = (EarthView::World::Spatial::Carto::CCartoOutput2D*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCCartoOutput2DProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::Carto::CCartoOutput2D::isUsingPrinterPaperSettings();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->isUsingPrinterPaperSettings();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_CartoOutput2D_register_1isUsingPrinterPaperSettings_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCartoOutput2DProxy *pObjectX = (JCCartoOutput2DProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_isUsingPrinterPaperSettings_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"isUsingPrinterPaperSettings_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_carto_CartoOutput2D_isUsingPrinterPaperSettings_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::CCartoOutput2D *pObjectX = (EarthView::World::Spatial::Carto::CCartoOutput2D*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::Carto::CCartoOutput2D::isUsingPrinterPaperSettings();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_CartoOutput2D_setPrinterAll_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean printerAll_j)
				{
					ev_bool printerAll = (ev_bool) printerAll_j;
					EarthView::World::Spatial::Carto::CCartoOutput2D *pObjectX = (EarthView::World::Spatial::Carto::CCartoOutput2D*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCCartoOutput2DProxy))
					{
						pObjectX->EarthView::World::Spatial::Carto::CCartoOutput2D::setPrinterAll(printerAll);
					}
					else
					{
						pObjectX->setPrinterAll(printerAll);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_CartoOutput2D_register_1setPrinterAll_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCartoOutput2DProxy *pObjectX = (JCCartoOutput2DProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setPrinterAll_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setPrinterAll_ev_bool_callback", "(Z)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_CartoOutput2D_setPrinterAll_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean printerAll_j)
				{
					ev_bool printerAll = (ev_bool) printerAll_j;
					EarthView::World::Spatial::Carto::CCartoOutput2D *pObjectX = (EarthView::World::Spatial::Carto::CCartoOutput2D*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Carto::CCartoOutput2D::setPrinterAll(printerAll);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_carto_CartoOutput2D_isPrinterAll_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::CCartoOutput2D *pObjectX = (EarthView::World::Spatial::Carto::CCartoOutput2D*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCCartoOutput2DProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::Carto::CCartoOutput2D::isPrinterAll();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->isPrinterAll();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_CartoOutput2D_register_1isPrinterAll_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCartoOutput2DProxy *pObjectX = (JCCartoOutput2DProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_isPrinterAll_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"isPrinterAll_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_carto_CartoOutput2D_isPrinterAll_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::CCartoOutput2D *pObjectX = (EarthView::World::Spatial::Carto::CCartoOutput2D*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::Carto::CCartoOutput2D::isPrinterAll();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_CartoOutput2D_setScaleMap_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean scaleMap_j)
				{
					ev_bool scaleMap = (ev_bool) scaleMap_j;
					EarthView::World::Spatial::Carto::CCartoOutput2D *pObjectX = (EarthView::World::Spatial::Carto::CCartoOutput2D*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCCartoOutput2DProxy))
					{
						pObjectX->EarthView::World::Spatial::Carto::CCartoOutput2D::setScaleMap(scaleMap);
					}
					else
					{
						pObjectX->setScaleMap(scaleMap);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_CartoOutput2D_register_1setScaleMap_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCartoOutput2DProxy *pObjectX = (JCCartoOutput2DProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setScaleMap_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setScaleMap_ev_bool_callback", "(Z)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_CartoOutput2D_setScaleMap_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean scaleMap_j)
				{
					ev_bool scaleMap = (ev_bool) scaleMap_j;
					EarthView::World::Spatial::Carto::CCartoOutput2D *pObjectX = (EarthView::World::Spatial::Carto::CCartoOutput2D*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Carto::CCartoOutput2D::setScaleMap(scaleMap);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_carto_CartoOutput2D_isScaleMap_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::CCartoOutput2D *pObjectX = (EarthView::World::Spatial::Carto::CCartoOutput2D*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCCartoOutput2DProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::Carto::CCartoOutput2D::isScaleMap();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->isScaleMap();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_CartoOutput2D_register_1isScaleMap_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCartoOutput2DProxy *pObjectX = (JCCartoOutput2DProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_isScaleMap_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"isScaleMap_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_carto_CartoOutput2D_isScaleMap_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::CCartoOutput2D *pObjectX = (EarthView::World::Spatial::Carto::CCartoOutput2D*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::Carto::CCartoOutput2D::isScaleMap();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_carto_CartoOutput2D_getPrintCopyCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::CCartoOutput2D *pObjectX = (EarthView::World::Spatial::Carto::CCartoOutput2D*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCCartoOutput2DProxy))
					{
						ev_uint32 __values1 = pObjectX->EarthView::World::Spatial::Carto::CCartoOutput2D::getPrintCopyCount();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						ev_uint32 __values1 = pObjectX->getPrintCopyCount();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_CartoOutput2D_register_1getPrintCopyCount_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCartoOutput2DProxy *pObjectX = (JCCartoOutput2DProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getPrintCopyCount_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getPrintCopyCount_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_carto_CartoOutput2D_getPrintCopyCount_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::CCartoOutput2D *pObjectX = (EarthView::World::Spatial::Carto::CCartoOutput2D*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->EarthView::World::Spatial::Carto::CCartoOutput2D::getPrintCopyCount();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_CartoOutput2D_setPrintCopyCount_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
				{
					ev_uint32 count = (ev_uint32) count_j;
					EarthView::World::Spatial::Carto::CCartoOutput2D *pObjectX = (EarthView::World::Spatial::Carto::CCartoOutput2D*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCCartoOutput2DProxy))
					{
						pObjectX->EarthView::World::Spatial::Carto::CCartoOutput2D::setPrintCopyCount(count);
					}
					else
					{
						pObjectX->setPrintCopyCount(count);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_CartoOutput2D_register_1setPrintCopyCount_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCartoOutput2DProxy *pObjectX = (JCCartoOutput2DProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setPrintCopyCount_ev_uint32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setPrintCopyCount_ev_uint32_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_CartoOutput2D_setPrintCopyCount_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
				{
					ev_uint32 count = (ev_uint32) count_j;
					EarthView::World::Spatial::Carto::CCartoOutput2D *pObjectX = (EarthView::World::Spatial::Carto::CCartoOutput2D*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Carto::CCartoOutput2D::setPrintCopyCount(count);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_CartoOutput2D_setFromTo_1int_1int(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint fromPage_j, jint toPage_j)
				{
					int fromPage = (int) fromPage_j;
					int toPage = (int) toPage_j;
					EarthView::World::Spatial::Carto::CCartoOutput2D *pObjectX = (EarthView::World::Spatial::Carto::CCartoOutput2D*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCCartoOutput2DProxy))
					{
						pObjectX->EarthView::World::Spatial::Carto::CCartoOutput2D::setFromTo(fromPage, toPage);
					}
					else
					{
						pObjectX->setFromTo(fromPage, toPage);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_CartoOutput2D_register_1setFromTo_1int_1int(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCartoOutput2DProxy *pObjectX = (JCCartoOutput2DProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setFromTo_int_int_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setFromTo_int_int_callback", "(II)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_CartoOutput2D_setFromTo_1int_1int_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint fromPage_j, jint toPage_j)
				{
					int fromPage = (int) fromPage_j;
					int toPage = (int) toPage_j;
					EarthView::World::Spatial::Carto::CCartoOutput2D *pObjectX = (EarthView::World::Spatial::Carto::CCartoOutput2D*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Carto::CCartoOutput2D::setFromTo(fromPage, toPage);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_carto_CartoOutput2D_getFromPage_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::CCartoOutput2D *pObjectX = (EarthView::World::Spatial::Carto::CCartoOutput2D*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCCartoOutput2DProxy))
					{
						ev_int32 __values1 = pObjectX->EarthView::World::Spatial::Carto::CCartoOutput2D::getFromPage();
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
					else
					{
						ev_int32 __values1 = pObjectX->getFromPage();
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_CartoOutput2D_register_1getFromPage_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCartoOutput2DProxy *pObjectX = (JCCartoOutput2DProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getFromPage_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getFromPage_void_callback", "()I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_carto_CartoOutput2D_getFromPage_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::CCartoOutput2D *pObjectX = (EarthView::World::Spatial::Carto::CCartoOutput2D*) pObjXXXX;
					ev_int32 __values1 = pObjectX->EarthView::World::Spatial::Carto::CCartoOutput2D::getFromPage();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_carto_CartoOutput2D_getToPage_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::CCartoOutput2D *pObjectX = (EarthView::World::Spatial::Carto::CCartoOutput2D*) pObjXXXX;
					ev_int32 __values1 = pObjectX->getToPage();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_carto_CartoOutput2D_getAllPageCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Carto::CCartoOutput2D *pObjectX = (EarthView::World::Spatial::Carto::CCartoOutput2D*) pObjXXXX;
					ev_int32 __values1 = pObjectX->getAllPageCount();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_CartoOutput2D_fromXmlElement_1CXmlElement(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong element_j)
				{
					EarthView::World::Core::CXmlElement &element = *(EarthView::World::Core::CXmlElement*) element_j;
					EarthView::World::Spatial::Carto::CCartoOutput2D *pObjectX = (EarthView::World::Spatial::Carto::CCartoOutput2D*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCCartoOutput2DProxy))
					{
						pObjectX->EarthView::World::Spatial::Carto::CCartoOutput2D::fromXmlElement(element);
					}
					else
					{
						pObjectX->fromXmlElement(element);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_CartoOutput2D_register_1fromXmlElement_1CXmlElement(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCartoOutput2DProxy *pObjectX = (JCCartoOutput2DProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_fromXmlElement_CXmlElement_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"fromXmlElement_CXmlElement_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_CartoOutput2D_fromXmlElement_1CXmlElement_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong element_j)
				{
					EarthView::World::Core::CXmlElement &element = *(EarthView::World::Core::CXmlElement*) element_j;
					EarthView::World::Spatial::Carto::CCartoOutput2D *pObjectX = (EarthView::World::Spatial::Carto::CCartoOutput2D*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Carto::CCartoOutput2D::fromXmlElement(element);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_carto_CartoOutput2D_toXmlElement_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::CCartoOutput2D *pObjectX = (EarthView::World::Spatial::Carto::CCartoOutput2D*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCCartoOutput2DProxy))
					{
						EarthView::World::Core::CXmlElement __values1 = pObjectX->EarthView::World::Spatial::Carto::CCartoOutput2D::toXmlElement();
						EarthView::World::Core::CXmlElement *returnvalues = new EarthView::World::Core::CXmlElement(__values1);
						((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
						jlong __values1_j = (jlong) returnvalues;
						return __values1_j;
					}
					else
					{
						EarthView::World::Core::CXmlElement __values1 = pObjectX->toXmlElement();
						EarthView::World::Core::CXmlElement *returnvalues = new EarthView::World::Core::CXmlElement(__values1);
						((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
						jlong __values1_j = (jlong) returnvalues;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_CartoOutput2D_register_1toXmlElement_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCartoOutput2DProxy *pObjectX = (JCCartoOutput2DProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_toXmlElement_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"toXmlElement_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_carto_CartoOutput2D_toXmlElement_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::CCartoOutput2D *pObjectX = (EarthView::World::Spatial::Carto::CCartoOutput2D*) pObjXXXX;
					EarthView::World::Core::CXmlElement __values1 = pObjectX->EarthView::World::Spatial::Carto::CCartoOutput2D::toXmlElement();
					EarthView::World::Core::CXmlElement *returnvalues = new EarthView::World::Core::CXmlElement(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
		}
	}
}
