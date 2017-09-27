/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatiallasproxy/lasconvert.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
		}
		namespace SpatialLASConvertProxy
		{
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatiallasconvertproxy_Lasconverter_setLASPaths_1StringVector(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong lasPaths_j)
			{
				const EarthView::World::Core::StringVector &lasPaths = *(EarthView::World::Core::StringVector*) lasPaths_j;
				EarthView::World::SpatialLASConvertProxy::CLASConverter *pObjectX = (EarthView::World::SpatialLASConvertProxy::CLASConverter*) pObjXXXX;
				pObjectX->setLASPaths(lasPaths);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatiallasconvertproxy_Lasconverter_setConvertListener_1CLASConverterListener(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong listener_j)
			{
				EarthView::World::SpatialLASConvertProxy::CLASConverterListener *listener = (EarthView::World::SpatialLASConvertProxy::CLASConverterListener*) listener_j;
				EarthView::World::SpatialLASConvertProxy::CLASConverter *pObjectX = (EarthView::World::SpatialLASConvertProxy::CLASConverter*) pObjXXXX;
				pObjectX->setConvertListener(listener);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatiallasconvertproxy_Lasconverter_getSpatialReference_1EVString(JNIEnv *__env , jclass __clazz, jstring lasPath_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* lasPath_ch = (const ev_char*)__env->GetStringUTFChars(lasPath_j,JNI_FALSE);
				const EVString lasPath = lasPath_ch;
				__env->ReleaseStringUTFChars(lasPath_j, (const char *)lasPath_ch);
				#else
				const ev_wchar* lasPath_ch = (const ev_wchar*)__env->GetStringChars(lasPath_j,JNI_FALSE);
				const EVString lasPath = lasPath_ch;
				__env->ReleaseStringChars(lasPath_j, (const jchar *)lasPath_ch);
				#endif
				EarthView::World::Spatial::Utility::CSpatialReference* __values1 = EarthView::World::SpatialLASConvertProxy::CLASConverter::getSpatialReference(lasPath);
				if(__values1 != NULL) {					((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
				}				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatiallasconvertproxy_Lasconverter_stopConvert_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::SpatialLASConvertProxy::CLASConverter *pObjectX = (EarthView::World::SpatialLASConvertProxy::CLASConverter*) pObjXXXX;
				pObjectX->stopConvert();
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatiallasconvertproxy_Lasconverter_convertLas_1CSpatialReference_1EVString_1ev_1bool_1EVString_1ev_1bool_1CLasLODParam(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong srcSr_j, jstring outPath_j, jboolean isMerge_j, jstring name_j, jboolean isLod_j, jlong param_j)
			{
				EarthView::World::Spatial::Utility::CSpatialReference *srcSr = (EarthView::World::Spatial::Utility::CSpatialReference*) srcSr_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* outPath_ch = (const ev_char*)__env->GetStringUTFChars(outPath_j,JNI_FALSE);
				const EVString outPath = outPath_ch;
				__env->ReleaseStringUTFChars(outPath_j, (const char *)outPath_ch);
				#else
				const ev_wchar* outPath_ch = (const ev_wchar*)__env->GetStringChars(outPath_j,JNI_FALSE);
				const EVString outPath = outPath_ch;
				__env->ReleaseStringChars(outPath_j, (const jchar *)outPath_ch);
				#endif
				ev_bool isMerge = (ev_bool) isMerge_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				ev_bool isLod = (ev_bool) isLod_j;
				EarthView::World::SpatialLASConvertProxy::CLasLODParam &param = *(EarthView::World::SpatialLASConvertProxy::CLasLODParam*) param_j;
				EarthView::World::SpatialLASConvertProxy::CLASConverter *pObjectX = (EarthView::World::SpatialLASConvertProxy::CLASConverter*) pObjXXXX;
				ev_bool __values1 = pObjectX->convertLas(srcSr, outPath, isMerge, name, isLod, param);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			class JCLASConverterListenerProxy : public EarthView::World::SpatialLASConvertProxy::CLASConverterListener
			{
			 private:
				EarthView::World::Core::ev_string m_setInformation_EVString_ev_int32_EVString_ev_int32_callback;
				EarthView::World::Core::ev_string m_getInformation_EVString_ev_int32_EVString_ev_int32_callback;
				EarthView::World::Core::ev_string m_processMsg_EVString_callback;
				EarthView::World::Core::ev_string m_paused_void_callback;
				EarthView::World::Core::ev_string m_finished_void_callback;
				EarthView::World::Core::ev_string m_processProgress_ev_uint32_ev_uint32_callback;
			public:
				JCLASConverterListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CLASConverterListener(pList)
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
				void register_setInformation_EVString_ev_int32_EVString_ev_int32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setInformation_EVString_ev_int32_EVString_ev_int32_callback = __method;
				}
				void register_getInformation_EVString_ev_int32_EVString_ev_int32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getInformation_EVString_ev_int32_EVString_ev_int32_callback = __method;
				}
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
				virtual void setInformation(const EVString& totalInfo, ev_int32 totalPercent, const EVString& lasInfo, ev_int32 lasPercent)
				{
					if (this->_gRef != NULL && this->m_setInformation_EVString_ev_int32_EVString_ev_int32_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring totalInfo_wch = totalInfo;
						jstring totalInfo_j = __env->NewString((const jchar*)totalInfo_wch.getString(), totalInfo_wch.size());
						jint totalPercent_j = (jint) totalPercent;
						EarthView::World::Core::ev_wstring lasInfo_wch = lasInfo;
						jstring lasInfo_j = __env->NewString((const jchar*)lasInfo_wch.getString(), lasInfo_wch.size());
						jint lasPercent_j = (jint) lasPercent;
						jmethodID __method = __gr->getMethod("setInformation_EVString_ev_int32_EVString_ev_int32_callback");
						__env->CallVoidMethod(__obj, __method , totalInfo_j, totalPercent_j, lasInfo_j, lasPercent_j);
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
						return this->CLASConverterListener::setInformation(totalInfo, totalPercent, lasInfo, lasPercent);
					}
				}
				virtual void getInformation(EVString& totalInfo, ev_int32& totalPercent, EVString& lasInfo, ev_int32& lasPercent)
				{
					if (this->_gRef != NULL && this->m_getInformation_EVString_ev_int32_EVString_ev_int32_callback != "" && this->isCustomExtend())
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
						jlong totalInfo_j = (jlong) &totalInfo;
						jlong totalPercent_j = (jlong) &totalPercent;
						jlong lasInfo_j = (jlong) &lasInfo;
						jlong lasPercent_j = (jlong) &lasPercent;
						jmethodID __method = __gr->getMethod("getInformation_EVString_ev_int32_EVString_ev_int32_callback");
						__env->CallVoidMethod(__obj, __method , totalInfo_j, totalPercent_j, lasInfo_j, lasPercent_j);
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
						return this->CLASConverterListener::getInformation(totalInfo, totalPercent, lasInfo, lasPercent);
					}
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
						return this->CLASConverterListener::processMsg(msg);
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
						return this->CLASConverterListener::paused();
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
						return this->CLASConverterListener::finished();
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
						return this->CLASConverterListener::processProgress(total, current);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCLASConverterListenerProxy);
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatiallasconvertproxy_Lasconverterlistener_setInformation_1EVString_1ev_1int32_1EVString_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring totalInfo_j, jint totalPercent_j, jstring lasInfo_j, jint lasPercent_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* totalInfo_ch = (const ev_char*)__env->GetStringUTFChars(totalInfo_j,JNI_FALSE);
				const EVString totalInfo = totalInfo_ch;
				__env->ReleaseStringUTFChars(totalInfo_j, (const char *)totalInfo_ch);
				#else
				const ev_wchar* totalInfo_ch = (const ev_wchar*)__env->GetStringChars(totalInfo_j,JNI_FALSE);
				const EVString totalInfo = totalInfo_ch;
				__env->ReleaseStringChars(totalInfo_j, (const jchar *)totalInfo_ch);
				#endif
				ev_int32 totalPercent = (ev_int32) totalPercent_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* lasInfo_ch = (const ev_char*)__env->GetStringUTFChars(lasInfo_j,JNI_FALSE);
				const EVString lasInfo = lasInfo_ch;
				__env->ReleaseStringUTFChars(lasInfo_j, (const char *)lasInfo_ch);
				#else
				const ev_wchar* lasInfo_ch = (const ev_wchar*)__env->GetStringChars(lasInfo_j,JNI_FALSE);
				const EVString lasInfo = lasInfo_ch;
				__env->ReleaseStringChars(lasInfo_j, (const jchar *)lasInfo_ch);
				#endif
				ev_int32 lasPercent = (ev_int32) lasPercent_j;
				EarthView::World::SpatialLASConvertProxy::CLASConverterListener *pObjectX = (EarthView::World::SpatialLASConvertProxy::CLASConverterListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCLASConverterListenerProxy))
				{
					pObjectX->EarthView::World::SpatialLASConvertProxy::CLASConverterListener::setInformation(totalInfo, totalPercent, lasInfo, lasPercent);
				}
				else
				{
					pObjectX->setInformation(totalInfo, totalPercent, lasInfo, lasPercent);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatiallasconvertproxy_Lasconverterlistener_register_1setInformation_1EVString_1ev_1int32_1EVString_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCLASConverterListenerProxy *pObjectX = (JCLASConverterListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setInformation_EVString_ev_int32_EVString_ev_int32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setInformation_EVString_ev_int32_EVString_ev_int32_callback", "(Ljava/lang/String;ILjava/lang/String;I)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatiallasconvertproxy_Lasconverterlistener_setInformation_1EVString_1ev_1int32_1EVString_1ev_1int32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring totalInfo_j, jint totalPercent_j, jstring lasInfo_j, jint lasPercent_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* totalInfo_ch = (const ev_char*)__env->GetStringUTFChars(totalInfo_j,JNI_FALSE);
				const EVString totalInfo = totalInfo_ch;
				__env->ReleaseStringUTFChars(totalInfo_j, (const char *)totalInfo_ch);
				#else
				const ev_wchar* totalInfo_ch = (const ev_wchar*)__env->GetStringChars(totalInfo_j,JNI_FALSE);
				const EVString totalInfo = totalInfo_ch;
				__env->ReleaseStringChars(totalInfo_j, (const jchar *)totalInfo_ch);
				#endif
				ev_int32 totalPercent = (ev_int32) totalPercent_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* lasInfo_ch = (const ev_char*)__env->GetStringUTFChars(lasInfo_j,JNI_FALSE);
				const EVString lasInfo = lasInfo_ch;
				__env->ReleaseStringUTFChars(lasInfo_j, (const char *)lasInfo_ch);
				#else
				const ev_wchar* lasInfo_ch = (const ev_wchar*)__env->GetStringChars(lasInfo_j,JNI_FALSE);
				const EVString lasInfo = lasInfo_ch;
				__env->ReleaseStringChars(lasInfo_j, (const jchar *)lasInfo_ch);
				#endif
				ev_int32 lasPercent = (ev_int32) lasPercent_j;
				EarthView::World::SpatialLASConvertProxy::CLASConverterListener *pObjectX = (EarthView::World::SpatialLASConvertProxy::CLASConverterListener*) pObjXXXX;
				pObjectX->EarthView::World::SpatialLASConvertProxy::CLASConverterListener::setInformation(totalInfo, totalPercent, lasInfo, lasPercent);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatiallasconvertproxy_Lasconverterlistener_getInformation_1EVString_1ev_1int32_1EVString_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong totalInfo_j, jlong totalPercent_j, jlong lasInfo_j, jlong lasPercent_j)
			{
				EVString &totalInfo = *(EVString*) totalInfo_j;
				ev_int32 &totalPercent = *(ev_int32*) totalPercent_j;
				EVString &lasInfo = *(EVString*) lasInfo_j;
				ev_int32 &lasPercent = *(ev_int32*) lasPercent_j;
				EarthView::World::SpatialLASConvertProxy::CLASConverterListener *pObjectX = (EarthView::World::SpatialLASConvertProxy::CLASConverterListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCLASConverterListenerProxy))
				{
					pObjectX->EarthView::World::SpatialLASConvertProxy::CLASConverterListener::getInformation(totalInfo, totalPercent, lasInfo, lasPercent);
				}
				else
				{
					pObjectX->getInformation(totalInfo, totalPercent, lasInfo, lasPercent);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatiallasconvertproxy_Lasconverterlistener_register_1getInformation_1EVString_1ev_1int32_1EVString_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCLASConverterListenerProxy *pObjectX = (JCLASConverterListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getInformation_EVString_ev_int32_EVString_ev_int32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getInformation_EVString_ev_int32_EVString_ev_int32_callback", "(JJJJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatiallasconvertproxy_Lasconverterlistener_getInformation_1EVString_1ev_1int32_1EVString_1ev_1int32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong totalInfo_j, jlong totalPercent_j, jlong lasInfo_j, jlong lasPercent_j)
			{
				EVString &totalInfo = *(EVString*) totalInfo_j;
				ev_int32 &totalPercent = *(ev_int32*) totalPercent_j;
				EVString &lasInfo = *(EVString*) lasInfo_j;
				ev_int32 &lasPercent = *(ev_int32*) lasPercent_j;
				EarthView::World::SpatialLASConvertProxy::CLASConverterListener *pObjectX = (EarthView::World::SpatialLASConvertProxy::CLASConverterListener*) pObjXXXX;
				pObjectX->EarthView::World::SpatialLASConvertProxy::CLASConverterListener::getInformation(totalInfo, totalPercent, lasInfo, lasPercent);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatiallasconvertproxy_Lasconverterlistener_register_1processMsg_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCLASConverterListenerProxy *pObjectX = (JCLASConverterListenerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatiallasconvertproxy_Lasconverterlistener_register_1paused_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCLASConverterListenerProxy *pObjectX = (JCLASConverterListenerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatiallasconvertproxy_Lasconverterlistener_register_1finished_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCLASConverterListenerProxy *pObjectX = (JCLASConverterListenerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatiallasconvertproxy_Lasconverterlistener_register_1processProgress_1ev_1uint32_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCLASConverterListenerProxy *pObjectX = (JCLASConverterListenerProxy*) pObjXXXX;
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
		}
	}
}
