/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialinterface/ipage.h"
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
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial_carto_EVPageUnitsHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						PU_Unknown,
						PU_Meters,
						PU_Millimeters,
						PU_Centimeters,
						PU_Inches,
						PU_Points,
						PU_Pixel
					};
					jintArray array = __env->NewIntArray(7);
					__env->SetIntArrayRegion(array, 0, 7, enum_values);
					return array;
				}
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial_carto_EVPageOrientationHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						PO_Portrait,
						PO_Landscape
					};
					jintArray array = __env->NewIntArray(2);
					__env->SetIntArrayRegion(array, 0, 2, enum_values);
					return array;
				}
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial_carto_EVPageSizeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						PS_A4,
						PS_B5,
						PS_Letter,
						PS_Legal,
						PS_Executive,
						PS_A2,
						PS_A3,
						PS_A5,
						PS_B4,
						PS_C5E,
						PS_Comm10E,
						PS_DLE,
						PS_Folio,
						PS_Ledger,
						PS_Tabloid,
						PS_Custom
					};
					jintArray array = __env->NewIntArray(16);
					__env->SetIntArrayRegion(array, 0, 16, enum_values);
					return array;
				}
				class JIPageProxy : public EarthView::World::Spatial::Carto::IPage
				{
				 private:
					EarthView::World::Core::ev_string m_getPageType_void_callback;
					EarthView::World::Core::ev_string m_setPageType_EVPageSize_callback;
					EarthView::World::Core::ev_string m_getBoderSymbol_void_callback;
					EarthView::World::Core::ev_string m_setBoderSymbol_ISymbol_callback;
					EarthView::World::Core::ev_string m_getBackgroundColor_void_callback;
					EarthView::World::Core::ev_string m_setBackgroundColor_IColor_callback;
					EarthView::World::Core::ev_string m_getShadowColor_void_callback;
					EarthView::World::Core::ev_string m_setShadowColor_IColor_callback;
					EarthView::World::Core::ev_string m_getOrientation_void_callback;
					EarthView::World::Core::ev_string m_setPageSize_ev_real64_ev_real64_callback;
					EarthView::World::Core::ev_string m_setOrientation_EVPageOrientation_callback;
					EarthView::World::Core::ev_string m_queryPageSize_ev_real64_ev_real64_EVPageUnits_callback;
					EarthView::World::Core::ev_string m_getPageUnits_void_callback;
					EarthView::World::Core::ev_string m_setPageUnits_EVPageUnits_callback;
					EarthView::World::Core::ev_string m_draw_ISpatialDisplay_callback;
					EarthView::World::Core::ev_string m_setCustomPageWidth_ev_real64_callback;
					EarthView::World::Core::ev_string m_setCustomPageHeight_ev_real64_callback;
					EarthView::World::Core::ev_string m_ev_clone_void_callback;
					EarthView::World::Core::ev_string m_toStream_CDataStream_callback;
					EarthView::World::Core::ev_string m_toXML_void_callback;
					EarthView::World::Core::ev_string m_fromXmlElement_CXmlElement_callback;
					EarthView::World::Core::ev_string m_toXmlElement_void_callback;
					EarthView::World::Core::ev_string m_fromStream_CDataStream_callback;
				public:
					JIPageProxy(EarthView::World::Core::CNameValuePairList *pList) : IPage(pList)
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
					void register_getPageType_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getPageType_void_callback = __method;
					}
					void register_setPageType_EVPageSize_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setPageType_EVPageSize_callback = __method;
					}
					void register_getBoderSymbol_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getBoderSymbol_void_callback = __method;
					}
					void register_setBoderSymbol_ISymbol_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setBoderSymbol_ISymbol_callback = __method;
					}
					void register_getBackgroundColor_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getBackgroundColor_void_callback = __method;
					}
					void register_setBackgroundColor_IColor_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setBackgroundColor_IColor_callback = __method;
					}
					void register_getShadowColor_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getShadowColor_void_callback = __method;
					}
					void register_setShadowColor_IColor_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setShadowColor_IColor_callback = __method;
					}
					void register_getOrientation_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getOrientation_void_callback = __method;
					}
					void register_setPageSize_ev_real64_ev_real64_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setPageSize_ev_real64_ev_real64_callback = __method;
					}
					void register_setOrientation_EVPageOrientation_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setOrientation_EVPageOrientation_callback = __method;
					}
					void register_queryPageSize_ev_real64_ev_real64_EVPageUnits_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_queryPageSize_ev_real64_ev_real64_EVPageUnits_callback = __method;
					}
					void register_getPageUnits_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getPageUnits_void_callback = __method;
					}
					void register_setPageUnits_EVPageUnits_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setPageUnits_EVPageUnits_callback = __method;
					}
					void register_draw_ISpatialDisplay_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_draw_ISpatialDisplay_callback = __method;
					}
					void register_setCustomPageWidth_ev_real64_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setCustomPageWidth_ev_real64_callback = __method;
					}
					void register_setCustomPageHeight_ev_real64_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setCustomPageHeight_ev_real64_callback = __method;
					}
					void register_ev_clone_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_ev_clone_void_callback = __method;
					}
					void register_toStream_CDataStream_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_toStream_CDataStream_callback = __method;
					}
					void register_toXML_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_toXML_void_callback = __method;
					}
					void register_fromXmlElement_CXmlElement_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_fromXmlElement_CXmlElement_callback = __method;
					}
					void register_toXmlElement_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_toXmlElement_void_callback = __method;
					}
					void register_fromStream_CDataStream_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_fromStream_CDataStream_callback = __method;
					}
					virtual EarthView::World::Spatial::Carto::EVPageSize getPageType() const
					{
						if (this->_gRef != NULL && this->m_getPageType_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getPageType_void_callback");
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
							return this->IPage::getPageType();
						}
					}
					virtual void setPageType(EarthView::World::Spatial::Carto::EVPageSize type)
					{
						if (this->_gRef != NULL && this->m_setPageType_EVPageSize_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jint type_j = (jint) type;
							jmethodID __method = __gr->getMethod("setPageType_EVPageSize_callback");
							__env->CallVoidMethod(__obj, __method , type_j);
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
							return this->IPage::setPageType(type);
						}
					}
					virtual EarthView::World::Spatial::Display::ISymbol* getBoderSymbol() const
					{
						if (this->_gRef != NULL && this->m_getBoderSymbol_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getBoderSymbol_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::Display::ISymbol *__values1 = (EarthView::World::Spatial::Display::ISymbol*) __values1_j;
							return __values1;
						}
						else
						{
							return this->IPage::getBoderSymbol();
						}
					}
					virtual void setBoderSymbol(EarthView::World::Spatial::Display::ISymbol* boder)
					{
						if (this->_gRef != NULL && this->m_setBoderSymbol_ISymbol_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong boder_j = (jlong) boder;
							jmethodID __method = __gr->getMethod("setBoderSymbol_ISymbol_callback");
							__env->CallVoidMethod(__obj, __method , boder_j);
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
							return this->IPage::setBoderSymbol(boder);
						}
					}
					virtual EarthView::World::Spatial::Display::IColor* getBackgroundColor() const
					{
						if (this->_gRef != NULL && this->m_getBackgroundColor_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getBackgroundColor_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::Display::IColor *__values1 = (EarthView::World::Spatial::Display::IColor*) __values1_j;
							return __values1;
						}
						else
						{
							return this->IPage::getBackgroundColor();
						}
					}
					virtual void setBackgroundColor(EarthView::World::Spatial::Display::IColor* background)
					{
						if (this->_gRef != NULL && this->m_setBackgroundColor_IColor_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong background_j = (jlong) background;
							jmethodID __method = __gr->getMethod("setBackgroundColor_IColor_callback");
							__env->CallVoidMethod(__obj, __method , background_j);
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
							return this->IPage::setBackgroundColor(background);
						}
					}
					virtual EarthView::World::Spatial::Display::IColor* getShadowColor() const
					{
						if (this->_gRef != NULL && this->m_getShadowColor_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getShadowColor_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::Display::IColor *__values1 = (EarthView::World::Spatial::Display::IColor*) __values1_j;
							return __values1;
						}
						else
						{
							return this->IPage::getShadowColor();
						}
					}
					virtual void setShadowColor(EarthView::World::Spatial::Display::IColor* pColor)
					{
						if (this->_gRef != NULL && this->m_setShadowColor_IColor_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong pColor_j = (jlong) pColor;
							jmethodID __method = __gr->getMethod("setShadowColor_IColor_callback");
							__env->CallVoidMethod(__obj, __method , pColor_j);
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
							return this->IPage::setShadowColor(pColor);
						}
					}
					virtual EarthView::World::Spatial::Carto::EVPageOrientation getOrientation() const
					{
						if (this->_gRef != NULL && this->m_getOrientation_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getOrientation_void_callback");
							jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::Carto::EVPageOrientation __values1 = (EarthView::World::Spatial::Carto::EVPageOrientation) __values1_j;
							return __values1;
						}
						else
						{
							return this->IPage::getOrientation();
						}
					}
					virtual void setPageSize(ev_real64 width, ev_real64 height)
					{
						if (this->_gRef != NULL && this->m_setPageSize_ev_real64_ev_real64_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jdouble width_j = (jdouble) width;
							jdouble height_j = (jdouble) height;
							jmethodID __method = __gr->getMethod("setPageSize_ev_real64_ev_real64_callback");
							__env->CallVoidMethod(__obj, __method , width_j, height_j);
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
							return this->IPage::setPageSize(width, height);
						}
					}
					virtual void setOrientation(EarthView::World::Spatial::Carto::EVPageOrientation oritention)
					{
						if (this->_gRef != NULL && this->m_setOrientation_EVPageOrientation_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jint oritention_j = (jint) oritention;
							jmethodID __method = __gr->getMethod("setOrientation_EVPageOrientation_callback");
							__env->CallVoidMethod(__obj, __method , oritention_j);
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
							return this->IPage::setOrientation(oritention);
						}
					}
					virtual void queryPageSize(ev_real64& width, ev_real64& height, EarthView::World::Spatial::Carto::EVPageUnits& pageUnit)
					{
						if (this->_gRef != NULL && this->m_queryPageSize_ev_real64_ev_real64_EVPageUnits_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong width_j = (jlong) &width;
							jlong height_j = (jlong) &height;
							jlong pageUnit_j = (jlong) &pageUnit;
							jmethodID __method = __gr->getMethod("queryPageSize_ev_real64_ev_real64_EVPageUnits_callback");
							__env->CallVoidMethod(__obj, __method , width_j, height_j, pageUnit_j);
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
							return this->IPage::queryPageSize(width, height, pageUnit);
						}
					}
					virtual EarthView::World::Spatial::Carto::EVPageUnits getPageUnits() const
					{
						if (this->_gRef != NULL && this->m_getPageUnits_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getPageUnits_void_callback");
							jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::Carto::EVPageUnits __values1 = (EarthView::World::Spatial::Carto::EVPageUnits) __values1_j;
							return __values1;
						}
						else
						{
							return this->IPage::getPageUnits();
						}
					}
					virtual void setPageUnits(EarthView::World::Spatial::Carto::EVPageUnits pageUnit)
					{
						if (this->_gRef != NULL && this->m_setPageUnits_EVPageUnits_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jint pageUnit_j = (jint) pageUnit;
							jmethodID __method = __gr->getMethod("setPageUnits_EVPageUnits_callback");
							__env->CallVoidMethod(__obj, __method , pageUnit_j);
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
							return this->IPage::setPageUnits(pageUnit);
						}
					}
					virtual void draw(EarthView::World::Spatial::Display::ISpatialDisplay* display)
					{
						if (this->_gRef != NULL && this->m_draw_ISpatialDisplay_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong display_j = (jlong) display;
							jmethodID __method = __gr->getMethod("draw_ISpatialDisplay_callback");
							__env->CallVoidMethod(__obj, __method , display_j);
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
							return this->IPage::draw(display);
						}
					}
					virtual void setCustomPageWidth(ev_real64 dPageCustomWidth)
					{
						if (this->_gRef != NULL && this->m_setCustomPageWidth_ev_real64_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jdouble dPageCustomWidth_j = (jdouble) dPageCustomWidth;
							jmethodID __method = __gr->getMethod("setCustomPageWidth_ev_real64_callback");
							__env->CallVoidMethod(__obj, __method , dPageCustomWidth_j);
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
							return this->IPage::setCustomPageWidth(dPageCustomWidth);
						}
					}
					virtual void setCustomPageHeight(ev_real64 dPageCustomHeight)
					{
						if (this->_gRef != NULL && this->m_setCustomPageHeight_ev_real64_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jdouble dPageCustomHeight_j = (jdouble) dPageCustomHeight;
							jmethodID __method = __gr->getMethod("setCustomPageHeight_ev_real64_callback");
							__env->CallVoidMethod(__obj, __method , dPageCustomHeight_j);
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
							return this->IPage::setCustomPageHeight(dPageCustomHeight);
						}
					}
					virtual EarthView::World::Spatial::Carto::IPage* clone() const
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
							EarthView::World::Spatial::Carto::IPage *__values1 = (EarthView::World::Spatial::Carto::IPage*) __values1_j;
							return __values1;
						}
						else
						{
							return this->IPage::clone();
						}
					}
					virtual void toStream(EarthView::World::Core::CDataStream& stream) const
					{
						if (this->_gRef != NULL && this->m_toStream_CDataStream_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong stream_j = (jlong) &stream;
							jmethodID __method = __gr->getMethod("toStream_CDataStream_callback");
							__env->CallVoidMethod(__obj, __method , stream_j);
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
							return this->IPage::toStream(stream);
						}
					}
					virtual EVString toXML() const
					{
						if (this->_gRef != NULL && this->m_toXML_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("toXML_void_callback");
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
							return this->IPage::toXML();
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
							return this->IPage::fromXmlElement(element);
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
							return this->IPage::toXmlElement();
						}
					}
					virtual void fromStream(EarthView::World::Core::CDataStream& stream)
					{
						if (this->_gRef != NULL && this->m_fromStream_CDataStream_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong stream_j = (jlong) &stream;
							jmethodID __method = __gr->getMethod("fromStream_CDataStream_callback");
							__env->CallVoidMethod(__obj, __method , stream_j);
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
							return this->IPage::fromStream(stream);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JIPageProxy);
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_carto_Ipage_getPageType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::IPage *pObjectX = (EarthView::World::Spatial::Carto::IPage*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIPageProxy))
					{
						EarthView::World::Spatial::Carto::EVPageSize __values1 = pObjectX->EarthView::World::Spatial::Carto::IPage::getPageType();
						jint __values1_j = (jint) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Carto::EVPageSize __values1 = pObjectX->getPageType();
						jint __values1_j = (jint) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_Ipage_register_1getPageType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIPageProxy *pObjectX = (JIPageProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getPageType_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getPageType_void_callback", "()I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_carto_Ipage_getPageType_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::IPage *pObjectX = (EarthView::World::Spatial::Carto::IPage*) pObjXXXX;
					EarthView::World::Spatial::Carto::EVPageSize __values1 = pObjectX->EarthView::World::Spatial::Carto::IPage::getPageType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_Ipage_setPageType_1EVPageSize(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint type_j)
				{
					EarthView::World::Spatial::Carto::EVPageSize type = (EarthView::World::Spatial::Carto::EVPageSize) type_j;
					EarthView::World::Spatial::Carto::IPage *pObjectX = (EarthView::World::Spatial::Carto::IPage*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIPageProxy))
					{
						pObjectX->EarthView::World::Spatial::Carto::IPage::setPageType(type);
					}
					else
					{
						pObjectX->setPageType(type);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_Ipage_register_1setPageType_1EVPageSize(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIPageProxy *pObjectX = (JIPageProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setPageType_EVPageSize_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setPageType_EVPageSize_callback", "(I)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_Ipage_setPageType_1EVPageSize_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint type_j)
				{
					EarthView::World::Spatial::Carto::EVPageSize type = (EarthView::World::Spatial::Carto::EVPageSize) type_j;
					EarthView::World::Spatial::Carto::IPage *pObjectX = (EarthView::World::Spatial::Carto::IPage*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Carto::IPage::setPageType(type);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_carto_Ipage_getBoderSymbol_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::IPage *pObjectX = (EarthView::World::Spatial::Carto::IPage*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIPageProxy))
					{
						EarthView::World::Spatial::Display::ISymbol* __values1 = pObjectX->EarthView::World::Spatial::Carto::IPage::getBoderSymbol();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Display::ISymbol* __values1 = pObjectX->getBoderSymbol();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_Ipage_register_1getBoderSymbol_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIPageProxy *pObjectX = (JIPageProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getBoderSymbol_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getBoderSymbol_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_carto_Ipage_getBoderSymbol_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::IPage *pObjectX = (EarthView::World::Spatial::Carto::IPage*) pObjXXXX;
					EarthView::World::Spatial::Display::ISymbol* __values1 = pObjectX->EarthView::World::Spatial::Carto::IPage::getBoderSymbol();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_Ipage_setBoderSymbol_1ISymbol(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong boder_j)
				{
					EarthView::World::Spatial::Display::ISymbol *boder = (EarthView::World::Spatial::Display::ISymbol*) boder_j;
					EarthView::World::Spatial::Carto::IPage *pObjectX = (EarthView::World::Spatial::Carto::IPage*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIPageProxy))
					{
						pObjectX->EarthView::World::Spatial::Carto::IPage::setBoderSymbol(boder);
					}
					else
					{
						pObjectX->setBoderSymbol(boder);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_Ipage_register_1setBoderSymbol_1ISymbol(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIPageProxy *pObjectX = (JIPageProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setBoderSymbol_ISymbol_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setBoderSymbol_ISymbol_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_Ipage_setBoderSymbol_1ISymbol_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong boder_j)
				{
					EarthView::World::Spatial::Display::ISymbol *boder = (EarthView::World::Spatial::Display::ISymbol*) boder_j;
					EarthView::World::Spatial::Carto::IPage *pObjectX = (EarthView::World::Spatial::Carto::IPage*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Carto::IPage::setBoderSymbol(boder);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_carto_Ipage_getBackgroundColor_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::IPage *pObjectX = (EarthView::World::Spatial::Carto::IPage*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIPageProxy))
					{
						EarthView::World::Spatial::Display::IColor* __values1 = pObjectX->EarthView::World::Spatial::Carto::IPage::getBackgroundColor();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Display::IColor* __values1 = pObjectX->getBackgroundColor();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_Ipage_register_1getBackgroundColor_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIPageProxy *pObjectX = (JIPageProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getBackgroundColor_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getBackgroundColor_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_carto_Ipage_getBackgroundColor_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::IPage *pObjectX = (EarthView::World::Spatial::Carto::IPage*) pObjXXXX;
					EarthView::World::Spatial::Display::IColor* __values1 = pObjectX->EarthView::World::Spatial::Carto::IPage::getBackgroundColor();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_Ipage_setBackgroundColor_1IColor(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong background_j)
				{
					EarthView::World::Spatial::Display::IColor *background = (EarthView::World::Spatial::Display::IColor*) background_j;
					EarthView::World::Spatial::Carto::IPage *pObjectX = (EarthView::World::Spatial::Carto::IPage*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIPageProxy))
					{
						pObjectX->EarthView::World::Spatial::Carto::IPage::setBackgroundColor(background);
					}
					else
					{
						pObjectX->setBackgroundColor(background);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_Ipage_register_1setBackgroundColor_1IColor(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIPageProxy *pObjectX = (JIPageProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setBackgroundColor_IColor_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setBackgroundColor_IColor_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_Ipage_setBackgroundColor_1IColor_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong background_j)
				{
					EarthView::World::Spatial::Display::IColor *background = (EarthView::World::Spatial::Display::IColor*) background_j;
					EarthView::World::Spatial::Carto::IPage *pObjectX = (EarthView::World::Spatial::Carto::IPage*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Carto::IPage::setBackgroundColor(background);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_carto_Ipage_getShadowColor_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::IPage *pObjectX = (EarthView::World::Spatial::Carto::IPage*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIPageProxy))
					{
						EarthView::World::Spatial::Display::IColor* __values1 = pObjectX->EarthView::World::Spatial::Carto::IPage::getShadowColor();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Display::IColor* __values1 = pObjectX->getShadowColor();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_Ipage_register_1getShadowColor_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIPageProxy *pObjectX = (JIPageProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getShadowColor_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getShadowColor_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_carto_Ipage_getShadowColor_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::IPage *pObjectX = (EarthView::World::Spatial::Carto::IPage*) pObjXXXX;
					EarthView::World::Spatial::Display::IColor* __values1 = pObjectX->EarthView::World::Spatial::Carto::IPage::getShadowColor();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_Ipage_setShadowColor_1IColor(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pColor_j)
				{
					EarthView::World::Spatial::Display::IColor *pColor = (EarthView::World::Spatial::Display::IColor*) pColor_j;
					EarthView::World::Spatial::Carto::IPage *pObjectX = (EarthView::World::Spatial::Carto::IPage*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIPageProxy))
					{
						pObjectX->EarthView::World::Spatial::Carto::IPage::setShadowColor(pColor);
					}
					else
					{
						pObjectX->setShadowColor(pColor);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_Ipage_register_1setShadowColor_1IColor(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIPageProxy *pObjectX = (JIPageProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setShadowColor_IColor_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setShadowColor_IColor_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_Ipage_setShadowColor_1IColor_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pColor_j)
				{
					EarthView::World::Spatial::Display::IColor *pColor = (EarthView::World::Spatial::Display::IColor*) pColor_j;
					EarthView::World::Spatial::Carto::IPage *pObjectX = (EarthView::World::Spatial::Carto::IPage*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Carto::IPage::setShadowColor(pColor);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_carto_Ipage_getOrientation_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::IPage *pObjectX = (EarthView::World::Spatial::Carto::IPage*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIPageProxy))
					{
						EarthView::World::Spatial::Carto::EVPageOrientation __values1 = pObjectX->EarthView::World::Spatial::Carto::IPage::getOrientation();
						jint __values1_j = (jint) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Carto::EVPageOrientation __values1 = pObjectX->getOrientation();
						jint __values1_j = (jint) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_Ipage_register_1getOrientation_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIPageProxy *pObjectX = (JIPageProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getOrientation_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getOrientation_void_callback", "()I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_carto_Ipage_getOrientation_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::IPage *pObjectX = (EarthView::World::Spatial::Carto::IPage*) pObjXXXX;
					EarthView::World::Spatial::Carto::EVPageOrientation __values1 = pObjectX->EarthView::World::Spatial::Carto::IPage::getOrientation();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_Ipage_setPageSize_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble width_j, jdouble height_j)
				{
					ev_real64 width = (ev_real64) width_j;
					ev_real64 height = (ev_real64) height_j;
					EarthView::World::Spatial::Carto::IPage *pObjectX = (EarthView::World::Spatial::Carto::IPage*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIPageProxy))
					{
						pObjectX->EarthView::World::Spatial::Carto::IPage::setPageSize(width, height);
					}
					else
					{
						pObjectX->setPageSize(width, height);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_Ipage_register_1setPageSize_1ev_1real64_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIPageProxy *pObjectX = (JIPageProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setPageSize_ev_real64_ev_real64_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setPageSize_ev_real64_ev_real64_callback", "(DD)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_Ipage_setPageSize_1ev_1real64_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble width_j, jdouble height_j)
				{
					ev_real64 width = (ev_real64) width_j;
					ev_real64 height = (ev_real64) height_j;
					EarthView::World::Spatial::Carto::IPage *pObjectX = (EarthView::World::Spatial::Carto::IPage*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Carto::IPage::setPageSize(width, height);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_Ipage_setOrientation_1EVPageOrientation(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint oritention_j)
				{
					EarthView::World::Spatial::Carto::EVPageOrientation oritention = (EarthView::World::Spatial::Carto::EVPageOrientation) oritention_j;
					EarthView::World::Spatial::Carto::IPage *pObjectX = (EarthView::World::Spatial::Carto::IPage*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIPageProxy))
					{
						pObjectX->EarthView::World::Spatial::Carto::IPage::setOrientation(oritention);
					}
					else
					{
						pObjectX->setOrientation(oritention);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_Ipage_register_1setOrientation_1EVPageOrientation(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIPageProxy *pObjectX = (JIPageProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setOrientation_EVPageOrientation_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setOrientation_EVPageOrientation_callback", "(I)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_Ipage_setOrientation_1EVPageOrientation_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint oritention_j)
				{
					EarthView::World::Spatial::Carto::EVPageOrientation oritention = (EarthView::World::Spatial::Carto::EVPageOrientation) oritention_j;
					EarthView::World::Spatial::Carto::IPage *pObjectX = (EarthView::World::Spatial::Carto::IPage*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Carto::IPage::setOrientation(oritention);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_Ipage_queryPageSize_1ev_1real64_1ev_1real64_1EVPageUnits(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong width_j, jlong height_j, jlong pageUnit_j)
				{
					ev_real64 &width = *(ev_real64*) width_j;
					ev_real64 &height = *(ev_real64*) height_j;
					EarthView::World::Spatial::Carto::EVPageUnits &pageUnit = *(EarthView::World::Spatial::Carto::EVPageUnits*) pageUnit_j;
					EarthView::World::Spatial::Carto::IPage *pObjectX = (EarthView::World::Spatial::Carto::IPage*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIPageProxy))
					{
						pObjectX->EarthView::World::Spatial::Carto::IPage::queryPageSize(width, height, pageUnit);
					}
					else
					{
						pObjectX->queryPageSize(width, height, pageUnit);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_Ipage_register_1queryPageSize_1ev_1real64_1ev_1real64_1EVPageUnits(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIPageProxy *pObjectX = (JIPageProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_queryPageSize_ev_real64_ev_real64_EVPageUnits_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"queryPageSize_ev_real64_ev_real64_EVPageUnits_callback", "(JJJ)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_Ipage_queryPageSize_1ev_1real64_1ev_1real64_1EVPageUnits_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong width_j, jlong height_j, jlong pageUnit_j)
				{
					ev_real64 &width = *(ev_real64*) width_j;
					ev_real64 &height = *(ev_real64*) height_j;
					EarthView::World::Spatial::Carto::EVPageUnits &pageUnit = *(EarthView::World::Spatial::Carto::EVPageUnits*) pageUnit_j;
					EarthView::World::Spatial::Carto::IPage *pObjectX = (EarthView::World::Spatial::Carto::IPage*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Carto::IPage::queryPageSize(width, height, pageUnit);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_carto_Ipage_getPageUnits_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::IPage *pObjectX = (EarthView::World::Spatial::Carto::IPage*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIPageProxy))
					{
						EarthView::World::Spatial::Carto::EVPageUnits __values1 = pObjectX->EarthView::World::Spatial::Carto::IPage::getPageUnits();
						jint __values1_j = (jint) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Carto::EVPageUnits __values1 = pObjectX->getPageUnits();
						jint __values1_j = (jint) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_Ipage_register_1getPageUnits_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIPageProxy *pObjectX = (JIPageProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getPageUnits_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getPageUnits_void_callback", "()I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_carto_Ipage_getPageUnits_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::IPage *pObjectX = (EarthView::World::Spatial::Carto::IPage*) pObjXXXX;
					EarthView::World::Spatial::Carto::EVPageUnits __values1 = pObjectX->EarthView::World::Spatial::Carto::IPage::getPageUnits();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_Ipage_setPageUnits_1EVPageUnits(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint pageUnit_j)
				{
					EarthView::World::Spatial::Carto::EVPageUnits pageUnit = (EarthView::World::Spatial::Carto::EVPageUnits) pageUnit_j;
					EarthView::World::Spatial::Carto::IPage *pObjectX = (EarthView::World::Spatial::Carto::IPage*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIPageProxy))
					{
						pObjectX->EarthView::World::Spatial::Carto::IPage::setPageUnits(pageUnit);
					}
					else
					{
						pObjectX->setPageUnits(pageUnit);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_Ipage_register_1setPageUnits_1EVPageUnits(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIPageProxy *pObjectX = (JIPageProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setPageUnits_EVPageUnits_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setPageUnits_EVPageUnits_callback", "(I)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_Ipage_setPageUnits_1EVPageUnits_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint pageUnit_j)
				{
					EarthView::World::Spatial::Carto::EVPageUnits pageUnit = (EarthView::World::Spatial::Carto::EVPageUnits) pageUnit_j;
					EarthView::World::Spatial::Carto::IPage *pObjectX = (EarthView::World::Spatial::Carto::IPage*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Carto::IPage::setPageUnits(pageUnit);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_Ipage_draw_1ISpatialDisplay(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong display_j)
				{
					EarthView::World::Spatial::Display::ISpatialDisplay *display = (EarthView::World::Spatial::Display::ISpatialDisplay*) display_j;
					EarthView::World::Spatial::Carto::IPage *pObjectX = (EarthView::World::Spatial::Carto::IPage*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIPageProxy))
					{
						pObjectX->EarthView::World::Spatial::Carto::IPage::draw(display);
					}
					else
					{
						pObjectX->draw(display);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_Ipage_register_1draw_1ISpatialDisplay(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIPageProxy *pObjectX = (JIPageProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_draw_ISpatialDisplay_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"draw_ISpatialDisplay_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_Ipage_draw_1ISpatialDisplay_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong display_j)
				{
					EarthView::World::Spatial::Display::ISpatialDisplay *display = (EarthView::World::Spatial::Display::ISpatialDisplay*) display_j;
					EarthView::World::Spatial::Carto::IPage *pObjectX = (EarthView::World::Spatial::Carto::IPage*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Carto::IPage::draw(display);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_Ipage_setCustomPageWidth_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble dPageCustomWidth_j)
				{
					ev_real64 dPageCustomWidth = (ev_real64) dPageCustomWidth_j;
					EarthView::World::Spatial::Carto::IPage *pObjectX = (EarthView::World::Spatial::Carto::IPage*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIPageProxy))
					{
						pObjectX->EarthView::World::Spatial::Carto::IPage::setCustomPageWidth(dPageCustomWidth);
					}
					else
					{
						pObjectX->setCustomPageWidth(dPageCustomWidth);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_Ipage_register_1setCustomPageWidth_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIPageProxy *pObjectX = (JIPageProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setCustomPageWidth_ev_real64_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setCustomPageWidth_ev_real64_callback", "(D)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_Ipage_setCustomPageWidth_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble dPageCustomWidth_j)
				{
					ev_real64 dPageCustomWidth = (ev_real64) dPageCustomWidth_j;
					EarthView::World::Spatial::Carto::IPage *pObjectX = (EarthView::World::Spatial::Carto::IPage*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Carto::IPage::setCustomPageWidth(dPageCustomWidth);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_Ipage_setCustomPageHeight_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble dPageCustomHeight_j)
				{
					ev_real64 dPageCustomHeight = (ev_real64) dPageCustomHeight_j;
					EarthView::World::Spatial::Carto::IPage *pObjectX = (EarthView::World::Spatial::Carto::IPage*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIPageProxy))
					{
						pObjectX->EarthView::World::Spatial::Carto::IPage::setCustomPageHeight(dPageCustomHeight);
					}
					else
					{
						pObjectX->setCustomPageHeight(dPageCustomHeight);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_Ipage_register_1setCustomPageHeight_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIPageProxy *pObjectX = (JIPageProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setCustomPageHeight_ev_real64_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setCustomPageHeight_ev_real64_callback", "(D)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_Ipage_setCustomPageHeight_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble dPageCustomHeight_j)
				{
					ev_real64 dPageCustomHeight = (ev_real64) dPageCustomHeight_j;
					EarthView::World::Spatial::Carto::IPage *pObjectX = (EarthView::World::Spatial::Carto::IPage*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Carto::IPage::setCustomPageHeight(dPageCustomHeight);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_carto_Ipage_ev_1clone_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::IPage *pObjectX = (EarthView::World::Spatial::Carto::IPage*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIPageProxy))
					{
						EarthView::World::Spatial::Carto::IPage* __values1 = pObjectX->EarthView::World::Spatial::Carto::IPage::clone();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Carto::IPage* __values1 = pObjectX->clone();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_Ipage_register_1ev_1clone_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIPageProxy *pObjectX = (JIPageProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_carto_Ipage_ev_1clone_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::IPage *pObjectX = (EarthView::World::Spatial::Carto::IPage*) pObjXXXX;
					EarthView::World::Spatial::Carto::IPage* __values1 = pObjectX->EarthView::World::Spatial::Carto::IPage::clone();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_Ipage_toStream_1CDataStream(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j)
				{
					EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
					const 					EarthView::World::Spatial::Carto::IPage *pObjectX = (EarthView::World::Spatial::Carto::IPage*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIPageProxy))
					{
						pObjectX->EarthView::World::Spatial::Carto::IPage::toStream(stream);
					}
					else
					{
						pObjectX->toStream(stream);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_Ipage_register_1toStream_1CDataStream(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIPageProxy *pObjectX = (JIPageProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_toStream_CDataStream_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"toStream_CDataStream_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_Ipage_toStream_1CDataStream_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j)
				{
					EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
					const 					EarthView::World::Spatial::Carto::IPage *pObjectX = (EarthView::World::Spatial::Carto::IPage*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Carto::IPage::toStream(stream);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_carto_Ipage_toXML_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::IPage *pObjectX = (EarthView::World::Spatial::Carto::IPage*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIPageProxy))
					{
						EVString __values1 = pObjectX->EarthView::World::Spatial::Carto::IPage::toXML();
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
					else
					{
						EVString __values1 = pObjectX->toXML();
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_Ipage_register_1toXML_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIPageProxy *pObjectX = (JIPageProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_toXML_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"toXML_void_callback", "()Ljava/lang/String;");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_carto_Ipage_toXML_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::IPage *pObjectX = (EarthView::World::Spatial::Carto::IPage*) pObjXXXX;
					EVString __values1 = pObjectX->EarthView::World::Spatial::Carto::IPage::toXML();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_Ipage_fromXmlElement_1CXmlElement(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong element_j)
				{
					EarthView::World::Core::CXmlElement &element = *(EarthView::World::Core::CXmlElement*) element_j;
					EarthView::World::Spatial::Carto::IPage *pObjectX = (EarthView::World::Spatial::Carto::IPage*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIPageProxy))
					{
						pObjectX->EarthView::World::Spatial::Carto::IPage::fromXmlElement(element);
					}
					else
					{
						pObjectX->fromXmlElement(element);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_Ipage_register_1fromXmlElement_1CXmlElement(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIPageProxy *pObjectX = (JIPageProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_Ipage_fromXmlElement_1CXmlElement_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong element_j)
				{
					EarthView::World::Core::CXmlElement &element = *(EarthView::World::Core::CXmlElement*) element_j;
					EarthView::World::Spatial::Carto::IPage *pObjectX = (EarthView::World::Spatial::Carto::IPage*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Carto::IPage::fromXmlElement(element);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_carto_Ipage_toXmlElement_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::IPage *pObjectX = (EarthView::World::Spatial::Carto::IPage*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIPageProxy))
					{
						EarthView::World::Core::CXmlElement __values1 = pObjectX->EarthView::World::Spatial::Carto::IPage::toXmlElement();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_Ipage_register_1toXmlElement_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIPageProxy *pObjectX = (JIPageProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_carto_Ipage_toXmlElement_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::IPage *pObjectX = (EarthView::World::Spatial::Carto::IPage*) pObjXXXX;
					EarthView::World::Core::CXmlElement __values1 = pObjectX->EarthView::World::Spatial::Carto::IPage::toXmlElement();
					EarthView::World::Core::CXmlElement *returnvalues = new EarthView::World::Core::CXmlElement(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_Ipage_fromStream_1CDataStream(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j)
				{
					EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
					EarthView::World::Spatial::Carto::IPage *pObjectX = (EarthView::World::Spatial::Carto::IPage*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIPageProxy))
					{
						pObjectX->EarthView::World::Spatial::Carto::IPage::fromStream(stream);
					}
					else
					{
						pObjectX->fromStream(stream);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_Ipage_register_1fromStream_1CDataStream(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIPageProxy *pObjectX = (JIPageProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_fromStream_CDataStream_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"fromStream_CDataStream_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_Ipage_fromStream_1CDataStream_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j)
				{
					EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
					EarthView::World::Spatial::Carto::IPage *pObjectX = (EarthView::World::Spatial::Carto::IPage*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Carto::IPage::fromStream(stream);
				}
			}
		}
	}
}
