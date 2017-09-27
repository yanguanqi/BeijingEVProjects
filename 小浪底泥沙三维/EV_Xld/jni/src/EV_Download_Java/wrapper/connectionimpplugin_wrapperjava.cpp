/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "download/connectionimpplugin.h"
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
			namespace Download
			{
				class JConnectionImpPluginProxy : public EarthView::World::Spatial::Download::ConnectionImpPlugin
				{
				 private:
					EarthView::World::Core::ev_string m_createConnectionImp_ev_int32_callback;
					EarthView::World::Core::ev_string m_useMetadataServiceConnectState_void_callback;
					EarthView::World::Core::ev_string m_setMetadataServiceConnectState_ev_bool_callback;
					EarthView::World::Core::ev_string m_getMetadataServiceConnectState_void_callback;
					EarthView::World::Core::ev_string m_getName_void_callback;
					EarthView::World::Core::ev_string m_install_void_callback;
					EarthView::World::Core::ev_string m_initialise_void_callback;
					EarthView::World::Core::ev_string m_shutdown_void_callback;
					EarthView::World::Core::ev_string m_uninstall_void_callback;
				public:
					JConnectionImpPluginProxy(EarthView::World::Core::CNameValuePairList *pList) : ConnectionImpPlugin(pList)
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
					void register_createConnectionImp_ev_int32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_createConnectionImp_ev_int32_callback = __method;
					}
					void register_useMetadataServiceConnectState_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_useMetadataServiceConnectState_void_callback = __method;
					}
					void register_setMetadataServiceConnectState_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setMetadataServiceConnectState_ev_bool_callback = __method;
					}
					void register_getMetadataServiceConnectState_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getMetadataServiceConnectState_void_callback = __method;
					}
					void register_getName_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getName_void_callback = __method;
					}
					void register_install_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_install_void_callback = __method;
					}
					void register_initialise_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_initialise_void_callback = __method;
					}
					void register_shutdown_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_shutdown_void_callback = __method;
					}
					void register_uninstall_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_uninstall_void_callback = __method;
					}
					virtual void install()
					{
						if (this->_gRef != NULL && this->m_install_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("install_void_callback");
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
							return this->ConnectionImpPlugin::install();
						}
					}
					virtual void initialise()
					{
						if (this->_gRef != NULL && this->m_initialise_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("initialise_void_callback");
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
							return this->ConnectionImpPlugin::initialise();
						}
					}
					virtual void shutdown()
					{
						if (this->_gRef != NULL && this->m_shutdown_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("shutdown_void_callback");
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
							return this->ConnectionImpPlugin::shutdown();
						}
					}
					virtual void uninstall()
					{
						if (this->_gRef != NULL && this->m_uninstall_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("uninstall_void_callback");
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
							return this->ConnectionImpPlugin::uninstall();
						}
					}
					virtual EarthView::World::Spatial::Download::ConnectionImp* createConnectionImp(ev_int32 type)
					{
						if (this->_gRef != NULL && this->m_createConnectionImp_ev_int32_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
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
							jmethodID __method = __gr->getMethod("createConnectionImp_ev_int32_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , type_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::Download::ConnectionImp *__values1 = (EarthView::World::Spatial::Download::ConnectionImp*) __values1_j;
							return __values1;
						}
						else
						{
							return this->ConnectionImpPlugin::createConnectionImp(type);
						}
					}
					virtual ev_bool useMetadataServiceConnectState()
					{
						if (this->_gRef != NULL && this->m_useMetadataServiceConnectState_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("useMetadataServiceConnectState_void_callback");
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
							return this->ConnectionImpPlugin::useMetadataServiceConnectState();
						}
					}
					virtual void setMetadataServiceConnectState(ev_bool connectable)
					{
						if (this->_gRef != NULL && this->m_setMetadataServiceConnectState_ev_bool_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jboolean connectable_j = (jboolean) connectable;
							jmethodID __method = __gr->getMethod("setMetadataServiceConnectState_ev_bool_callback");
							__env->CallVoidMethod(__obj, __method , connectable_j);
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
							return this->ConnectionImpPlugin::setMetadataServiceConnectState(connectable);
						}
					}
					virtual ev_bool getMetadataServiceConnectState()
					{
						if (this->_gRef != NULL && this->m_getMetadataServiceConnectState_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getMetadataServiceConnectState_void_callback");
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
							return this->ConnectionImpPlugin::getMetadataServiceConnectState();
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
							return this->ConnectionImpPlugin::getName();
						}
					}
				};
				REGISTER_FACTORY_CLASS(JConnectionImpPluginProxy);
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_download_ConnectionImpPlugin_getHost_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Download::ConnectionImpPlugin *pObjectX = (EarthView::World::Spatial::Download::ConnectionImpPlugin*) pObjXXXX;
					const EVString& __values1 = pObjectX->getHost();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_ConnectionImpPlugin_setPluginPath_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring pluginPaht_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* pluginPaht_ch = (const ev_char*)__env->GetStringUTFChars(pluginPaht_j,JNI_FALSE);
					const EVString pluginPaht = pluginPaht_ch;
					__env->ReleaseStringUTFChars(pluginPaht_j, (const char *)pluginPaht_ch);
					#else
					const ev_wchar* pluginPaht_ch = (const ev_wchar*)__env->GetStringChars(pluginPaht_j,JNI_FALSE);
					const EVString pluginPaht = pluginPaht_ch;
					__env->ReleaseStringChars(pluginPaht_j, (const jchar *)pluginPaht_ch);
					#endif
					EarthView::World::Spatial::Download::ConnectionImpPlugin *pObjectX = (EarthView::World::Spatial::Download::ConnectionImpPlugin*) pObjXXXX;
					pObjectX->setPluginPath(pluginPaht);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_download_ConnectionImpPlugin_getPluginPath_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Download::ConnectionImpPlugin *pObjectX = (EarthView::World::Spatial::Download::ConnectionImpPlugin*) pObjXXXX;
					const EVString& __values1 = pObjectX->getPluginPath();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_ConnectionImpPlugin_install_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Download::ConnectionImpPlugin *pObjectX = (EarthView::World::Spatial::Download::ConnectionImpPlugin*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JConnectionImpPluginProxy))
					{
						pObjectX->EarthView::World::Spatial::Download::ConnectionImpPlugin::install();
					}
					else
					{
						pObjectX->install();
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_ConnectionImpPlugin_register_1install_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JConnectionImpPluginProxy *pObjectX = (JConnectionImpPluginProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_install_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"install_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_ConnectionImpPlugin_install_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Download::ConnectionImpPlugin *pObjectX = (EarthView::World::Spatial::Download::ConnectionImpPlugin*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Download::ConnectionImpPlugin::install();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_ConnectionImpPlugin_initialise_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Download::ConnectionImpPlugin *pObjectX = (EarthView::World::Spatial::Download::ConnectionImpPlugin*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JConnectionImpPluginProxy))
					{
						pObjectX->EarthView::World::Spatial::Download::ConnectionImpPlugin::initialise();
					}
					else
					{
						pObjectX->initialise();
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_ConnectionImpPlugin_register_1initialise_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JConnectionImpPluginProxy *pObjectX = (JConnectionImpPluginProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_initialise_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"initialise_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_ConnectionImpPlugin_initialise_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Download::ConnectionImpPlugin *pObjectX = (EarthView::World::Spatial::Download::ConnectionImpPlugin*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Download::ConnectionImpPlugin::initialise();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_ConnectionImpPlugin_shutdown_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Download::ConnectionImpPlugin *pObjectX = (EarthView::World::Spatial::Download::ConnectionImpPlugin*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JConnectionImpPluginProxy))
					{
						pObjectX->EarthView::World::Spatial::Download::ConnectionImpPlugin::shutdown();
					}
					else
					{
						pObjectX->shutdown();
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_ConnectionImpPlugin_register_1shutdown_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JConnectionImpPluginProxy *pObjectX = (JConnectionImpPluginProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_shutdown_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"shutdown_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_ConnectionImpPlugin_shutdown_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Download::ConnectionImpPlugin *pObjectX = (EarthView::World::Spatial::Download::ConnectionImpPlugin*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Download::ConnectionImpPlugin::shutdown();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_ConnectionImpPlugin_uninstall_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Download::ConnectionImpPlugin *pObjectX = (EarthView::World::Spatial::Download::ConnectionImpPlugin*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JConnectionImpPluginProxy))
					{
						pObjectX->EarthView::World::Spatial::Download::ConnectionImpPlugin::uninstall();
					}
					else
					{
						pObjectX->uninstall();
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_ConnectionImpPlugin_register_1uninstall_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JConnectionImpPluginProxy *pObjectX = (JConnectionImpPluginProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_uninstall_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"uninstall_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_ConnectionImpPlugin_uninstall_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Download::ConnectionImpPlugin *pObjectX = (EarthView::World::Spatial::Download::ConnectionImpPlugin*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Download::ConnectionImpPlugin::uninstall();
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_download_ConnectionImpPlugin_connectionImpCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Download::ConnectionImpPlugin *pObjectX = (EarthView::World::Spatial::Download::ConnectionImpPlugin*) pObjXXXX;
					ev_int32 __values1 = pObjectX->connectionImpCount();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_download_ConnectionImpPlugin_createConnectionImp_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint type_j)
				{
					ev_int32 type = (ev_int32) type_j;
					EarthView::World::Spatial::Download::ConnectionImpPlugin *pObjectX = (EarthView::World::Spatial::Download::ConnectionImpPlugin*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JConnectionImpPluginProxy))
					{
						EarthView::World::Spatial::Download::ConnectionImp* __values1 = pObjectX->EarthView::World::Spatial::Download::ConnectionImpPlugin::createConnectionImp(type);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Download::ConnectionImp* __values1 = pObjectX->createConnectionImp(type);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_ConnectionImpPlugin_register_1createConnectionImp_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JConnectionImpPluginProxy *pObjectX = (JConnectionImpPluginProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_createConnectionImp_ev_int32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"createConnectionImp_ev_int32_callback", "(I)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_download_ConnectionImpPlugin_createConnectionImp_1ev_1int32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint type_j)
				{
					ev_int32 type = (ev_int32) type_j;
					EarthView::World::Spatial::Download::ConnectionImpPlugin *pObjectX = (EarthView::World::Spatial::Download::ConnectionImpPlugin*) pObjXXXX;
					EarthView::World::Spatial::Download::ConnectionImp* __values1 = pObjectX->EarthView::World::Spatial::Download::ConnectionImpPlugin::createConnectionImp(type);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_download_ConnectionImpPlugin_useMetadataServiceConnectState_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Download::ConnectionImpPlugin *pObjectX = (EarthView::World::Spatial::Download::ConnectionImpPlugin*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JConnectionImpPluginProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::Download::ConnectionImpPlugin::useMetadataServiceConnectState();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->useMetadataServiceConnectState();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_ConnectionImpPlugin_register_1useMetadataServiceConnectState_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JConnectionImpPluginProxy *pObjectX = (JConnectionImpPluginProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_useMetadataServiceConnectState_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"useMetadataServiceConnectState_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_download_ConnectionImpPlugin_useMetadataServiceConnectState_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Download::ConnectionImpPlugin *pObjectX = (EarthView::World::Spatial::Download::ConnectionImpPlugin*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::Download::ConnectionImpPlugin::useMetadataServiceConnectState();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_ConnectionImpPlugin_setMetadataServiceConnectState_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean connectable_j)
				{
					ev_bool connectable = (ev_bool) connectable_j;
					EarthView::World::Spatial::Download::ConnectionImpPlugin *pObjectX = (EarthView::World::Spatial::Download::ConnectionImpPlugin*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JConnectionImpPluginProxy))
					{
						pObjectX->EarthView::World::Spatial::Download::ConnectionImpPlugin::setMetadataServiceConnectState(connectable);
					}
					else
					{
						pObjectX->setMetadataServiceConnectState(connectable);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_ConnectionImpPlugin_register_1setMetadataServiceConnectState_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JConnectionImpPluginProxy *pObjectX = (JConnectionImpPluginProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setMetadataServiceConnectState_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setMetadataServiceConnectState_ev_bool_callback", "(Z)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_ConnectionImpPlugin_setMetadataServiceConnectState_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean connectable_j)
				{
					ev_bool connectable = (ev_bool) connectable_j;
					EarthView::World::Spatial::Download::ConnectionImpPlugin *pObjectX = (EarthView::World::Spatial::Download::ConnectionImpPlugin*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Download::ConnectionImpPlugin::setMetadataServiceConnectState(connectable);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_download_ConnectionImpPlugin_getMetadataServiceConnectState_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Download::ConnectionImpPlugin *pObjectX = (EarthView::World::Spatial::Download::ConnectionImpPlugin*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JConnectionImpPluginProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::Download::ConnectionImpPlugin::getMetadataServiceConnectState();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->getMetadataServiceConnectState();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_ConnectionImpPlugin_register_1getMetadataServiceConnectState_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JConnectionImpPluginProxy *pObjectX = (JConnectionImpPluginProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getMetadataServiceConnectState_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getMetadataServiceConnectState_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_download_ConnectionImpPlugin_getMetadataServiceConnectState_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Download::ConnectionImpPlugin *pObjectX = (EarthView::World::Spatial::Download::ConnectionImpPlugin*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::Download::ConnectionImpPlugin::getMetadataServiceConnectState();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_ConnectionImpPlugin_releaseConnectionImp_1ConnectionImp(JNIEnv *__env , jclass __clazz, jlong pConnectionImp_j)
				{
					EarthView::World::Spatial::Download::ConnectionImp *pConnectionImp = (EarthView::World::Spatial::Download::ConnectionImp*) pConnectionImp_j;
					EarthView::World::Spatial::Download::ConnectionImpPlugin::releaseConnectionImp(pConnectionImp);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_ConnectionImpPlugin_register_1getName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JConnectionImpPluginProxy *pObjectX = (JConnectionImpPluginProxy*) pObjXXXX;
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
				class JConnectionImpProxy : public EarthView::World::Spatial::Download::ConnectionImp
				{
				 private:
					EarthView::World::Core::ev_string m_openConnection_void_callback;
					EarthView::World::Core::ev_string m_closeConnection_void_callback;
					EarthView::World::Core::ev_string m_setConnectTimeout_ev_int32_callback;
				public:
					JConnectionImpProxy(EarthView::World::Core::CNameValuePairList *pList) : ConnectionImp(pList)
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
					void register_openConnection_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_openConnection_void_callback = __method;
					}
					void register_closeConnection_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_closeConnection_void_callback = __method;
					}
					void register_setConnectTimeout_ev_int32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setConnectTimeout_ev_int32_callback = __method;
					}
					virtual ev_bool openConnection()
					{
						if (this->_gRef != NULL && this->m_openConnection_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("openConnection_void_callback");
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
							return this->ConnectionImp::openConnection();
						}
					}
					virtual ev_bool closeConnection()
					{
						if (this->_gRef != NULL && this->m_closeConnection_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("closeConnection_void_callback");
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
							return this->ConnectionImp::closeConnection();
						}
					}
					virtual void setConnectTimeout(ev_int32 timeout)
					{
						if (this->_gRef != NULL && this->m_setConnectTimeout_ev_int32_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jint timeout_j = (jint) timeout;
							jmethodID __method = __gr->getMethod("setConnectTimeout_ev_int32_callback");
							__env->CallVoidMethod(__obj, __method , timeout_j);
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
							return this->ConnectionImp::setConnectTimeout(timeout);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JConnectionImpProxy);
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_ConnectionImp_setWebServiceConnection_1CWebServiceConnection(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pWebServiceConnection_j)
				{
					EarthView::World::Spatial::Download::CWebServiceConnection *pWebServiceConnection = (EarthView::World::Spatial::Download::CWebServiceConnection*) pWebServiceConnection_j;
					EarthView::World::Spatial::Download::ConnectionImp *pObjectX = (EarthView::World::Spatial::Download::ConnectionImp*) pObjXXXX;
					pObjectX->setWebServiceConnection(pWebServiceConnection);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_download_ConnectionImp_getType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Download::ConnectionImp *pObjectX = (EarthView::World::Spatial::Download::ConnectionImp*) pObjXXXX;
					ev_int32 __values1 = pObjectX->getType();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_download_ConnectionImp_openConnection_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Download::ConnectionImp *pObjectX = (EarthView::World::Spatial::Download::ConnectionImp*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JConnectionImpProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::Download::ConnectionImp::openConnection();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->openConnection();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_ConnectionImp_register_1openConnection_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JConnectionImpProxy *pObjectX = (JConnectionImpProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_openConnection_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"openConnection_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_download_ConnectionImp_openConnection_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Download::ConnectionImp *pObjectX = (EarthView::World::Spatial::Download::ConnectionImp*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::Download::ConnectionImp::openConnection();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_download_ConnectionImp_closeConnection_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Download::ConnectionImp *pObjectX = (EarthView::World::Spatial::Download::ConnectionImp*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JConnectionImpProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::Download::ConnectionImp::closeConnection();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->closeConnection();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_ConnectionImp_register_1closeConnection_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JConnectionImpProxy *pObjectX = (JConnectionImpProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_closeConnection_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"closeConnection_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_download_ConnectionImp_closeConnection_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Download::ConnectionImp *pObjectX = (EarthView::World::Spatial::Download::ConnectionImp*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::Download::ConnectionImp::closeConnection();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_ConnectionImp_setConnectTimeout_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint timeout_j)
				{
					ev_int32 timeout = (ev_int32) timeout_j;
					EarthView::World::Spatial::Download::ConnectionImp *pObjectX = (EarthView::World::Spatial::Download::ConnectionImp*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JConnectionImpProxy))
					{
						pObjectX->EarthView::World::Spatial::Download::ConnectionImp::setConnectTimeout(timeout);
					}
					else
					{
						pObjectX->setConnectTimeout(timeout);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_ConnectionImp_register_1setConnectTimeout_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JConnectionImpProxy *pObjectX = (JConnectionImpProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setConnectTimeout_ev_int32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setConnectTimeout_ev_int32_callback", "(I)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_ConnectionImp_setConnectTimeout_1ev_1int32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint timeout_j)
				{
					ev_int32 timeout = (ev_int32) timeout_j;
					EarthView::World::Spatial::Download::ConnectionImp *pObjectX = (EarthView::World::Spatial::Download::ConnectionImp*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Download::ConnectionImp::setConnectTimeout(timeout);
				}
			}
		}
	}
}
