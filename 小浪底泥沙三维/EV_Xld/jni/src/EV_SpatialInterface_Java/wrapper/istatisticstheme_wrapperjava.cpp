/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialinterface/istatisticstheme.h"
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
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial_theme_EVStatisticsThemeTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						STT_Unkown,
						STT_Pie,
						STT_Bar,
						STT_Stacked,
						STT_3DPie,
						STT_3DBar,
						STT_3DStacked
					};
					jintArray array = __env->NewIntArray(7);
					__env->SetIntArrayRegion(array, 0, 7, enum_values);
					return array;
				}
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial_theme_EVPieSizePolicyHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						PSP_FixSize,
						PSP_AdaptToSum,
						PSP_AdaptToField
					};
					jintArray array = __env->NewIntArray(3);
					__env->SetIntArrayRegion(array, 0, 3, enum_values);
					return array;
				}
				class JIStatisticsThemeProxy : public EarthView::World::Spatial::Theme::IStatisticsTheme
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
					JIStatisticsThemeProxy(EarthView::World::Core::CNameValuePairList *pList) : IStatisticsTheme(pList)
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
					C_DISABLE_COPY(JIStatisticsThemeProxy)
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
							return this->IStatisticsTheme::addField(field, symbol);
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
							return this->IStatisticsTheme::deleteField(field);
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
							return this->IStatisticsTheme::deleteAllField();
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
							return this->IStatisticsTheme::getFieldCount();
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
							return this->IStatisticsTheme::getFieldName(index);
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
							return this->IStatisticsTheme::moveField(oldIndex, newIndex);
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
							return this->IStatisticsTheme::getBackground();
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
							return this->IStatisticsTheme::setBackground(symbol);
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
							return this->IStatisticsTheme::getFieldSymbol(field);
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
							return this->IStatisticsTheme::setFieldSymbol(field, symbol);
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
							return this->IStatisticsTheme::getStatisticsType();
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
							return this->IStatisticsTheme::setStatisticsType(type);
						}
					}
					virtual EarthView::World::Spatial::Display::ISymbol* getStatisticsSymbol()
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
							return this->IStatisticsTheme::getStatisticsSymbol();
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
							return this->IStatisticsTheme::getPieSizePolicy();
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
							return this->IStatisticsTheme::setPieSizePolicy(policy);
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
							return this->IStatisticsTheme::getProportionField();
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
							return this->IStatisticsTheme::setProportionField(field);
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
							return this->IStatisticsTheme::getType();
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
							return this->IStatisticsTheme::getCaption();
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
							return this->IStatisticsTheme::setCaption(caption);
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
							return this->IStatisticsTheme::useDefaultSymbol();
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
							return this->IStatisticsTheme::setUseDefaultSymbol(usable);
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
							return this->IStatisticsTheme::getDefaultSymbol();
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
							return this->IStatisticsTheme::setDefaultSymbol(symbol);
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
							return this->IStatisticsTheme::equals(theme);
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
							return this->IStatisticsTheme::clone();
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
							return this->IStatisticsTheme::toStream(stream);
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
							return this->IStatisticsTheme::toXmlElement();
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
							return this->IStatisticsTheme::fromXmlElement(element);
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
							return this->IStatisticsTheme::onBeforeQuery(fc, filter);
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
							return this->IStatisticsTheme::onAfterQuery(fs, dst);
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
							return this->IStatisticsTheme::fromStream(stream);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JIStatisticsThemeProxy);
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Istatisticstheme_addField_1EVString_1ISymbol(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring field_j, jlong symbol_j)
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
					EarthView::World::Spatial::Theme::IStatisticsTheme *pObjectX = (EarthView::World::Spatial::Theme::IStatisticsTheme*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIStatisticsThemeProxy))
					{
						pObjectX->EarthView::World::Spatial::Theme::IStatisticsTheme::addField(field, symbol);
					}
					else
					{
						pObjectX->addField(field, symbol);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Istatisticstheme_register_1addField_1EVString_1ISymbol(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIStatisticsThemeProxy *pObjectX = (JIStatisticsThemeProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Istatisticstheme_addField_1EVString_1ISymbol_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring field_j, jlong symbol_j)
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
					EarthView::World::Spatial::Theme::IStatisticsTheme *pObjectX = (EarthView::World::Spatial::Theme::IStatisticsTheme*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Theme::IStatisticsTheme::addField(field, symbol);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Istatisticstheme_deleteField_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring field_j)
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
					EarthView::World::Spatial::Theme::IStatisticsTheme *pObjectX = (EarthView::World::Spatial::Theme::IStatisticsTheme*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIStatisticsThemeProxy))
					{
						pObjectX->EarthView::World::Spatial::Theme::IStatisticsTheme::deleteField(field);
					}
					else
					{
						pObjectX->deleteField(field);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Istatisticstheme_register_1deleteField_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIStatisticsThemeProxy *pObjectX = (JIStatisticsThemeProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Istatisticstheme_deleteField_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring field_j)
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
					EarthView::World::Spatial::Theme::IStatisticsTheme *pObjectX = (EarthView::World::Spatial::Theme::IStatisticsTheme*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Theme::IStatisticsTheme::deleteField(field);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Istatisticstheme_deleteAllField_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Theme::IStatisticsTheme *pObjectX = (EarthView::World::Spatial::Theme::IStatisticsTheme*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIStatisticsThemeProxy))
					{
						pObjectX->EarthView::World::Spatial::Theme::IStatisticsTheme::deleteAllField();
					}
					else
					{
						pObjectX->deleteAllField();
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Istatisticstheme_register_1deleteAllField_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIStatisticsThemeProxy *pObjectX = (JIStatisticsThemeProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Istatisticstheme_deleteAllField_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Theme::IStatisticsTheme *pObjectX = (EarthView::World::Spatial::Theme::IStatisticsTheme*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Theme::IStatisticsTheme::deleteAllField();
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_theme_Istatisticstheme_getFieldCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Theme::IStatisticsTheme *pObjectX = (EarthView::World::Spatial::Theme::IStatisticsTheme*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIStatisticsThemeProxy))
					{
						ev_uint32 __values1 = pObjectX->EarthView::World::Spatial::Theme::IStatisticsTheme::getFieldCount();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Istatisticstheme_register_1getFieldCount_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIStatisticsThemeProxy *pObjectX = (JIStatisticsThemeProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_theme_Istatisticstheme_getFieldCount_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Theme::IStatisticsTheme *pObjectX = (EarthView::World::Spatial::Theme::IStatisticsTheme*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->EarthView::World::Spatial::Theme::IStatisticsTheme::getFieldCount();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_theme_Istatisticstheme_getFieldName_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					const 					EarthView::World::Spatial::Theme::IStatisticsTheme *pObjectX = (EarthView::World::Spatial::Theme::IStatisticsTheme*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIStatisticsThemeProxy))
					{
						EVString __values1 = pObjectX->EarthView::World::Spatial::Theme::IStatisticsTheme::getFieldName(index);
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Istatisticstheme_register_1getFieldName_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIStatisticsThemeProxy *pObjectX = (JIStatisticsThemeProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_theme_Istatisticstheme_getFieldName_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					const 					EarthView::World::Spatial::Theme::IStatisticsTheme *pObjectX = (EarthView::World::Spatial::Theme::IStatisticsTheme*) pObjXXXX;
					EVString __values1 = pObjectX->EarthView::World::Spatial::Theme::IStatisticsTheme::getFieldName(index);
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Istatisticstheme_moveField_1ev_1uint32_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong oldIndex_j, jlong newIndex_j)
				{
					ev_uint32 oldIndex = (ev_uint32) oldIndex_j;
					ev_uint32 newIndex = (ev_uint32) newIndex_j;
					EarthView::World::Spatial::Theme::IStatisticsTheme *pObjectX = (EarthView::World::Spatial::Theme::IStatisticsTheme*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIStatisticsThemeProxy))
					{
						pObjectX->EarthView::World::Spatial::Theme::IStatisticsTheme::moveField(oldIndex, newIndex);
					}
					else
					{
						pObjectX->moveField(oldIndex, newIndex);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Istatisticstheme_register_1moveField_1ev_1uint32_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIStatisticsThemeProxy *pObjectX = (JIStatisticsThemeProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Istatisticstheme_moveField_1ev_1uint32_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong oldIndex_j, jlong newIndex_j)
				{
					ev_uint32 oldIndex = (ev_uint32) oldIndex_j;
					ev_uint32 newIndex = (ev_uint32) newIndex_j;
					EarthView::World::Spatial::Theme::IStatisticsTheme *pObjectX = (EarthView::World::Spatial::Theme::IStatisticsTheme*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Theme::IStatisticsTheme::moveField(oldIndex, newIndex);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_theme_Istatisticstheme_getBackground_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Theme::IStatisticsTheme *pObjectX = (EarthView::World::Spatial::Theme::IStatisticsTheme*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIStatisticsThemeProxy))
					{
						EarthView::World::Spatial::Display::ISymbol* __values1 = pObjectX->EarthView::World::Spatial::Theme::IStatisticsTheme::getBackground();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Istatisticstheme_register_1getBackground_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIStatisticsThemeProxy *pObjectX = (JIStatisticsThemeProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_theme_Istatisticstheme_getBackground_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Theme::IStatisticsTheme *pObjectX = (EarthView::World::Spatial::Theme::IStatisticsTheme*) pObjXXXX;
					EarthView::World::Spatial::Display::ISymbol* __values1 = pObjectX->EarthView::World::Spatial::Theme::IStatisticsTheme::getBackground();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Istatisticstheme_setBackground_1ISymbol(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong symbol_j)
				{
					const EarthView::World::Spatial::Display::ISymbol *symbol = (const EarthView::World::Spatial::Display::ISymbol*) symbol_j;
					EarthView::World::Spatial::Theme::IStatisticsTheme *pObjectX = (EarthView::World::Spatial::Theme::IStatisticsTheme*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIStatisticsThemeProxy))
					{
						pObjectX->EarthView::World::Spatial::Theme::IStatisticsTheme::setBackground(symbol);
					}
					else
					{
						pObjectX->setBackground(symbol);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Istatisticstheme_register_1setBackground_1ISymbol(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIStatisticsThemeProxy *pObjectX = (JIStatisticsThemeProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Istatisticstheme_setBackground_1ISymbol_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong symbol_j)
				{
					const EarthView::World::Spatial::Display::ISymbol *symbol = (const EarthView::World::Spatial::Display::ISymbol*) symbol_j;
					EarthView::World::Spatial::Theme::IStatisticsTheme *pObjectX = (EarthView::World::Spatial::Theme::IStatisticsTheme*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Theme::IStatisticsTheme::setBackground(symbol);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_theme_Istatisticstheme_getFieldSymbol_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring field_j)
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
					const 					EarthView::World::Spatial::Theme::IStatisticsTheme *pObjectX = (EarthView::World::Spatial::Theme::IStatisticsTheme*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIStatisticsThemeProxy))
					{
						EarthView::World::Spatial::Display::ISymbol* __values1 = pObjectX->EarthView::World::Spatial::Theme::IStatisticsTheme::getFieldSymbol(field);
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Istatisticstheme_register_1getFieldSymbol_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIStatisticsThemeProxy *pObjectX = (JIStatisticsThemeProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_theme_Istatisticstheme_getFieldSymbol_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring field_j)
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
					const 					EarthView::World::Spatial::Theme::IStatisticsTheme *pObjectX = (EarthView::World::Spatial::Theme::IStatisticsTheme*) pObjXXXX;
					EarthView::World::Spatial::Display::ISymbol* __values1 = pObjectX->EarthView::World::Spatial::Theme::IStatisticsTheme::getFieldSymbol(field);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Istatisticstheme_setFieldSymbol_1EVString_1ISymbol(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring field_j, jlong symbol_j)
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
					EarthView::World::Spatial::Theme::IStatisticsTheme *pObjectX = (EarthView::World::Spatial::Theme::IStatisticsTheme*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIStatisticsThemeProxy))
					{
						pObjectX->EarthView::World::Spatial::Theme::IStatisticsTheme::setFieldSymbol(field, symbol);
					}
					else
					{
						pObjectX->setFieldSymbol(field, symbol);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Istatisticstheme_register_1setFieldSymbol_1EVString_1ISymbol(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIStatisticsThemeProxy *pObjectX = (JIStatisticsThemeProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Istatisticstheme_setFieldSymbol_1EVString_1ISymbol_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring field_j, jlong symbol_j)
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
					EarthView::World::Spatial::Theme::IStatisticsTheme *pObjectX = (EarthView::World::Spatial::Theme::IStatisticsTheme*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Theme::IStatisticsTheme::setFieldSymbol(field, symbol);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_theme_Istatisticstheme_getStatisticsType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Theme::IStatisticsTheme *pObjectX = (EarthView::World::Spatial::Theme::IStatisticsTheme*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIStatisticsThemeProxy))
					{
						EarthView::World::Spatial::Theme::EVStatisticsThemeType __values1 = pObjectX->EarthView::World::Spatial::Theme::IStatisticsTheme::getStatisticsType();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Istatisticstheme_register_1getStatisticsType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIStatisticsThemeProxy *pObjectX = (JIStatisticsThemeProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_theme_Istatisticstheme_getStatisticsType_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Theme::IStatisticsTheme *pObjectX = (EarthView::World::Spatial::Theme::IStatisticsTheme*) pObjXXXX;
					EarthView::World::Spatial::Theme::EVStatisticsThemeType __values1 = pObjectX->EarthView::World::Spatial::Theme::IStatisticsTheme::getStatisticsType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Istatisticstheme_setStatisticsType_1EVStatisticsThemeType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint type_j)
				{
					EarthView::World::Spatial::Theme::EVStatisticsThemeType type = (EarthView::World::Spatial::Theme::EVStatisticsThemeType) type_j;
					EarthView::World::Spatial::Theme::IStatisticsTheme *pObjectX = (EarthView::World::Spatial::Theme::IStatisticsTheme*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIStatisticsThemeProxy))
					{
						pObjectX->EarthView::World::Spatial::Theme::IStatisticsTheme::setStatisticsType(type);
					}
					else
					{
						pObjectX->setStatisticsType(type);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Istatisticstheme_register_1setStatisticsType_1EVStatisticsThemeType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIStatisticsThemeProxy *pObjectX = (JIStatisticsThemeProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Istatisticstheme_setStatisticsType_1EVStatisticsThemeType_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint type_j)
				{
					EarthView::World::Spatial::Theme::EVStatisticsThemeType type = (EarthView::World::Spatial::Theme::EVStatisticsThemeType) type_j;
					EarthView::World::Spatial::Theme::IStatisticsTheme *pObjectX = (EarthView::World::Spatial::Theme::IStatisticsTheme*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Theme::IStatisticsTheme::setStatisticsType(type);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_theme_Istatisticstheme_getStatisticsSymbol_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Theme::IStatisticsTheme *pObjectX = (EarthView::World::Spatial::Theme::IStatisticsTheme*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIStatisticsThemeProxy))
					{
						EarthView::World::Spatial::Display::ISymbol* __values1 = pObjectX->EarthView::World::Spatial::Theme::IStatisticsTheme::getStatisticsSymbol();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Istatisticstheme_register_1getStatisticsSymbol_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIStatisticsThemeProxy *pObjectX = (JIStatisticsThemeProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_theme_Istatisticstheme_getStatisticsSymbol_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Theme::IStatisticsTheme *pObjectX = (EarthView::World::Spatial::Theme::IStatisticsTheme*) pObjXXXX;
					EarthView::World::Spatial::Display::ISymbol* __values1 = pObjectX->EarthView::World::Spatial::Theme::IStatisticsTheme::getStatisticsSymbol();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_theme_Istatisticstheme_getPieSizePolicy_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Theme::IStatisticsTheme *pObjectX = (EarthView::World::Spatial::Theme::IStatisticsTheme*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIStatisticsThemeProxy))
					{
						EarthView::World::Spatial::Theme::EVPieSizePolicy __values1 = pObjectX->EarthView::World::Spatial::Theme::IStatisticsTheme::getPieSizePolicy();
						jint __values1_j = (jint) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Theme::EVPieSizePolicy __values1 = pObjectX->getPieSizePolicy();
						jint __values1_j = (jint) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Istatisticstheme_register_1getPieSizePolicy_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIStatisticsThemeProxy *pObjectX = (JIStatisticsThemeProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_theme_Istatisticstheme_getPieSizePolicy_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Theme::IStatisticsTheme *pObjectX = (EarthView::World::Spatial::Theme::IStatisticsTheme*) pObjXXXX;
					EarthView::World::Spatial::Theme::EVPieSizePolicy __values1 = pObjectX->EarthView::World::Spatial::Theme::IStatisticsTheme::getPieSizePolicy();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Istatisticstheme_setPieSizePolicy_1EVPieSizePolicy(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint policy_j)
				{
					EarthView::World::Spatial::Theme::EVPieSizePolicy policy = (EarthView::World::Spatial::Theme::EVPieSizePolicy) policy_j;
					EarthView::World::Spatial::Theme::IStatisticsTheme *pObjectX = (EarthView::World::Spatial::Theme::IStatisticsTheme*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIStatisticsThemeProxy))
					{
						pObjectX->EarthView::World::Spatial::Theme::IStatisticsTheme::setPieSizePolicy(policy);
					}
					else
					{
						pObjectX->setPieSizePolicy(policy);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Istatisticstheme_register_1setPieSizePolicy_1EVPieSizePolicy(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIStatisticsThemeProxy *pObjectX = (JIStatisticsThemeProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Istatisticstheme_setPieSizePolicy_1EVPieSizePolicy_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint policy_j)
				{
					EarthView::World::Spatial::Theme::EVPieSizePolicy policy = (EarthView::World::Spatial::Theme::EVPieSizePolicy) policy_j;
					EarthView::World::Spatial::Theme::IStatisticsTheme *pObjectX = (EarthView::World::Spatial::Theme::IStatisticsTheme*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Theme::IStatisticsTheme::setPieSizePolicy(policy);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_theme_Istatisticstheme_getProportionField_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Theme::IStatisticsTheme *pObjectX = (EarthView::World::Spatial::Theme::IStatisticsTheme*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIStatisticsThemeProxy))
					{
						EVString __values1 = pObjectX->EarthView::World::Spatial::Theme::IStatisticsTheme::getProportionField();
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
					else
					{
						EVString __values1 = pObjectX->getProportionField();
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Istatisticstheme_register_1getProportionField_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIStatisticsThemeProxy *pObjectX = (JIStatisticsThemeProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_theme_Istatisticstheme_getProportionField_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Theme::IStatisticsTheme *pObjectX = (EarthView::World::Spatial::Theme::IStatisticsTheme*) pObjXXXX;
					EVString __values1 = pObjectX->EarthView::World::Spatial::Theme::IStatisticsTheme::getProportionField();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Istatisticstheme_setProportionField_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring field_j)
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
					EarthView::World::Spatial::Theme::IStatisticsTheme *pObjectX = (EarthView::World::Spatial::Theme::IStatisticsTheme*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIStatisticsThemeProxy))
					{
						pObjectX->EarthView::World::Spatial::Theme::IStatisticsTheme::setProportionField(field);
					}
					else
					{
						pObjectX->setProportionField(field);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Istatisticstheme_register_1setProportionField_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIStatisticsThemeProxy *pObjectX = (JIStatisticsThemeProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Istatisticstheme_setProportionField_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring field_j)
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
					EarthView::World::Spatial::Theme::IStatisticsTheme *pObjectX = (EarthView::World::Spatial::Theme::IStatisticsTheme*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Theme::IStatisticsTheme::setProportionField(field);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Istatisticstheme_register_1getType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIStatisticsThemeProxy *pObjectX = (JIStatisticsThemeProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Istatisticstheme_register_1getCaption_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIStatisticsThemeProxy *pObjectX = (JIStatisticsThemeProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Istatisticstheme_register_1setCaption_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIStatisticsThemeProxy *pObjectX = (JIStatisticsThemeProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Istatisticstheme_register_1useDefaultSymbol_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIStatisticsThemeProxy *pObjectX = (JIStatisticsThemeProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Istatisticstheme_register_1setUseDefaultSymbol_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIStatisticsThemeProxy *pObjectX = (JIStatisticsThemeProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Istatisticstheme_register_1getDefaultSymbol_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIStatisticsThemeProxy *pObjectX = (JIStatisticsThemeProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Istatisticstheme_register_1setDefaultSymbol_1ISymbol(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIStatisticsThemeProxy *pObjectX = (JIStatisticsThemeProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Istatisticstheme_register_1ev_1equals_1ITheme(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIStatisticsThemeProxy *pObjectX = (JIStatisticsThemeProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Istatisticstheme_register_1ev_1clone_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIStatisticsThemeProxy *pObjectX = (JIStatisticsThemeProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Istatisticstheme_register_1toStream_1CDataStream(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIStatisticsThemeProxy *pObjectX = (JIStatisticsThemeProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Istatisticstheme_register_1toXmlElement_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIStatisticsThemeProxy *pObjectX = (JIStatisticsThemeProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Istatisticstheme_register_1fromXmlElement_1CXmlElement(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIStatisticsThemeProxy *pObjectX = (JIStatisticsThemeProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Istatisticstheme_register_1onBeforeQuery_1IFeatureClass_1IQueryFilter(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIStatisticsThemeProxy *pObjectX = (JIStatisticsThemeProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Istatisticstheme_register_1onAfterQuery_1IFeatureSelection_1IGeometry(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIStatisticsThemeProxy *pObjectX = (JIStatisticsThemeProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_theme_Istatisticstheme_register_1fromStream_1CDataStream(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIStatisticsThemeProxy *pObjectX = (JIStatisticsThemeProxy*) pObjXXXX;
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
