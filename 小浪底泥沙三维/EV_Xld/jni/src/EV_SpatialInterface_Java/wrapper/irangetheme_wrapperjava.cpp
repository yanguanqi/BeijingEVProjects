/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialinterface/irangetheme.h"
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
			namespace Theme
			{
				class JIRangeThemeProxy : public EarthView::World::Spatial::Theme::IRangeTheme
				{
				 private:
					EarthView::World::Core::ev_string m_getFieldString_void_callback;
					EarthView::World::Core::ev_string m_setFieldString_EVString_callback;
					EarthView::World::Core::ev_string m_getSubCaption_ev_real64_callback;
					EarthView::World::Core::ev_string m_setSubCaption_ev_real64_EVString_callback;
					EarthView::World::Core::ev_string m_getSymbol_ev_real64_callback;
					EarthView::World::Core::ev_string m_getSymbol_ev_uint32_callback;
					EarthView::World::Core::ev_string m_setSymbol_ev_real64_ISymbol_callback;
					EarthView::World::Core::ev_string m_addBreak_ev_real64_EVString_ISymbol_callback;
					EarthView::World::Core::ev_string m_removeBreak_ev_real64_callback;
					EarthView::World::Core::ev_string m_removeBreak_ev_uint32_callback;
					EarthView::World::Core::ev_string m_removeAll_void_callback;
					EarthView::World::Core::ev_string m_getBreakValue_ev_uint32_callback;
					EarthView::World::Core::ev_string m_getBreakCount_void_callback;
					EarthView::World::Core::ev_string m_getMaxValue_void_callback;
					EarthView::World::Core::ev_string m_getMinValue_void_callback;
					EarthView::World::Core::ev_string m_setMinValue_ev_real64_callback;
					EarthView::World::Core::ev_string m_getType_void_callback;
					EarthView::World::Core::ev_string m_getCaption_void_callback;
					EarthView::World::Core::ev_string m_setCaption_EVString_callback;
					EarthView::World::Core::ev_string m_useDefaultSymbol_void_callback;
					EarthView::World::Core::ev_string m_setUseDefaultSymbol_ev_bool_callback;
					EarthView::World::Core::ev_string m_getDefaultSymbol_void_callback;
					EarthView::World::Core::ev_string m_setDefaultSymbol_ISymbol_callback;
					EarthView::World::Core::ev_string m_ev_equals_ITheme_callback;
					EarthView::World::Core::ev_string m_ev_clone_void_callback;
					EarthView::World::Core::ev_string m_toStream_CDataStream_callback;
					EarthView::World::Core::ev_string m_toXmlElement_void_callback;
					EarthView::World::Core::ev_string m_fromXmlElement_CXmlElement_callback;
					EarthView::World::Core::ev_string m_onBeforeQuery_IFeatureClass_IQueryFilter_callback;
					EarthView::World::Core::ev_string m_onAfterQuery_IFeatureSelection_IGeometry_callback;
					EarthView::World::Core::ev_string m_fromStream_CDataStream_callback;
				public:
					JIRangeThemeProxy(EarthView::World::Core::CNameValuePairList *pList) : IRangeTheme(pList)
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
					void register_getFieldString_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getFieldString_void_callback = __method;
					}
					void register_setFieldString_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setFieldString_EVString_callback = __method;
					}
					void register_getSubCaption_ev_real64_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getSubCaption_ev_real64_callback = __method;
					}
					void register_setSubCaption_ev_real64_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setSubCaption_ev_real64_EVString_callback = __method;
					}
					void register_getSymbol_ev_real64_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getSymbol_ev_real64_callback = __method;
					}
					void register_getSymbol_ev_uint32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getSymbol_ev_uint32_callback = __method;
					}
					void register_setSymbol_ev_real64_ISymbol_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setSymbol_ev_real64_ISymbol_callback = __method;
					}
					void register_addBreak_ev_real64_EVString_ISymbol_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_addBreak_ev_real64_EVString_ISymbol_callback = __method;
					}
					void register_removeBreak_ev_real64_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_removeBreak_ev_real64_callback = __method;
					}
					void register_removeBreak_ev_uint32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_removeBreak_ev_uint32_callback = __method;
					}
					void register_removeAll_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_removeAll_void_callback = __method;
					}
					void register_getBreakValue_ev_uint32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getBreakValue_ev_uint32_callback = __method;
					}
					void register_getBreakCount_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getBreakCount_void_callback = __method;
					}
					void register_getMaxValue_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getMaxValue_void_callback = __method;
					}
					void register_getMinValue_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getMinValue_void_callback = __method;
					}
					void register_setMinValue_ev_real64_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setMinValue_ev_real64_callback = __method;
					}
					void register_getType_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getType_void_callback = __method;
					}
					void register_getCaption_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getCaption_void_callback = __method;
					}
					void register_setCaption_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setCaption_EVString_callback = __method;
					}
					void register_useDefaultSymbol_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_useDefaultSymbol_void_callback = __method;
					}
					void register_setUseDefaultSymbol_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setUseDefaultSymbol_ev_bool_callback = __method;
					}
					void register_getDefaultSymbol_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getDefaultSymbol_void_callback = __method;
					}
					void register_setDefaultSymbol_ISymbol_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setDefaultSymbol_ISymbol_callback = __method;
					}
					void register_ev_equals_ITheme_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_ev_equals_ITheme_callback = __method;
					}
					void register_ev_clone_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_ev_clone_void_callback = __method;
					}
					void register_toStream_CDataStream_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_toStream_CDataStream_callback = __method;
					}
					void register_toXmlElement_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_toXmlElement_void_callback = __method;
					}
					void register_fromXmlElement_CXmlElement_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_fromXmlElement_CXmlElement_callback = __method;
					}
					void register_onBeforeQuery_IFeatureClass_IQueryFilter_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onBeforeQuery_IFeatureClass_IQueryFilter_callback = __method;
					}
					void register_onAfterQuery_IFeatureSelection_IGeometry_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onAfterQuery_IFeatureSelection_IGeometry_callback = __method;
					}
					void register_fromStream_CDataStream_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_fromStream_CDataStream_callback = __method;
					}
					virtual EVString getFieldString() const
					{
						if (this->_gRef != NULL && this->m_getFieldString_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getFieldString_void_callback");
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
							return this->IRangeTheme::getFieldString();
						}
					}
					virtual void setFieldString(const EVString& field)
					{
						if (this->_gRef != NULL && this->m_setFieldString_EVString_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							EarthView::World::Core::ev_wstring field_wch = field;
							jstring field_j = __env->NewString((const jchar*)field_wch.getString(), field_wch.size());
							jmethodID __method = __gr->getMethod("setFieldString_EVString_callback");
							__env->CallVoidMethod(__obj, __method , field_j);
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
							return this->IRangeTheme::setFieldString(field);
						}
					}
					virtual EVString getSubCaption(ev_real64 value) const
					{
						if (this->_gRef != NULL && this->m_getSubCaption_ev_real64_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jdouble value_j = (jdouble) value;
							jmethodID __method = __gr->getMethod("getSubCaption_ev_real64_callback");
							jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method , value_j);
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
							return this->IRangeTheme::getSubCaption(value);
						}
					}
					virtual void setSubCaption(ev_real64 value, const EVString& subCaption)
					{
						if (this->_gRef != NULL && this->m_setSubCaption_ev_real64_EVString_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jdouble value_j = (jdouble) value;
							EarthView::World::Core::ev_wstring subCaption_wch = subCaption;
							jstring subCaption_j = __env->NewString((const jchar*)subCaption_wch.getString(), subCaption_wch.size());
							jmethodID __method = __gr->getMethod("setSubCaption_ev_real64_EVString_callback");
							__env->CallVoidMethod(__obj, __method , value_j, subCaption_j);
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
							return this->IRangeTheme::setSubCaption(value, subCaption);
						}
					}
					virtual EarthView::World::Spatial::Display::ISymbol* getSymbol(ev_real64 value) const
					{
						if (this->_gRef != NULL && this->m_getSymbol_ev_real64_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jdouble value_j = (jdouble) value;
							jmethodID __method = __gr->getMethod("getSymbol_ev_real64_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , value_j);
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
							return this->IRangeTheme::getSymbol(value);
						}
					}
					virtual EarthView::World::Spatial::Display::ISymbol* getSymbol(ev_uint32 index) const
					{
						if (this->_gRef != NULL && this->m_getSymbol_ev_uint32_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong index_j = (jlong) index;
							jmethodID __method = __gr->getMethod("getSymbol_ev_uint32_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , index_j);
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
							return this->IRangeTheme::getSymbol(index);
						}
					}
					virtual void setSymbol(ev_real64 value, const EarthView::World::Spatial::Display::ISymbol* symbol)
					{
						if (this->_gRef != NULL && this->m_setSymbol_ev_real64_ISymbol_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jdouble value_j = (jdouble) value;
							jlong symbol_j = (jlong) symbol;
							jmethodID __method = __gr->getMethod("setSymbol_ev_real64_ISymbol_callback");
							__env->CallVoidMethod(__obj, __method , value_j, symbol_j);
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
							return this->IRangeTheme::setSymbol(value, symbol);
						}
					}
					virtual void addBreak(ev_real64 value, const EVString& subCaption, const EarthView::World::Spatial::Display::ISymbol* symbol)
					{
						if (this->_gRef != NULL && this->m_addBreak_ev_real64_EVString_ISymbol_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jdouble value_j = (jdouble) value;
							EarthView::World::Core::ev_wstring subCaption_wch = subCaption;
							jstring subCaption_j = __env->NewString((const jchar*)subCaption_wch.getString(), subCaption_wch.size());
							jlong symbol_j = (jlong) symbol;
							jmethodID __method = __gr->getMethod("addBreak_ev_real64_EVString_ISymbol_callback");
							__env->CallVoidMethod(__obj, __method , value_j, subCaption_j, symbol_j);
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
							return this->IRangeTheme::addBreak(value, subCaption, symbol);
						}
					}
					virtual void removeBreak(ev_real64 value)
					{
						if (this->_gRef != NULL && this->m_removeBreak_ev_real64_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jdouble value_j = (jdouble) value;
							jmethodID __method = __gr->getMethod("removeBreak_ev_real64_callback");
							__env->CallVoidMethod(__obj, __method , value_j);
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
							return this->IRangeTheme::removeBreak(value);
						}
					}
					virtual void removeBreak(ev_uint32 index)
					{
						if (this->_gRef != NULL && this->m_removeBreak_ev_uint32_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong index_j = (jlong) index;
							jmethodID __method = __gr->getMethod("removeBreak_ev_uint32_callback");
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
							return this->IRangeTheme::removeBreak(index);
						}
					}
					virtual void removeAll()
					{
						if (this->_gRef != NULL && this->m_removeAll_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("removeAll_void_callback");
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
							return this->IRangeTheme::removeAll();
						}
					}
					virtual ev_real64 getBreakValue(ev_uint32 index) const
					{
						if (this->_gRef != NULL && this->m_getBreakValue_ev_uint32_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong index_j = (jlong) index;
							jmethodID __method = __gr->getMethod("getBreakValue_ev_uint32_callback");
							jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method , index_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_real64 __values1 = (ev_real64) __values1_j;
							return __values1;
						}
						else
						{
							return this->IRangeTheme::getBreakValue(index);
						}
					}
					virtual ev_uint32 getBreakCount() const
					{
						if (this->_gRef != NULL && this->m_getBreakCount_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getBreakCount_void_callback");
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
							return this->IRangeTheme::getBreakCount();
						}
					}
					virtual ev_real64 getMaxValue() const
					{
						if (this->_gRef != NULL && this->m_getMaxValue_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getMaxValue_void_callback");
							jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_real64 __values1 = (ev_real64) __values1_j;
							return __values1;
						}
						else
						{
							return this->IRangeTheme::getMaxValue();
						}
					}
					virtual ev_real64 getMinValue() const
					{
						if (this->_gRef != NULL && this->m_getMinValue_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getMinValue_void_callback");
							jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_real64 __values1 = (ev_real64) __values1_j;
							return __values1;
						}
						else
						{
							return this->IRangeTheme::getMinValue();
						}
					}
					virtual void setMinValue(ev_real64 minValue)
					{
						if (this->_gRef != NULL && this->m_setMinValue_ev_real64_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jdouble minValue_j = (jdouble) minValue;
							jmethodID __method = __gr->getMethod("setMinValue_ev_real64_callback");
							__env->CallVoidMethod(__obj, __method , minValue_j);
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
							return this->IRangeTheme::setMinValue(minValue);
						}
					}
					virtual EarthView::World::Spatial::Theme::EVThemeType getType() const
					{
						if (this->_gRef != NULL && this->m_getType_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getType_void_callback");
							jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::Theme::EVThemeType __values1 = (EarthView::World::Spatial::Theme::EVThemeType) __values1_j;
							return __values1;
						}
						else
						{
							return this->IRangeTheme::getType();
						}
					}
					virtual EVString getCaption() const
					{
						if (this->_gRef != NULL && this->m_getCaption_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getCaption_void_callback");
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
							return this->IRangeTheme::getCaption();
						}
					}
					virtual void setCaption(const EVString& caption)
					{
						if (this->_gRef != NULL && this->m_setCaption_EVString_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							EarthView::World::Core::ev_wstring caption_wch = caption;
							jstring caption_j = __env->NewString((const jchar*)caption_wch.getString(), caption_wch.size());
							jmethodID __method = __gr->getMethod("setCaption_EVString_callback");
							__env->CallVoidMethod(__obj, __method , caption_j);
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
							return this->IRangeTheme::setCaption(caption);
						}
					}
					virtual ev_bool useDefaultSymbol() const
					{
						if (this->_gRef != NULL && this->m_useDefaultSymbol_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("useDefaultSymbol_void_callback");
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
							return this->IRangeTheme::useDefaultSymbol();
						}
					}
					virtual void setUseDefaultSymbol(ev_bool usable)
					{
						if (this->_gRef != NULL && this->m_setUseDefaultSymbol_ev_bool_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jboolean usable_j = (jboolean) usable;
							jmethodID __method = __gr->getMethod("setUseDefaultSymbol_ev_bool_callback");
							__env->CallVoidMethod(__obj, __method , usable_j);
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
							return this->IRangeTheme::setUseDefaultSymbol(usable);
						}
					}
					virtual EarthView::World::Spatial::Display::ISymbol* getDefaultSymbol() const
					{
						if (this->_gRef != NULL && this->m_getDefaultSymbol_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getDefaultSymbol_void_callback");
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
							return this->IRangeTheme::getDefaultSymbol();
						}
					}
					virtual void setDefaultSymbol(const EarthView::World::Spatial::Display::ISymbol* symbol)
					{
						if (this->_gRef != NULL && this->m_setDefaultSymbol_ISymbol_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong symbol_j = (jlong) symbol;
							jmethodID __method = __gr->getMethod("setDefaultSymbol_ISymbol_callback");
							__env->CallVoidMethod(__obj, __method , symbol_j);
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
							return this->IRangeTheme::setDefaultSymbol(symbol);
						}
					}
					virtual ev_bool equals(const EarthView::World::Spatial::Theme::ITheme* theme)
					{
						if (this->_gRef != NULL && this->m_ev_equals_ITheme_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong theme_j = (jlong) theme;
							jmethodID __method = __gr->getMethod("ev_equals_ITheme_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , theme_j);
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
							return this->IRangeTheme::equals(theme);
						}
					}
					virtual EarthView::World::Spatial::Theme::ITheme* clone() const
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
							EarthView::World::Spatial::Theme::ITheme *__values1 = (EarthView::World::Spatial::Theme::ITheme*) __values1_j;
							return __values1;
						}
						else
						{
							return this->IRangeTheme::clone();
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
							return this->IRangeTheme::toStream(stream);
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
							return this->IRangeTheme::toXmlElement();
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
							return this->IRangeTheme::fromXmlElement(element);
						}
					}
					virtual void onBeforeQuery(EarthView::World::Spatial::GeoDataset::IFeatureClass* fc, EarthView::World::Spatial::GeoDataset::IQueryFilter* filter)
					{
						if (this->_gRef != NULL && this->m_onBeforeQuery_IFeatureClass_IQueryFilter_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong fc_j = (jlong) fc;
							jlong filter_j = (jlong) filter;
							jmethodID __method = __gr->getMethod("onBeforeQuery_IFeatureClass_IQueryFilter_callback");
							__env->CallVoidMethod(__obj, __method , fc_j, filter_j);
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
							return this->IRangeTheme::onBeforeQuery(fc, filter);
						}
					}
					virtual void onAfterQuery(EarthView::World::Spatial::GeoDataset::IFeatureSelection* fs, EarthView::World::Spatial::Geometry::IGeometry* dst)
					{
						if (this->_gRef != NULL && this->m_onAfterQuery_IFeatureSelection_IGeometry_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong fs_j = (jlong) fs;
							jlong dst_j = (jlong) dst;
							jmethodID __method = __gr->getMethod("onAfterQuery_IFeatureSelection_IGeometry_callback");
							__env->CallVoidMethod(__obj, __method , fs_j, dst_j);
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
							return this->IRangeTheme::onAfterQuery(fs, dst);
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
							return this->IRangeTheme::fromStream(stream);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JIRangeThemeProxy);
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_theme_Irangetheme_getFieldString_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Theme::IRangeTheme *pObjectX = (EarthView::World::Spatial::Theme::IRangeTheme*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIRangeThemeProxy))
					{
						EVString __values1 = pObjectX->EarthView::World::Spatial::Theme::IRangeTheme::getFieldString();
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
					else
					{
						EVString __values1 = pObjectX->getFieldString();
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Irangetheme_register_1getFieldString_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIRangeThemeProxy *pObjectX = (JIRangeThemeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getFieldString_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getFieldString_void_callback", "()Ljava/lang/String;");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_theme_Irangetheme_getFieldString_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Theme::IRangeTheme *pObjectX = (EarthView::World::Spatial::Theme::IRangeTheme*) pObjXXXX;
					EVString __values1 = pObjectX->EarthView::World::Spatial::Theme::IRangeTheme::getFieldString();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Irangetheme_setFieldString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring field_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* field_ch = (const ev_char*)__env->GetStringUTFChars(field_j,JNI_FALSE);
					const EVString field = field_ch;
					__env->ReleaseStringUTFChars(field_j, (const char *)field_ch);
					#else
					const ev_wchar* field_ch = (const ev_wchar*)__env->GetStringChars(field_j,JNI_FALSE);
					const EVString field = field_ch;
					__env->ReleaseStringChars(field_j, (const jchar *)field_ch);
					#endif
					EarthView::World::Spatial::Theme::IRangeTheme *pObjectX = (EarthView::World::Spatial::Theme::IRangeTheme*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIRangeThemeProxy))
					{
						pObjectX->EarthView::World::Spatial::Theme::IRangeTheme::setFieldString(field);
					}
					else
					{
						pObjectX->setFieldString(field);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Irangetheme_register_1setFieldString_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIRangeThemeProxy *pObjectX = (JIRangeThemeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setFieldString_EVString_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setFieldString_EVString_callback", "(Ljava/lang/String;)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Irangetheme_setFieldString_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring field_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* field_ch = (const ev_char*)__env->GetStringUTFChars(field_j,JNI_FALSE);
					const EVString field = field_ch;
					__env->ReleaseStringUTFChars(field_j, (const char *)field_ch);
					#else
					const ev_wchar* field_ch = (const ev_wchar*)__env->GetStringChars(field_j,JNI_FALSE);
					const EVString field = field_ch;
					__env->ReleaseStringChars(field_j, (const jchar *)field_ch);
					#endif
					EarthView::World::Spatial::Theme::IRangeTheme *pObjectX = (EarthView::World::Spatial::Theme::IRangeTheme*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Theme::IRangeTheme::setFieldString(field);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_theme_Irangetheme_getSubCaption_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble value_j)
				{
					ev_real64 value = (ev_real64) value_j;
					const 					EarthView::World::Spatial::Theme::IRangeTheme *pObjectX = (EarthView::World::Spatial::Theme::IRangeTheme*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIRangeThemeProxy))
					{
						EVString __values1 = pObjectX->EarthView::World::Spatial::Theme::IRangeTheme::getSubCaption(value);
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
					else
					{
						EVString __values1 = pObjectX->getSubCaption(value);
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Irangetheme_register_1getSubCaption_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIRangeThemeProxy *pObjectX = (JIRangeThemeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getSubCaption_ev_real64_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getSubCaption_ev_real64_callback", "(D)Ljava/lang/String;");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_theme_Irangetheme_getSubCaption_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble value_j)
				{
					ev_real64 value = (ev_real64) value_j;
					const 					EarthView::World::Spatial::Theme::IRangeTheme *pObjectX = (EarthView::World::Spatial::Theme::IRangeTheme*) pObjXXXX;
					EVString __values1 = pObjectX->EarthView::World::Spatial::Theme::IRangeTheme::getSubCaption(value);
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Irangetheme_setSubCaption_1ev_1real64_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble value_j, jstring subCaption_j)
				{
					ev_real64 value = (ev_real64) value_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* subCaption_ch = (const ev_char*)__env->GetStringUTFChars(subCaption_j,JNI_FALSE);
					const EVString subCaption = subCaption_ch;
					__env->ReleaseStringUTFChars(subCaption_j, (const char *)subCaption_ch);
					#else
					const ev_wchar* subCaption_ch = (const ev_wchar*)__env->GetStringChars(subCaption_j,JNI_FALSE);
					const EVString subCaption = subCaption_ch;
					__env->ReleaseStringChars(subCaption_j, (const jchar *)subCaption_ch);
					#endif
					EarthView::World::Spatial::Theme::IRangeTheme *pObjectX = (EarthView::World::Spatial::Theme::IRangeTheme*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIRangeThemeProxy))
					{
						pObjectX->EarthView::World::Spatial::Theme::IRangeTheme::setSubCaption(value, subCaption);
					}
					else
					{
						pObjectX->setSubCaption(value, subCaption);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Irangetheme_register_1setSubCaption_1ev_1real64_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIRangeThemeProxy *pObjectX = (JIRangeThemeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setSubCaption_ev_real64_EVString_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setSubCaption_ev_real64_EVString_callback", "(DLjava/lang/String;)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Irangetheme_setSubCaption_1ev_1real64_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble value_j, jstring subCaption_j)
				{
					ev_real64 value = (ev_real64) value_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* subCaption_ch = (const ev_char*)__env->GetStringUTFChars(subCaption_j,JNI_FALSE);
					const EVString subCaption = subCaption_ch;
					__env->ReleaseStringUTFChars(subCaption_j, (const char *)subCaption_ch);
					#else
					const ev_wchar* subCaption_ch = (const ev_wchar*)__env->GetStringChars(subCaption_j,JNI_FALSE);
					const EVString subCaption = subCaption_ch;
					__env->ReleaseStringChars(subCaption_j, (const jchar *)subCaption_ch);
					#endif
					EarthView::World::Spatial::Theme::IRangeTheme *pObjectX = (EarthView::World::Spatial::Theme::IRangeTheme*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Theme::IRangeTheme::setSubCaption(value, subCaption);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_theme_Irangetheme_getSymbol_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble value_j)
				{
					ev_real64 value = (ev_real64) value_j;
					const 					EarthView::World::Spatial::Theme::IRangeTheme *pObjectX = (EarthView::World::Spatial::Theme::IRangeTheme*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIRangeThemeProxy))
					{
						EarthView::World::Spatial::Display::ISymbol* __values1 = pObjectX->EarthView::World::Spatial::Theme::IRangeTheme::getSymbol(value);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Display::ISymbol* __values1 = pObjectX->getSymbol(value);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Irangetheme_register_1getSymbol_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIRangeThemeProxy *pObjectX = (JIRangeThemeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getSymbol_ev_real64_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getSymbol_ev_real64_callback", "(D)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_theme_Irangetheme_getSymbol_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble value_j)
				{
					ev_real64 value = (ev_real64) value_j;
					const 					EarthView::World::Spatial::Theme::IRangeTheme *pObjectX = (EarthView::World::Spatial::Theme::IRangeTheme*) pObjXXXX;
					EarthView::World::Spatial::Display::ISymbol* __values1 = pObjectX->EarthView::World::Spatial::Theme::IRangeTheme::getSymbol(value);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_theme_Irangetheme_getSymbol_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					const 					EarthView::World::Spatial::Theme::IRangeTheme *pObjectX = (EarthView::World::Spatial::Theme::IRangeTheme*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIRangeThemeProxy))
					{
						EarthView::World::Spatial::Display::ISymbol* __values1 = pObjectX->EarthView::World::Spatial::Theme::IRangeTheme::getSymbol(index);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Display::ISymbol* __values1 = pObjectX->getSymbol(index);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Irangetheme_register_1getSymbol_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIRangeThemeProxy *pObjectX = (JIRangeThemeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getSymbol_ev_uint32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getSymbol_ev_uint32_callback", "(J)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_theme_Irangetheme_getSymbol_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					const 					EarthView::World::Spatial::Theme::IRangeTheme *pObjectX = (EarthView::World::Spatial::Theme::IRangeTheme*) pObjXXXX;
					EarthView::World::Spatial::Display::ISymbol* __values1 = pObjectX->EarthView::World::Spatial::Theme::IRangeTheme::getSymbol(index);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Irangetheme_setSymbol_1ev_1real64_1ISymbol(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble value_j, jlong symbol_j)
				{
					ev_real64 value = (ev_real64) value_j;
					const EarthView::World::Spatial::Display::ISymbol *symbol = (const EarthView::World::Spatial::Display::ISymbol*) symbol_j;
					EarthView::World::Spatial::Theme::IRangeTheme *pObjectX = (EarthView::World::Spatial::Theme::IRangeTheme*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIRangeThemeProxy))
					{
						pObjectX->EarthView::World::Spatial::Theme::IRangeTheme::setSymbol(value, symbol);
					}
					else
					{
						pObjectX->setSymbol(value, symbol);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Irangetheme_register_1setSymbol_1ev_1real64_1ISymbol(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIRangeThemeProxy *pObjectX = (JIRangeThemeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setSymbol_ev_real64_ISymbol_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setSymbol_ev_real64_ISymbol_callback", "(DJ)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Irangetheme_setSymbol_1ev_1real64_1ISymbol_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble value_j, jlong symbol_j)
				{
					ev_real64 value = (ev_real64) value_j;
					const EarthView::World::Spatial::Display::ISymbol *symbol = (const EarthView::World::Spatial::Display::ISymbol*) symbol_j;
					EarthView::World::Spatial::Theme::IRangeTheme *pObjectX = (EarthView::World::Spatial::Theme::IRangeTheme*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Theme::IRangeTheme::setSymbol(value, symbol);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Irangetheme_addBreak_1ev_1real64_1EVString_1ISymbol(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble value_j, jstring subCaption_j, jlong symbol_j)
				{
					ev_real64 value = (ev_real64) value_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* subCaption_ch = (const ev_char*)__env->GetStringUTFChars(subCaption_j,JNI_FALSE);
					const EVString subCaption = subCaption_ch;
					__env->ReleaseStringUTFChars(subCaption_j, (const char *)subCaption_ch);
					#else
					const ev_wchar* subCaption_ch = (const ev_wchar*)__env->GetStringChars(subCaption_j,JNI_FALSE);
					const EVString subCaption = subCaption_ch;
					__env->ReleaseStringChars(subCaption_j, (const jchar *)subCaption_ch);
					#endif
					const EarthView::World::Spatial::Display::ISymbol *symbol = (const EarthView::World::Spatial::Display::ISymbol*) symbol_j;
					EarthView::World::Spatial::Theme::IRangeTheme *pObjectX = (EarthView::World::Spatial::Theme::IRangeTheme*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIRangeThemeProxy))
					{
						pObjectX->EarthView::World::Spatial::Theme::IRangeTheme::addBreak(value, subCaption, symbol);
					}
					else
					{
						pObjectX->addBreak(value, subCaption, symbol);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Irangetheme_register_1addBreak_1ev_1real64_1EVString_1ISymbol(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIRangeThemeProxy *pObjectX = (JIRangeThemeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_addBreak_ev_real64_EVString_ISymbol_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"addBreak_ev_real64_EVString_ISymbol_callback", "(DLjava/lang/String;J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Irangetheme_addBreak_1ev_1real64_1EVString_1ISymbol_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble value_j, jstring subCaption_j, jlong symbol_j)
				{
					ev_real64 value = (ev_real64) value_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* subCaption_ch = (const ev_char*)__env->GetStringUTFChars(subCaption_j,JNI_FALSE);
					const EVString subCaption = subCaption_ch;
					__env->ReleaseStringUTFChars(subCaption_j, (const char *)subCaption_ch);
					#else
					const ev_wchar* subCaption_ch = (const ev_wchar*)__env->GetStringChars(subCaption_j,JNI_FALSE);
					const EVString subCaption = subCaption_ch;
					__env->ReleaseStringChars(subCaption_j, (const jchar *)subCaption_ch);
					#endif
					const EarthView::World::Spatial::Display::ISymbol *symbol = (const EarthView::World::Spatial::Display::ISymbol*) symbol_j;
					EarthView::World::Spatial::Theme::IRangeTheme *pObjectX = (EarthView::World::Spatial::Theme::IRangeTheme*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Theme::IRangeTheme::addBreak(value, subCaption, symbol);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Irangetheme_removeBreak_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble value_j)
				{
					ev_real64 value = (ev_real64) value_j;
					EarthView::World::Spatial::Theme::IRangeTheme *pObjectX = (EarthView::World::Spatial::Theme::IRangeTheme*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIRangeThemeProxy))
					{
						pObjectX->EarthView::World::Spatial::Theme::IRangeTheme::removeBreak(value);
					}
					else
					{
						pObjectX->removeBreak(value);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Irangetheme_register_1removeBreak_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIRangeThemeProxy *pObjectX = (JIRangeThemeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_removeBreak_ev_real64_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"removeBreak_ev_real64_callback", "(D)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Irangetheme_removeBreak_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble value_j)
				{
					ev_real64 value = (ev_real64) value_j;
					EarthView::World::Spatial::Theme::IRangeTheme *pObjectX = (EarthView::World::Spatial::Theme::IRangeTheme*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Theme::IRangeTheme::removeBreak(value);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Irangetheme_removeBreak_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					EarthView::World::Spatial::Theme::IRangeTheme *pObjectX = (EarthView::World::Spatial::Theme::IRangeTheme*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIRangeThemeProxy))
					{
						pObjectX->EarthView::World::Spatial::Theme::IRangeTheme::removeBreak(index);
					}
					else
					{
						pObjectX->removeBreak(index);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Irangetheme_register_1removeBreak_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIRangeThemeProxy *pObjectX = (JIRangeThemeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_removeBreak_ev_uint32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"removeBreak_ev_uint32_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Irangetheme_removeBreak_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					EarthView::World::Spatial::Theme::IRangeTheme *pObjectX = (EarthView::World::Spatial::Theme::IRangeTheme*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Theme::IRangeTheme::removeBreak(index);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Irangetheme_removeAll_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Theme::IRangeTheme *pObjectX = (EarthView::World::Spatial::Theme::IRangeTheme*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIRangeThemeProxy))
					{
						pObjectX->EarthView::World::Spatial::Theme::IRangeTheme::removeAll();
					}
					else
					{
						pObjectX->removeAll();
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Irangetheme_register_1removeAll_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIRangeThemeProxy *pObjectX = (JIRangeThemeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_removeAll_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"removeAll_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Irangetheme_removeAll_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Theme::IRangeTheme *pObjectX = (EarthView::World::Spatial::Theme::IRangeTheme*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Theme::IRangeTheme::removeAll();
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_theme_Irangetheme_getBreakValue_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					const 					EarthView::World::Spatial::Theme::IRangeTheme *pObjectX = (EarthView::World::Spatial::Theme::IRangeTheme*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIRangeThemeProxy))
					{
						ev_real64 __values1 = pObjectX->EarthView::World::Spatial::Theme::IRangeTheme::getBreakValue(index);
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
					else
					{
						ev_real64 __values1 = pObjectX->getBreakValue(index);
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Irangetheme_register_1getBreakValue_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIRangeThemeProxy *pObjectX = (JIRangeThemeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getBreakValue_ev_uint32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getBreakValue_ev_uint32_callback", "(J)D");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_theme_Irangetheme_getBreakValue_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					const 					EarthView::World::Spatial::Theme::IRangeTheme *pObjectX = (EarthView::World::Spatial::Theme::IRangeTheme*) pObjXXXX;
					ev_real64 __values1 = pObjectX->EarthView::World::Spatial::Theme::IRangeTheme::getBreakValue(index);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_theme_Irangetheme_getBreakCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Theme::IRangeTheme *pObjectX = (EarthView::World::Spatial::Theme::IRangeTheme*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIRangeThemeProxy))
					{
						ev_uint32 __values1 = pObjectX->EarthView::World::Spatial::Theme::IRangeTheme::getBreakCount();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						ev_uint32 __values1 = pObjectX->getBreakCount();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Irangetheme_register_1getBreakCount_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIRangeThemeProxy *pObjectX = (JIRangeThemeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getBreakCount_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getBreakCount_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_theme_Irangetheme_getBreakCount_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Theme::IRangeTheme *pObjectX = (EarthView::World::Spatial::Theme::IRangeTheme*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->EarthView::World::Spatial::Theme::IRangeTheme::getBreakCount();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_theme_Irangetheme_getMaxValue_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Theme::IRangeTheme *pObjectX = (EarthView::World::Spatial::Theme::IRangeTheme*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIRangeThemeProxy))
					{
						ev_real64 __values1 = pObjectX->EarthView::World::Spatial::Theme::IRangeTheme::getMaxValue();
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
					else
					{
						ev_real64 __values1 = pObjectX->getMaxValue();
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Irangetheme_register_1getMaxValue_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIRangeThemeProxy *pObjectX = (JIRangeThemeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getMaxValue_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getMaxValue_void_callback", "()D");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_theme_Irangetheme_getMaxValue_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Theme::IRangeTheme *pObjectX = (EarthView::World::Spatial::Theme::IRangeTheme*) pObjXXXX;
					ev_real64 __values1 = pObjectX->EarthView::World::Spatial::Theme::IRangeTheme::getMaxValue();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_theme_Irangetheme_getMinValue_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Theme::IRangeTheme *pObjectX = (EarthView::World::Spatial::Theme::IRangeTheme*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIRangeThemeProxy))
					{
						ev_real64 __values1 = pObjectX->EarthView::World::Spatial::Theme::IRangeTheme::getMinValue();
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
					else
					{
						ev_real64 __values1 = pObjectX->getMinValue();
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Irangetheme_register_1getMinValue_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIRangeThemeProxy *pObjectX = (JIRangeThemeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getMinValue_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getMinValue_void_callback", "()D");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_theme_Irangetheme_getMinValue_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Theme::IRangeTheme *pObjectX = (EarthView::World::Spatial::Theme::IRangeTheme*) pObjXXXX;
					ev_real64 __values1 = pObjectX->EarthView::World::Spatial::Theme::IRangeTheme::getMinValue();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Irangetheme_setMinValue_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble minValue_j)
				{
					ev_real64 minValue = (ev_real64) minValue_j;
					EarthView::World::Spatial::Theme::IRangeTheme *pObjectX = (EarthView::World::Spatial::Theme::IRangeTheme*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIRangeThemeProxy))
					{
						pObjectX->EarthView::World::Spatial::Theme::IRangeTheme::setMinValue(minValue);
					}
					else
					{
						pObjectX->setMinValue(minValue);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Irangetheme_register_1setMinValue_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIRangeThemeProxy *pObjectX = (JIRangeThemeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setMinValue_ev_real64_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setMinValue_ev_real64_callback", "(D)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Irangetheme_setMinValue_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble minValue_j)
				{
					ev_real64 minValue = (ev_real64) minValue_j;
					EarthView::World::Spatial::Theme::IRangeTheme *pObjectX = (EarthView::World::Spatial::Theme::IRangeTheme*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Theme::IRangeTheme::setMinValue(minValue);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Irangetheme_register_1getType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIRangeThemeProxy *pObjectX = (JIRangeThemeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getType_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getType_void_callback", "()I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Irangetheme_register_1getCaption_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIRangeThemeProxy *pObjectX = (JIRangeThemeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getCaption_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getCaption_void_callback", "()Ljava/lang/String;");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Irangetheme_register_1setCaption_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIRangeThemeProxy *pObjectX = (JIRangeThemeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setCaption_EVString_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setCaption_EVString_callback", "(Ljava/lang/String;)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Irangetheme_register_1useDefaultSymbol_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIRangeThemeProxy *pObjectX = (JIRangeThemeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_useDefaultSymbol_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"useDefaultSymbol_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Irangetheme_register_1setUseDefaultSymbol_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIRangeThemeProxy *pObjectX = (JIRangeThemeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setUseDefaultSymbol_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setUseDefaultSymbol_ev_bool_callback", "(Z)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Irangetheme_register_1getDefaultSymbol_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIRangeThemeProxy *pObjectX = (JIRangeThemeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getDefaultSymbol_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getDefaultSymbol_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Irangetheme_register_1setDefaultSymbol_1ISymbol(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIRangeThemeProxy *pObjectX = (JIRangeThemeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setDefaultSymbol_ISymbol_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setDefaultSymbol_ISymbol_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Irangetheme_register_1ev_1equals_1ITheme(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIRangeThemeProxy *pObjectX = (JIRangeThemeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_ev_equals_ITheme_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"ev_equals_ITheme_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Irangetheme_register_1ev_1clone_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIRangeThemeProxy *pObjectX = (JIRangeThemeProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Irangetheme_register_1toStream_1CDataStream(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIRangeThemeProxy *pObjectX = (JIRangeThemeProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Irangetheme_register_1toXmlElement_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIRangeThemeProxy *pObjectX = (JIRangeThemeProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Irangetheme_register_1fromXmlElement_1CXmlElement(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIRangeThemeProxy *pObjectX = (JIRangeThemeProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Irangetheme_register_1onBeforeQuery_1IFeatureClass_1IQueryFilter(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIRangeThemeProxy *pObjectX = (JIRangeThemeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onBeforeQuery_IFeatureClass_IQueryFilter_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onBeforeQuery_IFeatureClass_IQueryFilter_callback", "(JJ)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Irangetheme_register_1onAfterQuery_1IFeatureSelection_1IGeometry(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIRangeThemeProxy *pObjectX = (JIRangeThemeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onAfterQuery_IFeatureSelection_IGeometry_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onAfterQuery_IFeatureSelection_IGeometry_callback", "(JJ)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Irangetheme_register_1fromStream_1CDataStream(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIRangeThemeProxy *pObjectX = (JIRangeThemeProxy*) pObjXXXX;
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
			}
		}
	}
}
