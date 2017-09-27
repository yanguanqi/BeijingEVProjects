/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "meshoptimize/obqmerge.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace MeshOptimize
	{
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_meshoptimize_ObqQuadTreeParam_setObqCountLowerLimit_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong obqCountLowerLimit_j)
		{
			ev_uint32 obqCountLowerLimit = (ev_uint32) obqCountLowerLimit_j;
			EarthView::MeshOptimize::CObqQuadTreeParam *pObjectX = (EarthView::MeshOptimize::CObqQuadTreeParam*) pObjXXXX;
			pObjectX->setObqCountLowerLimit(obqCountLowerLimit);
		}
		extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_meshoptimize_ObqQuadTreeParam_getObqCountLowerLimit_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
		{
			EarthView::MeshOptimize::CObqQuadTreeParam *pObjectX = (EarthView::MeshOptimize::CObqQuadTreeParam*) pObjXXXX;
			ev_uint32 __values1 = pObjectX->getObqCountLowerLimit();
			jlong __values1_j = (jlong) __values1;
			return __values1_j;
		}
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_meshoptimize_ObqQuadTreeParam_setMinDivideBoundsSize_1ev_1real32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jfloat minDivideSize_j)
		{
			ev_real32 minDivideSize = (ev_real32) minDivideSize_j;
			EarthView::MeshOptimize::CObqQuadTreeParam *pObjectX = (EarthView::MeshOptimize::CObqQuadTreeParam*) pObjXXXX;
			pObjectX->setMinDivideBoundsSize(minDivideSize);
		}
		extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_meshoptimize_ObqQuadTreeParam_getMinDivideBoundsSize_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
		{
			EarthView::MeshOptimize::CObqQuadTreeParam *pObjectX = (EarthView::MeshOptimize::CObqQuadTreeParam*) pObjXXXX;
			ev_real32 __values1 = pObjectX->getMinDivideBoundsSize();
			jfloat __values1_j = (jfloat)__values1;
			return __values1_j;
		}
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_meshoptimize_ObqQuadTreeParam_setMergeName_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring mergeName_j)
		{
			#if EV_PLATFORM == EV_PLATFORM_ANDROID
			const ev_char* mergeName_ch = (const ev_char*)__env->GetStringUTFChars(mergeName_j,JNI_FALSE);
			EVString mergeName = mergeName_ch;
			__env->ReleaseStringUTFChars(mergeName_j, (const char *)mergeName_ch);
			#else
			const ev_wchar* mergeName_ch = (const ev_wchar*)__env->GetStringChars(mergeName_j,JNI_FALSE);
			EVString mergeName = mergeName_ch;
			__env->ReleaseStringChars(mergeName_j, (const jchar *)mergeName_ch);
			#endif
			EarthView::MeshOptimize::CObqQuadTreeParam *pObjectX = (EarthView::MeshOptimize::CObqQuadTreeParam*) pObjXXXX;
			pObjectX->setMergeName(mergeName);
		}
		extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_meshoptimize_ObqQuadTreeParam_getMergeName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
		{
			EarthView::MeshOptimize::CObqQuadTreeParam *pObjectX = (EarthView::MeshOptimize::CObqQuadTreeParam*) pObjXXXX;
			EVString __values1 = pObjectX->getMergeName();
			EarthView::World::Core::ev_wstring valuesw1 = __values1;
			jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
			return __values1_j;
		}
		extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_meshoptimize_ObqQuadTreeParam_getEncode7z_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
		{
			EarthView::MeshOptimize::CObqQuadTreeParam *pObjectX = (EarthView::MeshOptimize::CObqQuadTreeParam*) pObjXXXX;
			ev_bool __values1 = pObjectX->getEncode7z();
			jboolean __values1_j = (jboolean)__values1;
			return __values1_j;
		}
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_meshoptimize_ObqQuadTreeParam_setTileVisibleMultiplier_1ev_1real32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jfloat multiplier_j)
		{
			ev_real32 multiplier = (ev_real32) multiplier_j;
			EarthView::MeshOptimize::CObqQuadTreeParam *pObjectX = (EarthView::MeshOptimize::CObqQuadTreeParam*) pObjXXXX;
			pObjectX->setTileVisibleMultiplier(multiplier);
		}
		extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_meshoptimize_ObqQuadTreeParam_getTileVisibleMultiplier_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
		{
			EarthView::MeshOptimize::CObqQuadTreeParam *pObjectX = (EarthView::MeshOptimize::CObqQuadTreeParam*) pObjXXXX;
			ev_real32 __values1 = pObjectX->getTileVisibleMultiplier();
			jfloat __values1_j = (jfloat)__values1;
			return __values1_j;
		}
		class JCObqMergeListenerProxy : public EarthView::MeshOptimize::CObqMergeListener
		{
		 private:
			EarthView::World::Core::ev_string m_processMsg_EVString_callback;
			EarthView::World::Core::ev_string m_paused_void_callback;
			EarthView::World::Core::ev_string m_finished_void_callback;
		public:
			JCObqMergeListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CObqMergeListener(pList)
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
					return this->CObqMergeListener::processMsg(msg);
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
					return this->CObqMergeListener::paused();
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
					return this->CObqMergeListener::finished();
				}
			}
		};
		REGISTER_FACTORY_CLASS(JCObqMergeListenerProxy);
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_meshoptimize_ObqMergeListener_processMsg_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring msg_j)
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
			EarthView::MeshOptimize::CObqMergeListener *pObjectX = (EarthView::MeshOptimize::CObqMergeListener*) pObjXXXX;
			if (typeid(*pObjectX) == typeid(JCObqMergeListenerProxy))
			{
				pObjectX->EarthView::MeshOptimize::CObqMergeListener::processMsg(msg);
			}
			else
			{
				pObjectX->processMsg(msg);
			}
		}
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_meshoptimize_ObqMergeListener_register_1processMsg_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
		{
			JCObqMergeListenerProxy *pObjectX = (JCObqMergeListenerProxy*) pObjXXXX;
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
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_meshoptimize_ObqMergeListener_processMsg_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring msg_j)
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
			EarthView::MeshOptimize::CObqMergeListener *pObjectX = (EarthView::MeshOptimize::CObqMergeListener*) pObjXXXX;
			pObjectX->EarthView::MeshOptimize::CObqMergeListener::processMsg(msg);
		}
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_meshoptimize_ObqMergeListener_paused_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
		{
			EarthView::MeshOptimize::CObqMergeListener *pObjectX = (EarthView::MeshOptimize::CObqMergeListener*) pObjXXXX;
			if (typeid(*pObjectX) == typeid(JCObqMergeListenerProxy))
			{
				pObjectX->EarthView::MeshOptimize::CObqMergeListener::paused();
			}
			else
			{
				pObjectX->paused();
			}
		}
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_meshoptimize_ObqMergeListener_register_1paused_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
		{
			JCObqMergeListenerProxy *pObjectX = (JCObqMergeListenerProxy*) pObjXXXX;
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
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_meshoptimize_ObqMergeListener_paused_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
		{
			EarthView::MeshOptimize::CObqMergeListener *pObjectX = (EarthView::MeshOptimize::CObqMergeListener*) pObjXXXX;
			pObjectX->EarthView::MeshOptimize::CObqMergeListener::paused();
		}
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_meshoptimize_ObqMergeListener_finished_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
		{
			EarthView::MeshOptimize::CObqMergeListener *pObjectX = (EarthView::MeshOptimize::CObqMergeListener*) pObjXXXX;
			if (typeid(*pObjectX) == typeid(JCObqMergeListenerProxy))
			{
				pObjectX->EarthView::MeshOptimize::CObqMergeListener::finished();
			}
			else
			{
				pObjectX->finished();
			}
		}
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_meshoptimize_ObqMergeListener_register_1finished_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
		{
			JCObqMergeListenerProxy *pObjectX = (JCObqMergeListenerProxy*) pObjXXXX;
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
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_meshoptimize_ObqMergeListener_finished_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
		{
			EarthView::MeshOptimize::CObqMergeListener *pObjectX = (EarthView::MeshOptimize::CObqMergeListener*) pObjXXXX;
			pObjectX->EarthView::MeshOptimize::CObqMergeListener::finished();
		}
		extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_meshoptimize_ObqMergeInstanceData_get_1Lat_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
		{
			EarthView::MeshOptimize::CObqMergeInstanceData *pObjectX = (EarthView::MeshOptimize::CObqMergeInstanceData*)pObjXXXX;
			jdouble __values1_j = (jdouble)(pObjectX->Lat);
			return __values1_j;
		}
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_meshoptimize_ObqMergeInstanceData_set_1Lat_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
		{
			EarthView::MeshOptimize::CObqMergeInstanceData *pObjectX = (EarthView::MeshOptimize::CObqMergeInstanceData*)pObjXXXX;
			pObjectX->Lat = (ev_real64)__values1_j;
		}
		extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_meshoptimize_ObqMergeInstanceData_get_1Lon_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
		{
			EarthView::MeshOptimize::CObqMergeInstanceData *pObjectX = (EarthView::MeshOptimize::CObqMergeInstanceData*)pObjXXXX;
			jdouble __values1_j = (jdouble)(pObjectX->Lon);
			return __values1_j;
		}
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_meshoptimize_ObqMergeInstanceData_set_1Lon_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
		{
			EarthView::MeshOptimize::CObqMergeInstanceData *pObjectX = (EarthView::MeshOptimize::CObqMergeInstanceData*)pObjXXXX;
			pObjectX->Lon = (ev_real64)__values1_j;
		}
		extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_meshoptimize_ObqMergeInstanceData_get_1Alt_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
		{
			EarthView::MeshOptimize::CObqMergeInstanceData *pObjectX = (EarthView::MeshOptimize::CObqMergeInstanceData*)pObjXXXX;
			jdouble __values1_j = (jdouble)(pObjectX->Alt);
			return __values1_j;
		}
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_meshoptimize_ObqMergeInstanceData_set_1Alt_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
		{
			EarthView::MeshOptimize::CObqMergeInstanceData *pObjectX = (EarthView::MeshOptimize::CObqMergeInstanceData*)pObjXXXX;
			pObjectX->Alt = (ev_real64)__values1_j;
		}
		extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_meshoptimize_ObqMergeInstanceData_get_1LocalTrans_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
		{
			EarthView::MeshOptimize::CObqMergeInstanceData *pObjectX = (EarthView::MeshOptimize::CObqMergeInstanceData*)pObjXXXX;
			jlong __values1_j = (jlong) &(pObjectX->LocalTrans);
			return __values1_j;
		}
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_meshoptimize_ObqMergeInstanceData_set_1LocalTrans_1CMatrix4(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
		{
			EarthView::MeshOptimize::CObqMergeInstanceData *pObjectX = (EarthView::MeshOptimize::CObqMergeInstanceData*)pObjXXXX;
			pObjectX->LocalTrans = *(EarthView::World::Spatial::Math::CMatrix4*) __values1_j;
		}
		extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_meshoptimize_ObqMergeInstanceData_get_1MeshxFilePath_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
		{
			EarthView::MeshOptimize::CObqMergeInstanceData *pObjectX = (EarthView::MeshOptimize::CObqMergeInstanceData*)pObjXXXX;
			EarthView::World::Core::ev_wstring __values1_ch = pObjectX->MeshxFilePath;
			jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
			return __values1_j;
		}
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_meshoptimize_ObqMergeInstanceData_set_1MeshxFilePath_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
		{
			EarthView::MeshOptimize::CObqMergeInstanceData *pObjectX = (EarthView::MeshOptimize::CObqMergeInstanceData*)pObjXXXX;
			const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
			pObjectX->MeshxFilePath = __values1_ch;
			__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
		}
		extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_meshoptimize_ObqMergeInstanceData_get_1EVID_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
		{
			EarthView::MeshOptimize::CObqMergeInstanceData *pObjectX = (EarthView::MeshOptimize::CObqMergeInstanceData*)pObjXXXX;
			jlong __values1_j = (jlong) (pObjectX->EVID);
			return __values1_j;
		}
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_meshoptimize_ObqMergeInstanceData_set_1EVID_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
		{
			EarthView::MeshOptimize::CObqMergeInstanceData *pObjectX = (EarthView::MeshOptimize::CObqMergeInstanceData*)pObjXXXX;
			pObjectX->EVID = (ev_uint32)__values1_j;
		}
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_meshoptimize_ObqMergeInstanceDataList_push_1back_1CObqMergeInstanceData(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
		{
			EarthView::MeshOptimize::CObqMergeInstanceData &t = *(EarthView::MeshOptimize::CObqMergeInstanceData*) t_j;
			EarthView::MeshOptimize::CObqMergeInstanceDataList *pObjectX = (EarthView::MeshOptimize::CObqMergeInstanceDataList*) pObjXXXX;
			pObjectX->push_back(t);
		}
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_meshoptimize_ObqMergeInstanceDataList_push_1front_1CObqMergeInstanceData(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
		{
			EarthView::MeshOptimize::CObqMergeInstanceData &t = *(EarthView::MeshOptimize::CObqMergeInstanceData*) t_j;
			EarthView::MeshOptimize::CObqMergeInstanceDataList *pObjectX = (EarthView::MeshOptimize::CObqMergeInstanceDataList*) pObjXXXX;
			pObjectX->push_front(t);
		}
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_meshoptimize_ObqMergeInstanceDataList_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
		{
			EarthView::MeshOptimize::CObqMergeInstanceDataList *pObjectX = (EarthView::MeshOptimize::CObqMergeInstanceDataList*) pObjXXXX;
			pObjectX->pop_back();
		}
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_meshoptimize_ObqMergeInstanceDataList_pop_1front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
		{
			EarthView::MeshOptimize::CObqMergeInstanceDataList *pObjectX = (EarthView::MeshOptimize::CObqMergeInstanceDataList*) pObjXXXX;
			pObjectX->pop_front();
		}
		extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_meshoptimize_ObqMergeInstanceDataList_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
		{
			EarthView::MeshOptimize::CObqMergeInstanceDataList *pObjectX = (EarthView::MeshOptimize::CObqMergeInstanceDataList*) pObjXXXX;
			EarthView::MeshOptimize::CObqMergeInstanceData& __values1 = pObjectX->front();
			jlong __values1_j = (jlong) &__values1;
			return __values1_j;
		}
		extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_meshoptimize_ObqMergeInstanceDataList_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
		{
			EarthView::MeshOptimize::CObqMergeInstanceDataList *pObjectX = (EarthView::MeshOptimize::CObqMergeInstanceDataList*) pObjXXXX;
			EarthView::MeshOptimize::CObqMergeInstanceData& __values1 = pObjectX->back();
			jlong __values1_j = (jlong) &__values1;
			return __values1_j;
		}
		extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_meshoptimize_ObqMergeInstanceDataList_at_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
		{
			ev_uint32 pos = (ev_uint32) pos_j;
			EarthView::MeshOptimize::CObqMergeInstanceDataList *pObjectX = (EarthView::MeshOptimize::CObqMergeInstanceDataList*) pObjXXXX;
			EarthView::MeshOptimize::CObqMergeInstanceData& __values1 = pObjectX->at(pos);
			jlong __values1_j = (jlong) &__values1;
			return __values1_j;
		}
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_meshoptimize_ObqMergeInstanceDataList_insert_1ev_1uint32_1CObqMergeInstanceData(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong t_j)
		{
			ev_uint32 pos = (ev_uint32) pos_j;
			EarthView::MeshOptimize::CObqMergeInstanceData &t = *(EarthView::MeshOptimize::CObqMergeInstanceData*) t_j;
			EarthView::MeshOptimize::CObqMergeInstanceDataList *pObjectX = (EarthView::MeshOptimize::CObqMergeInstanceDataList*) pObjXXXX;
			pObjectX->insert(pos, t);
		}
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_meshoptimize_ObqMergeInstanceDataList_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
		{
			ev_size_t pos = (ev_size_t) pos_j;
			EarthView::MeshOptimize::CObqMergeInstanceDataList *pObjectX = (EarthView::MeshOptimize::CObqMergeInstanceDataList*) pObjXXXX;
			pObjectX->remove(pos);
		}
		extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_meshoptimize_ObqMergeInstanceDataList_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
		{
			const 			EarthView::MeshOptimize::CObqMergeInstanceDataList *pObjectX = (EarthView::MeshOptimize::CObqMergeInstanceDataList*) pObjXXXX;
			ev_bool __values1 = pObjectX->empty();
			jboolean __values1_j = (jboolean)__values1;
			return __values1_j;
		}
		extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_meshoptimize_ObqMergeInstanceDataList_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
		{
			const 			EarthView::MeshOptimize::CObqMergeInstanceDataList *pObjectX = (EarthView::MeshOptimize::CObqMergeInstanceDataList*) pObjXXXX;
			ev_size_t __values1 = pObjectX->size();
			jlong __values1_j = (jlong) __values1;
			return __values1_j;
		}
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_meshoptimize_ObqMergeInstanceDataList_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
		{
			ev_size_t newSize = (ev_size_t) newSize_j;
			EarthView::MeshOptimize::CObqMergeInstanceDataList *pObjectX = (EarthView::MeshOptimize::CObqMergeInstanceDataList*) pObjXXXX;
			pObjectX->resize(newSize);
		}
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_meshoptimize_ObqMergeInstanceDataList_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
		{
			EarthView::MeshOptimize::CObqMergeInstanceDataList *pObjectX = (EarthView::MeshOptimize::CObqMergeInstanceDataList*) pObjXXXX;
			pObjectX->clear();
		}
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_meshoptimize_ObqMerge_merge_1EVString_1OBQRecordInfoList_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring srcFolder_j, jlong obqRecordInfoList_j, jboolean isAsyn_j)
		{
			#if EV_PLATFORM == EV_PLATFORM_ANDROID
			const ev_char* srcFolder_ch = (const ev_char*)__env->GetStringUTFChars(srcFolder_j,JNI_FALSE);
			const EVString srcFolder = srcFolder_ch;
			__env->ReleaseStringUTFChars(srcFolder_j, (const char *)srcFolder_ch);
			#else
			const ev_wchar* srcFolder_ch = (const ev_wchar*)__env->GetStringChars(srcFolder_j,JNI_FALSE);
			const EVString srcFolder = srcFolder_ch;
			__env->ReleaseStringChars(srcFolder_j, (const jchar *)srcFolder_ch);
			#endif
			EarthView::World::Spatial3D::ModelManager::OBQRecordInfoList obqRecordInfoList = *(EarthView::World::Spatial3D::ModelManager::OBQRecordInfoList*) obqRecordInfoList_j;
			ev_bool isAsyn = (ev_bool) isAsyn_j;
			EarthView::MeshOptimize::CObqMerge *pObjectX = (EarthView::MeshOptimize::CObqMerge*) pObjXXXX;
			pObjectX->merge(srcFolder, obqRecordInfoList, isAsyn);
		}
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_meshoptimize_ObqMerge_merge_1EVString_1CObqMergeInstanceDataList_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring dstFolder_j, jlong dataList_j, jboolean isAsyn_j)
		{
			#if EV_PLATFORM == EV_PLATFORM_ANDROID
			const ev_char* dstFolder_ch = (const ev_char*)__env->GetStringUTFChars(dstFolder_j,JNI_FALSE);
			const EVString dstFolder = dstFolder_ch;
			__env->ReleaseStringUTFChars(dstFolder_j, (const char *)dstFolder_ch);
			#else
			const ev_wchar* dstFolder_ch = (const ev_wchar*)__env->GetStringChars(dstFolder_j,JNI_FALSE);
			const EVString dstFolder = dstFolder_ch;
			__env->ReleaseStringChars(dstFolder_j, (const jchar *)dstFolder_ch);
			#endif
			EarthView::MeshOptimize::CObqMergeInstanceDataList dataList = *(EarthView::MeshOptimize::CObqMergeInstanceDataList*) dataList_j;
			ev_bool isAsyn = (ev_bool) isAsyn_j;
			EarthView::MeshOptimize::CObqMerge *pObjectX = (EarthView::MeshOptimize::CObqMerge*) pObjXXXX;
			pObjectX->merge(dstFolder, dataList, isAsyn);
		}
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_meshoptimize_ObqMerge_merge_1CStringArray_1EVString_1EVString_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong folders_j, jstring desFolder_j, jstring mergeName_j, jboolean isAsyn_j)
		{
			EarthView::World::Core::CStringArray &folders = *(EarthView::World::Core::CStringArray*) folders_j;
			#if EV_PLATFORM == EV_PLATFORM_ANDROID
			const ev_char* desFolder_ch = (const ev_char*)__env->GetStringUTFChars(desFolder_j,JNI_FALSE);
			const EVString desFolder = desFolder_ch;
			__env->ReleaseStringUTFChars(desFolder_j, (const char *)desFolder_ch);
			#else
			const ev_wchar* desFolder_ch = (const ev_wchar*)__env->GetStringChars(desFolder_j,JNI_FALSE);
			const EVString desFolder = desFolder_ch;
			__env->ReleaseStringChars(desFolder_j, (const jchar *)desFolder_ch);
			#endif
			#if EV_PLATFORM == EV_PLATFORM_ANDROID
			const ev_char* mergeName_ch = (const ev_char*)__env->GetStringUTFChars(mergeName_j,JNI_FALSE);
			const EVString mergeName = mergeName_ch;
			__env->ReleaseStringUTFChars(mergeName_j, (const char *)mergeName_ch);
			#else
			const ev_wchar* mergeName_ch = (const ev_wchar*)__env->GetStringChars(mergeName_j,JNI_FALSE);
			const EVString mergeName = mergeName_ch;
			__env->ReleaseStringChars(mergeName_j, (const jchar *)mergeName_ch);
			#endif
			ev_bool isAsyn = (ev_bool) isAsyn_j;
			EarthView::MeshOptimize::CObqMerge *pObjectX = (EarthView::MeshOptimize::CObqMerge*) pObjXXXX;
			pObjectX->merge(folders, desFolder, mergeName, isAsyn);
		}
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_meshoptimize_ObqMerge_setParam_1CObqQuadTreeParam(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong param_j)
		{
			EarthView::MeshOptimize::CObqQuadTreeParam &param = *(EarthView::MeshOptimize::CObqQuadTreeParam*) param_j;
			EarthView::MeshOptimize::CObqMerge *pObjectX = (EarthView::MeshOptimize::CObqMerge*) pObjXXXX;
			pObjectX->setParam(param);
		}
		extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_meshoptimize_ObqMerge_getParam_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
		{
			EarthView::MeshOptimize::CObqMerge *pObjectX = (EarthView::MeshOptimize::CObqMerge*) pObjXXXX;
			EarthView::MeshOptimize::CObqQuadTreeParam& __values1 = pObjectX->getParam();
			jlong __values1_j = (jlong) &__values1;
			return __values1_j;
		}
		extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_meshoptimize_ObqMerge_getCopyParam_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
		{
			EarthView::MeshOptimize::CObqMerge *pObjectX = (EarthView::MeshOptimize::CObqMerge*) pObjXXXX;
			EarthView::MeshOptimize::CObqQuadTreeParam __values1 = pObjectX->getCopyParam();
			EarthView::MeshOptimize::CObqQuadTreeParam *returnvalues = new EarthView::MeshOptimize::CObqQuadTreeParam(__values1);
			((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
			jlong __values1_j = (jlong) returnvalues;
			return __values1_j;
		}
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_meshoptimize_ObqMerge_addListener_1CObqMergeListener(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong observer_j)
		{
			EarthView::MeshOptimize::CObqMergeListener *observer = (EarthView::MeshOptimize::CObqMergeListener*) observer_j;
			EarthView::MeshOptimize::CObqMerge *pObjectX = (EarthView::MeshOptimize::CObqMerge*) pObjXXXX;
			pObjectX->addListener(observer);
		}
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_meshoptimize_ObqMerge_removeListener_1CObqMergeListener(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong observer_j)
		{
			EarthView::MeshOptimize::CObqMergeListener *observer = (EarthView::MeshOptimize::CObqMergeListener*) observer_j;
			EarthView::MeshOptimize::CObqMerge *pObjectX = (EarthView::MeshOptimize::CObqMerge*) pObjXXXX;
			pObjectX->removeListener(observer);
		}
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_meshoptimize_ObqMerge_addMeshxInstance_1CObqMergeInstanceData(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong instanceData_j)
		{
			EarthView::MeshOptimize::CObqMergeInstanceData instanceData = *(EarthView::MeshOptimize::CObqMergeInstanceData*) instanceData_j;
			EarthView::MeshOptimize::CObqMerge *pObjectX = (EarthView::MeshOptimize::CObqMerge*) pObjXXXX;
			pObjectX->addMeshxInstance(instanceData);
		}
	}
}
