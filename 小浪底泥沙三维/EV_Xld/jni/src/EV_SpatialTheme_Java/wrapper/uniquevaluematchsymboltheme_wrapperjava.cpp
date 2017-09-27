/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialtheme/uniquevaluematchsymboltheme.h"
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
				class JCUniqueValueMatchSymbolThemeProxy : public EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme
				{
				 private:
					EarthView::World::Core::ev_string m_getFieldString_void_callback;
					EarthView::World::Core::ev_string m_setFieldString_EVString_callback;
					EarthView::World::Core::ev_string m_getSubCaption_ev_uint32_callback;
					EarthView::World::Core::ev_string m_setSubCaption_ev_uint32_EVString_callback;
					EarthView::World::Core::ev_string m_getSymbol_EVString_callback;
					EarthView::World::Core::ev_string m_setSymbol_EVString_ISymbol_callback;
					EarthView::World::Core::ev_string m_addValue_EVString_EVString_ISymbol_callback;
					EarthView::World::Core::ev_string m_removeValue_EVString_callback;
					EarthView::World::Core::ev_string m_removeAll_void_callback;
					EarthView::World::Core::ev_string m_getValueCount_void_callback;
					EarthView::World::Core::ev_string m_getValue_ev_uint32_callback;
					EarthView::World::Core::ev_string m_containsValue_EVString_callback;
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
					JCUniqueValueMatchSymbolThemeProxy(EarthView::World::Core::CNameValuePairList *pList) : CUniqueValueMatchSymbolTheme(pList)
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
					C_DISABLE_COPY(JCUniqueValueMatchSymbolThemeProxy)
				public:
					void register_getFieldString_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getFieldString_void_callback = __method;
					}
					void register_setFieldString_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setFieldString_EVString_callback = __method;
					}
					void register_getSubCaption_ev_uint32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getSubCaption_ev_uint32_callback = __method;
					}
					void register_setSubCaption_ev_uint32_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setSubCaption_ev_uint32_EVString_callback = __method;
					}
					void register_getSymbol_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getSymbol_EVString_callback = __method;
					}
					void register_setSymbol_EVString_ISymbol_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setSymbol_EVString_ISymbol_callback = __method;
					}
					void register_addValue_EVString_EVString_ISymbol_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_addValue_EVString_EVString_ISymbol_callback = __method;
					}
					void register_removeValue_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_removeValue_EVString_callback = __method;
					}
					void register_removeAll_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_removeAll_void_callback = __method;
					}
					void register_getValueCount_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getValueCount_void_callback = __method;
					}
					void register_getValue_ev_uint32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getValue_ev_uint32_callback = __method;
					}
					void register_containsValue_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_containsValue_EVString_callback = __method;
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
							return this->CUniqueValueMatchSymbolTheme::getType();
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
							return this->CUniqueValueMatchSymbolTheme::getCaption();
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
							return this->CUniqueValueMatchSymbolTheme::setCaption(caption);
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
							return this->CUniqueValueMatchSymbolTheme::useDefaultSymbol();
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
							return this->CUniqueValueMatchSymbolTheme::setUseDefaultSymbol(usable);
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
							return this->CUniqueValueMatchSymbolTheme::getDefaultSymbol();
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
							return this->CUniqueValueMatchSymbolTheme::setDefaultSymbol(symbol);
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
							return this->CUniqueValueMatchSymbolTheme::clone();
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
							return this->CUniqueValueMatchSymbolTheme::toStream(stream);
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
							return this->CUniqueValueMatchSymbolTheme::toXmlElement();
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
							return this->CUniqueValueMatchSymbolTheme::fromXmlElement(element);
						}
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
							return this->CUniqueValueMatchSymbolTheme::getFieldString();
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
							return this->CUniqueValueMatchSymbolTheme::setFieldString(field);
						}
					}
					virtual EVString getSubCaption(ev_uint32 index) const
					{
						if (this->_gRef != NULL && this->m_getSubCaption_ev_uint32_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
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
							jmethodID __method = __gr->getMethod("getSubCaption_ev_uint32_callback");
							jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method , index_j);
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
							return this->CUniqueValueMatchSymbolTheme::getSubCaption(index);
						}
					}
					virtual void setSubCaption(ev_uint32 index, const EVString& subCaption)
					{
						if (this->_gRef != NULL && this->m_setSubCaption_ev_uint32_EVString_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
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
							EarthView::World::Core::ev_wstring subCaption_wch = subCaption;
							jstring subCaption_j = __env->NewString((const jchar*)subCaption_wch.getString(), subCaption_wch.size());
							jmethodID __method = __gr->getMethod("setSubCaption_ev_uint32_EVString_callback");
							__env->CallVoidMethod(__obj, __method , index_j, subCaption_j);
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
							return this->CUniqueValueMatchSymbolTheme::setSubCaption(index, subCaption);
						}
					}
					virtual EarthView::World::Spatial::Display::ISymbol* getSymbol(const EVString& value) const
					{
						if (this->_gRef != NULL && this->m_getSymbol_EVString_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							EarthView::World::Core::ev_wstring value_wch = value;
							jstring value_j = __env->NewString((const jchar*)value_wch.getString(), value_wch.size());
							jmethodID __method = __gr->getMethod("getSymbol_EVString_callback");
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
							return this->CUniqueValueMatchSymbolTheme::getSymbol(value);
						}
					}
					virtual void addValue(const EVString& value, const EVString& caption, const EarthView::World::Spatial::Display::ISymbol* symbol)
					{
						if (this->_gRef != NULL && this->m_addValue_EVString_EVString_ISymbol_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							EarthView::World::Core::ev_wstring value_wch = value;
							jstring value_j = __env->NewString((const jchar*)value_wch.getString(), value_wch.size());
							EarthView::World::Core::ev_wstring caption_wch = caption;
							jstring caption_j = __env->NewString((const jchar*)caption_wch.getString(), caption_wch.size());
							jlong symbol_j = (jlong) symbol;
							jmethodID __method = __gr->getMethod("addValue_EVString_EVString_ISymbol_callback");
							__env->CallVoidMethod(__obj, __method , value_j, caption_j, symbol_j);
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
							return this->CUniqueValueMatchSymbolTheme::addValue(value, caption, symbol);
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
							return this->CUniqueValueMatchSymbolTheme::removeAll();
						}
					}
					virtual ev_uint32 getValueCount() const
					{
						if (this->_gRef != NULL && this->m_getValueCount_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getValueCount_void_callback");
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
							return this->CUniqueValueMatchSymbolTheme::getValueCount();
						}
					}
					virtual EVString getValue(ev_uint32 index) const
					{
						if (this->_gRef != NULL && this->m_getValue_ev_uint32_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
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
							jmethodID __method = __gr->getMethod("getValue_ev_uint32_callback");
							jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method , index_j);
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
							return this->CUniqueValueMatchSymbolTheme::getValue(index);
						}
					}
					virtual ev_bool containsValue(const EVString& value) const
					{
						if (this->_gRef != NULL && this->m_containsValue_EVString_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							EarthView::World::Core::ev_wstring value_wch = value;
							jstring value_j = __env->NewString((const jchar*)value_wch.getString(), value_wch.size());
							jmethodID __method = __gr->getMethod("containsValue_EVString_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , value_j);
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
							return this->CUniqueValueMatchSymbolTheme::containsValue(value);
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
							return this->CUniqueValueMatchSymbolTheme::equals(theme);
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
							return this->CUniqueValueMatchSymbolTheme::fromStream(stream);
						}
					}
					virtual void setSymbol(const EVString& value, const EarthView::World::Spatial::Display::ISymbol* symbol)
					{
						if (this->_gRef != NULL && this->m_setSymbol_EVString_ISymbol_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							EarthView::World::Core::ev_wstring value_wch = value;
							jstring value_j = __env->NewString((const jchar*)value_wch.getString(), value_wch.size());
							jlong symbol_j = (jlong) symbol;
							jmethodID __method = __gr->getMethod("setSymbol_EVString_ISymbol_callback");
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
							return this->CUniqueValueMatchSymbolTheme::setSymbol(value, symbol);
						}
					}
					virtual void removeValue(const EVString& value)
					{
						if (this->_gRef != NULL && this->m_removeValue_EVString_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							EarthView::World::Core::ev_wstring value_wch = value;
							jstring value_j = __env->NewString((const jchar*)value_wch.getString(), value_wch.size());
							jmethodID __method = __gr->getMethod("removeValue_EVString_callback");
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
							return this->CUniqueValueMatchSymbolTheme::removeValue(value);
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
							return this->CUniqueValueMatchSymbolTheme::onBeforeQuery(fc, filter);
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
							return this->CUniqueValueMatchSymbolTheme::onAfterQuery(fs, dst);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCUniqueValueMatchSymbolThemeProxy);
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_theme_UniqueValueMatchSymbolTheme_getType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme *pObjectX = (EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCUniqueValueMatchSymbolThemeProxy))
					{
						EarthView::World::Spatial::Theme::EVThemeType __values1 = pObjectX->EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme::getType();
						jint __values1_j = (jint) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Theme::EVThemeType __values1 = pObjectX->getType();
						jint __values1_j = (jint) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_UniqueValueMatchSymbolTheme_register_1getType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCUniqueValueMatchSymbolThemeProxy *pObjectX = (JCUniqueValueMatchSymbolThemeProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_theme_UniqueValueMatchSymbolTheme_getType_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme *pObjectX = (EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjXXXX;
					EarthView::World::Spatial::Theme::EVThemeType __values1 = pObjectX->EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme::getType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_theme_UniqueValueMatchSymbolTheme_getCaption_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme *pObjectX = (EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCUniqueValueMatchSymbolThemeProxy))
					{
						EVString __values1 = pObjectX->EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme::getCaption();
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
					else
					{
						EVString __values1 = pObjectX->getCaption();
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_UniqueValueMatchSymbolTheme_register_1getCaption_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCUniqueValueMatchSymbolThemeProxy *pObjectX = (JCUniqueValueMatchSymbolThemeProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_theme_UniqueValueMatchSymbolTheme_getCaption_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme *pObjectX = (EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjXXXX;
					EVString __values1 = pObjectX->EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme::getCaption();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_UniqueValueMatchSymbolTheme_setCaption_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring caption_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* caption_ch = (const ev_char*)__env->GetStringUTFChars(caption_j,JNI_FALSE);
					const EVString caption = caption_ch;
					__env->ReleaseStringUTFChars(caption_j, (const char *)caption_ch);
					#else
					const ev_wchar* caption_ch = (const ev_wchar*)__env->GetStringChars(caption_j,JNI_FALSE);
					const EVString caption = caption_ch;
					__env->ReleaseStringChars(caption_j, (const jchar *)caption_ch);
					#endif
					EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme *pObjectX = (EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCUniqueValueMatchSymbolThemeProxy))
					{
						pObjectX->EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme::setCaption(caption);
					}
					else
					{
						pObjectX->setCaption(caption);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_UniqueValueMatchSymbolTheme_register_1setCaption_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCUniqueValueMatchSymbolThemeProxy *pObjectX = (JCUniqueValueMatchSymbolThemeProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_UniqueValueMatchSymbolTheme_setCaption_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring caption_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* caption_ch = (const ev_char*)__env->GetStringUTFChars(caption_j,JNI_FALSE);
					const EVString caption = caption_ch;
					__env->ReleaseStringUTFChars(caption_j, (const char *)caption_ch);
					#else
					const ev_wchar* caption_ch = (const ev_wchar*)__env->GetStringChars(caption_j,JNI_FALSE);
					const EVString caption = caption_ch;
					__env->ReleaseStringChars(caption_j, (const jchar *)caption_ch);
					#endif
					EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme *pObjectX = (EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme::setCaption(caption);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_theme_UniqueValueMatchSymbolTheme_useDefaultSymbol_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme *pObjectX = (EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCUniqueValueMatchSymbolThemeProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme::useDefaultSymbol();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->useDefaultSymbol();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_UniqueValueMatchSymbolTheme_register_1useDefaultSymbol_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCUniqueValueMatchSymbolThemeProxy *pObjectX = (JCUniqueValueMatchSymbolThemeProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_theme_UniqueValueMatchSymbolTheme_useDefaultSymbol_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme *pObjectX = (EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme::useDefaultSymbol();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_UniqueValueMatchSymbolTheme_setUseDefaultSymbol_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean usable_j)
				{
					ev_bool usable = (ev_bool) usable_j;
					EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme *pObjectX = (EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCUniqueValueMatchSymbolThemeProxy))
					{
						pObjectX->EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme::setUseDefaultSymbol(usable);
					}
					else
					{
						pObjectX->setUseDefaultSymbol(usable);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_UniqueValueMatchSymbolTheme_register_1setUseDefaultSymbol_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCUniqueValueMatchSymbolThemeProxy *pObjectX = (JCUniqueValueMatchSymbolThemeProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_UniqueValueMatchSymbolTheme_setUseDefaultSymbol_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean usable_j)
				{
					ev_bool usable = (ev_bool) usable_j;
					EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme *pObjectX = (EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme::setUseDefaultSymbol(usable);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_theme_UniqueValueMatchSymbolTheme_getDefaultSymbol_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme *pObjectX = (EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCUniqueValueMatchSymbolThemeProxy))
					{
						EarthView::World::Spatial::Display::ISymbol* __values1 = pObjectX->EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme::getDefaultSymbol();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Display::ISymbol* __values1 = pObjectX->getDefaultSymbol();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_UniqueValueMatchSymbolTheme_register_1getDefaultSymbol_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCUniqueValueMatchSymbolThemeProxy *pObjectX = (JCUniqueValueMatchSymbolThemeProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_theme_UniqueValueMatchSymbolTheme_getDefaultSymbol_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme *pObjectX = (EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjXXXX;
					EarthView::World::Spatial::Display::ISymbol* __values1 = pObjectX->EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme::getDefaultSymbol();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_UniqueValueMatchSymbolTheme_setDefaultSymbol_1ISymbol(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong symbol_j)
				{
					const EarthView::World::Spatial::Display::ISymbol *symbol = (const EarthView::World::Spatial::Display::ISymbol*) symbol_j;
					EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme *pObjectX = (EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCUniqueValueMatchSymbolThemeProxy))
					{
						pObjectX->EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme::setDefaultSymbol(symbol);
					}
					else
					{
						pObjectX->setDefaultSymbol(symbol);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_UniqueValueMatchSymbolTheme_register_1setDefaultSymbol_1ISymbol(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCUniqueValueMatchSymbolThemeProxy *pObjectX = (JCUniqueValueMatchSymbolThemeProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_UniqueValueMatchSymbolTheme_setDefaultSymbol_1ISymbol_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong symbol_j)
				{
					const EarthView::World::Spatial::Display::ISymbol *symbol = (const EarthView::World::Spatial::Display::ISymbol*) symbol_j;
					EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme *pObjectX = (EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme::setDefaultSymbol(symbol);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_theme_UniqueValueMatchSymbolTheme_getDefaultCaption_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme *pObjectX = (EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjXXXX;
					EVString __values1 = pObjectX->getDefaultCaption();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_UniqueValueMatchSymbolTheme_setDefaultCaption_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring defaultCaption_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* defaultCaption_ch = (const ev_char*)__env->GetStringUTFChars(defaultCaption_j,JNI_FALSE);
					const EVString defaultCaption = defaultCaption_ch;
					__env->ReleaseStringUTFChars(defaultCaption_j, (const char *)defaultCaption_ch);
					#else
					const ev_wchar* defaultCaption_ch = (const ev_wchar*)__env->GetStringChars(defaultCaption_j,JNI_FALSE);
					const EVString defaultCaption = defaultCaption_ch;
					__env->ReleaseStringChars(defaultCaption_j, (const jchar *)defaultCaption_ch);
					#endif
					EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme *pObjectX = (EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjXXXX;
					pObjectX->setDefaultCaption(defaultCaption);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_theme_UniqueValueMatchSymbolTheme_ev_1clone_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme *pObjectX = (EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCUniqueValueMatchSymbolThemeProxy))
					{
						EarthView::World::Spatial::Theme::ITheme* __values1 = pObjectX->EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme::clone();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Theme::ITheme* __values1 = pObjectX->clone();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_UniqueValueMatchSymbolTheme_register_1ev_1clone_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCUniqueValueMatchSymbolThemeProxy *pObjectX = (JCUniqueValueMatchSymbolThemeProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_theme_UniqueValueMatchSymbolTheme_ev_1clone_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme *pObjectX = (EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjXXXX;
					EarthView::World::Spatial::Theme::ITheme* __values1 = pObjectX->EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme::clone();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_UniqueValueMatchSymbolTheme_toStream_1CDataStream(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j)
				{
					EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
					const 					EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme *pObjectX = (EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCUniqueValueMatchSymbolThemeProxy))
					{
						pObjectX->EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme::toStream(stream);
					}
					else
					{
						pObjectX->toStream(stream);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_UniqueValueMatchSymbolTheme_register_1toStream_1CDataStream(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCUniqueValueMatchSymbolThemeProxy *pObjectX = (JCUniqueValueMatchSymbolThemeProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_UniqueValueMatchSymbolTheme_toStream_1CDataStream_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j)
				{
					EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
					const 					EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme *pObjectX = (EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme::toStream(stream);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_theme_UniqueValueMatchSymbolTheme_toXmlElement_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme *pObjectX = (EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCUniqueValueMatchSymbolThemeProxy))
					{
						EarthView::World::Core::CXmlElement __values1 = pObjectX->EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme::toXmlElement();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_UniqueValueMatchSymbolTheme_register_1toXmlElement_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCUniqueValueMatchSymbolThemeProxy *pObjectX = (JCUniqueValueMatchSymbolThemeProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_theme_UniqueValueMatchSymbolTheme_toXmlElement_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme *pObjectX = (EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjXXXX;
					EarthView::World::Core::CXmlElement __values1 = pObjectX->EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme::toXmlElement();
					EarthView::World::Core::CXmlElement *returnvalues = new EarthView::World::Core::CXmlElement(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_UniqueValueMatchSymbolTheme_fromXmlElement_1CXmlElement(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong element_j)
				{
					EarthView::World::Core::CXmlElement &element = *(EarthView::World::Core::CXmlElement*) element_j;
					EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme *pObjectX = (EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCUniqueValueMatchSymbolThemeProxy))
					{
						pObjectX->EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme::fromXmlElement(element);
					}
					else
					{
						pObjectX->fromXmlElement(element);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_UniqueValueMatchSymbolTheme_register_1fromXmlElement_1CXmlElement(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCUniqueValueMatchSymbolThemeProxy *pObjectX = (JCUniqueValueMatchSymbolThemeProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_UniqueValueMatchSymbolTheme_fromXmlElement_1CXmlElement_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong element_j)
				{
					EarthView::World::Core::CXmlElement &element = *(EarthView::World::Core::CXmlElement*) element_j;
					EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme *pObjectX = (EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme::fromXmlElement(element);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_theme_UniqueValueMatchSymbolTheme_getFieldString_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme *pObjectX = (EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCUniqueValueMatchSymbolThemeProxy))
					{
						EVString __values1 = pObjectX->EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme::getFieldString();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_UniqueValueMatchSymbolTheme_register_1getFieldString_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCUniqueValueMatchSymbolThemeProxy *pObjectX = (JCUniqueValueMatchSymbolThemeProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_theme_UniqueValueMatchSymbolTheme_getFieldString_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme *pObjectX = (EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjXXXX;
					EVString __values1 = pObjectX->EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme::getFieldString();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_UniqueValueMatchSymbolTheme_setFieldString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring field_j)
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
					EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme *pObjectX = (EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCUniqueValueMatchSymbolThemeProxy))
					{
						pObjectX->EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme::setFieldString(field);
					}
					else
					{
						pObjectX->setFieldString(field);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_UniqueValueMatchSymbolTheme_register_1setFieldString_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCUniqueValueMatchSymbolThemeProxy *pObjectX = (JCUniqueValueMatchSymbolThemeProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_UniqueValueMatchSymbolTheme_setFieldString_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring field_j)
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
					EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme *pObjectX = (EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme::setFieldString(field);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_theme_UniqueValueMatchSymbolTheme_getSubCaption_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					const 					EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme *pObjectX = (EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCUniqueValueMatchSymbolThemeProxy))
					{
						EVString __values1 = pObjectX->EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme::getSubCaption(index);
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
					else
					{
						EVString __values1 = pObjectX->getSubCaption(index);
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_UniqueValueMatchSymbolTheme_register_1getSubCaption_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCUniqueValueMatchSymbolThemeProxy *pObjectX = (JCUniqueValueMatchSymbolThemeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getSubCaption_ev_uint32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getSubCaption_ev_uint32_callback", "(J)Ljava/lang/String;");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_theme_UniqueValueMatchSymbolTheme_getSubCaption_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					const 					EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme *pObjectX = (EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjXXXX;
					EVString __values1 = pObjectX->EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme::getSubCaption(index);
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_UniqueValueMatchSymbolTheme_setSubCaption_1ev_1uint32_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j, jstring subCaption_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* subCaption_ch = (const ev_char*)__env->GetStringUTFChars(subCaption_j,JNI_FALSE);
					const EVString subCaption = subCaption_ch;
					__env->ReleaseStringUTFChars(subCaption_j, (const char *)subCaption_ch);
					#else
					const ev_wchar* subCaption_ch = (const ev_wchar*)__env->GetStringChars(subCaption_j,JNI_FALSE);
					const EVString subCaption = subCaption_ch;
					__env->ReleaseStringChars(subCaption_j, (const jchar *)subCaption_ch);
					#endif
					EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme *pObjectX = (EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCUniqueValueMatchSymbolThemeProxy))
					{
						pObjectX->EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme::setSubCaption(index, subCaption);
					}
					else
					{
						pObjectX->setSubCaption(index, subCaption);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_UniqueValueMatchSymbolTheme_register_1setSubCaption_1ev_1uint32_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCUniqueValueMatchSymbolThemeProxy *pObjectX = (JCUniqueValueMatchSymbolThemeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setSubCaption_ev_uint32_EVString_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setSubCaption_ev_uint32_EVString_callback", "(JLjava/lang/String;)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_UniqueValueMatchSymbolTheme_setSubCaption_1ev_1uint32_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j, jstring subCaption_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* subCaption_ch = (const ev_char*)__env->GetStringUTFChars(subCaption_j,JNI_FALSE);
					const EVString subCaption = subCaption_ch;
					__env->ReleaseStringUTFChars(subCaption_j, (const char *)subCaption_ch);
					#else
					const ev_wchar* subCaption_ch = (const ev_wchar*)__env->GetStringChars(subCaption_j,JNI_FALSE);
					const EVString subCaption = subCaption_ch;
					__env->ReleaseStringChars(subCaption_j, (const jchar *)subCaption_ch);
					#endif
					EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme *pObjectX = (EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme::setSubCaption(index, subCaption);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_theme_UniqueValueMatchSymbolTheme_getSymbol_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring value_j)
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
					const 					EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme *pObjectX = (EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCUniqueValueMatchSymbolThemeProxy))
					{
						EarthView::World::Spatial::Display::ISymbol* __values1 = pObjectX->EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme::getSymbol(value);
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_UniqueValueMatchSymbolTheme_register_1getSymbol_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCUniqueValueMatchSymbolThemeProxy *pObjectX = (JCUniqueValueMatchSymbolThemeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getSymbol_EVString_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getSymbol_EVString_callback", "(Ljava/lang/String;)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_theme_UniqueValueMatchSymbolTheme_getSymbol_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring value_j)
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
					const 					EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme *pObjectX = (EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjXXXX;
					EarthView::World::Spatial::Display::ISymbol* __values1 = pObjectX->EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme::getSymbol(value);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_theme_UniqueValueMatchSymbolTheme_getSymbol_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint index_j)
				{
					ev_int32 index = (ev_int32) index_j;
					const 					EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme *pObjectX = (EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjXXXX;
					EarthView::World::Spatial::Display::ISymbol* __values1 = pObjectX->getSymbol(index);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_UniqueValueMatchSymbolTheme_setSymbol_1ev_1int32_1ISymbol(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint index_j, jlong symbol_j)
				{
					const ev_int32 index = (ev_int32) index_j;
					const EarthView::World::Spatial::Display::ISymbol *symbol = (const EarthView::World::Spatial::Display::ISymbol*) symbol_j;
					EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme *pObjectX = (EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjXXXX;
					pObjectX->setSymbol(index, symbol);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_UniqueValueMatchSymbolTheme_addValue_1EVString_1EVString_1ISymbol(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring value_j, jstring caption_j, jlong symbol_j)
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
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* caption_ch = (const ev_char*)__env->GetStringUTFChars(caption_j,JNI_FALSE);
					const EVString caption = caption_ch;
					__env->ReleaseStringUTFChars(caption_j, (const char *)caption_ch);
					#else
					const ev_wchar* caption_ch = (const ev_wchar*)__env->GetStringChars(caption_j,JNI_FALSE);
					const EVString caption = caption_ch;
					__env->ReleaseStringChars(caption_j, (const jchar *)caption_ch);
					#endif
					const EarthView::World::Spatial::Display::ISymbol *symbol = (const EarthView::World::Spatial::Display::ISymbol*) symbol_j;
					EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme *pObjectX = (EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCUniqueValueMatchSymbolThemeProxy))
					{
						pObjectX->EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme::addValue(value, caption, symbol);
					}
					else
					{
						pObjectX->addValue(value, caption, symbol);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_UniqueValueMatchSymbolTheme_register_1addValue_1EVString_1EVString_1ISymbol(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCUniqueValueMatchSymbolThemeProxy *pObjectX = (JCUniqueValueMatchSymbolThemeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_addValue_EVString_EVString_ISymbol_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"addValue_EVString_EVString_ISymbol_callback", "(Ljava/lang/String;Ljava/lang/String;J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_UniqueValueMatchSymbolTheme_addValue_1EVString_1EVString_1ISymbol_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring value_j, jstring caption_j, jlong symbol_j)
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
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* caption_ch = (const ev_char*)__env->GetStringUTFChars(caption_j,JNI_FALSE);
					const EVString caption = caption_ch;
					__env->ReleaseStringUTFChars(caption_j, (const char *)caption_ch);
					#else
					const ev_wchar* caption_ch = (const ev_wchar*)__env->GetStringChars(caption_j,JNI_FALSE);
					const EVString caption = caption_ch;
					__env->ReleaseStringChars(caption_j, (const jchar *)caption_ch);
					#endif
					const EarthView::World::Spatial::Display::ISymbol *symbol = (const EarthView::World::Spatial::Display::ISymbol*) symbol_j;
					EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme *pObjectX = (EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme::addValue(value, caption, symbol);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_UniqueValueMatchSymbolTheme_removeValue_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint index_j)
				{
					const ev_int32 index = (ev_int32) index_j;
					EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme *pObjectX = (EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjXXXX;
					pObjectX->removeValue(index);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_UniqueValueMatchSymbolTheme_removeAll_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme *pObjectX = (EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCUniqueValueMatchSymbolThemeProxy))
					{
						pObjectX->EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme::removeAll();
					}
					else
					{
						pObjectX->removeAll();
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_UniqueValueMatchSymbolTheme_register_1removeAll_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCUniqueValueMatchSymbolThemeProxy *pObjectX = (JCUniqueValueMatchSymbolThemeProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_UniqueValueMatchSymbolTheme_removeAll_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme *pObjectX = (EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme::removeAll();
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_theme_UniqueValueMatchSymbolTheme_getValueCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme *pObjectX = (EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCUniqueValueMatchSymbolThemeProxy))
					{
						ev_uint32 __values1 = pObjectX->EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme::getValueCount();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						ev_uint32 __values1 = pObjectX->getValueCount();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_UniqueValueMatchSymbolTheme_register_1getValueCount_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCUniqueValueMatchSymbolThemeProxy *pObjectX = (JCUniqueValueMatchSymbolThemeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getValueCount_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getValueCount_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_theme_UniqueValueMatchSymbolTheme_getValueCount_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme *pObjectX = (EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme::getValueCount();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_theme_UniqueValueMatchSymbolTheme_getValue_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					const 					EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme *pObjectX = (EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCUniqueValueMatchSymbolThemeProxy))
					{
						EVString __values1 = pObjectX->EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme::getValue(index);
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
					else
					{
						EVString __values1 = pObjectX->getValue(index);
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_UniqueValueMatchSymbolTheme_register_1getValue_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCUniqueValueMatchSymbolThemeProxy *pObjectX = (JCUniqueValueMatchSymbolThemeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getValue_ev_uint32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getValue_ev_uint32_callback", "(J)Ljava/lang/String;");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_theme_UniqueValueMatchSymbolTheme_getValue_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					const 					EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme *pObjectX = (EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjXXXX;
					EVString __values1 = pObjectX->EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme::getValue(index);
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_theme_UniqueValueMatchSymbolTheme_containsValue_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring value_j)
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
					const 					EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme *pObjectX = (EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCUniqueValueMatchSymbolThemeProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme::containsValue(value);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->containsValue(value);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_UniqueValueMatchSymbolTheme_register_1containsValue_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCUniqueValueMatchSymbolThemeProxy *pObjectX = (JCUniqueValueMatchSymbolThemeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_containsValue_EVString_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"containsValue_EVString_callback", "(Ljava/lang/String;)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_theme_UniqueValueMatchSymbolTheme_containsValue_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring value_j)
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
					const 					EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme *pObjectX = (EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme::containsValue(value);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_theme_UniqueValueMatchSymbolTheme_ev_1equals_1ITheme(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong theme_j)
				{
					const EarthView::World::Spatial::Theme::ITheme *theme = (const EarthView::World::Spatial::Theme::ITheme*) theme_j;
					EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme *pObjectX = (EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCUniqueValueMatchSymbolThemeProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme::equals(theme);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->equals(theme);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_UniqueValueMatchSymbolTheme_register_1ev_1equals_1ITheme(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCUniqueValueMatchSymbolThemeProxy *pObjectX = (JCUniqueValueMatchSymbolThemeProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_theme_UniqueValueMatchSymbolTheme_ev_1equals_1ITheme_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong theme_j)
				{
					const EarthView::World::Spatial::Theme::ITheme *theme = (const EarthView::World::Spatial::Theme::ITheme*) theme_j;
					EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme *pObjectX = (EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme::equals(theme);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_theme_UniqueValueMatchSymbolTheme_getCurrentStyle_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme *pObjectX = (EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjXXXX;
					EVString __values1 = pObjectX->getCurrentStyle();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_UniqueValueMatchSymbolTheme_setCurrentStyle_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring cStyle_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* cStyle_ch = (const ev_char*)__env->GetStringUTFChars(cStyle_j,JNI_FALSE);
					const EVString cStyle = cStyle_ch;
					__env->ReleaseStringUTFChars(cStyle_j, (const char *)cStyle_ch);
					#else
					const ev_wchar* cStyle_ch = (const ev_wchar*)__env->GetStringChars(cStyle_j,JNI_FALSE);
					const EVString cStyle = cStyle_ch;
					__env->ReleaseStringChars(cStyle_j, (const jchar *)cStyle_ch);
					#endif
					EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme *pObjectX = (EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjXXXX;
					pObjectX->setCurrentStyle(cStyle);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_UniqueValueMatchSymbolTheme_fromStream_1CDataStream(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j)
				{
					EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
					EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme *pObjectX = (EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCUniqueValueMatchSymbolThemeProxy))
					{
						pObjectX->EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme::fromStream(stream);
					}
					else
					{
						pObjectX->fromStream(stream);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_UniqueValueMatchSymbolTheme_register_1fromStream_1CDataStream(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCUniqueValueMatchSymbolThemeProxy *pObjectX = (JCUniqueValueMatchSymbolThemeProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_UniqueValueMatchSymbolTheme_fromStream_1CDataStream_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j)
				{
					EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
					EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme *pObjectX = (EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme::fromStream(stream);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_UniqueValueMatchSymbolTheme_register_1setSymbol_1EVString_1ISymbol(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCUniqueValueMatchSymbolThemeProxy *pObjectX = (JCUniqueValueMatchSymbolThemeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setSymbol_EVString_ISymbol_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setSymbol_EVString_ISymbol_callback", "(Ljava/lang/String;J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_UniqueValueMatchSymbolTheme_register_1removeValue_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCUniqueValueMatchSymbolThemeProxy *pObjectX = (JCUniqueValueMatchSymbolThemeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_removeValue_EVString_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"removeValue_EVString_callback", "(Ljava/lang/String;)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_UniqueValueMatchSymbolTheme_register_1onBeforeQuery_1IFeatureClass_1IQueryFilter(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCUniqueValueMatchSymbolThemeProxy *pObjectX = (JCUniqueValueMatchSymbolThemeProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_UniqueValueMatchSymbolTheme_register_1onAfterQuery_1IFeatureSelection_1IGeometry(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCUniqueValueMatchSymbolThemeProxy *pObjectX = (JCUniqueValueMatchSymbolThemeProxy*) pObjXXXX;
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
			}
		}
	}
}
