/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/modeldbimportlistener.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace ModelManager
			{
				class JCModelDBImportListenerProxy : public EarthView::World::Spatial3D::ModelManager::CModelDBImportListener
				{
				 private:
					EarthView::World::Core::ev_string m_beginImport_EVString_ev_uint32_ev_uint32_ev_bool_EVString_callback;
					EarthView::World::Core::ev_string m_endImport_EVString_ev_uint32_ev_uint32_ev_bool_EVString_callback;
				public:
					JCModelDBImportListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CModelDBImportListener(pList)
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
					void register_beginImport_EVString_ev_uint32_ev_uint32_ev_bool_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_beginImport_EVString_ev_uint32_ev_uint32_ev_bool_EVString_callback = __method;
					}
					void register_endImport_EVString_ev_uint32_ev_uint32_ev_bool_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_endImport_EVString_ev_uint32_ev_uint32_ev_bool_EVString_callback = __method;
					}
					virtual void beginImport(EVString name, ev_uint32 curNo, ev_uint32 num, ev_bool success, EVString msg)
					{
						if (this->_gRef != NULL && this->m_beginImport_EVString_ev_uint32_ev_uint32_ev_bool_EVString_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
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
							jlong curNo_j = (jlong) curNo;
							jlong num_j = (jlong) num;
							jboolean success_j = (jboolean) success;
							EarthView::World::Core::ev_wstring msg_wch = msg;
							jstring msg_j = __env->NewString((const jchar*)msg_wch.getString(), msg_wch.size());
							jmethodID __method = __gr->getMethod("beginImport_EVString_ev_uint32_ev_uint32_ev_bool_EVString_callback");
							__env->CallVoidMethod(__obj, __method , name_j, curNo_j, num_j, success_j, msg_j);
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
							return this->CModelDBImportListener::beginImport(name, curNo, num, success, msg);
						}
					}
					virtual void endImport(EVString name, ev_uint32 curNo, ev_uint32 num, ev_bool success, EVString msg)
					{
						if (this->_gRef != NULL && this->m_endImport_EVString_ev_uint32_ev_uint32_ev_bool_EVString_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
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
							jlong curNo_j = (jlong) curNo;
							jlong num_j = (jlong) num;
							jboolean success_j = (jboolean) success;
							EarthView::World::Core::ev_wstring msg_wch = msg;
							jstring msg_j = __env->NewString((const jchar*)msg_wch.getString(), msg_wch.size());
							jmethodID __method = __gr->getMethod("endImport_EVString_ev_uint32_ev_uint32_ev_bool_EVString_callback");
							__env->CallVoidMethod(__obj, __method , name_j, curNo_j, num_j, success_j, msg_j);
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
							return this->CModelDBImportListener::endImport(name, curNo, num, success, msg);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCModelDBImportListenerProxy);
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelDBImportListener_beginImport_1EVString_1ev_1uint32_1ev_1uint32_1ev_1bool_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jlong curNo_j, jlong num_j, jboolean success_j, jstring msg_j)
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
					ev_uint32 curNo = (ev_uint32) curNo_j;
					ev_uint32 num = (ev_uint32) num_j;
					ev_bool success = (ev_bool) success_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* msg_ch = (const ev_char*)__env->GetStringUTFChars(msg_j,JNI_FALSE);
					EVString msg = msg_ch;
					__env->ReleaseStringUTFChars(msg_j, (const char *)msg_ch);
					#else
					const ev_wchar* msg_ch = (const ev_wchar*)__env->GetStringChars(msg_j,JNI_FALSE);
					EVString msg = msg_ch;
					__env->ReleaseStringChars(msg_j, (const jchar *)msg_ch);
					#endif
					EarthView::World::Spatial3D::ModelManager::CModelDBImportListener *pObjectX = (EarthView::World::Spatial3D::ModelManager::CModelDBImportListener*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCModelDBImportListenerProxy))
					{
						pObjectX->EarthView::World::Spatial3D::ModelManager::CModelDBImportListener::beginImport(name, curNo, num, success, msg);
					}
					else
					{
						pObjectX->beginImport(name, curNo, num, success, msg);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelDBImportListener_register_1beginImport_1EVString_1ev_1uint32_1ev_1uint32_1ev_1bool_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCModelDBImportListenerProxy *pObjectX = (JCModelDBImportListenerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_beginImport_EVString_ev_uint32_ev_uint32_ev_bool_EVString_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"beginImport_EVString_ev_uint32_ev_uint32_ev_bool_EVString_callback", "(Ljava/lang/String;JJZLjava/lang/String;)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelDBImportListener_beginImport_1EVString_1ev_1uint32_1ev_1uint32_1ev_1bool_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jlong curNo_j, jlong num_j, jboolean success_j, jstring msg_j)
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
					ev_uint32 curNo = (ev_uint32) curNo_j;
					ev_uint32 num = (ev_uint32) num_j;
					ev_bool success = (ev_bool) success_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* msg_ch = (const ev_char*)__env->GetStringUTFChars(msg_j,JNI_FALSE);
					EVString msg = msg_ch;
					__env->ReleaseStringUTFChars(msg_j, (const char *)msg_ch);
					#else
					const ev_wchar* msg_ch = (const ev_wchar*)__env->GetStringChars(msg_j,JNI_FALSE);
					EVString msg = msg_ch;
					__env->ReleaseStringChars(msg_j, (const jchar *)msg_ch);
					#endif
					EarthView::World::Spatial3D::ModelManager::CModelDBImportListener *pObjectX = (EarthView::World::Spatial3D::ModelManager::CModelDBImportListener*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::ModelManager::CModelDBImportListener::beginImport(name, curNo, num, success, msg);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelDBImportListener_endImport_1EVString_1ev_1uint32_1ev_1uint32_1ev_1bool_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jlong curNo_j, jlong num_j, jboolean success_j, jstring msg_j)
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
					ev_uint32 curNo = (ev_uint32) curNo_j;
					ev_uint32 num = (ev_uint32) num_j;
					ev_bool success = (ev_bool) success_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* msg_ch = (const ev_char*)__env->GetStringUTFChars(msg_j,JNI_FALSE);
					EVString msg = msg_ch;
					__env->ReleaseStringUTFChars(msg_j, (const char *)msg_ch);
					#else
					const ev_wchar* msg_ch = (const ev_wchar*)__env->GetStringChars(msg_j,JNI_FALSE);
					EVString msg = msg_ch;
					__env->ReleaseStringChars(msg_j, (const jchar *)msg_ch);
					#endif
					EarthView::World::Spatial3D::ModelManager::CModelDBImportListener *pObjectX = (EarthView::World::Spatial3D::ModelManager::CModelDBImportListener*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCModelDBImportListenerProxy))
					{
						pObjectX->EarthView::World::Spatial3D::ModelManager::CModelDBImportListener::endImport(name, curNo, num, success, msg);
					}
					else
					{
						pObjectX->endImport(name, curNo, num, success, msg);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelDBImportListener_register_1endImport_1EVString_1ev_1uint32_1ev_1uint32_1ev_1bool_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCModelDBImportListenerProxy *pObjectX = (JCModelDBImportListenerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_endImport_EVString_ev_uint32_ev_uint32_ev_bool_EVString_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"endImport_EVString_ev_uint32_ev_uint32_ev_bool_EVString_callback", "(Ljava/lang/String;JJZLjava/lang/String;)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelDBImportListener_endImport_1EVString_1ev_1uint32_1ev_1uint32_1ev_1bool_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jlong curNo_j, jlong num_j, jboolean success_j, jstring msg_j)
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
					ev_uint32 curNo = (ev_uint32) curNo_j;
					ev_uint32 num = (ev_uint32) num_j;
					ev_bool success = (ev_bool) success_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* msg_ch = (const ev_char*)__env->GetStringUTFChars(msg_j,JNI_FALSE);
					EVString msg = msg_ch;
					__env->ReleaseStringUTFChars(msg_j, (const char *)msg_ch);
					#else
					const ev_wchar* msg_ch = (const ev_wchar*)__env->GetStringChars(msg_j,JNI_FALSE);
					EVString msg = msg_ch;
					__env->ReleaseStringChars(msg_j, (const jchar *)msg_ch);
					#endif
					EarthView::World::Spatial3D::ModelManager::CModelDBImportListener *pObjectX = (EarthView::World::Spatial3D::ModelManager::CModelDBImportListener*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::ModelManager::CModelDBImportListener::endImport(name, curNo, num, success, msg);
				}
			}
		}
	}
}
