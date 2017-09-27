/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "chart/chartlayer.h"
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
			namespace Atlas
			{
				class JCChartLayerSelectionProxy : public EarthView::World::Spatial::Atlas::CChartLayerSelection
				{
				 private:
					EarthView::World::Core::ev_string m_getPointSelectionSymbol_void_callback;
					EarthView::World::Core::ev_string m_setPointSelectionSymbol_ISymbol_callback;
					EarthView::World::Core::ev_string m_getLineSelectionSymbol_void_callback;
					EarthView::World::Core::ev_string m_setLineSelectionSymbol_ISymbol_callback;
					EarthView::World::Core::ev_string m_getAreaSelectionSymbol_void_callback;
					EarthView::World::Core::ev_string m_setAreaSelectionSymbol_ISymbol_callback;
					EarthView::World::Core::ev_string m_getSelection_void_callback;
					EarthView::World::Core::ev_string m_getSelectionSymbol_void_callback;
					EarthView::World::Core::ev_string m_setSelectionSymbol_ISymbol_callback;
				public:
					JCChartLayerSelectionProxy(EarthView::World::Core::CNameValuePairList *pList) : CChartLayerSelection(pList)
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
					C_DISABLE_COPY(JCChartLayerSelectionProxy)
				public:
					void register_getPointSelectionSymbol_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getPointSelectionSymbol_void_callback = __method;
					}
					void register_setPointSelectionSymbol_ISymbol_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setPointSelectionSymbol_ISymbol_callback = __method;
					}
					void register_getLineSelectionSymbol_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getLineSelectionSymbol_void_callback = __method;
					}
					void register_setLineSelectionSymbol_ISymbol_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setLineSelectionSymbol_ISymbol_callback = __method;
					}
					void register_getAreaSelectionSymbol_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getAreaSelectionSymbol_void_callback = __method;
					}
					void register_setAreaSelectionSymbol_ISymbol_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setAreaSelectionSymbol_ISymbol_callback = __method;
					}
					void register_getSelection_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getSelection_void_callback = __method;
					}
					void register_getSelectionSymbol_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getSelectionSymbol_void_callback = __method;
					}
					void register_setSelectionSymbol_ISymbol_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setSelectionSymbol_ISymbol_callback = __method;
					}
					virtual EarthView::World::Spatial::GeoDataset::IFeatureSelection* getSelection() const
					{
						if (this->_gRef != NULL && this->m_getSelection_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getSelection_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::GeoDataset::IFeatureSelection *__values1 = (EarthView::World::Spatial::GeoDataset::IFeatureSelection*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CChartLayerSelection::getSelection();
						}
					}
					virtual EarthView::World::Spatial::Display::ISymbol* getSelectionSymbol() const
					{
						if (this->_gRef != NULL && this->m_getSelectionSymbol_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getSelectionSymbol_void_callback");
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
							return this->CChartLayerSelection::getSelectionSymbol();
						}
					}
					virtual void setSelectionSymbol(const EarthView::World::Spatial::Display::ISymbol* symbol)
					{
						if (this->_gRef != NULL && this->m_setSelectionSymbol_ISymbol_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
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
							jmethodID __method = __gr->getMethod("setSelectionSymbol_ISymbol_callback");
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
							return this->CChartLayerSelection::setSelectionSymbol(symbol);
						}
					}
					virtual EarthView::World::Spatial::Display::ISymbol* getPointSelectionSymbol() const
					{
						if (this->_gRef != NULL && this->m_getPointSelectionSymbol_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getPointSelectionSymbol_void_callback");
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
							return this->CChartLayerSelection::getPointSelectionSymbol();
						}
					}
					virtual void setPointSelectionSymbol(const EarthView::World::Spatial::Display::ISymbol* symbol)
					{
						if (this->_gRef != NULL && this->m_setPointSelectionSymbol_ISymbol_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
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
							jmethodID __method = __gr->getMethod("setPointSelectionSymbol_ISymbol_callback");
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
							return this->CChartLayerSelection::setPointSelectionSymbol(symbol);
						}
					}
					virtual EarthView::World::Spatial::Display::ISymbol* getLineSelectionSymbol() const
					{
						if (this->_gRef != NULL && this->m_getLineSelectionSymbol_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getLineSelectionSymbol_void_callback");
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
							return this->CChartLayerSelection::getLineSelectionSymbol();
						}
					}
					virtual void setLineSelectionSymbol(const EarthView::World::Spatial::Display::ISymbol* symbol)
					{
						if (this->_gRef != NULL && this->m_setLineSelectionSymbol_ISymbol_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
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
							jmethodID __method = __gr->getMethod("setLineSelectionSymbol_ISymbol_callback");
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
							return this->CChartLayerSelection::setLineSelectionSymbol(symbol);
						}
					}
					virtual EarthView::World::Spatial::Display::ISymbol* getAreaSelectionSymbol() const
					{
						if (this->_gRef != NULL && this->m_getAreaSelectionSymbol_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getAreaSelectionSymbol_void_callback");
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
							return this->CChartLayerSelection::getAreaSelectionSymbol();
						}
					}
					virtual void setAreaSelectionSymbol(const EarthView::World::Spatial::Display::ISymbol* symbol)
					{
						if (this->_gRef != NULL && this->m_setAreaSelectionSymbol_ISymbol_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
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
							jmethodID __method = __gr->getMethod("setAreaSelectionSymbol_ISymbol_callback");
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
							return this->CChartLayerSelection::setAreaSelectionSymbol(symbol);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCChartLayerSelectionProxy);
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_atlas_ChartLayerSelection_getSelection_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Atlas::CChartLayerSelection *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayerSelection*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartLayerSelectionProxy))
					{
						EarthView::World::Spatial::GeoDataset::IFeatureSelection* __values1 = pObjectX->EarthView::World::Spatial::Atlas::CChartLayerSelection::getSelection();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IFeatureSelection* __values1 = pObjectX->getSelection();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayerSelection_register_1getSelection_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartLayerSelectionProxy *pObjectX = (JCChartLayerSelectionProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getSelection_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getSelection_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_atlas_ChartLayerSelection_getSelection_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Atlas::CChartLayerSelection *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayerSelection*) pObjXXXX;
					EarthView::World::Spatial::GeoDataset::IFeatureSelection* __values1 = pObjectX->EarthView::World::Spatial::Atlas::CChartLayerSelection::getSelection();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_atlas_ChartLayerSelection_getSelectionSymbol_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Atlas::CChartLayerSelection *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayerSelection*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartLayerSelectionProxy))
					{
						EarthView::World::Spatial::Display::ISymbol* __values1 = pObjectX->EarthView::World::Spatial::Atlas::CChartLayerSelection::getSelectionSymbol();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Display::ISymbol* __values1 = pObjectX->getSelectionSymbol();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayerSelection_register_1getSelectionSymbol_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartLayerSelectionProxy *pObjectX = (JCChartLayerSelectionProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getSelectionSymbol_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getSelectionSymbol_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_atlas_ChartLayerSelection_getSelectionSymbol_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Atlas::CChartLayerSelection *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayerSelection*) pObjXXXX;
					EarthView::World::Spatial::Display::ISymbol* __values1 = pObjectX->EarthView::World::Spatial::Atlas::CChartLayerSelection::getSelectionSymbol();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayerSelection_setSelectionSymbol_1ISymbol(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong symbol_j)
				{
					const EarthView::World::Spatial::Display::ISymbol *symbol = (const EarthView::World::Spatial::Display::ISymbol*) symbol_j;
					EarthView::World::Spatial::Atlas::CChartLayerSelection *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayerSelection*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartLayerSelectionProxy))
					{
						pObjectX->EarthView::World::Spatial::Atlas::CChartLayerSelection::setSelectionSymbol(symbol);
					}
					else
					{
						pObjectX->setSelectionSymbol(symbol);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayerSelection_register_1setSelectionSymbol_1ISymbol(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartLayerSelectionProxy *pObjectX = (JCChartLayerSelectionProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setSelectionSymbol_ISymbol_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setSelectionSymbol_ISymbol_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayerSelection_setSelectionSymbol_1ISymbol_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong symbol_j)
				{
					const EarthView::World::Spatial::Display::ISymbol *symbol = (const EarthView::World::Spatial::Display::ISymbol*) symbol_j;
					EarthView::World::Spatial::Atlas::CChartLayerSelection *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayerSelection*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Atlas::CChartLayerSelection::setSelectionSymbol(symbol);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_atlas_ChartLayerSelection_getPointSelectionSymbol_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Atlas::CChartLayerSelection *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayerSelection*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartLayerSelectionProxy))
					{
						EarthView::World::Spatial::Display::ISymbol* __values1 = pObjectX->EarthView::World::Spatial::Atlas::CChartLayerSelection::getPointSelectionSymbol();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Display::ISymbol* __values1 = pObjectX->getPointSelectionSymbol();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayerSelection_register_1getPointSelectionSymbol_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartLayerSelectionProxy *pObjectX = (JCChartLayerSelectionProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getPointSelectionSymbol_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getPointSelectionSymbol_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_atlas_ChartLayerSelection_getPointSelectionSymbol_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Atlas::CChartLayerSelection *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayerSelection*) pObjXXXX;
					EarthView::World::Spatial::Display::ISymbol* __values1 = pObjectX->EarthView::World::Spatial::Atlas::CChartLayerSelection::getPointSelectionSymbol();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayerSelection_setPointSelectionSymbol_1ISymbol(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong symbol_j)
				{
					const EarthView::World::Spatial::Display::ISymbol *symbol = (const EarthView::World::Spatial::Display::ISymbol*) symbol_j;
					EarthView::World::Spatial::Atlas::CChartLayerSelection *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayerSelection*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartLayerSelectionProxy))
					{
						pObjectX->EarthView::World::Spatial::Atlas::CChartLayerSelection::setPointSelectionSymbol(symbol);
					}
					else
					{
						pObjectX->setPointSelectionSymbol(symbol);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayerSelection_register_1setPointSelectionSymbol_1ISymbol(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartLayerSelectionProxy *pObjectX = (JCChartLayerSelectionProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setPointSelectionSymbol_ISymbol_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setPointSelectionSymbol_ISymbol_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayerSelection_setPointSelectionSymbol_1ISymbol_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong symbol_j)
				{
					const EarthView::World::Spatial::Display::ISymbol *symbol = (const EarthView::World::Spatial::Display::ISymbol*) symbol_j;
					EarthView::World::Spatial::Atlas::CChartLayerSelection *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayerSelection*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Atlas::CChartLayerSelection::setPointSelectionSymbol(symbol);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_atlas_ChartLayerSelection_getLineSelectionSymbol_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Atlas::CChartLayerSelection *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayerSelection*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartLayerSelectionProxy))
					{
						EarthView::World::Spatial::Display::ISymbol* __values1 = pObjectX->EarthView::World::Spatial::Atlas::CChartLayerSelection::getLineSelectionSymbol();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Display::ISymbol* __values1 = pObjectX->getLineSelectionSymbol();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayerSelection_register_1getLineSelectionSymbol_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartLayerSelectionProxy *pObjectX = (JCChartLayerSelectionProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getLineSelectionSymbol_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getLineSelectionSymbol_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_atlas_ChartLayerSelection_getLineSelectionSymbol_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Atlas::CChartLayerSelection *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayerSelection*) pObjXXXX;
					EarthView::World::Spatial::Display::ISymbol* __values1 = pObjectX->EarthView::World::Spatial::Atlas::CChartLayerSelection::getLineSelectionSymbol();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayerSelection_setLineSelectionSymbol_1ISymbol(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong symbol_j)
				{
					const EarthView::World::Spatial::Display::ISymbol *symbol = (const EarthView::World::Spatial::Display::ISymbol*) symbol_j;
					EarthView::World::Spatial::Atlas::CChartLayerSelection *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayerSelection*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartLayerSelectionProxy))
					{
						pObjectX->EarthView::World::Spatial::Atlas::CChartLayerSelection::setLineSelectionSymbol(symbol);
					}
					else
					{
						pObjectX->setLineSelectionSymbol(symbol);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayerSelection_register_1setLineSelectionSymbol_1ISymbol(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartLayerSelectionProxy *pObjectX = (JCChartLayerSelectionProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setLineSelectionSymbol_ISymbol_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setLineSelectionSymbol_ISymbol_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayerSelection_setLineSelectionSymbol_1ISymbol_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong symbol_j)
				{
					const EarthView::World::Spatial::Display::ISymbol *symbol = (const EarthView::World::Spatial::Display::ISymbol*) symbol_j;
					EarthView::World::Spatial::Atlas::CChartLayerSelection *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayerSelection*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Atlas::CChartLayerSelection::setLineSelectionSymbol(symbol);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_atlas_ChartLayerSelection_getAreaSelectionSymbol_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Atlas::CChartLayerSelection *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayerSelection*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartLayerSelectionProxy))
					{
						EarthView::World::Spatial::Display::ISymbol* __values1 = pObjectX->EarthView::World::Spatial::Atlas::CChartLayerSelection::getAreaSelectionSymbol();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Display::ISymbol* __values1 = pObjectX->getAreaSelectionSymbol();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayerSelection_register_1getAreaSelectionSymbol_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartLayerSelectionProxy *pObjectX = (JCChartLayerSelectionProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getAreaSelectionSymbol_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getAreaSelectionSymbol_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_atlas_ChartLayerSelection_getAreaSelectionSymbol_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Atlas::CChartLayerSelection *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayerSelection*) pObjXXXX;
					EarthView::World::Spatial::Display::ISymbol* __values1 = pObjectX->EarthView::World::Spatial::Atlas::CChartLayerSelection::getAreaSelectionSymbol();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayerSelection_setAreaSelectionSymbol_1ISymbol(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong symbol_j)
				{
					const EarthView::World::Spatial::Display::ISymbol *symbol = (const EarthView::World::Spatial::Display::ISymbol*) symbol_j;
					EarthView::World::Spatial::Atlas::CChartLayerSelection *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayerSelection*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartLayerSelectionProxy))
					{
						pObjectX->EarthView::World::Spatial::Atlas::CChartLayerSelection::setAreaSelectionSymbol(symbol);
					}
					else
					{
						pObjectX->setAreaSelectionSymbol(symbol);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayerSelection_register_1setAreaSelectionSymbol_1ISymbol(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartLayerSelectionProxy *pObjectX = (JCChartLayerSelectionProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setAreaSelectionSymbol_ISymbol_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setAreaSelectionSymbol_ISymbol_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayerSelection_setAreaSelectionSymbol_1ISymbol_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong symbol_j)
				{
					const EarthView::World::Spatial::Display::ISymbol *symbol = (const EarthView::World::Spatial::Display::ISymbol*) symbol_j;
					EarthView::World::Spatial::Atlas::CChartLayerSelection *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayerSelection*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Atlas::CChartLayerSelection::setAreaSelectionSymbol(symbol);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_atlas_Nhchartclasscontrol_OperatorAssign_1NHChartClassControl(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong chartClassControl_j )
				{
					EarthView::World::Spatial::Atlas::NHChartClassControl& pObjectX = *(EarthView::World::Spatial::Atlas::NHChartClassControl*) pObjXXXX;
					const EarthView::World::Spatial::Atlas::NHChartClassControl &chartClassControl = *(EarthView::World::Spatial::Atlas::NHChartClassControl*) chartClassControl_j;
					pObjectX = chartClassControl;
					EarthView::World::Spatial::Atlas::NHChartClassControl& __values1 = pObjectX;
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Nhchartclasscontrol_setUseChartClassControl_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean flag_j)
				{
					ev_bool flag = (ev_bool) flag_j;
					EarthView::World::Spatial::Atlas::NHChartClassControl *pObjectX = (EarthView::World::Spatial::Atlas::NHChartClassControl*) pObjXXXX;
					pObjectX->setUseChartClassControl(flag);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_atlas_Nhchartclasscontrol_getUseChartClassControl_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Atlas::NHChartClassControl *pObjectX = (EarthView::World::Spatial::Atlas::NHChartClassControl*) pObjXXXX;
					ev_bool __values1 = pObjectX->getUseChartClassControl();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Nhchartclasscontrol_setHasSetColor_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean flag_j)
				{
					ev_bool flag = (ev_bool) flag_j;
					EarthView::World::Spatial::Atlas::NHChartClassControl *pObjectX = (EarthView::World::Spatial::Atlas::NHChartClassControl*) pObjXXXX;
					pObjectX->setHasSetColor(flag);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_atlas_Nhchartclasscontrol_getHasSetColor_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Atlas::NHChartClassControl *pObjectX = (EarthView::World::Spatial::Atlas::NHChartClassControl*) pObjXXXX;
					ev_bool __values1 = pObjectX->getHasSetColor();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Nhchartclasscontrol_setScaleFactor_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong value_j)
				{
					ev_uint32 value = (ev_uint32) value_j;
					EarthView::World::Spatial::Atlas::NHChartClassControl *pObjectX = (EarthView::World::Spatial::Atlas::NHChartClassControl*) pObjXXXX;
					pObjectX->setScaleFactor(value);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_atlas_Nhchartclasscontrol_getScaleFactor_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Atlas::NHChartClassControl *pObjectX = (EarthView::World::Spatial::Atlas::NHChartClassControl*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->getScaleFactor();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Nhchartclasscontrol_setCustomColor_1CRgbColor(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong color_j)
				{
					const EarthView::World::Spatial::Display::CRgbColor &color = *(EarthView::World::Spatial::Display::CRgbColor*) color_j;
					EarthView::World::Spatial::Atlas::NHChartClassControl *pObjectX = (EarthView::World::Spatial::Atlas::NHChartClassControl*) pObjXXXX;
					pObjectX->setCustomColor(color);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_atlas_Nhchartclasscontrol_getCustomColor_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Atlas::NHChartClassControl *pObjectX = (EarthView::World::Spatial::Atlas::NHChartClassControl*) pObjXXXX;
					const EarthView::World::Spatial::Display::CRgbColor& __values1 = pObjectX->getCustomColor();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_atlas_Nhchartclasscontrol_getColorBlendMode_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Atlas::NHChartClassControl *pObjectX = (EarthView::World::Spatial::Atlas::NHChartClassControl*) pObjXXXX;
					EarthView::World::Spatial::Display::EVColorBlendOperation __values1 = pObjectX->getColorBlendMode();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Nhchartclasscontrol_setColorBlendMode_1EVColorBlendOperation(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint mode_j)
				{
					EarthView::World::Spatial::Display::EVColorBlendOperation mode = (EarthView::World::Spatial::Display::EVColorBlendOperation) mode_j;
					EarthView::World::Spatial::Atlas::NHChartClassControl *pObjectX = (EarthView::World::Spatial::Atlas::NHChartClassControl*) pObjXXXX;
					pObjectX->setColorBlendMode(mode);
				}
				class JCChartLayerProxy : public EarthView::World::Spatial::Atlas::CChartLayer
				{
				 private:
					EarthView::World::Core::ev_string m_getObjectClassNum_void_callback;
					EarthView::World::Core::ev_string m_getObjectClassName_ev_uint32_callback;
					EarthView::World::Core::ev_string m_getObjectClassType_EVString_callback;
					EarthView::World::Core::ev_string m_setClassVisible_ev_uint32_ev_bool_callback;
					EarthView::World::Core::ev_string m_setClassVisible_EVString_ev_bool_callback;
					EarthView::World::Core::ev_string m_isClassVisible_ev_uint32_callback;
					EarthView::World::Core::ev_string m_isClassVisible_EVString_callback;
					EarthView::World::Core::ev_string m_setClassSelected_ev_uint32_ev_bool_callback;
					EarthView::World::Core::ev_string m_isClassSelected_ev_uint32_callback;
					EarthView::World::Core::ev_string m_isClassSelected_EVString_callback;
					EarthView::World::Core::ev_string m_setDataset_IDataset_callback;
					EarthView::World::Core::ev_string m_getOptionRef_void_callback;
					EarthView::World::Core::ev_string m_setEnvironment_IChartOption_callback;
					EarthView::World::Core::ev_string m_setClassDisplayMinScale_EVString_ev_real64_callback;
					EarthView::World::Core::ev_string m_getClassDisplayMinScale_EVString_ev_real64_callback;
					EarthView::World::Core::ev_string m_setClassDisplayMaxScale_EVString_ev_real64_callback;
					EarthView::World::Core::ev_string m_getClassDisplayMaxScale_EVString_ev_real64_callback;
					EarthView::World::Core::ev_string m_setClassIgnoreScale_EVString_ev_bool_callback;
					EarthView::World::Core::ev_string m_getClassIgnoreScale_EVString_callback;
					EarthView::World::Core::ev_string m_setClassDisplayMinScale_ev_uint32_ev_real64_callback;
					EarthView::World::Core::ev_string m_getClassDisplayMinScale_ev_uint32_ev_real64_callback;
					EarthView::World::Core::ev_string m_setClassDisplayMaxScale_ev_uint32_ev_real64_callback;
					EarthView::World::Core::ev_string m_getClassDisplayMaxScale_ev_uint32_ev_real64_callback;
					EarthView::World::Core::ev_string m_setClassIgnoreScale_ev_uint32_ev_bool_callback;
					EarthView::World::Core::ev_string m_getClassIgnoreScale_ev_uint32_callback;
					EarthView::World::Core::ev_string m_setUseChartClassControl_EVString_ev_bool_callback;
					EarthView::World::Core::ev_string m_getUseChartClassControl_EVString_callback;
					EarthView::World::Core::ev_string m_setChartClassControlSize_EVString_ev_uint32_callback;
					EarthView::World::Core::ev_string m_getChartClassControlSize_EVString_ev_uint32_callback;
					EarthView::World::Core::ev_string m_setChartClassControlColor_EVString_IColor_callback;
					EarthView::World::Core::ev_string m_getChartClassControlColor_EVString_IColor_callback;
					EarthView::World::Core::ev_string m_setUseChartClassControlColor_EVString_ev_bool_callback;
					EarthView::World::Core::ev_string m_getUseChartClassControlColor_EVString_callback;
					EarthView::World::Core::ev_string m_setChartClassControlColorBlendMode_EVString_EVColorBlendOperation_callback;
					EarthView::World::Core::ev_string m_getChartClassControlColorBlendMode_EVString_callback;
					EarthView::World::Core::ev_string m_getType_void_callback;
					EarthView::World::Core::ev_string m_getDataset_void_callback;
					EarthView::World::Core::ev_string m_getDatasetName_void_callback;
					EarthView::World::Core::ev_string m_getDataSource_void_callback;
					EarthView::World::Core::ev_string m_select_IQueryFilter_EVSelectionResultType_callback;
					EarthView::World::Core::ev_string m_clearSelection_void_callback;
					EarthView::World::Core::ev_string m_setLayerSelection_ILayerSelection_callback;
					EarthView::World::Core::ev_string m_getLayerSelection_void_callback;
					EarthView::World::Core::ev_string m_getName_void_callback;
					EarthView::World::Core::ev_string m_setName_EVString_callback;
					EarthView::World::Core::ev_string m_getDescription_void_callback;
					EarthView::World::Core::ev_string m_setDescription_EVString_callback;
					EarthView::World::Core::ev_string m_canEdit_void_callback;
					EarthView::World::Core::ev_string m_setCanEdit_ev_bool_callback;
					EarthView::World::Core::ev_string m_isEditing_void_callback;
					EarthView::World::Core::ev_string m_setEditing_ev_bool_callback;
					EarthView::World::Core::ev_string m_isVisible_void_callback;
					EarthView::World::Core::ev_string m_setVisible_ev_bool_callback;
					EarthView::World::Core::ev_string m_isValid_void_callback;
					EarthView::World::Core::ev_string m_isSelectable_void_callback;
					EarthView::World::Core::ev_string m_setSelectable_ev_bool_callback;
					EarthView::World::Core::ev_string m_ignoreScale_void_callback;
					EarthView::World::Core::ev_string m_setIgnoreScale_ev_bool_callback;
					EarthView::World::Core::ev_string m_getDisplayMaxScale_void_callback;
					EarthView::World::Core::ev_string m_setDisplayMaxScale_ev_real64_callback;
					EarthView::World::Core::ev_string m_getDisplayMinScale_void_callback;
					EarthView::World::Core::ev_string m_setDisplayMinScale_ev_real64_callback;
					EarthView::World::Core::ev_string m_getSpatialReference_void_callback;
					EarthView::World::Core::ev_string m_setSpatialReference_ISpatialReference_callback;
					EarthView::World::Core::ev_string m_setTransparentValue_ev_uint8_callback;
					EarthView::World::Core::ev_string m_getTransparentValue_void_callback;
					EarthView::World::Core::ev_string m_getExtent_void_callback;
					EarthView::World::Core::ev_string m_draw_ISpatialDisplay_EVVectorLayerRendererType_callback;
					EarthView::World::Core::ev_string m_ev_clone_void_callback;
					EarthView::World::Core::ev_string m_toStream_CDataStream_callback;
					EarthView::World::Core::ev_string m_toXML_void_callback;
					EarthView::World::Core::ev_string m_fromXmlElement_CXmlElement_callback;
					EarthView::World::Core::ev_string m_toXmlElement_void_callback;
					EarthView::World::Core::ev_string m_fromStream_CDataStream_callback;
				public:
					JCChartLayerProxy(EarthView::World::Core::CNameValuePairList *pList) : CChartLayer(pList)
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
					void register_getObjectClassNum_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getObjectClassNum_void_callback = __method;
					}
					void register_getObjectClassName_ev_uint32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getObjectClassName_ev_uint32_callback = __method;
					}
					void register_getObjectClassType_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getObjectClassType_EVString_callback = __method;
					}
					void register_setClassVisible_ev_uint32_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setClassVisible_ev_uint32_ev_bool_callback = __method;
					}
					void register_setClassVisible_EVString_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setClassVisible_EVString_ev_bool_callback = __method;
					}
					void register_isClassVisible_ev_uint32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_isClassVisible_ev_uint32_callback = __method;
					}
					void register_isClassVisible_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_isClassVisible_EVString_callback = __method;
					}
					void register_setClassSelected_ev_uint32_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setClassSelected_ev_uint32_ev_bool_callback = __method;
					}
					void register_isClassSelected_ev_uint32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_isClassSelected_ev_uint32_callback = __method;
					}
					void register_isClassSelected_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_isClassSelected_EVString_callback = __method;
					}
					void register_setDataset_IDataset_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setDataset_IDataset_callback = __method;
					}
					void register_getOptionRef_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getOptionRef_void_callback = __method;
					}
					void register_setEnvironment_IChartOption_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setEnvironment_IChartOption_callback = __method;
					}
					void register_setClassDisplayMinScale_EVString_ev_real64_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setClassDisplayMinScale_EVString_ev_real64_callback = __method;
					}
					void register_getClassDisplayMinScale_EVString_ev_real64_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getClassDisplayMinScale_EVString_ev_real64_callback = __method;
					}
					void register_setClassDisplayMaxScale_EVString_ev_real64_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setClassDisplayMaxScale_EVString_ev_real64_callback = __method;
					}
					void register_getClassDisplayMaxScale_EVString_ev_real64_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getClassDisplayMaxScale_EVString_ev_real64_callback = __method;
					}
					void register_setClassIgnoreScale_EVString_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setClassIgnoreScale_EVString_ev_bool_callback = __method;
					}
					void register_getClassIgnoreScale_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getClassIgnoreScale_EVString_callback = __method;
					}
					void register_setClassDisplayMinScale_ev_uint32_ev_real64_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setClassDisplayMinScale_ev_uint32_ev_real64_callback = __method;
					}
					void register_getClassDisplayMinScale_ev_uint32_ev_real64_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getClassDisplayMinScale_ev_uint32_ev_real64_callback = __method;
					}
					void register_setClassDisplayMaxScale_ev_uint32_ev_real64_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setClassDisplayMaxScale_ev_uint32_ev_real64_callback = __method;
					}
					void register_getClassDisplayMaxScale_ev_uint32_ev_real64_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getClassDisplayMaxScale_ev_uint32_ev_real64_callback = __method;
					}
					void register_setClassIgnoreScale_ev_uint32_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setClassIgnoreScale_ev_uint32_ev_bool_callback = __method;
					}
					void register_getClassIgnoreScale_ev_uint32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getClassIgnoreScale_ev_uint32_callback = __method;
					}
					void register_setUseChartClassControl_EVString_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setUseChartClassControl_EVString_ev_bool_callback = __method;
					}
					void register_getUseChartClassControl_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getUseChartClassControl_EVString_callback = __method;
					}
					void register_setChartClassControlSize_EVString_ev_uint32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setChartClassControlSize_EVString_ev_uint32_callback = __method;
					}
					void register_getChartClassControlSize_EVString_ev_uint32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getChartClassControlSize_EVString_ev_uint32_callback = __method;
					}
					void register_setChartClassControlColor_EVString_IColor_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setChartClassControlColor_EVString_IColor_callback = __method;
					}
					void register_getChartClassControlColor_EVString_IColor_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getChartClassControlColor_EVString_IColor_callback = __method;
					}
					void register_setUseChartClassControlColor_EVString_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setUseChartClassControlColor_EVString_ev_bool_callback = __method;
					}
					void register_getUseChartClassControlColor_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getUseChartClassControlColor_EVString_callback = __method;
					}
					void register_setChartClassControlColorBlendMode_EVString_EVColorBlendOperation_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setChartClassControlColorBlendMode_EVString_EVColorBlendOperation_callback = __method;
					}
					void register_getChartClassControlColorBlendMode_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getChartClassControlColorBlendMode_EVString_callback = __method;
					}
					void register_getType_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getType_void_callback = __method;
					}
					void register_getDataset_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getDataset_void_callback = __method;
					}
					void register_getDatasetName_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getDatasetName_void_callback = __method;
					}
					void register_getDataSource_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getDataSource_void_callback = __method;
					}
					void register_select_IQueryFilter_EVSelectionResultType_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_select_IQueryFilter_EVSelectionResultType_callback = __method;
					}
					void register_clearSelection_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_clearSelection_void_callback = __method;
					}
					void register_setLayerSelection_ILayerSelection_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setLayerSelection_ILayerSelection_callback = __method;
					}
					void register_getLayerSelection_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getLayerSelection_void_callback = __method;
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
					void register_canEdit_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_canEdit_void_callback = __method;
					}
					void register_setCanEdit_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setCanEdit_ev_bool_callback = __method;
					}
					void register_isEditing_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_isEditing_void_callback = __method;
					}
					void register_setEditing_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setEditing_ev_bool_callback = __method;
					}
					void register_isVisible_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_isVisible_void_callback = __method;
					}
					void register_setVisible_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setVisible_ev_bool_callback = __method;
					}
					void register_isValid_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_isValid_void_callback = __method;
					}
					void register_isSelectable_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_isSelectable_void_callback = __method;
					}
					void register_setSelectable_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setSelectable_ev_bool_callback = __method;
					}
					void register_ignoreScale_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_ignoreScale_void_callback = __method;
					}
					void register_setIgnoreScale_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setIgnoreScale_ev_bool_callback = __method;
					}
					void register_getDisplayMaxScale_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getDisplayMaxScale_void_callback = __method;
					}
					void register_setDisplayMaxScale_ev_real64_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setDisplayMaxScale_ev_real64_callback = __method;
					}
					void register_getDisplayMinScale_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getDisplayMinScale_void_callback = __method;
					}
					void register_setDisplayMinScale_ev_real64_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setDisplayMinScale_ev_real64_callback = __method;
					}
					void register_getSpatialReference_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getSpatialReference_void_callback = __method;
					}
					void register_setSpatialReference_ISpatialReference_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setSpatialReference_ISpatialReference_callback = __method;
					}
					void register_setTransparentValue_ev_uint8_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setTransparentValue_ev_uint8_callback = __method;
					}
					void register_getTransparentValue_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getTransparentValue_void_callback = __method;
					}
					void register_getExtent_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getExtent_void_callback = __method;
					}
					void register_draw_ISpatialDisplay_EVVectorLayerRendererType_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_draw_ISpatialDisplay_EVVectorLayerRendererType_callback = __method;
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
					virtual void select(EarthView::World::Spatial::GeoDataset::IQueryFilter* filter, EarthView::World::Spatial::Atlas::EVSelectionResultType type)
					{
						if (this->_gRef != NULL && this->m_select_IQueryFilter_EVSelectionResultType_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong filter_j = (jlong) filter;
							jint type_j = (jint) type;
							jmethodID __method = __gr->getMethod("select_IQueryFilter_EVSelectionResultType_callback");
							__env->CallVoidMethod(__obj, __method , filter_j, type_j);
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
							return this->CChartLayer::select(filter, type);
						}
					}
					virtual void clearSelection()
					{
						if (this->_gRef != NULL && this->m_clearSelection_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("clearSelection_void_callback");
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
							return this->CChartLayer::clearSelection();
						}
					}
					virtual EarthView::World::Spatial::Atlas::ILayerSelection* getLayerSelection()
					{
						if (this->_gRef != NULL && this->m_getLayerSelection_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getLayerSelection_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::Atlas::ILayerSelection *__values1 = (EarthView::World::Spatial::Atlas::ILayerSelection*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CChartLayer::getLayerSelection();
						}
					}
					virtual EarthView::World::Spatial::Atlas::EVLayerType getType() const
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
							EarthView::World::Spatial::Atlas::EVLayerType __values1 = (EarthView::World::Spatial::Atlas::EVLayerType) __values1_j;
							return __values1;
						}
						else
						{
							return this->CChartLayer::getType();
						}
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataset* getDataset()
					{
						if (this->_gRef != NULL && this->m_getDataset_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getDataset_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::GeoDataset::IDataset *__values1 = (EarthView::World::Spatial::GeoDataset::IDataset*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CChartLayer::getDataset();
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
							return this->CChartLayer::getName();
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
							return this->CChartLayer::setName(name);
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
							return this->CChartLayer::getDescription();
						}
					}
					virtual void setDescription(const EVString& value)
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
							EarthView::World::Core::ev_wstring value_wch = value;
							jstring value_j = __env->NewString((const jchar*)value_wch.getString(), value_wch.size());
							jmethodID __method = __gr->getMethod("setDescription_EVString_callback");
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
							return this->CChartLayer::setDescription(value);
						}
					}
					virtual ev_bool canEdit() const
					{
						if (this->_gRef != NULL && this->m_canEdit_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("canEdit_void_callback");
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
							return this->CChartLayer::canEdit();
						}
					}
					virtual ev_bool isEditing() const
					{
						if (this->_gRef != NULL && this->m_isEditing_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("isEditing_void_callback");
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
							return this->CChartLayer::isEditing();
						}
					}
					virtual void setEditing(ev_bool editing)
					{
						if (this->_gRef != NULL && this->m_setEditing_ev_bool_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jboolean editing_j = (jboolean) editing;
							jmethodID __method = __gr->getMethod("setEditing_ev_bool_callback");
							__env->CallVoidMethod(__obj, __method , editing_j);
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
							return this->CChartLayer::setEditing(editing);
						}
					}
					virtual ev_bool isValid() const
					{
						if (this->_gRef != NULL && this->m_isValid_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("isValid_void_callback");
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
							return this->CChartLayer::isValid();
						}
					}
					virtual void setTransparentValue(ev_uint8 transparent)
					{
						if (this->_gRef != NULL && this->m_setTransparentValue_ev_uint8_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jshort transparent_j = (jshort) transparent;
							jmethodID __method = __gr->getMethod("setTransparentValue_ev_uint8_callback");
							__env->CallVoidMethod(__obj, __method , transparent_j);
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
							return this->CChartLayer::setTransparentValue(transparent);
						}
					}
					virtual ev_uint8 getTransparentValue() const
					{
						if (this->_gRef != NULL && this->m_getTransparentValue_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getTransparentValue_void_callback");
							jshort __values1_j = (jshort)__env->CallShortMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_uint8 __values1 = (ev_uint8) __values1_j;
							return __values1;
						}
						else
						{
							return this->CChartLayer::getTransparentValue();
						}
					}
					virtual ev_bool isVisible() const
					{
						if (this->_gRef != NULL && this->m_isVisible_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("isVisible_void_callback");
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
							return this->CChartLayer::isVisible();
						}
					}
					virtual void setVisible(ev_bool visible)
					{
						if (this->_gRef != NULL && this->m_setVisible_ev_bool_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jboolean visible_j = (jboolean) visible;
							jmethodID __method = __gr->getMethod("setVisible_ev_bool_callback");
							__env->CallVoidMethod(__obj, __method , visible_j);
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
							return this->CChartLayer::setVisible(visible);
						}
					}
					virtual ev_bool isSelectable() const
					{
						if (this->_gRef != NULL && this->m_isSelectable_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("isSelectable_void_callback");
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
							return this->CChartLayer::isSelectable();
						}
					}
					virtual void setSelectable(ev_bool selected)
					{
						if (this->_gRef != NULL && this->m_setSelectable_ev_bool_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jboolean selected_j = (jboolean) selected;
							jmethodID __method = __gr->getMethod("setSelectable_ev_bool_callback");
							__env->CallVoidMethod(__obj, __method , selected_j);
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
							return this->CChartLayer::setSelectable(selected);
						}
					}
					virtual ev_bool ignoreScale() const
					{
						if (this->_gRef != NULL && this->m_ignoreScale_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("ignoreScale_void_callback");
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
							return this->CChartLayer::ignoreScale();
						}
					}
					virtual void setIgnoreScale(ev_bool bIgnore)
					{
						if (this->_gRef != NULL && this->m_setIgnoreScale_ev_bool_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jboolean bIgnore_j = (jboolean) bIgnore;
							jmethodID __method = __gr->getMethod("setIgnoreScale_ev_bool_callback");
							__env->CallVoidMethod(__obj, __method , bIgnore_j);
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
							return this->CChartLayer::setIgnoreScale(bIgnore);
						}
					}
					virtual ev_real64 getDisplayMaxScale() const
					{
						if (this->_gRef != NULL && this->m_getDisplayMaxScale_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getDisplayMaxScale_void_callback");
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
							return this->CChartLayer::getDisplayMaxScale();
						}
					}
					virtual void setDisplayMaxScale(ev_real64 scale)
					{
						if (this->_gRef != NULL && this->m_setDisplayMaxScale_ev_real64_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jdouble scale_j = (jdouble) scale;
							jmethodID __method = __gr->getMethod("setDisplayMaxScale_ev_real64_callback");
							__env->CallVoidMethod(__obj, __method , scale_j);
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
							return this->CChartLayer::setDisplayMaxScale(scale);
						}
					}
					virtual ev_real64 getDisplayMinScale() const
					{
						if (this->_gRef != NULL && this->m_getDisplayMinScale_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getDisplayMinScale_void_callback");
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
							return this->CChartLayer::getDisplayMinScale();
						}
					}
					virtual void setDisplayMinScale(ev_real64 scale)
					{
						if (this->_gRef != NULL && this->m_setDisplayMinScale_ev_real64_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jdouble scale_j = (jdouble) scale;
							jmethodID __method = __gr->getMethod("setDisplayMinScale_ev_real64_callback");
							__env->CallVoidMethod(__obj, __method , scale_j);
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
							return this->CChartLayer::setDisplayMinScale(scale);
						}
					}
					virtual EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReference() const
					{
						if (this->_gRef != NULL && this->m_getSpatialReference_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getSpatialReference_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::Geometry::ISpatialReference *__values1 = (EarthView::World::Spatial::Geometry::ISpatialReference*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CChartLayer::getSpatialReference();
						}
					}
					virtual void setSpatialReference(EarthView::World::Spatial::Geometry::ISpatialReference* sr)
					{
						if (this->_gRef != NULL && this->m_setSpatialReference_ISpatialReference_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong sr_j = (jlong) sr;
							jmethodID __method = __gr->getMethod("setSpatialReference_ISpatialReference_callback");
							__env->CallVoidMethod(__obj, __method , sr_j);
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
							return this->CChartLayer::setSpatialReference(sr);
						}
					}
					virtual const EarthView::World::Spatial::Geometry::IEnvelope* getExtent() const
					{
						if (this->_gRef != NULL && this->m_getExtent_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getExtent_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							const EarthView::World::Spatial::Geometry::IEnvelope *__values1 = (const EarthView::World::Spatial::Geometry::IEnvelope*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CChartLayer::getExtent();
						}
					}
					virtual ev_bool draw(EarthView::World::Spatial::Display::ISpatialDisplay* display, EarthView::World::Spatial::Atlas::EVVectorLayerRendererType type)
					{
						if (this->_gRef != NULL && this->m_draw_ISpatialDisplay_EVVectorLayerRendererType_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
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
							jint type_j = (jint) type;
							jmethodID __method = __gr->getMethod("draw_ISpatialDisplay_EVVectorLayerRendererType_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , display_j, type_j);
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
							return this->CChartLayer::draw(display, type);
						}
					}
					virtual ev_uint32 getObjectClassNum() const
					{
						if (this->_gRef != NULL && this->m_getObjectClassNum_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getObjectClassNum_void_callback");
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
							return this->CChartLayer::getObjectClassNum();
						}
					}
					virtual const EVString getObjectClassName(ev_uint32 index)
					{
						if (this->_gRef != NULL && this->m_getObjectClassName_ev_uint32_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
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
							jmethodID __method = __gr->getMethod("getObjectClassName_ev_uint32_callback");
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
							const EVString __values1 = values_ch;
							__env->ReleaseStringUTFChars(__values1_j,values_ch);
							#else
							const ev_wchar* values_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
							const EVString __values1 = values_ch;
							__env->ReleaseStringChars(__values1_j,(const jchar *)values_ch);
							#endif
							return __values1;
						}
						else
						{
							return this->CChartLayer::getObjectClassName(index);
						}
					}
					virtual ev_int32 getObjectClassType(const EVString& name)
					{
						if (this->_gRef != NULL && this->m_getObjectClassType_EVString_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
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
							jmethodID __method = __gr->getMethod("getObjectClassType_EVString_callback");
							jint __values1_j = (jint)__env->CallIntMethod(__obj, __method , name_j);
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
							return this->CChartLayer::getObjectClassType(name);
						}
					}
					virtual void setClassVisible(ev_uint32 index, ev_bool value)
					{
						if (this->_gRef != NULL && this->m_setClassVisible_ev_uint32_ev_bool_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
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
							jboolean value_j = (jboolean) value;
							jmethodID __method = __gr->getMethod("setClassVisible_ev_uint32_ev_bool_callback");
							__env->CallVoidMethod(__obj, __method , index_j, value_j);
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
							return this->CChartLayer::setClassVisible(index, value);
						}
					}
					virtual void setClassVisible(const EVString& name, ev_bool value)
					{
						if (this->_gRef != NULL && this->m_setClassVisible_EVString_ev_bool_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
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
							jboolean value_j = (jboolean) value;
							jmethodID __method = __gr->getMethod("setClassVisible_EVString_ev_bool_callback");
							__env->CallVoidMethod(__obj, __method , name_j, value_j);
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
							return this->CChartLayer::setClassVisible(name, value);
						}
					}
					virtual ev_bool isClassVisible(ev_uint32 index)
					{
						if (this->_gRef != NULL && this->m_isClassVisible_ev_uint32_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
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
							jmethodID __method = __gr->getMethod("isClassVisible_ev_uint32_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , index_j);
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
							return this->CChartLayer::isClassVisible(index);
						}
					}
					virtual ev_bool isClassVisible(const EVString& name)
					{
						if (this->_gRef != NULL && this->m_isClassVisible_EVString_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
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
							jmethodID __method = __gr->getMethod("isClassVisible_EVString_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , name_j);
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
							return this->CChartLayer::isClassVisible(name);
						}
					}
					virtual void setClassSelected(ev_uint32 index, ev_bool value)
					{
						if (this->_gRef != NULL && this->m_setClassSelected_ev_uint32_ev_bool_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
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
							jboolean value_j = (jboolean) value;
							jmethodID __method = __gr->getMethod("setClassSelected_ev_uint32_ev_bool_callback");
							__env->CallVoidMethod(__obj, __method , index_j, value_j);
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
							return this->CChartLayer::setClassSelected(index, value);
						}
					}
					virtual ev_bool isClassSelected(ev_uint32 index)
					{
						if (this->_gRef != NULL && this->m_isClassSelected_ev_uint32_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
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
							jmethodID __method = __gr->getMethod("isClassSelected_ev_uint32_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , index_j);
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
							return this->CChartLayer::isClassSelected(index);
						}
					}
					virtual ev_bool isClassSelected(const EVString& name)
					{
						if (this->_gRef != NULL && this->m_isClassSelected_EVString_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
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
							jmethodID __method = __gr->getMethod("isClassSelected_EVString_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , name_j);
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
							return this->CChartLayer::isClassSelected(name);
						}
					}
					virtual void setDataset(EarthView::World::Spatial::GeoDataset::IDataset* ref_dataset)
					{
						if (this->_gRef != NULL && this->m_setDataset_IDataset_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong ref_dataset_j = (jlong) ref_dataset;
							jmethodID __method = __gr->getMethod("setDataset_IDataset_callback");
							__env->CallVoidMethod(__obj, __method , ref_dataset_j);
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
							return this->CChartLayer::setDataset(ref_dataset);
						}
					}
					virtual EarthView::World::Spatial::Display::IChartOption* getOptionRef()
					{
						if (this->_gRef != NULL && this->m_getOptionRef_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getOptionRef_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::Display::IChartOption *__values1 = (EarthView::World::Spatial::Display::IChartOption*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CChartLayer::getOptionRef();
						}
					}
					virtual void setEnvironment(const EarthView::World::Spatial::Display::IChartOption* uniformOption)
					{
						if (this->_gRef != NULL && this->m_setEnvironment_IChartOption_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong uniformOption_j = (jlong) uniformOption;
							jmethodID __method = __gr->getMethod("setEnvironment_IChartOption_callback");
							__env->CallVoidMethod(__obj, __method , uniformOption_j);
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
							return this->CChartLayer::setEnvironment(uniformOption);
						}
					}
					virtual EarthView::World::Spatial::Atlas::ILayer* clone() const
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
							EarthView::World::Spatial::Atlas::ILayer *__values1 = (EarthView::World::Spatial::Atlas::ILayer*) __values1_j;
							if(__values1 != NULL) {
								((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(false);
							}
							return __values1;
						}
						else
						{
							return this->CChartLayer::clone();
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
							return this->CChartLayer::toXML();
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
							return this->CChartLayer::fromXmlElement(element);
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
							return this->CChartLayer::toXmlElement();
						}
					}
					virtual void setClassDisplayMinScale(const EVString& className, const ev_real64 scale)
					{
						if (this->_gRef != NULL && this->m_setClassDisplayMinScale_EVString_ev_real64_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							EarthView::World::Core::ev_wstring className_wch = className;
							jstring className_j = __env->NewString((const jchar*)className_wch.getString(), className_wch.size());
							jdouble scale_j = (jdouble) scale;
							jmethodID __method = __gr->getMethod("setClassDisplayMinScale_EVString_ev_real64_callback");
							__env->CallVoidMethod(__obj, __method , className_j, scale_j);
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
							return this->CChartLayer::setClassDisplayMinScale(className, scale);
						}
					}
					virtual ev_bool getClassDisplayMinScale(const EVString& className, ev_real64& minScale) const
					{
						if (this->_gRef != NULL && this->m_getClassDisplayMinScale_EVString_ev_real64_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							EarthView::World::Core::ev_wstring className_wch = className;
							jstring className_j = __env->NewString((const jchar*)className_wch.getString(), className_wch.size());
							jlong minScale_j = (jlong) &minScale;
							jmethodID __method = __gr->getMethod("getClassDisplayMinScale_EVString_ev_real64_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , className_j, minScale_j);
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
							return this->CChartLayer::getClassDisplayMinScale(className, minScale);
						}
					}
					virtual void setClassDisplayMaxScale(const EVString& className, const ev_real64 scale)
					{
						if (this->_gRef != NULL && this->m_setClassDisplayMaxScale_EVString_ev_real64_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							EarthView::World::Core::ev_wstring className_wch = className;
							jstring className_j = __env->NewString((const jchar*)className_wch.getString(), className_wch.size());
							jdouble scale_j = (jdouble) scale;
							jmethodID __method = __gr->getMethod("setClassDisplayMaxScale_EVString_ev_real64_callback");
							__env->CallVoidMethod(__obj, __method , className_j, scale_j);
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
							return this->CChartLayer::setClassDisplayMaxScale(className, scale);
						}
					}
					virtual ev_bool getClassDisplayMaxScale(const EVString& className, ev_real64& maxScale) const
					{
						if (this->_gRef != NULL && this->m_getClassDisplayMaxScale_EVString_ev_real64_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							EarthView::World::Core::ev_wstring className_wch = className;
							jstring className_j = __env->NewString((const jchar*)className_wch.getString(), className_wch.size());
							jlong maxScale_j = (jlong) &maxScale;
							jmethodID __method = __gr->getMethod("getClassDisplayMaxScale_EVString_ev_real64_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , className_j, maxScale_j);
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
							return this->CChartLayer::getClassDisplayMaxScale(className, maxScale);
						}
					}
					virtual void setClassIgnoreScale(const EVString& className, const ev_bool classIgnore)
					{
						if (this->_gRef != NULL && this->m_setClassIgnoreScale_EVString_ev_bool_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							EarthView::World::Core::ev_wstring className_wch = className;
							jstring className_j = __env->NewString((const jchar*)className_wch.getString(), className_wch.size());
							jboolean classIgnore_j = (jboolean) classIgnore;
							jmethodID __method = __gr->getMethod("setClassIgnoreScale_EVString_ev_bool_callback");
							__env->CallVoidMethod(__obj, __method , className_j, classIgnore_j);
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
							return this->CChartLayer::setClassIgnoreScale(className, classIgnore);
						}
					}
					virtual ev_bool getClassIgnoreScale(const EVString& className) const
					{
						if (this->_gRef != NULL && this->m_getClassIgnoreScale_EVString_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							EarthView::World::Core::ev_wstring className_wch = className;
							jstring className_j = __env->NewString((const jchar*)className_wch.getString(), className_wch.size());
							jmethodID __method = __gr->getMethod("getClassIgnoreScale_EVString_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , className_j);
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
							return this->CChartLayer::getClassIgnoreScale(className);
						}
					}
					virtual void setClassDisplayMinScale(const ev_uint32 index, const ev_real64 scale)
					{
						if (this->_gRef != NULL && this->m_setClassDisplayMinScale_ev_uint32_ev_real64_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
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
							jdouble scale_j = (jdouble) scale;
							jmethodID __method = __gr->getMethod("setClassDisplayMinScale_ev_uint32_ev_real64_callback");
							__env->CallVoidMethod(__obj, __method , index_j, scale_j);
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
							return this->CChartLayer::setClassDisplayMinScale(index, scale);
						}
					}
					virtual ev_bool getClassDisplayMinScale(const ev_uint32 index, ev_real64& scale) const
					{
						if (this->_gRef != NULL && this->m_getClassDisplayMinScale_ev_uint32_ev_real64_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
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
							jlong scale_j = (jlong) &scale;
							jmethodID __method = __gr->getMethod("getClassDisplayMinScale_ev_uint32_ev_real64_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , index_j, scale_j);
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
							return this->CChartLayer::getClassDisplayMinScale(index, scale);
						}
					}
					virtual void setClassDisplayMaxScale(const ev_uint32 index, const ev_real64 scale)
					{
						if (this->_gRef != NULL && this->m_setClassDisplayMaxScale_ev_uint32_ev_real64_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
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
							jdouble scale_j = (jdouble) scale;
							jmethodID __method = __gr->getMethod("setClassDisplayMaxScale_ev_uint32_ev_real64_callback");
							__env->CallVoidMethod(__obj, __method , index_j, scale_j);
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
							return this->CChartLayer::setClassDisplayMaxScale(index, scale);
						}
					}
					virtual ev_bool getClassDisplayMaxScale(const ev_uint32 index, ev_real64& scale) const
					{
						if (this->_gRef != NULL && this->m_getClassDisplayMaxScale_ev_uint32_ev_real64_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
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
							jlong scale_j = (jlong) &scale;
							jmethodID __method = __gr->getMethod("getClassDisplayMaxScale_ev_uint32_ev_real64_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , index_j, scale_j);
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
							return this->CChartLayer::getClassDisplayMaxScale(index, scale);
						}
					}
					virtual void setClassIgnoreScale(const ev_uint32 index, const ev_bool classIgnore)
					{
						if (this->_gRef != NULL && this->m_setClassIgnoreScale_ev_uint32_ev_bool_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
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
							jboolean classIgnore_j = (jboolean) classIgnore;
							jmethodID __method = __gr->getMethod("setClassIgnoreScale_ev_uint32_ev_bool_callback");
							__env->CallVoidMethod(__obj, __method , index_j, classIgnore_j);
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
							return this->CChartLayer::setClassIgnoreScale(index, classIgnore);
						}
					}
					virtual ev_bool getClassIgnoreScale(const ev_uint32 index) const
					{
						if (this->_gRef != NULL && this->m_getClassIgnoreScale_ev_uint32_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
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
							jmethodID __method = __gr->getMethod("getClassIgnoreScale_ev_uint32_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , index_j);
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
							return this->CChartLayer::getClassIgnoreScale(index);
						}
					}
					virtual void setUseChartClassControl(const EVString& className, ev_bool IsUse)
					{
						if (this->_gRef != NULL && this->m_setUseChartClassControl_EVString_ev_bool_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							EarthView::World::Core::ev_wstring className_wch = className;
							jstring className_j = __env->NewString((const jchar*)className_wch.getString(), className_wch.size());
							jboolean IsUse_j = (jboolean) IsUse;
							jmethodID __method = __gr->getMethod("setUseChartClassControl_EVString_ev_bool_callback");
							__env->CallVoidMethod(__obj, __method , className_j, IsUse_j);
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
							return this->CChartLayer::setUseChartClassControl(className, IsUse);
						}
					}
					virtual ev_bool getUseChartClassControl(const EVString& className) const
					{
						if (this->_gRef != NULL && this->m_getUseChartClassControl_EVString_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							EarthView::World::Core::ev_wstring className_wch = className;
							jstring className_j = __env->NewString((const jchar*)className_wch.getString(), className_wch.size());
							jmethodID __method = __gr->getMethod("getUseChartClassControl_EVString_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , className_j);
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
							return this->CChartLayer::getUseChartClassControl(className);
						}
					}
					virtual void setChartClassControlSize(const EVString& className, ev_uint32 sizeFactor)
					{
						if (this->_gRef != NULL && this->m_setChartClassControlSize_EVString_ev_uint32_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							EarthView::World::Core::ev_wstring className_wch = className;
							jstring className_j = __env->NewString((const jchar*)className_wch.getString(), className_wch.size());
							jlong sizeFactor_j = (jlong) sizeFactor;
							jmethodID __method = __gr->getMethod("setChartClassControlSize_EVString_ev_uint32_callback");
							__env->CallVoidMethod(__obj, __method , className_j, sizeFactor_j);
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
							return this->CChartLayer::setChartClassControlSize(className, sizeFactor);
						}
					}
					virtual ev_bool getChartClassControlSize(const EVString& className, ev_uint32& sizeFactor) const
					{
						if (this->_gRef != NULL && this->m_getChartClassControlSize_EVString_ev_uint32_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							EarthView::World::Core::ev_wstring className_wch = className;
							jstring className_j = __env->NewString((const jchar*)className_wch.getString(), className_wch.size());
							jlong sizeFactor_j = (jlong) &sizeFactor;
							jmethodID __method = __gr->getMethod("getChartClassControlSize_EVString_ev_uint32_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , className_j, sizeFactor_j);
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
							return this->CChartLayer::getChartClassControlSize(className, sizeFactor);
						}
					}
					virtual void setChartClassControlColor(const EVString& className, const EarthView::World::Spatial::Display::IColor* color)
					{
						if (this->_gRef != NULL && this->m_setChartClassControlColor_EVString_IColor_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							EarthView::World::Core::ev_wstring className_wch = className;
							jstring className_j = __env->NewString((const jchar*)className_wch.getString(), className_wch.size());
							jlong color_j = (jlong) color;
							jmethodID __method = __gr->getMethod("setChartClassControlColor_EVString_IColor_callback");
							__env->CallVoidMethod(__obj, __method , className_j, color_j);
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
							return this->CChartLayer::setChartClassControlColor(className, color);
						}
					}
					virtual ev_bool getChartClassControlColor(const EVString& className, EarthView::World::Spatial::Display::IColor*& pColor) const
					{
						if (this->_gRef != NULL && this->m_getChartClassControlColor_EVString_IColor_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							EarthView::World::Core::ev_wstring className_wch = className;
							jstring className_j = __env->NewString((const jchar*)className_wch.getString(), className_wch.size());
							jlong pColor_j = (jlong) &pColor;
							jmethodID __method = __gr->getMethod("getChartClassControlColor_EVString_IColor_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , className_j, pColor_j);
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
							return this->CChartLayer::getChartClassControlColor(className, pColor);
						}
					}
					virtual void setUseChartClassControlColor(const EVString& className, ev_bool useColor)
					{
						if (this->_gRef != NULL && this->m_setUseChartClassControlColor_EVString_ev_bool_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							EarthView::World::Core::ev_wstring className_wch = className;
							jstring className_j = __env->NewString((const jchar*)className_wch.getString(), className_wch.size());
							jboolean useColor_j = (jboolean) useColor;
							jmethodID __method = __gr->getMethod("setUseChartClassControlColor_EVString_ev_bool_callback");
							__env->CallVoidMethod(__obj, __method , className_j, useColor_j);
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
							return this->CChartLayer::setUseChartClassControlColor(className, useColor);
						}
					}
					virtual ev_bool getUseChartClassControlColor(const EVString& className) const
					{
						if (this->_gRef != NULL && this->m_getUseChartClassControlColor_EVString_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							EarthView::World::Core::ev_wstring className_wch = className;
							jstring className_j = __env->NewString((const jchar*)className_wch.getString(), className_wch.size());
							jmethodID __method = __gr->getMethod("getUseChartClassControlColor_EVString_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , className_j);
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
							return this->CChartLayer::getUseChartClassControlColor(className);
						}
					}
					virtual void setChartClassControlColorBlendMode(const EVString& className, EarthView::World::Spatial::Display::EVColorBlendOperation mode)
					{
						if (this->_gRef != NULL && this->m_setChartClassControlColorBlendMode_EVString_EVColorBlendOperation_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							EarthView::World::Core::ev_wstring className_wch = className;
							jstring className_j = __env->NewString((const jchar*)className_wch.getString(), className_wch.size());
							jint mode_j = (jint) mode;
							jmethodID __method = __gr->getMethod("setChartClassControlColorBlendMode_EVString_EVColorBlendOperation_callback");
							__env->CallVoidMethod(__obj, __method , className_j, mode_j);
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
							return this->CChartLayer::setChartClassControlColorBlendMode(className, mode);
						}
					}
					virtual EarthView::World::Spatial::Display::EVColorBlendOperation getChartClassControlColorBlendMode(const EVString& className) const
					{
						if (this->_gRef != NULL && this->m_getChartClassControlColorBlendMode_EVString_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							EarthView::World::Core::ev_wstring className_wch = className;
							jstring className_j = __env->NewString((const jchar*)className_wch.getString(), className_wch.size());
							jmethodID __method = __gr->getMethod("getChartClassControlColorBlendMode_EVString_callback");
							jint __values1_j = (jint)__env->CallIntMethod(__obj, __method , className_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::Display::EVColorBlendOperation __values1 = (EarthView::World::Spatial::Display::EVColorBlendOperation) __values1_j;
							return __values1;
						}
						else
						{
							return this->CChartLayer::getChartClassControlColorBlendMode(className);
						}
					}
					virtual EVString getDatasetName()
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
							return this->CChartLayer::getDatasetName();
						}
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataSource* getDataSource()
					{
						if (this->_gRef != NULL && this->m_getDataSource_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getDataSource_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::GeoDataset::IDataSource *__values1 = (EarthView::World::Spatial::GeoDataset::IDataSource*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CChartLayer::getDataSource();
						}
					}
					virtual void setLayerSelection(EarthView::World::Spatial::Atlas::ILayerSelection* selection)
					{
						if (this->_gRef != NULL && this->m_setLayerSelection_ILayerSelection_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong selection_j = (jlong) selection;
							jmethodID __method = __gr->getMethod("setLayerSelection_ILayerSelection_callback");
							__env->CallVoidMethod(__obj, __method , selection_j);
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
							return this->CChartLayer::setLayerSelection(selection);
						}
					}
					virtual void setCanEdit(ev_bool can)
					{
						if (this->_gRef != NULL && this->m_setCanEdit_ev_bool_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jboolean can_j = (jboolean) can;
							jmethodID __method = __gr->getMethod("setCanEdit_ev_bool_callback");
							__env->CallVoidMethod(__obj, __method , can_j);
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
							return this->CChartLayer::setCanEdit(can);
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
							return this->CChartLayer::toStream(stream);
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
							return this->CChartLayer::fromStream(stream);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCChartLayerProxy);
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_select_1IQueryFilter_1EVSelectionResultType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong filter_j, jint type_j)
				{
					EarthView::World::Spatial::GeoDataset::IQueryFilter *filter = (EarthView::World::Spatial::GeoDataset::IQueryFilter*) filter_j;
					EarthView::World::Spatial::Atlas::EVSelectionResultType type = (EarthView::World::Spatial::Atlas::EVSelectionResultType) type_j;
					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartLayerProxy))
					{
						pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::select(filter, type);
					}
					else
					{
						pObjectX->select(filter, type);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_register_1select_1IQueryFilter_1EVSelectionResultType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartLayerProxy *pObjectX = (JCChartLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_select_IQueryFilter_EVSelectionResultType_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"select_IQueryFilter_EVSelectionResultType_callback", "(JI)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_select_1IQueryFilter_1EVSelectionResultType_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong filter_j, jint type_j)
				{
					EarthView::World::Spatial::GeoDataset::IQueryFilter *filter = (EarthView::World::Spatial::GeoDataset::IQueryFilter*) filter_j;
					EarthView::World::Spatial::Atlas::EVSelectionResultType type = (EarthView::World::Spatial::Atlas::EVSelectionResultType) type_j;
					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::select(filter, type);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_clearSelection_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartLayerProxy))
					{
						pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::clearSelection();
					}
					else
					{
						pObjectX->clearSelection();
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_register_1clearSelection_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartLayerProxy *pObjectX = (JCChartLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_clearSelection_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"clearSelection_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_clearSelection_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::clearSelection();
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_getLayerSelection_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartLayerProxy))
					{
						EarthView::World::Spatial::Atlas::ILayerSelection* __values1 = pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::getLayerSelection();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Atlas::ILayerSelection* __values1 = pObjectX->getLayerSelection();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_register_1getLayerSelection_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartLayerProxy *pObjectX = (JCChartLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getLayerSelection_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getLayerSelection_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_getLayerSelection_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					EarthView::World::Spatial::Atlas::ILayerSelection* __values1 = pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::getLayerSelection();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_getType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartLayerProxy))
					{
						EarthView::World::Spatial::Atlas::EVLayerType __values1 = pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::getType();
						jint __values1_j = (jint) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Atlas::EVLayerType __values1 = pObjectX->getType();
						jint __values1_j = (jint) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_register_1getType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartLayerProxy *pObjectX = (JCChartLayerProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_getType_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					EarthView::World::Spatial::Atlas::EVLayerType __values1 = pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::getType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_getDataset_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartLayerProxy))
					{
						EarthView::World::Spatial::GeoDataset::IDataset* __values1 = pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::getDataset();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IDataset* __values1 = pObjectX->getDataset();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_register_1getDataset_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartLayerProxy *pObjectX = (JCChartLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getDataset_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getDataset_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_getDataset_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					EarthView::World::Spatial::GeoDataset::IDataset* __values1 = pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::getDataset();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_getName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartLayerProxy))
					{
						EVString __values1 = pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::getName();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_register_1getName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartLayerProxy *pObjectX = (JCChartLayerProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_getName_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					EVString __values1 = pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::getName();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_setName_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartLayerProxy))
					{
						pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::setName(name);
					}
					else
					{
						pObjectX->setName(name);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_register_1setName_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartLayerProxy *pObjectX = (JCChartLayerProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_setName_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::setName(name);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_getDescription_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartLayerProxy))
					{
						EVString __values1 = pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::getDescription();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_register_1getDescription_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartLayerProxy *pObjectX = (JCChartLayerProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_getDescription_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					EVString __values1 = pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::getDescription();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_setDescription_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring value_j)
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
					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartLayerProxy))
					{
						pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::setDescription(value);
					}
					else
					{
						pObjectX->setDescription(value);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_register_1setDescription_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartLayerProxy *pObjectX = (JCChartLayerProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_setDescription_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring value_j)
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
					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::setDescription(value);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_canEdit_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartLayerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::canEdit();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->canEdit();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_register_1canEdit_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartLayerProxy *pObjectX = (JCChartLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_canEdit_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"canEdit_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_canEdit_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::canEdit();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_isEditing_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartLayerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::isEditing();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->isEditing();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_register_1isEditing_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartLayerProxy *pObjectX = (JCChartLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_isEditing_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"isEditing_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_isEditing_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::isEditing();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_setEditing_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean editing_j)
				{
					ev_bool editing = (ev_bool) editing_j;
					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartLayerProxy))
					{
						pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::setEditing(editing);
					}
					else
					{
						pObjectX->setEditing(editing);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_register_1setEditing_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartLayerProxy *pObjectX = (JCChartLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setEditing_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setEditing_ev_bool_callback", "(Z)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_setEditing_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean editing_j)
				{
					ev_bool editing = (ev_bool) editing_j;
					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::setEditing(editing);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_isValid_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartLayerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::isValid();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->isValid();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_register_1isValid_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartLayerProxy *pObjectX = (JCChartLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_isValid_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"isValid_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_isValid_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::isValid();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_setTransparentValue_1ev_1uint8(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jshort transparent_j)
				{
					ev_uint8 transparent = (ev_uint8) transparent_j;
					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartLayerProxy))
					{
						pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::setTransparentValue(transparent);
					}
					else
					{
						pObjectX->setTransparentValue(transparent);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_register_1setTransparentValue_1ev_1uint8(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartLayerProxy *pObjectX = (JCChartLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setTransparentValue_ev_uint8_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setTransparentValue_ev_uint8_callback", "(S)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_setTransparentValue_1ev_1uint8_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jshort transparent_j)
				{
					ev_uint8 transparent = (ev_uint8) transparent_j;
					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::setTransparentValue(transparent);
				}
				extern "C" JNIEXPORT jshort JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_getTransparentValue_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartLayerProxy))
					{
						ev_uint8 __values1 = pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::getTransparentValue();
						jshort __values1_j = (jshort) __values1;
						return __values1_j;
					}
					else
					{
						ev_uint8 __values1 = pObjectX->getTransparentValue();
						jshort __values1_j = (jshort) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_register_1getTransparentValue_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartLayerProxy *pObjectX = (JCChartLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getTransparentValue_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getTransparentValue_void_callback", "()S");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jshort JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_getTransparentValue_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					ev_uint8 __values1 = pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::getTransparentValue();
					jshort __values1_j = (jshort) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_isVisible_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartLayerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::isVisible();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->isVisible();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_register_1isVisible_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartLayerProxy *pObjectX = (JCChartLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_isVisible_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"isVisible_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_isVisible_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::isVisible();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_setVisible_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean visible_j)
				{
					ev_bool visible = (ev_bool) visible_j;
					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartLayerProxy))
					{
						pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::setVisible(visible);
					}
					else
					{
						pObjectX->setVisible(visible);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_register_1setVisible_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartLayerProxy *pObjectX = (JCChartLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setVisible_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setVisible_ev_bool_callback", "(Z)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_setVisible_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean visible_j)
				{
					ev_bool visible = (ev_bool) visible_j;
					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::setVisible(visible);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_isSelectable_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartLayerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::isSelectable();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->isSelectable();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_register_1isSelectable_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartLayerProxy *pObjectX = (JCChartLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_isSelectable_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"isSelectable_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_isSelectable_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::isSelectable();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_setSelectable_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean selected_j)
				{
					ev_bool selected = (ev_bool) selected_j;
					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartLayerProxy))
					{
						pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::setSelectable(selected);
					}
					else
					{
						pObjectX->setSelectable(selected);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_register_1setSelectable_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartLayerProxy *pObjectX = (JCChartLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setSelectable_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setSelectable_ev_bool_callback", "(Z)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_setSelectable_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean selected_j)
				{
					ev_bool selected = (ev_bool) selected_j;
					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::setSelectable(selected);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_ignoreScale_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartLayerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::ignoreScale();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->ignoreScale();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_register_1ignoreScale_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartLayerProxy *pObjectX = (JCChartLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_ignoreScale_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"ignoreScale_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_ignoreScale_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::ignoreScale();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_setIgnoreScale_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean bIgnore_j)
				{
					ev_bool bIgnore = (ev_bool) bIgnore_j;
					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartLayerProxy))
					{
						pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::setIgnoreScale(bIgnore);
					}
					else
					{
						pObjectX->setIgnoreScale(bIgnore);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_register_1setIgnoreScale_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartLayerProxy *pObjectX = (JCChartLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setIgnoreScale_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setIgnoreScale_ev_bool_callback", "(Z)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_setIgnoreScale_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean bIgnore_j)
				{
					ev_bool bIgnore = (ev_bool) bIgnore_j;
					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::setIgnoreScale(bIgnore);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_getDisplayMaxScale_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartLayerProxy))
					{
						ev_real64 __values1 = pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::getDisplayMaxScale();
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
					else
					{
						ev_real64 __values1 = pObjectX->getDisplayMaxScale();
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_register_1getDisplayMaxScale_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartLayerProxy *pObjectX = (JCChartLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getDisplayMaxScale_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getDisplayMaxScale_void_callback", "()D");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_getDisplayMaxScale_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					ev_real64 __values1 = pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::getDisplayMaxScale();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_setDisplayMaxScale_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble scale_j)
				{
					ev_real64 scale = (ev_real64) scale_j;
					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartLayerProxy))
					{
						pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::setDisplayMaxScale(scale);
					}
					else
					{
						pObjectX->setDisplayMaxScale(scale);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_register_1setDisplayMaxScale_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartLayerProxy *pObjectX = (JCChartLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setDisplayMaxScale_ev_real64_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setDisplayMaxScale_ev_real64_callback", "(D)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_setDisplayMaxScale_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble scale_j)
				{
					ev_real64 scale = (ev_real64) scale_j;
					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::setDisplayMaxScale(scale);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_getDisplayMinScale_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartLayerProxy))
					{
						ev_real64 __values1 = pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::getDisplayMinScale();
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
					else
					{
						ev_real64 __values1 = pObjectX->getDisplayMinScale();
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_register_1getDisplayMinScale_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartLayerProxy *pObjectX = (JCChartLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getDisplayMinScale_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getDisplayMinScale_void_callback", "()D");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_getDisplayMinScale_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					ev_real64 __values1 = pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::getDisplayMinScale();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_setDisplayMinScale_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble scale_j)
				{
					ev_real64 scale = (ev_real64) scale_j;
					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartLayerProxy))
					{
						pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::setDisplayMinScale(scale);
					}
					else
					{
						pObjectX->setDisplayMinScale(scale);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_register_1setDisplayMinScale_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartLayerProxy *pObjectX = (JCChartLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setDisplayMinScale_ev_real64_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setDisplayMinScale_ev_real64_callback", "(D)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_setDisplayMinScale_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble scale_j)
				{
					ev_real64 scale = (ev_real64) scale_j;
					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::setDisplayMinScale(scale);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_getSpatialReference_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartLayerProxy))
					{
						EarthView::World::Spatial::Geometry::ISpatialReference* __values1 = pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::getSpatialReference();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Geometry::ISpatialReference* __values1 = pObjectX->getSpatialReference();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_register_1getSpatialReference_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartLayerProxy *pObjectX = (JCChartLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getSpatialReference_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getSpatialReference_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_getSpatialReference_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					EarthView::World::Spatial::Geometry::ISpatialReference* __values1 = pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::getSpatialReference();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_setSpatialReference_1ISpatialReference(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong sr_j)
				{
					EarthView::World::Spatial::Geometry::ISpatialReference *sr = (EarthView::World::Spatial::Geometry::ISpatialReference*) sr_j;
					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartLayerProxy))
					{
						pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::setSpatialReference(sr);
					}
					else
					{
						pObjectX->setSpatialReference(sr);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_register_1setSpatialReference_1ISpatialReference(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartLayerProxy *pObjectX = (JCChartLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setSpatialReference_ISpatialReference_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setSpatialReference_ISpatialReference_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_setSpatialReference_1ISpatialReference_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong sr_j)
				{
					EarthView::World::Spatial::Geometry::ISpatialReference *sr = (EarthView::World::Spatial::Geometry::ISpatialReference*) sr_j;
					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::setSpatialReference(sr);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_getExtent_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartLayerProxy))
					{
						const EarthView::World::Spatial::Geometry::IEnvelope* __values1 = pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::getExtent();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						const EarthView::World::Spatial::Geometry::IEnvelope* __values1 = pObjectX->getExtent();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_register_1getExtent_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartLayerProxy *pObjectX = (JCChartLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getExtent_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getExtent_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_getExtent_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					const EarthView::World::Spatial::Geometry::IEnvelope* __values1 = pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::getExtent();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_draw_1ISpatialDisplay_1EVVectorLayerRendererType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong display_j, jint type_j)
				{
					EarthView::World::Spatial::Display::ISpatialDisplay *display = (EarthView::World::Spatial::Display::ISpatialDisplay*) display_j;
					EarthView::World::Spatial::Atlas::EVVectorLayerRendererType type = (EarthView::World::Spatial::Atlas::EVVectorLayerRendererType) type_j;
					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartLayerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::draw(display, type);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->draw(display, type);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_register_1draw_1ISpatialDisplay_1EVVectorLayerRendererType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartLayerProxy *pObjectX = (JCChartLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_draw_ISpatialDisplay_EVVectorLayerRendererType_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"draw_ISpatialDisplay_EVVectorLayerRendererType_callback", "(JI)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_draw_1ISpatialDisplay_1EVVectorLayerRendererType_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong display_j, jint type_j)
				{
					EarthView::World::Spatial::Display::ISpatialDisplay *display = (EarthView::World::Spatial::Display::ISpatialDisplay*) display_j;
					EarthView::World::Spatial::Atlas::EVVectorLayerRendererType type = (EarthView::World::Spatial::Atlas::EVVectorLayerRendererType) type_j;
					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::draw(display, type);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_getObjectClassNum_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartLayerProxy))
					{
						ev_uint32 __values1 = pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::getObjectClassNum();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						ev_uint32 __values1 = pObjectX->getObjectClassNum();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_register_1getObjectClassNum_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartLayerProxy *pObjectX = (JCChartLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getObjectClassNum_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getObjectClassNum_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_getObjectClassNum_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::getObjectClassNum();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_getObjectClassName_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartLayerProxy))
					{
						const EVString __values1 = pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::getObjectClassName(index);
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
					else
					{
						const EVString __values1 = pObjectX->getObjectClassName(index);
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_register_1getObjectClassName_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartLayerProxy *pObjectX = (JCChartLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getObjectClassName_ev_uint32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getObjectClassName_ev_uint32_callback", "(J)Ljava/lang/String;");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_getObjectClassName_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					const EVString __values1 = pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::getObjectClassName(index);
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_getObjectClassType_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartLayerProxy))
					{
						ev_int32 __values1 = pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::getObjectClassType(name);
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
					else
					{
						ev_int32 __values1 = pObjectX->getObjectClassType(name);
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_register_1getObjectClassType_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartLayerProxy *pObjectX = (JCChartLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getObjectClassType_EVString_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getObjectClassType_EVString_callback", "(Ljava/lang/String;)I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_getObjectClassType_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					ev_int32 __values1 = pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::getObjectClassType(name);
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_setClassVisible_1ev_1uint32_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j, jboolean value_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					ev_bool value = (ev_bool) value_j;
					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartLayerProxy))
					{
						pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::setClassVisible(index, value);
					}
					else
					{
						pObjectX->setClassVisible(index, value);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_register_1setClassVisible_1ev_1uint32_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartLayerProxy *pObjectX = (JCChartLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setClassVisible_ev_uint32_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setClassVisible_ev_uint32_ev_bool_callback", "(JZ)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_setClassVisible_1ev_1uint32_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j, jboolean value_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					ev_bool value = (ev_bool) value_j;
					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::setClassVisible(index, value);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_setClassVisible_1EVString_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jboolean value_j)
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
					ev_bool value = (ev_bool) value_j;
					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartLayerProxy))
					{
						pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::setClassVisible(name, value);
					}
					else
					{
						pObjectX->setClassVisible(name, value);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_register_1setClassVisible_1EVString_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartLayerProxy *pObjectX = (JCChartLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setClassVisible_EVString_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setClassVisible_EVString_ev_bool_callback", "(Ljava/lang/String;Z)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_setClassVisible_1EVString_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jboolean value_j)
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
					ev_bool value = (ev_bool) value_j;
					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::setClassVisible(name, value);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_isClassVisible_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartLayerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::isClassVisible(index);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->isClassVisible(index);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_register_1isClassVisible_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartLayerProxy *pObjectX = (JCChartLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_isClassVisible_ev_uint32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"isClassVisible_ev_uint32_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_isClassVisible_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::isClassVisible(index);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_isClassVisible_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartLayerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::isClassVisible(name);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->isClassVisible(name);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_register_1isClassVisible_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartLayerProxy *pObjectX = (JCChartLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_isClassVisible_EVString_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"isClassVisible_EVString_callback", "(Ljava/lang/String;)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_isClassVisible_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::isClassVisible(name);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_setClassSelected_1ev_1uint32_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j, jboolean value_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					ev_bool value = (ev_bool) value_j;
					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartLayerProxy))
					{
						pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::setClassSelected(index, value);
					}
					else
					{
						pObjectX->setClassSelected(index, value);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_register_1setClassSelected_1ev_1uint32_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartLayerProxy *pObjectX = (JCChartLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setClassSelected_ev_uint32_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setClassSelected_ev_uint32_ev_bool_callback", "(JZ)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_setClassSelected_1ev_1uint32_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j, jboolean value_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					ev_bool value = (ev_bool) value_j;
					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::setClassSelected(index, value);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_isClassSelected_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartLayerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::isClassSelected(index);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->isClassSelected(index);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_register_1isClassSelected_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartLayerProxy *pObjectX = (JCChartLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_isClassSelected_ev_uint32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"isClassSelected_ev_uint32_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_isClassSelected_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::isClassSelected(index);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_isClassSelected_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartLayerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::isClassSelected(name);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->isClassSelected(name);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_register_1isClassSelected_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartLayerProxy *pObjectX = (JCChartLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_isClassSelected_EVString_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"isClassSelected_EVString_callback", "(Ljava/lang/String;)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_isClassSelected_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::isClassSelected(name);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_setDataset_1IDataset(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_dataset_j)
				{
					EarthView::World::Spatial::GeoDataset::IDataset *ref_dataset = (EarthView::World::Spatial::GeoDataset::IDataset*) ref_dataset_j;
					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartLayerProxy))
					{
						pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::setDataset(ref_dataset);
					}
					else
					{
						pObjectX->setDataset(ref_dataset);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_register_1setDataset_1IDataset(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartLayerProxy *pObjectX = (JCChartLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setDataset_IDataset_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setDataset_IDataset_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_setDataset_1IDataset_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_dataset_j)
				{
					EarthView::World::Spatial::GeoDataset::IDataset *ref_dataset = (EarthView::World::Spatial::GeoDataset::IDataset*) ref_dataset_j;
					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::setDataset(ref_dataset);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_getOptionRef_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartLayerProxy))
					{
						EarthView::World::Spatial::Display::IChartOption* __values1 = pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::getOptionRef();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Display::IChartOption* __values1 = pObjectX->getOptionRef();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_register_1getOptionRef_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartLayerProxy *pObjectX = (JCChartLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getOptionRef_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getOptionRef_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_getOptionRef_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					EarthView::World::Spatial::Display::IChartOption* __values1 = pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::getOptionRef();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_setEnvironment_1IChartOption(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong uniformOption_j)
				{
					const EarthView::World::Spatial::Display::IChartOption *uniformOption = (const EarthView::World::Spatial::Display::IChartOption*) uniformOption_j;
					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartLayerProxy))
					{
						pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::setEnvironment(uniformOption);
					}
					else
					{
						pObjectX->setEnvironment(uniformOption);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_register_1setEnvironment_1IChartOption(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartLayerProxy *pObjectX = (JCChartLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setEnvironment_IChartOption_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setEnvironment_IChartOption_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_setEnvironment_1IChartOption_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong uniformOption_j)
				{
					const EarthView::World::Spatial::Display::IChartOption *uniformOption = (const EarthView::World::Spatial::Display::IChartOption*) uniformOption_j;
					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::setEnvironment(uniformOption);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_ev_1clone_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartLayerProxy))
					{
						EarthView::World::Spatial::Atlas::ILayer* __values1 = pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::clone();
						if(__values1 != NULL) {							((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
						}						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Atlas::ILayer* __values1 = pObjectX->clone();
						if(__values1 != NULL) {							((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
						}						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_register_1ev_1clone_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartLayerProxy *pObjectX = (JCChartLayerProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_ev_1clone_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					EarthView::World::Spatial::Atlas::ILayer* __values1 = pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::clone();
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_toXML_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartLayerProxy))
					{
						EVString __values1 = pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::toXML();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_register_1toXML_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartLayerProxy *pObjectX = (JCChartLayerProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_toXML_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					EVString __values1 = pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::toXML();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_fromXmlElement_1CXmlElement(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong element_j)
				{
					EarthView::World::Core::CXmlElement &element = *(EarthView::World::Core::CXmlElement*) element_j;
					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartLayerProxy))
					{
						pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::fromXmlElement(element);
					}
					else
					{
						pObjectX->fromXmlElement(element);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_register_1fromXmlElement_1CXmlElement(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartLayerProxy *pObjectX = (JCChartLayerProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_fromXmlElement_1CXmlElement_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong element_j)
				{
					EarthView::World::Core::CXmlElement &element = *(EarthView::World::Core::CXmlElement*) element_j;
					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::fromXmlElement(element);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_toXmlElement_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartLayerProxy))
					{
						EarthView::World::Core::CXmlElement __values1 = pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::toXmlElement();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_register_1toXmlElement_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartLayerProxy *pObjectX = (JCChartLayerProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_toXmlElement_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					EarthView::World::Core::CXmlElement __values1 = pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::toXmlElement();
					EarthView::World::Core::CXmlElement *returnvalues = new EarthView::World::Core::CXmlElement(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_setClassDisplayMinScale_1EVString_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring className_j, jdouble scale_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* className_ch = (const ev_char*)__env->GetStringUTFChars(className_j,JNI_FALSE);
					const EVString className = className_ch;
					__env->ReleaseStringUTFChars(className_j, (const char *)className_ch);
					#else
					const ev_wchar* className_ch = (const ev_wchar*)__env->GetStringChars(className_j,JNI_FALSE);
					const EVString className = className_ch;
					__env->ReleaseStringChars(className_j, (const jchar *)className_ch);
					#endif
					const ev_real64 scale = (ev_real64) scale_j;
					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartLayerProxy))
					{
						pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::setClassDisplayMinScale(className, scale);
					}
					else
					{
						pObjectX->setClassDisplayMinScale(className, scale);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_register_1setClassDisplayMinScale_1EVString_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartLayerProxy *pObjectX = (JCChartLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setClassDisplayMinScale_EVString_ev_real64_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setClassDisplayMinScale_EVString_ev_real64_callback", "(Ljava/lang/String;D)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_setClassDisplayMinScale_1EVString_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring className_j, jdouble scale_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* className_ch = (const ev_char*)__env->GetStringUTFChars(className_j,JNI_FALSE);
					const EVString className = className_ch;
					__env->ReleaseStringUTFChars(className_j, (const char *)className_ch);
					#else
					const ev_wchar* className_ch = (const ev_wchar*)__env->GetStringChars(className_j,JNI_FALSE);
					const EVString className = className_ch;
					__env->ReleaseStringChars(className_j, (const jchar *)className_ch);
					#endif
					const ev_real64 scale = (ev_real64) scale_j;
					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::setClassDisplayMinScale(className, scale);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_getClassDisplayMinScale_1EVString_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring className_j, jlong minScale_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* className_ch = (const ev_char*)__env->GetStringUTFChars(className_j,JNI_FALSE);
					const EVString className = className_ch;
					__env->ReleaseStringUTFChars(className_j, (const char *)className_ch);
					#else
					const ev_wchar* className_ch = (const ev_wchar*)__env->GetStringChars(className_j,JNI_FALSE);
					const EVString className = className_ch;
					__env->ReleaseStringChars(className_j, (const jchar *)className_ch);
					#endif
					ev_real64 &minScale = *(ev_real64*) minScale_j;
					const 					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartLayerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::getClassDisplayMinScale(className, minScale);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->getClassDisplayMinScale(className, minScale);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_register_1getClassDisplayMinScale_1EVString_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartLayerProxy *pObjectX = (JCChartLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getClassDisplayMinScale_EVString_ev_real64_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getClassDisplayMinScale_EVString_ev_real64_callback", "(Ljava/lang/String;J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_getClassDisplayMinScale_1EVString_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring className_j, jlong minScale_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* className_ch = (const ev_char*)__env->GetStringUTFChars(className_j,JNI_FALSE);
					const EVString className = className_ch;
					__env->ReleaseStringUTFChars(className_j, (const char *)className_ch);
					#else
					const ev_wchar* className_ch = (const ev_wchar*)__env->GetStringChars(className_j,JNI_FALSE);
					const EVString className = className_ch;
					__env->ReleaseStringChars(className_j, (const jchar *)className_ch);
					#endif
					ev_real64 &minScale = *(ev_real64*) minScale_j;
					const 					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::getClassDisplayMinScale(className, minScale);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_setClassDisplayMaxScale_1EVString_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring className_j, jdouble scale_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* className_ch = (const ev_char*)__env->GetStringUTFChars(className_j,JNI_FALSE);
					const EVString className = className_ch;
					__env->ReleaseStringUTFChars(className_j, (const char *)className_ch);
					#else
					const ev_wchar* className_ch = (const ev_wchar*)__env->GetStringChars(className_j,JNI_FALSE);
					const EVString className = className_ch;
					__env->ReleaseStringChars(className_j, (const jchar *)className_ch);
					#endif
					const ev_real64 scale = (ev_real64) scale_j;
					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartLayerProxy))
					{
						pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::setClassDisplayMaxScale(className, scale);
					}
					else
					{
						pObjectX->setClassDisplayMaxScale(className, scale);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_register_1setClassDisplayMaxScale_1EVString_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartLayerProxy *pObjectX = (JCChartLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setClassDisplayMaxScale_EVString_ev_real64_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setClassDisplayMaxScale_EVString_ev_real64_callback", "(Ljava/lang/String;D)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_setClassDisplayMaxScale_1EVString_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring className_j, jdouble scale_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* className_ch = (const ev_char*)__env->GetStringUTFChars(className_j,JNI_FALSE);
					const EVString className = className_ch;
					__env->ReleaseStringUTFChars(className_j, (const char *)className_ch);
					#else
					const ev_wchar* className_ch = (const ev_wchar*)__env->GetStringChars(className_j,JNI_FALSE);
					const EVString className = className_ch;
					__env->ReleaseStringChars(className_j, (const jchar *)className_ch);
					#endif
					const ev_real64 scale = (ev_real64) scale_j;
					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::setClassDisplayMaxScale(className, scale);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_getClassDisplayMaxScale_1EVString_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring className_j, jlong maxScale_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* className_ch = (const ev_char*)__env->GetStringUTFChars(className_j,JNI_FALSE);
					const EVString className = className_ch;
					__env->ReleaseStringUTFChars(className_j, (const char *)className_ch);
					#else
					const ev_wchar* className_ch = (const ev_wchar*)__env->GetStringChars(className_j,JNI_FALSE);
					const EVString className = className_ch;
					__env->ReleaseStringChars(className_j, (const jchar *)className_ch);
					#endif
					ev_real64 &maxScale = *(ev_real64*) maxScale_j;
					const 					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartLayerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::getClassDisplayMaxScale(className, maxScale);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->getClassDisplayMaxScale(className, maxScale);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_register_1getClassDisplayMaxScale_1EVString_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartLayerProxy *pObjectX = (JCChartLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getClassDisplayMaxScale_EVString_ev_real64_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getClassDisplayMaxScale_EVString_ev_real64_callback", "(Ljava/lang/String;J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_getClassDisplayMaxScale_1EVString_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring className_j, jlong maxScale_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* className_ch = (const ev_char*)__env->GetStringUTFChars(className_j,JNI_FALSE);
					const EVString className = className_ch;
					__env->ReleaseStringUTFChars(className_j, (const char *)className_ch);
					#else
					const ev_wchar* className_ch = (const ev_wchar*)__env->GetStringChars(className_j,JNI_FALSE);
					const EVString className = className_ch;
					__env->ReleaseStringChars(className_j, (const jchar *)className_ch);
					#endif
					ev_real64 &maxScale = *(ev_real64*) maxScale_j;
					const 					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::getClassDisplayMaxScale(className, maxScale);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_setClassIgnoreScale_1EVString_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring className_j, jboolean classIgnore_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* className_ch = (const ev_char*)__env->GetStringUTFChars(className_j,JNI_FALSE);
					const EVString className = className_ch;
					__env->ReleaseStringUTFChars(className_j, (const char *)className_ch);
					#else
					const ev_wchar* className_ch = (const ev_wchar*)__env->GetStringChars(className_j,JNI_FALSE);
					const EVString className = className_ch;
					__env->ReleaseStringChars(className_j, (const jchar *)className_ch);
					#endif
					const ev_bool classIgnore = (ev_bool) classIgnore_j;
					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartLayerProxy))
					{
						pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::setClassIgnoreScale(className, classIgnore);
					}
					else
					{
						pObjectX->setClassIgnoreScale(className, classIgnore);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_register_1setClassIgnoreScale_1EVString_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartLayerProxy *pObjectX = (JCChartLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setClassIgnoreScale_EVString_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setClassIgnoreScale_EVString_ev_bool_callback", "(Ljava/lang/String;Z)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_setClassIgnoreScale_1EVString_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring className_j, jboolean classIgnore_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* className_ch = (const ev_char*)__env->GetStringUTFChars(className_j,JNI_FALSE);
					const EVString className = className_ch;
					__env->ReleaseStringUTFChars(className_j, (const char *)className_ch);
					#else
					const ev_wchar* className_ch = (const ev_wchar*)__env->GetStringChars(className_j,JNI_FALSE);
					const EVString className = className_ch;
					__env->ReleaseStringChars(className_j, (const jchar *)className_ch);
					#endif
					const ev_bool classIgnore = (ev_bool) classIgnore_j;
					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::setClassIgnoreScale(className, classIgnore);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_getClassIgnoreScale_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring className_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* className_ch = (const ev_char*)__env->GetStringUTFChars(className_j,JNI_FALSE);
					const EVString className = className_ch;
					__env->ReleaseStringUTFChars(className_j, (const char *)className_ch);
					#else
					const ev_wchar* className_ch = (const ev_wchar*)__env->GetStringChars(className_j,JNI_FALSE);
					const EVString className = className_ch;
					__env->ReleaseStringChars(className_j, (const jchar *)className_ch);
					#endif
					const 					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartLayerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::getClassIgnoreScale(className);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->getClassIgnoreScale(className);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_register_1getClassIgnoreScale_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartLayerProxy *pObjectX = (JCChartLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getClassIgnoreScale_EVString_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getClassIgnoreScale_EVString_callback", "(Ljava/lang/String;)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_getClassIgnoreScale_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring className_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* className_ch = (const ev_char*)__env->GetStringUTFChars(className_j,JNI_FALSE);
					const EVString className = className_ch;
					__env->ReleaseStringUTFChars(className_j, (const char *)className_ch);
					#else
					const ev_wchar* className_ch = (const ev_wchar*)__env->GetStringChars(className_j,JNI_FALSE);
					const EVString className = className_ch;
					__env->ReleaseStringChars(className_j, (const jchar *)className_ch);
					#endif
					const 					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::getClassIgnoreScale(className);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_setClassDisplayMinScale_1ev_1uint32_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j, jdouble scale_j)
				{
					const ev_uint32 index = (ev_uint32) index_j;
					const ev_real64 scale = (ev_real64) scale_j;
					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartLayerProxy))
					{
						pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::setClassDisplayMinScale(index, scale);
					}
					else
					{
						pObjectX->setClassDisplayMinScale(index, scale);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_register_1setClassDisplayMinScale_1ev_1uint32_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartLayerProxy *pObjectX = (JCChartLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setClassDisplayMinScale_ev_uint32_ev_real64_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setClassDisplayMinScale_ev_uint32_ev_real64_callback", "(JD)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_setClassDisplayMinScale_1ev_1uint32_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j, jdouble scale_j)
				{
					const ev_uint32 index = (ev_uint32) index_j;
					const ev_real64 scale = (ev_real64) scale_j;
					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::setClassDisplayMinScale(index, scale);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_getClassDisplayMinScale_1ev_1uint32_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j, jlong scale_j)
				{
					const ev_uint32 index = (ev_uint32) index_j;
					ev_real64 &scale = *(ev_real64*) scale_j;
					const 					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartLayerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::getClassDisplayMinScale(index, scale);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->getClassDisplayMinScale(index, scale);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_register_1getClassDisplayMinScale_1ev_1uint32_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartLayerProxy *pObjectX = (JCChartLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getClassDisplayMinScale_ev_uint32_ev_real64_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getClassDisplayMinScale_ev_uint32_ev_real64_callback", "(JJ)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_getClassDisplayMinScale_1ev_1uint32_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j, jlong scale_j)
				{
					const ev_uint32 index = (ev_uint32) index_j;
					ev_real64 &scale = *(ev_real64*) scale_j;
					const 					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::getClassDisplayMinScale(index, scale);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_setClassDisplayMaxScale_1ev_1uint32_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j, jdouble scale_j)
				{
					const ev_uint32 index = (ev_uint32) index_j;
					const ev_real64 scale = (ev_real64) scale_j;
					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartLayerProxy))
					{
						pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::setClassDisplayMaxScale(index, scale);
					}
					else
					{
						pObjectX->setClassDisplayMaxScale(index, scale);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_register_1setClassDisplayMaxScale_1ev_1uint32_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartLayerProxy *pObjectX = (JCChartLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setClassDisplayMaxScale_ev_uint32_ev_real64_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setClassDisplayMaxScale_ev_uint32_ev_real64_callback", "(JD)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_setClassDisplayMaxScale_1ev_1uint32_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j, jdouble scale_j)
				{
					const ev_uint32 index = (ev_uint32) index_j;
					const ev_real64 scale = (ev_real64) scale_j;
					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::setClassDisplayMaxScale(index, scale);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_getClassDisplayMaxScale_1ev_1uint32_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j, jlong scale_j)
				{
					const ev_uint32 index = (ev_uint32) index_j;
					ev_real64 &scale = *(ev_real64*) scale_j;
					const 					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartLayerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::getClassDisplayMaxScale(index, scale);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->getClassDisplayMaxScale(index, scale);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_register_1getClassDisplayMaxScale_1ev_1uint32_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartLayerProxy *pObjectX = (JCChartLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getClassDisplayMaxScale_ev_uint32_ev_real64_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getClassDisplayMaxScale_ev_uint32_ev_real64_callback", "(JJ)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_getClassDisplayMaxScale_1ev_1uint32_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j, jlong scale_j)
				{
					const ev_uint32 index = (ev_uint32) index_j;
					ev_real64 &scale = *(ev_real64*) scale_j;
					const 					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::getClassDisplayMaxScale(index, scale);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_setClassIgnoreScale_1ev_1uint32_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j, jboolean classIgnore_j)
				{
					const ev_uint32 index = (ev_uint32) index_j;
					const ev_bool classIgnore = (ev_bool) classIgnore_j;
					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartLayerProxy))
					{
						pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::setClassIgnoreScale(index, classIgnore);
					}
					else
					{
						pObjectX->setClassIgnoreScale(index, classIgnore);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_register_1setClassIgnoreScale_1ev_1uint32_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartLayerProxy *pObjectX = (JCChartLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setClassIgnoreScale_ev_uint32_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setClassIgnoreScale_ev_uint32_ev_bool_callback", "(JZ)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_setClassIgnoreScale_1ev_1uint32_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j, jboolean classIgnore_j)
				{
					const ev_uint32 index = (ev_uint32) index_j;
					const ev_bool classIgnore = (ev_bool) classIgnore_j;
					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::setClassIgnoreScale(index, classIgnore);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_getClassIgnoreScale_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
				{
					const ev_uint32 index = (ev_uint32) index_j;
					const 					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartLayerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::getClassIgnoreScale(index);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->getClassIgnoreScale(index);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_register_1getClassIgnoreScale_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartLayerProxy *pObjectX = (JCChartLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getClassIgnoreScale_ev_uint32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getClassIgnoreScale_ev_uint32_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_getClassIgnoreScale_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
				{
					const ev_uint32 index = (ev_uint32) index_j;
					const 					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::getClassIgnoreScale(index);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_setUseChartClassControl_1EVString_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring className_j, jboolean IsUse_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* className_ch = (const ev_char*)__env->GetStringUTFChars(className_j,JNI_FALSE);
					const EVString className = className_ch;
					__env->ReleaseStringUTFChars(className_j, (const char *)className_ch);
					#else
					const ev_wchar* className_ch = (const ev_wchar*)__env->GetStringChars(className_j,JNI_FALSE);
					const EVString className = className_ch;
					__env->ReleaseStringChars(className_j, (const jchar *)className_ch);
					#endif
					ev_bool IsUse = (ev_bool) IsUse_j;
					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartLayerProxy))
					{
						pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::setUseChartClassControl(className, IsUse);
					}
					else
					{
						pObjectX->setUseChartClassControl(className, IsUse);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_register_1setUseChartClassControl_1EVString_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartLayerProxy *pObjectX = (JCChartLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setUseChartClassControl_EVString_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setUseChartClassControl_EVString_ev_bool_callback", "(Ljava/lang/String;Z)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_setUseChartClassControl_1EVString_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring className_j, jboolean IsUse_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* className_ch = (const ev_char*)__env->GetStringUTFChars(className_j,JNI_FALSE);
					const EVString className = className_ch;
					__env->ReleaseStringUTFChars(className_j, (const char *)className_ch);
					#else
					const ev_wchar* className_ch = (const ev_wchar*)__env->GetStringChars(className_j,JNI_FALSE);
					const EVString className = className_ch;
					__env->ReleaseStringChars(className_j, (const jchar *)className_ch);
					#endif
					ev_bool IsUse = (ev_bool) IsUse_j;
					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::setUseChartClassControl(className, IsUse);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_getUseChartClassControl_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring className_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* className_ch = (const ev_char*)__env->GetStringUTFChars(className_j,JNI_FALSE);
					const EVString className = className_ch;
					__env->ReleaseStringUTFChars(className_j, (const char *)className_ch);
					#else
					const ev_wchar* className_ch = (const ev_wchar*)__env->GetStringChars(className_j,JNI_FALSE);
					const EVString className = className_ch;
					__env->ReleaseStringChars(className_j, (const jchar *)className_ch);
					#endif
					const 					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartLayerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::getUseChartClassControl(className);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->getUseChartClassControl(className);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_register_1getUseChartClassControl_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartLayerProxy *pObjectX = (JCChartLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getUseChartClassControl_EVString_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getUseChartClassControl_EVString_callback", "(Ljava/lang/String;)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_getUseChartClassControl_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring className_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* className_ch = (const ev_char*)__env->GetStringUTFChars(className_j,JNI_FALSE);
					const EVString className = className_ch;
					__env->ReleaseStringUTFChars(className_j, (const char *)className_ch);
					#else
					const ev_wchar* className_ch = (const ev_wchar*)__env->GetStringChars(className_j,JNI_FALSE);
					const EVString className = className_ch;
					__env->ReleaseStringChars(className_j, (const jchar *)className_ch);
					#endif
					const 					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::getUseChartClassControl(className);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_setChartClassControlSize_1EVString_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring className_j, jlong sizeFactor_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* className_ch = (const ev_char*)__env->GetStringUTFChars(className_j,JNI_FALSE);
					const EVString className = className_ch;
					__env->ReleaseStringUTFChars(className_j, (const char *)className_ch);
					#else
					const ev_wchar* className_ch = (const ev_wchar*)__env->GetStringChars(className_j,JNI_FALSE);
					const EVString className = className_ch;
					__env->ReleaseStringChars(className_j, (const jchar *)className_ch);
					#endif
					ev_uint32 sizeFactor = (ev_uint32) sizeFactor_j;
					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartLayerProxy))
					{
						pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::setChartClassControlSize(className, sizeFactor);
					}
					else
					{
						pObjectX->setChartClassControlSize(className, sizeFactor);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_register_1setChartClassControlSize_1EVString_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartLayerProxy *pObjectX = (JCChartLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setChartClassControlSize_EVString_ev_uint32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setChartClassControlSize_EVString_ev_uint32_callback", "(Ljava/lang/String;J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_setChartClassControlSize_1EVString_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring className_j, jlong sizeFactor_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* className_ch = (const ev_char*)__env->GetStringUTFChars(className_j,JNI_FALSE);
					const EVString className = className_ch;
					__env->ReleaseStringUTFChars(className_j, (const char *)className_ch);
					#else
					const ev_wchar* className_ch = (const ev_wchar*)__env->GetStringChars(className_j,JNI_FALSE);
					const EVString className = className_ch;
					__env->ReleaseStringChars(className_j, (const jchar *)className_ch);
					#endif
					ev_uint32 sizeFactor = (ev_uint32) sizeFactor_j;
					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::setChartClassControlSize(className, sizeFactor);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_getChartClassControlSize_1EVString_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring className_j, jlong sizeFactor_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* className_ch = (const ev_char*)__env->GetStringUTFChars(className_j,JNI_FALSE);
					const EVString className = className_ch;
					__env->ReleaseStringUTFChars(className_j, (const char *)className_ch);
					#else
					const ev_wchar* className_ch = (const ev_wchar*)__env->GetStringChars(className_j,JNI_FALSE);
					const EVString className = className_ch;
					__env->ReleaseStringChars(className_j, (const jchar *)className_ch);
					#endif
					ev_uint32 &sizeFactor = *(ev_uint32*) sizeFactor_j;
					const 					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartLayerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::getChartClassControlSize(className, sizeFactor);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->getChartClassControlSize(className, sizeFactor);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_register_1getChartClassControlSize_1EVString_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartLayerProxy *pObjectX = (JCChartLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getChartClassControlSize_EVString_ev_uint32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getChartClassControlSize_EVString_ev_uint32_callback", "(Ljava/lang/String;J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_getChartClassControlSize_1EVString_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring className_j, jlong sizeFactor_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* className_ch = (const ev_char*)__env->GetStringUTFChars(className_j,JNI_FALSE);
					const EVString className = className_ch;
					__env->ReleaseStringUTFChars(className_j, (const char *)className_ch);
					#else
					const ev_wchar* className_ch = (const ev_wchar*)__env->GetStringChars(className_j,JNI_FALSE);
					const EVString className = className_ch;
					__env->ReleaseStringChars(className_j, (const jchar *)className_ch);
					#endif
					ev_uint32 &sizeFactor = *(ev_uint32*) sizeFactor_j;
					const 					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::getChartClassControlSize(className, sizeFactor);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_setChartClassControlColor_1EVString_1IColor(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring className_j, jlong color_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* className_ch = (const ev_char*)__env->GetStringUTFChars(className_j,JNI_FALSE);
					const EVString className = className_ch;
					__env->ReleaseStringUTFChars(className_j, (const char *)className_ch);
					#else
					const ev_wchar* className_ch = (const ev_wchar*)__env->GetStringChars(className_j,JNI_FALSE);
					const EVString className = className_ch;
					__env->ReleaseStringChars(className_j, (const jchar *)className_ch);
					#endif
					const EarthView::World::Spatial::Display::IColor *color = (const EarthView::World::Spatial::Display::IColor*) color_j;
					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartLayerProxy))
					{
						pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::setChartClassControlColor(className, color);
					}
					else
					{
						pObjectX->setChartClassControlColor(className, color);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_register_1setChartClassControlColor_1EVString_1IColor(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartLayerProxy *pObjectX = (JCChartLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setChartClassControlColor_EVString_IColor_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setChartClassControlColor_EVString_IColor_callback", "(Ljava/lang/String;J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_setChartClassControlColor_1EVString_1IColor_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring className_j, jlong color_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* className_ch = (const ev_char*)__env->GetStringUTFChars(className_j,JNI_FALSE);
					const EVString className = className_ch;
					__env->ReleaseStringUTFChars(className_j, (const char *)className_ch);
					#else
					const ev_wchar* className_ch = (const ev_wchar*)__env->GetStringChars(className_j,JNI_FALSE);
					const EVString className = className_ch;
					__env->ReleaseStringChars(className_j, (const jchar *)className_ch);
					#endif
					const EarthView::World::Spatial::Display::IColor *color = (const EarthView::World::Spatial::Display::IColor*) color_j;
					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::setChartClassControlColor(className, color);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_getChartClassControlColor_1EVString_1IColor(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring className_j, jlong pColor_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* className_ch = (const ev_char*)__env->GetStringUTFChars(className_j,JNI_FALSE);
					const EVString className = className_ch;
					__env->ReleaseStringUTFChars(className_j, (const char *)className_ch);
					#else
					const ev_wchar* className_ch = (const ev_wchar*)__env->GetStringChars(className_j,JNI_FALSE);
					const EVString className = className_ch;
					__env->ReleaseStringChars(className_j, (const jchar *)className_ch);
					#endif
					EarthView::World::Spatial::Display::IColor *&pColor = *(EarthView::World::Spatial::Display::IColor**) pColor_j;
					const 					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartLayerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::getChartClassControlColor(className, pColor);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->getChartClassControlColor(className, pColor);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_register_1getChartClassControlColor_1EVString_1IColor(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartLayerProxy *pObjectX = (JCChartLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getChartClassControlColor_EVString_IColor_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getChartClassControlColor_EVString_IColor_callback", "(Ljava/lang/String;J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_getChartClassControlColor_1EVString_1IColor_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring className_j, jlong pColor_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* className_ch = (const ev_char*)__env->GetStringUTFChars(className_j,JNI_FALSE);
					const EVString className = className_ch;
					__env->ReleaseStringUTFChars(className_j, (const char *)className_ch);
					#else
					const ev_wchar* className_ch = (const ev_wchar*)__env->GetStringChars(className_j,JNI_FALSE);
					const EVString className = className_ch;
					__env->ReleaseStringChars(className_j, (const jchar *)className_ch);
					#endif
					EarthView::World::Spatial::Display::IColor *&pColor = *(EarthView::World::Spatial::Display::IColor**) pColor_j;
					const 					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::getChartClassControlColor(className, pColor);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_setUseChartClassControlColor_1EVString_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring className_j, jboolean useColor_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* className_ch = (const ev_char*)__env->GetStringUTFChars(className_j,JNI_FALSE);
					const EVString className = className_ch;
					__env->ReleaseStringUTFChars(className_j, (const char *)className_ch);
					#else
					const ev_wchar* className_ch = (const ev_wchar*)__env->GetStringChars(className_j,JNI_FALSE);
					const EVString className = className_ch;
					__env->ReleaseStringChars(className_j, (const jchar *)className_ch);
					#endif
					ev_bool useColor = (ev_bool) useColor_j;
					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartLayerProxy))
					{
						pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::setUseChartClassControlColor(className, useColor);
					}
					else
					{
						pObjectX->setUseChartClassControlColor(className, useColor);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_register_1setUseChartClassControlColor_1EVString_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartLayerProxy *pObjectX = (JCChartLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setUseChartClassControlColor_EVString_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setUseChartClassControlColor_EVString_ev_bool_callback", "(Ljava/lang/String;Z)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_setUseChartClassControlColor_1EVString_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring className_j, jboolean useColor_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* className_ch = (const ev_char*)__env->GetStringUTFChars(className_j,JNI_FALSE);
					const EVString className = className_ch;
					__env->ReleaseStringUTFChars(className_j, (const char *)className_ch);
					#else
					const ev_wchar* className_ch = (const ev_wchar*)__env->GetStringChars(className_j,JNI_FALSE);
					const EVString className = className_ch;
					__env->ReleaseStringChars(className_j, (const jchar *)className_ch);
					#endif
					ev_bool useColor = (ev_bool) useColor_j;
					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::setUseChartClassControlColor(className, useColor);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_getUseChartClassControlColor_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring className_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* className_ch = (const ev_char*)__env->GetStringUTFChars(className_j,JNI_FALSE);
					const EVString className = className_ch;
					__env->ReleaseStringUTFChars(className_j, (const char *)className_ch);
					#else
					const ev_wchar* className_ch = (const ev_wchar*)__env->GetStringChars(className_j,JNI_FALSE);
					const EVString className = className_ch;
					__env->ReleaseStringChars(className_j, (const jchar *)className_ch);
					#endif
					const 					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartLayerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::getUseChartClassControlColor(className);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->getUseChartClassControlColor(className);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_register_1getUseChartClassControlColor_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartLayerProxy *pObjectX = (JCChartLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getUseChartClassControlColor_EVString_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getUseChartClassControlColor_EVString_callback", "(Ljava/lang/String;)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_getUseChartClassControlColor_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring className_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* className_ch = (const ev_char*)__env->GetStringUTFChars(className_j,JNI_FALSE);
					const EVString className = className_ch;
					__env->ReleaseStringUTFChars(className_j, (const char *)className_ch);
					#else
					const ev_wchar* className_ch = (const ev_wchar*)__env->GetStringChars(className_j,JNI_FALSE);
					const EVString className = className_ch;
					__env->ReleaseStringChars(className_j, (const jchar *)className_ch);
					#endif
					const 					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::getUseChartClassControlColor(className);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_getChartClassControl_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring className_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* className_ch = (const ev_char*)__env->GetStringUTFChars(className_j,JNI_FALSE);
					const EVString className = className_ch;
					__env->ReleaseStringUTFChars(className_j, (const char *)className_ch);
					#else
					const ev_wchar* className_ch = (const ev_wchar*)__env->GetStringChars(className_j,JNI_FALSE);
					const EVString className = className_ch;
					__env->ReleaseStringChars(className_j, (const jchar *)className_ch);
					#endif
					const 					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					const EarthView::World::Spatial::Atlas::NHChartClassControl* __values1 = pObjectX->getChartClassControl(className);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_setChartClassControlColorBlendMode_1EVString_1EVColorBlendOperation(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring className_j, jint mode_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* className_ch = (const ev_char*)__env->GetStringUTFChars(className_j,JNI_FALSE);
					const EVString className = className_ch;
					__env->ReleaseStringUTFChars(className_j, (const char *)className_ch);
					#else
					const ev_wchar* className_ch = (const ev_wchar*)__env->GetStringChars(className_j,JNI_FALSE);
					const EVString className = className_ch;
					__env->ReleaseStringChars(className_j, (const jchar *)className_ch);
					#endif
					EarthView::World::Spatial::Display::EVColorBlendOperation mode = (EarthView::World::Spatial::Display::EVColorBlendOperation) mode_j;
					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartLayerProxy))
					{
						pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::setChartClassControlColorBlendMode(className, mode);
					}
					else
					{
						pObjectX->setChartClassControlColorBlendMode(className, mode);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_register_1setChartClassControlColorBlendMode_1EVString_1EVColorBlendOperation(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartLayerProxy *pObjectX = (JCChartLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setChartClassControlColorBlendMode_EVString_EVColorBlendOperation_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setChartClassControlColorBlendMode_EVString_EVColorBlendOperation_callback", "(Ljava/lang/String;I)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_setChartClassControlColorBlendMode_1EVString_1EVColorBlendOperation_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring className_j, jint mode_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* className_ch = (const ev_char*)__env->GetStringUTFChars(className_j,JNI_FALSE);
					const EVString className = className_ch;
					__env->ReleaseStringUTFChars(className_j, (const char *)className_ch);
					#else
					const ev_wchar* className_ch = (const ev_wchar*)__env->GetStringChars(className_j,JNI_FALSE);
					const EVString className = className_ch;
					__env->ReleaseStringChars(className_j, (const jchar *)className_ch);
					#endif
					EarthView::World::Spatial::Display::EVColorBlendOperation mode = (EarthView::World::Spatial::Display::EVColorBlendOperation) mode_j;
					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::setChartClassControlColorBlendMode(className, mode);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_getChartClassControlColorBlendMode_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring className_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* className_ch = (const ev_char*)__env->GetStringUTFChars(className_j,JNI_FALSE);
					const EVString className = className_ch;
					__env->ReleaseStringUTFChars(className_j, (const char *)className_ch);
					#else
					const ev_wchar* className_ch = (const ev_wchar*)__env->GetStringChars(className_j,JNI_FALSE);
					const EVString className = className_ch;
					__env->ReleaseStringChars(className_j, (const jchar *)className_ch);
					#endif
					const 					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartLayerProxy))
					{
						EarthView::World::Spatial::Display::EVColorBlendOperation __values1 = pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::getChartClassControlColorBlendMode(className);
						jint __values1_j = (jint) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Display::EVColorBlendOperation __values1 = pObjectX->getChartClassControlColorBlendMode(className);
						jint __values1_j = (jint) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_register_1getChartClassControlColorBlendMode_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartLayerProxy *pObjectX = (JCChartLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getChartClassControlColorBlendMode_EVString_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getChartClassControlColorBlendMode_EVString_callback", "(Ljava/lang/String;)I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_getChartClassControlColorBlendMode_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring className_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* className_ch = (const ev_char*)__env->GetStringUTFChars(className_j,JNI_FALSE);
					const EVString className = className_ch;
					__env->ReleaseStringUTFChars(className_j, (const char *)className_ch);
					#else
					const ev_wchar* className_ch = (const ev_wchar*)__env->GetStringChars(className_j,JNI_FALSE);
					const EVString className = className_ch;
					__env->ReleaseStringChars(className_j, (const jchar *)className_ch);
					#endif
					const 					EarthView::World::Spatial::Atlas::CChartLayer *pObjectX = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjXXXX;
					EarthView::World::Spatial::Display::EVColorBlendOperation __values1 = pObjectX->EarthView::World::Spatial::Atlas::CChartLayer::getChartClassControlColorBlendMode(className);
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_register_1getDatasetName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartLayerProxy *pObjectX = (JCChartLayerProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_register_1getDataSource_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartLayerProxy *pObjectX = (JCChartLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getDataSource_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getDataSource_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_register_1setLayerSelection_1ILayerSelection(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartLayerProxy *pObjectX = (JCChartLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setLayerSelection_ILayerSelection_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setLayerSelection_ILayerSelection_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_register_1setCanEdit_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartLayerProxy *pObjectX = (JCChartLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setCanEdit_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setCanEdit_ev_bool_callback", "(Z)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_register_1toStream_1CDataStream(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartLayerProxy *pObjectX = (JCChartLayerProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_ChartLayer_register_1fromStream_1CDataStream(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartLayerProxy *pObjectX = (JCChartLayerProxy*) pObjXXXX;
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
