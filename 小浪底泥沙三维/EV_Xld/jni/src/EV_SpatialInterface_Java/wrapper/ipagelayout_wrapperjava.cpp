/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialinterface/ipagelayout.h"
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
				class JIPageLayoutProxy : public EarthView::World::Spatial::Carto::IPageLayout
				{
				 private:
					EarthView::World::Core::ev_string m_getName_void_callback;
					EarthView::World::Core::ev_string m_setName_EVString_callback;
					EarthView::World::Core::ev_string m_getPage_void_callback;
					EarthView::World::Core::ev_string m_setPage_IPage_callback;
					EarthView::World::Core::ev_string m_createElement_EVElementType_callback;
					EarthView::World::Core::ev_string m_addElement_IElement_callback;
					EarthView::World::Core::ev_string m_insertElement_ev_int32_IElement_callback;
					EarthView::World::Core::ev_string m_getElementCount_void_callback;
					EarthView::World::Core::ev_string m_getSelectedElementCount_void_callback;
					EarthView::World::Core::ev_string m_removeElement_IElement_callback;
					EarthView::World::Core::ev_string m_replaceElement_IElement_IElement_callback;
					EarthView::World::Core::ev_string m_exchangeElement_ev_int32_ev_int32_callback;
					EarthView::World::Core::ev_string m_getElement_ev_int32_callback;
					EarthView::World::Core::ev_string m_removeSelectedElement_void_callback;
					EarthView::World::Core::ev_string m_removeAllElement_void_callback;
					EarthView::World::Core::ev_string m_isExistMapFrame_void_callback;
					EarthView::World::Core::ev_string m_isExist_IElement_callback;
					EarthView::World::Core::ev_string m_removeMapFrame_void_callback;
					EarthView::World::Core::ev_string m_getLayoutImage_void_callback;
					EarthView::World::Core::ev_string m_reset_void_callback;
					EarthView::World::Core::ev_string m_next_void_callback;
					EarthView::World::Core::ev_string m_getInterestEnvelope_void_callback;
					EarthView::World::Core::ev_string m_setInterestEnvelope_IEnvelope_callback;
					EarthView::World::Core::ev_string m_isActive_void_callback;
					EarthView::World::Core::ev_string m_setActive_ev_bool_callback;
					EarthView::World::Core::ev_string m_updateEnvelop_void_callback;
					EarthView::World::Core::ev_string m_drawPrepare_ISpatialDisplay_callback;
					EarthView::World::Core::ev_string m_draw_void_callback;
					EarthView::World::Core::ev_string m_drawOver_void_callback;
					EarthView::World::Core::ev_string m_ev_clone_void_callback;
					EarthView::World::Core::ev_string m_toStream_CDataStream_callback;
					EarthView::World::Core::ev_string m_toXML_void_callback;
					EarthView::World::Core::ev_string m_fromXmlElement_CXmlElement_callback;
					EarthView::World::Core::ev_string m_toXmlElement_void_callback;
					EarthView::World::Core::ev_string m_fromStream_CDataStream_callback;
				public:
					JIPageLayoutProxy(EarthView::World::Core::CNameValuePairList *pList) : IPageLayout(pList)
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
					C_DISABLE_COPY(JIPageLayoutProxy)
				public:
					void register_getName_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getName_void_callback = __method;
					}
					void register_setName_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setName_EVString_callback = __method;
					}
					void register_getPage_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getPage_void_callback = __method;
					}
					void register_setPage_IPage_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setPage_IPage_callback = __method;
					}
					void register_createElement_EVElementType_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_createElement_EVElementType_callback = __method;
					}
					void register_addElement_IElement_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_addElement_IElement_callback = __method;
					}
					void register_insertElement_ev_int32_IElement_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_insertElement_ev_int32_IElement_callback = __method;
					}
					void register_getElementCount_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getElementCount_void_callback = __method;
					}
					void register_getSelectedElementCount_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getSelectedElementCount_void_callback = __method;
					}
					void register_removeElement_IElement_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_removeElement_IElement_callback = __method;
					}
					void register_replaceElement_IElement_IElement_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_replaceElement_IElement_IElement_callback = __method;
					}
					void register_exchangeElement_ev_int32_ev_int32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_exchangeElement_ev_int32_ev_int32_callback = __method;
					}
					void register_getElement_ev_int32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getElement_ev_int32_callback = __method;
					}
					void register_removeSelectedElement_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_removeSelectedElement_void_callback = __method;
					}
					void register_removeAllElement_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_removeAllElement_void_callback = __method;
					}
					void register_isExistMapFrame_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_isExistMapFrame_void_callback = __method;
					}
					void register_isExist_IElement_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_isExist_IElement_callback = __method;
					}
					void register_removeMapFrame_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_removeMapFrame_void_callback = __method;
					}
					void register_getLayoutImage_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getLayoutImage_void_callback = __method;
					}
					void register_reset_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_reset_void_callback = __method;
					}
					void register_next_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_next_void_callback = __method;
					}
					void register_getInterestEnvelope_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getInterestEnvelope_void_callback = __method;
					}
					void register_setInterestEnvelope_IEnvelope_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setInterestEnvelope_IEnvelope_callback = __method;
					}
					void register_isActive_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_isActive_void_callback = __method;
					}
					void register_setActive_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setActive_ev_bool_callback = __method;
					}
					void register_updateEnvelop_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_updateEnvelop_void_callback = __method;
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
							return this->IPageLayout::getName();
						}
					}
					virtual void setName(const EVString& name)
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
							return this->IPageLayout::setName(name);
						}
					}
					virtual EarthView::World::Spatial::Carto::IPage* getPage() const
					{
						if (this->_gRef != NULL && this->m_getPage_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getPage_void_callback");
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
							return this->IPageLayout::getPage();
						}
					}
					virtual void setPage(EarthView::World::Spatial::Carto::IPage* pPage)
					{
						if (this->_gRef != NULL && this->m_setPage_IPage_callback != "" && this->isCustomExtend())
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
							jlong pPage_j = (jlong) pPage;
							jmethodID __method = __gr->getMethod("setPage_IPage_callback");
							__env->CallVoidMethod(__obj, __method , pPage_j);
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
							return this->IPageLayout::setPage(pPage);
						}
					}
					virtual EarthView::World::Spatial::Carto::IElement* createElement(EarthView::World::Spatial::Carto::EVElementType elementType)
					{
						if (this->_gRef != NULL && this->m_createElement_EVElementType_callback != "" && this->isCustomExtend())
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
							jint elementType_j = (jint) elementType;
							jmethodID __method = __gr->getMethod("createElement_EVElementType_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , elementType_j);
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
							return this->IPageLayout::createElement(elementType);
						}
					}
					virtual void addElement(EarthView::World::Spatial::Carto::IElement* pElement)
					{
						if (this->_gRef != NULL && this->m_addElement_IElement_callback != "" && this->isCustomExtend())
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
							jlong pElement_j = (jlong) pElement;
							jmethodID __method = __gr->getMethod("addElement_IElement_callback");
							__env->CallVoidMethod(__obj, __method , pElement_j);
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
							return this->IPageLayout::addElement(pElement);
						}
					}
					virtual void insertElement(ev_int32 nIndex, EarthView::World::Spatial::Carto::IElement* pElement)
					{
						if (this->_gRef != NULL && this->m_insertElement_ev_int32_IElement_callback != "" && this->isCustomExtend())
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
							jlong pElement_j = (jlong) pElement;
							jmethodID __method = __gr->getMethod("insertElement_ev_int32_IElement_callback");
							__env->CallVoidMethod(__obj, __method , nIndex_j, pElement_j);
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
							return this->IPageLayout::insertElement(nIndex, pElement);
						}
					}
					virtual ev_int32 getElementCount() const
					{
						if (this->_gRef != NULL && this->m_getElementCount_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getElementCount_void_callback");
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
							return this->IPageLayout::getElementCount();
						}
					}
					virtual ev_int32 getSelectedElementCount() const
					{
						if (this->_gRef != NULL && this->m_getSelectedElementCount_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getSelectedElementCount_void_callback");
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
							return this->IPageLayout::getSelectedElementCount();
						}
					}
					virtual void removeElement(EarthView::World::Spatial::Carto::IElement* element)
					{
						if (this->_gRef != NULL && this->m_removeElement_IElement_callback != "" && this->isCustomExtend())
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
							jlong element_j = (jlong) element;
							jmethodID __method = __gr->getMethod("removeElement_IElement_callback");
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
							return this->IPageLayout::removeElement(element);
						}
					}
					virtual ev_bool replaceElement(EarthView::World::Spatial::Carto::IElement* pOldElement, EarthView::World::Spatial::Carto::IElement* pNewElement)
					{
						if (this->_gRef != NULL && this->m_replaceElement_IElement_IElement_callback != "" && this->isCustomExtend())
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
							jlong pOldElement_j = (jlong) pOldElement;
							jlong pNewElement_j = (jlong) pNewElement;
							jmethodID __method = __gr->getMethod("replaceElement_IElement_IElement_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , pOldElement_j, pNewElement_j);
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
							return this->IPageLayout::replaceElement(pOldElement, pNewElement);
						}
					}
					virtual ev_bool exchangeElement(ev_int32 srcIndex, ev_int32 destIndex)
					{
						if (this->_gRef != NULL && this->m_exchangeElement_ev_int32_ev_int32_callback != "" && this->isCustomExtend())
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
							jint srcIndex_j = (jint) srcIndex;
							jint destIndex_j = (jint) destIndex;
							jmethodID __method = __gr->getMethod("exchangeElement_ev_int32_ev_int32_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , srcIndex_j, destIndex_j);
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
							return this->IPageLayout::exchangeElement(srcIndex, destIndex);
						}
					}
					virtual EarthView::World::Spatial::Carto::IElement* getElement(ev_int32 nIndex)
					{
						if (this->_gRef != NULL && this->m_getElement_ev_int32_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getElement_ev_int32_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , nIndex_j);
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
							return this->IPageLayout::getElement(nIndex);
						}
					}
					virtual void removeSelectedElement()
					{
						if (this->_gRef != NULL && this->m_removeSelectedElement_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("removeSelectedElement_void_callback");
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
							return this->IPageLayout::removeSelectedElement();
						}
					}
					virtual void removeAllElement()
					{
						if (this->_gRef != NULL && this->m_removeAllElement_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("removeAllElement_void_callback");
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
							return this->IPageLayout::removeAllElement();
						}
					}
					virtual ev_bool isExistMapFrame() const
					{
						if (this->_gRef != NULL && this->m_isExistMapFrame_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("isExistMapFrame_void_callback");
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
							return this->IPageLayout::isExistMapFrame();
						}
					}
					virtual ev_bool isExist(EarthView::World::Spatial::Carto::IElement* pElement) const
					{
						if (this->_gRef != NULL && this->m_isExist_IElement_callback != "" && this->isCustomExtend())
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
							jlong pElement_j = (jlong) pElement;
							jmethodID __method = __gr->getMethod("isExist_IElement_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , pElement_j);
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
							return this->IPageLayout::isExist(pElement);
						}
					}
					virtual void removeMapFrame()
					{
						if (this->_gRef != NULL && this->m_removeMapFrame_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("removeMapFrame_void_callback");
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
							return this->IPageLayout::removeMapFrame();
						}
					}
					virtual EarthView::World::Display::IBitmap* getLayoutImage()
					{
						if (this->_gRef != NULL && this->m_getLayoutImage_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getLayoutImage_void_callback");
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
							return this->IPageLayout::getLayoutImage();
						}
					}
					virtual void reset()
					{
						if (this->_gRef != NULL && this->m_reset_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("reset_void_callback");
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
							return this->IPageLayout::reset();
						}
					}
					virtual EarthView::World::Spatial::Carto::IElement* next()
					{
						if (this->_gRef != NULL && this->m_next_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("next_void_callback");
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
							return this->IPageLayout::next();
						}
					}
					virtual EarthView::World::Spatial::Geometry::IEnvelope* getInterestEnvelope() const
					{
						if (this->_gRef != NULL && this->m_getInterestEnvelope_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getInterestEnvelope_void_callback");
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
							return this->IPageLayout::getInterestEnvelope();
						}
					}
					virtual void setInterestEnvelope(const EarthView::World::Spatial::Geometry::IEnvelope* pEnvelope)
					{
						if (this->_gRef != NULL && this->m_setInterestEnvelope_IEnvelope_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("setInterestEnvelope_IEnvelope_callback");
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
							return this->IPageLayout::setInterestEnvelope(pEnvelope);
						}
					}
					virtual ev_bool isActive() const
					{
						if (this->_gRef != NULL && this->m_isActive_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("isActive_void_callback");
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
							return this->IPageLayout::isActive();
						}
					}
					virtual void setActive(ev_bool bActive)
					{
						if (this->_gRef != NULL && this->m_setActive_ev_bool_callback != "" && this->isCustomExtend())
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
							jboolean bActive_j = (jboolean) bActive;
							jmethodID __method = __gr->getMethod("setActive_ev_bool_callback");
							__env->CallVoidMethod(__obj, __method , bActive_j);
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
							return this->IPageLayout::setActive(bActive);
						}
					}
					virtual void updateEnvelop()
					{
						if (this->_gRef != NULL && this->m_updateEnvelop_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("updateEnvelop_void_callback");
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
							return this->IPageLayout::updateEnvelop();
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
							return this->IPageLayout::drawPrepare(pDisplay);
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
							return this->IPageLayout::draw();
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
							return this->IPageLayout::drawOver();
						}
					}
					virtual EarthView::World::Spatial::Carto::IPageLayout* clone() const
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
							EarthView::World::Spatial::Carto::IPageLayout *__values1 = (EarthView::World::Spatial::Carto::IPageLayout*) __values1_j;
							return __values1;
						}
						else
						{
							return this->IPageLayout::clone();
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
							return this->IPageLayout::toStream(stream);
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
							return this->IPageLayout::toXML();
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
							return this->IPageLayout::fromXmlElement(element);
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
							return this->IPageLayout::toXmlElement();
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
							return this->IPageLayout::fromStream(stream);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JIPageLayoutProxy);
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_carto_Ipagelayout_getName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::IPageLayout *pObjectX = (EarthView::World::Spatial::Carto::IPageLayout*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIPageLayoutProxy))
					{
						EVString __values1 = pObjectX->EarthView::World::Spatial::Carto::IPageLayout::getName();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_Ipagelayout_register_1getName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIPageLayoutProxy *pObjectX = (JIPageLayoutProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_carto_Ipagelayout_getName_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::IPageLayout *pObjectX = (EarthView::World::Spatial::Carto::IPageLayout*) pObjXXXX;
					EVString __values1 = pObjectX->EarthView::World::Spatial::Carto::IPageLayout::getName();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_Ipagelayout_setName_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
					EarthView::World::Spatial::Carto::IPageLayout *pObjectX = (EarthView::World::Spatial::Carto::IPageLayout*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIPageLayoutProxy))
					{
						pObjectX->EarthView::World::Spatial::Carto::IPageLayout::setName(name);
					}
					else
					{
						pObjectX->setName(name);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_Ipagelayout_register_1setName_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIPageLayoutProxy *pObjectX = (JIPageLayoutProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_Ipagelayout_setName_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
					EarthView::World::Spatial::Carto::IPageLayout *pObjectX = (EarthView::World::Spatial::Carto::IPageLayout*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Carto::IPageLayout::setName(name);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_carto_Ipagelayout_getPage_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::IPageLayout *pObjectX = (EarthView::World::Spatial::Carto::IPageLayout*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIPageLayoutProxy))
					{
						EarthView::World::Spatial::Carto::IPage* __values1 = pObjectX->EarthView::World::Spatial::Carto::IPageLayout::getPage();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Carto::IPage* __values1 = pObjectX->getPage();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_Ipagelayout_register_1getPage_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIPageLayoutProxy *pObjectX = (JIPageLayoutProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getPage_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getPage_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_carto_Ipagelayout_getPage_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::IPageLayout *pObjectX = (EarthView::World::Spatial::Carto::IPageLayout*) pObjXXXX;
					EarthView::World::Spatial::Carto::IPage* __values1 = pObjectX->EarthView::World::Spatial::Carto::IPageLayout::getPage();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_Ipagelayout_setPage_1IPage(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pPage_j)
				{
					EarthView::World::Spatial::Carto::IPage *pPage = (EarthView::World::Spatial::Carto::IPage*) pPage_j;
					EarthView::World::Spatial::Carto::IPageLayout *pObjectX = (EarthView::World::Spatial::Carto::IPageLayout*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIPageLayoutProxy))
					{
						pObjectX->EarthView::World::Spatial::Carto::IPageLayout::setPage(pPage);
					}
					else
					{
						pObjectX->setPage(pPage);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_Ipagelayout_register_1setPage_1IPage(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIPageLayoutProxy *pObjectX = (JIPageLayoutProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setPage_IPage_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setPage_IPage_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_Ipagelayout_setPage_1IPage_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pPage_j)
				{
					EarthView::World::Spatial::Carto::IPage *pPage = (EarthView::World::Spatial::Carto::IPage*) pPage_j;
					EarthView::World::Spatial::Carto::IPageLayout *pObjectX = (EarthView::World::Spatial::Carto::IPageLayout*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Carto::IPageLayout::setPage(pPage);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_carto_Ipagelayout_createElement_1EVElementType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint elementType_j)
				{
					EarthView::World::Spatial::Carto::EVElementType elementType = (EarthView::World::Spatial::Carto::EVElementType) elementType_j;
					EarthView::World::Spatial::Carto::IPageLayout *pObjectX = (EarthView::World::Spatial::Carto::IPageLayout*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIPageLayoutProxy))
					{
						EarthView::World::Spatial::Carto::IElement* __values1 = pObjectX->EarthView::World::Spatial::Carto::IPageLayout::createElement(elementType);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Carto::IElement* __values1 = pObjectX->createElement(elementType);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_Ipagelayout_register_1createElement_1EVElementType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIPageLayoutProxy *pObjectX = (JIPageLayoutProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_createElement_EVElementType_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"createElement_EVElementType_callback", "(I)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_carto_Ipagelayout_createElement_1EVElementType_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint elementType_j)
				{
					EarthView::World::Spatial::Carto::EVElementType elementType = (EarthView::World::Spatial::Carto::EVElementType) elementType_j;
					EarthView::World::Spatial::Carto::IPageLayout *pObjectX = (EarthView::World::Spatial::Carto::IPageLayout*) pObjXXXX;
					EarthView::World::Spatial::Carto::IElement* __values1 = pObjectX->EarthView::World::Spatial::Carto::IPageLayout::createElement(elementType);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_Ipagelayout_addElement_1IElement(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pElement_j)
				{
					EarthView::World::Spatial::Carto::IElement *pElement = (EarthView::World::Spatial::Carto::IElement*) pElement_j;
					EarthView::World::Spatial::Carto::IPageLayout *pObjectX = (EarthView::World::Spatial::Carto::IPageLayout*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIPageLayoutProxy))
					{
						pObjectX->EarthView::World::Spatial::Carto::IPageLayout::addElement(pElement);
					}
					else
					{
						pObjectX->addElement(pElement);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_Ipagelayout_register_1addElement_1IElement(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIPageLayoutProxy *pObjectX = (JIPageLayoutProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_addElement_IElement_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"addElement_IElement_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_Ipagelayout_addElement_1IElement_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pElement_j)
				{
					EarthView::World::Spatial::Carto::IElement *pElement = (EarthView::World::Spatial::Carto::IElement*) pElement_j;
					EarthView::World::Spatial::Carto::IPageLayout *pObjectX = (EarthView::World::Spatial::Carto::IPageLayout*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Carto::IPageLayout::addElement(pElement);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_Ipagelayout_insertElement_1ev_1int32_1IElement(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint nIndex_j, jlong pElement_j)
				{
					ev_int32 nIndex = (ev_int32) nIndex_j;
					EarthView::World::Spatial::Carto::IElement *pElement = (EarthView::World::Spatial::Carto::IElement*) pElement_j;
					EarthView::World::Spatial::Carto::IPageLayout *pObjectX = (EarthView::World::Spatial::Carto::IPageLayout*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIPageLayoutProxy))
					{
						pObjectX->EarthView::World::Spatial::Carto::IPageLayout::insertElement(nIndex, pElement);
					}
					else
					{
						pObjectX->insertElement(nIndex, pElement);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_Ipagelayout_register_1insertElement_1ev_1int32_1IElement(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIPageLayoutProxy *pObjectX = (JIPageLayoutProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_insertElement_ev_int32_IElement_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"insertElement_ev_int32_IElement_callback", "(IJ)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_Ipagelayout_insertElement_1ev_1int32_1IElement_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint nIndex_j, jlong pElement_j)
				{
					ev_int32 nIndex = (ev_int32) nIndex_j;
					EarthView::World::Spatial::Carto::IElement *pElement = (EarthView::World::Spatial::Carto::IElement*) pElement_j;
					EarthView::World::Spatial::Carto::IPageLayout *pObjectX = (EarthView::World::Spatial::Carto::IPageLayout*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Carto::IPageLayout::insertElement(nIndex, pElement);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_carto_Ipagelayout_getElementCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::IPageLayout *pObjectX = (EarthView::World::Spatial::Carto::IPageLayout*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIPageLayoutProxy))
					{
						ev_int32 __values1 = pObjectX->EarthView::World::Spatial::Carto::IPageLayout::getElementCount();
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
					else
					{
						ev_int32 __values1 = pObjectX->getElementCount();
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_Ipagelayout_register_1getElementCount_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIPageLayoutProxy *pObjectX = (JIPageLayoutProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getElementCount_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getElementCount_void_callback", "()I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_carto_Ipagelayout_getElementCount_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::IPageLayout *pObjectX = (EarthView::World::Spatial::Carto::IPageLayout*) pObjXXXX;
					ev_int32 __values1 = pObjectX->EarthView::World::Spatial::Carto::IPageLayout::getElementCount();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_carto_Ipagelayout_getSelectedElementCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::IPageLayout *pObjectX = (EarthView::World::Spatial::Carto::IPageLayout*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIPageLayoutProxy))
					{
						ev_int32 __values1 = pObjectX->EarthView::World::Spatial::Carto::IPageLayout::getSelectedElementCount();
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
					else
					{
						ev_int32 __values1 = pObjectX->getSelectedElementCount();
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_Ipagelayout_register_1getSelectedElementCount_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIPageLayoutProxy *pObjectX = (JIPageLayoutProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getSelectedElementCount_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getSelectedElementCount_void_callback", "()I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_carto_Ipagelayout_getSelectedElementCount_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::IPageLayout *pObjectX = (EarthView::World::Spatial::Carto::IPageLayout*) pObjXXXX;
					ev_int32 __values1 = pObjectX->EarthView::World::Spatial::Carto::IPageLayout::getSelectedElementCount();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_Ipagelayout_removeElement_1IElement(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong element_j)
				{
					EarthView::World::Spatial::Carto::IElement *element = (EarthView::World::Spatial::Carto::IElement*) element_j;
					EarthView::World::Spatial::Carto::IPageLayout *pObjectX = (EarthView::World::Spatial::Carto::IPageLayout*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIPageLayoutProxy))
					{
						pObjectX->EarthView::World::Spatial::Carto::IPageLayout::removeElement(element);
					}
					else
					{
						pObjectX->removeElement(element);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_Ipagelayout_register_1removeElement_1IElement(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIPageLayoutProxy *pObjectX = (JIPageLayoutProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_removeElement_IElement_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"removeElement_IElement_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_Ipagelayout_removeElement_1IElement_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong element_j)
				{
					EarthView::World::Spatial::Carto::IElement *element = (EarthView::World::Spatial::Carto::IElement*) element_j;
					EarthView::World::Spatial::Carto::IPageLayout *pObjectX = (EarthView::World::Spatial::Carto::IPageLayout*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Carto::IPageLayout::removeElement(element);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_carto_Ipagelayout_replaceElement_1IElement_1IElement(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pOldElement_j, jlong pNewElement_j)
				{
					EarthView::World::Spatial::Carto::IElement *pOldElement = (EarthView::World::Spatial::Carto::IElement*) pOldElement_j;
					EarthView::World::Spatial::Carto::IElement *pNewElement = (EarthView::World::Spatial::Carto::IElement*) pNewElement_j;
					EarthView::World::Spatial::Carto::IPageLayout *pObjectX = (EarthView::World::Spatial::Carto::IPageLayout*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIPageLayoutProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::Carto::IPageLayout::replaceElement(pOldElement, pNewElement);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->replaceElement(pOldElement, pNewElement);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_Ipagelayout_register_1replaceElement_1IElement_1IElement(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIPageLayoutProxy *pObjectX = (JIPageLayoutProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_replaceElement_IElement_IElement_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"replaceElement_IElement_IElement_callback", "(JJ)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_carto_Ipagelayout_replaceElement_1IElement_1IElement_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pOldElement_j, jlong pNewElement_j)
				{
					EarthView::World::Spatial::Carto::IElement *pOldElement = (EarthView::World::Spatial::Carto::IElement*) pOldElement_j;
					EarthView::World::Spatial::Carto::IElement *pNewElement = (EarthView::World::Spatial::Carto::IElement*) pNewElement_j;
					EarthView::World::Spatial::Carto::IPageLayout *pObjectX = (EarthView::World::Spatial::Carto::IPageLayout*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::Carto::IPageLayout::replaceElement(pOldElement, pNewElement);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_carto_Ipagelayout_exchangeElement_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint srcIndex_j, jint destIndex_j)
				{
					ev_int32 srcIndex = (ev_int32) srcIndex_j;
					ev_int32 destIndex = (ev_int32) destIndex_j;
					EarthView::World::Spatial::Carto::IPageLayout *pObjectX = (EarthView::World::Spatial::Carto::IPageLayout*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIPageLayoutProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::Carto::IPageLayout::exchangeElement(srcIndex, destIndex);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->exchangeElement(srcIndex, destIndex);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_Ipagelayout_register_1exchangeElement_1ev_1int32_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIPageLayoutProxy *pObjectX = (JIPageLayoutProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_exchangeElement_ev_int32_ev_int32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"exchangeElement_ev_int32_ev_int32_callback", "(II)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_carto_Ipagelayout_exchangeElement_1ev_1int32_1ev_1int32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint srcIndex_j, jint destIndex_j)
				{
					ev_int32 srcIndex = (ev_int32) srcIndex_j;
					ev_int32 destIndex = (ev_int32) destIndex_j;
					EarthView::World::Spatial::Carto::IPageLayout *pObjectX = (EarthView::World::Spatial::Carto::IPageLayout*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::Carto::IPageLayout::exchangeElement(srcIndex, destIndex);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_carto_Ipagelayout_getElement_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint nIndex_j)
				{
					ev_int32 nIndex = (ev_int32) nIndex_j;
					EarthView::World::Spatial::Carto::IPageLayout *pObjectX = (EarthView::World::Spatial::Carto::IPageLayout*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIPageLayoutProxy))
					{
						EarthView::World::Spatial::Carto::IElement* __values1 = pObjectX->EarthView::World::Spatial::Carto::IPageLayout::getElement(nIndex);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Carto::IElement* __values1 = pObjectX->getElement(nIndex);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_Ipagelayout_register_1getElement_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIPageLayoutProxy *pObjectX = (JIPageLayoutProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getElement_ev_int32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getElement_ev_int32_callback", "(I)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_carto_Ipagelayout_getElement_1ev_1int32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint nIndex_j)
				{
					ev_int32 nIndex = (ev_int32) nIndex_j;
					EarthView::World::Spatial::Carto::IPageLayout *pObjectX = (EarthView::World::Spatial::Carto::IPageLayout*) pObjXXXX;
					EarthView::World::Spatial::Carto::IElement* __values1 = pObjectX->EarthView::World::Spatial::Carto::IPageLayout::getElement(nIndex);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_Ipagelayout_removeSelectedElement_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Carto::IPageLayout *pObjectX = (EarthView::World::Spatial::Carto::IPageLayout*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIPageLayoutProxy))
					{
						pObjectX->EarthView::World::Spatial::Carto::IPageLayout::removeSelectedElement();
					}
					else
					{
						pObjectX->removeSelectedElement();
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_Ipagelayout_register_1removeSelectedElement_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIPageLayoutProxy *pObjectX = (JIPageLayoutProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_removeSelectedElement_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"removeSelectedElement_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_Ipagelayout_removeSelectedElement_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Carto::IPageLayout *pObjectX = (EarthView::World::Spatial::Carto::IPageLayout*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Carto::IPageLayout::removeSelectedElement();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_Ipagelayout_removeAllElement_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Carto::IPageLayout *pObjectX = (EarthView::World::Spatial::Carto::IPageLayout*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIPageLayoutProxy))
					{
						pObjectX->EarthView::World::Spatial::Carto::IPageLayout::removeAllElement();
					}
					else
					{
						pObjectX->removeAllElement();
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_Ipagelayout_register_1removeAllElement_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIPageLayoutProxy *pObjectX = (JIPageLayoutProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_removeAllElement_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"removeAllElement_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_Ipagelayout_removeAllElement_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Carto::IPageLayout *pObjectX = (EarthView::World::Spatial::Carto::IPageLayout*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Carto::IPageLayout::removeAllElement();
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_carto_Ipagelayout_isExistMapFrame_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::IPageLayout *pObjectX = (EarthView::World::Spatial::Carto::IPageLayout*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIPageLayoutProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::Carto::IPageLayout::isExistMapFrame();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->isExistMapFrame();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_Ipagelayout_register_1isExistMapFrame_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIPageLayoutProxy *pObjectX = (JIPageLayoutProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_isExistMapFrame_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"isExistMapFrame_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_carto_Ipagelayout_isExistMapFrame_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::IPageLayout *pObjectX = (EarthView::World::Spatial::Carto::IPageLayout*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::Carto::IPageLayout::isExistMapFrame();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_carto_Ipagelayout_isExist_1IElement(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pElement_j)
				{
					EarthView::World::Spatial::Carto::IElement *pElement = (EarthView::World::Spatial::Carto::IElement*) pElement_j;
					const 					EarthView::World::Spatial::Carto::IPageLayout *pObjectX = (EarthView::World::Spatial::Carto::IPageLayout*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIPageLayoutProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::Carto::IPageLayout::isExist(pElement);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->isExist(pElement);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_Ipagelayout_register_1isExist_1IElement(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIPageLayoutProxy *pObjectX = (JIPageLayoutProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_isExist_IElement_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"isExist_IElement_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_carto_Ipagelayout_isExist_1IElement_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pElement_j)
				{
					EarthView::World::Spatial::Carto::IElement *pElement = (EarthView::World::Spatial::Carto::IElement*) pElement_j;
					const 					EarthView::World::Spatial::Carto::IPageLayout *pObjectX = (EarthView::World::Spatial::Carto::IPageLayout*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::Carto::IPageLayout::isExist(pElement);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_Ipagelayout_removeMapFrame_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Carto::IPageLayout *pObjectX = (EarthView::World::Spatial::Carto::IPageLayout*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIPageLayoutProxy))
					{
						pObjectX->EarthView::World::Spatial::Carto::IPageLayout::removeMapFrame();
					}
					else
					{
						pObjectX->removeMapFrame();
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_Ipagelayout_register_1removeMapFrame_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIPageLayoutProxy *pObjectX = (JIPageLayoutProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_removeMapFrame_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"removeMapFrame_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_Ipagelayout_removeMapFrame_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Carto::IPageLayout *pObjectX = (EarthView::World::Spatial::Carto::IPageLayout*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Carto::IPageLayout::removeMapFrame();
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_carto_Ipagelayout_getLayoutImage_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Carto::IPageLayout *pObjectX = (EarthView::World::Spatial::Carto::IPageLayout*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIPageLayoutProxy))
					{
						EarthView::World::Display::IBitmap* __values1 = pObjectX->EarthView::World::Spatial::Carto::IPageLayout::getLayoutImage();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Display::IBitmap* __values1 = pObjectX->getLayoutImage();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_Ipagelayout_register_1getLayoutImage_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIPageLayoutProxy *pObjectX = (JIPageLayoutProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getLayoutImage_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getLayoutImage_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_carto_Ipagelayout_getLayoutImage_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Carto::IPageLayout *pObjectX = (EarthView::World::Spatial::Carto::IPageLayout*) pObjXXXX;
					EarthView::World::Display::IBitmap* __values1 = pObjectX->EarthView::World::Spatial::Carto::IPageLayout::getLayoutImage();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_Ipagelayout_reset_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Carto::IPageLayout *pObjectX = (EarthView::World::Spatial::Carto::IPageLayout*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIPageLayoutProxy))
					{
						pObjectX->EarthView::World::Spatial::Carto::IPageLayout::reset();
					}
					else
					{
						pObjectX->reset();
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_Ipagelayout_register_1reset_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIPageLayoutProxy *pObjectX = (JIPageLayoutProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_reset_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"reset_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_Ipagelayout_reset_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Carto::IPageLayout *pObjectX = (EarthView::World::Spatial::Carto::IPageLayout*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Carto::IPageLayout::reset();
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_carto_Ipagelayout_next_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Carto::IPageLayout *pObjectX = (EarthView::World::Spatial::Carto::IPageLayout*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIPageLayoutProxy))
					{
						EarthView::World::Spatial::Carto::IElement* __values1 = pObjectX->EarthView::World::Spatial::Carto::IPageLayout::next();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Carto::IElement* __values1 = pObjectX->next();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_Ipagelayout_register_1next_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIPageLayoutProxy *pObjectX = (JIPageLayoutProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_next_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"next_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_carto_Ipagelayout_next_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Carto::IPageLayout *pObjectX = (EarthView::World::Spatial::Carto::IPageLayout*) pObjXXXX;
					EarthView::World::Spatial::Carto::IElement* __values1 = pObjectX->EarthView::World::Spatial::Carto::IPageLayout::next();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_carto_Ipagelayout_getInterestEnvelope_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::IPageLayout *pObjectX = (EarthView::World::Spatial::Carto::IPageLayout*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIPageLayoutProxy))
					{
						EarthView::World::Spatial::Geometry::IEnvelope* __values1 = pObjectX->EarthView::World::Spatial::Carto::IPageLayout::getInterestEnvelope();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Geometry::IEnvelope* __values1 = pObjectX->getInterestEnvelope();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_Ipagelayout_register_1getInterestEnvelope_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIPageLayoutProxy *pObjectX = (JIPageLayoutProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getInterestEnvelope_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getInterestEnvelope_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_carto_Ipagelayout_getInterestEnvelope_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::IPageLayout *pObjectX = (EarthView::World::Spatial::Carto::IPageLayout*) pObjXXXX;
					EarthView::World::Spatial::Geometry::IEnvelope* __values1 = pObjectX->EarthView::World::Spatial::Carto::IPageLayout::getInterestEnvelope();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_Ipagelayout_setInterestEnvelope_1IEnvelope(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pEnvelope_j)
				{
					const EarthView::World::Spatial::Geometry::IEnvelope *pEnvelope = (const EarthView::World::Spatial::Geometry::IEnvelope*) pEnvelope_j;
					EarthView::World::Spatial::Carto::IPageLayout *pObjectX = (EarthView::World::Spatial::Carto::IPageLayout*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIPageLayoutProxy))
					{
						pObjectX->EarthView::World::Spatial::Carto::IPageLayout::setInterestEnvelope(pEnvelope);
					}
					else
					{
						pObjectX->setInterestEnvelope(pEnvelope);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_Ipagelayout_register_1setInterestEnvelope_1IEnvelope(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIPageLayoutProxy *pObjectX = (JIPageLayoutProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setInterestEnvelope_IEnvelope_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setInterestEnvelope_IEnvelope_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_Ipagelayout_setInterestEnvelope_1IEnvelope_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pEnvelope_j)
				{
					const EarthView::World::Spatial::Geometry::IEnvelope *pEnvelope = (const EarthView::World::Spatial::Geometry::IEnvelope*) pEnvelope_j;
					EarthView::World::Spatial::Carto::IPageLayout *pObjectX = (EarthView::World::Spatial::Carto::IPageLayout*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Carto::IPageLayout::setInterestEnvelope(pEnvelope);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_carto_Ipagelayout_isActive_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::IPageLayout *pObjectX = (EarthView::World::Spatial::Carto::IPageLayout*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIPageLayoutProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::Carto::IPageLayout::isActive();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->isActive();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_Ipagelayout_register_1isActive_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIPageLayoutProxy *pObjectX = (JIPageLayoutProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_isActive_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"isActive_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_carto_Ipagelayout_isActive_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::IPageLayout *pObjectX = (EarthView::World::Spatial::Carto::IPageLayout*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::Carto::IPageLayout::isActive();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_Ipagelayout_setActive_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean bActive_j)
				{
					ev_bool bActive = (ev_bool) bActive_j;
					EarthView::World::Spatial::Carto::IPageLayout *pObjectX = (EarthView::World::Spatial::Carto::IPageLayout*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIPageLayoutProxy))
					{
						pObjectX->EarthView::World::Spatial::Carto::IPageLayout::setActive(bActive);
					}
					else
					{
						pObjectX->setActive(bActive);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_Ipagelayout_register_1setActive_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIPageLayoutProxy *pObjectX = (JIPageLayoutProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setActive_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setActive_ev_bool_callback", "(Z)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_Ipagelayout_setActive_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean bActive_j)
				{
					ev_bool bActive = (ev_bool) bActive_j;
					EarthView::World::Spatial::Carto::IPageLayout *pObjectX = (EarthView::World::Spatial::Carto::IPageLayout*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Carto::IPageLayout::setActive(bActive);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_Ipagelayout_updateEnvelop_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Carto::IPageLayout *pObjectX = (EarthView::World::Spatial::Carto::IPageLayout*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIPageLayoutProxy))
					{
						pObjectX->EarthView::World::Spatial::Carto::IPageLayout::updateEnvelop();
					}
					else
					{
						pObjectX->updateEnvelop();
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_Ipagelayout_register_1updateEnvelop_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIPageLayoutProxy *pObjectX = (JIPageLayoutProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_updateEnvelop_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"updateEnvelop_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_Ipagelayout_updateEnvelop_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Carto::IPageLayout *pObjectX = (EarthView::World::Spatial::Carto::IPageLayout*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Carto::IPageLayout::updateEnvelop();
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_carto_Ipagelayout_drawPrepare_1ISpatialDisplay(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pDisplay_j)
				{
					EarthView::World::Spatial::Display::ISpatialDisplay *pDisplay = (EarthView::World::Spatial::Display::ISpatialDisplay*) pDisplay_j;
					EarthView::World::Spatial::Carto::IPageLayout *pObjectX = (EarthView::World::Spatial::Carto::IPageLayout*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIPageLayoutProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::Carto::IPageLayout::drawPrepare(pDisplay);
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_Ipagelayout_register_1drawPrepare_1ISpatialDisplay(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIPageLayoutProxy *pObjectX = (JIPageLayoutProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_carto_Ipagelayout_drawPrepare_1ISpatialDisplay_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pDisplay_j)
				{
					EarthView::World::Spatial::Display::ISpatialDisplay *pDisplay = (EarthView::World::Spatial::Display::ISpatialDisplay*) pDisplay_j;
					EarthView::World::Spatial::Carto::IPageLayout *pObjectX = (EarthView::World::Spatial::Carto::IPageLayout*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::Carto::IPageLayout::drawPrepare(pDisplay);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_Ipagelayout_draw_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Carto::IPageLayout *pObjectX = (EarthView::World::Spatial::Carto::IPageLayout*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIPageLayoutProxy))
					{
						pObjectX->EarthView::World::Spatial::Carto::IPageLayout::draw();
					}
					else
					{
						pObjectX->draw();
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_Ipagelayout_register_1draw_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIPageLayoutProxy *pObjectX = (JIPageLayoutProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_Ipagelayout_draw_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Carto::IPageLayout *pObjectX = (EarthView::World::Spatial::Carto::IPageLayout*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Carto::IPageLayout::draw();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_Ipagelayout_drawOver_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Carto::IPageLayout *pObjectX = (EarthView::World::Spatial::Carto::IPageLayout*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIPageLayoutProxy))
					{
						pObjectX->EarthView::World::Spatial::Carto::IPageLayout::drawOver();
					}
					else
					{
						pObjectX->drawOver();
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_Ipagelayout_register_1drawOver_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIPageLayoutProxy *pObjectX = (JIPageLayoutProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_Ipagelayout_drawOver_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Carto::IPageLayout *pObjectX = (EarthView::World::Spatial::Carto::IPageLayout*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Carto::IPageLayout::drawOver();
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_carto_Ipagelayout_ev_1clone_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::IPageLayout *pObjectX = (EarthView::World::Spatial::Carto::IPageLayout*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIPageLayoutProxy))
					{
						EarthView::World::Spatial::Carto::IPageLayout* __values1 = pObjectX->EarthView::World::Spatial::Carto::IPageLayout::clone();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Carto::IPageLayout* __values1 = pObjectX->clone();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_Ipagelayout_register_1ev_1clone_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIPageLayoutProxy *pObjectX = (JIPageLayoutProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_carto_Ipagelayout_ev_1clone_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::IPageLayout *pObjectX = (EarthView::World::Spatial::Carto::IPageLayout*) pObjXXXX;
					EarthView::World::Spatial::Carto::IPageLayout* __values1 = pObjectX->EarthView::World::Spatial::Carto::IPageLayout::clone();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_Ipagelayout_toStream_1CDataStream(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j)
				{
					EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
					const 					EarthView::World::Spatial::Carto::IPageLayout *pObjectX = (EarthView::World::Spatial::Carto::IPageLayout*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIPageLayoutProxy))
					{
						pObjectX->EarthView::World::Spatial::Carto::IPageLayout::toStream(stream);
					}
					else
					{
						pObjectX->toStream(stream);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_Ipagelayout_register_1toStream_1CDataStream(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIPageLayoutProxy *pObjectX = (JIPageLayoutProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_Ipagelayout_toStream_1CDataStream_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j)
				{
					EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
					const 					EarthView::World::Spatial::Carto::IPageLayout *pObjectX = (EarthView::World::Spatial::Carto::IPageLayout*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Carto::IPageLayout::toStream(stream);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_carto_Ipagelayout_toXML_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::IPageLayout *pObjectX = (EarthView::World::Spatial::Carto::IPageLayout*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIPageLayoutProxy))
					{
						EVString __values1 = pObjectX->EarthView::World::Spatial::Carto::IPageLayout::toXML();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_Ipagelayout_register_1toXML_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIPageLayoutProxy *pObjectX = (JIPageLayoutProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_carto_Ipagelayout_toXML_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::IPageLayout *pObjectX = (EarthView::World::Spatial::Carto::IPageLayout*) pObjXXXX;
					EVString __values1 = pObjectX->EarthView::World::Spatial::Carto::IPageLayout::toXML();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_Ipagelayout_fromXmlElement_1CXmlElement(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong element_j)
				{
					EarthView::World::Core::CXmlElement &element = *(EarthView::World::Core::CXmlElement*) element_j;
					EarthView::World::Spatial::Carto::IPageLayout *pObjectX = (EarthView::World::Spatial::Carto::IPageLayout*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIPageLayoutProxy))
					{
						pObjectX->EarthView::World::Spatial::Carto::IPageLayout::fromXmlElement(element);
					}
					else
					{
						pObjectX->fromXmlElement(element);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_Ipagelayout_register_1fromXmlElement_1CXmlElement(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIPageLayoutProxy *pObjectX = (JIPageLayoutProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_Ipagelayout_fromXmlElement_1CXmlElement_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong element_j)
				{
					EarthView::World::Core::CXmlElement &element = *(EarthView::World::Core::CXmlElement*) element_j;
					EarthView::World::Spatial::Carto::IPageLayout *pObjectX = (EarthView::World::Spatial::Carto::IPageLayout*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Carto::IPageLayout::fromXmlElement(element);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_carto_Ipagelayout_toXmlElement_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::IPageLayout *pObjectX = (EarthView::World::Spatial::Carto::IPageLayout*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIPageLayoutProxy))
					{
						EarthView::World::Core::CXmlElement __values1 = pObjectX->EarthView::World::Spatial::Carto::IPageLayout::toXmlElement();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_Ipagelayout_register_1toXmlElement_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIPageLayoutProxy *pObjectX = (JIPageLayoutProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_carto_Ipagelayout_toXmlElement_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Carto::IPageLayout *pObjectX = (EarthView::World::Spatial::Carto::IPageLayout*) pObjXXXX;
					EarthView::World::Core::CXmlElement __values1 = pObjectX->EarthView::World::Spatial::Carto::IPageLayout::toXmlElement();
					EarthView::World::Core::CXmlElement *returnvalues = new EarthView::World::Core::CXmlElement(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_Ipagelayout_fromStream_1CDataStream(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j)
				{
					EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
					EarthView::World::Spatial::Carto::IPageLayout *pObjectX = (EarthView::World::Spatial::Carto::IPageLayout*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIPageLayoutProxy))
					{
						pObjectX->EarthView::World::Spatial::Carto::IPageLayout::fromStream(stream);
					}
					else
					{
						pObjectX->fromStream(stream);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_Ipagelayout_register_1fromStream_1CDataStream(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIPageLayoutProxy *pObjectX = (JIPageLayoutProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_carto_Ipagelayout_fromStream_1CDataStream_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j)
				{
					EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
					EarthView::World::Spatial::Carto::IPageLayout *pObjectX = (EarthView::World::Spatial::Carto::IPageLayout*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Carto::IPageLayout::fromStream(stream);
				}
			}
		}
	}
}
