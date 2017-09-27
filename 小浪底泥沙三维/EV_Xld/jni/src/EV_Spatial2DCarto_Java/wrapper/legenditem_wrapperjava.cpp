/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial2dcarto/legenditem.h"
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
				class JCLegendItemProxy : public EarthView::World::Spatial::Carto::CLegendItem
				{
				 private:
					EarthView::World::Core::ev_string m_getName_void_callback;
					EarthView::World::Core::ev_string m_setName_EVString_callback;
					EarthView::World::Core::ev_string m_getFeatureSymbol_void_callback;
					EarthView::World::Core::ev_string m_setFeatureSymbol_ISymbol_callback;
					EarthView::World::Core::ev_string m_getGeometryType_void_callback;
					EarthView::World::Core::ev_string m_setGeometryType_EVGeometryType_callback;
					EarthView::World::Core::ev_string m_getDatasetName_void_callback;
					EarthView::World::Core::ev_string m_setDatasetName_EVString_callback;
					EarthView::World::Core::ev_string m_isParentItem_void_callback;
					EarthView::World::Core::ev_string m_setParentItem_ev_bool_callback;
					EarthView::World::Core::ev_string m_ev_clone_void_callback;
					EarthView::World::Core::ev_string m_fromXmlElement_CXmlElement_callback;
					EarthView::World::Core::ev_string m_toXmlElement_void_callback;
				public:
					JCLegendItemProxy(EarthView::World::Core::CNameValuePairList *pList) : CLegendItem(pList)
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
					C_DISABLE_COPY(JCLegendItemProxy)
				public:
					void register_getName_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getName_void_callback = __method;
					}
					void register_setName_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setName_EVString_callback = __method;
					}
					void register_getFeatureSymbol_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getFeatureSymbol_void_callback = __method;
					}
					void register_setFeatureSymbol_ISymbol_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setFeatureSymbol_ISymbol_callback = __method;
					}
					void register_getGeometryType_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getGeometryType_void_callback = __method;
					}
					void register_setGeometryType_EVGeometryType_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setGeometryType_EVGeometryType_callback = __method;
					}
					void register_getDatasetName_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getDatasetName_void_callback = __method;
					}
					void register_setDatasetName_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setDatasetName_EVString_callback = __method;
					}
					void register_isParentItem_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_isParentItem_void_callback = __method;
					}
					void register_setParentItem_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setParentItem_ev_bool_callback = __method;
					}
					void register_ev_clone_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_ev_clone_void_callback = __method;
					}
					void register_fromXmlElement_CXmlElement_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_fromXmlElement_CXmlElement_callback = __method;
					}
					void register_toXmlElement_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_toXmlElement_void_callback = __method;
					}
					virtual EVString getName() const
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
							return this->CLegendItem::getName();
						}
					}
					virtual void setName(const EVString& strName)
					{
						if (this->_gRef != NULL && this->m_setName_EVString_callback != "" && this->isCustomExtend())
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
							EarthView::World::Core::ev_wstring strName_wch = strName;
							jstring strName_j = __env->NewString((const jchar*)strName_wch.getString(), strName_wch.size());
							jmethodID __method = __gr->getMethod("setName_EVString_callback");
							__env->CallVoidMethod(__obj, __method , strName_j);
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
							return this->CLegendItem::setName(strName);
						}
					}
					virtual EarthView::World::Spatial::Display::ISymbol* getFeatureSymbol() const
					{
						if (this->_gRef != NULL && this->m_getFeatureSymbol_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getFeatureSymbol_void_callback");
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
							return this->CLegendItem::getFeatureSymbol();
						}
					}
					virtual void setFeatureSymbol(EarthView::World::Spatial::Display::ISymbol* pSymbol)
					{
						if (this->_gRef != NULL && this->m_setFeatureSymbol_ISymbol_callback != "" && this->isCustomExtend())
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
							jlong pSymbol_j = (jlong) pSymbol;
							jmethodID __method = __gr->getMethod("setFeatureSymbol_ISymbol_callback");
							__env->CallVoidMethod(__obj, __method , pSymbol_j);
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
							return this->CLegendItem::setFeatureSymbol(pSymbol);
						}
					}
					virtual EarthView::World::Spatial::Geometry::EVGeometryType getGeometryType() const
					{
						if (this->_gRef != NULL && this->m_getGeometryType_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getGeometryType_void_callback");
							jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::Geometry::EVGeometryType __values1 = (EarthView::World::Spatial::Geometry::EVGeometryType) __values1_j;
							return __values1;
						}
						else
						{
							return this->CLegendItem::getGeometryType();
						}
					}
					virtual void setGeometryType(EarthView::World::Spatial::Geometry::EVGeometryType type)
					{
						if (this->_gRef != NULL && this->m_setGeometryType_EVGeometryType_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("setGeometryType_EVGeometryType_callback");
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
							return this->CLegendItem::setGeometryType(type);
						}
					}
					virtual EVString getDatasetName() const
					{
						if (this->_gRef != NULL && this->m_getDatasetName_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getDatasetName_void_callback");
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
							return this->CLegendItem::getDatasetName();
						}
					}
					virtual void setDatasetName(EVString strName)
					{
						if (this->_gRef != NULL && this->m_setDatasetName_EVString_callback != "" && this->isCustomExtend())
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
							EarthView::World::Core::ev_wstring strName_wch = strName;
							jstring strName_j = __env->NewString((const jchar*)strName_wch.getString(), strName_wch.size());
							jmethodID __method = __gr->getMethod("setDatasetName_EVString_callback");
							__env->CallVoidMethod(__obj, __method , strName_j);
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
							return this->CLegendItem::setDatasetName(strName);
						}
					}
					virtual ev_bool isParentItem() const
					{
						if (this->_gRef != NULL && this->m_isParentItem_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("isParentItem_void_callback");
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
							return this->CLegendItem::isParentItem();
						}
					}
					virtual void setParentItem(const ev_bool bParent)
					{
						if (this->_gRef != NULL && this->m_setParentItem_ev_bool_callback != "" && this->isCustomExtend())
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
							jboolean bParent_j = (jboolean) bParent;
							jmethodID __method = __gr->getMethod("setParentItem_ev_bool_callback");
							__env->CallVoidMethod(__obj, __method , bParent_j);
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
							return this->CLegendItem::setParentItem(bParent);
						}
					}
					virtual EarthView::World::Spatial::Carto::ILegendItem* clone() const
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
							EarthView::World::Spatial::Carto::ILegendItem *__values1 = (EarthView::World::Spatial::Carto::ILegendItem*) __values1_j;
							if(__values1 != NULL) {
								((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(false);
							}
							return __values1;
						}
						else
						{
							return this->CLegendItem::clone();
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
							return this->CLegendItem::fromXmlElement(element);
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
							return this->CLegendItem::toXmlElement();
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCLegendItemProxy);
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_carto_LegendItem_getName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::CLegendItem *pObjectX = (EarthView::World::Spatial::Carto::CLegendItem*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCLegendItemProxy))
					{
						EVString __values1 = pObjectX->EarthView::World::Spatial::Carto::CLegendItem::getName();
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
					else
					{
						EVString __values1 = pObjectX->getName();
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_LegendItem_register_1getName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCLegendItemProxy *pObjectX = (JCLegendItemProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_carto_LegendItem_getName_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::CLegendItem *pObjectX = (EarthView::World::Spatial::Carto::CLegendItem*) pObjXXXX;
					EVString __values1 = pObjectX->EarthView::World::Spatial::Carto::CLegendItem::getName();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_LegendItem_setName_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring strName_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* strName_ch = (const ev_char*)__env->GetStringUTFChars(strName_j,JNI_FALSE);
					const EVString strName = strName_ch;
					__env->ReleaseStringUTFChars(strName_j, (const char *)strName_ch);
					#else
					const ev_wchar* strName_ch = (const ev_wchar*)__env->GetStringChars(strName_j,JNI_FALSE);
					const EVString strName = strName_ch;
					__env->ReleaseStringChars(strName_j, (const jchar *)strName_ch);
					#endif
					EarthView::World::Spatial::Carto::CLegendItem *pObjectX = (EarthView::World::Spatial::Carto::CLegendItem*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCLegendItemProxy))
					{
						pObjectX->EarthView::World::Spatial::Carto::CLegendItem::setName(strName);
					}
					else
					{
						pObjectX->setName(strName);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_LegendItem_register_1setName_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCLegendItemProxy *pObjectX = (JCLegendItemProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setName_EVString_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setName_EVString_callback", "(Ljava/lang/String;)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_LegendItem_setName_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring strName_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* strName_ch = (const ev_char*)__env->GetStringUTFChars(strName_j,JNI_FALSE);
					const EVString strName = strName_ch;
					__env->ReleaseStringUTFChars(strName_j, (const char *)strName_ch);
					#else
					const ev_wchar* strName_ch = (const ev_wchar*)__env->GetStringChars(strName_j,JNI_FALSE);
					const EVString strName = strName_ch;
					__env->ReleaseStringChars(strName_j, (const jchar *)strName_ch);
					#endif
					EarthView::World::Spatial::Carto::CLegendItem *pObjectX = (EarthView::World::Spatial::Carto::CLegendItem*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Carto::CLegendItem::setName(strName);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_carto_LegendItem_getFeatureSymbol_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::CLegendItem *pObjectX = (EarthView::World::Spatial::Carto::CLegendItem*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCLegendItemProxy))
					{
						EarthView::World::Spatial::Display::ISymbol* __values1 = pObjectX->EarthView::World::Spatial::Carto::CLegendItem::getFeatureSymbol();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Display::ISymbol* __values1 = pObjectX->getFeatureSymbol();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_LegendItem_register_1getFeatureSymbol_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCLegendItemProxy *pObjectX = (JCLegendItemProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getFeatureSymbol_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getFeatureSymbol_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_carto_LegendItem_getFeatureSymbol_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::CLegendItem *pObjectX = (EarthView::World::Spatial::Carto::CLegendItem*) pObjXXXX;
					EarthView::World::Spatial::Display::ISymbol* __values1 = pObjectX->EarthView::World::Spatial::Carto::CLegendItem::getFeatureSymbol();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_LegendItem_setFeatureSymbol_1ISymbol(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pSymbol_j)
				{
					EarthView::World::Spatial::Display::ISymbol *pSymbol = (EarthView::World::Spatial::Display::ISymbol*) pSymbol_j;
					EarthView::World::Spatial::Carto::CLegendItem *pObjectX = (EarthView::World::Spatial::Carto::CLegendItem*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCLegendItemProxy))
					{
						pObjectX->EarthView::World::Spatial::Carto::CLegendItem::setFeatureSymbol(pSymbol);
					}
					else
					{
						pObjectX->setFeatureSymbol(pSymbol);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_LegendItem_register_1setFeatureSymbol_1ISymbol(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCLegendItemProxy *pObjectX = (JCLegendItemProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setFeatureSymbol_ISymbol_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setFeatureSymbol_ISymbol_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_LegendItem_setFeatureSymbol_1ISymbol_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pSymbol_j)
				{
					EarthView::World::Spatial::Display::ISymbol *pSymbol = (EarthView::World::Spatial::Display::ISymbol*) pSymbol_j;
					EarthView::World::Spatial::Carto::CLegendItem *pObjectX = (EarthView::World::Spatial::Carto::CLegendItem*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Carto::CLegendItem::setFeatureSymbol(pSymbol);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_carto_LegendItem_getGeometryType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::CLegendItem *pObjectX = (EarthView::World::Spatial::Carto::CLegendItem*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCLegendItemProxy))
					{
						EarthView::World::Spatial::Geometry::EVGeometryType __values1 = pObjectX->EarthView::World::Spatial::Carto::CLegendItem::getGeometryType();
						jint __values1_j = (jint) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Geometry::EVGeometryType __values1 = pObjectX->getGeometryType();
						jint __values1_j = (jint) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_LegendItem_register_1getGeometryType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCLegendItemProxy *pObjectX = (JCLegendItemProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getGeometryType_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getGeometryType_void_callback", "()I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_carto_LegendItem_getGeometryType_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::CLegendItem *pObjectX = (EarthView::World::Spatial::Carto::CLegendItem*) pObjXXXX;
					EarthView::World::Spatial::Geometry::EVGeometryType __values1 = pObjectX->EarthView::World::Spatial::Carto::CLegendItem::getGeometryType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_LegendItem_setGeometryType_1EVGeometryType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint type_j)
				{
					EarthView::World::Spatial::Geometry::EVGeometryType type = (EarthView::World::Spatial::Geometry::EVGeometryType) type_j;
					EarthView::World::Spatial::Carto::CLegendItem *pObjectX = (EarthView::World::Spatial::Carto::CLegendItem*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCLegendItemProxy))
					{
						pObjectX->EarthView::World::Spatial::Carto::CLegendItem::setGeometryType(type);
					}
					else
					{
						pObjectX->setGeometryType(type);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_LegendItem_register_1setGeometryType_1EVGeometryType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCLegendItemProxy *pObjectX = (JCLegendItemProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setGeometryType_EVGeometryType_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setGeometryType_EVGeometryType_callback", "(I)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_LegendItem_setGeometryType_1EVGeometryType_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint type_j)
				{
					EarthView::World::Spatial::Geometry::EVGeometryType type = (EarthView::World::Spatial::Geometry::EVGeometryType) type_j;
					EarthView::World::Spatial::Carto::CLegendItem *pObjectX = (EarthView::World::Spatial::Carto::CLegendItem*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Carto::CLegendItem::setGeometryType(type);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_carto_LegendItem_getDatasetName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::CLegendItem *pObjectX = (EarthView::World::Spatial::Carto::CLegendItem*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCLegendItemProxy))
					{
						EVString __values1 = pObjectX->EarthView::World::Spatial::Carto::CLegendItem::getDatasetName();
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
					else
					{
						EVString __values1 = pObjectX->getDatasetName();
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_LegendItem_register_1getDatasetName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCLegendItemProxy *pObjectX = (JCLegendItemProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getDatasetName_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getDatasetName_void_callback", "()Ljava/lang/String;");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_carto_LegendItem_getDatasetName_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::CLegendItem *pObjectX = (EarthView::World::Spatial::Carto::CLegendItem*) pObjXXXX;
					EVString __values1 = pObjectX->EarthView::World::Spatial::Carto::CLegendItem::getDatasetName();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_LegendItem_setDatasetName_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring strName_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* strName_ch = (const ev_char*)__env->GetStringUTFChars(strName_j,JNI_FALSE);
					EVString strName = strName_ch;
					__env->ReleaseStringUTFChars(strName_j, (const char *)strName_ch);
					#else
					const ev_wchar* strName_ch = (const ev_wchar*)__env->GetStringChars(strName_j,JNI_FALSE);
					EVString strName = strName_ch;
					__env->ReleaseStringChars(strName_j, (const jchar *)strName_ch);
					#endif
					EarthView::World::Spatial::Carto::CLegendItem *pObjectX = (EarthView::World::Spatial::Carto::CLegendItem*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCLegendItemProxy))
					{
						pObjectX->EarthView::World::Spatial::Carto::CLegendItem::setDatasetName(strName);
					}
					else
					{
						pObjectX->setDatasetName(strName);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_LegendItem_register_1setDatasetName_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCLegendItemProxy *pObjectX = (JCLegendItemProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setDatasetName_EVString_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setDatasetName_EVString_callback", "(Ljava/lang/String;)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_LegendItem_setDatasetName_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring strName_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* strName_ch = (const ev_char*)__env->GetStringUTFChars(strName_j,JNI_FALSE);
					EVString strName = strName_ch;
					__env->ReleaseStringUTFChars(strName_j, (const char *)strName_ch);
					#else
					const ev_wchar* strName_ch = (const ev_wchar*)__env->GetStringChars(strName_j,JNI_FALSE);
					EVString strName = strName_ch;
					__env->ReleaseStringChars(strName_j, (const jchar *)strName_ch);
					#endif
					EarthView::World::Spatial::Carto::CLegendItem *pObjectX = (EarthView::World::Spatial::Carto::CLegendItem*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Carto::CLegendItem::setDatasetName(strName);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_LegendItem_setTransparentValue_1ev_1uint8(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jshort nValue_j)
				{
					ev_uint8 nValue = (ev_uint8) nValue_j;
					EarthView::World::Spatial::Carto::CLegendItem *pObjectX = (EarthView::World::Spatial::Carto::CLegendItem*) pObjXXXX;
					pObjectX->setTransparentValue(nValue);
				}
				extern "C" JNIEXPORT jshort JNICALL Java_com_earthview_world_spatial_carto_LegendItem_getTransparentValue_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::CLegendItem *pObjectX = (EarthView::World::Spatial::Carto::CLegendItem*) pObjXXXX;
					ev_uint8 __values1 = pObjectX->getTransparentValue();
					jshort __values1_j = (jshort) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_carto_LegendItem_isParentItem_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::CLegendItem *pObjectX = (EarthView::World::Spatial::Carto::CLegendItem*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCLegendItemProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::Carto::CLegendItem::isParentItem();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->isParentItem();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_LegendItem_register_1isParentItem_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCLegendItemProxy *pObjectX = (JCLegendItemProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_isParentItem_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"isParentItem_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_carto_LegendItem_isParentItem_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::CLegendItem *pObjectX = (EarthView::World::Spatial::Carto::CLegendItem*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::Carto::CLegendItem::isParentItem();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_LegendItem_setParentItem_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean bParent_j)
				{
					const ev_bool bParent = (ev_bool) bParent_j;
					EarthView::World::Spatial::Carto::CLegendItem *pObjectX = (EarthView::World::Spatial::Carto::CLegendItem*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCLegendItemProxy))
					{
						pObjectX->EarthView::World::Spatial::Carto::CLegendItem::setParentItem(bParent);
					}
					else
					{
						pObjectX->setParentItem(bParent);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_LegendItem_register_1setParentItem_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCLegendItemProxy *pObjectX = (JCLegendItemProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setParentItem_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setParentItem_ev_bool_callback", "(Z)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_LegendItem_setParentItem_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean bParent_j)
				{
					const ev_bool bParent = (ev_bool) bParent_j;
					EarthView::World::Spatial::Carto::CLegendItem *pObjectX = (EarthView::World::Spatial::Carto::CLegendItem*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Carto::CLegendItem::setParentItem(bParent);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_carto_LegendItem_ev_1clone_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::CLegendItem *pObjectX = (EarthView::World::Spatial::Carto::CLegendItem*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCLegendItemProxy))
					{
						EarthView::World::Spatial::Carto::ILegendItem* __values1 = pObjectX->EarthView::World::Spatial::Carto::CLegendItem::clone();
						if(__values1 != NULL) {							((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
						}						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Carto::ILegendItem* __values1 = pObjectX->clone();
						if(__values1 != NULL) {							((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
						}						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_LegendItem_register_1ev_1clone_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCLegendItemProxy *pObjectX = (JCLegendItemProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_carto_LegendItem_ev_1clone_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::CLegendItem *pObjectX = (EarthView::World::Spatial::Carto::CLegendItem*) pObjXXXX;
					EarthView::World::Spatial::Carto::ILegendItem* __values1 = pObjectX->EarthView::World::Spatial::Carto::CLegendItem::clone();
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_LegendItem_fromXmlElement_1CXmlElement(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong element_j)
				{
					EarthView::World::Core::CXmlElement &element = *(EarthView::World::Core::CXmlElement*) element_j;
					EarthView::World::Spatial::Carto::CLegendItem *pObjectX = (EarthView::World::Spatial::Carto::CLegendItem*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCLegendItemProxy))
					{
						pObjectX->EarthView::World::Spatial::Carto::CLegendItem::fromXmlElement(element);
					}
					else
					{
						pObjectX->fromXmlElement(element);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_LegendItem_register_1fromXmlElement_1CXmlElement(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCLegendItemProxy *pObjectX = (JCLegendItemProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_LegendItem_fromXmlElement_1CXmlElement_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong element_j)
				{
					EarthView::World::Core::CXmlElement &element = *(EarthView::World::Core::CXmlElement*) element_j;
					EarthView::World::Spatial::Carto::CLegendItem *pObjectX = (EarthView::World::Spatial::Carto::CLegendItem*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Carto::CLegendItem::fromXmlElement(element);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_carto_LegendItem_toXmlElement_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::CLegendItem *pObjectX = (EarthView::World::Spatial::Carto::CLegendItem*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCLegendItemProxy))
					{
						EarthView::World::Core::CXmlElement __values1 = pObjectX->EarthView::World::Spatial::Carto::CLegendItem::toXmlElement();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_LegendItem_register_1toXmlElement_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCLegendItemProxy *pObjectX = (JCLegendItemProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_carto_LegendItem_toXmlElement_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::CLegendItem *pObjectX = (EarthView::World::Spatial::Carto::CLegendItem*) pObjXXXX;
					EarthView::World::Core::CXmlElement __values1 = pObjectX->EarthView::World::Spatial::Carto::CLegendItem::toXmlElement();
					EarthView::World::Core::CXmlElement *returnvalues = new EarthView::World::Core::CXmlElement(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				class JCLegendItemVectorProxy : public EarthView::World::Spatial::Carto::CLegendItemVector
				{
				 private:
					EarthView::World::Core::ev_string m_removeLegendItem_ev_int32_callback;
					EarthView::World::Core::ev_string m_addLegendItem_ILegendItem_callback;
					EarthView::World::Core::ev_string m_getItemCount_void_callback;
					EarthView::World::Core::ev_string m_getParentItemCount_void_callback;
					EarthView::World::Core::ev_string m_getLegendItem_ev_int32_callback;
					EarthView::World::Core::ev_string m_addIgnoreDataset_EVString_callback;
					EarthView::World::Core::ev_string m_removeIgnoreDataset_EVString_callback;
					EarthView::World::Core::ev_string m_getIgnoreDataset_ev_int32_callback;
					EarthView::World::Core::ev_string m_getIgnoreDatasetCount_void_callback;
					EarthView::World::Core::ev_string m_clearIgnoreDataset_void_callback;
					EarthView::World::Core::ev_string m_isIgnoreDataset_EVString_callback;
					EarthView::World::Core::ev_string m_clearAllItem_void_callback;
					EarthView::World::Core::ev_string m_ev_clone_void_callback;
					EarthView::World::Core::ev_string m_fromXmlElement_CXmlElement_callback;
					EarthView::World::Core::ev_string m_toXmlElement_void_callback;
				public:
					JCLegendItemVectorProxy(EarthView::World::Core::CNameValuePairList *pList) : CLegendItemVector(pList)
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
					C_DISABLE_COPY(JCLegendItemVectorProxy)
				public:
					void register_removeLegendItem_ev_int32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_removeLegendItem_ev_int32_callback = __method;
					}
					void register_addLegendItem_ILegendItem_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_addLegendItem_ILegendItem_callback = __method;
					}
					void register_getItemCount_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getItemCount_void_callback = __method;
					}
					void register_getParentItemCount_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getParentItemCount_void_callback = __method;
					}
					void register_getLegendItem_ev_int32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getLegendItem_ev_int32_callback = __method;
					}
					void register_addIgnoreDataset_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_addIgnoreDataset_EVString_callback = __method;
					}
					void register_removeIgnoreDataset_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_removeIgnoreDataset_EVString_callback = __method;
					}
					void register_getIgnoreDataset_ev_int32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getIgnoreDataset_ev_int32_callback = __method;
					}
					void register_getIgnoreDatasetCount_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getIgnoreDatasetCount_void_callback = __method;
					}
					void register_clearIgnoreDataset_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_clearIgnoreDataset_void_callback = __method;
					}
					void register_isIgnoreDataset_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_isIgnoreDataset_EVString_callback = __method;
					}
					void register_clearAllItem_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_clearAllItem_void_callback = __method;
					}
					void register_ev_clone_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_ev_clone_void_callback = __method;
					}
					void register_fromXmlElement_CXmlElement_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_fromXmlElement_CXmlElement_callback = __method;
					}
					void register_toXmlElement_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_toXmlElement_void_callback = __method;
					}
					virtual void removeLegendItem(const ev_int32 nIndex)
					{
						if (this->_gRef != NULL && this->m_removeLegendItem_ev_int32_callback != "" && this->isCustomExtend())
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
							jint nIndex_j = (jint) nIndex;
							jmethodID __method = __gr->getMethod("removeLegendItem_ev_int32_callback");
							__env->CallVoidMethod(__obj, __method , nIndex_j);
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
							return this->CLegendItemVector::removeLegendItem(nIndex);
						}
					}
					virtual void addLegendItem(const ILegendItem* pItem)
					{
						if (this->_gRef != NULL && this->m_addLegendItem_ILegendItem_callback != "" && this->isCustomExtend())
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
							jlong pItem_j = (jlong) pItem;
							jmethodID __method = __gr->getMethod("addLegendItem_ILegendItem_callback");
							__env->CallVoidMethod(__obj, __method , pItem_j);
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
							return this->CLegendItemVector::addLegendItem(pItem);
						}
					}
					virtual ev_int32 getItemCount()
					{
						if (this->_gRef != NULL && this->m_getItemCount_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getItemCount_void_callback");
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
							return this->CLegendItemVector::getItemCount();
						}
					}
					virtual ev_int32 getParentItemCount() const
					{
						if (this->_gRef != NULL && this->m_getParentItemCount_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getParentItemCount_void_callback");
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
							return this->CLegendItemVector::getParentItemCount();
						}
					}
					virtual ILegendItem* getLegendItem(const ev_int32 nIndex)
					{
						if (this->_gRef != NULL && this->m_getLegendItem_ev_int32_callback != "" && this->isCustomExtend())
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
							jint nIndex_j = (jint) nIndex;
							jmethodID __method = __gr->getMethod("getLegendItem_ev_int32_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , nIndex_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ILegendItem *__values1 = (ILegendItem*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CLegendItemVector::getLegendItem(nIndex);
						}
					}
					virtual void addIgnoreDataset(EVString strName)
					{
						if (this->_gRef != NULL && this->m_addIgnoreDataset_EVString_callback != "" && this->isCustomExtend())
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
							EarthView::World::Core::ev_wstring strName_wch = strName;
							jstring strName_j = __env->NewString((const jchar*)strName_wch.getString(), strName_wch.size());
							jmethodID __method = __gr->getMethod("addIgnoreDataset_EVString_callback");
							__env->CallVoidMethod(__obj, __method , strName_j);
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
							return this->CLegendItemVector::addIgnoreDataset(strName);
						}
					}
					virtual ev_bool removeIgnoreDataset(EVString strName)
					{
						if (this->_gRef != NULL && this->m_removeIgnoreDataset_EVString_callback != "" && this->isCustomExtend())
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
							EarthView::World::Core::ev_wstring strName_wch = strName;
							jstring strName_j = __env->NewString((const jchar*)strName_wch.getString(), strName_wch.size());
							jmethodID __method = __gr->getMethod("removeIgnoreDataset_EVString_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , strName_j);
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
							return this->CLegendItemVector::removeIgnoreDataset(strName);
						}
					}
					virtual EVString getIgnoreDataset(ev_int32 nIndex)
					{
						if (this->_gRef != NULL && this->m_getIgnoreDataset_ev_int32_callback != "" && this->isCustomExtend())
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
							jint nIndex_j = (jint) nIndex;
							jmethodID __method = __gr->getMethod("getIgnoreDataset_ev_int32_callback");
							jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method , nIndex_j);
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
							return this->CLegendItemVector::getIgnoreDataset(nIndex);
						}
					}
					virtual ev_int32 getIgnoreDatasetCount()
					{
						if (this->_gRef != NULL && this->m_getIgnoreDatasetCount_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getIgnoreDatasetCount_void_callback");
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
							return this->CLegendItemVector::getIgnoreDatasetCount();
						}
					}
					virtual void clearIgnoreDataset()
					{
						if (this->_gRef != NULL && this->m_clearIgnoreDataset_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("clearIgnoreDataset_void_callback");
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
							return this->CLegendItemVector::clearIgnoreDataset();
						}
					}
					virtual ev_bool isIgnoreDataset(EVString strName)
					{
						if (this->_gRef != NULL && this->m_isIgnoreDataset_EVString_callback != "" && this->isCustomExtend())
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
							EarthView::World::Core::ev_wstring strName_wch = strName;
							jstring strName_j = __env->NewString((const jchar*)strName_wch.getString(), strName_wch.size());
							jmethodID __method = __gr->getMethod("isIgnoreDataset_EVString_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , strName_j);
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
							return this->CLegendItemVector::isIgnoreDataset(strName);
						}
					}
					virtual void clearAllItem()
					{
						if (this->_gRef != NULL && this->m_clearAllItem_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("clearAllItem_void_callback");
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
							return this->CLegendItemVector::clearAllItem();
						}
					}
					virtual EarthView::World::Spatial::Carto::ILegendItemVector* clone() const
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
							EarthView::World::Spatial::Carto::ILegendItemVector *__values1 = (EarthView::World::Spatial::Carto::ILegendItemVector*) __values1_j;
							if(__values1 != NULL) {
								((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(false);
							}
							return __values1;
						}
						else
						{
							return this->CLegendItemVector::clone();
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
							return this->CLegendItemVector::fromXmlElement(element);
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
							return this->CLegendItemVector::toXmlElement();
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCLegendItemVectorProxy);
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_LegendItemVector_removeLegendItem_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint nIndex_j)
				{
					const ev_int32 nIndex = (ev_int32) nIndex_j;
					EarthView::World::Spatial::Carto::CLegendItemVector *pObjectX = (EarthView::World::Spatial::Carto::CLegendItemVector*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCLegendItemVectorProxy))
					{
						pObjectX->EarthView::World::Spatial::Carto::CLegendItemVector::removeLegendItem(nIndex);
					}
					else
					{
						pObjectX->removeLegendItem(nIndex);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_LegendItemVector_register_1removeLegendItem_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCLegendItemVectorProxy *pObjectX = (JCLegendItemVectorProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_removeLegendItem_ev_int32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"removeLegendItem_ev_int32_callback", "(I)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_LegendItemVector_removeLegendItem_1ev_1int32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint nIndex_j)
				{
					const ev_int32 nIndex = (ev_int32) nIndex_j;
					EarthView::World::Spatial::Carto::CLegendItemVector *pObjectX = (EarthView::World::Spatial::Carto::CLegendItemVector*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Carto::CLegendItemVector::removeLegendItem(nIndex);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_LegendItemVector_addLegendItem_1ILegendItem(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pItem_j)
				{
					const ILegendItem *pItem = (const ILegendItem*) pItem_j;
					EarthView::World::Spatial::Carto::CLegendItemVector *pObjectX = (EarthView::World::Spatial::Carto::CLegendItemVector*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCLegendItemVectorProxy))
					{
						pObjectX->EarthView::World::Spatial::Carto::CLegendItemVector::addLegendItem(pItem);
					}
					else
					{
						pObjectX->addLegendItem(pItem);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_LegendItemVector_register_1addLegendItem_1ILegendItem(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCLegendItemVectorProxy *pObjectX = (JCLegendItemVectorProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_addLegendItem_ILegendItem_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"addLegendItem_ILegendItem_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_LegendItemVector_addLegendItem_1ILegendItem_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pItem_j)
				{
					const ILegendItem *pItem = (const ILegendItem*) pItem_j;
					EarthView::World::Spatial::Carto::CLegendItemVector *pObjectX = (EarthView::World::Spatial::Carto::CLegendItemVector*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Carto::CLegendItemVector::addLegendItem(pItem);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_carto_LegendItemVector_getItemCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Carto::CLegendItemVector *pObjectX = (EarthView::World::Spatial::Carto::CLegendItemVector*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCLegendItemVectorProxy))
					{
						ev_int32 __values1 = pObjectX->EarthView::World::Spatial::Carto::CLegendItemVector::getItemCount();
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
					else
					{
						ev_int32 __values1 = pObjectX->getItemCount();
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_LegendItemVector_register_1getItemCount_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCLegendItemVectorProxy *pObjectX = (JCLegendItemVectorProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getItemCount_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getItemCount_void_callback", "()I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_carto_LegendItemVector_getItemCount_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Carto::CLegendItemVector *pObjectX = (EarthView::World::Spatial::Carto::CLegendItemVector*) pObjXXXX;
					ev_int32 __values1 = pObjectX->EarthView::World::Spatial::Carto::CLegendItemVector::getItemCount();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_carto_LegendItemVector_getParentItemCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::CLegendItemVector *pObjectX = (EarthView::World::Spatial::Carto::CLegendItemVector*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCLegendItemVectorProxy))
					{
						ev_int32 __values1 = pObjectX->EarthView::World::Spatial::Carto::CLegendItemVector::getParentItemCount();
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
					else
					{
						ev_int32 __values1 = pObjectX->getParentItemCount();
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_LegendItemVector_register_1getParentItemCount_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCLegendItemVectorProxy *pObjectX = (JCLegendItemVectorProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getParentItemCount_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getParentItemCount_void_callback", "()I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_carto_LegendItemVector_getParentItemCount_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::CLegendItemVector *pObjectX = (EarthView::World::Spatial::Carto::CLegendItemVector*) pObjXXXX;
					ev_int32 __values1 = pObjectX->EarthView::World::Spatial::Carto::CLegendItemVector::getParentItemCount();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_carto_LegendItemVector_getLegendItem_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint nIndex_j)
				{
					const ev_int32 nIndex = (ev_int32) nIndex_j;
					EarthView::World::Spatial::Carto::CLegendItemVector *pObjectX = (EarthView::World::Spatial::Carto::CLegendItemVector*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCLegendItemVectorProxy))
					{
						ILegendItem* __values1 = pObjectX->EarthView::World::Spatial::Carto::CLegendItemVector::getLegendItem(nIndex);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						ILegendItem* __values1 = pObjectX->getLegendItem(nIndex);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_LegendItemVector_register_1getLegendItem_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCLegendItemVectorProxy *pObjectX = (JCLegendItemVectorProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getLegendItem_ev_int32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getLegendItem_ev_int32_callback", "(I)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_carto_LegendItemVector_getLegendItem_1ev_1int32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint nIndex_j)
				{
					const ev_int32 nIndex = (ev_int32) nIndex_j;
					EarthView::World::Spatial::Carto::CLegendItemVector *pObjectX = (EarthView::World::Spatial::Carto::CLegendItemVector*) pObjXXXX;
					ILegendItem* __values1 = pObjectX->EarthView::World::Spatial::Carto::CLegendItemVector::getLegendItem(nIndex);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_LegendItemVector_addIgnoreDataset_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring strName_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* strName_ch = (const ev_char*)__env->GetStringUTFChars(strName_j,JNI_FALSE);
					EVString strName = strName_ch;
					__env->ReleaseStringUTFChars(strName_j, (const char *)strName_ch);
					#else
					const ev_wchar* strName_ch = (const ev_wchar*)__env->GetStringChars(strName_j,JNI_FALSE);
					EVString strName = strName_ch;
					__env->ReleaseStringChars(strName_j, (const jchar *)strName_ch);
					#endif
					EarthView::World::Spatial::Carto::CLegendItemVector *pObjectX = (EarthView::World::Spatial::Carto::CLegendItemVector*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCLegendItemVectorProxy))
					{
						pObjectX->EarthView::World::Spatial::Carto::CLegendItemVector::addIgnoreDataset(strName);
					}
					else
					{
						pObjectX->addIgnoreDataset(strName);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_LegendItemVector_register_1addIgnoreDataset_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCLegendItemVectorProxy *pObjectX = (JCLegendItemVectorProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_addIgnoreDataset_EVString_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"addIgnoreDataset_EVString_callback", "(Ljava/lang/String;)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_LegendItemVector_addIgnoreDataset_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring strName_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* strName_ch = (const ev_char*)__env->GetStringUTFChars(strName_j,JNI_FALSE);
					EVString strName = strName_ch;
					__env->ReleaseStringUTFChars(strName_j, (const char *)strName_ch);
					#else
					const ev_wchar* strName_ch = (const ev_wchar*)__env->GetStringChars(strName_j,JNI_FALSE);
					EVString strName = strName_ch;
					__env->ReleaseStringChars(strName_j, (const jchar *)strName_ch);
					#endif
					EarthView::World::Spatial::Carto::CLegendItemVector *pObjectX = (EarthView::World::Spatial::Carto::CLegendItemVector*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Carto::CLegendItemVector::addIgnoreDataset(strName);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_carto_LegendItemVector_removeIgnoreDataset_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring strName_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* strName_ch = (const ev_char*)__env->GetStringUTFChars(strName_j,JNI_FALSE);
					EVString strName = strName_ch;
					__env->ReleaseStringUTFChars(strName_j, (const char *)strName_ch);
					#else
					const ev_wchar* strName_ch = (const ev_wchar*)__env->GetStringChars(strName_j,JNI_FALSE);
					EVString strName = strName_ch;
					__env->ReleaseStringChars(strName_j, (const jchar *)strName_ch);
					#endif
					EarthView::World::Spatial::Carto::CLegendItemVector *pObjectX = (EarthView::World::Spatial::Carto::CLegendItemVector*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCLegendItemVectorProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::Carto::CLegendItemVector::removeIgnoreDataset(strName);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->removeIgnoreDataset(strName);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_LegendItemVector_register_1removeIgnoreDataset_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCLegendItemVectorProxy *pObjectX = (JCLegendItemVectorProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_removeIgnoreDataset_EVString_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"removeIgnoreDataset_EVString_callback", "(Ljava/lang/String;)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_carto_LegendItemVector_removeIgnoreDataset_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring strName_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* strName_ch = (const ev_char*)__env->GetStringUTFChars(strName_j,JNI_FALSE);
					EVString strName = strName_ch;
					__env->ReleaseStringUTFChars(strName_j, (const char *)strName_ch);
					#else
					const ev_wchar* strName_ch = (const ev_wchar*)__env->GetStringChars(strName_j,JNI_FALSE);
					EVString strName = strName_ch;
					__env->ReleaseStringChars(strName_j, (const jchar *)strName_ch);
					#endif
					EarthView::World::Spatial::Carto::CLegendItemVector *pObjectX = (EarthView::World::Spatial::Carto::CLegendItemVector*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::Carto::CLegendItemVector::removeIgnoreDataset(strName);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_carto_LegendItemVector_getIgnoreDataset_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint nIndex_j)
				{
					ev_int32 nIndex = (ev_int32) nIndex_j;
					EarthView::World::Spatial::Carto::CLegendItemVector *pObjectX = (EarthView::World::Spatial::Carto::CLegendItemVector*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCLegendItemVectorProxy))
					{
						EVString __values1 = pObjectX->EarthView::World::Spatial::Carto::CLegendItemVector::getIgnoreDataset(nIndex);
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
					else
					{
						EVString __values1 = pObjectX->getIgnoreDataset(nIndex);
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_LegendItemVector_register_1getIgnoreDataset_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCLegendItemVectorProxy *pObjectX = (JCLegendItemVectorProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getIgnoreDataset_ev_int32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getIgnoreDataset_ev_int32_callback", "(I)Ljava/lang/String;");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_carto_LegendItemVector_getIgnoreDataset_1ev_1int32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint nIndex_j)
				{
					ev_int32 nIndex = (ev_int32) nIndex_j;
					EarthView::World::Spatial::Carto::CLegendItemVector *pObjectX = (EarthView::World::Spatial::Carto::CLegendItemVector*) pObjXXXX;
					EVString __values1 = pObjectX->EarthView::World::Spatial::Carto::CLegendItemVector::getIgnoreDataset(nIndex);
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_carto_LegendItemVector_getIgnoreDatasetCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Carto::CLegendItemVector *pObjectX = (EarthView::World::Spatial::Carto::CLegendItemVector*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCLegendItemVectorProxy))
					{
						ev_int32 __values1 = pObjectX->EarthView::World::Spatial::Carto::CLegendItemVector::getIgnoreDatasetCount();
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
					else
					{
						ev_int32 __values1 = pObjectX->getIgnoreDatasetCount();
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_LegendItemVector_register_1getIgnoreDatasetCount_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCLegendItemVectorProxy *pObjectX = (JCLegendItemVectorProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getIgnoreDatasetCount_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getIgnoreDatasetCount_void_callback", "()I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_carto_LegendItemVector_getIgnoreDatasetCount_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Carto::CLegendItemVector *pObjectX = (EarthView::World::Spatial::Carto::CLegendItemVector*) pObjXXXX;
					ev_int32 __values1 = pObjectX->EarthView::World::Spatial::Carto::CLegendItemVector::getIgnoreDatasetCount();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_LegendItemVector_clearIgnoreDataset_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Carto::CLegendItemVector *pObjectX = (EarthView::World::Spatial::Carto::CLegendItemVector*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCLegendItemVectorProxy))
					{
						pObjectX->EarthView::World::Spatial::Carto::CLegendItemVector::clearIgnoreDataset();
					}
					else
					{
						pObjectX->clearIgnoreDataset();
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_LegendItemVector_register_1clearIgnoreDataset_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCLegendItemVectorProxy *pObjectX = (JCLegendItemVectorProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_clearIgnoreDataset_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"clearIgnoreDataset_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_LegendItemVector_clearIgnoreDataset_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Carto::CLegendItemVector *pObjectX = (EarthView::World::Spatial::Carto::CLegendItemVector*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Carto::CLegendItemVector::clearIgnoreDataset();
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_carto_LegendItemVector_isIgnoreDataset_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring strName_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* strName_ch = (const ev_char*)__env->GetStringUTFChars(strName_j,JNI_FALSE);
					EVString strName = strName_ch;
					__env->ReleaseStringUTFChars(strName_j, (const char *)strName_ch);
					#else
					const ev_wchar* strName_ch = (const ev_wchar*)__env->GetStringChars(strName_j,JNI_FALSE);
					EVString strName = strName_ch;
					__env->ReleaseStringChars(strName_j, (const jchar *)strName_ch);
					#endif
					EarthView::World::Spatial::Carto::CLegendItemVector *pObjectX = (EarthView::World::Spatial::Carto::CLegendItemVector*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCLegendItemVectorProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::Carto::CLegendItemVector::isIgnoreDataset(strName);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->isIgnoreDataset(strName);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_LegendItemVector_register_1isIgnoreDataset_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCLegendItemVectorProxy *pObjectX = (JCLegendItemVectorProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_isIgnoreDataset_EVString_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"isIgnoreDataset_EVString_callback", "(Ljava/lang/String;)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_carto_LegendItemVector_isIgnoreDataset_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring strName_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* strName_ch = (const ev_char*)__env->GetStringUTFChars(strName_j,JNI_FALSE);
					EVString strName = strName_ch;
					__env->ReleaseStringUTFChars(strName_j, (const char *)strName_ch);
					#else
					const ev_wchar* strName_ch = (const ev_wchar*)__env->GetStringChars(strName_j,JNI_FALSE);
					EVString strName = strName_ch;
					__env->ReleaseStringChars(strName_j, (const jchar *)strName_ch);
					#endif
					EarthView::World::Spatial::Carto::CLegendItemVector *pObjectX = (EarthView::World::Spatial::Carto::CLegendItemVector*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::Carto::CLegendItemVector::isIgnoreDataset(strName);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_LegendItemVector_clearAllItem_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Carto::CLegendItemVector *pObjectX = (EarthView::World::Spatial::Carto::CLegendItemVector*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCLegendItemVectorProxy))
					{
						pObjectX->EarthView::World::Spatial::Carto::CLegendItemVector::clearAllItem();
					}
					else
					{
						pObjectX->clearAllItem();
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_LegendItemVector_register_1clearAllItem_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCLegendItemVectorProxy *pObjectX = (JCLegendItemVectorProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_clearAllItem_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"clearAllItem_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_LegendItemVector_clearAllItem_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Carto::CLegendItemVector *pObjectX = (EarthView::World::Spatial::Carto::CLegendItemVector*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Carto::CLegendItemVector::clearAllItem();
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_carto_LegendItemVector_ev_1clone_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::CLegendItemVector *pObjectX = (EarthView::World::Spatial::Carto::CLegendItemVector*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCLegendItemVectorProxy))
					{
						EarthView::World::Spatial::Carto::ILegendItemVector* __values1 = pObjectX->EarthView::World::Spatial::Carto::CLegendItemVector::clone();
						if(__values1 != NULL) {							((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
						}						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Carto::ILegendItemVector* __values1 = pObjectX->clone();
						if(__values1 != NULL) {							((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
						}						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_LegendItemVector_register_1ev_1clone_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCLegendItemVectorProxy *pObjectX = (JCLegendItemVectorProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_carto_LegendItemVector_ev_1clone_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::CLegendItemVector *pObjectX = (EarthView::World::Spatial::Carto::CLegendItemVector*) pObjXXXX;
					EarthView::World::Spatial::Carto::ILegendItemVector* __values1 = pObjectX->EarthView::World::Spatial::Carto::CLegendItemVector::clone();
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_LegendItemVector_fromXmlElement_1CXmlElement(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong element_j)
				{
					EarthView::World::Core::CXmlElement &element = *(EarthView::World::Core::CXmlElement*) element_j;
					EarthView::World::Spatial::Carto::CLegendItemVector *pObjectX = (EarthView::World::Spatial::Carto::CLegendItemVector*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCLegendItemVectorProxy))
					{
						pObjectX->EarthView::World::Spatial::Carto::CLegendItemVector::fromXmlElement(element);
					}
					else
					{
						pObjectX->fromXmlElement(element);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_LegendItemVector_register_1fromXmlElement_1CXmlElement(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCLegendItemVectorProxy *pObjectX = (JCLegendItemVectorProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_LegendItemVector_fromXmlElement_1CXmlElement_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong element_j)
				{
					EarthView::World::Core::CXmlElement &element = *(EarthView::World::Core::CXmlElement*) element_j;
					EarthView::World::Spatial::Carto::CLegendItemVector *pObjectX = (EarthView::World::Spatial::Carto::CLegendItemVector*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Carto::CLegendItemVector::fromXmlElement(element);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_carto_LegendItemVector_toXmlElement_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::CLegendItemVector *pObjectX = (EarthView::World::Spatial::Carto::CLegendItemVector*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCLegendItemVectorProxy))
					{
						EarthView::World::Core::CXmlElement __values1 = pObjectX->EarthView::World::Spatial::Carto::CLegendItemVector::toXmlElement();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_LegendItemVector_register_1toXmlElement_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCLegendItemVectorProxy *pObjectX = (JCLegendItemVectorProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_carto_LegendItemVector_toXmlElement_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::CLegendItemVector *pObjectX = (EarthView::World::Spatial::Carto::CLegendItemVector*) pObjXXXX;
					EarthView::World::Core::CXmlElement __values1 = pObjectX->EarthView::World::Spatial::Carto::CLegendItemVector::toXmlElement();
					EarthView::World::Core::CXmlElement *returnvalues = new EarthView::World::Core::CXmlElement(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_LegendItemManager_createLegendItem_1ILegendItemVector_1ILayer(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pItemVector_j, jlong pLayer_j)
				{
					ILegendItemVector *pItemVector = (ILegendItemVector*) pItemVector_j;
					EarthView::World::Spatial::Atlas::ILayer *pLayer = (EarthView::World::Spatial::Atlas::ILayer*) pLayer_j;
					EarthView::World::Spatial::Carto::CLegendItemManager *pObjectX = (EarthView::World::Spatial::Carto::CLegendItemManager*) pObjXXXX;
					pObjectX->createLegendItem(pItemVector, pLayer);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_LegendItemManager_removeLegendItem_1ILegendItemVector_1ILayer(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pItemVector_j, jlong pLayer_j)
				{
					ILegendItemVector *pItemVector = (ILegendItemVector*) pItemVector_j;
					EarthView::World::Spatial::Atlas::ILayer *pLayer = (EarthView::World::Spatial::Atlas::ILayer*) pLayer_j;
					EarthView::World::Spatial::Carto::CLegendItemManager *pObjectX = (EarthView::World::Spatial::Carto::CLegendItemManager*) pObjXXXX;
					pObjectX->removeLegendItem(pItemVector, pLayer);
				}
			}
		}
	}
}
