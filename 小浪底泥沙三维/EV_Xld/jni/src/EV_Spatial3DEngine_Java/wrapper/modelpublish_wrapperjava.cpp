/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/modelpublish.h"
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
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_ModelIdAndNameMap_push_1ev_1uint16_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint key_j, jstring val_j)
			{
				ev_uint16 key = (ev_uint16) key_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* val_ch = (const ev_char*)__env->GetStringUTFChars(val_j,JNI_FALSE);
				const EVString val = val_ch;
				__env->ReleaseStringUTFChars(val_j, (const char *)val_ch);
				#else
				const ev_wchar* val_ch = (const ev_wchar*)__env->GetStringChars(val_j,JNI_FALSE);
				const EVString val = val_ch;
				__env->ReleaseStringChars(val_j, (const jchar *)val_ch);
				#endif
				EarthView::World::Spatial3D::ModelIdAndNameMap *pObjectX = (EarthView::World::Spatial3D::ModelIdAndNameMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->push(key, val);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_ModelIdAndNameMap_exist_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint key_j)
			{
				ev_uint16 key = (ev_uint16) key_j;
				EarthView::World::Spatial3D::ModelIdAndNameMap *pObjectX = (EarthView::World::Spatial3D::ModelIdAndNameMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->exist(key);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_ModelIdAndNameMap_OperatorIndex_1ev_1uint16(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint key_j )
			{
				EarthView::World::Spatial3D::ModelIdAndNameMap& pObjectX = *(EarthView::World::Spatial3D::ModelIdAndNameMap*) pObjXXXX;
				ev_uint16 key = (ev_uint16) key_j;
				EVString& __values1 = pObjectX[key];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_ModelIdAndNameMap_get_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint key_j)
			{
				ev_uint16 key = (ev_uint16) key_j;
				EarthView::World::Spatial3D::ModelIdAndNameMap *pObjectX = (EarthView::World::Spatial3D::ModelIdAndNameMap*) pObjXXXX;
				EVString& __values1 = pObjectX->get(key);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_ModelIdAndNameMap_erase_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint key_j)
			{
				ev_uint16 key = (ev_uint16) key_j;
				EarthView::World::Spatial3D::ModelIdAndNameMap *pObjectX = (EarthView::World::Spatial3D::ModelIdAndNameMap*) pObjXXXX;
				pObjectX->erase(key);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_ModelIdAndNameMap_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial3D::ModelIdAndNameMap *pObjectX = (EarthView::World::Spatial3D::ModelIdAndNameMap*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_ModelIdAndNameMap_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::ModelIdAndNameMap *pObjectX = (EarthView::World::Spatial3D::ModelIdAndNameMap*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_ModelIdAndNameMap_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial3D::ModelIdAndNameMap *pObjectX = (EarthView::World::Spatial3D::ModelIdAndNameMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_ModelIdAndNameMap_getKeys_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial3D::ModelIdAndNameMap *pObjectX = (EarthView::World::Spatial3D::ModelIdAndNameMap*) pObjXXXX;
				EarthView::World::Core::IntVector __values1 = pObjectX->getKeys();
				EarthView::World::Core::IntVector *returnvalues = new EarthView::World::Core::IntVector(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			class JCModelPublishToolListenerProxy : public EarthView::World::Spatial3D::CModelPublishToolListener
			{
			 private:
				EarthView::World::Core::ev_string m_information_EVString_callback;
				EarthView::World::Core::ev_string m_workPercent_ev_int32_callback;
				EarthView::World::Core::ev_string m_getModelIdAndName_ev_int32_EVString_callback;
			public:
				JCModelPublishToolListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CModelPublishToolListener(pList)
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
				void register_information_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_information_EVString_callback = __method;
				}
				void register_workPercent_ev_int32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_workPercent_ev_int32_callback = __method;
				}
				void register_getModelIdAndName_ev_int32_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getModelIdAndName_ev_int32_EVString_callback = __method;
				}
				virtual void information(const EVString& info)
				{
					if (this->_gRef != NULL && this->m_information_EVString_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring info_wch = info;
						jstring info_j = __env->NewString((const jchar*)info_wch.getString(), info_wch.size());
						jmethodID __method = __gr->getMethod("information_EVString_callback");
						__env->CallVoidMethod(__obj, __method , info_j);
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
						return this->CModelPublishToolListener::information(info);
					}
				}
				virtual void workPercent(ev_int32 percent)
				{
					if (this->_gRef != NULL && this->m_workPercent_ev_int32_callback != "" && this->isCustomExtend())
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
						jint percent_j = (jint) percent;
						jmethodID __method = __gr->getMethod("workPercent_ev_int32_callback");
						__env->CallVoidMethod(__obj, __method , percent_j);
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
						return this->CModelPublishToolListener::workPercent(percent);
					}
				}
				virtual void getModelIdAndName(ev_int32 id, const EVString& name)
				{
					if (this->_gRef != NULL && this->m_getModelIdAndName_ev_int32_EVString_callback != "" && this->isCustomExtend())
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
						jint id_j = (jint) id;
						EarthView::World::Core::ev_wstring name_wch = name;
						jstring name_j = __env->NewString((const jchar*)name_wch.getString(), name_wch.size());
						jmethodID __method = __gr->getMethod("getModelIdAndName_ev_int32_EVString_callback");
						__env->CallVoidMethod(__obj, __method , id_j, name_j);
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
						return this->CModelPublishToolListener::getModelIdAndName(id, name);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCModelPublishToolListenerProxy);
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_ModelPublishToolListener_information_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring info_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* info_ch = (const ev_char*)__env->GetStringUTFChars(info_j,JNI_FALSE);
				const EVString info = info_ch;
				__env->ReleaseStringUTFChars(info_j, (const char *)info_ch);
				#else
				const ev_wchar* info_ch = (const ev_wchar*)__env->GetStringChars(info_j,JNI_FALSE);
				const EVString info = info_ch;
				__env->ReleaseStringChars(info_j, (const jchar *)info_ch);
				#endif
				EarthView::World::Spatial3D::CModelPublishToolListener *pObjectX = (EarthView::World::Spatial3D::CModelPublishToolListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCModelPublishToolListenerProxy))
				{
					pObjectX->EarthView::World::Spatial3D::CModelPublishToolListener::information(info);
				}
				else
				{
					pObjectX->information(info);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_ModelPublishToolListener_register_1information_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCModelPublishToolListenerProxy *pObjectX = (JCModelPublishToolListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_information_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"information_EVString_callback", "(Ljava/lang/String;)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_ModelPublishToolListener_information_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring info_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* info_ch = (const ev_char*)__env->GetStringUTFChars(info_j,JNI_FALSE);
				const EVString info = info_ch;
				__env->ReleaseStringUTFChars(info_j, (const char *)info_ch);
				#else
				const ev_wchar* info_ch = (const ev_wchar*)__env->GetStringChars(info_j,JNI_FALSE);
				const EVString info = info_ch;
				__env->ReleaseStringChars(info_j, (const jchar *)info_ch);
				#endif
				EarthView::World::Spatial3D::CModelPublishToolListener *pObjectX = (EarthView::World::Spatial3D::CModelPublishToolListener*) pObjXXXX;
				pObjectX->EarthView::World::Spatial3D::CModelPublishToolListener::information(info);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_ModelPublishToolListener_workPercent_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint percent_j)
			{
				ev_int32 percent = (ev_int32) percent_j;
				EarthView::World::Spatial3D::CModelPublishToolListener *pObjectX = (EarthView::World::Spatial3D::CModelPublishToolListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCModelPublishToolListenerProxy))
				{
					pObjectX->EarthView::World::Spatial3D::CModelPublishToolListener::workPercent(percent);
				}
				else
				{
					pObjectX->workPercent(percent);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_ModelPublishToolListener_register_1workPercent_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCModelPublishToolListenerProxy *pObjectX = (JCModelPublishToolListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_workPercent_ev_int32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"workPercent_ev_int32_callback", "(I)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_ModelPublishToolListener_workPercent_1ev_1int32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint percent_j)
			{
				ev_int32 percent = (ev_int32) percent_j;
				EarthView::World::Spatial3D::CModelPublishToolListener *pObjectX = (EarthView::World::Spatial3D::CModelPublishToolListener*) pObjXXXX;
				pObjectX->EarthView::World::Spatial3D::CModelPublishToolListener::workPercent(percent);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_ModelPublishToolListener_getModelIdAndName_1ev_1int32_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint id_j, jstring name_j)
			{
				ev_int32 id = (ev_int32) id_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				EarthView::World::Spatial3D::CModelPublishToolListener *pObjectX = (EarthView::World::Spatial3D::CModelPublishToolListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCModelPublishToolListenerProxy))
				{
					pObjectX->EarthView::World::Spatial3D::CModelPublishToolListener::getModelIdAndName(id, name);
				}
				else
				{
					pObjectX->getModelIdAndName(id, name);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_ModelPublishToolListener_register_1getModelIdAndName_1ev_1int32_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCModelPublishToolListenerProxy *pObjectX = (JCModelPublishToolListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getModelIdAndName_ev_int32_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getModelIdAndName_ev_int32_EVString_callback", "(ILjava/lang/String;)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_ModelPublishToolListener_getModelIdAndName_1ev_1int32_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint id_j, jstring name_j)
			{
				ev_int32 id = (ev_int32) id_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				EarthView::World::Spatial3D::CModelPublishToolListener *pObjectX = (EarthView::World::Spatial3D::CModelPublishToolListener*) pObjXXXX;
				pObjectX->EarthView::World::Spatial3D::CModelPublishToolListener::getModelIdAndName(id, name);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_ModelPublishToolListener_setTotalCount_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint totalcount_j)
			{
				ev_int32 totalcount = (ev_int32) totalcount_j;
				EarthView::World::Spatial3D::CModelPublishToolListener *pObjectX = (EarthView::World::Spatial3D::CModelPublishToolListener*) pObjXXXX;
				pObjectX->setTotalCount(totalcount);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_ModelPublishToolListener_setCurrentCount_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint currentCount_j)
			{
				ev_int32 currentCount = (ev_int32) currentCount_j;
				EarthView::World::Spatial3D::CModelPublishToolListener *pObjectX = (EarthView::World::Spatial3D::CModelPublishToolListener*) pObjXXXX;
				pObjectX->setCurrentCount(currentCount);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_ModelPublishToolListener_addTotalCount_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint addcount_j)
			{
				ev_int32 addcount = (ev_int32) addcount_j;
				EarthView::World::Spatial3D::CModelPublishToolListener *pObjectX = (EarthView::World::Spatial3D::CModelPublishToolListener*) pObjXXXX;
				pObjectX->addTotalCount(addcount);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_ModelPublishToolListener_addCurrentCount_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint addCount_j)
			{
				ev_int32 addCount = (ev_int32) addCount_j;
				EarthView::World::Spatial3D::CModelPublishToolListener *pObjectX = (EarthView::World::Spatial3D::CModelPublishToolListener*) pObjXXXX;
				pObjectX->addCurrentCount(addCount);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_ModelPublishToolListener_getPercent_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CModelPublishToolListener *pObjectX = (EarthView::World::Spatial3D::CModelPublishToolListener*) pObjXXXX;
				ev_int32 __values1 = pObjectX->getPercent();
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_ModelPublishToolListener_getTotalCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CModelPublishToolListener *pObjectX = (EarthView::World::Spatial3D::CModelPublishToolListener*) pObjXXXX;
				ev_int32 __values1 = pObjectX->getTotalCount();
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_ModelPublishToolListener_getCurrentCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CModelPublishToolListener *pObjectX = (EarthView::World::Spatial3D::CModelPublishToolListener*) pObjXXXX;
				ev_int32 __values1 = pObjectX->getCurrentCount();
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial3d_ClashModelTreatWayHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					cover_with_clashmodel,
					jump_over_clashmodel
				};
				jintArray array = __env->NewIntArray(2);
				__env->SetIntArrayRegion(array, 0, 2, enum_values);
				return array;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_ModelPublishTool_setCModelPulishToolListener_1CModelPublishToolListener(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_pListener_j)
			{
				EarthView::World::Spatial3D::CModelPublishToolListener *ref_pListener = (EarthView::World::Spatial3D::CModelPublishToolListener*) ref_pListener_j;
				EarthView::World::Spatial3D::CModelPublishTool *pObjectX = (EarthView::World::Spatial3D::CModelPublishTool*) pObjXXXX;
				pObjectX->setCModelPulishToolListener(ref_pListener);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_ModelPublishTool_startPublish_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CModelPublishTool *pObjectX = (EarthView::World::Spatial3D::CModelPublishTool*) pObjXXXX;
				pObjectX->startPublish();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_ModelPublishTool_startPublish_1IntVector_1StringVector_1CEffectInfoVector(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong modelIDVec_j, jlong typeCodesVec_j, jlong effectInfoVec_j)
			{
				const EarthView::World::Core::IntVector &modelIDVec = *(EarthView::World::Core::IntVector*) modelIDVec_j;
				const EarthView::World::Core::StringVector &typeCodesVec = *(EarthView::World::Core::StringVector*) typeCodesVec_j;
				const EarthView::World::Spatial3D::Dataset::CEffectInfoVector &effectInfoVec = *(EarthView::World::Spatial3D::Dataset::CEffectInfoVector*) effectInfoVec_j;
				EarthView::World::Spatial3D::CModelPublishTool *pObjectX = (EarthView::World::Spatial3D::CModelPublishTool*) pObjXXXX;
				pObjectX->startPublish(modelIDVec, typeCodesVec, effectInfoVec);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_ModelPublishTool_stopPublish_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CModelPublishTool *pObjectX = (EarthView::World::Spatial3D::CModelPublishTool*) pObjXXXX;
				pObjectX->stopPublish();
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_ModelPublishTool_getDesModelSourceAttrNameAndAttrStructVector_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CModelPublishTool *pObjectX = (EarthView::World::Spatial3D::CModelPublishTool*) pObjXXXX;
				ev_int32 __values1 = pObjectX->getDesModelSourceAttrNameAndAttrStructVector();
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_ModelPublishTool_getSrcModelSourceAttrNameAndAttrStructVector_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CModelPublishTool *pObjectX = (EarthView::World::Spatial3D::CModelPublishTool*) pObjXXXX;
				ev_int32 __values1 = pObjectX->getSrcModelSourceAttrNameAndAttrStructVector();
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_ModelPublishTool_processAttrTable_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CModelPublishTool *pObjectX = (EarthView::World::Spatial3D::CModelPublishTool*) pObjXXXX;
				ev_int32 __values1 = pObjectX->processAttrTable();
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_ModelPublishTool_getDesModelSourceNodecodeNameAndAttrNameVector_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CModelPublishTool *pObjectX = (EarthView::World::Spatial3D::CModelPublishTool*) pObjXXXX;
				ev_int32 __values1 = pObjectX->getDesModelSourceNodecodeNameAndAttrNameVector();
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_ModelPublishTool_getSrcModelSourceNodecodeNameAndAttrNameVector_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CModelPublishTool *pObjectX = (EarthView::World::Spatial3D::CModelPublishTool*) pObjXXXX;
				ev_int32 __values1 = pObjectX->getSrcModelSourceNodecodeNameAndAttrNameVector();
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_ModelPublishTool_processNodeCode_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CModelPublishTool *pObjectX = (EarthView::World::Spatial3D::CModelPublishTool*) pObjXXXX;
				ev_int32 __values1 = pObjectX->processNodeCode();
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_ModelPublishTool_calcClashModel_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CModelPublishTool *pObjectX = (EarthView::World::Spatial3D::CModelPublishTool*) pObjXXXX;
				ev_int32 __values1 = pObjectX->calcClashModel();
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_ModelPublishTool_setClashModelTreatWay_1ClashModelTreatWay(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint treatway_j)
			{
				EarthView::World::Spatial3D::ClashModelTreatWay treatway = (EarthView::World::Spatial3D::ClashModelTreatWay) treatway_j;
				EarthView::World::Spatial3D::CModelPublishTool *pObjectX = (EarthView::World::Spatial3D::CModelPublishTool*) pObjXXXX;
				pObjectX->setClashModelTreatWay(treatway);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_ModelPublishTool_setCompositorAllSubmesh_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean b_j)
			{
				const ev_bool b = (ev_bool) b_j;
				EarthView::World::Spatial3D::CModelPublishTool *pObjectX = (EarthView::World::Spatial3D::CModelPublishTool*) pObjXXXX;
				pObjectX->setCompositorAllSubmesh(b);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_ModelPublishTool_getNewAttrTableNameAndNewNodecode_1EVString_1EVString_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring modelname_j, jstring nodecode_j, jlong newattrtablename_j, jlong newnodecode_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* modelname_ch = (const ev_char*)__env->GetStringUTFChars(modelname_j,JNI_FALSE);
				const EVString modelname = modelname_ch;
				__env->ReleaseStringUTFChars(modelname_j, (const char *)modelname_ch);
				#else
				const ev_wchar* modelname_ch = (const ev_wchar*)__env->GetStringChars(modelname_j,JNI_FALSE);
				const EVString modelname = modelname_ch;
				__env->ReleaseStringChars(modelname_j, (const jchar *)modelname_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* nodecode_ch = (const ev_char*)__env->GetStringUTFChars(nodecode_j,JNI_FALSE);
				const EVString nodecode = nodecode_ch;
				__env->ReleaseStringUTFChars(nodecode_j, (const char *)nodecode_ch);
				#else
				const ev_wchar* nodecode_ch = (const ev_wchar*)__env->GetStringChars(nodecode_j,JNI_FALSE);
				const EVString nodecode = nodecode_ch;
				__env->ReleaseStringChars(nodecode_j, (const jchar *)nodecode_ch);
				#endif
				EVString &newattrtablename = *(EVString*) newattrtablename_j;
				EVString &newnodecode = *(EVString*) newnodecode_j;
				EarthView::World::Spatial3D::CModelPublishTool *pObjectX = (EarthView::World::Spatial3D::CModelPublishTool*) pObjXXXX;
				ev_bool __values1 = pObjectX->getNewAttrTableNameAndNewNodecode(modelname, nodecode, newattrtablename, newnodecode);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_ModelPublishTool_getDesAttrTableNameAndFieldsByNodeCode_1EVString_1EVString_1CFields(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring nodecode_j, jlong attrtablename_j, jlong fields_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* nodecode_ch = (const ev_char*)__env->GetStringUTFChars(nodecode_j,JNI_FALSE);
				const EVString nodecode = nodecode_ch;
				__env->ReleaseStringUTFChars(nodecode_j, (const char *)nodecode_ch);
				#else
				const ev_wchar* nodecode_ch = (const ev_wchar*)__env->GetStringChars(nodecode_j,JNI_FALSE);
				const EVString nodecode = nodecode_ch;
				__env->ReleaseStringChars(nodecode_j, (const jchar *)nodecode_ch);
				#endif
				EVString &attrtablename = *(EVString*) attrtablename_j;
				EarthView::World::Spatial::GeoDataset::CFields *&fields = *(EarthView::World::Spatial::GeoDataset::CFields**) fields_j;
				EarthView::World::Spatial3D::CModelPublishTool *pObjectX = (EarthView::World::Spatial3D::CModelPublishTool*) pObjXXXX;
				ev_bool __values1 = pObjectX->getDesAttrTableNameAndFieldsByNodeCode(nodecode, attrtablename, fields);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_ModelPublishToolDbdessource_setDesDataSourcePtr_1CModelDataSource(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_desdatasourceptr_j)
			{
				EarthView::World::Spatial3D::Dataset::CModelDataSource *ref_desdatasourceptr = (EarthView::World::Spatial3D::Dataset::CModelDataSource*) ref_desdatasourceptr_j;
				EarthView::World::Spatial3D::CModelPublishTool_DBDesSource *pObjectX = (EarthView::World::Spatial3D::CModelPublishTool_DBDesSource*) pObjXXXX;
				pObjectX->setDesDataSourcePtr(ref_desdatasourceptr);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_ModelPublishToolDbdessource_setDesNodecode_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring desnodecode_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* desnodecode_ch = (const ev_char*)__env->GetStringUTFChars(desnodecode_j,JNI_FALSE);
				const EVString desnodecode = desnodecode_ch;
				__env->ReleaseStringUTFChars(desnodecode_j, (const char *)desnodecode_ch);
				#else
				const ev_wchar* desnodecode_ch = (const ev_wchar*)__env->GetStringChars(desnodecode_j,JNI_FALSE);
				const EVString desnodecode = desnodecode_ch;
				__env->ReleaseStringChars(desnodecode_j, (const jchar *)desnodecode_ch);
				#endif
				EarthView::World::Spatial3D::CModelPublishTool_DBDesSource *pObjectX = (EarthView::World::Spatial3D::CModelPublishTool_DBDesSource*) pObjXXXX;
				pObjectX->setDesNodecode(desnodecode);
			}
		}
	}
}
