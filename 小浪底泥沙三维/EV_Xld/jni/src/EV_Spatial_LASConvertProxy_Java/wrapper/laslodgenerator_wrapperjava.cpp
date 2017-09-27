/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatiallasproxy/laslodgenerator.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace SpatialLASConvertProxy
		{
			class JCLasLODGenerateListenerProxy : public EarthView::World::SpatialLASConvertProxy::CLasLODGenerateListener
			{
			 private:
				EarthView::World::Core::ev_string m_processMsg_EVString_callback;
				EarthView::World::Core::ev_string m_paused_void_callback;
				EarthView::World::Core::ev_string m_finished_void_callback;
				EarthView::World::Core::ev_string m_processProgress_ev_uint32_ev_uint32_callback;
			public:
				JCLasLODGenerateListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CLasLODGenerateListener(pList)
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
				void register_processMsg_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_processMsg_EVString_callback = __method;
				}
				void register_paused_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_paused_void_callback = __method;
				}
				void register_finished_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_finished_void_callback = __method;
				}
				void register_processProgress_ev_uint32_ev_uint32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_processProgress_ev_uint32_ev_uint32_callback = __method;
				}
				virtual void processMsg(EVString msg)
				{
					if (this->_gRef != NULL && this->m_processMsg_EVString_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						EarthView::World::Core::ev_wstring msg_wch = msg;
						jstring msg_j = __env->NewString((const jchar*)msg_wch.getString(), msg_wch.size());
						jmethodID __method = __gr->getMethod("processMsg_EVString_callback");
						__env->CallVoidMethod(__obj, __method , msg_j);
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
						return this->CLasLODGenerateListener::processMsg(msg);
					}
				}
				virtual void paused()
				{
					if (this->_gRef != NULL && this->m_paused_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("paused_void_callback");
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
						return this->CLasLODGenerateListener::paused();
					}
				}
				virtual void finished()
				{
					if (this->_gRef != NULL && this->m_finished_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("finished_void_callback");
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
						return this->CLasLODGenerateListener::finished();
					}
				}
				virtual void processProgress(ev_uint32 total, ev_uint32 current)
				{
					if (this->_gRef != NULL && this->m_processProgress_ev_uint32_ev_uint32_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong total_j = (jlong) total;
						jlong current_j = (jlong) current;
						jmethodID __method = __gr->getMethod("processProgress_ev_uint32_ev_uint32_callback");
						__env->CallVoidMethod(__obj, __method , total_j, current_j);
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
						return this->CLasLODGenerateListener::processProgress(total, current);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCLasLODGenerateListenerProxy);
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatiallasconvertproxy_LasLODGenerateListener_processMsg_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring msg_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* msg_ch = (const ev_char*)__env->GetStringUTFChars(msg_j,JNI_FALSE);
				EVString msg = msg_ch;
				__env->ReleaseStringUTFChars(msg_j, (const char *)msg_ch);
				#else
				const ev_wchar* msg_ch = (const ev_wchar*)__env->GetStringChars(msg_j,JNI_FALSE);
				EVString msg = msg_ch;
				__env->ReleaseStringChars(msg_j, (const jchar *)msg_ch);
				#endif
				EarthView::World::SpatialLASConvertProxy::CLasLODGenerateListener *pObjectX = (EarthView::World::SpatialLASConvertProxy::CLasLODGenerateListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCLasLODGenerateListenerProxy))
				{
					pObjectX->EarthView::World::SpatialLASConvertProxy::CLasLODGenerateListener::processMsg(msg);
				}
				else
				{
					pObjectX->processMsg(msg);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatiallasconvertproxy_LasLODGenerateListener_register_1processMsg_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCLasLODGenerateListenerProxy *pObjectX = (JCLasLODGenerateListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_processMsg_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"processMsg_EVString_callback", "(Ljava/lang/String;)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatiallasconvertproxy_LasLODGenerateListener_processMsg_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring msg_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* msg_ch = (const ev_char*)__env->GetStringUTFChars(msg_j,JNI_FALSE);
				EVString msg = msg_ch;
				__env->ReleaseStringUTFChars(msg_j, (const char *)msg_ch);
				#else
				const ev_wchar* msg_ch = (const ev_wchar*)__env->GetStringChars(msg_j,JNI_FALSE);
				EVString msg = msg_ch;
				__env->ReleaseStringChars(msg_j, (const jchar *)msg_ch);
				#endif
				EarthView::World::SpatialLASConvertProxy::CLasLODGenerateListener *pObjectX = (EarthView::World::SpatialLASConvertProxy::CLasLODGenerateListener*) pObjXXXX;
				pObjectX->EarthView::World::SpatialLASConvertProxy::CLasLODGenerateListener::processMsg(msg);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatiallasconvertproxy_LasLODGenerateListener_paused_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::SpatialLASConvertProxy::CLasLODGenerateListener *pObjectX = (EarthView::World::SpatialLASConvertProxy::CLasLODGenerateListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCLasLODGenerateListenerProxy))
				{
					pObjectX->EarthView::World::SpatialLASConvertProxy::CLasLODGenerateListener::paused();
				}
				else
				{
					pObjectX->paused();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatiallasconvertproxy_LasLODGenerateListener_register_1paused_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCLasLODGenerateListenerProxy *pObjectX = (JCLasLODGenerateListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_paused_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"paused_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatiallasconvertproxy_LasLODGenerateListener_paused_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::SpatialLASConvertProxy::CLasLODGenerateListener *pObjectX = (EarthView::World::SpatialLASConvertProxy::CLasLODGenerateListener*) pObjXXXX;
				pObjectX->EarthView::World::SpatialLASConvertProxy::CLasLODGenerateListener::paused();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatiallasconvertproxy_LasLODGenerateListener_finished_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::SpatialLASConvertProxy::CLasLODGenerateListener *pObjectX = (EarthView::World::SpatialLASConvertProxy::CLasLODGenerateListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCLasLODGenerateListenerProxy))
				{
					pObjectX->EarthView::World::SpatialLASConvertProxy::CLasLODGenerateListener::finished();
				}
				else
				{
					pObjectX->finished();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatiallasconvertproxy_LasLODGenerateListener_register_1finished_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCLasLODGenerateListenerProxy *pObjectX = (JCLasLODGenerateListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_finished_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"finished_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatiallasconvertproxy_LasLODGenerateListener_finished_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::SpatialLASConvertProxy::CLasLODGenerateListener *pObjectX = (EarthView::World::SpatialLASConvertProxy::CLasLODGenerateListener*) pObjXXXX;
				pObjectX->EarthView::World::SpatialLASConvertProxy::CLasLODGenerateListener::finished();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatiallasconvertproxy_LasLODGenerateListener_processProgress_1ev_1uint32_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong total_j, jlong current_j)
			{
				ev_uint32 total = (ev_uint32) total_j;
				ev_uint32 current = (ev_uint32) current_j;
				EarthView::World::SpatialLASConvertProxy::CLasLODGenerateListener *pObjectX = (EarthView::World::SpatialLASConvertProxy::CLasLODGenerateListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCLasLODGenerateListenerProxy))
				{
					pObjectX->EarthView::World::SpatialLASConvertProxy::CLasLODGenerateListener::processProgress(total, current);
				}
				else
				{
					pObjectX->processProgress(total, current);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatiallasconvertproxy_LasLODGenerateListener_register_1processProgress_1ev_1uint32_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCLasLODGenerateListenerProxy *pObjectX = (JCLasLODGenerateListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_processProgress_ev_uint32_ev_uint32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"processProgress_ev_uint32_ev_uint32_callback", "(JJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatiallasconvertproxy_LasLODGenerateListener_processProgress_1ev_1uint32_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong total_j, jlong current_j)
			{
				ev_uint32 total = (ev_uint32) total_j;
				ev_uint32 current = (ev_uint32) current_j;
				EarthView::World::SpatialLASConvertProxy::CLasLODGenerateListener *pObjectX = (EarthView::World::SpatialLASConvertProxy::CLasLODGenerateListener*) pObjXXXX;
				pObjectX->EarthView::World::SpatialLASConvertProxy::CLasLODGenerateListener::processProgress(total, current);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatiallasconvertproxy_LasLODParam_setBuildQuadtree_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean buildQuadTree_j)
			{
				ev_bool buildQuadTree = (ev_bool) buildQuadTree_j;
				EarthView::World::SpatialLASConvertProxy::CLasLODParam *pObjectX = (EarthView::World::SpatialLASConvertProxy::CLasLODParam*) pObjXXXX;
				pObjectX->setBuildQuadtree(buildQuadTree);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatiallasconvertproxy_LasLODParam_getBuildQuadtree_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::SpatialLASConvertProxy::CLasLODParam *pObjectX = (EarthView::World::SpatialLASConvertProxy::CLasLODParam*) pObjXXXX;
				ev_bool __values1 = pObjectX->getBuildQuadtree();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatiallasconvertproxy_LasLODParam_setUseDoubleSideLight_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean useDoubleSideLight_j)
			{
				ev_bool useDoubleSideLight = (ev_bool) useDoubleSideLight_j;
				EarthView::World::SpatialLASConvertProxy::CLasLODParam *pObjectX = (EarthView::World::SpatialLASConvertProxy::CLasLODParam*) pObjXXXX;
				pObjectX->setUseDoubleSideLight(useDoubleSideLight);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatiallasconvertproxy_LasLODParam_getUseDoubleSideLight_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::SpatialLASConvertProxy::CLasLODParam *pObjectX = (EarthView::World::SpatialLASConvertProxy::CLasLODParam*) pObjXXXX;
				ev_bool __values1 = pObjectX->getUseDoubleSideLight();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatiallasconvertproxy_LasLODParam_setCombineSubmesh_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean combineSubMesh_j)
			{
				ev_bool combineSubMesh = (ev_bool) combineSubMesh_j;
				EarthView::World::SpatialLASConvertProxy::CLasLODParam *pObjectX = (EarthView::World::SpatialLASConvertProxy::CLasLODParam*) pObjXXXX;
				pObjectX->setCombineSubmesh(combineSubMesh);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatiallasconvertproxy_LasLODParam_getCombineSubmesh_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::SpatialLASConvertProxy::CLasLODParam *pObjectX = (EarthView::World::SpatialLASConvertProxy::CLasLODParam*) pObjXXXX;
				ev_bool __values1 = pObjectX->getCombineSubmesh();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatiallasconvertproxy_LasLODParam_setToDDS_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean toDDS_j)
			{
				ev_bool toDDS = (ev_bool) toDDS_j;
				EarthView::World::SpatialLASConvertProxy::CLasLODParam *pObjectX = (EarthView::World::SpatialLASConvertProxy::CLasLODParam*) pObjXXXX;
				pObjectX->setToDDS(toDDS);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatiallasconvertproxy_LasLODParam_getToDDS_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::SpatialLASConvertProxy::CLasLODParam *pObjectX = (EarthView::World::SpatialLASConvertProxy::CLasLODParam*) pObjXXXX;
				ev_bool __values1 = pObjectX->getToDDS();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatiallasconvertproxy_LasLODParam_setEncode7z_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean encode7z_j)
			{
				ev_bool encode7z = (ev_bool) encode7z_j;
				EarthView::World::SpatialLASConvertProxy::CLasLODParam *pObjectX = (EarthView::World::SpatialLASConvertProxy::CLasLODParam*) pObjXXXX;
				pObjectX->setEncode7z(encode7z);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatiallasconvertproxy_LasLODParam_getEncode7z_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::SpatialLASConvertProxy::CLasLODParam *pObjectX = (EarthView::World::SpatialLASConvertProxy::CLasLODParam*) pObjXXXX;
				ev_bool __values1 = pObjectX->getEncode7z();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatiallasconvertproxy_LasLODParam_setUseShareMaterial_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean useshareMaterial_j)
			{
				ev_bool useshareMaterial = (ev_bool) useshareMaterial_j;
				EarthView::World::SpatialLASConvertProxy::CLasLODParam *pObjectX = (EarthView::World::SpatialLASConvertProxy::CLasLODParam*) pObjXXXX;
				pObjectX->setUseShareMaterial(useshareMaterial);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatiallasconvertproxy_LasLODParam_getUseShareMaterial_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::SpatialLASConvertProxy::CLasLODParam *pObjectX = (EarthView::World::SpatialLASConvertProxy::CLasLODParam*) pObjXXXX;
				ev_bool __values1 = pObjectX->getUseShareMaterial();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatiallasconvertproxy_LasLODParam_existLODParam_1ev_1uint8_1CLasOptimizeParams(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jshort level_j, jlong param_j)
			{
				ev_uint8 level = (ev_uint8) level_j;
				EarthView::World::SpatialLASConvertProxy::CLasOptimizeParams &param = *(EarthView::World::SpatialLASConvertProxy::CLasOptimizeParams*) param_j;
				EarthView::World::SpatialLASConvertProxy::CLasLODParam *pObjectX = (EarthView::World::SpatialLASConvertProxy::CLasLODParam*) pObjXXXX;
				ev_bool __values1 = pObjectX->existLODParam(level, param);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatiallasconvertproxy_LasLODParam_updateLODParam_1ev_1uint8_1CLasOptimizeParams(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jshort level_j, jlong param_j)
			{
				ev_uint8 level = (ev_uint8) level_j;
				EarthView::World::SpatialLASConvertProxy::CLasOptimizeParams param = *(EarthView::World::SpatialLASConvertProxy::CLasOptimizeParams*) param_j;
				EarthView::World::SpatialLASConvertProxy::CLasLODParam *pObjectX = (EarthView::World::SpatialLASConvertProxy::CLasLODParam*) pObjXXXX;
				pObjectX->updateLODParam(level, param);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatiallasconvertproxy_LasLODParam_addLODParam_1ev_1uint8_1CLasOptimizeParams(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jshort level_j, jlong param_j)
			{
				ev_uint8 level = (ev_uint8) level_j;
				EarthView::World::SpatialLASConvertProxy::CLasOptimizeParams param = *(EarthView::World::SpatialLASConvertProxy::CLasOptimizeParams*) param_j;
				EarthView::World::SpatialLASConvertProxy::CLasLODParam *pObjectX = (EarthView::World::SpatialLASConvertProxy::CLasLODParam*) pObjXXXX;
				pObjectX->addLODParam(level, param);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatiallasconvertproxy_LasLODParam_removeLODParam_1ev_1uint8(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jshort level_j)
			{
				ev_uint8 level = (ev_uint8) level_j;
				EarthView::World::SpatialLASConvertProxy::CLasLODParam *pObjectX = (EarthView::World::SpatialLASConvertProxy::CLasLODParam*) pObjXXXX;
				pObjectX->removeLODParam(level);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatiallasconvertproxy_LasLODParam_getLODParam_1ev_1uint8(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jshort level_j)
			{
				ev_uint8 level = (ev_uint8) level_j;
				EarthView::World::SpatialLASConvertProxy::CLasLODParam *pObjectX = (EarthView::World::SpatialLASConvertProxy::CLasLODParam*) pObjXXXX;
				EarthView::World::SpatialLASConvertProxy::CLasOptimizeParams __values1 = pObjectX->getLODParam(level);
				EarthView::World::SpatialLASConvertProxy::CLasOptimizeParams *returnvalues = new EarthView::World::SpatialLASConvertProxy::CLasOptimizeParams(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatiallasconvertproxy_LasLODParam_getLODParamSize_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::SpatialLASConvertProxy::CLasLODParam *pObjectX = (EarthView::World::SpatialLASConvertProxy::CLasLODParam*) pObjXXXX;
				ev_int32 __values1 = pObjectX->getLODParamSize();
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatiallasconvertproxy_LasLODParam_clearLODParam_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::SpatialLASConvertProxy::CLasLODParam *pObjectX = (EarthView::World::SpatialLASConvertProxy::CLasLODParam*) pObjXXXX;
				pObjectX->clearLODParam();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatiallasconvertproxy_LasLODParam_fromXml_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring filePath_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* filePath_ch = (const ev_char*)__env->GetStringUTFChars(filePath_j,JNI_FALSE);
				const EVString filePath = filePath_ch;
				__env->ReleaseStringUTFChars(filePath_j, (const char *)filePath_ch);
				#else
				const ev_wchar* filePath_ch = (const ev_wchar*)__env->GetStringChars(filePath_j,JNI_FALSE);
				const EVString filePath = filePath_ch;
				__env->ReleaseStringChars(filePath_j, (const jchar *)filePath_ch);
				#endif
				EarthView::World::SpatialLASConvertProxy::CLasLODParam *pObjectX = (EarthView::World::SpatialLASConvertProxy::CLasLODParam*) pObjXXXX;
				pObjectX->fromXml(filePath);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatiallasconvertproxy_LasLODParam_toXml_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring filePath_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* filePath_ch = (const ev_char*)__env->GetStringUTFChars(filePath_j,JNI_FALSE);
				const EVString filePath = filePath_ch;
				__env->ReleaseStringUTFChars(filePath_j, (const char *)filePath_ch);
				#else
				const ev_wchar* filePath_ch = (const ev_wchar*)__env->GetStringChars(filePath_j,JNI_FALSE);
				const EVString filePath = filePath_ch;
				__env->ReleaseStringChars(filePath_j, (const jchar *)filePath_ch);
				#endif
				EarthView::World::SpatialLASConvertProxy::CLasLODParam *pObjectX = (EarthView::World::SpatialLASConvertProxy::CLasLODParam*) pObjXXXX;
				pObjectX->toXml(filePath);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatiallasconvertproxy_LasLODParam_setLocation_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble lat_j, jdouble lon_j, jdouble alt_j)
			{
				ev_real64 lat = (ev_real64) lat_j;
				ev_real64 lon = (ev_real64) lon_j;
				ev_real64 alt = (ev_real64) alt_j;
				EarthView::World::SpatialLASConvertProxy::CLasLODParam *pObjectX = (EarthView::World::SpatialLASConvertProxy::CLasLODParam*) pObjXXXX;
				pObjectX->setLocation(lat, lon, alt);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatiallasconvertproxy_LasLODParam_getLocation_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong lat_j, jlong lon_j, jlong alt_j)
			{
				ev_real64 &lat = *(ev_real64*) lat_j;
				ev_real64 &lon = *(ev_real64*) lon_j;
				ev_real64 &alt = *(ev_real64*) alt_j;
				EarthView::World::SpatialLASConvertProxy::CLasLODParam *pObjectX = (EarthView::World::SpatialLASConvertProxy::CLasLODParam*) pObjXXXX;
				pObjectX->getLocation(lat, lon, alt);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatiallasconvertproxy_LasLODParam_setRotation_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble rotW_j, jdouble rotX_j, jdouble rotY_j, jdouble rotZ_j)
			{
				ev_real64 rotW = (ev_real64) rotW_j;
				ev_real64 rotX = (ev_real64) rotX_j;
				ev_real64 rotY = (ev_real64) rotY_j;
				ev_real64 rotZ = (ev_real64) rotZ_j;
				EarthView::World::SpatialLASConvertProxy::CLasLODParam *pObjectX = (EarthView::World::SpatialLASConvertProxy::CLasLODParam*) pObjXXXX;
				pObjectX->setRotation(rotW, rotX, rotY, rotZ);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatiallasconvertproxy_LasLODParam_getRotation_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong rotW_j, jlong rotX_j, jlong rotY_j, jlong rotZ_j)
			{
				ev_real64 &rotW = *(ev_real64*) rotW_j;
				ev_real64 &rotX = *(ev_real64*) rotX_j;
				ev_real64 &rotY = *(ev_real64*) rotY_j;
				ev_real64 &rotZ = *(ev_real64*) rotZ_j;
				EarthView::World::SpatialLASConvertProxy::CLasLODParam *pObjectX = (EarthView::World::SpatialLASConvertProxy::CLasLODParam*) pObjXXXX;
				pObjectX->getRotation(rotW, rotX, rotY, rotZ);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatiallasconvertproxy_LasLODParam_setLocalTranform_1CVector3_1CVector3_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong scale_j, jlong rotate_j, jlong translate_j)
			{
				EarthView::World::Spatial::Math::CVector3 scale = *(EarthView::World::Spatial::Math::CVector3*) scale_j;
				EarthView::World::Spatial::Math::CVector3 rotate = *(EarthView::World::Spatial::Math::CVector3*) rotate_j;
				EarthView::World::Spatial::Math::CVector3 translate = *(EarthView::World::Spatial::Math::CVector3*) translate_j;
				EarthView::World::SpatialLASConvertProxy::CLasLODParam *pObjectX = (EarthView::World::SpatialLASConvertProxy::CLasLODParam*) pObjXXXX;
				pObjectX->setLocalTranform(scale, rotate, translate);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatiallasconvertproxy_LasLODParam_getLocalTransform_1CVector3_1CVector3_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong scale_j, jlong rotate_j, jlong translate_j)
			{
				EarthView::World::Spatial::Math::CVector3 &scale = *(EarthView::World::Spatial::Math::CVector3*) scale_j;
				EarthView::World::Spatial::Math::CVector3 &rotate = *(EarthView::World::Spatial::Math::CVector3*) rotate_j;
				EarthView::World::Spatial::Math::CVector3 &translate = *(EarthView::World::Spatial::Math::CVector3*) translate_j;
				EarthView::World::SpatialLASConvertProxy::CLasLODParam *pObjectX = (EarthView::World::SpatialLASConvertProxy::CLasLODParam*) pObjXXXX;
				pObjectX->getLocalTransform(scale, rotate, translate);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatiallasconvertproxy_LasLODParam_setElevationMinMaxZ_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble elevationMinZ_j, jdouble elevationMaxZ_j)
			{
				ev_real64 elevationMinZ = (ev_real64) elevationMinZ_j;
				ev_real64 elevationMaxZ = (ev_real64) elevationMaxZ_j;
				EarthView::World::SpatialLASConvertProxy::CLasLODParam *pObjectX = (EarthView::World::SpatialLASConvertProxy::CLasLODParam*) pObjXXXX;
				pObjectX->setElevationMinMaxZ(elevationMinZ, elevationMaxZ);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatiallasconvertproxy_LasLODParam_getElevationMinMaxZ_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong elevationMinZ_j, jlong elevationMaxZ_j)
			{
				ev_real64 &elevationMinZ = *(ev_real64*) elevationMinZ_j;
				ev_real64 &elevationMaxZ = *(ev_real64*) elevationMaxZ_j;
				EarthView::World::SpatialLASConvertProxy::CLasLODParam *pObjectX = (EarthView::World::SpatialLASConvertProxy::CLasLODParam*) pObjXXXX;
				pObjectX->getElevationMinMaxZ(elevationMinZ, elevationMaxZ);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatiallasconvertproxy_LasLODGenerator_generate_1StringVector_1EVString_1EVString_1EVString_1EVString_1ev_1bool_1CAxisAlignedBox(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong dataFiles_j, jstring outputPath_j, jstring name_j, jstring grpName_j, jstring matName_j, jboolean isAsyn_j, jlong box_j)
			{
				const EarthView::World::Core::StringVector &dataFiles = *(EarthView::World::Core::StringVector*) dataFiles_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* outputPath_ch = (const ev_char*)__env->GetStringUTFChars(outputPath_j,JNI_FALSE);
				const EVString outputPath = outputPath_ch;
				__env->ReleaseStringUTFChars(outputPath_j, (const char *)outputPath_ch);
				#else
				const ev_wchar* outputPath_ch = (const ev_wchar*)__env->GetStringChars(outputPath_j,JNI_FALSE);
				const EVString outputPath = outputPath_ch;
				__env->ReleaseStringChars(outputPath_j, (const jchar *)outputPath_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* grpName_ch = (const ev_char*)__env->GetStringUTFChars(grpName_j,JNI_FALSE);
				const EVString grpName = grpName_ch;
				__env->ReleaseStringUTFChars(grpName_j, (const char *)grpName_ch);
				#else
				const ev_wchar* grpName_ch = (const ev_wchar*)__env->GetStringChars(grpName_j,JNI_FALSE);
				const EVString grpName = grpName_ch;
				__env->ReleaseStringChars(grpName_j, (const jchar *)grpName_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* matName_ch = (const ev_char*)__env->GetStringUTFChars(matName_j,JNI_FALSE);
				const EVString matName = matName_ch;
				__env->ReleaseStringUTFChars(matName_j, (const char *)matName_ch);
				#else
				const ev_wchar* matName_ch = (const ev_wchar*)__env->GetStringChars(matName_j,JNI_FALSE);
				const EVString matName = matName_ch;
				__env->ReleaseStringChars(matName_j, (const jchar *)matName_ch);
				#endif
				ev_bool isAsyn = (ev_bool) isAsyn_j;
				EarthView::World::Spatial::Math::CAxisAlignedBox box = *(EarthView::World::Spatial::Math::CAxisAlignedBox*) box_j;
				EarthView::World::SpatialLASConvertProxy::CLasLODGenerator *pObjectX = (EarthView::World::SpatialLASConvertProxy::CLasLODGenerator*) pObjXXXX;
				pObjectX->generate(dataFiles, outputPath, name, grpName, matName, isAsyn, box);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatiallasconvertproxy_LasLODGenerator_addListener_1CLasLODGenerateListener(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong observer_j)
			{
				EarthView::World::SpatialLASConvertProxy::CLasLODGenerateListener *observer = (EarthView::World::SpatialLASConvertProxy::CLasLODGenerateListener*) observer_j;
				EarthView::World::SpatialLASConvertProxy::CLasLODGenerator *pObjectX = (EarthView::World::SpatialLASConvertProxy::CLasLODGenerator*) pObjXXXX;
				pObjectX->addListener(observer);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatiallasconvertproxy_LasLODGenerator_removeListener_1CLasLODGenerateListener(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong observer_j)
			{
				EarthView::World::SpatialLASConvertProxy::CLasLODGenerateListener *observer = (EarthView::World::SpatialLASConvertProxy::CLasLODGenerateListener*) observer_j;
				EarthView::World::SpatialLASConvertProxy::CLasLODGenerator *pObjectX = (EarthView::World::SpatialLASConvertProxy::CLasLODGenerator*) pObjXXXX;
				pObjectX->removeListener(observer);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatiallasconvertproxy_LasLODGenerator_setParam_1CLasLODParam(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong param_j)
			{
				EarthView::World::SpatialLASConvertProxy::CLasLODParam &param = *(EarthView::World::SpatialLASConvertProxy::CLasLODParam*) param_j;
				EarthView::World::SpatialLASConvertProxy::CLasLODGenerator *pObjectX = (EarthView::World::SpatialLASConvertProxy::CLasLODGenerator*) pObjXXXX;
				pObjectX->setParam(param);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatiallasconvertproxy_LasLODGenerator_getParam_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::SpatialLASConvertProxy::CLasLODGenerator *pObjectX = (EarthView::World::SpatialLASConvertProxy::CLasLODGenerator*) pObjXXXX;
				EarthView::World::SpatialLASConvertProxy::CLasLODParam& __values1 = pObjectX->getParam();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatiallasconvertproxy_LasLODGenerator_stop_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::SpatialLASConvertProxy::CLasLODGenerator *pObjectX = (EarthView::World::SpatialLASConvertProxy::CLasLODGenerator*) pObjXXXX;
				pObjectX->stop();
			}
		}
	}
}
