/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "symbol/symbolfactory.h"
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
				class JCSymbolFactoryProxy : public EarthView::World::Spatial::Display::CSymbolFactory
				{
				 private:
					EarthView::World::Core::ev_string m_createSymbolFromStream_CDataStream_callback;
					EarthView::World::Core::ev_string m_isSymbolHeader_EVString_callback;
					EarthView::World::Core::ev_string m_createSymbolFromXmlElement_CXmlElement_callback;
					EarthView::World::Core::ev_string m_createSymbolFromSLD_EVString_callback;
					EarthView::World::Core::ev_string m_destroySymbol_ISymbol_callback;
					EarthView::World::Core::ev_string m_destroySymbols_void_callback;
				public:
					JCSymbolFactoryProxy(EarthView::World::Core::CNameValuePairList *pList) : CSymbolFactory(pList)
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
					void register_createSymbolFromStream_CDataStream_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_createSymbolFromStream_CDataStream_callback = __method;
					}
					void register_isSymbolHeader_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_isSymbolHeader_EVString_callback = __method;
					}
					void register_createSymbolFromXmlElement_CXmlElement_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_createSymbolFromXmlElement_CXmlElement_callback = __method;
					}
					void register_createSymbolFromSLD_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_createSymbolFromSLD_EVString_callback = __method;
					}
					void register_destroySymbol_ISymbol_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_destroySymbol_ISymbol_callback = __method;
					}
					void register_destroySymbols_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_destroySymbols_void_callback = __method;
					}
					virtual EarthView::World::Spatial::Display::ISymbol* createSymbolFromStream(EarthView::World::Core::CDataStream& stream)
					{
						if (this->_gRef != NULL && this->m_createSymbolFromStream_CDataStream_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
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
							jmethodID __method = __gr->getMethod("createSymbolFromStream_CDataStream_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , stream_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::Display::ISymbol *__values1 = (EarthView::World::Spatial::Display::ISymbol*) __values1_j;
							if(__values1 != NULL) {
								((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(false);
							}
							return __values1;
						}
						else
						{
							return this->CSymbolFactory::createSymbolFromStream(stream);
						}
					}
					virtual ev_bool isSymbolHeader(const EVString& xmlNodeName)
					{
						if (this->_gRef != NULL && this->m_isSymbolHeader_EVString_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							EarthView::World::Core::ev_wstring xmlNodeName_wch = xmlNodeName;
							jstring xmlNodeName_j = __env->NewString((const jchar*)xmlNodeName_wch.getString(), xmlNodeName_wch.size());
							jmethodID __method = __gr->getMethod("isSymbolHeader_EVString_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , xmlNodeName_j);
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
							return this->CSymbolFactory::isSymbolHeader(xmlNodeName);
						}
					}
					virtual EarthView::World::Spatial::Display::ISymbol* createSymbolFromXmlElement(EarthView::World::Core::CXmlElement& element)
					{
						if (this->_gRef != NULL && this->m_createSymbolFromXmlElement_CXmlElement_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
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
							jmethodID __method = __gr->getMethod("createSymbolFromXmlElement_CXmlElement_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , element_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::Display::ISymbol *__values1 = (EarthView::World::Spatial::Display::ISymbol*) __values1_j;
							if(__values1 != NULL) {
								((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(false);
							}
							return __values1;
						}
						else
						{
							return this->CSymbolFactory::createSymbolFromXmlElement(element);
						}
					}
					virtual EarthView::World::Spatial::Display::ISymbol* createSymbolFromSLD(const EVString& sldText)
					{
						if (this->_gRef != NULL && this->m_createSymbolFromSLD_EVString_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							EarthView::World::Core::ev_wstring sldText_wch = sldText;
							jstring sldText_j = __env->NewString((const jchar*)sldText_wch.getString(), sldText_wch.size());
							jmethodID __method = __gr->getMethod("createSymbolFromSLD_EVString_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , sldText_j);
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
							return this->CSymbolFactory::createSymbolFromSLD(sldText);
						}
					}
					virtual void destroySymbol(EarthView::World::Spatial::Display::ISymbol* pSymbol)
					{
						if (this->_gRef != NULL && this->m_destroySymbol_ISymbol_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
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
							jmethodID __method = __gr->getMethod("destroySymbol_ISymbol_callback");
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
							return this->CSymbolFactory::destroySymbol(pSymbol);
						}
					}
					virtual void destroySymbols()
					{
						if (this->_gRef != NULL && this->m_destroySymbols_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("destroySymbols_void_callback");
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
							return this->CSymbolFactory::destroySymbols();
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCSymbolFactoryProxy);
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_SymbolFactory_getInstance_1void(JNIEnv *__env , jclass __clazz)
				{
					EarthView::World::Spatial::Display::CSymbolFactory* __values1 = EarthView::World::Spatial::Display::CSymbolFactory::getInstance();
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_SymbolFactory_createSymbolFromStream_1CDataStream(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j)
				{
					EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
					EarthView::World::Spatial::Display::CSymbolFactory *pObjectX = (EarthView::World::Spatial::Display::CSymbolFactory*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCSymbolFactoryProxy))
					{
						EarthView::World::Spatial::Display::ISymbol* __values1 = pObjectX->EarthView::World::Spatial::Display::CSymbolFactory::createSymbolFromStream(stream);
						if(__values1 != NULL) {							((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
						}						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Display::ISymbol* __values1 = pObjectX->createSymbolFromStream(stream);
						if(__values1 != NULL) {							((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
						}						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_SymbolFactory_register_1createSymbolFromStream_1CDataStream(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCSymbolFactoryProxy *pObjectX = (JCSymbolFactoryProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_createSymbolFromStream_CDataStream_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"createSymbolFromStream_CDataStream_callback", "(J)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_SymbolFactory_createSymbolFromStream_1CDataStream_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j)
				{
					EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
					EarthView::World::Spatial::Display::CSymbolFactory *pObjectX = (EarthView::World::Spatial::Display::CSymbolFactory*) pObjXXXX;
					EarthView::World::Spatial::Display::ISymbol* __values1 = pObjectX->EarthView::World::Spatial::Display::CSymbolFactory::createSymbolFromStream(stream);
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_display_SymbolFactory_isSymbolHeader_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring xmlNodeName_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* xmlNodeName_ch = (const ev_char*)__env->GetStringUTFChars(xmlNodeName_j,JNI_FALSE);
					const EVString xmlNodeName = xmlNodeName_ch;
					__env->ReleaseStringUTFChars(xmlNodeName_j, (const char *)xmlNodeName_ch);
					#else
					const ev_wchar* xmlNodeName_ch = (const ev_wchar*)__env->GetStringChars(xmlNodeName_j,JNI_FALSE);
					const EVString xmlNodeName = xmlNodeName_ch;
					__env->ReleaseStringChars(xmlNodeName_j, (const jchar *)xmlNodeName_ch);
					#endif
					EarthView::World::Spatial::Display::CSymbolFactory *pObjectX = (EarthView::World::Spatial::Display::CSymbolFactory*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCSymbolFactoryProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::Display::CSymbolFactory::isSymbolHeader(xmlNodeName);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->isSymbolHeader(xmlNodeName);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_SymbolFactory_register_1isSymbolHeader_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCSymbolFactoryProxy *pObjectX = (JCSymbolFactoryProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_isSymbolHeader_EVString_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"isSymbolHeader_EVString_callback", "(Ljava/lang/String;)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_display_SymbolFactory_isSymbolHeader_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring xmlNodeName_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* xmlNodeName_ch = (const ev_char*)__env->GetStringUTFChars(xmlNodeName_j,JNI_FALSE);
					const EVString xmlNodeName = xmlNodeName_ch;
					__env->ReleaseStringUTFChars(xmlNodeName_j, (const char *)xmlNodeName_ch);
					#else
					const ev_wchar* xmlNodeName_ch = (const ev_wchar*)__env->GetStringChars(xmlNodeName_j,JNI_FALSE);
					const EVString xmlNodeName = xmlNodeName_ch;
					__env->ReleaseStringChars(xmlNodeName_j, (const jchar *)xmlNodeName_ch);
					#endif
					EarthView::World::Spatial::Display::CSymbolFactory *pObjectX = (EarthView::World::Spatial::Display::CSymbolFactory*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::Display::CSymbolFactory::isSymbolHeader(xmlNodeName);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_SymbolFactory_createSymbolFromXmlElement_1CXmlElement(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong element_j)
				{
					EarthView::World::Core::CXmlElement &element = *(EarthView::World::Core::CXmlElement*) element_j;
					EarthView::World::Spatial::Display::CSymbolFactory *pObjectX = (EarthView::World::Spatial::Display::CSymbolFactory*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCSymbolFactoryProxy))
					{
						EarthView::World::Spatial::Display::ISymbol* __values1 = pObjectX->EarthView::World::Spatial::Display::CSymbolFactory::createSymbolFromXmlElement(element);
						if(__values1 != NULL) {							((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
						}						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Display::ISymbol* __values1 = pObjectX->createSymbolFromXmlElement(element);
						if(__values1 != NULL) {							((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
						}						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_SymbolFactory_register_1createSymbolFromXmlElement_1CXmlElement(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCSymbolFactoryProxy *pObjectX = (JCSymbolFactoryProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_createSymbolFromXmlElement_CXmlElement_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"createSymbolFromXmlElement_CXmlElement_callback", "(J)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_SymbolFactory_createSymbolFromXmlElement_1CXmlElement_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong element_j)
				{
					EarthView::World::Core::CXmlElement &element = *(EarthView::World::Core::CXmlElement*) element_j;
					EarthView::World::Spatial::Display::CSymbolFactory *pObjectX = (EarthView::World::Spatial::Display::CSymbolFactory*) pObjXXXX;
					EarthView::World::Spatial::Display::ISymbol* __values1 = pObjectX->EarthView::World::Spatial::Display::CSymbolFactory::createSymbolFromXmlElement(element);
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_SymbolFactory_createSymbolFromSLD_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring sldText_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* sldText_ch = (const ev_char*)__env->GetStringUTFChars(sldText_j,JNI_FALSE);
					const EVString sldText = sldText_ch;
					__env->ReleaseStringUTFChars(sldText_j, (const char *)sldText_ch);
					#else
					const ev_wchar* sldText_ch = (const ev_wchar*)__env->GetStringChars(sldText_j,JNI_FALSE);
					const EVString sldText = sldText_ch;
					__env->ReleaseStringChars(sldText_j, (const jchar *)sldText_ch);
					#endif
					EarthView::World::Spatial::Display::CSymbolFactory *pObjectX = (EarthView::World::Spatial::Display::CSymbolFactory*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCSymbolFactoryProxy))
					{
						EarthView::World::Spatial::Display::ISymbol* __values1 = pObjectX->EarthView::World::Spatial::Display::CSymbolFactory::createSymbolFromSLD(sldText);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Display::ISymbol* __values1 = pObjectX->createSymbolFromSLD(sldText);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_SymbolFactory_register_1createSymbolFromSLD_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCSymbolFactoryProxy *pObjectX = (JCSymbolFactoryProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_createSymbolFromSLD_EVString_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"createSymbolFromSLD_EVString_callback", "(Ljava/lang/String;)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_SymbolFactory_createSymbolFromSLD_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring sldText_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* sldText_ch = (const ev_char*)__env->GetStringUTFChars(sldText_j,JNI_FALSE);
					const EVString sldText = sldText_ch;
					__env->ReleaseStringUTFChars(sldText_j, (const char *)sldText_ch);
					#else
					const ev_wchar* sldText_ch = (const ev_wchar*)__env->GetStringChars(sldText_j,JNI_FALSE);
					const EVString sldText = sldText_ch;
					__env->ReleaseStringChars(sldText_j, (const jchar *)sldText_ch);
					#endif
					EarthView::World::Spatial::Display::CSymbolFactory *pObjectX = (EarthView::World::Spatial::Display::CSymbolFactory*) pObjXXXX;
					EarthView::World::Spatial::Display::ISymbol* __values1 = pObjectX->EarthView::World::Spatial::Display::CSymbolFactory::createSymbolFromSLD(sldText);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_SymbolFactory_destroySymbol_1ISymbol(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pSymbol_j)
				{
					EarthView::World::Spatial::Display::ISymbol *pSymbol = (EarthView::World::Spatial::Display::ISymbol*) pSymbol_j;
					EarthView::World::Spatial::Display::CSymbolFactory *pObjectX = (EarthView::World::Spatial::Display::CSymbolFactory*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCSymbolFactoryProxy))
					{
						pObjectX->EarthView::World::Spatial::Display::CSymbolFactory::destroySymbol(pSymbol);
					}
					else
					{
						pObjectX->destroySymbol(pSymbol);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_SymbolFactory_register_1destroySymbol_1ISymbol(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCSymbolFactoryProxy *pObjectX = (JCSymbolFactoryProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_destroySymbol_ISymbol_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"destroySymbol_ISymbol_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_SymbolFactory_destroySymbol_1ISymbol_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pSymbol_j)
				{
					EarthView::World::Spatial::Display::ISymbol *pSymbol = (EarthView::World::Spatial::Display::ISymbol*) pSymbol_j;
					EarthView::World::Spatial::Display::CSymbolFactory *pObjectX = (EarthView::World::Spatial::Display::CSymbolFactory*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Display::CSymbolFactory::destroySymbol(pSymbol);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_SymbolFactory_register_1destroySymbols_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCSymbolFactoryProxy *pObjectX = (JCSymbolFactoryProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_destroySymbols_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"destroySymbols_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
			}
		}
	}
}
