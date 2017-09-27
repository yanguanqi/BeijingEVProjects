/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial2dcarto/mapframe.h"
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
				class JCMapFrameProxy : public EarthView::World::Spatial::Carto::CMapFrame
				{
				 private:
					EarthView::World::Core::ev_string m_getElementType_void_callback;
					EarthView::World::Core::ev_string m_getName_void_callback;
					EarthView::World::Core::ev_string m_setName_EVString_callback;
					EarthView::World::Core::ev_string m_getDescription_void_callback;
					EarthView::World::Core::ev_string m_setDescription_EVString_callback;
					EarthView::World::Core::ev_string m_getSymbol_void_callback;
					EarthView::World::Core::ev_string m_setSymbol_ISymbol_callback;
					EarthView::World::Core::ev_string m_getShadowColor_void_callback;
					EarthView::World::Core::ev_string m_setShadowColor_IColor_callback;
					EarthView::World::Core::ev_string m_getBackColor_void_callback;
					EarthView::World::Core::ev_string m_setBackColor_IColor_callback;
					EarthView::World::Core::ev_string m_getEnvelope_void_callback;
					EarthView::World::Core::ev_string m_setEnvelope_IEnvelope_callback;
					EarthView::World::Core::ev_string m_setMapExtent_IEnvelope_callback;
					EarthView::World::Core::ev_string m_getMapExtent_void_callback;
					EarthView::World::Core::ev_string m_getMapDisplay_void_callback;
					EarthView::World::Core::ev_string m_getMap_void_callback;
					EarthView::World::Core::ev_string m_setMap_IMap_callback;
					EarthView::World::Core::ev_string m_getMapCanvas_void_callback;
					EarthView::World::Core::ev_string m_isSelected_void_callback;
					EarthView::World::Core::ev_string m_setSelected_ev_bool_callback;
					EarthView::World::Core::ev_string m_isDrawShadow_void_callback;
					EarthView::World::Core::ev_string m_setDrawShadow_ev_bool_callback;
					EarthView::World::Core::ev_string m_isDrawFrame_void_callback;
					EarthView::World::Core::ev_string m_setDrawFrame_ev_bool_callback;
					EarthView::World::Core::ev_string m_isDrawBackground_void_callback;
					EarthView::World::Core::ev_string m_setDrawBackground_ev_bool_callback;
					EarthView::World::Core::ev_string m_isAccordingPageSize_void_callback;
					EarthView::World::Core::ev_string m_setAccordingPageSize_ev_bool_callback;
					EarthView::World::Core::ev_string m_drawPrepare_ISpatialDisplay_callback;
					EarthView::World::Core::ev_string m_draw_void_callback;
					EarthView::World::Core::ev_string m_drawOver_void_callback;
					EarthView::World::Core::ev_string m_drawBorder_ISpatialDisplay_callback;
					EarthView::World::Core::ev_string m_getRenderingLayerCache_void_callback;
					EarthView::World::Core::ev_string m_ev_clone_void_callback;
					EarthView::World::Core::ev_string m_toStream_CDataStream_callback;
					EarthView::World::Core::ev_string m_toXML_void_callback;
					EarthView::World::Core::ev_string m_fromXmlElement_CXmlElement_callback;
					EarthView::World::Core::ev_string m_toXmlElement_void_callback;
					EarthView::World::Core::ev_string m_fromStream_CDataStream_callback;
				public:
					JCMapFrameProxy(EarthView::World::Core::CNameValuePairList *pList) : CMapFrame(pList)
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
					void register_getElementType_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getElementType_void_callback = __method;
					}
					void register_getName_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getName_void_callback = __method;
					}
					void register_setName_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setName_EVString_callback = __method;
					}
					void register_getDescription_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getDescription_void_callback = __method;
					}
					void register_setDescription_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setDescription_EVString_callback = __method;
					}
					void register_getSymbol_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getSymbol_void_callback = __method;
					}
					void register_setSymbol_ISymbol_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setSymbol_ISymbol_callback = __method;
					}
					void register_getShadowColor_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getShadowColor_void_callback = __method;
					}
					void register_setShadowColor_IColor_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setShadowColor_IColor_callback = __method;
					}
					void register_getBackColor_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getBackColor_void_callback = __method;
					}
					void register_setBackColor_IColor_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setBackColor_IColor_callback = __method;
					}
					void register_getEnvelope_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getEnvelope_void_callback = __method;
					}
					void register_setEnvelope_IEnvelope_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setEnvelope_IEnvelope_callback = __method;
					}
					void register_setMapExtent_IEnvelope_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setMapExtent_IEnvelope_callback = __method;
					}
					void register_getMapExtent_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getMapExtent_void_callback = __method;
					}
					void register_getMapDisplay_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getMapDisplay_void_callback = __method;
					}
					void register_getMap_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getMap_void_callback = __method;
					}
					void register_setMap_IMap_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setMap_IMap_callback = __method;
					}
					void register_getMapCanvas_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getMapCanvas_void_callback = __method;
					}
					void register_isSelected_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_isSelected_void_callback = __method;
					}
					void register_setSelected_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setSelected_ev_bool_callback = __method;
					}
					void register_isDrawShadow_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_isDrawShadow_void_callback = __method;
					}
					void register_setDrawShadow_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setDrawShadow_ev_bool_callback = __method;
					}
					void register_isDrawFrame_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_isDrawFrame_void_callback = __method;
					}
					void register_setDrawFrame_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setDrawFrame_ev_bool_callback = __method;
					}
					void register_isDrawBackground_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_isDrawBackground_void_callback = __method;
					}
					void register_setDrawBackground_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setDrawBackground_ev_bool_callback = __method;
					}
					void register_isAccordingPageSize_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_isAccordingPageSize_void_callback = __method;
					}
					void register_setAccordingPageSize_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setAccordingPageSize_ev_bool_callback = __method;
					}
					void register_drawPrepare_ISpatialDisplay_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_drawPrepare_ISpatialDisplay_callback = __method;
					}
					void register_draw_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_draw_void_callback = __method;
					}
					void register_drawOver_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_drawOver_void_callback = __method;
					}
					void register_drawBorder_ISpatialDisplay_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_drawBorder_ISpatialDisplay_callback = __method;
					}
					void register_getRenderingLayerCache_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getRenderingLayerCache_void_callback = __method;
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
					virtual EarthView::World::Spatial::Carto::EVElementType getElementType() const
					{
						if (this->_gRef != NULL && this->m_getElementType_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getElementType_void_callback");
							jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::Carto::EVElementType __values1 = (EarthView::World::Spatial::Carto::EVElementType) __values1_j;
							return __values1;
						}
						else
						{
							return this->CMapFrame::getElementType();
						}
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
							return this->CMapFrame::getName();
						}
					}
					virtual void setName(EVString name)
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
							EarthView::World::Core::ev_wstring name_wch = name;
							jstring name_j = __env->NewString((const jchar*)name_wch.getString(), name_wch.size());
							jmethodID __method = __gr->getMethod("setName_EVString_callback");
							__env->CallVoidMethod(__obj, __method , name_j);
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
							return this->CMapFrame::setName(name);
						}
					}
					virtual EVString getDescription() const
					{
						if (this->_gRef != NULL && this->m_getDescription_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getDescription_void_callback");
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
							return this->CMapFrame::getDescription();
						}
					}
					virtual void setDescription(const EVString& desc)
					{
						if (this->_gRef != NULL && this->m_setDescription_EVString_callback != "" && this->isCustomExtend())
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
							EarthView::World::Core::ev_wstring desc_wch = desc;
							jstring desc_j = __env->NewString((const jchar*)desc_wch.getString(), desc_wch.size());
							jmethodID __method = __gr->getMethod("setDescription_EVString_callback");
							__env->CallVoidMethod(__obj, __method , desc_j);
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
							return this->CMapFrame::setDescription(desc);
						}
					}
					virtual EarthView::World::Spatial::Display::ISymbol* getSymbol() const
					{
						if (this->_gRef != NULL && this->m_getSymbol_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getSymbol_void_callback");
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
							return this->CMapFrame::getSymbol();
						}
					}
					virtual void setSymbol(EarthView::World::Spatial::Display::ISymbol* pSymbol)
					{
						if (this->_gRef != NULL && this->m_setSymbol_ISymbol_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("setSymbol_ISymbol_callback");
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
							return this->CMapFrame::setSymbol(pSymbol);
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
							return this->CMapFrame::getShadowColor();
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
							return this->CMapFrame::setShadowColor(pColor);
						}
					}
					virtual EarthView::World::Spatial::Display::IColor* getBackColor() const
					{
						if (this->_gRef != NULL && this->m_getBackColor_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getBackColor_void_callback");
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
							return this->CMapFrame::getBackColor();
						}
					}
					virtual void setBackColor(EarthView::World::Spatial::Display::IColor* pColor)
					{
						if (this->_gRef != NULL && this->m_setBackColor_IColor_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("setBackColor_IColor_callback");
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
							return this->CMapFrame::setBackColor(pColor);
						}
					}
					virtual EarthView::World::Spatial::Geometry::IEnvelope* getEnvelope() const
					{
						if (this->_gRef != NULL && this->m_getEnvelope_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getEnvelope_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::Geometry::IEnvelope *__values1 = (EarthView::World::Spatial::Geometry::IEnvelope*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CMapFrame::getEnvelope();
						}
					}
					virtual void setEnvelope(EarthView::World::Spatial::Geometry::IEnvelope* pEnvelope)
					{
						if (this->_gRef != NULL && this->m_setEnvelope_IEnvelope_callback != "" && this->isCustomExtend())
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
							jlong pEnvelope_j = (jlong) pEnvelope;
							jmethodID __method = __gr->getMethod("setEnvelope_IEnvelope_callback");
							__env->CallVoidMethod(__obj, __method , pEnvelope_j);
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
							return this->CMapFrame::setEnvelope(pEnvelope);
						}
					}
					virtual void setMapExtent(EarthView::World::Spatial::Geometry::IEnvelope* pEnvelope)
					{
						if (this->_gRef != NULL && this->m_setMapExtent_IEnvelope_callback != "" && this->isCustomExtend())
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
							jlong pEnvelope_j = (jlong) pEnvelope;
							jmethodID __method = __gr->getMethod("setMapExtent_IEnvelope_callback");
							__env->CallVoidMethod(__obj, __method , pEnvelope_j);
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
							return this->CMapFrame::setMapExtent(pEnvelope);
						}
					}
					virtual EarthView::World::Spatial::Geometry::IEnvelope* getMapExtent() const
					{
						if (this->_gRef != NULL && this->m_getMapExtent_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getMapExtent_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::Geometry::IEnvelope *__values1 = (EarthView::World::Spatial::Geometry::IEnvelope*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CMapFrame::getMapExtent();
						}
					}
					virtual EarthView::World::Spatial::Display::ISpatialDisplay* getMapDisplay() const
					{
						if (this->_gRef != NULL && this->m_getMapDisplay_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getMapDisplay_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::Display::ISpatialDisplay *__values1 = (EarthView::World::Spatial::Display::ISpatialDisplay*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CMapFrame::getMapDisplay();
						}
					}
					virtual EarthView::World::Spatial::Atlas::IMap* getMap() const
					{
						if (this->_gRef != NULL && this->m_getMap_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getMap_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::Atlas::IMap *__values1 = (EarthView::World::Spatial::Atlas::IMap*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CMapFrame::getMap();
						}
					}
					virtual void setMap(EarthView::World::Spatial::Atlas::IMap* pMap)
					{
						if (this->_gRef != NULL && this->m_setMap_IMap_callback != "" && this->isCustomExtend())
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
							jlong pMap_j = (jlong) pMap;
							jmethodID __method = __gr->getMethod("setMap_IMap_callback");
							__env->CallVoidMethod(__obj, __method , pMap_j);
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
							return this->CMapFrame::setMap(pMap);
						}
					}
					virtual EarthView::World::Display::IBitmap* getMapCanvas() const
					{
						if (this->_gRef != NULL && this->m_getMapCanvas_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getMapCanvas_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Display::IBitmap *__values1 = (EarthView::World::Display::IBitmap*) __values1_j;
							if(__values1 != NULL) {
								((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(false);
							}
							return __values1;
						}
						else
						{
							return this->CMapFrame::getMapCanvas();
						}
					}
					virtual ev_bool isSelected()
					{
						if (this->_gRef != NULL && this->m_isSelected_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("isSelected_void_callback");
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
							return this->CMapFrame::isSelected();
						}
					}
					virtual void setSelected(ev_bool bSelected)
					{
						if (this->_gRef != NULL && this->m_setSelected_ev_bool_callback != "" && this->isCustomExtend())
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
							jboolean bSelected_j = (jboolean) bSelected;
							jmethodID __method = __gr->getMethod("setSelected_ev_bool_callback");
							__env->CallVoidMethod(__obj, __method , bSelected_j);
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
							return this->CMapFrame::setSelected(bSelected);
						}
					}
					virtual ev_bool isDrawShadow()
					{
						if (this->_gRef != NULL && this->m_isDrawShadow_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("isDrawShadow_void_callback");
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
							return this->CMapFrame::isDrawShadow();
						}
					}
					virtual void setDrawShadow(ev_bool bDrawed)
					{
						if (this->_gRef != NULL && this->m_setDrawShadow_ev_bool_callback != "" && this->isCustomExtend())
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
							jboolean bDrawed_j = (jboolean) bDrawed;
							jmethodID __method = __gr->getMethod("setDrawShadow_ev_bool_callback");
							__env->CallVoidMethod(__obj, __method , bDrawed_j);
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
							return this->CMapFrame::setDrawShadow(bDrawed);
						}
					}
					virtual ev_bool isDrawFrame()
					{
						if (this->_gRef != NULL && this->m_isDrawFrame_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("isDrawFrame_void_callback");
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
							return this->CMapFrame::isDrawFrame();
						}
					}
					virtual void setDrawFrame(ev_bool bDrawed)
					{
						if (this->_gRef != NULL && this->m_setDrawFrame_ev_bool_callback != "" && this->isCustomExtend())
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
							jboolean bDrawed_j = (jboolean) bDrawed;
							jmethodID __method = __gr->getMethod("setDrawFrame_ev_bool_callback");
							__env->CallVoidMethod(__obj, __method , bDrawed_j);
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
							return this->CMapFrame::setDrawFrame(bDrawed);
						}
					}
					virtual ev_bool isDrawBackground()
					{
						if (this->_gRef != NULL && this->m_isDrawBackground_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("isDrawBackground_void_callback");
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
							return this->CMapFrame::isDrawBackground();
						}
					}
					virtual void setDrawBackground(ev_bool bDrawed)
					{
						if (this->_gRef != NULL && this->m_setDrawBackground_ev_bool_callback != "" && this->isCustomExtend())
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
							jboolean bDrawed_j = (jboolean) bDrawed;
							jmethodID __method = __gr->getMethod("setDrawBackground_ev_bool_callback");
							__env->CallVoidMethod(__obj, __method , bDrawed_j);
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
							return this->CMapFrame::setDrawBackground(bDrawed);
						}
					}
					virtual ev_bool isAccordingPageSize()
					{
						if (this->_gRef != NULL && this->m_isAccordingPageSize_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("isAccordingPageSize_void_callback");
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
							return this->CMapFrame::isAccordingPageSize();
						}
					}
					virtual void setAccordingPageSize(ev_bool bAccording)
					{
						if (this->_gRef != NULL && this->m_setAccordingPageSize_ev_bool_callback != "" && this->isCustomExtend())
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
							jboolean bAccording_j = (jboolean) bAccording;
							jmethodID __method = __gr->getMethod("setAccordingPageSize_ev_bool_callback");
							__env->CallVoidMethod(__obj, __method , bAccording_j);
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
							return this->CMapFrame::setAccordingPageSize(bAccording);
						}
					}
					virtual ev_bool drawPrepare(EarthView::World::Spatial::Display::ISpatialDisplay* pDisplay)
					{
						if (this->_gRef != NULL && this->m_drawPrepare_ISpatialDisplay_callback != "" && this->isCustomExtend())
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
							jlong pDisplay_j = (jlong) pDisplay;
							jmethodID __method = __gr->getMethod("drawPrepare_ISpatialDisplay_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , pDisplay_j);
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
							return this->CMapFrame::drawPrepare(pDisplay);
						}
					}
					virtual void draw()
					{
						if (this->_gRef != NULL && this->m_draw_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("draw_void_callback");
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
							return this->CMapFrame::draw();
						}
					}
					virtual void drawOver()
					{
						if (this->_gRef != NULL && this->m_drawOver_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("drawOver_void_callback");
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
							return this->CMapFrame::drawOver();
						}
					}
					virtual void drawBorder(EarthView::World::Spatial::Display::ISpatialDisplay* pPageDisplay)
					{
						if (this->_gRef != NULL && this->m_drawBorder_ISpatialDisplay_callback != "" && this->isCustomExtend())
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
							jlong pPageDisplay_j = (jlong) pPageDisplay;
							jmethodID __method = __gr->getMethod("drawBorder_ISpatialDisplay_callback");
							__env->CallVoidMethod(__obj, __method , pPageDisplay_j);
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
							return this->CMapFrame::drawBorder(pPageDisplay);
						}
					}
					virtual EarthView::World::Display::IBitmap* getRenderingLayerCache()
					{
						if (this->_gRef != NULL && this->m_getRenderingLayerCache_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getRenderingLayerCache_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Display::IBitmap *__values1 = (EarthView::World::Display::IBitmap*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CMapFrame::getRenderingLayerCache();
						}
					}
					virtual EarthView::World::Spatial::Carto::IElement* clone() const
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
							EarthView::World::Spatial::Carto::IElement *__values1 = (EarthView::World::Spatial::Carto::IElement*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CMapFrame::clone();
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
							return this->CMapFrame::toStream(stream);
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
							return this->CMapFrame::toXML();
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
							return this->CMapFrame::fromXmlElement(element);
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
							return this->CMapFrame::toXmlElement();
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
							return this->CMapFrame::fromStream(stream);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCMapFrameProxy);
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_carto_MapFrame_getElementType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::CMapFrame *pObjectX = (EarthView::World::Spatial::Carto::CMapFrame*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCMapFrameProxy))
					{
						EarthView::World::Spatial::Carto::EVElementType __values1 = pObjectX->EarthView::World::Spatial::Carto::CMapFrame::getElementType();
						jint __values1_j = (jint) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Carto::EVElementType __values1 = pObjectX->getElementType();
						jint __values1_j = (jint) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MapFrame_register_1getElementType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMapFrameProxy *pObjectX = (JCMapFrameProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getElementType_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getElementType_void_callback", "()I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_carto_MapFrame_getElementType_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::CMapFrame *pObjectX = (EarthView::World::Spatial::Carto::CMapFrame*) pObjXXXX;
					EarthView::World::Spatial::Carto::EVElementType __values1 = pObjectX->EarthView::World::Spatial::Carto::CMapFrame::getElementType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_carto_MapFrame_getName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::CMapFrame *pObjectX = (EarthView::World::Spatial::Carto::CMapFrame*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCMapFrameProxy))
					{
						EVString __values1 = pObjectX->EarthView::World::Spatial::Carto::CMapFrame::getName();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MapFrame_register_1getName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMapFrameProxy *pObjectX = (JCMapFrameProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_carto_MapFrame_getName_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::CMapFrame *pObjectX = (EarthView::World::Spatial::Carto::CMapFrame*) pObjXXXX;
					EVString __values1 = pObjectX->EarthView::World::Spatial::Carto::CMapFrame::getName();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MapFrame_setName_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
					EVString name = name_ch;
					__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
					#else
					const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
					EVString name = name_ch;
					__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
					#endif
					EarthView::World::Spatial::Carto::CMapFrame *pObjectX = (EarthView::World::Spatial::Carto::CMapFrame*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCMapFrameProxy))
					{
						pObjectX->EarthView::World::Spatial::Carto::CMapFrame::setName(name);
					}
					else
					{
						pObjectX->setName(name);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MapFrame_register_1setName_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMapFrameProxy *pObjectX = (JCMapFrameProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MapFrame_setName_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
					EVString name = name_ch;
					__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
					#else
					const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
					EVString name = name_ch;
					__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
					#endif
					EarthView::World::Spatial::Carto::CMapFrame *pObjectX = (EarthView::World::Spatial::Carto::CMapFrame*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Carto::CMapFrame::setName(name);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_carto_MapFrame_getDescription_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::CMapFrame *pObjectX = (EarthView::World::Spatial::Carto::CMapFrame*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCMapFrameProxy))
					{
						EVString __values1 = pObjectX->EarthView::World::Spatial::Carto::CMapFrame::getDescription();
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
					else
					{
						EVString __values1 = pObjectX->getDescription();
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MapFrame_register_1getDescription_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMapFrameProxy *pObjectX = (JCMapFrameProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getDescription_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getDescription_void_callback", "()Ljava/lang/String;");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_carto_MapFrame_getDescription_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::CMapFrame *pObjectX = (EarthView::World::Spatial::Carto::CMapFrame*) pObjXXXX;
					EVString __values1 = pObjectX->EarthView::World::Spatial::Carto::CMapFrame::getDescription();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MapFrame_setDescription_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring desc_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* desc_ch = (const ev_char*)__env->GetStringUTFChars(desc_j,JNI_FALSE);
					const EVString desc = desc_ch;
					__env->ReleaseStringUTFChars(desc_j, (const char *)desc_ch);
					#else
					const ev_wchar* desc_ch = (const ev_wchar*)__env->GetStringChars(desc_j,JNI_FALSE);
					const EVString desc = desc_ch;
					__env->ReleaseStringChars(desc_j, (const jchar *)desc_ch);
					#endif
					EarthView::World::Spatial::Carto::CMapFrame *pObjectX = (EarthView::World::Spatial::Carto::CMapFrame*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCMapFrameProxy))
					{
						pObjectX->EarthView::World::Spatial::Carto::CMapFrame::setDescription(desc);
					}
					else
					{
						pObjectX->setDescription(desc);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MapFrame_register_1setDescription_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMapFrameProxy *pObjectX = (JCMapFrameProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setDescription_EVString_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setDescription_EVString_callback", "(Ljava/lang/String;)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MapFrame_setDescription_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring desc_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* desc_ch = (const ev_char*)__env->GetStringUTFChars(desc_j,JNI_FALSE);
					const EVString desc = desc_ch;
					__env->ReleaseStringUTFChars(desc_j, (const char *)desc_ch);
					#else
					const ev_wchar* desc_ch = (const ev_wchar*)__env->GetStringChars(desc_j,JNI_FALSE);
					const EVString desc = desc_ch;
					__env->ReleaseStringChars(desc_j, (const jchar *)desc_ch);
					#endif
					EarthView::World::Spatial::Carto::CMapFrame *pObjectX = (EarthView::World::Spatial::Carto::CMapFrame*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Carto::CMapFrame::setDescription(desc);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_carto_MapFrame_getSymbol_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::CMapFrame *pObjectX = (EarthView::World::Spatial::Carto::CMapFrame*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCMapFrameProxy))
					{
						EarthView::World::Spatial::Display::ISymbol* __values1 = pObjectX->EarthView::World::Spatial::Carto::CMapFrame::getSymbol();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Display::ISymbol* __values1 = pObjectX->getSymbol();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MapFrame_register_1getSymbol_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMapFrameProxy *pObjectX = (JCMapFrameProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getSymbol_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getSymbol_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_carto_MapFrame_getSymbol_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::CMapFrame *pObjectX = (EarthView::World::Spatial::Carto::CMapFrame*) pObjXXXX;
					EarthView::World::Spatial::Display::ISymbol* __values1 = pObjectX->EarthView::World::Spatial::Carto::CMapFrame::getSymbol();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MapFrame_setSymbol_1ISymbol(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pSymbol_j)
				{
					EarthView::World::Spatial::Display::ISymbol *pSymbol = (EarthView::World::Spatial::Display::ISymbol*) pSymbol_j;
					EarthView::World::Spatial::Carto::CMapFrame *pObjectX = (EarthView::World::Spatial::Carto::CMapFrame*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCMapFrameProxy))
					{
						pObjectX->EarthView::World::Spatial::Carto::CMapFrame::setSymbol(pSymbol);
					}
					else
					{
						pObjectX->setSymbol(pSymbol);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MapFrame_register_1setSymbol_1ISymbol(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMapFrameProxy *pObjectX = (JCMapFrameProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setSymbol_ISymbol_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setSymbol_ISymbol_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MapFrame_setSymbol_1ISymbol_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pSymbol_j)
				{
					EarthView::World::Spatial::Display::ISymbol *pSymbol = (EarthView::World::Spatial::Display::ISymbol*) pSymbol_j;
					EarthView::World::Spatial::Carto::CMapFrame *pObjectX = (EarthView::World::Spatial::Carto::CMapFrame*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Carto::CMapFrame::setSymbol(pSymbol);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_carto_MapFrame_getShadowColor_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::CMapFrame *pObjectX = (EarthView::World::Spatial::Carto::CMapFrame*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCMapFrameProxy))
					{
						EarthView::World::Spatial::Display::IColor* __values1 = pObjectX->EarthView::World::Spatial::Carto::CMapFrame::getShadowColor();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MapFrame_register_1getShadowColor_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMapFrameProxy *pObjectX = (JCMapFrameProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_carto_MapFrame_getShadowColor_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::CMapFrame *pObjectX = (EarthView::World::Spatial::Carto::CMapFrame*) pObjXXXX;
					EarthView::World::Spatial::Display::IColor* __values1 = pObjectX->EarthView::World::Spatial::Carto::CMapFrame::getShadowColor();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MapFrame_setShadowColor_1IColor(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pColor_j)
				{
					EarthView::World::Spatial::Display::IColor *pColor = (EarthView::World::Spatial::Display::IColor*) pColor_j;
					EarthView::World::Spatial::Carto::CMapFrame *pObjectX = (EarthView::World::Spatial::Carto::CMapFrame*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCMapFrameProxy))
					{
						pObjectX->EarthView::World::Spatial::Carto::CMapFrame::setShadowColor(pColor);
					}
					else
					{
						pObjectX->setShadowColor(pColor);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MapFrame_register_1setShadowColor_1IColor(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMapFrameProxy *pObjectX = (JCMapFrameProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MapFrame_setShadowColor_1IColor_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pColor_j)
				{
					EarthView::World::Spatial::Display::IColor *pColor = (EarthView::World::Spatial::Display::IColor*) pColor_j;
					EarthView::World::Spatial::Carto::CMapFrame *pObjectX = (EarthView::World::Spatial::Carto::CMapFrame*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Carto::CMapFrame::setShadowColor(pColor);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_carto_MapFrame_getBackColor_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::CMapFrame *pObjectX = (EarthView::World::Spatial::Carto::CMapFrame*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCMapFrameProxy))
					{
						EarthView::World::Spatial::Display::IColor* __values1 = pObjectX->EarthView::World::Spatial::Carto::CMapFrame::getBackColor();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Display::IColor* __values1 = pObjectX->getBackColor();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MapFrame_register_1getBackColor_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMapFrameProxy *pObjectX = (JCMapFrameProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getBackColor_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getBackColor_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_carto_MapFrame_getBackColor_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::CMapFrame *pObjectX = (EarthView::World::Spatial::Carto::CMapFrame*) pObjXXXX;
					EarthView::World::Spatial::Display::IColor* __values1 = pObjectX->EarthView::World::Spatial::Carto::CMapFrame::getBackColor();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MapFrame_setBackColor_1IColor(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pColor_j)
				{
					EarthView::World::Spatial::Display::IColor *pColor = (EarthView::World::Spatial::Display::IColor*) pColor_j;
					EarthView::World::Spatial::Carto::CMapFrame *pObjectX = (EarthView::World::Spatial::Carto::CMapFrame*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCMapFrameProxy))
					{
						pObjectX->EarthView::World::Spatial::Carto::CMapFrame::setBackColor(pColor);
					}
					else
					{
						pObjectX->setBackColor(pColor);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MapFrame_register_1setBackColor_1IColor(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMapFrameProxy *pObjectX = (JCMapFrameProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setBackColor_IColor_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setBackColor_IColor_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MapFrame_setBackColor_1IColor_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pColor_j)
				{
					EarthView::World::Spatial::Display::IColor *pColor = (EarthView::World::Spatial::Display::IColor*) pColor_j;
					EarthView::World::Spatial::Carto::CMapFrame *pObjectX = (EarthView::World::Spatial::Carto::CMapFrame*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Carto::CMapFrame::setBackColor(pColor);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_carto_MapFrame_getEnvelope_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::CMapFrame *pObjectX = (EarthView::World::Spatial::Carto::CMapFrame*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCMapFrameProxy))
					{
						EarthView::World::Spatial::Geometry::IEnvelope* __values1 = pObjectX->EarthView::World::Spatial::Carto::CMapFrame::getEnvelope();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Geometry::IEnvelope* __values1 = pObjectX->getEnvelope();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MapFrame_register_1getEnvelope_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMapFrameProxy *pObjectX = (JCMapFrameProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getEnvelope_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getEnvelope_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_carto_MapFrame_getEnvelope_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::CMapFrame *pObjectX = (EarthView::World::Spatial::Carto::CMapFrame*) pObjXXXX;
					EarthView::World::Spatial::Geometry::IEnvelope* __values1 = pObjectX->EarthView::World::Spatial::Carto::CMapFrame::getEnvelope();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MapFrame_setEnvelope_1IEnvelope(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pEnvelope_j)
				{
					EarthView::World::Spatial::Geometry::IEnvelope *pEnvelope = (EarthView::World::Spatial::Geometry::IEnvelope*) pEnvelope_j;
					EarthView::World::Spatial::Carto::CMapFrame *pObjectX = (EarthView::World::Spatial::Carto::CMapFrame*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCMapFrameProxy))
					{
						pObjectX->EarthView::World::Spatial::Carto::CMapFrame::setEnvelope(pEnvelope);
					}
					else
					{
						pObjectX->setEnvelope(pEnvelope);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MapFrame_register_1setEnvelope_1IEnvelope(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMapFrameProxy *pObjectX = (JCMapFrameProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setEnvelope_IEnvelope_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setEnvelope_IEnvelope_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MapFrame_setEnvelope_1IEnvelope_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pEnvelope_j)
				{
					EarthView::World::Spatial::Geometry::IEnvelope *pEnvelope = (EarthView::World::Spatial::Geometry::IEnvelope*) pEnvelope_j;
					EarthView::World::Spatial::Carto::CMapFrame *pObjectX = (EarthView::World::Spatial::Carto::CMapFrame*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Carto::CMapFrame::setEnvelope(pEnvelope);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MapFrame_setMapExtent_1IEnvelope(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pEnvelope_j)
				{
					EarthView::World::Spatial::Geometry::IEnvelope *pEnvelope = (EarthView::World::Spatial::Geometry::IEnvelope*) pEnvelope_j;
					EarthView::World::Spatial::Carto::CMapFrame *pObjectX = (EarthView::World::Spatial::Carto::CMapFrame*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCMapFrameProxy))
					{
						pObjectX->EarthView::World::Spatial::Carto::CMapFrame::setMapExtent(pEnvelope);
					}
					else
					{
						pObjectX->setMapExtent(pEnvelope);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MapFrame_register_1setMapExtent_1IEnvelope(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMapFrameProxy *pObjectX = (JCMapFrameProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setMapExtent_IEnvelope_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setMapExtent_IEnvelope_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MapFrame_setMapExtent_1IEnvelope_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pEnvelope_j)
				{
					EarthView::World::Spatial::Geometry::IEnvelope *pEnvelope = (EarthView::World::Spatial::Geometry::IEnvelope*) pEnvelope_j;
					EarthView::World::Spatial::Carto::CMapFrame *pObjectX = (EarthView::World::Spatial::Carto::CMapFrame*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Carto::CMapFrame::setMapExtent(pEnvelope);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_carto_MapFrame_getMapExtent_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::CMapFrame *pObjectX = (EarthView::World::Spatial::Carto::CMapFrame*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCMapFrameProxy))
					{
						EarthView::World::Spatial::Geometry::IEnvelope* __values1 = pObjectX->EarthView::World::Spatial::Carto::CMapFrame::getMapExtent();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Geometry::IEnvelope* __values1 = pObjectX->getMapExtent();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MapFrame_register_1getMapExtent_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMapFrameProxy *pObjectX = (JCMapFrameProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getMapExtent_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getMapExtent_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_carto_MapFrame_getMapExtent_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::CMapFrame *pObjectX = (EarthView::World::Spatial::Carto::CMapFrame*) pObjXXXX;
					EarthView::World::Spatial::Geometry::IEnvelope* __values1 = pObjectX->EarthView::World::Spatial::Carto::CMapFrame::getMapExtent();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_carto_MapFrame_getMapDisplay_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::CMapFrame *pObjectX = (EarthView::World::Spatial::Carto::CMapFrame*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCMapFrameProxy))
					{
						EarthView::World::Spatial::Display::ISpatialDisplay* __values1 = pObjectX->EarthView::World::Spatial::Carto::CMapFrame::getMapDisplay();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Display::ISpatialDisplay* __values1 = pObjectX->getMapDisplay();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MapFrame_register_1getMapDisplay_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMapFrameProxy *pObjectX = (JCMapFrameProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getMapDisplay_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getMapDisplay_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_carto_MapFrame_getMapDisplay_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::CMapFrame *pObjectX = (EarthView::World::Spatial::Carto::CMapFrame*) pObjXXXX;
					EarthView::World::Spatial::Display::ISpatialDisplay* __values1 = pObjectX->EarthView::World::Spatial::Carto::CMapFrame::getMapDisplay();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_carto_MapFrame_getMap_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::CMapFrame *pObjectX = (EarthView::World::Spatial::Carto::CMapFrame*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCMapFrameProxy))
					{
						EarthView::World::Spatial::Atlas::IMap* __values1 = pObjectX->EarthView::World::Spatial::Carto::CMapFrame::getMap();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Atlas::IMap* __values1 = pObjectX->getMap();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MapFrame_register_1getMap_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMapFrameProxy *pObjectX = (JCMapFrameProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getMap_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getMap_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_carto_MapFrame_getMap_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::CMapFrame *pObjectX = (EarthView::World::Spatial::Carto::CMapFrame*) pObjXXXX;
					EarthView::World::Spatial::Atlas::IMap* __values1 = pObjectX->EarthView::World::Spatial::Carto::CMapFrame::getMap();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MapFrame_setMap_1IMap(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pMap_j)
				{
					EarthView::World::Spatial::Atlas::IMap *pMap = (EarthView::World::Spatial::Atlas::IMap*) pMap_j;
					EarthView::World::Spatial::Carto::CMapFrame *pObjectX = (EarthView::World::Spatial::Carto::CMapFrame*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCMapFrameProxy))
					{
						pObjectX->EarthView::World::Spatial::Carto::CMapFrame::setMap(pMap);
					}
					else
					{
						pObjectX->setMap(pMap);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MapFrame_register_1setMap_1IMap(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMapFrameProxy *pObjectX = (JCMapFrameProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setMap_IMap_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setMap_IMap_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MapFrame_setMap_1IMap_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pMap_j)
				{
					EarthView::World::Spatial::Atlas::IMap *pMap = (EarthView::World::Spatial::Atlas::IMap*) pMap_j;
					EarthView::World::Spatial::Carto::CMapFrame *pObjectX = (EarthView::World::Spatial::Carto::CMapFrame*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Carto::CMapFrame::setMap(pMap);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_carto_MapFrame_getMapCanvas_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::CMapFrame *pObjectX = (EarthView::World::Spatial::Carto::CMapFrame*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCMapFrameProxy))
					{
						EarthView::World::Display::IBitmap* __values1 = pObjectX->EarthView::World::Spatial::Carto::CMapFrame::getMapCanvas();
						if(__values1 != NULL) {							((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
						}						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Display::IBitmap* __values1 = pObjectX->getMapCanvas();
						if(__values1 != NULL) {							((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
						}						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MapFrame_register_1getMapCanvas_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMapFrameProxy *pObjectX = (JCMapFrameProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getMapCanvas_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getMapCanvas_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_carto_MapFrame_getMapCanvas_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::CMapFrame *pObjectX = (EarthView::World::Spatial::Carto::CMapFrame*) pObjXXXX;
					EarthView::World::Display::IBitmap* __values1 = pObjectX->EarthView::World::Spatial::Carto::CMapFrame::getMapCanvas();
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_carto_MapFrame_isSelected_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Carto::CMapFrame *pObjectX = (EarthView::World::Spatial::Carto::CMapFrame*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCMapFrameProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::Carto::CMapFrame::isSelected();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->isSelected();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MapFrame_register_1isSelected_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMapFrameProxy *pObjectX = (JCMapFrameProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_isSelected_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"isSelected_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_carto_MapFrame_isSelected_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Carto::CMapFrame *pObjectX = (EarthView::World::Spatial::Carto::CMapFrame*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::Carto::CMapFrame::isSelected();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MapFrame_setSelected_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean bSelected_j)
				{
					ev_bool bSelected = (ev_bool) bSelected_j;
					EarthView::World::Spatial::Carto::CMapFrame *pObjectX = (EarthView::World::Spatial::Carto::CMapFrame*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCMapFrameProxy))
					{
						pObjectX->EarthView::World::Spatial::Carto::CMapFrame::setSelected(bSelected);
					}
					else
					{
						pObjectX->setSelected(bSelected);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MapFrame_register_1setSelected_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMapFrameProxy *pObjectX = (JCMapFrameProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setSelected_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setSelected_ev_bool_callback", "(Z)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MapFrame_setSelected_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean bSelected_j)
				{
					ev_bool bSelected = (ev_bool) bSelected_j;
					EarthView::World::Spatial::Carto::CMapFrame *pObjectX = (EarthView::World::Spatial::Carto::CMapFrame*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Carto::CMapFrame::setSelected(bSelected);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_carto_MapFrame_isDrawShadow_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Carto::CMapFrame *pObjectX = (EarthView::World::Spatial::Carto::CMapFrame*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCMapFrameProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::Carto::CMapFrame::isDrawShadow();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->isDrawShadow();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MapFrame_register_1isDrawShadow_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMapFrameProxy *pObjectX = (JCMapFrameProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_isDrawShadow_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"isDrawShadow_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_carto_MapFrame_isDrawShadow_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Carto::CMapFrame *pObjectX = (EarthView::World::Spatial::Carto::CMapFrame*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::Carto::CMapFrame::isDrawShadow();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MapFrame_setDrawShadow_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean bDrawed_j)
				{
					ev_bool bDrawed = (ev_bool) bDrawed_j;
					EarthView::World::Spatial::Carto::CMapFrame *pObjectX = (EarthView::World::Spatial::Carto::CMapFrame*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCMapFrameProxy))
					{
						pObjectX->EarthView::World::Spatial::Carto::CMapFrame::setDrawShadow(bDrawed);
					}
					else
					{
						pObjectX->setDrawShadow(bDrawed);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MapFrame_register_1setDrawShadow_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMapFrameProxy *pObjectX = (JCMapFrameProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setDrawShadow_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setDrawShadow_ev_bool_callback", "(Z)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MapFrame_setDrawShadow_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean bDrawed_j)
				{
					ev_bool bDrawed = (ev_bool) bDrawed_j;
					EarthView::World::Spatial::Carto::CMapFrame *pObjectX = (EarthView::World::Spatial::Carto::CMapFrame*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Carto::CMapFrame::setDrawShadow(bDrawed);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_carto_MapFrame_isDrawFrame_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Carto::CMapFrame *pObjectX = (EarthView::World::Spatial::Carto::CMapFrame*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCMapFrameProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::Carto::CMapFrame::isDrawFrame();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->isDrawFrame();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MapFrame_register_1isDrawFrame_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMapFrameProxy *pObjectX = (JCMapFrameProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_isDrawFrame_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"isDrawFrame_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_carto_MapFrame_isDrawFrame_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Carto::CMapFrame *pObjectX = (EarthView::World::Spatial::Carto::CMapFrame*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::Carto::CMapFrame::isDrawFrame();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MapFrame_setDrawFrame_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean bDrawed_j)
				{
					ev_bool bDrawed = (ev_bool) bDrawed_j;
					EarthView::World::Spatial::Carto::CMapFrame *pObjectX = (EarthView::World::Spatial::Carto::CMapFrame*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCMapFrameProxy))
					{
						pObjectX->EarthView::World::Spatial::Carto::CMapFrame::setDrawFrame(bDrawed);
					}
					else
					{
						pObjectX->setDrawFrame(bDrawed);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MapFrame_register_1setDrawFrame_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMapFrameProxy *pObjectX = (JCMapFrameProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setDrawFrame_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setDrawFrame_ev_bool_callback", "(Z)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MapFrame_setDrawFrame_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean bDrawed_j)
				{
					ev_bool bDrawed = (ev_bool) bDrawed_j;
					EarthView::World::Spatial::Carto::CMapFrame *pObjectX = (EarthView::World::Spatial::Carto::CMapFrame*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Carto::CMapFrame::setDrawFrame(bDrawed);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_carto_MapFrame_isDrawBackground_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Carto::CMapFrame *pObjectX = (EarthView::World::Spatial::Carto::CMapFrame*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCMapFrameProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::Carto::CMapFrame::isDrawBackground();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->isDrawBackground();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MapFrame_register_1isDrawBackground_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMapFrameProxy *pObjectX = (JCMapFrameProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_isDrawBackground_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"isDrawBackground_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_carto_MapFrame_isDrawBackground_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Carto::CMapFrame *pObjectX = (EarthView::World::Spatial::Carto::CMapFrame*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::Carto::CMapFrame::isDrawBackground();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MapFrame_setDrawBackground_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean bDrawed_j)
				{
					ev_bool bDrawed = (ev_bool) bDrawed_j;
					EarthView::World::Spatial::Carto::CMapFrame *pObjectX = (EarthView::World::Spatial::Carto::CMapFrame*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCMapFrameProxy))
					{
						pObjectX->EarthView::World::Spatial::Carto::CMapFrame::setDrawBackground(bDrawed);
					}
					else
					{
						pObjectX->setDrawBackground(bDrawed);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MapFrame_register_1setDrawBackground_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMapFrameProxy *pObjectX = (JCMapFrameProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setDrawBackground_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setDrawBackground_ev_bool_callback", "(Z)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MapFrame_setDrawBackground_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean bDrawed_j)
				{
					ev_bool bDrawed = (ev_bool) bDrawed_j;
					EarthView::World::Spatial::Carto::CMapFrame *pObjectX = (EarthView::World::Spatial::Carto::CMapFrame*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Carto::CMapFrame::setDrawBackground(bDrawed);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_carto_MapFrame_isAccordingPageSize_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Carto::CMapFrame *pObjectX = (EarthView::World::Spatial::Carto::CMapFrame*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCMapFrameProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::Carto::CMapFrame::isAccordingPageSize();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->isAccordingPageSize();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MapFrame_register_1isAccordingPageSize_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMapFrameProxy *pObjectX = (JCMapFrameProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_isAccordingPageSize_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"isAccordingPageSize_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_carto_MapFrame_isAccordingPageSize_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Carto::CMapFrame *pObjectX = (EarthView::World::Spatial::Carto::CMapFrame*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::Carto::CMapFrame::isAccordingPageSize();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MapFrame_setAccordingPageSize_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean bAccording_j)
				{
					ev_bool bAccording = (ev_bool) bAccording_j;
					EarthView::World::Spatial::Carto::CMapFrame *pObjectX = (EarthView::World::Spatial::Carto::CMapFrame*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCMapFrameProxy))
					{
						pObjectX->EarthView::World::Spatial::Carto::CMapFrame::setAccordingPageSize(bAccording);
					}
					else
					{
						pObjectX->setAccordingPageSize(bAccording);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MapFrame_register_1setAccordingPageSize_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMapFrameProxy *pObjectX = (JCMapFrameProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setAccordingPageSize_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setAccordingPageSize_ev_bool_callback", "(Z)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MapFrame_setAccordingPageSize_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean bAccording_j)
				{
					ev_bool bAccording = (ev_bool) bAccording_j;
					EarthView::World::Spatial::Carto::CMapFrame *pObjectX = (EarthView::World::Spatial::Carto::CMapFrame*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Carto::CMapFrame::setAccordingPageSize(bAccording);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_carto_MapFrame_drawPrepare_1ISpatialDisplay(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pDisplay_j)
				{
					EarthView::World::Spatial::Display::ISpatialDisplay *pDisplay = (EarthView::World::Spatial::Display::ISpatialDisplay*) pDisplay_j;
					EarthView::World::Spatial::Carto::CMapFrame *pObjectX = (EarthView::World::Spatial::Carto::CMapFrame*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCMapFrameProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::Carto::CMapFrame::drawPrepare(pDisplay);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->drawPrepare(pDisplay);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MapFrame_register_1drawPrepare_1ISpatialDisplay(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMapFrameProxy *pObjectX = (JCMapFrameProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_drawPrepare_ISpatialDisplay_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"drawPrepare_ISpatialDisplay_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_carto_MapFrame_drawPrepare_1ISpatialDisplay_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pDisplay_j)
				{
					EarthView::World::Spatial::Display::ISpatialDisplay *pDisplay = (EarthView::World::Spatial::Display::ISpatialDisplay*) pDisplay_j;
					EarthView::World::Spatial::Carto::CMapFrame *pObjectX = (EarthView::World::Spatial::Carto::CMapFrame*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::Carto::CMapFrame::drawPrepare(pDisplay);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MapFrame_draw_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Carto::CMapFrame *pObjectX = (EarthView::World::Spatial::Carto::CMapFrame*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCMapFrameProxy))
					{
						pObjectX->EarthView::World::Spatial::Carto::CMapFrame::draw();
					}
					else
					{
						pObjectX->draw();
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MapFrame_register_1draw_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMapFrameProxy *pObjectX = (JCMapFrameProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_draw_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"draw_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MapFrame_draw_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Carto::CMapFrame *pObjectX = (EarthView::World::Spatial::Carto::CMapFrame*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Carto::CMapFrame::draw();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MapFrame_drawOver_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Carto::CMapFrame *pObjectX = (EarthView::World::Spatial::Carto::CMapFrame*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCMapFrameProxy))
					{
						pObjectX->EarthView::World::Spatial::Carto::CMapFrame::drawOver();
					}
					else
					{
						pObjectX->drawOver();
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MapFrame_register_1drawOver_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMapFrameProxy *pObjectX = (JCMapFrameProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_drawOver_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"drawOver_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MapFrame_drawOver_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Carto::CMapFrame *pObjectX = (EarthView::World::Spatial::Carto::CMapFrame*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Carto::CMapFrame::drawOver();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MapFrame_drawBorder_1ISpatialDisplay(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pPageDisplay_j)
				{
					EarthView::World::Spatial::Display::ISpatialDisplay *pPageDisplay = (EarthView::World::Spatial::Display::ISpatialDisplay*) pPageDisplay_j;
					EarthView::World::Spatial::Carto::CMapFrame *pObjectX = (EarthView::World::Spatial::Carto::CMapFrame*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCMapFrameProxy))
					{
						pObjectX->EarthView::World::Spatial::Carto::CMapFrame::drawBorder(pPageDisplay);
					}
					else
					{
						pObjectX->drawBorder(pPageDisplay);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MapFrame_register_1drawBorder_1ISpatialDisplay(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMapFrameProxy *pObjectX = (JCMapFrameProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_drawBorder_ISpatialDisplay_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"drawBorder_ISpatialDisplay_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MapFrame_drawBorder_1ISpatialDisplay_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pPageDisplay_j)
				{
					EarthView::World::Spatial::Display::ISpatialDisplay *pPageDisplay = (EarthView::World::Spatial::Display::ISpatialDisplay*) pPageDisplay_j;
					EarthView::World::Spatial::Carto::CMapFrame *pObjectX = (EarthView::World::Spatial::Carto::CMapFrame*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Carto::CMapFrame::drawBorder(pPageDisplay);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_carto_MapFrame_getRenderingLayerCache_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Carto::CMapFrame *pObjectX = (EarthView::World::Spatial::Carto::CMapFrame*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCMapFrameProxy))
					{
						EarthView::World::Display::IBitmap* __values1 = pObjectX->EarthView::World::Spatial::Carto::CMapFrame::getRenderingLayerCache();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Display::IBitmap* __values1 = pObjectX->getRenderingLayerCache();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MapFrame_register_1getRenderingLayerCache_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMapFrameProxy *pObjectX = (JCMapFrameProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getRenderingLayerCache_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getRenderingLayerCache_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_carto_MapFrame_getRenderingLayerCache_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Carto::CMapFrame *pObjectX = (EarthView::World::Spatial::Carto::CMapFrame*) pObjXXXX;
					EarthView::World::Display::IBitmap* __values1 = pObjectX->EarthView::World::Spatial::Carto::CMapFrame::getRenderingLayerCache();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_carto_MapFrame_ev_1clone_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::CMapFrame *pObjectX = (EarthView::World::Spatial::Carto::CMapFrame*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCMapFrameProxy))
					{
						EarthView::World::Spatial::Carto::IElement* __values1 = pObjectX->EarthView::World::Spatial::Carto::CMapFrame::clone();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Carto::IElement* __values1 = pObjectX->clone();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MapFrame_register_1ev_1clone_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMapFrameProxy *pObjectX = (JCMapFrameProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_carto_MapFrame_ev_1clone_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::CMapFrame *pObjectX = (EarthView::World::Spatial::Carto::CMapFrame*) pObjXXXX;
					EarthView::World::Spatial::Carto::IElement* __values1 = pObjectX->EarthView::World::Spatial::Carto::CMapFrame::clone();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MapFrame_toStream_1CDataStream(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j)
				{
					EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
					const 					EarthView::World::Spatial::Carto::CMapFrame *pObjectX = (EarthView::World::Spatial::Carto::CMapFrame*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCMapFrameProxy))
					{
						pObjectX->EarthView::World::Spatial::Carto::CMapFrame::toStream(stream);
					}
					else
					{
						pObjectX->toStream(stream);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MapFrame_register_1toStream_1CDataStream(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMapFrameProxy *pObjectX = (JCMapFrameProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MapFrame_toStream_1CDataStream_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j)
				{
					EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
					const 					EarthView::World::Spatial::Carto::CMapFrame *pObjectX = (EarthView::World::Spatial::Carto::CMapFrame*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Carto::CMapFrame::toStream(stream);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_carto_MapFrame_toXML_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::CMapFrame *pObjectX = (EarthView::World::Spatial::Carto::CMapFrame*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCMapFrameProxy))
					{
						EVString __values1 = pObjectX->EarthView::World::Spatial::Carto::CMapFrame::toXML();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MapFrame_register_1toXML_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMapFrameProxy *pObjectX = (JCMapFrameProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_carto_MapFrame_toXML_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::CMapFrame *pObjectX = (EarthView::World::Spatial::Carto::CMapFrame*) pObjXXXX;
					EVString __values1 = pObjectX->EarthView::World::Spatial::Carto::CMapFrame::toXML();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MapFrame_fromXmlElement_1CXmlElement(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong element_j)
				{
					EarthView::World::Core::CXmlElement &element = *(EarthView::World::Core::CXmlElement*) element_j;
					EarthView::World::Spatial::Carto::CMapFrame *pObjectX = (EarthView::World::Spatial::Carto::CMapFrame*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCMapFrameProxy))
					{
						pObjectX->EarthView::World::Spatial::Carto::CMapFrame::fromXmlElement(element);
					}
					else
					{
						pObjectX->fromXmlElement(element);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MapFrame_register_1fromXmlElement_1CXmlElement(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMapFrameProxy *pObjectX = (JCMapFrameProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MapFrame_fromXmlElement_1CXmlElement_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong element_j)
				{
					EarthView::World::Core::CXmlElement &element = *(EarthView::World::Core::CXmlElement*) element_j;
					EarthView::World::Spatial::Carto::CMapFrame *pObjectX = (EarthView::World::Spatial::Carto::CMapFrame*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Carto::CMapFrame::fromXmlElement(element);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_carto_MapFrame_toXmlElement_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::CMapFrame *pObjectX = (EarthView::World::Spatial::Carto::CMapFrame*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCMapFrameProxy))
					{
						EarthView::World::Core::CXmlElement __values1 = pObjectX->EarthView::World::Spatial::Carto::CMapFrame::toXmlElement();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MapFrame_register_1toXmlElement_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMapFrameProxy *pObjectX = (JCMapFrameProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_carto_MapFrame_toXmlElement_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::CMapFrame *pObjectX = (EarthView::World::Spatial::Carto::CMapFrame*) pObjXXXX;
					EarthView::World::Core::CXmlElement __values1 = pObjectX->EarthView::World::Spatial::Carto::CMapFrame::toXmlElement();
					EarthView::World::Core::CXmlElement *returnvalues = new EarthView::World::Core::CXmlElement(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MapFrame_fromStream_1CDataStream(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j)
				{
					EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
					EarthView::World::Spatial::Carto::CMapFrame *pObjectX = (EarthView::World::Spatial::Carto::CMapFrame*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCMapFrameProxy))
					{
						pObjectX->EarthView::World::Spatial::Carto::CMapFrame::fromStream(stream);
					}
					else
					{
						pObjectX->fromStream(stream);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MapFrame_register_1fromStream_1CDataStream(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMapFrameProxy *pObjectX = (JCMapFrameProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_MapFrame_fromStream_1CDataStream_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j)
				{
					EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
					EarthView::World::Spatial::Carto::CMapFrame *pObjectX = (EarthView::World::Spatial::Carto::CMapFrame*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Carto::CMapFrame::fromStream(stream);
				}
			}
		}
	}
}
