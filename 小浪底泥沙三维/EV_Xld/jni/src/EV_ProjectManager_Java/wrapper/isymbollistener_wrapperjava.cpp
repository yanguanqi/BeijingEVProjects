/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "projectmanager/isymbollistener.h"
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
			namespace Display
			{
				class JISymbolListenerProxy : public EarthView::World::Spatial::Display::ISymbolListener
				{
				 private:
					EarthView::World::Core::ev_string m_customSymbolFromXml_EVString_callback;
					EarthView::World::Core::ev_string m_customSymbolToXml_ISymbol_callback;
				public:
					JISymbolListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : ISymbolListener(pList)
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
					void register_customSymbolFromXml_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_customSymbolFromXml_EVString_callback = __method;
					}
					void register_customSymbolToXml_ISymbol_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_customSymbolToXml_ISymbol_callback = __method;
					}
					virtual EarthView::World::Spatial::Display::ISymbol* customSymbolFromXml(const EVString& strXml)
					{
						if (this->_gRef != NULL && this->m_customSymbolFromXml_EVString_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							EarthView::World::Core::ev_wstring strXml_wch = strXml;
							jstring strXml_j = __env->NewString((const jchar*)strXml_wch.getString(), strXml_wch.size());
							jmethodID __method = __gr->getMethod("customSymbolFromXml_EVString_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , strXml_j);
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
							return this->ISymbolListener::customSymbolFromXml(strXml);
						}
					}
					virtual EVString customSymbolToXml(EarthView::World::Spatial::Display::ISymbol* symbol) const
					{
						if (this->_gRef != NULL && this->m_customSymbolToXml_ISymbol_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
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
							jmethodID __method = __gr->getMethod("customSymbolToXml_ISymbol_callback");
							jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method , symbol_j);
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
							return this->ISymbolListener::customSymbolToXml(symbol);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JISymbolListenerProxy);
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_Isymbollistener_customSymbolFromXml_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring strXml_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* strXml_ch = (const ev_char*)__env->GetStringUTFChars(strXml_j,JNI_FALSE);
					const EVString strXml = strXml_ch;
					__env->ReleaseStringUTFChars(strXml_j, (const char *)strXml_ch);
					#else
					const ev_wchar* strXml_ch = (const ev_wchar*)__env->GetStringChars(strXml_j,JNI_FALSE);
					const EVString strXml = strXml_ch;
					__env->ReleaseStringChars(strXml_j, (const jchar *)strXml_ch);
					#endif
					EarthView::World::Spatial::Display::ISymbolListener *pObjectX = (EarthView::World::Spatial::Display::ISymbolListener*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JISymbolListenerProxy))
					{
						EarthView::World::Spatial::Display::ISymbol* __values1 = pObjectX->EarthView::World::Spatial::Display::ISymbolListener::customSymbolFromXml(strXml);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Display::ISymbol* __values1 = pObjectX->customSymbolFromXml(strXml);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Isymbollistener_register_1customSymbolFromXml_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JISymbolListenerProxy *pObjectX = (JISymbolListenerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_customSymbolFromXml_EVString_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"customSymbolFromXml_EVString_callback", "(Ljava/lang/String;)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_Isymbollistener_customSymbolFromXml_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring strXml_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* strXml_ch = (const ev_char*)__env->GetStringUTFChars(strXml_j,JNI_FALSE);
					const EVString strXml = strXml_ch;
					__env->ReleaseStringUTFChars(strXml_j, (const char *)strXml_ch);
					#else
					const ev_wchar* strXml_ch = (const ev_wchar*)__env->GetStringChars(strXml_j,JNI_FALSE);
					const EVString strXml = strXml_ch;
					__env->ReleaseStringChars(strXml_j, (const jchar *)strXml_ch);
					#endif
					EarthView::World::Spatial::Display::ISymbolListener *pObjectX = (EarthView::World::Spatial::Display::ISymbolListener*) pObjXXXX;
					EarthView::World::Spatial::Display::ISymbol* __values1 = pObjectX->EarthView::World::Spatial::Display::ISymbolListener::customSymbolFromXml(strXml);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_display_Isymbollistener_customSymbolToXml_1ISymbol(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong symbol_j)
				{
					EarthView::World::Spatial::Display::ISymbol *symbol = (EarthView::World::Spatial::Display::ISymbol*) symbol_j;
					const 					EarthView::World::Spatial::Display::ISymbolListener *pObjectX = (EarthView::World::Spatial::Display::ISymbolListener*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JISymbolListenerProxy))
					{
						EVString __values1 = pObjectX->EarthView::World::Spatial::Display::ISymbolListener::customSymbolToXml(symbol);
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
					else
					{
						EVString __values1 = pObjectX->customSymbolToXml(symbol);
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Isymbollistener_register_1customSymbolToXml_1ISymbol(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JISymbolListenerProxy *pObjectX = (JISymbolListenerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_customSymbolToXml_ISymbol_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"customSymbolToXml_ISymbol_callback", "(J)Ljava/lang/String;");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_display_Isymbollistener_customSymbolToXml_1ISymbol_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong symbol_j)
				{
					EarthView::World::Spatial::Display::ISymbol *symbol = (EarthView::World::Spatial::Display::ISymbol*) symbol_j;
					const 					EarthView::World::Spatial::Display::ISymbolListener *pObjectX = (EarthView::World::Spatial::Display::ISymbolListener*) pObjXXXX;
					EVString __values1 = pObjectX->EarthView::World::Spatial::Display::ISymbolListener::customSymbolToXml(symbol);
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
			}
		}
	}
}
