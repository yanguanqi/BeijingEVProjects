/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "meshoptimize/modellodgenerator.h"
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
			}
			namespace Dataset
			{
			}
		}
	}
	namespace MeshOptimize
	{
		extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_meshoptimize_MeshOptimizeData_get_1MeshData_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
		{
			EarthView::MeshOptimize::CMeshOptimizeData *pObjectX = (EarthView::MeshOptimize::CMeshOptimizeData*)pObjXXXX;
			jlong __values1_j = (jlong) &(pObjectX->MeshData);
			return __values1_j;
		}
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_meshoptimize_MeshOptimizeData_set_1MeshData_1CMeshPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
		{
			EarthView::MeshOptimize::CMeshOptimizeData *pObjectX = (EarthView::MeshOptimize::CMeshOptimizeData*)pObjXXXX;
			pObjectX->MeshData = *(EarthView::World::Graphic::CMeshPtr*) __values1_j;
		}
		extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_meshoptimize_MeshOptimizeData_get_1AniData_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
		{
			EarthView::MeshOptimize::CMeshOptimizeData *pObjectX = (EarthView::MeshOptimize::CMeshOptimizeData*)pObjXXXX;
			jlong __values1_j = (jlong) &(pObjectX->AniData);
			return __values1_j;
		}
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_meshoptimize_MeshOptimizeData_set_1AniData_1DataStreamPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
		{
			EarthView::MeshOptimize::CMeshOptimizeData *pObjectX = (EarthView::MeshOptimize::CMeshOptimizeData*)pObjXXXX;
			pObjectX->AniData = *(EarthView::World::Core::DataStreamPtr*) __values1_j;
		}
		extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_meshoptimize_MeshOptimizeData_get_1LocalMat_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
		{
			EarthView::MeshOptimize::CMeshOptimizeData *pObjectX = (EarthView::MeshOptimize::CMeshOptimizeData*)pObjXXXX;
			jlong __values1_j = (jlong) &(pObjectX->LocalMat);
			return __values1_j;
		}
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_meshoptimize_MeshOptimizeData_set_1LocalMat_1CMatrix4(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
		{
			EarthView::MeshOptimize::CMeshOptimizeData *pObjectX = (EarthView::MeshOptimize::CMeshOptimizeData*)pObjXXXX;
			pObjectX->LocalMat = *(EarthView::World::Spatial::Math::CMatrix4*) __values1_j;
		}
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_meshoptimize_MeshOptimizeDataList_push_1back_1CMeshOptimizeData(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
		{
			EarthView::MeshOptimize::CMeshOptimizeData &t = *(EarthView::MeshOptimize::CMeshOptimizeData*) t_j;
			EarthView::MeshOptimize::MeshOptimizeDataList *pObjectX = (EarthView::MeshOptimize::MeshOptimizeDataList*) pObjXXXX;
			pObjectX->push_back(t);
		}
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_meshoptimize_MeshOptimizeDataList_push_1front_1CMeshOptimizeData(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
		{
			EarthView::MeshOptimize::CMeshOptimizeData &t = *(EarthView::MeshOptimize::CMeshOptimizeData*) t_j;
			EarthView::MeshOptimize::MeshOptimizeDataList *pObjectX = (EarthView::MeshOptimize::MeshOptimizeDataList*) pObjXXXX;
			pObjectX->push_front(t);
		}
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_meshoptimize_MeshOptimizeDataList_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
		{
			EarthView::MeshOptimize::MeshOptimizeDataList *pObjectX = (EarthView::MeshOptimize::MeshOptimizeDataList*) pObjXXXX;
			pObjectX->pop_back();
		}
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_meshoptimize_MeshOptimizeDataList_pop_1front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
		{
			EarthView::MeshOptimize::MeshOptimizeDataList *pObjectX = (EarthView::MeshOptimize::MeshOptimizeDataList*) pObjXXXX;
			pObjectX->pop_front();
		}
		extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_meshoptimize_MeshOptimizeDataList_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
		{
			EarthView::MeshOptimize::MeshOptimizeDataList *pObjectX = (EarthView::MeshOptimize::MeshOptimizeDataList*) pObjXXXX;
			EarthView::MeshOptimize::CMeshOptimizeData& __values1 = pObjectX->front();
			jlong __values1_j = (jlong) &__values1;
			return __values1_j;
		}
		extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_meshoptimize_MeshOptimizeDataList_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
		{
			EarthView::MeshOptimize::MeshOptimizeDataList *pObjectX = (EarthView::MeshOptimize::MeshOptimizeDataList*) pObjXXXX;
			EarthView::MeshOptimize::CMeshOptimizeData& __values1 = pObjectX->back();
			jlong __values1_j = (jlong) &__values1;
			return __values1_j;
		}
		extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_meshoptimize_MeshOptimizeDataList_at_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
		{
			ev_uint32 pos = (ev_uint32) pos_j;
			EarthView::MeshOptimize::MeshOptimizeDataList *pObjectX = (EarthView::MeshOptimize::MeshOptimizeDataList*) pObjXXXX;
			EarthView::MeshOptimize::CMeshOptimizeData& __values1 = pObjectX->at(pos);
			jlong __values1_j = (jlong) &__values1;
			return __values1_j;
		}
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_meshoptimize_MeshOptimizeDataList_insert_1ev_1uint32_1CMeshOptimizeData(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong t_j)
		{
			ev_uint32 pos = (ev_uint32) pos_j;
			EarthView::MeshOptimize::CMeshOptimizeData &t = *(EarthView::MeshOptimize::CMeshOptimizeData*) t_j;
			EarthView::MeshOptimize::MeshOptimizeDataList *pObjectX = (EarthView::MeshOptimize::MeshOptimizeDataList*) pObjXXXX;
			pObjectX->insert(pos, t);
		}
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_meshoptimize_MeshOptimizeDataList_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
		{
			ev_size_t pos = (ev_size_t) pos_j;
			EarthView::MeshOptimize::MeshOptimizeDataList *pObjectX = (EarthView::MeshOptimize::MeshOptimizeDataList*) pObjXXXX;
			pObjectX->remove(pos);
		}
		extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_meshoptimize_MeshOptimizeDataList_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
		{
			const 			EarthView::MeshOptimize::MeshOptimizeDataList *pObjectX = (EarthView::MeshOptimize::MeshOptimizeDataList*) pObjXXXX;
			ev_bool __values1 = pObjectX->empty();
			jboolean __values1_j = (jboolean)__values1;
			return __values1_j;
		}
		extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_meshoptimize_MeshOptimizeDataList_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
		{
			const 			EarthView::MeshOptimize::MeshOptimizeDataList *pObjectX = (EarthView::MeshOptimize::MeshOptimizeDataList*) pObjXXXX;
			ev_size_t __values1 = pObjectX->size();
			jlong __values1_j = (jlong) __values1;
			return __values1_j;
		}
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_meshoptimize_MeshOptimizeDataList_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
		{
			ev_size_t newSize = (ev_size_t) newSize_j;
			EarthView::MeshOptimize::MeshOptimizeDataList *pObjectX = (EarthView::MeshOptimize::MeshOptimizeDataList*) pObjXXXX;
			pObjectX->resize(newSize);
		}
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_meshoptimize_MeshOptimizeDataList_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
		{
			EarthView::MeshOptimize::MeshOptimizeDataList *pObjectX = (EarthView::MeshOptimize::MeshOptimizeDataList*) pObjXXXX;
			pObjectX->clear();
		}
		extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_meshoptimize_MeshOptimizeDataSource_get_1ExportName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
		{
			EarthView::MeshOptimize::CMeshOptimizeDataSource *pObjectX = (EarthView::MeshOptimize::CMeshOptimizeDataSource*)pObjXXXX;
			EarthView::World::Core::ev_wstring __values1_ch = pObjectX->ExportName;
			jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
			return __values1_j;
		}
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_meshoptimize_MeshOptimizeDataSource_set_1ExportName_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
		{
			EarthView::MeshOptimize::CMeshOptimizeDataSource *pObjectX = (EarthView::MeshOptimize::CMeshOptimizeDataSource*)pObjXXXX;
			const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
			pObjectX->ExportName = __values1_ch;
			__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
		}
		extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_meshoptimize_MeshOptimizeDataSource_get_1MeshDataList_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
		{
			EarthView::MeshOptimize::CMeshOptimizeDataSource *pObjectX = (EarthView::MeshOptimize::CMeshOptimizeDataSource*)pObjXXXX;
			jlong __values1_j = (jlong) &(pObjectX->MeshDataList);
			return __values1_j;
		}
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_meshoptimize_MeshOptimizeDataSource_set_1MeshDataList_1MeshOptimizeDataList(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
		{
			EarthView::MeshOptimize::CMeshOptimizeDataSource *pObjectX = (EarthView::MeshOptimize::CMeshOptimizeDataSource*)pObjXXXX;
			pObjectX->MeshDataList = *(EarthView::MeshOptimize::MeshOptimizeDataList*) __values1_j;
		}
		class JCModelLODGenerateListenerProxy : public EarthView::MeshOptimize::CModelLODGenerateListener
		{
		 private:
			EarthView::World::Core::ev_string m_processMsg_EVString_callback;
			EarthView::World::Core::ev_string m_paused_void_callback;
			EarthView::World::Core::ev_string m_finished_void_callback;
			EarthView::World::Core::ev_string m_processProgress_ev_uint32_ev_uint32_callback;
		public:
			JCModelLODGenerateListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CModelLODGenerateListener(pList)
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
					return this->CModelLODGenerateListener::processMsg(msg);
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
					return this->CModelLODGenerateListener::paused();
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
					return this->CModelLODGenerateListener::finished();
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
					return this->CModelLODGenerateListener::processProgress(total, current);
				}
			}
		};
		REGISTER_FACTORY_CLASS(JCModelLODGenerateListenerProxy);
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_meshoptimize_ModelLODGenerateListener_processMsg_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring msg_j)
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
			EarthView::MeshOptimize::CModelLODGenerateListener *pObjectX = (EarthView::MeshOptimize::CModelLODGenerateListener*) pObjXXXX;
			if (typeid(*pObjectX) == typeid(JCModelLODGenerateListenerProxy))
			{
				pObjectX->EarthView::MeshOptimize::CModelLODGenerateListener::processMsg(msg);
			}
			else
			{
				pObjectX->processMsg(msg);
			}
		}
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_meshoptimize_ModelLODGenerateListener_register_1processMsg_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
		{
			JCModelLODGenerateListenerProxy *pObjectX = (JCModelLODGenerateListenerProxy*) pObjXXXX;
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
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_meshoptimize_ModelLODGenerateListener_processMsg_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring msg_j)
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
			EarthView::MeshOptimize::CModelLODGenerateListener *pObjectX = (EarthView::MeshOptimize::CModelLODGenerateListener*) pObjXXXX;
			pObjectX->EarthView::MeshOptimize::CModelLODGenerateListener::processMsg(msg);
		}
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_meshoptimize_ModelLODGenerateListener_paused_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
		{
			EarthView::MeshOptimize::CModelLODGenerateListener *pObjectX = (EarthView::MeshOptimize::CModelLODGenerateListener*) pObjXXXX;
			if (typeid(*pObjectX) == typeid(JCModelLODGenerateListenerProxy))
			{
				pObjectX->EarthView::MeshOptimize::CModelLODGenerateListener::paused();
			}
			else
			{
				pObjectX->paused();
			}
		}
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_meshoptimize_ModelLODGenerateListener_register_1paused_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
		{
			JCModelLODGenerateListenerProxy *pObjectX = (JCModelLODGenerateListenerProxy*) pObjXXXX;
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
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_meshoptimize_ModelLODGenerateListener_paused_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
		{
			EarthView::MeshOptimize::CModelLODGenerateListener *pObjectX = (EarthView::MeshOptimize::CModelLODGenerateListener*) pObjXXXX;
			pObjectX->EarthView::MeshOptimize::CModelLODGenerateListener::paused();
		}
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_meshoptimize_ModelLODGenerateListener_finished_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
		{
			EarthView::MeshOptimize::CModelLODGenerateListener *pObjectX = (EarthView::MeshOptimize::CModelLODGenerateListener*) pObjXXXX;
			if (typeid(*pObjectX) == typeid(JCModelLODGenerateListenerProxy))
			{
				pObjectX->EarthView::MeshOptimize::CModelLODGenerateListener::finished();
			}
			else
			{
				pObjectX->finished();
			}
		}
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_meshoptimize_ModelLODGenerateListener_register_1finished_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
		{
			JCModelLODGenerateListenerProxy *pObjectX = (JCModelLODGenerateListenerProxy*) pObjXXXX;
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
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_meshoptimize_ModelLODGenerateListener_finished_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
		{
			EarthView::MeshOptimize::CModelLODGenerateListener *pObjectX = (EarthView::MeshOptimize::CModelLODGenerateListener*) pObjXXXX;
			pObjectX->EarthView::MeshOptimize::CModelLODGenerateListener::finished();
		}
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_meshoptimize_ModelLODGenerateListener_processProgress_1ev_1uint32_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong total_j, jlong current_j)
		{
			ev_uint32 total = (ev_uint32) total_j;
			ev_uint32 current = (ev_uint32) current_j;
			EarthView::MeshOptimize::CModelLODGenerateListener *pObjectX = (EarthView::MeshOptimize::CModelLODGenerateListener*) pObjXXXX;
			if (typeid(*pObjectX) == typeid(JCModelLODGenerateListenerProxy))
			{
				pObjectX->EarthView::MeshOptimize::CModelLODGenerateListener::processProgress(total, current);
			}
			else
			{
				pObjectX->processProgress(total, current);
			}
		}
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_meshoptimize_ModelLODGenerateListener_register_1processProgress_1ev_1uint32_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
		{
			JCModelLODGenerateListenerProxy *pObjectX = (JCModelLODGenerateListenerProxy*) pObjXXXX;
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
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_meshoptimize_ModelLODGenerateListener_processProgress_1ev_1uint32_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong total_j, jlong current_j)
		{
			ev_uint32 total = (ev_uint32) total_j;
			ev_uint32 current = (ev_uint32) current_j;
			EarthView::MeshOptimize::CModelLODGenerateListener *pObjectX = (EarthView::MeshOptimize::CModelLODGenerateListener*) pObjXXXX;
			pObjectX->EarthView::MeshOptimize::CModelLODGenerateListener::processProgress(total, current);
		}
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_meshoptimize_ModelLODParam_setBuildQuadtree_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean buildQuadTree_j)
		{
			ev_bool buildQuadTree = (ev_bool) buildQuadTree_j;
			EarthView::MeshOptimize::CModelLODParam *pObjectX = (EarthView::MeshOptimize::CModelLODParam*) pObjXXXX;
			pObjectX->setBuildQuadtree(buildQuadTree);
		}
		extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_meshoptimize_ModelLODParam_getBuildQuadtree_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
		{
			EarthView::MeshOptimize::CModelLODParam *pObjectX = (EarthView::MeshOptimize::CModelLODParam*) pObjXXXX;
			ev_bool __values1 = pObjectX->getBuildQuadtree();
			jboolean __values1_j = (jboolean)__values1;
			return __values1_j;
		}
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_meshoptimize_ModelLODParam_setUseDoubleSideLight_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean useDoubleSideLight_j)
		{
			ev_bool useDoubleSideLight = (ev_bool) useDoubleSideLight_j;
			EarthView::MeshOptimize::CModelLODParam *pObjectX = (EarthView::MeshOptimize::CModelLODParam*) pObjXXXX;
			pObjectX->setUseDoubleSideLight(useDoubleSideLight);
		}
		extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_meshoptimize_ModelLODParam_getUseDoubleSideLight_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
		{
			EarthView::MeshOptimize::CModelLODParam *pObjectX = (EarthView::MeshOptimize::CModelLODParam*) pObjXXXX;
			ev_bool __values1 = pObjectX->getUseDoubleSideLight();
			jboolean __values1_j = (jboolean)__values1;
			return __values1_j;
		}
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_meshoptimize_ModelLODParam_setUseInstance_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean useInstance_j)
		{
			ev_bool useInstance = (ev_bool) useInstance_j;
			EarthView::MeshOptimize::CModelLODParam *pObjectX = (EarthView::MeshOptimize::CModelLODParam*) pObjXXXX;
			pObjectX->setUseInstance(useInstance);
		}
		extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_meshoptimize_ModelLODParam_getUseInstance_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
		{
			EarthView::MeshOptimize::CModelLODParam *pObjectX = (EarthView::MeshOptimize::CModelLODParam*) pObjXXXX;
			ev_bool __values1 = pObjectX->getUseInstance();
			jboolean __values1_j = (jboolean)__values1;
			return __values1_j;
		}
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_meshoptimize_ModelLODParam_setCombineSubmesh_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean combineSubMesh_j)
		{
			ev_bool combineSubMesh = (ev_bool) combineSubMesh_j;
			EarthView::MeshOptimize::CModelLODParam *pObjectX = (EarthView::MeshOptimize::CModelLODParam*) pObjXXXX;
			pObjectX->setCombineSubmesh(combineSubMesh);
		}
		extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_meshoptimize_ModelLODParam_getCombineSubmesh_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
		{
			EarthView::MeshOptimize::CModelLODParam *pObjectX = (EarthView::MeshOptimize::CModelLODParam*) pObjXXXX;
			ev_bool __values1 = pObjectX->getCombineSubmesh();
			jboolean __values1_j = (jboolean)__values1;
			return __values1_j;
		}
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_meshoptimize_ModelLODParam_setToDDS_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean toDDS_j)
		{
			ev_bool toDDS = (ev_bool) toDDS_j;
			EarthView::MeshOptimize::CModelLODParam *pObjectX = (EarthView::MeshOptimize::CModelLODParam*) pObjXXXX;
			pObjectX->setToDDS(toDDS);
		}
		extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_meshoptimize_ModelLODParam_getToDDS_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
		{
			EarthView::MeshOptimize::CModelLODParam *pObjectX = (EarthView::MeshOptimize::CModelLODParam*) pObjXXXX;
			ev_bool __values1 = pObjectX->getToDDS();
			jboolean __values1_j = (jboolean)__values1;
			return __values1_j;
		}
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_meshoptimize_ModelLODParam_setEncode7z_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean encode7z_j)
		{
			ev_bool encode7z = (ev_bool) encode7z_j;
			EarthView::MeshOptimize::CModelLODParam *pObjectX = (EarthView::MeshOptimize::CModelLODParam*) pObjXXXX;
			pObjectX->setEncode7z(encode7z);
		}
		extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_meshoptimize_ModelLODParam_getEncode7z_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
		{
			EarthView::MeshOptimize::CModelLODParam *pObjectX = (EarthView::MeshOptimize::CModelLODParam*) pObjXXXX;
			ev_bool __values1 = pObjectX->getEncode7z();
			jboolean __values1_j = (jboolean)__values1;
			return __values1_j;
		}
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_meshoptimize_ModelLODParam_setUseShareMaterial_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean useshareMaterial_j)
		{
			ev_bool useshareMaterial = (ev_bool) useshareMaterial_j;
			EarthView::MeshOptimize::CModelLODParam *pObjectX = (EarthView::MeshOptimize::CModelLODParam*) pObjXXXX;
			pObjectX->setUseShareMaterial(useshareMaterial);
		}
		extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_meshoptimize_ModelLODParam_getUseShareMaterial_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
		{
			EarthView::MeshOptimize::CModelLODParam *pObjectX = (EarthView::MeshOptimize::CModelLODParam*) pObjXXXX;
			ev_bool __values1 = pObjectX->getUseShareMaterial();
			jboolean __values1_j = (jboolean)__values1;
			return __values1_j;
		}
		extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_meshoptimize_ModelLODParam_existLODParam_1ev_1uint8_1CMeshOptimizeParams(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jshort level_j, jlong param_j)
		{
			ev_uint8 level = (ev_uint8) level_j;
			EarthView::MeshOptimize::CMeshOptimizeParams &param = *(EarthView::MeshOptimize::CMeshOptimizeParams*) param_j;
			EarthView::MeshOptimize::CModelLODParam *pObjectX = (EarthView::MeshOptimize::CModelLODParam*) pObjXXXX;
			ev_bool __values1 = pObjectX->existLODParam(level, param);
			jboolean __values1_j = (jboolean)__values1;
			return __values1_j;
		}
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_meshoptimize_ModelLODParam_updateLODParam_1ev_1uint8_1CMeshOptimizeParams(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jshort level_j, jlong param_j)
		{
			ev_uint8 level = (ev_uint8) level_j;
			EarthView::MeshOptimize::CMeshOptimizeParams param = *(EarthView::MeshOptimize::CMeshOptimizeParams*) param_j;
			EarthView::MeshOptimize::CModelLODParam *pObjectX = (EarthView::MeshOptimize::CModelLODParam*) pObjXXXX;
			pObjectX->updateLODParam(level, param);
		}
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_meshoptimize_ModelLODParam_addLODParam_1ev_1uint8_1CMeshOptimizeParams(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jshort level_j, jlong param_j)
		{
			ev_uint8 level = (ev_uint8) level_j;
			EarthView::MeshOptimize::CMeshOptimizeParams param = *(EarthView::MeshOptimize::CMeshOptimizeParams*) param_j;
			EarthView::MeshOptimize::CModelLODParam *pObjectX = (EarthView::MeshOptimize::CModelLODParam*) pObjXXXX;
			pObjectX->addLODParam(level, param);
		}
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_meshoptimize_ModelLODParam_removeLODParam_1ev_1uint8(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jshort level_j)
		{
			ev_uint8 level = (ev_uint8) level_j;
			EarthView::MeshOptimize::CModelLODParam *pObjectX = (EarthView::MeshOptimize::CModelLODParam*) pObjXXXX;
			pObjectX->removeLODParam(level);
		}
		extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_meshoptimize_ModelLODParam_getLODParam_1ev_1uint8(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jshort level_j)
		{
			ev_uint8 level = (ev_uint8) level_j;
			EarthView::MeshOptimize::CModelLODParam *pObjectX = (EarthView::MeshOptimize::CModelLODParam*) pObjXXXX;
			EarthView::MeshOptimize::CMeshOptimizeParams __values1 = pObjectX->getLODParam(level);
			EarthView::MeshOptimize::CMeshOptimizeParams *returnvalues = new EarthView::MeshOptimize::CMeshOptimizeParams(__values1);
			((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
			jlong __values1_j = (jlong) returnvalues;
			return __values1_j;
		}
		extern "C" JNIEXPORT jint JNICALL Java_com_earthview_meshoptimize_ModelLODParam_getLODParamSize_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
		{
			EarthView::MeshOptimize::CModelLODParam *pObjectX = (EarthView::MeshOptimize::CModelLODParam*) pObjXXXX;
			ev_int32 __values1 = pObjectX->getLODParamSize();
			jint __values1_j = (jint)__values1;
			return __values1_j;
		}
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_meshoptimize_ModelLODParam_clearLODParam_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
		{
			EarthView::MeshOptimize::CModelLODParam *pObjectX = (EarthView::MeshOptimize::CModelLODParam*) pObjXXXX;
			pObjectX->clearLODParam();
		}
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_meshoptimize_ModelLODParam_fromXml_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring filePath_j)
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
			EarthView::MeshOptimize::CModelLODParam *pObjectX = (EarthView::MeshOptimize::CModelLODParam*) pObjXXXX;
			pObjectX->fromXml(filePath);
		}
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_meshoptimize_ModelLODParam_toXml_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring filePath_j)
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
			EarthView::MeshOptimize::CModelLODParam *pObjectX = (EarthView::MeshOptimize::CModelLODParam*) pObjXXXX;
			pObjectX->toXml(filePath);
		}
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_meshoptimize_ModelLODParam_setLocation_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble lat_j, jdouble lon_j, jdouble alt_j)
		{
			ev_real64 lat = (ev_real64) lat_j;
			ev_real64 lon = (ev_real64) lon_j;
			ev_real64 alt = (ev_real64) alt_j;
			EarthView::MeshOptimize::CModelLODParam *pObjectX = (EarthView::MeshOptimize::CModelLODParam*) pObjXXXX;
			pObjectX->setLocation(lat, lon, alt);
		}
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_meshoptimize_ModelLODParam_getLocation_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong lat_j, jlong lon_j, jlong alt_j)
		{
			ev_real64 &lat = *(ev_real64*) lat_j;
			ev_real64 &lon = *(ev_real64*) lon_j;
			ev_real64 &alt = *(ev_real64*) alt_j;
			EarthView::MeshOptimize::CModelLODParam *pObjectX = (EarthView::MeshOptimize::CModelLODParam*) pObjXXXX;
			pObjectX->getLocation(lat, lon, alt);
		}
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_meshoptimize_ModelLODParam_setLocalTranform_1CVector3_1CVector3_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong scale_j, jlong rotate_j, jlong translate_j)
		{
			EarthView::World::Spatial::Math::CVector3 scale = *(EarthView::World::Spatial::Math::CVector3*) scale_j;
			EarthView::World::Spatial::Math::CVector3 rotate = *(EarthView::World::Spatial::Math::CVector3*) rotate_j;
			EarthView::World::Spatial::Math::CVector3 translate = *(EarthView::World::Spatial::Math::CVector3*) translate_j;
			EarthView::MeshOptimize::CModelLODParam *pObjectX = (EarthView::MeshOptimize::CModelLODParam*) pObjXXXX;
			pObjectX->setLocalTranform(scale, rotate, translate);
		}
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_meshoptimize_ModelLODParam_getLocalTransform_1CVector3_1CVector3_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong scale_j, jlong rotate_j, jlong translate_j)
		{
			EarthView::World::Spatial::Math::CVector3 &scale = *(EarthView::World::Spatial::Math::CVector3*) scale_j;
			EarthView::World::Spatial::Math::CVector3 &rotate = *(EarthView::World::Spatial::Math::CVector3*) rotate_j;
			EarthView::World::Spatial::Math::CVector3 &translate = *(EarthView::World::Spatial::Math::CVector3*) translate_j;
			EarthView::MeshOptimize::CModelLODParam *pObjectX = (EarthView::MeshOptimize::CModelLODParam*) pObjXXXX;
			pObjectX->getLocalTransform(scale, rotate, translate);
		}
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_meshoptimize_ModelLODParam_setTextureQuality_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean quality_j)
		{
			ev_bool quality = (ev_bool) quality_j;
			EarthView::MeshOptimize::CModelLODParam *pObjectX = (EarthView::MeshOptimize::CModelLODParam*) pObjXXXX;
			pObjectX->setTextureQuality(quality);
		}
		extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_meshoptimize_ModelLODParam_getTextureQuality_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
		{
			EarthView::MeshOptimize::CModelLODParam *pObjectX = (EarthView::MeshOptimize::CModelLODParam*) pObjXXXX;
			ev_bool __values1 = pObjectX->getTextureQuality();
			jboolean __values1_j = (jboolean)__values1;
			return __values1_j;
		}
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_meshoptimize_ModelLODGenerator_generate_1EVString_1EVString_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring localFolderSource_j, jstring dstFolder_j, jboolean isAsyn_j)
		{
			#if EV_PLATFORM == EV_PLATFORM_ANDROID
			const ev_char* localFolderSource_ch = (const ev_char*)__env->GetStringUTFChars(localFolderSource_j,JNI_FALSE);
			const EVString localFolderSource = localFolderSource_ch;
			__env->ReleaseStringUTFChars(localFolderSource_j, (const char *)localFolderSource_ch);
			#else
			const ev_wchar* localFolderSource_ch = (const ev_wchar*)__env->GetStringChars(localFolderSource_j,JNI_FALSE);
			const EVString localFolderSource = localFolderSource_ch;
			__env->ReleaseStringChars(localFolderSource_j, (const jchar *)localFolderSource_ch);
			#endif
			#if EV_PLATFORM == EV_PLATFORM_ANDROID
			const ev_char* dstFolder_ch = (const ev_char*)__env->GetStringUTFChars(dstFolder_j,JNI_FALSE);
			const EVString dstFolder = dstFolder_ch;
			__env->ReleaseStringUTFChars(dstFolder_j, (const char *)dstFolder_ch);
			#else
			const ev_wchar* dstFolder_ch = (const ev_wchar*)__env->GetStringChars(dstFolder_j,JNI_FALSE);
			const EVString dstFolder = dstFolder_ch;
			__env->ReleaseStringChars(dstFolder_j, (const jchar *)dstFolder_ch);
			#endif
			ev_bool isAsyn = (ev_bool) isAsyn_j;
			EarthView::MeshOptimize::CModelLODGenerator *pObjectX = (EarthView::MeshOptimize::CModelLODGenerator*) pObjXXXX;
			pObjectX->generate(localFolderSource, dstFolder, isAsyn);
		}
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_meshoptimize_ModelLODGenerator_generate_1CEntityDataset_1EVString_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong datasetSource_j, jstring dstFolder_j, jboolean isAsyn_j)
		{
			EarthView::World::Spatial3D::Dataset::CEntityDataset *datasetSource = (EarthView::World::Spatial3D::Dataset::CEntityDataset*) datasetSource_j;
			#if EV_PLATFORM == EV_PLATFORM_ANDROID
			const ev_char* dstFolder_ch = (const ev_char*)__env->GetStringUTFChars(dstFolder_j,JNI_FALSE);
			const EVString dstFolder = dstFolder_ch;
			__env->ReleaseStringUTFChars(dstFolder_j, (const char *)dstFolder_ch);
			#else
			const ev_wchar* dstFolder_ch = (const ev_wchar*)__env->GetStringChars(dstFolder_j,JNI_FALSE);
			const EVString dstFolder = dstFolder_ch;
			__env->ReleaseStringChars(dstFolder_j, (const jchar *)dstFolder_ch);
			#endif
			ev_bool isAsyn = (ev_bool) isAsyn_j;
			EarthView::MeshOptimize::CModelLODGenerator *pObjectX = (EarthView::MeshOptimize::CModelLODGenerator*) pObjXXXX;
			pObjectX->generate(datasetSource, dstFolder, isAsyn);
		}
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_meshoptimize_ModelLODGenerator_generate_1CEntityDataset_1EVString_1IntVector_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong datasetSource_j, jstring dstFolder_j, jlong vec_j, jboolean isAsyn_j)
		{
			EarthView::World::Spatial3D::Dataset::CEntityDataset *datasetSource = (EarthView::World::Spatial3D::Dataset::CEntityDataset*) datasetSource_j;
			#if EV_PLATFORM == EV_PLATFORM_ANDROID
			const ev_char* dstFolder_ch = (const ev_char*)__env->GetStringUTFChars(dstFolder_j,JNI_FALSE);
			const EVString dstFolder = dstFolder_ch;
			__env->ReleaseStringUTFChars(dstFolder_j, (const char *)dstFolder_ch);
			#else
			const ev_wchar* dstFolder_ch = (const ev_wchar*)__env->GetStringChars(dstFolder_j,JNI_FALSE);
			const EVString dstFolder = dstFolder_ch;
			__env->ReleaseStringChars(dstFolder_j, (const jchar *)dstFolder_ch);
			#endif
			const EarthView::World::Core::IntVector &vec = *(EarthView::World::Core::IntVector*) vec_j;
			ev_bool isAsyn = (ev_bool) isAsyn_j;
			EarthView::MeshOptimize::CModelLODGenerator *pObjectX = (EarthView::MeshOptimize::CModelLODGenerator*) pObjXXXX;
			pObjectX->generate(datasetSource, dstFolder, vec, isAsyn);
		}
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_meshoptimize_ModelLODGenerator_generate_1CMeshOptimizeDataSource_1EVString_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong memDataSource_j, jstring dstFolder_j, jboolean isAsyn_j)
		{
			EarthView::MeshOptimize::CMeshOptimizeDataSource memDataSource = *(EarthView::MeshOptimize::CMeshOptimizeDataSource*) memDataSource_j;
			#if EV_PLATFORM == EV_PLATFORM_ANDROID
			const ev_char* dstFolder_ch = (const ev_char*)__env->GetStringUTFChars(dstFolder_j,JNI_FALSE);
			const EVString dstFolder = dstFolder_ch;
			__env->ReleaseStringUTFChars(dstFolder_j, (const char *)dstFolder_ch);
			#else
			const ev_wchar* dstFolder_ch = (const ev_wchar*)__env->GetStringChars(dstFolder_j,JNI_FALSE);
			const EVString dstFolder = dstFolder_ch;
			__env->ReleaseStringChars(dstFolder_j, (const jchar *)dstFolder_ch);
			#endif
			ev_bool isAsyn = (ev_bool) isAsyn_j;
			EarthView::MeshOptimize::CModelLODGenerator *pObjectX = (EarthView::MeshOptimize::CModelLODGenerator*) pObjXXXX;
			pObjectX->generate(memDataSource, dstFolder, isAsyn);
		}
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_meshoptimize_ModelLODGenerator_setCollectInfo_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean collect_j)
		{
			ev_bool collect = (ev_bool) collect_j;
			EarthView::MeshOptimize::CModelLODGenerator *pObjectX = (EarthView::MeshOptimize::CModelLODGenerator*) pObjXXXX;
			pObjectX->setCollectInfo(collect);
		}
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_meshoptimize_ModelLODGenerator_addListener_1CModelLODGenerateListener(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong observer_j)
		{
			EarthView::MeshOptimize::CModelLODGenerateListener *observer = (EarthView::MeshOptimize::CModelLODGenerateListener*) observer_j;
			EarthView::MeshOptimize::CModelLODGenerator *pObjectX = (EarthView::MeshOptimize::CModelLODGenerator*) pObjXXXX;
			pObjectX->addListener(observer);
		}
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_meshoptimize_ModelLODGenerator_removeListener_1CModelLODGenerateListener(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong observer_j)
		{
			EarthView::MeshOptimize::CModelLODGenerateListener *observer = (EarthView::MeshOptimize::CModelLODGenerateListener*) observer_j;
			EarthView::MeshOptimize::CModelLODGenerator *pObjectX = (EarthView::MeshOptimize::CModelLODGenerator*) pObjXXXX;
			pObjectX->removeListener(observer);
		}
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_meshoptimize_ModelLODGenerator_setParam_1CModelLODParam(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong param_j)
		{
			EarthView::MeshOptimize::CModelLODParam param = *(EarthView::MeshOptimize::CModelLODParam*) param_j;
			EarthView::MeshOptimize::CModelLODGenerator *pObjectX = (EarthView::MeshOptimize::CModelLODGenerator*) pObjXXXX;
			pObjectX->setParam(param);
		}
		extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_meshoptimize_ModelLODGenerator_getParam_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
		{
			EarthView::MeshOptimize::CModelLODGenerator *pObjectX = (EarthView::MeshOptimize::CModelLODGenerator*) pObjXXXX;
			EarthView::MeshOptimize::CModelLODParam& __values1 = pObjectX->getParam();
			jlong __values1_j = (jlong) &__values1;
			return __values1_j;
		}
		extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_meshoptimize_ModelLODGenerator_getCopyParam_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
		{
			EarthView::MeshOptimize::CModelLODGenerator *pObjectX = (EarthView::MeshOptimize::CModelLODGenerator*) pObjXXXX;
			EarthView::MeshOptimize::CModelLODParam __values1 = pObjectX->getCopyParam();
			EarthView::MeshOptimize::CModelLODParam *returnvalues = new EarthView::MeshOptimize::CModelLODParam(__values1);
			((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
			jlong __values1_j = (jlong) returnvalues;
			return __values1_j;
		}
		extern "C" JNIEXPORT void JNICALL Java_com_earthview_meshoptimize_ModelLODGenerator_stop_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
		{
			EarthView::MeshOptimize::CModelLODGenerator *pObjectX = (EarthView::MeshOptimize::CModelLODGenerator*) pObjXXXX;
			pObjectX->stop();
		}
	}
}
