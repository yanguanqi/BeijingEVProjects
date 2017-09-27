/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialtheme/statistics3dtheme.h"
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
				class JCStatistics3DThemeProxy : public EarthView::World::Spatial::Theme::CStatistics3DTheme
				{
				 private:
					EarthView::World::Core::ev_string m_addField_EVString_ISymbol_callback;
					EarthView::World::Core::ev_string m_deleteField_EVString_callback;
					EarthView::World::Core::ev_string m_deleteAllField_void_callback;
					EarthView::World::Core::ev_string m_getFieldCount_void_callback;
					EarthView::World::Core::ev_string m_getFieldName_ev_uint32_callback;
					EarthView::World::Core::ev_string m_moveField_ev_uint32_ev_uint32_callback;
					EarthView::World::Core::ev_string m_getBackground_void_callback;
					EarthView::World::Core::ev_string m_setBackground_ISymbol_callback;
					EarthView::World::Core::ev_string m_getFieldSymbol_EVString_callback;
					EarthView::World::Core::ev_string m_setFieldSymbol_EVString_ISymbol_callback;
					EarthView::World::Core::ev_string m_getStatisticsType_void_callback;
					EarthView::World::Core::ev_string m_setStatisticsType_EVStatisticsThemeType_callback;
					EarthView::World::Core::ev_string m_getStatisticsSymbol_void_callback;
					EarthView::World::Core::ev_string m_getPieSizePolicy_void_callback;
					EarthView::World::Core::ev_string m_setPieSizePolicy_EVPieSizePolicy_callback;
					EarthView::World::Core::ev_string m_getProportionField_void_callback;
					EarthView::World::Core::ev_string m_setProportionField_EVString_callback;
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
					JCStatistics3DThemeProxy(EarthView::World::Core::CNameValuePairList *pList) : CStatistics3DTheme(pList)
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
					C_DISABLE_COPY(JCStatistics3DThemeProxy)
				public:
					void register_addField_EVString_ISymbol_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_addField_EVString_ISymbol_callback = __method;
					}
					void register_deleteField_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_deleteField_EVString_callback = __method;
					}
					void register_deleteAllField_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_deleteAllField_void_callback = __method;
					}
					void register_getFieldCount_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getFieldCount_void_callback = __method;
					}
					void register_getFieldName_ev_uint32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getFieldName_ev_uint32_callback = __method;
					}
					void register_moveField_ev_uint32_ev_uint32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_moveField_ev_uint32_ev_uint32_callback = __method;
					}
					void register_getBackground_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getBackground_void_callback = __method;
					}
					void register_setBackground_ISymbol_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setBackground_ISymbol_callback = __method;
					}
					void register_getFieldSymbol_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getFieldSymbol_EVString_callback = __method;
					}
					void register_setFieldSymbol_EVString_ISymbol_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setFieldSymbol_EVString_ISymbol_callback = __method;
					}
					void register_getStatisticsType_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getStatisticsType_void_callback = __method;
					}
					void register_setStatisticsType_EVStatisticsThemeType_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setStatisticsType_EVStatisticsThemeType_callback = __method;
					}
					void register_getStatisticsSymbol_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getStatisticsSymbol_void_callback = __method;
					}
					void register_getPieSizePolicy_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getPieSizePolicy_void_callback = __method;
					}
					void register_setPieSizePolicy_EVPieSizePolicy_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setPieSizePolicy_EVPieSizePolicy_callback = __method;
					}
					void register_getProportionField_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getProportionField_void_callback = __method;
					}
					void register_setProportionField_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setProportionField_EVString_callback = __method;
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
							return this->CStatistics3DTheme::getType();
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
							return this->CStatistics3DTheme::clone();
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
							return this->CStatistics3DTheme::toXmlElement();
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
							return this->CStatistics3DTheme::fromXmlElement(element);
						}
					}
					virtual void addField(const EVString& field, const EarthView::World::Spatial::Display::ISymbol* symbol)
					{
						if (this->_gRef != NULL && this->m_addField_EVString_ISymbol_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
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
							jlong symbol_j = (jlong) symbol;
							jmethodID __method = __gr->getMethod("addField_EVString_ISymbol_callback");
							__env->CallVoidMethod(__obj, __method , field_j, symbol_j);
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
							return this->CStatistics3DTheme::addField(field, symbol);
						}
					}
					virtual void deleteField(const EVString& field)
					{
						if (this->_gRef != NULL && this->m_deleteField_EVString_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
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
							jmethodID __method = __gr->getMethod("deleteField_EVString_callback");
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
							return this->CStatistics3DTheme::deleteField(field);
						}
					}
					virtual void deleteAllField()
					{
						if (this->_gRef != NULL && this->m_deleteAllField_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("deleteAllField_void_callback");
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
							return this->CStatistics3DTheme::deleteAllField();
						}
					}
					virtual ev_uint32 getFieldCount() const
					{
						if (this->_gRef != NULL && this->m_getFieldCount_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getFieldCount_void_callback");
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
							return this->CStatistics3DTheme::getFieldCount();
						}
					}
					virtual EVString getFieldName(ev_uint32 index) const
					{
						if (this->_gRef != NULL && this->m_getFieldName_ev_uint32_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
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
							jmethodID __method = __gr->getMethod("getFieldName_ev_uint32_callback");
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
							return this->CStatistics3DTheme::getFieldName(index);
						}
					}
					virtual void moveField(ev_uint32 oldIndex, ev_uint32 newIndex)
					{
						if (this->_gRef != NULL && this->m_moveField_ev_uint32_ev_uint32_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong oldIndex_j = (jlong) oldIndex;
							jlong newIndex_j = (jlong) newIndex;
							jmethodID __method = __gr->getMethod("moveField_ev_uint32_ev_uint32_callback");
							__env->CallVoidMethod(__obj, __method , oldIndex_j, newIndex_j);
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
							return this->CStatistics3DTheme::moveField(oldIndex, newIndex);
						}
					}
					virtual EarthView::World::Spatial::Display::ISymbol* getBackground() const
					{
						if (this->_gRef != NULL && this->m_getBackground_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getBackground_void_callback");
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
							return this->CStatistics3DTheme::getBackground();
						}
					}
					virtual void setBackground(const EarthView::World::Spatial::Display::ISymbol* symbol)
					{
						if (this->_gRef != NULL && this->m_setBackground_ISymbol_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
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
							jmethodID __method = __gr->getMethod("setBackground_ISymbol_callback");
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
							return this->CStatistics3DTheme::setBackground(symbol);
						}
					}
					virtual EarthView::World::Spatial::Display::ISymbol* getFieldSymbol(const EVString& field) const
					{
						if (this->_gRef != NULL && this->m_getFieldSymbol_EVString_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
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
							jmethodID __method = __gr->getMethod("getFieldSymbol_EVString_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , field_j);
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
							return this->CStatistics3DTheme::getFieldSymbol(field);
						}
					}
					virtual void setFieldSymbol(const EVString& field, const EarthView::World::Spatial::Display::ISymbol* symbol)
					{
						if (this->_gRef != NULL && this->m_setFieldSymbol_EVString_ISymbol_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
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
							jlong symbol_j = (jlong) symbol;
							jmethodID __method = __gr->getMethod("setFieldSymbol_EVString_ISymbol_callback");
							__env->CallVoidMethod(__obj, __method , field_j, symbol_j);
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
							return this->CStatistics3DTheme::setFieldSymbol(field, symbol);
						}
					}
					virtual EarthView::World::Spatial::Theme::EVStatisticsThemeType getStatisticsType() const
					{
						if (this->_gRef != NULL && this->m_getStatisticsType_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getStatisticsType_void_callback");
							jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::Theme::EVStatisticsThemeType __values1 = (EarthView::World::Spatial::Theme::EVStatisticsThemeType) __values1_j;
							return __values1;
						}
						else
						{
							return this->CStatistics3DTheme::getStatisticsType();
						}
					}
					virtual void setStatisticsType(EarthView::World::Spatial::Theme::EVStatisticsThemeType type)
					{
						if (this->_gRef != NULL && this->m_setStatisticsType_EVStatisticsThemeType_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
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
							jmethodID __method = __gr->getMethod("setStatisticsType_EVStatisticsThemeType_callback");
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
							return this->CStatistics3DTheme::setStatisticsType(type);
						}
					}
					virtual EarthView::World::Spatial::Display::ISymbol* getStatisticsSymbol() const
					{
						if (this->_gRef != NULL && this->m_getStatisticsSymbol_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getStatisticsSymbol_void_callback");
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
							return this->CStatistics3DTheme::getStatisticsSymbol();
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
							return this->CStatistics3DTheme::equals(theme);
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
							return this->CStatistics3DTheme::getDefaultSymbol();
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
							return this->CStatistics3DTheme::setDefaultSymbol(symbol);
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
							return this->CStatistics3DTheme::useDefaultSymbol();
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
							return this->CStatistics3DTheme::setUseDefaultSymbol(usable);
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
							return this->CStatistics3DTheme::toStream(stream);
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
							return this->CStatistics3DTheme::fromStream(stream);
						}
					}
					virtual EarthView::World::Spatial::Theme::EVPieSizePolicy getPieSizePolicy() const
					{
						if (this->_gRef != NULL && this->m_getPieSizePolicy_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getPieSizePolicy_void_callback");
							jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::Theme::EVPieSizePolicy __values1 = (EarthView::World::Spatial::Theme::EVPieSizePolicy) __values1_j;
							return __values1;
						}
						else
						{
							return this->CStatistics3DTheme::getPieSizePolicy();
						}
					}
					virtual void setPieSizePolicy(EarthView::World::Spatial::Theme::EVPieSizePolicy policy)
					{
						if (this->_gRef != NULL && this->m_setPieSizePolicy_EVPieSizePolicy_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jint policy_j = (jint) policy;
							jmethodID __method = __gr->getMethod("setPieSizePolicy_EVPieSizePolicy_callback");
							__env->CallVoidMethod(__obj, __method , policy_j);
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
							return this->CStatistics3DTheme::setPieSizePolicy(policy);
						}
					}
					virtual EVString getProportionField() const
					{
						if (this->_gRef != NULL && this->m_getProportionField_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getProportionField_void_callback");
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
							return this->CStatistics3DTheme::getProportionField();
						}
					}
					virtual void setProportionField(const EVString& field)
					{
						if (this->_gRef != NULL && this->m_setProportionField_EVString_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
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
							jmethodID __method = __gr->getMethod("setProportionField_EVString_callback");
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
							return this->CStatistics3DTheme::setProportionField(field);
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
							return this->CStatistics3DTheme::getCaption();
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
							return this->CStatistics3DTheme::setCaption(caption);
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
							return this->CStatistics3DTheme::onBeforeQuery(fc, filter);
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
							return this->CStatistics3DTheme::onAfterQuery(fs, dst);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCStatistics3DThemeProxy);
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial_theme_Statistics3DTheme_00024EVStatistics3DSymbolSizePolicyHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						CStatistics3DTheme::SSSP_FixSize,
						CStatistics3DTheme::SSSP_AdaptToSum,
						CStatistics3DTheme::SSSP_AdaptToField
					};
					jintArray array = __env->NewIntArray(3);
					__env->SetIntArrayRegion(array, 0, 3, enum_values);
					return array;
				}
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial_theme_Statistics3DTheme_00024EVStatisticsFieldValuePolicyHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						CStatistics3DTheme::SFVP_NormalValue,
						CStatistics3DTheme::SFVP_LogValue,
						CStatistics3DTheme::SFVP_SqrtValue
					};
					jintArray array = __env->NewIntArray(3);
					__env->SetIntArrayRegion(array, 0, 3, enum_values);
					return array;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_theme_Statistics3DTheme_getType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Theme::CStatistics3DTheme *pObjectX = (EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCStatistics3DThemeProxy))
					{
						EarthView::World::Spatial::Theme::EVThemeType __values1 = pObjectX->EarthView::World::Spatial::Theme::CStatistics3DTheme::getType();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Statistics3DTheme_register_1getType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCStatistics3DThemeProxy *pObjectX = (JCStatistics3DThemeProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_theme_Statistics3DTheme_getType_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Theme::CStatistics3DTheme *pObjectX = (EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjXXXX;
					EarthView::World::Spatial::Theme::EVThemeType __values1 = pObjectX->EarthView::World::Spatial::Theme::CStatistics3DTheme::getType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_theme_Statistics3DTheme_ev_1clone_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Theme::CStatistics3DTheme *pObjectX = (EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCStatistics3DThemeProxy))
					{
						EarthView::World::Spatial::Theme::ITheme* __values1 = pObjectX->EarthView::World::Spatial::Theme::CStatistics3DTheme::clone();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Statistics3DTheme_register_1ev_1clone_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCStatistics3DThemeProxy *pObjectX = (JCStatistics3DThemeProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_theme_Statistics3DTheme_ev_1clone_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Theme::CStatistics3DTheme *pObjectX = (EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjXXXX;
					EarthView::World::Spatial::Theme::ITheme* __values1 = pObjectX->EarthView::World::Spatial::Theme::CStatistics3DTheme::clone();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_theme_Statistics3DTheme_toXmlElement_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Theme::CStatistics3DTheme *pObjectX = (EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCStatistics3DThemeProxy))
					{
						EarthView::World::Core::CXmlElement __values1 = pObjectX->EarthView::World::Spatial::Theme::CStatistics3DTheme::toXmlElement();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Statistics3DTheme_register_1toXmlElement_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCStatistics3DThemeProxy *pObjectX = (JCStatistics3DThemeProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_theme_Statistics3DTheme_toXmlElement_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Theme::CStatistics3DTheme *pObjectX = (EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjXXXX;
					EarthView::World::Core::CXmlElement __values1 = pObjectX->EarthView::World::Spatial::Theme::CStatistics3DTheme::toXmlElement();
					EarthView::World::Core::CXmlElement *returnvalues = new EarthView::World::Core::CXmlElement(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Statistics3DTheme_fromXmlElement_1CXmlElement(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong element_j)
				{
					EarthView::World::Core::CXmlElement &element = *(EarthView::World::Core::CXmlElement*) element_j;
					EarthView::World::Spatial::Theme::CStatistics3DTheme *pObjectX = (EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCStatistics3DThemeProxy))
					{
						pObjectX->EarthView::World::Spatial::Theme::CStatistics3DTheme::fromXmlElement(element);
					}
					else
					{
						pObjectX->fromXmlElement(element);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Statistics3DTheme_register_1fromXmlElement_1CXmlElement(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCStatistics3DThemeProxy *pObjectX = (JCStatistics3DThemeProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Statistics3DTheme_fromXmlElement_1CXmlElement_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong element_j)
				{
					EarthView::World::Core::CXmlElement &element = *(EarthView::World::Core::CXmlElement*) element_j;
					EarthView::World::Spatial::Theme::CStatistics3DTheme *pObjectX = (EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Theme::CStatistics3DTheme::fromXmlElement(element);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Statistics3DTheme_addField_1EVString_1ISymbol(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring field_j, jlong symbol_j)
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
					const EarthView::World::Spatial::Display::ISymbol *symbol = (const EarthView::World::Spatial::Display::ISymbol*) symbol_j;
					EarthView::World::Spatial::Theme::CStatistics3DTheme *pObjectX = (EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCStatistics3DThemeProxy))
					{
						pObjectX->EarthView::World::Spatial::Theme::CStatistics3DTheme::addField(field, symbol);
					}
					else
					{
						pObjectX->addField(field, symbol);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Statistics3DTheme_register_1addField_1EVString_1ISymbol(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCStatistics3DThemeProxy *pObjectX = (JCStatistics3DThemeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_addField_EVString_ISymbol_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"addField_EVString_ISymbol_callback", "(Ljava/lang/String;J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Statistics3DTheme_addField_1EVString_1ISymbol_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring field_j, jlong symbol_j)
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
					const EarthView::World::Spatial::Display::ISymbol *symbol = (const EarthView::World::Spatial::Display::ISymbol*) symbol_j;
					EarthView::World::Spatial::Theme::CStatistics3DTheme *pObjectX = (EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Theme::CStatistics3DTheme::addField(field, symbol);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Statistics3DTheme_deleteField_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring field_j)
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
					EarthView::World::Spatial::Theme::CStatistics3DTheme *pObjectX = (EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCStatistics3DThemeProxy))
					{
						pObjectX->EarthView::World::Spatial::Theme::CStatistics3DTheme::deleteField(field);
					}
					else
					{
						pObjectX->deleteField(field);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Statistics3DTheme_register_1deleteField_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCStatistics3DThemeProxy *pObjectX = (JCStatistics3DThemeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_deleteField_EVString_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"deleteField_EVString_callback", "(Ljava/lang/String;)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Statistics3DTheme_deleteField_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring field_j)
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
					EarthView::World::Spatial::Theme::CStatistics3DTheme *pObjectX = (EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Theme::CStatistics3DTheme::deleteField(field);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Statistics3DTheme_deleteField_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					EarthView::World::Spatial::Theme::CStatistics3DTheme *pObjectX = (EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjXXXX;
					pObjectX->deleteField(index);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Statistics3DTheme_deleteAllField_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Theme::CStatistics3DTheme *pObjectX = (EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCStatistics3DThemeProxy))
					{
						pObjectX->EarthView::World::Spatial::Theme::CStatistics3DTheme::deleteAllField();
					}
					else
					{
						pObjectX->deleteAllField();
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Statistics3DTheme_register_1deleteAllField_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCStatistics3DThemeProxy *pObjectX = (JCStatistics3DThemeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_deleteAllField_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"deleteAllField_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Statistics3DTheme_deleteAllField_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Theme::CStatistics3DTheme *pObjectX = (EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Theme::CStatistics3DTheme::deleteAllField();
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_theme_Statistics3DTheme_getFieldCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Theme::CStatistics3DTheme *pObjectX = (EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCStatistics3DThemeProxy))
					{
						ev_uint32 __values1 = pObjectX->EarthView::World::Spatial::Theme::CStatistics3DTheme::getFieldCount();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						ev_uint32 __values1 = pObjectX->getFieldCount();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Statistics3DTheme_register_1getFieldCount_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCStatistics3DThemeProxy *pObjectX = (JCStatistics3DThemeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getFieldCount_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getFieldCount_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_theme_Statistics3DTheme_getFieldCount_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Theme::CStatistics3DTheme *pObjectX = (EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->EarthView::World::Spatial::Theme::CStatistics3DTheme::getFieldCount();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_theme_Statistics3DTheme_getFieldName_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					const 					EarthView::World::Spatial::Theme::CStatistics3DTheme *pObjectX = (EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCStatistics3DThemeProxy))
					{
						EVString __values1 = pObjectX->EarthView::World::Spatial::Theme::CStatistics3DTheme::getFieldName(index);
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
					else
					{
						EVString __values1 = pObjectX->getFieldName(index);
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Statistics3DTheme_register_1getFieldName_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCStatistics3DThemeProxy *pObjectX = (JCStatistics3DThemeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getFieldName_ev_uint32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getFieldName_ev_uint32_callback", "(J)Ljava/lang/String;");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_theme_Statistics3DTheme_getFieldName_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					const 					EarthView::World::Spatial::Theme::CStatistics3DTheme *pObjectX = (EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjXXXX;
					EVString __values1 = pObjectX->EarthView::World::Spatial::Theme::CStatistics3DTheme::getFieldName(index);
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Statistics3DTheme_moveField_1ev_1uint32_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong oldIndex_j, jlong newIndex_j)
				{
					ev_uint32 oldIndex = (ev_uint32) oldIndex_j;
					ev_uint32 newIndex = (ev_uint32) newIndex_j;
					EarthView::World::Spatial::Theme::CStatistics3DTheme *pObjectX = (EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCStatistics3DThemeProxy))
					{
						pObjectX->EarthView::World::Spatial::Theme::CStatistics3DTheme::moveField(oldIndex, newIndex);
					}
					else
					{
						pObjectX->moveField(oldIndex, newIndex);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Statistics3DTheme_register_1moveField_1ev_1uint32_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCStatistics3DThemeProxy *pObjectX = (JCStatistics3DThemeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_moveField_ev_uint32_ev_uint32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"moveField_ev_uint32_ev_uint32_callback", "(JJ)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Statistics3DTheme_moveField_1ev_1uint32_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong oldIndex_j, jlong newIndex_j)
				{
					ev_uint32 oldIndex = (ev_uint32) oldIndex_j;
					ev_uint32 newIndex = (ev_uint32) newIndex_j;
					EarthView::World::Spatial::Theme::CStatistics3DTheme *pObjectX = (EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Theme::CStatistics3DTheme::moveField(oldIndex, newIndex);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_theme_Statistics3DTheme_getBackground_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Theme::CStatistics3DTheme *pObjectX = (EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCStatistics3DThemeProxy))
					{
						EarthView::World::Spatial::Display::ISymbol* __values1 = pObjectX->EarthView::World::Spatial::Theme::CStatistics3DTheme::getBackground();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Display::ISymbol* __values1 = pObjectX->getBackground();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Statistics3DTheme_register_1getBackground_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCStatistics3DThemeProxy *pObjectX = (JCStatistics3DThemeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getBackground_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getBackground_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_theme_Statistics3DTheme_getBackground_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Theme::CStatistics3DTheme *pObjectX = (EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjXXXX;
					EarthView::World::Spatial::Display::ISymbol* __values1 = pObjectX->EarthView::World::Spatial::Theme::CStatistics3DTheme::getBackground();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Statistics3DTheme_setBackground_1ISymbol(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong symbol_j)
				{
					const EarthView::World::Spatial::Display::ISymbol *symbol = (const EarthView::World::Spatial::Display::ISymbol*) symbol_j;
					EarthView::World::Spatial::Theme::CStatistics3DTheme *pObjectX = (EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCStatistics3DThemeProxy))
					{
						pObjectX->EarthView::World::Spatial::Theme::CStatistics3DTheme::setBackground(symbol);
					}
					else
					{
						pObjectX->setBackground(symbol);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Statistics3DTheme_register_1setBackground_1ISymbol(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCStatistics3DThemeProxy *pObjectX = (JCStatistics3DThemeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setBackground_ISymbol_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setBackground_ISymbol_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Statistics3DTheme_setBackground_1ISymbol_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong symbol_j)
				{
					const EarthView::World::Spatial::Display::ISymbol *symbol = (const EarthView::World::Spatial::Display::ISymbol*) symbol_j;
					EarthView::World::Spatial::Theme::CStatistics3DTheme *pObjectX = (EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Theme::CStatistics3DTheme::setBackground(symbol);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_theme_Statistics3DTheme_getFieldSymbol_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring field_j)
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
					const 					EarthView::World::Spatial::Theme::CStatistics3DTheme *pObjectX = (EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCStatistics3DThemeProxy))
					{
						EarthView::World::Spatial::Display::ISymbol* __values1 = pObjectX->EarthView::World::Spatial::Theme::CStatistics3DTheme::getFieldSymbol(field);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Display::ISymbol* __values1 = pObjectX->getFieldSymbol(field);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Statistics3DTheme_register_1getFieldSymbol_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCStatistics3DThemeProxy *pObjectX = (JCStatistics3DThemeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getFieldSymbol_EVString_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getFieldSymbol_EVString_callback", "(Ljava/lang/String;)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_theme_Statistics3DTheme_getFieldSymbol_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring field_j)
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
					const 					EarthView::World::Spatial::Theme::CStatistics3DTheme *pObjectX = (EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjXXXX;
					EarthView::World::Spatial::Display::ISymbol* __values1 = pObjectX->EarthView::World::Spatial::Theme::CStatistics3DTheme::getFieldSymbol(field);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_theme_Statistics3DTheme_getFieldSymbol_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					const 					EarthView::World::Spatial::Theme::CStatistics3DTheme *pObjectX = (EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjXXXX;
					EarthView::World::Spatial::Display::ISymbol* __values1 = pObjectX->getFieldSymbol(index);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Statistics3DTheme_setFieldSymbol_1EVString_1ISymbol(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring field_j, jlong symbol_j)
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
					const EarthView::World::Spatial::Display::ISymbol *symbol = (const EarthView::World::Spatial::Display::ISymbol*) symbol_j;
					EarthView::World::Spatial::Theme::CStatistics3DTheme *pObjectX = (EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCStatistics3DThemeProxy))
					{
						pObjectX->EarthView::World::Spatial::Theme::CStatistics3DTheme::setFieldSymbol(field, symbol);
					}
					else
					{
						pObjectX->setFieldSymbol(field, symbol);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Statistics3DTheme_register_1setFieldSymbol_1EVString_1ISymbol(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCStatistics3DThemeProxy *pObjectX = (JCStatistics3DThemeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setFieldSymbol_EVString_ISymbol_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setFieldSymbol_EVString_ISymbol_callback", "(Ljava/lang/String;J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Statistics3DTheme_setFieldSymbol_1EVString_1ISymbol_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring field_j, jlong symbol_j)
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
					const EarthView::World::Spatial::Display::ISymbol *symbol = (const EarthView::World::Spatial::Display::ISymbol*) symbol_j;
					EarthView::World::Spatial::Theme::CStatistics3DTheme *pObjectX = (EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Theme::CStatistics3DTheme::setFieldSymbol(field, symbol);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Statistics3DTheme_setFieldSymbol_1ev_1uint32_1ISymbol(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j, jlong symbol_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					const EarthView::World::Spatial::Display::ISymbol *symbol = (const EarthView::World::Spatial::Display::ISymbol*) symbol_j;
					EarthView::World::Spatial::Theme::CStatistics3DTheme *pObjectX = (EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjXXXX;
					pObjectX->setFieldSymbol(index, symbol);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_theme_Statistics3DTheme_getStatisticsType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Theme::CStatistics3DTheme *pObjectX = (EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCStatistics3DThemeProxy))
					{
						EarthView::World::Spatial::Theme::EVStatisticsThemeType __values1 = pObjectX->EarthView::World::Spatial::Theme::CStatistics3DTheme::getStatisticsType();
						jint __values1_j = (jint) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Theme::EVStatisticsThemeType __values1 = pObjectX->getStatisticsType();
						jint __values1_j = (jint) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Statistics3DTheme_register_1getStatisticsType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCStatistics3DThemeProxy *pObjectX = (JCStatistics3DThemeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getStatisticsType_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getStatisticsType_void_callback", "()I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_theme_Statistics3DTheme_getStatisticsType_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Theme::CStatistics3DTheme *pObjectX = (EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjXXXX;
					EarthView::World::Spatial::Theme::EVStatisticsThemeType __values1 = pObjectX->EarthView::World::Spatial::Theme::CStatistics3DTheme::getStatisticsType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Statistics3DTheme_setStatisticsType_1EVStatisticsThemeType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint type_j)
				{
					EarthView::World::Spatial::Theme::EVStatisticsThemeType type = (EarthView::World::Spatial::Theme::EVStatisticsThemeType) type_j;
					EarthView::World::Spatial::Theme::CStatistics3DTheme *pObjectX = (EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCStatistics3DThemeProxy))
					{
						pObjectX->EarthView::World::Spatial::Theme::CStatistics3DTheme::setStatisticsType(type);
					}
					else
					{
						pObjectX->setStatisticsType(type);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Statistics3DTheme_register_1setStatisticsType_1EVStatisticsThemeType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCStatistics3DThemeProxy *pObjectX = (JCStatistics3DThemeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setStatisticsType_EVStatisticsThemeType_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setStatisticsType_EVStatisticsThemeType_callback", "(I)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Statistics3DTheme_setStatisticsType_1EVStatisticsThemeType_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint type_j)
				{
					EarthView::World::Spatial::Theme::EVStatisticsThemeType type = (EarthView::World::Spatial::Theme::EVStatisticsThemeType) type_j;
					EarthView::World::Spatial::Theme::CStatistics3DTheme *pObjectX = (EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Theme::CStatistics3DTheme::setStatisticsType(type);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_theme_Statistics3DTheme_getStatisticsSymbol_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Theme::CStatistics3DTheme *pObjectX = (EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCStatistics3DThemeProxy))
					{
						EarthView::World::Spatial::Display::ISymbol* __values1 = pObjectX->EarthView::World::Spatial::Theme::CStatistics3DTheme::getStatisticsSymbol();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Display::ISymbol* __values1 = pObjectX->getStatisticsSymbol();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Statistics3DTheme_register_1getStatisticsSymbol_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCStatistics3DThemeProxy *pObjectX = (JCStatistics3DThemeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getStatisticsSymbol_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getStatisticsSymbol_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_theme_Statistics3DTheme_getStatisticsSymbol_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Theme::CStatistics3DTheme *pObjectX = (EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjXXXX;
					EarthView::World::Spatial::Display::ISymbol* __values1 = pObjectX->EarthView::World::Spatial::Theme::CStatistics3DTheme::getStatisticsSymbol();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_theme_Statistics3DTheme_getAdaptFieldName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Theme::CStatistics3DTheme *pObjectX = (EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjXXXX;
					EVString __values1 = pObjectX->getAdaptFieldName();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Statistics3DTheme_setAdaptFieldName_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
					EarthView::World::Spatial::Theme::CStatistics3DTheme *pObjectX = (EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjXXXX;
					pObjectX->setAdaptFieldName(name);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_theme_Statistics3DTheme_getSymbolSizePolicy_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Theme::CStatistics3DTheme *pObjectX = (EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjXXXX;
					EarthView::World::Spatial::Theme::CStatistics3DTheme::EVStatistics3DSymbolSizePolicy __values1 = pObjectX->getSymbolSizePolicy();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Statistics3DTheme_setSymbolSizePolicy_1EVStatistics3DSymbolSizePolicy(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint policy_j)
				{
					EarthView::World::Spatial::Theme::CStatistics3DTheme::EVStatistics3DSymbolSizePolicy policy = (EarthView::World::Spatial::Theme::CStatistics3DTheme::EVStatistics3DSymbolSizePolicy) policy_j;
					EarthView::World::Spatial::Theme::CStatistics3DTheme *pObjectX = (EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjXXXX;
					pObjectX->setSymbolSizePolicy(policy);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_theme_Statistics3DTheme_ev_1equals_1ITheme(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong theme_j)
				{
					const EarthView::World::Spatial::Theme::ITheme *theme = (const EarthView::World::Spatial::Theme::ITheme*) theme_j;
					EarthView::World::Spatial::Theme::CStatistics3DTheme *pObjectX = (EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCStatistics3DThemeProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::Theme::CStatistics3DTheme::equals(theme);
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Statistics3DTheme_register_1ev_1equals_1ITheme(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCStatistics3DThemeProxy *pObjectX = (JCStatistics3DThemeProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_theme_Statistics3DTheme_ev_1equals_1ITheme_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong theme_j)
				{
					const EarthView::World::Spatial::Theme::ITheme *theme = (const EarthView::World::Spatial::Theme::ITheme*) theme_j;
					EarthView::World::Spatial::Theme::CStatistics3DTheme *pObjectX = (EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::Theme::CStatistics3DTheme::equals(theme);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_theme_Statistics3DTheme_getDefaultSymbol_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Theme::CStatistics3DTheme *pObjectX = (EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCStatistics3DThemeProxy))
					{
						EarthView::World::Spatial::Display::ISymbol* __values1 = pObjectX->EarthView::World::Spatial::Theme::CStatistics3DTheme::getDefaultSymbol();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Statistics3DTheme_register_1getDefaultSymbol_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCStatistics3DThemeProxy *pObjectX = (JCStatistics3DThemeProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_theme_Statistics3DTheme_getDefaultSymbol_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Theme::CStatistics3DTheme *pObjectX = (EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjXXXX;
					EarthView::World::Spatial::Display::ISymbol* __values1 = pObjectX->EarthView::World::Spatial::Theme::CStatistics3DTheme::getDefaultSymbol();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Statistics3DTheme_setDefaultSymbol_1ISymbol(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong symbol_j)
				{
					const EarthView::World::Spatial::Display::ISymbol *symbol = (const EarthView::World::Spatial::Display::ISymbol*) symbol_j;
					EarthView::World::Spatial::Theme::CStatistics3DTheme *pObjectX = (EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCStatistics3DThemeProxy))
					{
						pObjectX->EarthView::World::Spatial::Theme::CStatistics3DTheme::setDefaultSymbol(symbol);
					}
					else
					{
						pObjectX->setDefaultSymbol(symbol);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Statistics3DTheme_register_1setDefaultSymbol_1ISymbol(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCStatistics3DThemeProxy *pObjectX = (JCStatistics3DThemeProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Statistics3DTheme_setDefaultSymbol_1ISymbol_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong symbol_j)
				{
					const EarthView::World::Spatial::Display::ISymbol *symbol = (const EarthView::World::Spatial::Display::ISymbol*) symbol_j;
					EarthView::World::Spatial::Theme::CStatistics3DTheme *pObjectX = (EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Theme::CStatistics3DTheme::setDefaultSymbol(symbol);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_theme_Statistics3DTheme_useDefaultSymbol_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Theme::CStatistics3DTheme *pObjectX = (EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCStatistics3DThemeProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::Theme::CStatistics3DTheme::useDefaultSymbol();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Statistics3DTheme_register_1useDefaultSymbol_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCStatistics3DThemeProxy *pObjectX = (JCStatistics3DThemeProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_theme_Statistics3DTheme_useDefaultSymbol_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Theme::CStatistics3DTheme *pObjectX = (EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::Theme::CStatistics3DTheme::useDefaultSymbol();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Statistics3DTheme_setUseDefaultSymbol_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean usable_j)
				{
					ev_bool usable = (ev_bool) usable_j;
					EarthView::World::Spatial::Theme::CStatistics3DTheme *pObjectX = (EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCStatistics3DThemeProxy))
					{
						pObjectX->EarthView::World::Spatial::Theme::CStatistics3DTheme::setUseDefaultSymbol(usable);
					}
					else
					{
						pObjectX->setUseDefaultSymbol(usable);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Statistics3DTheme_register_1setUseDefaultSymbol_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCStatistics3DThemeProxy *pObjectX = (JCStatistics3DThemeProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Statistics3DTheme_setUseDefaultSymbol_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean usable_j)
				{
					ev_bool usable = (ev_bool) usable_j;
					EarthView::World::Spatial::Theme::CStatistics3DTheme *pObjectX = (EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Theme::CStatistics3DTheme::setUseDefaultSymbol(usable);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_theme_Statistics3DTheme_getFieldValuePolicy_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Theme::CStatistics3DTheme *pObjectX = (EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjXXXX;
					EarthView::World::Spatial::Theme::CStatistics3DTheme::EVStatisticsFieldValuePolicy __values1 = pObjectX->getFieldValuePolicy();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Statistics3DTheme_setFieldValuePolicy_1EVStatisticsFieldValuePolicy(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint policy_j)
				{
					EarthView::World::Spatial::Theme::CStatistics3DTheme::EVStatisticsFieldValuePolicy policy = (EarthView::World::Spatial::Theme::CStatistics3DTheme::EVStatisticsFieldValuePolicy) policy_j;
					EarthView::World::Spatial::Theme::CStatistics3DTheme *pObjectX = (EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjXXXX;
					pObjectX->setFieldValuePolicy(policy);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Statistics3DTheme_toStream_1CDataStream(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j)
				{
					EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
					const 					EarthView::World::Spatial::Theme::CStatistics3DTheme *pObjectX = (EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCStatistics3DThemeProxy))
					{
						pObjectX->EarthView::World::Spatial::Theme::CStatistics3DTheme::toStream(stream);
					}
					else
					{
						pObjectX->toStream(stream);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Statistics3DTheme_register_1toStream_1CDataStream(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCStatistics3DThemeProxy *pObjectX = (JCStatistics3DThemeProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Statistics3DTheme_toStream_1CDataStream_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j)
				{
					EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
					const 					EarthView::World::Spatial::Theme::CStatistics3DTheme *pObjectX = (EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Theme::CStatistics3DTheme::toStream(stream);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Statistics3DTheme_fromStream_1CDataStream(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j)
				{
					EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
					EarthView::World::Spatial::Theme::CStatistics3DTheme *pObjectX = (EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCStatistics3DThemeProxy))
					{
						pObjectX->EarthView::World::Spatial::Theme::CStatistics3DTheme::fromStream(stream);
					}
					else
					{
						pObjectX->fromStream(stream);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Statistics3DTheme_register_1fromStream_1CDataStream(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCStatistics3DThemeProxy *pObjectX = (JCStatistics3DThemeProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Statistics3DTheme_fromStream_1CDataStream_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j)
				{
					EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
					EarthView::World::Spatial::Theme::CStatistics3DTheme *pObjectX = (EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Theme::CStatistics3DTheme::fromStream(stream);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Statistics3DTheme_register_1getPieSizePolicy_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCStatistics3DThemeProxy *pObjectX = (JCStatistics3DThemeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getPieSizePolicy_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getPieSizePolicy_void_callback", "()I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Statistics3DTheme_register_1setPieSizePolicy_1EVPieSizePolicy(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCStatistics3DThemeProxy *pObjectX = (JCStatistics3DThemeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setPieSizePolicy_EVPieSizePolicy_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setPieSizePolicy_EVPieSizePolicy_callback", "(I)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Statistics3DTheme_register_1getProportionField_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCStatistics3DThemeProxy *pObjectX = (JCStatistics3DThemeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getProportionField_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getProportionField_void_callback", "()Ljava/lang/String;");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Statistics3DTheme_register_1setProportionField_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCStatistics3DThemeProxy *pObjectX = (JCStatistics3DThemeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setProportionField_EVString_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setProportionField_EVString_callback", "(Ljava/lang/String;)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Statistics3DTheme_register_1getCaption_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCStatistics3DThemeProxy *pObjectX = (JCStatistics3DThemeProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Statistics3DTheme_register_1setCaption_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCStatistics3DThemeProxy *pObjectX = (JCStatistics3DThemeProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Statistics3DTheme_register_1onBeforeQuery_1IFeatureClass_1IQueryFilter(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCStatistics3DThemeProxy *pObjectX = (JCStatistics3DThemeProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Statistics3DTheme_register_1onAfterQuery_1IFeatureSelection_1IGeometry(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCStatistics3DThemeProxy *pObjectX = (JCStatistics3DThemeProxy*) pObjXXXX;
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
