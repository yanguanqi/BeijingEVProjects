/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dproxy/effectmgreventobject.h"
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
		namespace Spatial
		{
			namespace GeoDataset
			{
			}
		}
		namespace Spatial3D
		{
			namespace EffectManager
			{
			}
			namespace Dataset
			{
			}
		}
		namespace Core
		{
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial3DProxy
		{
			class JCAnimationTrailListenerProxy : public EarthView::World::Spatial3DProxy::CAnimationTrailListener
			{
			 private:
				EarthView::World::Core::ev_string m_frameStarted_FrameEvent_callback;
				EarthView::World::Core::ev_string m_frameRenderingQueued_FrameEvent_callback;
				EarthView::World::Core::ev_string m_frameEnded_FrameEvent_callback;
			public:
				JCAnimationTrailListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CAnimationTrailListener(pList)
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
				void register_frameStarted_FrameEvent_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_frameStarted_FrameEvent_callback = __method;
				}
				void register_frameRenderingQueued_FrameEvent_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_frameRenderingQueued_FrameEvent_callback = __method;
				}
				void register_frameEnded_FrameEvent_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_frameEnded_FrameEvent_callback = __method;
				}
				virtual ev_bool frameRenderingQueued(const EarthView::World::Graphic::FrameEvent& evt)
				{
					if (this->_gRef != NULL && this->m_frameRenderingQueued_FrameEvent_callback != "" && this->isCustomExtend())
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
						jlong evt_j = (jlong) &evt;
						jmethodID __method = __gr->getMethod("frameRenderingQueued_FrameEvent_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , evt_j);
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
						return this->CAnimationTrailListener::frameRenderingQueued(evt);
					}
				}
				virtual ev_bool frameStarted(const EarthView::World::Graphic::FrameEvent& evt)
				{
					if (this->_gRef != NULL && this->m_frameStarted_FrameEvent_callback != "" && this->isCustomExtend())
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
						jlong evt_j = (jlong) &evt;
						jmethodID __method = __gr->getMethod("frameStarted_FrameEvent_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , evt_j);
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
						return this->CAnimationTrailListener::frameStarted(evt);
					}
				}
				virtual ev_bool frameEnded(const EarthView::World::Graphic::FrameEvent& evt)
				{
					if (this->_gRef != NULL && this->m_frameEnded_FrameEvent_callback != "" && this->isCustomExtend())
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
						jlong evt_j = (jlong) &evt;
						jmethodID __method = __gr->getMethod("frameEnded_FrameEvent_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , evt_j);
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
						return this->CAnimationTrailListener::frameEnded(evt);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCAnimationTrailListenerProxy);
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3dproxy_AnimationTrailListener_frameRenderingQueued_1FrameEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong evt_j)
			{
				const EarthView::World::Graphic::FrameEvent &evt = *(EarthView::World::Graphic::FrameEvent*) evt_j;
				EarthView::World::Spatial3DProxy::CAnimationTrailListener *pObjectX = (EarthView::World::Spatial3DProxy::CAnimationTrailListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAnimationTrailListenerProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3DProxy::CAnimationTrailListener::frameRenderingQueued(evt);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->frameRenderingQueued(evt);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_AnimationTrailListener_register_1frameRenderingQueued_1FrameEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAnimationTrailListenerProxy *pObjectX = (JCAnimationTrailListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_frameRenderingQueued_FrameEvent_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"frameRenderingQueued_FrameEvent_callback", "(J)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3dproxy_AnimationTrailListener_frameRenderingQueued_1FrameEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong evt_j)
			{
				const EarthView::World::Graphic::FrameEvent &evt = *(EarthView::World::Graphic::FrameEvent*) evt_j;
				EarthView::World::Spatial3DProxy::CAnimationTrailListener *pObjectX = (EarthView::World::Spatial3DProxy::CAnimationTrailListener*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Spatial3DProxy::CAnimationTrailListener::frameRenderingQueued(evt);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_AnimationTrailListener_register_1frameStarted_1FrameEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAnimationTrailListenerProxy *pObjectX = (JCAnimationTrailListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_frameStarted_FrameEvent_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"frameStarted_FrameEvent_callback", "(J)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_AnimationTrailListener_register_1frameEnded_1FrameEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAnimationTrailListenerProxy *pObjectX = (JCAnimationTrailListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_frameEnded_FrameEvent_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"frameEnded_FrameEvent_callback", "(J)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			class JCEffectMgrEventObjectProxy : public EarthView::World::Spatial3DProxy::CEffectMgrEventObject
			{
			 private:
				EarthView::World::Core::ev_string m_createUserType_EVString_EVString_EVString_callback;
				EarthView::World::Core::ev_string m_createUserType_IDataSource_EVString_EVString_callback;
				EarthView::World::Core::ev_string m_onCreateUserType_CEffectTreeviewEvent_callback;
				EarthView::World::Core::ev_string m_onImportFromTemplateDB_CEffectTreeviewEvent_callback;
				EarthView::World::Core::ev_string m_importFromScript_EVString_EVString_EVString_CStringArray_CStringArray_callback;
				EarthView::World::Core::ev_string m_importFromScript_EVString_EVString_IDataSource_CStringArray_CStringArray_callback;
				EarthView::World::Core::ev_string m_exportEffectToLocal_ev_uint32_CEffectDataSource_EVString_bool_callback;
				EarthView::World::Core::ev_string m_onImportFromScript_CEffectTreeviewEvent_callback;
				EarthView::World::Core::ev_string m_onExportToTemplateDB_CEffectTreeviewEvent_callback;
				EarthView::World::Core::ev_string m_createNewEffect_EVString_EVString_EVString_EffectType_ev_uint32_callback;
				EarthView::World::Core::ev_string m_createNewEffect_IDataSource_EVString_EVString_EffectType_ev_uint32_callback;
				EarthView::World::Core::ev_string m_onCreateNewEffect_CEffectTreeviewEvent_callback;
				EarthView::World::Core::ev_string m_renameUserType_EVString_EVString_EVString_callback;
				EarthView::World::Core::ev_string m_renameUserType_IDataSource_EVString_EVString_callback;
				EarthView::World::Core::ev_string m_onRenameUserType_CEffectTreeviewEvent_callback;
				EarthView::World::Core::ev_string m_renameBlendEffect_EVString_EVString_EVString_callback;
				EarthView::World::Core::ev_string m_renameBlendEffect_IDataSource_EVString_EVString_callback;
				EarthView::World::Core::ev_string m_onRenameBlendEffect_CEffectTreeviewEvent_callback;
				EarthView::World::Core::ev_string m_renameSingleEffect_EVString_EVString_EVString_callback;
				EarthView::World::Core::ev_string m_copyNewEffect_EVString_ev_uint32_EVString_callback;
				EarthView::World::Core::ev_string m_copyNewEffect_IDataSource_ev_uint32_EVString_callback;
				EarthView::World::Core::ev_string m_renameSingleEffect_IDataSource_EVString_EVString_callback;
				EarthView::World::Core::ev_string m_onRenameSingleEffect_CEffectTreeviewEvent_callback;
				EarthView::World::Core::ev_string m_renameBEChild_EVString_EVString_EVString_callback;
				EarthView::World::Core::ev_string m_renameBEChild_IDataSource_EVString_EVString_callback;
				EarthView::World::Core::ev_string m_onRenameBEChildEffect_CEffectTreeviewEvent_callback;
				EarthView::World::Core::ev_string m_deleteUserType_EVString_EVString_callback;
				EarthView::World::Core::ev_string m_deleteUserType_IDataSource_EVString_callback;
				EarthView::World::Core::ev_string m_onDeleteUserType_CEffectTreeviewEvent_callback;
				EarthView::World::Core::ev_string m_deleteEffect_EVString_ev_uint32_ev_uint32_EffectType_callback;
				EarthView::World::Core::ev_string m_deleteEffect_IDataSource_ev_uint32_ev_uint32_EffectType_callback;
				EarthView::World::Core::ev_string m_onDeleteEffect_CEffectTreeviewEvent_callback;
				EarthView::World::Core::ev_string m_addEffectToBlendEffect_EVString_ev_uint32_ev_uint32_callback;
				EarthView::World::Core::ev_string m_addEffectToBlendEffect_IDataSource_ev_uint32_ev_uint32_callback;
				EarthView::World::Core::ev_string m_onAddEffectToBlendEffect_CEffectTreeviewEvent_callback;
				EarthView::World::Core::ev_string m_isExistName_EVString_EVString_EVString_EffectType_EVString_callback;
				EarthView::World::Core::ev_string m_isExistName_IDataSource_EVString_EVString_EffectType_EVString_callback;
				EarthView::World::Core::ev_string m_addEffectToUserType_EVString_ev_uint32_EVString_callback;
				EarthView::World::Core::ev_string m_addEffectToUserType_IDataSource_ev_uint32_EVString_callback;
				EarthView::World::Core::ev_string m_onAddEffectToUserType_CEffectTreeviewEvent_callback;
				EarthView::World::Core::ev_string m_addUserTypeToUserType_EVString_EVString_EVString_callback;
				EarthView::World::Core::ev_string m_addUserTypeToUserType_IDataSource_EVString_EVString_callback;
				EarthView::World::Core::ev_string m_onAddUserTypeToUserType_CEffectTreeviewEvent_callback;
				EarthView::World::Core::ev_string m_saveEffect_EVString_CEffect_callback;
				EarthView::World::Core::ev_string m_saveEffect_IDataSource_CEffect_callback;
				EarthView::World::Core::ev_string m_onSaveEffect_CEffectTreeviewEvent_callback;
				EarthView::World::Core::ev_string m_saveEffectMaterial_IDataSource_ev_uint32_callback;
				EarthView::World::Core::ev_string m_saveEffectMaterial_EVString_ev_uint32_callback;
				EarthView::World::Core::ev_string m_onSaveEffectMaterial_CEffectTreeviewEvent_callback;
				EarthView::World::Core::ev_string m_loadTree_EVString_CEffectUserTypeTree_callback;
				EarthView::World::Core::ev_string m_loadTree_IDataSource_CEffectUserTypeTree_callback;
				EarthView::World::Core::ev_string m_getBlendEffectInfos_EVString_ev_uint32_CEffectInfoVector_callback;
				EarthView::World::Core::ev_string m_getBlendEffectInfos_IDataSource_ev_uint32_CEffectInfoVector_callback;
				EarthView::World::Core::ev_string m_onEvent_CEvent_callback;
				EarthView::World::Core::ev_string m_onTimerEvent_CTimerEvent_callback;
				EarthView::World::Core::ev_string m_onCustomEvent_CEvent_callback;
			public:
				JCEffectMgrEventObjectProxy(EarthView::World::Core::CNameValuePairList *pList) : CEffectMgrEventObject(pList)
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
				void register_createUserType_EVString_EVString_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createUserType_EVString_EVString_EVString_callback = __method;
				}
				void register_createUserType_IDataSource_EVString_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createUserType_IDataSource_EVString_EVString_callback = __method;
				}
				void register_onCreateUserType_CEffectTreeviewEvent_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_onCreateUserType_CEffectTreeviewEvent_callback = __method;
				}
				void register_onImportFromTemplateDB_CEffectTreeviewEvent_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_onImportFromTemplateDB_CEffectTreeviewEvent_callback = __method;
				}
				void register_importFromScript_EVString_EVString_EVString_CStringArray_CStringArray_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_importFromScript_EVString_EVString_EVString_CStringArray_CStringArray_callback = __method;
				}
				void register_importFromScript_EVString_EVString_IDataSource_CStringArray_CStringArray_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_importFromScript_EVString_EVString_IDataSource_CStringArray_CStringArray_callback = __method;
				}
				void register_exportEffectToLocal_ev_uint32_CEffectDataSource_EVString_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_exportEffectToLocal_ev_uint32_CEffectDataSource_EVString_bool_callback = __method;
				}
				void register_onImportFromScript_CEffectTreeviewEvent_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_onImportFromScript_CEffectTreeviewEvent_callback = __method;
				}
				void register_onExportToTemplateDB_CEffectTreeviewEvent_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_onExportToTemplateDB_CEffectTreeviewEvent_callback = __method;
				}
				void register_createNewEffect_EVString_EVString_EVString_EffectType_ev_uint32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createNewEffect_EVString_EVString_EVString_EffectType_ev_uint32_callback = __method;
				}
				void register_createNewEffect_IDataSource_EVString_EVString_EffectType_ev_uint32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createNewEffect_IDataSource_EVString_EVString_EffectType_ev_uint32_callback = __method;
				}
				void register_onCreateNewEffect_CEffectTreeviewEvent_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_onCreateNewEffect_CEffectTreeviewEvent_callback = __method;
				}
				void register_renameUserType_EVString_EVString_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_renameUserType_EVString_EVString_EVString_callback = __method;
				}
				void register_renameUserType_IDataSource_EVString_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_renameUserType_IDataSource_EVString_EVString_callback = __method;
				}
				void register_onRenameUserType_CEffectTreeviewEvent_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_onRenameUserType_CEffectTreeviewEvent_callback = __method;
				}
				void register_renameBlendEffect_EVString_EVString_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_renameBlendEffect_EVString_EVString_EVString_callback = __method;
				}
				void register_renameBlendEffect_IDataSource_EVString_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_renameBlendEffect_IDataSource_EVString_EVString_callback = __method;
				}
				void register_onRenameBlendEffect_CEffectTreeviewEvent_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_onRenameBlendEffect_CEffectTreeviewEvent_callback = __method;
				}
				void register_renameSingleEffect_EVString_EVString_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_renameSingleEffect_EVString_EVString_EVString_callback = __method;
				}
				void register_copyNewEffect_EVString_ev_uint32_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_copyNewEffect_EVString_ev_uint32_EVString_callback = __method;
				}
				void register_copyNewEffect_IDataSource_ev_uint32_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_copyNewEffect_IDataSource_ev_uint32_EVString_callback = __method;
				}
				void register_renameSingleEffect_IDataSource_EVString_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_renameSingleEffect_IDataSource_EVString_EVString_callback = __method;
				}
				void register_onRenameSingleEffect_CEffectTreeviewEvent_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_onRenameSingleEffect_CEffectTreeviewEvent_callback = __method;
				}
				void register_renameBEChild_EVString_EVString_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_renameBEChild_EVString_EVString_EVString_callback = __method;
				}
				void register_renameBEChild_IDataSource_EVString_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_renameBEChild_IDataSource_EVString_EVString_callback = __method;
				}
				void register_onRenameBEChildEffect_CEffectTreeviewEvent_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_onRenameBEChildEffect_CEffectTreeviewEvent_callback = __method;
				}
				void register_deleteUserType_EVString_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_deleteUserType_EVString_EVString_callback = __method;
				}
				void register_deleteUserType_IDataSource_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_deleteUserType_IDataSource_EVString_callback = __method;
				}
				void register_onDeleteUserType_CEffectTreeviewEvent_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_onDeleteUserType_CEffectTreeviewEvent_callback = __method;
				}
				void register_deleteEffect_EVString_ev_uint32_ev_uint32_EffectType_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_deleteEffect_EVString_ev_uint32_ev_uint32_EffectType_callback = __method;
				}
				void register_deleteEffect_IDataSource_ev_uint32_ev_uint32_EffectType_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_deleteEffect_IDataSource_ev_uint32_ev_uint32_EffectType_callback = __method;
				}
				void register_onDeleteEffect_CEffectTreeviewEvent_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_onDeleteEffect_CEffectTreeviewEvent_callback = __method;
				}
				void register_addEffectToBlendEffect_EVString_ev_uint32_ev_uint32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_addEffectToBlendEffect_EVString_ev_uint32_ev_uint32_callback = __method;
				}
				void register_addEffectToBlendEffect_IDataSource_ev_uint32_ev_uint32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_addEffectToBlendEffect_IDataSource_ev_uint32_ev_uint32_callback = __method;
				}
				void register_onAddEffectToBlendEffect_CEffectTreeviewEvent_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_onAddEffectToBlendEffect_CEffectTreeviewEvent_callback = __method;
				}
				void register_isExistName_EVString_EVString_EVString_EffectType_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_isExistName_EVString_EVString_EVString_EffectType_EVString_callback = __method;
				}
				void register_isExistName_IDataSource_EVString_EVString_EffectType_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_isExistName_IDataSource_EVString_EVString_EffectType_EVString_callback = __method;
				}
				void register_addEffectToUserType_EVString_ev_uint32_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_addEffectToUserType_EVString_ev_uint32_EVString_callback = __method;
				}
				void register_addEffectToUserType_IDataSource_ev_uint32_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_addEffectToUserType_IDataSource_ev_uint32_EVString_callback = __method;
				}
				void register_onAddEffectToUserType_CEffectTreeviewEvent_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_onAddEffectToUserType_CEffectTreeviewEvent_callback = __method;
				}
				void register_addUserTypeToUserType_EVString_EVString_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_addUserTypeToUserType_EVString_EVString_EVString_callback = __method;
				}
				void register_addUserTypeToUserType_IDataSource_EVString_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_addUserTypeToUserType_IDataSource_EVString_EVString_callback = __method;
				}
				void register_onAddUserTypeToUserType_CEffectTreeviewEvent_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_onAddUserTypeToUserType_CEffectTreeviewEvent_callback = __method;
				}
				void register_saveEffect_EVString_CEffect_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_saveEffect_EVString_CEffect_callback = __method;
				}
				void register_saveEffect_IDataSource_CEffect_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_saveEffect_IDataSource_CEffect_callback = __method;
				}
				void register_onSaveEffect_CEffectTreeviewEvent_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_onSaveEffect_CEffectTreeviewEvent_callback = __method;
				}
				void register_saveEffectMaterial_IDataSource_ev_uint32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_saveEffectMaterial_IDataSource_ev_uint32_callback = __method;
				}
				void register_saveEffectMaterial_EVString_ev_uint32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_saveEffectMaterial_EVString_ev_uint32_callback = __method;
				}
				void register_onSaveEffectMaterial_CEffectTreeviewEvent_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_onSaveEffectMaterial_CEffectTreeviewEvent_callback = __method;
				}
				void register_loadTree_EVString_CEffectUserTypeTree_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_loadTree_EVString_CEffectUserTypeTree_callback = __method;
				}
				void register_loadTree_IDataSource_CEffectUserTypeTree_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_loadTree_IDataSource_CEffectUserTypeTree_callback = __method;
				}
				void register_getBlendEffectInfos_EVString_ev_uint32_CEffectInfoVector_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getBlendEffectInfos_EVString_ev_uint32_CEffectInfoVector_callback = __method;
				}
				void register_getBlendEffectInfos_IDataSource_ev_uint32_CEffectInfoVector_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getBlendEffectInfos_IDataSource_ev_uint32_CEffectInfoVector_callback = __method;
				}
				void register_onEvent_CEvent_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_onEvent_CEvent_callback = __method;
				}
				void register_onTimerEvent_CTimerEvent_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_onTimerEvent_CTimerEvent_callback = __method;
				}
				void register_onCustomEvent_CEvent_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_onCustomEvent_CEvent_callback = __method;
				}
				virtual void createUserType(const EVString& datasourceName, EVString parentCode, EVString newUserTypeName)
				{
					if (this->_gRef != NULL && this->m_createUserType_EVString_EVString_EVString_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring datasourceName_wch = datasourceName;
						jstring datasourceName_j = __env->NewString((const jchar*)datasourceName_wch.getString(), datasourceName_wch.size());
						EarthView::World::Core::ev_wstring parentCode_wch = parentCode;
						jstring parentCode_j = __env->NewString((const jchar*)parentCode_wch.getString(), parentCode_wch.size());
						EarthView::World::Core::ev_wstring newUserTypeName_wch = newUserTypeName;
						jstring newUserTypeName_j = __env->NewString((const jchar*)newUserTypeName_wch.getString(), newUserTypeName_wch.size());
						jmethodID __method = __gr->getMethod("createUserType_EVString_EVString_EVString_callback");
						__env->CallVoidMethod(__obj, __method , datasourceName_j, parentCode_j, newUserTypeName_j);
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
						return this->CEffectMgrEventObject::createUserType(datasourceName, parentCode, newUserTypeName);
					}
				}
				virtual void createUserType(const EarthView::World::Spatial::GeoDataset::IDataSource* ds, EVString parentCode, EVString newUserTypeName)
				{
					if (this->_gRef != NULL && this->m_createUserType_IDataSource_EVString_EVString_callback != "" && this->isCustomExtend())
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
						jlong ds_j = (jlong) ds;
						EarthView::World::Core::ev_wstring parentCode_wch = parentCode;
						jstring parentCode_j = __env->NewString((const jchar*)parentCode_wch.getString(), parentCode_wch.size());
						EarthView::World::Core::ev_wstring newUserTypeName_wch = newUserTypeName;
						jstring newUserTypeName_j = __env->NewString((const jchar*)newUserTypeName_wch.getString(), newUserTypeName_wch.size());
						jmethodID __method = __gr->getMethod("createUserType_IDataSource_EVString_EVString_callback");
						__env->CallVoidMethod(__obj, __method , ds_j, parentCode_j, newUserTypeName_j);
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
						return this->CEffectMgrEventObject::createUserType(ds, parentCode, newUserTypeName);
					}
				}
				virtual void onCreateUserType(EarthView::World::Spatial3DProxy::CEffectTreeviewEvent* e)
				{
					if (this->_gRef != NULL && this->m_onCreateUserType_CEffectTreeviewEvent_callback != "" && this->isCustomExtend())
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
						jlong e_j = (jlong) e;
						jmethodID __method = __gr->getMethod("onCreateUserType_CEffectTreeviewEvent_callback");
						__env->CallVoidMethod(__obj, __method , e_j);
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
						return this->CEffectMgrEventObject::onCreateUserType(e);
					}
				}
				virtual void onImportFromTemplateDB(EarthView::World::Spatial3DProxy::CEffectTreeviewEvent* e)
				{
					if (this->_gRef != NULL && this->m_onImportFromTemplateDB_CEffectTreeviewEvent_callback != "" && this->isCustomExtend())
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
						jlong e_j = (jlong) e;
						jmethodID __method = __gr->getMethod("onImportFromTemplateDB_CEffectTreeviewEvent_callback");
						__env->CallVoidMethod(__obj, __method , e_j);
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
						return this->CEffectMgrEventObject::onImportFromTemplateDB(e);
					}
				}
				virtual void importFromScript(const EVString& dir, const EVString& userTypeCode, const EVString& destDatasourceName, EarthView::World::Core::CStringArray& successScriptNames, EarthView::World::Core::CStringArray& errorArray)
				{
					if (this->_gRef != NULL && this->m_importFromScript_EVString_EVString_EVString_CStringArray_CStringArray_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring dir_wch = dir;
						jstring dir_j = __env->NewString((const jchar*)dir_wch.getString(), dir_wch.size());
						EarthView::World::Core::ev_wstring userTypeCode_wch = userTypeCode;
						jstring userTypeCode_j = __env->NewString((const jchar*)userTypeCode_wch.getString(), userTypeCode_wch.size());
						EarthView::World::Core::ev_wstring destDatasourceName_wch = destDatasourceName;
						jstring destDatasourceName_j = __env->NewString((const jchar*)destDatasourceName_wch.getString(), destDatasourceName_wch.size());
						jlong successScriptNames_j = (jlong) &successScriptNames;
						jlong errorArray_j = (jlong) &errorArray;
						jmethodID __method = __gr->getMethod("importFromScript_EVString_EVString_EVString_CStringArray_CStringArray_callback");
						__env->CallVoidMethod(__obj, __method , dir_j, userTypeCode_j, destDatasourceName_j, successScriptNames_j, errorArray_j);
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
						return this->CEffectMgrEventObject::importFromScript(dir, userTypeCode, destDatasourceName, successScriptNames, errorArray);
					}
				}
				virtual void importFromScript(const EVString& dir, const EVString& userTypeCode, const EarthView::World::Spatial::GeoDataset::IDataSource* ds, EarthView::World::Core::CStringArray& successScriptNames, EarthView::World::Core::CStringArray& errorArray)
				{
					if (this->_gRef != NULL && this->m_importFromScript_EVString_EVString_IDataSource_CStringArray_CStringArray_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring dir_wch = dir;
						jstring dir_j = __env->NewString((const jchar*)dir_wch.getString(), dir_wch.size());
						EarthView::World::Core::ev_wstring userTypeCode_wch = userTypeCode;
						jstring userTypeCode_j = __env->NewString((const jchar*)userTypeCode_wch.getString(), userTypeCode_wch.size());
						jlong ds_j = (jlong) ds;
						jlong successScriptNames_j = (jlong) &successScriptNames;
						jlong errorArray_j = (jlong) &errorArray;
						jmethodID __method = __gr->getMethod("importFromScript_EVString_EVString_IDataSource_CStringArray_CStringArray_callback");
						__env->CallVoidMethod(__obj, __method , dir_j, userTypeCode_j, ds_j, successScriptNames_j, errorArray_j);
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
						return this->CEffectMgrEventObject::importFromScript(dir, userTypeCode, ds, successScriptNames, errorArray);
					}
				}
				virtual bool exportEffectToLocal(ev_uint32 effectId, EarthView::World::Spatial3D::Dataset::CEffectDataSource* effectDataSource, const EVString& exportPath, bool overrideFile)
				{
					if (this->_gRef != NULL && this->m_exportEffectToLocal_ev_uint32_CEffectDataSource_EVString_bool_callback != "" && this->isCustomExtend())
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
						jlong effectId_j = (jlong) effectId;
						jlong effectDataSource_j = (jlong) effectDataSource;
						EarthView::World::Core::ev_wstring exportPath_wch = exportPath;
						jstring exportPath_j = __env->NewString((const jchar*)exportPath_wch.getString(), exportPath_wch.size());
						jboolean overrideFile_j = (jboolean) overrideFile;
						jmethodID __method = __gr->getMethod("exportEffectToLocal_ev_uint32_CEffectDataSource_EVString_bool_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , effectId_j, effectDataSource_j, exportPath_j, overrideFile_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						bool __values1 = (bool) __values1_j;
						return __values1;
					}
					else
					{
						return this->CEffectMgrEventObject::exportEffectToLocal(effectId, effectDataSource, exportPath, overrideFile);
					}
				}
				virtual void onImportFromScript(EarthView::World::Spatial3DProxy::CEffectTreeviewEvent* e)
				{
					if (this->_gRef != NULL && this->m_onImportFromScript_CEffectTreeviewEvent_callback != "" && this->isCustomExtend())
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
						jlong e_j = (jlong) e;
						jmethodID __method = __gr->getMethod("onImportFromScript_CEffectTreeviewEvent_callback");
						__env->CallVoidMethod(__obj, __method , e_j);
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
						return this->CEffectMgrEventObject::onImportFromScript(e);
					}
				}
				virtual void onExportToTemplateDB(EarthView::World::Spatial3DProxy::CEffectTreeviewEvent* e)
				{
					if (this->_gRef != NULL && this->m_onExportToTemplateDB_CEffectTreeviewEvent_callback != "" && this->isCustomExtend())
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
						jlong e_j = (jlong) e;
						jmethodID __method = __gr->getMethod("onExportToTemplateDB_CEffectTreeviewEvent_callback");
						__env->CallVoidMethod(__obj, __method , e_j);
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
						return this->CEffectMgrEventObject::onExportToTemplateDB(e);
					}
				}
				virtual void createNewEffect(const EVString& datasourceName, const EVString& name, const EVString& userTypeCode, EarthView::World::Spatial3D::Dataset::EffectType type, ev_uint32 parentEffectId)
				{
					if (this->_gRef != NULL && this->m_createNewEffect_EVString_EVString_EVString_EffectType_ev_uint32_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring datasourceName_wch = datasourceName;
						jstring datasourceName_j = __env->NewString((const jchar*)datasourceName_wch.getString(), datasourceName_wch.size());
						EarthView::World::Core::ev_wstring name_wch = name;
						jstring name_j = __env->NewString((const jchar*)name_wch.getString(), name_wch.size());
						EarthView::World::Core::ev_wstring userTypeCode_wch = userTypeCode;
						jstring userTypeCode_j = __env->NewString((const jchar*)userTypeCode_wch.getString(), userTypeCode_wch.size());
						jint type_j = (jint) type;
						jlong parentEffectId_j = (jlong) parentEffectId;
						jmethodID __method = __gr->getMethod("createNewEffect_EVString_EVString_EVString_EffectType_ev_uint32_callback");
						__env->CallVoidMethod(__obj, __method , datasourceName_j, name_j, userTypeCode_j, type_j, parentEffectId_j);
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
						return this->CEffectMgrEventObject::createNewEffect(datasourceName, name, userTypeCode, type, parentEffectId);
					}
				}
				virtual void createNewEffect(const EarthView::World::Spatial::GeoDataset::IDataSource* ds, const EVString& name, const EVString& userTypeCode, EarthView::World::Spatial3D::Dataset::EffectType type, ev_uint32 parentEffectId)
				{
					if (this->_gRef != NULL && this->m_createNewEffect_IDataSource_EVString_EVString_EffectType_ev_uint32_callback != "" && this->isCustomExtend())
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
						jlong ds_j = (jlong) ds;
						EarthView::World::Core::ev_wstring name_wch = name;
						jstring name_j = __env->NewString((const jchar*)name_wch.getString(), name_wch.size());
						EarthView::World::Core::ev_wstring userTypeCode_wch = userTypeCode;
						jstring userTypeCode_j = __env->NewString((const jchar*)userTypeCode_wch.getString(), userTypeCode_wch.size());
						jint type_j = (jint) type;
						jlong parentEffectId_j = (jlong) parentEffectId;
						jmethodID __method = __gr->getMethod("createNewEffect_IDataSource_EVString_EVString_EffectType_ev_uint32_callback");
						__env->CallVoidMethod(__obj, __method , ds_j, name_j, userTypeCode_j, type_j, parentEffectId_j);
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
						return this->CEffectMgrEventObject::createNewEffect(ds, name, userTypeCode, type, parentEffectId);
					}
				}
				virtual void onCreateNewEffect(EarthView::World::Spatial3DProxy::CEffectTreeviewEvent* e)
				{
					if (this->_gRef != NULL && this->m_onCreateNewEffect_CEffectTreeviewEvent_callback != "" && this->isCustomExtend())
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
						jlong e_j = (jlong) e;
						jmethodID __method = __gr->getMethod("onCreateNewEffect_CEffectTreeviewEvent_callback");
						__env->CallVoidMethod(__obj, __method , e_j);
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
						return this->CEffectMgrEventObject::onCreateNewEffect(e);
					}
				}
				virtual void renameUserType(const EVString& datasourceName, const EVString& code, const EVString& newName)
				{
					if (this->_gRef != NULL && this->m_renameUserType_EVString_EVString_EVString_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring datasourceName_wch = datasourceName;
						jstring datasourceName_j = __env->NewString((const jchar*)datasourceName_wch.getString(), datasourceName_wch.size());
						EarthView::World::Core::ev_wstring code_wch = code;
						jstring code_j = __env->NewString((const jchar*)code_wch.getString(), code_wch.size());
						EarthView::World::Core::ev_wstring newName_wch = newName;
						jstring newName_j = __env->NewString((const jchar*)newName_wch.getString(), newName_wch.size());
						jmethodID __method = __gr->getMethod("renameUserType_EVString_EVString_EVString_callback");
						__env->CallVoidMethod(__obj, __method , datasourceName_j, code_j, newName_j);
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
						return this->CEffectMgrEventObject::renameUserType(datasourceName, code, newName);
					}
				}
				virtual void renameUserType(const EarthView::World::Spatial::GeoDataset::IDataSource* ds, const EVString& code, const EVString& newName)
				{
					if (this->_gRef != NULL && this->m_renameUserType_IDataSource_EVString_EVString_callback != "" && this->isCustomExtend())
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
						jlong ds_j = (jlong) ds;
						EarthView::World::Core::ev_wstring code_wch = code;
						jstring code_j = __env->NewString((const jchar*)code_wch.getString(), code_wch.size());
						EarthView::World::Core::ev_wstring newName_wch = newName;
						jstring newName_j = __env->NewString((const jchar*)newName_wch.getString(), newName_wch.size());
						jmethodID __method = __gr->getMethod("renameUserType_IDataSource_EVString_EVString_callback");
						__env->CallVoidMethod(__obj, __method , ds_j, code_j, newName_j);
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
						return this->CEffectMgrEventObject::renameUserType(ds, code, newName);
					}
				}
				virtual void onRenameUserType(EarthView::World::Spatial3DProxy::CEffectTreeviewEvent* e)
				{
					if (this->_gRef != NULL && this->m_onRenameUserType_CEffectTreeviewEvent_callback != "" && this->isCustomExtend())
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
						jlong e_j = (jlong) e;
						jmethodID __method = __gr->getMethod("onRenameUserType_CEffectTreeviewEvent_callback");
						__env->CallVoidMethod(__obj, __method , e_j);
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
						return this->CEffectMgrEventObject::onRenameUserType(e);
					}
				}
				virtual void renameBlendEffect(const EVString& datasourceName, const EVString& code, const EVString& newName)
				{
					if (this->_gRef != NULL && this->m_renameBlendEffect_EVString_EVString_EVString_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring datasourceName_wch = datasourceName;
						jstring datasourceName_j = __env->NewString((const jchar*)datasourceName_wch.getString(), datasourceName_wch.size());
						EarthView::World::Core::ev_wstring code_wch = code;
						jstring code_j = __env->NewString((const jchar*)code_wch.getString(), code_wch.size());
						EarthView::World::Core::ev_wstring newName_wch = newName;
						jstring newName_j = __env->NewString((const jchar*)newName_wch.getString(), newName_wch.size());
						jmethodID __method = __gr->getMethod("renameBlendEffect_EVString_EVString_EVString_callback");
						__env->CallVoidMethod(__obj, __method , datasourceName_j, code_j, newName_j);
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
						return this->CEffectMgrEventObject::renameBlendEffect(datasourceName, code, newName);
					}
				}
				virtual void renameBlendEffect(const EarthView::World::Spatial::GeoDataset::IDataSource* ds, const EVString& code, const EVString& newName)
				{
					if (this->_gRef != NULL && this->m_renameBlendEffect_IDataSource_EVString_EVString_callback != "" && this->isCustomExtend())
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
						jlong ds_j = (jlong) ds;
						EarthView::World::Core::ev_wstring code_wch = code;
						jstring code_j = __env->NewString((const jchar*)code_wch.getString(), code_wch.size());
						EarthView::World::Core::ev_wstring newName_wch = newName;
						jstring newName_j = __env->NewString((const jchar*)newName_wch.getString(), newName_wch.size());
						jmethodID __method = __gr->getMethod("renameBlendEffect_IDataSource_EVString_EVString_callback");
						__env->CallVoidMethod(__obj, __method , ds_j, code_j, newName_j);
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
						return this->CEffectMgrEventObject::renameBlendEffect(ds, code, newName);
					}
				}
				virtual void onRenameBlendEffect(EarthView::World::Spatial3DProxy::CEffectTreeviewEvent* e)
				{
					if (this->_gRef != NULL && this->m_onRenameBlendEffect_CEffectTreeviewEvent_callback != "" && this->isCustomExtend())
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
						jlong e_j = (jlong) e;
						jmethodID __method = __gr->getMethod("onRenameBlendEffect_CEffectTreeviewEvent_callback");
						__env->CallVoidMethod(__obj, __method , e_j);
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
						return this->CEffectMgrEventObject::onRenameBlendEffect(e);
					}
				}
				virtual void renameSingleEffect(const EVString& datasourceName, const EVString& code, const EVString& newName)
				{
					if (this->_gRef != NULL && this->m_renameSingleEffect_EVString_EVString_EVString_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring datasourceName_wch = datasourceName;
						jstring datasourceName_j = __env->NewString((const jchar*)datasourceName_wch.getString(), datasourceName_wch.size());
						EarthView::World::Core::ev_wstring code_wch = code;
						jstring code_j = __env->NewString((const jchar*)code_wch.getString(), code_wch.size());
						EarthView::World::Core::ev_wstring newName_wch = newName;
						jstring newName_j = __env->NewString((const jchar*)newName_wch.getString(), newName_wch.size());
						jmethodID __method = __gr->getMethod("renameSingleEffect_EVString_EVString_EVString_callback");
						__env->CallVoidMethod(__obj, __method , datasourceName_j, code_j, newName_j);
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
						return this->CEffectMgrEventObject::renameSingleEffect(datasourceName, code, newName);
					}
				}
				virtual void copyNewEffect(const EVString& datasourceName, ev_uint32 effectId, const EVString& newName)
				{
					if (this->_gRef != NULL && this->m_copyNewEffect_EVString_ev_uint32_EVString_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring datasourceName_wch = datasourceName;
						jstring datasourceName_j = __env->NewString((const jchar*)datasourceName_wch.getString(), datasourceName_wch.size());
						jlong effectId_j = (jlong) effectId;
						EarthView::World::Core::ev_wstring newName_wch = newName;
						jstring newName_j = __env->NewString((const jchar*)newName_wch.getString(), newName_wch.size());
						jmethodID __method = __gr->getMethod("copyNewEffect_EVString_ev_uint32_EVString_callback");
						__env->CallVoidMethod(__obj, __method , datasourceName_j, effectId_j, newName_j);
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
						return this->CEffectMgrEventObject::copyNewEffect(datasourceName, effectId, newName);
					}
				}
				virtual void copyNewEffect(const EarthView::World::Spatial::GeoDataset::IDataSource* ds, ev_uint32 effectId, const EVString& newName)
				{
					if (this->_gRef != NULL && this->m_copyNewEffect_IDataSource_ev_uint32_EVString_callback != "" && this->isCustomExtend())
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
						jlong ds_j = (jlong) ds;
						jlong effectId_j = (jlong) effectId;
						EarthView::World::Core::ev_wstring newName_wch = newName;
						jstring newName_j = __env->NewString((const jchar*)newName_wch.getString(), newName_wch.size());
						jmethodID __method = __gr->getMethod("copyNewEffect_IDataSource_ev_uint32_EVString_callback");
						__env->CallVoidMethod(__obj, __method , ds_j, effectId_j, newName_j);
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
						return this->CEffectMgrEventObject::copyNewEffect(ds, effectId, newName);
					}
				}
				virtual void renameSingleEffect(const EarthView::World::Spatial::GeoDataset::IDataSource* ds, const EVString& code, const EVString& newName)
				{
					if (this->_gRef != NULL && this->m_renameSingleEffect_IDataSource_EVString_EVString_callback != "" && this->isCustomExtend())
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
						jlong ds_j = (jlong) ds;
						EarthView::World::Core::ev_wstring code_wch = code;
						jstring code_j = __env->NewString((const jchar*)code_wch.getString(), code_wch.size());
						EarthView::World::Core::ev_wstring newName_wch = newName;
						jstring newName_j = __env->NewString((const jchar*)newName_wch.getString(), newName_wch.size());
						jmethodID __method = __gr->getMethod("renameSingleEffect_IDataSource_EVString_EVString_callback");
						__env->CallVoidMethod(__obj, __method , ds_j, code_j, newName_j);
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
						return this->CEffectMgrEventObject::renameSingleEffect(ds, code, newName);
					}
				}
				virtual void onRenameSingleEffect(EarthView::World::Spatial3DProxy::CEffectTreeviewEvent* e)
				{
					if (this->_gRef != NULL && this->m_onRenameSingleEffect_CEffectTreeviewEvent_callback != "" && this->isCustomExtend())
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
						jlong e_j = (jlong) e;
						jmethodID __method = __gr->getMethod("onRenameSingleEffect_CEffectTreeviewEvent_callback");
						__env->CallVoidMethod(__obj, __method , e_j);
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
						return this->CEffectMgrEventObject::onRenameSingleEffect(e);
					}
				}
				virtual void renameBEChild(const EVString& datasourceName, const EVString& code, const EVString& newName)
				{
					if (this->_gRef != NULL && this->m_renameBEChild_EVString_EVString_EVString_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring datasourceName_wch = datasourceName;
						jstring datasourceName_j = __env->NewString((const jchar*)datasourceName_wch.getString(), datasourceName_wch.size());
						EarthView::World::Core::ev_wstring code_wch = code;
						jstring code_j = __env->NewString((const jchar*)code_wch.getString(), code_wch.size());
						EarthView::World::Core::ev_wstring newName_wch = newName;
						jstring newName_j = __env->NewString((const jchar*)newName_wch.getString(), newName_wch.size());
						jmethodID __method = __gr->getMethod("renameBEChild_EVString_EVString_EVString_callback");
						__env->CallVoidMethod(__obj, __method , datasourceName_j, code_j, newName_j);
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
						return this->CEffectMgrEventObject::renameBEChild(datasourceName, code, newName);
					}
				}
				virtual void renameBEChild(const EarthView::World::Spatial::GeoDataset::IDataSource* ds, const EVString& code, const EVString& newName)
				{
					if (this->_gRef != NULL && this->m_renameBEChild_IDataSource_EVString_EVString_callback != "" && this->isCustomExtend())
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
						jlong ds_j = (jlong) ds;
						EarthView::World::Core::ev_wstring code_wch = code;
						jstring code_j = __env->NewString((const jchar*)code_wch.getString(), code_wch.size());
						EarthView::World::Core::ev_wstring newName_wch = newName;
						jstring newName_j = __env->NewString((const jchar*)newName_wch.getString(), newName_wch.size());
						jmethodID __method = __gr->getMethod("renameBEChild_IDataSource_EVString_EVString_callback");
						__env->CallVoidMethod(__obj, __method , ds_j, code_j, newName_j);
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
						return this->CEffectMgrEventObject::renameBEChild(ds, code, newName);
					}
				}
				virtual void onRenameBEChildEffect(EarthView::World::Spatial3DProxy::CEffectTreeviewEvent* e)
				{
					if (this->_gRef != NULL && this->m_onRenameBEChildEffect_CEffectTreeviewEvent_callback != "" && this->isCustomExtend())
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
						jlong e_j = (jlong) e;
						jmethodID __method = __gr->getMethod("onRenameBEChildEffect_CEffectTreeviewEvent_callback");
						__env->CallVoidMethod(__obj, __method , e_j);
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
						return this->CEffectMgrEventObject::onRenameBEChildEffect(e);
					}
				}
				virtual void deleteUserType(const EVString& datasourceName, const EVString& code)
				{
					if (this->_gRef != NULL && this->m_deleteUserType_EVString_EVString_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring datasourceName_wch = datasourceName;
						jstring datasourceName_j = __env->NewString((const jchar*)datasourceName_wch.getString(), datasourceName_wch.size());
						EarthView::World::Core::ev_wstring code_wch = code;
						jstring code_j = __env->NewString((const jchar*)code_wch.getString(), code_wch.size());
						jmethodID __method = __gr->getMethod("deleteUserType_EVString_EVString_callback");
						__env->CallVoidMethod(__obj, __method , datasourceName_j, code_j);
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
						return this->CEffectMgrEventObject::deleteUserType(datasourceName, code);
					}
				}
				virtual void deleteUserType(const EarthView::World::Spatial::GeoDataset::IDataSource* ds, const EVString& code)
				{
					if (this->_gRef != NULL && this->m_deleteUserType_IDataSource_EVString_callback != "" && this->isCustomExtend())
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
						jlong ds_j = (jlong) ds;
						EarthView::World::Core::ev_wstring code_wch = code;
						jstring code_j = __env->NewString((const jchar*)code_wch.getString(), code_wch.size());
						jmethodID __method = __gr->getMethod("deleteUserType_IDataSource_EVString_callback");
						__env->CallVoidMethod(__obj, __method , ds_j, code_j);
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
						return this->CEffectMgrEventObject::deleteUserType(ds, code);
					}
				}
				virtual void onDeleteUserType(EarthView::World::Spatial3DProxy::CEffectTreeviewEvent* e)
				{
					if (this->_gRef != NULL && this->m_onDeleteUserType_CEffectTreeviewEvent_callback != "" && this->isCustomExtend())
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
						jlong e_j = (jlong) e;
						jmethodID __method = __gr->getMethod("onDeleteUserType_CEffectTreeviewEvent_callback");
						__env->CallVoidMethod(__obj, __method , e_j);
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
						return this->CEffectMgrEventObject::onDeleteUserType(e);
					}
				}
				virtual void deleteEffect(const EVString& datasourceName, ev_uint32 parentEffectId, ev_uint32 effectId, EarthView::World::Spatial3D::Dataset::EffectType type)
				{
					if (this->_gRef != NULL && this->m_deleteEffect_EVString_ev_uint32_ev_uint32_EffectType_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring datasourceName_wch = datasourceName;
						jstring datasourceName_j = __env->NewString((const jchar*)datasourceName_wch.getString(), datasourceName_wch.size());
						jlong parentEffectId_j = (jlong) parentEffectId;
						jlong effectId_j = (jlong) effectId;
						jint type_j = (jint) type;
						jmethodID __method = __gr->getMethod("deleteEffect_EVString_ev_uint32_ev_uint32_EffectType_callback");
						__env->CallVoidMethod(__obj, __method , datasourceName_j, parentEffectId_j, effectId_j, type_j);
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
						return this->CEffectMgrEventObject::deleteEffect(datasourceName, parentEffectId, effectId, type);
					}
				}
				virtual void deleteEffect(const EarthView::World::Spatial::GeoDataset::IDataSource* ds, ev_uint32 parentEffectId, ev_uint32 effectId, EarthView::World::Spatial3D::Dataset::EffectType type)
				{
					if (this->_gRef != NULL && this->m_deleteEffect_IDataSource_ev_uint32_ev_uint32_EffectType_callback != "" && this->isCustomExtend())
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
						jlong ds_j = (jlong) ds;
						jlong parentEffectId_j = (jlong) parentEffectId;
						jlong effectId_j = (jlong) effectId;
						jint type_j = (jint) type;
						jmethodID __method = __gr->getMethod("deleteEffect_IDataSource_ev_uint32_ev_uint32_EffectType_callback");
						__env->CallVoidMethod(__obj, __method , ds_j, parentEffectId_j, effectId_j, type_j);
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
						return this->CEffectMgrEventObject::deleteEffect(ds, parentEffectId, effectId, type);
					}
				}
				virtual void onDeleteEffect(EarthView::World::Spatial3DProxy::CEffectTreeviewEvent* e)
				{
					if (this->_gRef != NULL && this->m_onDeleteEffect_CEffectTreeviewEvent_callback != "" && this->isCustomExtend())
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
						jlong e_j = (jlong) e;
						jmethodID __method = __gr->getMethod("onDeleteEffect_CEffectTreeviewEvent_callback");
						__env->CallVoidMethod(__obj, __method , e_j);
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
						return this->CEffectMgrEventObject::onDeleteEffect(e);
					}
				}
				virtual void addEffectToBlendEffect(const EVString& datasourceName, ev_uint32 editEffectId, ev_uint32 dragEffectId)
				{
					if (this->_gRef != NULL && this->m_addEffectToBlendEffect_EVString_ev_uint32_ev_uint32_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring datasourceName_wch = datasourceName;
						jstring datasourceName_j = __env->NewString((const jchar*)datasourceName_wch.getString(), datasourceName_wch.size());
						jlong editEffectId_j = (jlong) editEffectId;
						jlong dragEffectId_j = (jlong) dragEffectId;
						jmethodID __method = __gr->getMethod("addEffectToBlendEffect_EVString_ev_uint32_ev_uint32_callback");
						__env->CallVoidMethod(__obj, __method , datasourceName_j, editEffectId_j, dragEffectId_j);
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
						return this->CEffectMgrEventObject::addEffectToBlendEffect(datasourceName, editEffectId, dragEffectId);
					}
				}
				virtual void addEffectToBlendEffect(const EarthView::World::Spatial::GeoDataset::IDataSource* ds, ev_uint32 editEffectId, ev_uint32 dragEffectId)
				{
					if (this->_gRef != NULL && this->m_addEffectToBlendEffect_IDataSource_ev_uint32_ev_uint32_callback != "" && this->isCustomExtend())
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
						jlong ds_j = (jlong) ds;
						jlong editEffectId_j = (jlong) editEffectId;
						jlong dragEffectId_j = (jlong) dragEffectId;
						jmethodID __method = __gr->getMethod("addEffectToBlendEffect_IDataSource_ev_uint32_ev_uint32_callback");
						__env->CallVoidMethod(__obj, __method , ds_j, editEffectId_j, dragEffectId_j);
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
						return this->CEffectMgrEventObject::addEffectToBlendEffect(ds, editEffectId, dragEffectId);
					}
				}
				virtual void onAddEffectToBlendEffect(EarthView::World::Spatial3DProxy::CEffectTreeviewEvent* e)
				{
					if (this->_gRef != NULL && this->m_onAddEffectToBlendEffect_CEffectTreeviewEvent_callback != "" && this->isCustomExtend())
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
						jlong e_j = (jlong) e;
						jmethodID __method = __gr->getMethod("onAddEffectToBlendEffect_CEffectTreeviewEvent_callback");
						__env->CallVoidMethod(__obj, __method , e_j);
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
						return this->CEffectMgrEventObject::onAddEffectToBlendEffect(e);
					}
				}
				virtual bool isExistName(const EVString& dataSourceName, const EVString& effectName, const EVString& typeCode, EarthView::World::Spatial3D::Dataset::EffectType effectType, const EVString& blendeffectName)
				{
					if (this->_gRef != NULL && this->m_isExistName_EVString_EVString_EVString_EffectType_EVString_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring dataSourceName_wch = dataSourceName;
						jstring dataSourceName_j = __env->NewString((const jchar*)dataSourceName_wch.getString(), dataSourceName_wch.size());
						EarthView::World::Core::ev_wstring effectName_wch = effectName;
						jstring effectName_j = __env->NewString((const jchar*)effectName_wch.getString(), effectName_wch.size());
						EarthView::World::Core::ev_wstring typeCode_wch = typeCode;
						jstring typeCode_j = __env->NewString((const jchar*)typeCode_wch.getString(), typeCode_wch.size());
						jint effectType_j = (jint) effectType;
						EarthView::World::Core::ev_wstring blendeffectName_wch = blendeffectName;
						jstring blendeffectName_j = __env->NewString((const jchar*)blendeffectName_wch.getString(), blendeffectName_wch.size());
						jmethodID __method = __gr->getMethod("isExistName_EVString_EVString_EVString_EffectType_EVString_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , dataSourceName_j, effectName_j, typeCode_j, effectType_j, blendeffectName_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						bool __values1 = (bool) __values1_j;
						return __values1;
					}
					else
					{
						return this->CEffectMgrEventObject::isExistName(dataSourceName, effectName, typeCode, effectType, blendeffectName);
					}
				}
				virtual bool isExistName(const EarthView::World::Spatial::GeoDataset::IDataSource* ds, const EVString& effectName, const EVString& typeCode, EarthView::World::Spatial3D::Dataset::EffectType effectType, const EVString& blendeffectName)
				{
					if (this->_gRef != NULL && this->m_isExistName_IDataSource_EVString_EVString_EffectType_EVString_callback != "" && this->isCustomExtend())
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
						jlong ds_j = (jlong) ds;
						EarthView::World::Core::ev_wstring effectName_wch = effectName;
						jstring effectName_j = __env->NewString((const jchar*)effectName_wch.getString(), effectName_wch.size());
						EarthView::World::Core::ev_wstring typeCode_wch = typeCode;
						jstring typeCode_j = __env->NewString((const jchar*)typeCode_wch.getString(), typeCode_wch.size());
						jint effectType_j = (jint) effectType;
						EarthView::World::Core::ev_wstring blendeffectName_wch = blendeffectName;
						jstring blendeffectName_j = __env->NewString((const jchar*)blendeffectName_wch.getString(), blendeffectName_wch.size());
						jmethodID __method = __gr->getMethod("isExistName_IDataSource_EVString_EVString_EffectType_EVString_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , ds_j, effectName_j, typeCode_j, effectType_j, blendeffectName_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						bool __values1 = (bool) __values1_j;
						return __values1;
					}
					else
					{
						return this->CEffectMgrEventObject::isExistName(ds, effectName, typeCode, effectType, blendeffectName);
					}
				}
				virtual void addEffectToUserType(const EVString& datasourceName, ev_uint32 srcItemId, const EVString& dstUserTypeCode)
				{
					if (this->_gRef != NULL && this->m_addEffectToUserType_EVString_ev_uint32_EVString_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring datasourceName_wch = datasourceName;
						jstring datasourceName_j = __env->NewString((const jchar*)datasourceName_wch.getString(), datasourceName_wch.size());
						jlong srcItemId_j = (jlong) srcItemId;
						EarthView::World::Core::ev_wstring dstUserTypeCode_wch = dstUserTypeCode;
						jstring dstUserTypeCode_j = __env->NewString((const jchar*)dstUserTypeCode_wch.getString(), dstUserTypeCode_wch.size());
						jmethodID __method = __gr->getMethod("addEffectToUserType_EVString_ev_uint32_EVString_callback");
						__env->CallVoidMethod(__obj, __method , datasourceName_j, srcItemId_j, dstUserTypeCode_j);
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
						return this->CEffectMgrEventObject::addEffectToUserType(datasourceName, srcItemId, dstUserTypeCode);
					}
				}
				virtual void addEffectToUserType(const EarthView::World::Spatial::GeoDataset::IDataSource* ds, ev_uint32 srcItemId, const EVString& dstUserTypeCode)
				{
					if (this->_gRef != NULL && this->m_addEffectToUserType_IDataSource_ev_uint32_EVString_callback != "" && this->isCustomExtend())
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
						jlong ds_j = (jlong) ds;
						jlong srcItemId_j = (jlong) srcItemId;
						EarthView::World::Core::ev_wstring dstUserTypeCode_wch = dstUserTypeCode;
						jstring dstUserTypeCode_j = __env->NewString((const jchar*)dstUserTypeCode_wch.getString(), dstUserTypeCode_wch.size());
						jmethodID __method = __gr->getMethod("addEffectToUserType_IDataSource_ev_uint32_EVString_callback");
						__env->CallVoidMethod(__obj, __method , ds_j, srcItemId_j, dstUserTypeCode_j);
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
						return this->CEffectMgrEventObject::addEffectToUserType(ds, srcItemId, dstUserTypeCode);
					}
				}
				virtual void onAddEffectToUserType(EarthView::World::Spatial3DProxy::CEffectTreeviewEvent* e)
				{
					if (this->_gRef != NULL && this->m_onAddEffectToUserType_CEffectTreeviewEvent_callback != "" && this->isCustomExtend())
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
						jlong e_j = (jlong) e;
						jmethodID __method = __gr->getMethod("onAddEffectToUserType_CEffectTreeviewEvent_callback");
						__env->CallVoidMethod(__obj, __method , e_j);
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
						return this->CEffectMgrEventObject::onAddEffectToUserType(e);
					}
				}
				virtual void addUserTypeToUserType(const EVString& datasourceName, const EVString& srcUserTypeCode, const EVString& dstUserTypeCode)
				{
					if (this->_gRef != NULL && this->m_addUserTypeToUserType_EVString_EVString_EVString_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring datasourceName_wch = datasourceName;
						jstring datasourceName_j = __env->NewString((const jchar*)datasourceName_wch.getString(), datasourceName_wch.size());
						EarthView::World::Core::ev_wstring srcUserTypeCode_wch = srcUserTypeCode;
						jstring srcUserTypeCode_j = __env->NewString((const jchar*)srcUserTypeCode_wch.getString(), srcUserTypeCode_wch.size());
						EarthView::World::Core::ev_wstring dstUserTypeCode_wch = dstUserTypeCode;
						jstring dstUserTypeCode_j = __env->NewString((const jchar*)dstUserTypeCode_wch.getString(), dstUserTypeCode_wch.size());
						jmethodID __method = __gr->getMethod("addUserTypeToUserType_EVString_EVString_EVString_callback");
						__env->CallVoidMethod(__obj, __method , datasourceName_j, srcUserTypeCode_j, dstUserTypeCode_j);
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
						return this->CEffectMgrEventObject::addUserTypeToUserType(datasourceName, srcUserTypeCode, dstUserTypeCode);
					}
				}
				virtual void addUserTypeToUserType(const EarthView::World::Spatial::GeoDataset::IDataSource* ds, const EVString& srcUserTypeCode, const EVString& dstUserTypeCode)
				{
					if (this->_gRef != NULL && this->m_addUserTypeToUserType_IDataSource_EVString_EVString_callback != "" && this->isCustomExtend())
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
						jlong ds_j = (jlong) ds;
						EarthView::World::Core::ev_wstring srcUserTypeCode_wch = srcUserTypeCode;
						jstring srcUserTypeCode_j = __env->NewString((const jchar*)srcUserTypeCode_wch.getString(), srcUserTypeCode_wch.size());
						EarthView::World::Core::ev_wstring dstUserTypeCode_wch = dstUserTypeCode;
						jstring dstUserTypeCode_j = __env->NewString((const jchar*)dstUserTypeCode_wch.getString(), dstUserTypeCode_wch.size());
						jmethodID __method = __gr->getMethod("addUserTypeToUserType_IDataSource_EVString_EVString_callback");
						__env->CallVoidMethod(__obj, __method , ds_j, srcUserTypeCode_j, dstUserTypeCode_j);
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
						return this->CEffectMgrEventObject::addUserTypeToUserType(ds, srcUserTypeCode, dstUserTypeCode);
					}
				}
				virtual void onAddUserTypeToUserType(EarthView::World::Spatial3DProxy::CEffectTreeviewEvent* e)
				{
					if (this->_gRef != NULL && this->m_onAddUserTypeToUserType_CEffectTreeviewEvent_callback != "" && this->isCustomExtend())
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
						jlong e_j = (jlong) e;
						jmethodID __method = __gr->getMethod("onAddUserTypeToUserType_CEffectTreeviewEvent_callback");
						__env->CallVoidMethod(__obj, __method , e_j);
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
						return this->CEffectMgrEventObject::onAddUserTypeToUserType(e);
					}
				}
				virtual void saveEffect(const EVString& datasourceName, EarthView::World::Spatial3D::EffectManager::CEffect* effect)
				{
					if (this->_gRef != NULL && this->m_saveEffect_EVString_CEffect_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring datasourceName_wch = datasourceName;
						jstring datasourceName_j = __env->NewString((const jchar*)datasourceName_wch.getString(), datasourceName_wch.size());
						jlong effect_j = (jlong) effect;
						jmethodID __method = __gr->getMethod("saveEffect_EVString_CEffect_callback");
						__env->CallVoidMethod(__obj, __method , datasourceName_j, effect_j);
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
						return this->CEffectMgrEventObject::saveEffect(datasourceName, effect);
					}
				}
				virtual void saveEffect(const EarthView::World::Spatial::GeoDataset::IDataSource* ds, EarthView::World::Spatial3D::EffectManager::CEffect* effect)
				{
					if (this->_gRef != NULL && this->m_saveEffect_IDataSource_CEffect_callback != "" && this->isCustomExtend())
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
						jlong ds_j = (jlong) ds;
						jlong effect_j = (jlong) effect;
						jmethodID __method = __gr->getMethod("saveEffect_IDataSource_CEffect_callback");
						__env->CallVoidMethod(__obj, __method , ds_j, effect_j);
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
						return this->CEffectMgrEventObject::saveEffect(ds, effect);
					}
				}
				virtual void onSaveEffect(EarthView::World::Spatial3DProxy::CEffectTreeviewEvent* e)
				{
					if (this->_gRef != NULL && this->m_onSaveEffect_CEffectTreeviewEvent_callback != "" && this->isCustomExtend())
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
						jlong e_j = (jlong) e;
						jmethodID __method = __gr->getMethod("onSaveEffect_CEffectTreeviewEvent_callback");
						__env->CallVoidMethod(__obj, __method , e_j);
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
						return this->CEffectMgrEventObject::onSaveEffect(e);
					}
				}
				virtual void saveEffectMaterial(const EarthView::World::Spatial::GeoDataset::IDataSource* ds, ev_uint32 effectID)
				{
					if (this->_gRef != NULL && this->m_saveEffectMaterial_IDataSource_ev_uint32_callback != "" && this->isCustomExtend())
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
						jlong ds_j = (jlong) ds;
						jlong effectID_j = (jlong) effectID;
						jmethodID __method = __gr->getMethod("saveEffectMaterial_IDataSource_ev_uint32_callback");
						__env->CallVoidMethod(__obj, __method , ds_j, effectID_j);
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
						return this->CEffectMgrEventObject::saveEffectMaterial(ds, effectID);
					}
				}
				virtual void saveEffectMaterial(const EVString& datasourceName, ev_uint32 effectID)
				{
					if (this->_gRef != NULL && this->m_saveEffectMaterial_EVString_ev_uint32_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring datasourceName_wch = datasourceName;
						jstring datasourceName_j = __env->NewString((const jchar*)datasourceName_wch.getString(), datasourceName_wch.size());
						jlong effectID_j = (jlong) effectID;
						jmethodID __method = __gr->getMethod("saveEffectMaterial_EVString_ev_uint32_callback");
						__env->CallVoidMethod(__obj, __method , datasourceName_j, effectID_j);
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
						return this->CEffectMgrEventObject::saveEffectMaterial(datasourceName, effectID);
					}
				}
				virtual void onSaveEffectMaterial(EarthView::World::Spatial3DProxy::CEffectTreeviewEvent* e)
				{
					if (this->_gRef != NULL && this->m_onSaveEffectMaterial_CEffectTreeviewEvent_callback != "" && this->isCustomExtend())
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
						jlong e_j = (jlong) e;
						jmethodID __method = __gr->getMethod("onSaveEffectMaterial_CEffectTreeviewEvent_callback");
						__env->CallVoidMethod(__obj, __method , e_j);
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
						return this->CEffectMgrEventObject::onSaveEffectMaterial(e);
					}
				}
				virtual void loadTree(const EVString& datasourceName, EarthView::World::Spatial3D::Dataset::CEffectUserTypeTree& tree)
				{
					if (this->_gRef != NULL && this->m_loadTree_EVString_CEffectUserTypeTree_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring datasourceName_wch = datasourceName;
						jstring datasourceName_j = __env->NewString((const jchar*)datasourceName_wch.getString(), datasourceName_wch.size());
						jlong tree_j = (jlong) &tree;
						jmethodID __method = __gr->getMethod("loadTree_EVString_CEffectUserTypeTree_callback");
						__env->CallVoidMethod(__obj, __method , datasourceName_j, tree_j);
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
						return this->CEffectMgrEventObject::loadTree(datasourceName, tree);
					}
				}
				virtual void loadTree(const EarthView::World::Spatial::GeoDataset::IDataSource* ds, EarthView::World::Spatial3D::Dataset::CEffectUserTypeTree& tree)
				{
					if (this->_gRef != NULL && this->m_loadTree_IDataSource_CEffectUserTypeTree_callback != "" && this->isCustomExtend())
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
						jlong ds_j = (jlong) ds;
						jlong tree_j = (jlong) &tree;
						jmethodID __method = __gr->getMethod("loadTree_IDataSource_CEffectUserTypeTree_callback");
						__env->CallVoidMethod(__obj, __method , ds_j, tree_j);
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
						return this->CEffectMgrEventObject::loadTree(ds, tree);
					}
				}
				virtual void getBlendEffectInfos(const EVString& datasourceName, ev_uint32 effectId, EarthView::World::Spatial3D::Dataset::CEffectInfoVector& vec)
				{
					if (this->_gRef != NULL && this->m_getBlendEffectInfos_EVString_ev_uint32_CEffectInfoVector_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring datasourceName_wch = datasourceName;
						jstring datasourceName_j = __env->NewString((const jchar*)datasourceName_wch.getString(), datasourceName_wch.size());
						jlong effectId_j = (jlong) effectId;
						jlong vec_j = (jlong) &vec;
						jmethodID __method = __gr->getMethod("getBlendEffectInfos_EVString_ev_uint32_CEffectInfoVector_callback");
						__env->CallVoidMethod(__obj, __method , datasourceName_j, effectId_j, vec_j);
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
						return this->CEffectMgrEventObject::getBlendEffectInfos(datasourceName, effectId, vec);
					}
				}
				virtual void getBlendEffectInfos(const EarthView::World::Spatial::GeoDataset::IDataSource* ds, ev_uint32 effectId, EarthView::World::Spatial3D::Dataset::CEffectInfoVector& vec)
				{
					if (this->_gRef != NULL && this->m_getBlendEffectInfos_IDataSource_ev_uint32_CEffectInfoVector_callback != "" && this->isCustomExtend())
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
						jlong ds_j = (jlong) ds;
						jlong effectId_j = (jlong) effectId;
						jlong vec_j = (jlong) &vec;
						jmethodID __method = __gr->getMethod("getBlendEffectInfos_IDataSource_ev_uint32_CEffectInfoVector_callback");
						__env->CallVoidMethod(__obj, __method , ds_j, effectId_j, vec_j);
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
						return this->CEffectMgrEventObject::getBlendEffectInfos(ds, effectId, vec);
					}
				}
				virtual ev_bool onEvent(EarthView::World::Core::CEvent* e)
				{
					if (this->_gRef != NULL && this->m_onEvent_CEvent_callback != "" && this->isCustomExtend())
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
						jlong e_j = (jlong) e;
						jmethodID __method = __gr->getMethod("onEvent_CEvent_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , e_j);
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
						return this->CEffectMgrEventObject::onEvent(e);
					}
				}
				virtual void onTimerEvent(EarthView::World::Core::CTimerEvent* e)
				{
					if (this->_gRef != NULL && this->m_onTimerEvent_CTimerEvent_callback != "" && this->isCustomExtend())
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
						jlong e_j = (jlong) e;
						jmethodID __method = __gr->getMethod("onTimerEvent_CTimerEvent_callback");
						__env->CallVoidMethod(__obj, __method , e_j);
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
						return this->CEffectMgrEventObject::onTimerEvent(e);
					}
				}
				virtual void onCustomEvent(EarthView::World::Core::CEvent* e)
				{
					if (this->_gRef != NULL && this->m_onCustomEvent_CEvent_callback != "" && this->isCustomExtend())
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
						jlong e_j = (jlong) e;
						jmethodID __method = __gr->getMethod("onCustomEvent_CEvent_callback");
						__env->CallVoidMethod(__obj, __method , e_j);
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
						return this->CEffectMgrEventObject::onCustomEvent(e);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCEffectMgrEventObjectProxy);
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_createUserType_1EVString_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring datasourceName_j, jstring parentCode_j, jstring newUserTypeName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* datasourceName_ch = (const ev_char*)__env->GetStringUTFChars(datasourceName_j,JNI_FALSE);
				const EVString datasourceName = datasourceName_ch;
				__env->ReleaseStringUTFChars(datasourceName_j, (const char *)datasourceName_ch);
				#else
				const ev_wchar* datasourceName_ch = (const ev_wchar*)__env->GetStringChars(datasourceName_j,JNI_FALSE);
				const EVString datasourceName = datasourceName_ch;
				__env->ReleaseStringChars(datasourceName_j, (const jchar *)datasourceName_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* parentCode_ch = (const ev_char*)__env->GetStringUTFChars(parentCode_j,JNI_FALSE);
				EVString parentCode = parentCode_ch;
				__env->ReleaseStringUTFChars(parentCode_j, (const char *)parentCode_ch);
				#else
				const ev_wchar* parentCode_ch = (const ev_wchar*)__env->GetStringChars(parentCode_j,JNI_FALSE);
				EVString parentCode = parentCode_ch;
				__env->ReleaseStringChars(parentCode_j, (const jchar *)parentCode_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* newUserTypeName_ch = (const ev_char*)__env->GetStringUTFChars(newUserTypeName_j,JNI_FALSE);
				EVString newUserTypeName = newUserTypeName_ch;
				__env->ReleaseStringUTFChars(newUserTypeName_j, (const char *)newUserTypeName_ch);
				#else
				const ev_wchar* newUserTypeName_ch = (const ev_wchar*)__env->GetStringChars(newUserTypeName_j,JNI_FALSE);
				EVString newUserTypeName = newUserTypeName_ch;
				__env->ReleaseStringChars(newUserTypeName_j, (const jchar *)newUserTypeName_ch);
				#endif
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject *pObjectX = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCEffectMgrEventObjectProxy))
				{
					pObjectX->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::createUserType(datasourceName, parentCode, newUserTypeName);
				}
				else
				{
					pObjectX->createUserType(datasourceName, parentCode, newUserTypeName);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_register_1createUserType_1EVString_1EVString_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCEffectMgrEventObjectProxy *pObjectX = (JCEffectMgrEventObjectProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createUserType_EVString_EVString_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createUserType_EVString_EVString_EVString_callback", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_createUserType_1EVString_1EVString_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring datasourceName_j, jstring parentCode_j, jstring newUserTypeName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* datasourceName_ch = (const ev_char*)__env->GetStringUTFChars(datasourceName_j,JNI_FALSE);
				const EVString datasourceName = datasourceName_ch;
				__env->ReleaseStringUTFChars(datasourceName_j, (const char *)datasourceName_ch);
				#else
				const ev_wchar* datasourceName_ch = (const ev_wchar*)__env->GetStringChars(datasourceName_j,JNI_FALSE);
				const EVString datasourceName = datasourceName_ch;
				__env->ReleaseStringChars(datasourceName_j, (const jchar *)datasourceName_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* parentCode_ch = (const ev_char*)__env->GetStringUTFChars(parentCode_j,JNI_FALSE);
				EVString parentCode = parentCode_ch;
				__env->ReleaseStringUTFChars(parentCode_j, (const char *)parentCode_ch);
				#else
				const ev_wchar* parentCode_ch = (const ev_wchar*)__env->GetStringChars(parentCode_j,JNI_FALSE);
				EVString parentCode = parentCode_ch;
				__env->ReleaseStringChars(parentCode_j, (const jchar *)parentCode_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* newUserTypeName_ch = (const ev_char*)__env->GetStringUTFChars(newUserTypeName_j,JNI_FALSE);
				EVString newUserTypeName = newUserTypeName_ch;
				__env->ReleaseStringUTFChars(newUserTypeName_j, (const char *)newUserTypeName_ch);
				#else
				const ev_wchar* newUserTypeName_ch = (const ev_wchar*)__env->GetStringChars(newUserTypeName_j,JNI_FALSE);
				EVString newUserTypeName = newUserTypeName_ch;
				__env->ReleaseStringChars(newUserTypeName_j, (const jchar *)newUserTypeName_ch);
				#endif
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject *pObjectX = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjXXXX;
				pObjectX->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::createUserType(datasourceName, parentCode, newUserTypeName);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_createUserType_1IDataSource_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ds_j, jstring parentCode_j, jstring newUserTypeName_j)
			{
				const EarthView::World::Spatial::GeoDataset::IDataSource *ds = (const EarthView::World::Spatial::GeoDataset::IDataSource*) ds_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* parentCode_ch = (const ev_char*)__env->GetStringUTFChars(parentCode_j,JNI_FALSE);
				EVString parentCode = parentCode_ch;
				__env->ReleaseStringUTFChars(parentCode_j, (const char *)parentCode_ch);
				#else
				const ev_wchar* parentCode_ch = (const ev_wchar*)__env->GetStringChars(parentCode_j,JNI_FALSE);
				EVString parentCode = parentCode_ch;
				__env->ReleaseStringChars(parentCode_j, (const jchar *)parentCode_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* newUserTypeName_ch = (const ev_char*)__env->GetStringUTFChars(newUserTypeName_j,JNI_FALSE);
				EVString newUserTypeName = newUserTypeName_ch;
				__env->ReleaseStringUTFChars(newUserTypeName_j, (const char *)newUserTypeName_ch);
				#else
				const ev_wchar* newUserTypeName_ch = (const ev_wchar*)__env->GetStringChars(newUserTypeName_j,JNI_FALSE);
				EVString newUserTypeName = newUserTypeName_ch;
				__env->ReleaseStringChars(newUserTypeName_j, (const jchar *)newUserTypeName_ch);
				#endif
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject *pObjectX = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCEffectMgrEventObjectProxy))
				{
					pObjectX->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::createUserType(ds, parentCode, newUserTypeName);
				}
				else
				{
					pObjectX->createUserType(ds, parentCode, newUserTypeName);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_register_1createUserType_1IDataSource_1EVString_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCEffectMgrEventObjectProxy *pObjectX = (JCEffectMgrEventObjectProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createUserType_IDataSource_EVString_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createUserType_IDataSource_EVString_EVString_callback", "(JLjava/lang/String;Ljava/lang/String;)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_createUserType_1IDataSource_1EVString_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ds_j, jstring parentCode_j, jstring newUserTypeName_j)
			{
				const EarthView::World::Spatial::GeoDataset::IDataSource *ds = (const EarthView::World::Spatial::GeoDataset::IDataSource*) ds_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* parentCode_ch = (const ev_char*)__env->GetStringUTFChars(parentCode_j,JNI_FALSE);
				EVString parentCode = parentCode_ch;
				__env->ReleaseStringUTFChars(parentCode_j, (const char *)parentCode_ch);
				#else
				const ev_wchar* parentCode_ch = (const ev_wchar*)__env->GetStringChars(parentCode_j,JNI_FALSE);
				EVString parentCode = parentCode_ch;
				__env->ReleaseStringChars(parentCode_j, (const jchar *)parentCode_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* newUserTypeName_ch = (const ev_char*)__env->GetStringUTFChars(newUserTypeName_j,JNI_FALSE);
				EVString newUserTypeName = newUserTypeName_ch;
				__env->ReleaseStringUTFChars(newUserTypeName_j, (const char *)newUserTypeName_ch);
				#else
				const ev_wchar* newUserTypeName_ch = (const ev_wchar*)__env->GetStringChars(newUserTypeName_j,JNI_FALSE);
				EVString newUserTypeName = newUserTypeName_ch;
				__env->ReleaseStringChars(newUserTypeName_j, (const jchar *)newUserTypeName_ch);
				#endif
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject *pObjectX = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjXXXX;
				pObjectX->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::createUserType(ds, parentCode, newUserTypeName);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_onCreateUserType_1CEffectTreeviewEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
			{
				EarthView::World::Spatial3DProxy::CEffectTreeviewEvent *e = (EarthView::World::Spatial3DProxy::CEffectTreeviewEvent*) e_j;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject *pObjectX = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCEffectMgrEventObjectProxy))
				{
					pObjectX->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::onCreateUserType(e);
				}
				else
				{
					pObjectX->onCreateUserType(e);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_register_1onCreateUserType_1CEffectTreeviewEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCEffectMgrEventObjectProxy *pObjectX = (JCEffectMgrEventObjectProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_onCreateUserType_CEffectTreeviewEvent_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"onCreateUserType_CEffectTreeviewEvent_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_onCreateUserType_1CEffectTreeviewEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
			{
				EarthView::World::Spatial3DProxy::CEffectTreeviewEvent *e = (EarthView::World::Spatial3DProxy::CEffectTreeviewEvent*) e_j;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject *pObjectX = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjXXXX;
				pObjectX->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::onCreateUserType(e);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_onImportFromTemplateDB_1CEffectTreeviewEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
			{
				EarthView::World::Spatial3DProxy::CEffectTreeviewEvent *e = (EarthView::World::Spatial3DProxy::CEffectTreeviewEvent*) e_j;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject *pObjectX = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCEffectMgrEventObjectProxy))
				{
					pObjectX->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::onImportFromTemplateDB(e);
				}
				else
				{
					pObjectX->onImportFromTemplateDB(e);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_register_1onImportFromTemplateDB_1CEffectTreeviewEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCEffectMgrEventObjectProxy *pObjectX = (JCEffectMgrEventObjectProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_onImportFromTemplateDB_CEffectTreeviewEvent_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"onImportFromTemplateDB_CEffectTreeviewEvent_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_onImportFromTemplateDB_1CEffectTreeviewEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
			{
				EarthView::World::Spatial3DProxy::CEffectTreeviewEvent *e = (EarthView::World::Spatial3DProxy::CEffectTreeviewEvent*) e_j;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject *pObjectX = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjXXXX;
				pObjectX->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::onImportFromTemplateDB(e);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_importFromScript_1EVString_1EVString_1EVString_1CStringArray_1CStringArray(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring dir_j, jstring userTypeCode_j, jstring destDatasourceName_j, jlong successScriptNames_j, jlong errorArray_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* dir_ch = (const ev_char*)__env->GetStringUTFChars(dir_j,JNI_FALSE);
				const EVString dir = dir_ch;
				__env->ReleaseStringUTFChars(dir_j, (const char *)dir_ch);
				#else
				const ev_wchar* dir_ch = (const ev_wchar*)__env->GetStringChars(dir_j,JNI_FALSE);
				const EVString dir = dir_ch;
				__env->ReleaseStringChars(dir_j, (const jchar *)dir_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* userTypeCode_ch = (const ev_char*)__env->GetStringUTFChars(userTypeCode_j,JNI_FALSE);
				const EVString userTypeCode = userTypeCode_ch;
				__env->ReleaseStringUTFChars(userTypeCode_j, (const char *)userTypeCode_ch);
				#else
				const ev_wchar* userTypeCode_ch = (const ev_wchar*)__env->GetStringChars(userTypeCode_j,JNI_FALSE);
				const EVString userTypeCode = userTypeCode_ch;
				__env->ReleaseStringChars(userTypeCode_j, (const jchar *)userTypeCode_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* destDatasourceName_ch = (const ev_char*)__env->GetStringUTFChars(destDatasourceName_j,JNI_FALSE);
				const EVString destDatasourceName = destDatasourceName_ch;
				__env->ReleaseStringUTFChars(destDatasourceName_j, (const char *)destDatasourceName_ch);
				#else
				const ev_wchar* destDatasourceName_ch = (const ev_wchar*)__env->GetStringChars(destDatasourceName_j,JNI_FALSE);
				const EVString destDatasourceName = destDatasourceName_ch;
				__env->ReleaseStringChars(destDatasourceName_j, (const jchar *)destDatasourceName_ch);
				#endif
				EarthView::World::Core::CStringArray &successScriptNames = *(EarthView::World::Core::CStringArray*) successScriptNames_j;
				EarthView::World::Core::CStringArray &errorArray = *(EarthView::World::Core::CStringArray*) errorArray_j;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject *pObjectX = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCEffectMgrEventObjectProxy))
				{
					pObjectX->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::importFromScript(dir, userTypeCode, destDatasourceName, successScriptNames, errorArray);
				}
				else
				{
					pObjectX->importFromScript(dir, userTypeCode, destDatasourceName, successScriptNames, errorArray);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_register_1importFromScript_1EVString_1EVString_1EVString_1CStringArray_1CStringArray(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCEffectMgrEventObjectProxy *pObjectX = (JCEffectMgrEventObjectProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_importFromScript_EVString_EVString_EVString_CStringArray_CStringArray_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"importFromScript_EVString_EVString_EVString_CStringArray_CStringArray_callback", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;JJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_importFromScript_1EVString_1EVString_1EVString_1CStringArray_1CStringArray_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring dir_j, jstring userTypeCode_j, jstring destDatasourceName_j, jlong successScriptNames_j, jlong errorArray_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* dir_ch = (const ev_char*)__env->GetStringUTFChars(dir_j,JNI_FALSE);
				const EVString dir = dir_ch;
				__env->ReleaseStringUTFChars(dir_j, (const char *)dir_ch);
				#else
				const ev_wchar* dir_ch = (const ev_wchar*)__env->GetStringChars(dir_j,JNI_FALSE);
				const EVString dir = dir_ch;
				__env->ReleaseStringChars(dir_j, (const jchar *)dir_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* userTypeCode_ch = (const ev_char*)__env->GetStringUTFChars(userTypeCode_j,JNI_FALSE);
				const EVString userTypeCode = userTypeCode_ch;
				__env->ReleaseStringUTFChars(userTypeCode_j, (const char *)userTypeCode_ch);
				#else
				const ev_wchar* userTypeCode_ch = (const ev_wchar*)__env->GetStringChars(userTypeCode_j,JNI_FALSE);
				const EVString userTypeCode = userTypeCode_ch;
				__env->ReleaseStringChars(userTypeCode_j, (const jchar *)userTypeCode_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* destDatasourceName_ch = (const ev_char*)__env->GetStringUTFChars(destDatasourceName_j,JNI_FALSE);
				const EVString destDatasourceName = destDatasourceName_ch;
				__env->ReleaseStringUTFChars(destDatasourceName_j, (const char *)destDatasourceName_ch);
				#else
				const ev_wchar* destDatasourceName_ch = (const ev_wchar*)__env->GetStringChars(destDatasourceName_j,JNI_FALSE);
				const EVString destDatasourceName = destDatasourceName_ch;
				__env->ReleaseStringChars(destDatasourceName_j, (const jchar *)destDatasourceName_ch);
				#endif
				EarthView::World::Core::CStringArray &successScriptNames = *(EarthView::World::Core::CStringArray*) successScriptNames_j;
				EarthView::World::Core::CStringArray &errorArray = *(EarthView::World::Core::CStringArray*) errorArray_j;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject *pObjectX = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjXXXX;
				pObjectX->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::importFromScript(dir, userTypeCode, destDatasourceName, successScriptNames, errorArray);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_importFromScript_1EVString_1EVString_1IDataSource_1CStringArray_1CStringArray(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring dir_j, jstring userTypeCode_j, jlong ds_j, jlong successScriptNames_j, jlong errorArray_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* dir_ch = (const ev_char*)__env->GetStringUTFChars(dir_j,JNI_FALSE);
				const EVString dir = dir_ch;
				__env->ReleaseStringUTFChars(dir_j, (const char *)dir_ch);
				#else
				const ev_wchar* dir_ch = (const ev_wchar*)__env->GetStringChars(dir_j,JNI_FALSE);
				const EVString dir = dir_ch;
				__env->ReleaseStringChars(dir_j, (const jchar *)dir_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* userTypeCode_ch = (const ev_char*)__env->GetStringUTFChars(userTypeCode_j,JNI_FALSE);
				const EVString userTypeCode = userTypeCode_ch;
				__env->ReleaseStringUTFChars(userTypeCode_j, (const char *)userTypeCode_ch);
				#else
				const ev_wchar* userTypeCode_ch = (const ev_wchar*)__env->GetStringChars(userTypeCode_j,JNI_FALSE);
				const EVString userTypeCode = userTypeCode_ch;
				__env->ReleaseStringChars(userTypeCode_j, (const jchar *)userTypeCode_ch);
				#endif
				const EarthView::World::Spatial::GeoDataset::IDataSource *ds = (const EarthView::World::Spatial::GeoDataset::IDataSource*) ds_j;
				EarthView::World::Core::CStringArray &successScriptNames = *(EarthView::World::Core::CStringArray*) successScriptNames_j;
				EarthView::World::Core::CStringArray &errorArray = *(EarthView::World::Core::CStringArray*) errorArray_j;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject *pObjectX = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCEffectMgrEventObjectProxy))
				{
					pObjectX->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::importFromScript(dir, userTypeCode, ds, successScriptNames, errorArray);
				}
				else
				{
					pObjectX->importFromScript(dir, userTypeCode, ds, successScriptNames, errorArray);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_register_1importFromScript_1EVString_1EVString_1IDataSource_1CStringArray_1CStringArray(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCEffectMgrEventObjectProxy *pObjectX = (JCEffectMgrEventObjectProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_importFromScript_EVString_EVString_IDataSource_CStringArray_CStringArray_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"importFromScript_EVString_EVString_IDataSource_CStringArray_CStringArray_callback", "(Ljava/lang/String;Ljava/lang/String;JJJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_importFromScript_1EVString_1EVString_1IDataSource_1CStringArray_1CStringArray_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring dir_j, jstring userTypeCode_j, jlong ds_j, jlong successScriptNames_j, jlong errorArray_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* dir_ch = (const ev_char*)__env->GetStringUTFChars(dir_j,JNI_FALSE);
				const EVString dir = dir_ch;
				__env->ReleaseStringUTFChars(dir_j, (const char *)dir_ch);
				#else
				const ev_wchar* dir_ch = (const ev_wchar*)__env->GetStringChars(dir_j,JNI_FALSE);
				const EVString dir = dir_ch;
				__env->ReleaseStringChars(dir_j, (const jchar *)dir_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* userTypeCode_ch = (const ev_char*)__env->GetStringUTFChars(userTypeCode_j,JNI_FALSE);
				const EVString userTypeCode = userTypeCode_ch;
				__env->ReleaseStringUTFChars(userTypeCode_j, (const char *)userTypeCode_ch);
				#else
				const ev_wchar* userTypeCode_ch = (const ev_wchar*)__env->GetStringChars(userTypeCode_j,JNI_FALSE);
				const EVString userTypeCode = userTypeCode_ch;
				__env->ReleaseStringChars(userTypeCode_j, (const jchar *)userTypeCode_ch);
				#endif
				const EarthView::World::Spatial::GeoDataset::IDataSource *ds = (const EarthView::World::Spatial::GeoDataset::IDataSource*) ds_j;
				EarthView::World::Core::CStringArray &successScriptNames = *(EarthView::World::Core::CStringArray*) successScriptNames_j;
				EarthView::World::Core::CStringArray &errorArray = *(EarthView::World::Core::CStringArray*) errorArray_j;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject *pObjectX = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjXXXX;
				pObjectX->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::importFromScript(dir, userTypeCode, ds, successScriptNames, errorArray);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_exportEffectToLocal_1ev_1uint32_1CEffectDataSource_1EVString_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong effectId_j, jlong effectDataSource_j, jstring exportPath_j, jboolean overrideFile_j)
			{
				ev_uint32 effectId = (ev_uint32) effectId_j;
				EarthView::World::Spatial3D::Dataset::CEffectDataSource *effectDataSource = (EarthView::World::Spatial3D::Dataset::CEffectDataSource*) effectDataSource_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* exportPath_ch = (const ev_char*)__env->GetStringUTFChars(exportPath_j,JNI_FALSE);
				const EVString exportPath = exportPath_ch;
				__env->ReleaseStringUTFChars(exportPath_j, (const char *)exportPath_ch);
				#else
				const ev_wchar* exportPath_ch = (const ev_wchar*)__env->GetStringChars(exportPath_j,JNI_FALSE);
				const EVString exportPath = exportPath_ch;
				__env->ReleaseStringChars(exportPath_j, (const jchar *)exportPath_ch);
				#endif
				bool overrideFile = (bool) overrideFile_j;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject *pObjectX = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCEffectMgrEventObjectProxy))
				{
					bool __values1 = pObjectX->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::exportEffectToLocal(effectId, effectDataSource, exportPath, overrideFile);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					bool __values1 = pObjectX->exportEffectToLocal(effectId, effectDataSource, exportPath, overrideFile);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_register_1exportEffectToLocal_1ev_1uint32_1CEffectDataSource_1EVString_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCEffectMgrEventObjectProxy *pObjectX = (JCEffectMgrEventObjectProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_exportEffectToLocal_ev_uint32_CEffectDataSource_EVString_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"exportEffectToLocal_ev_uint32_CEffectDataSource_EVString_bool_callback", "(JJLjava/lang/String;Z)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_exportEffectToLocal_1ev_1uint32_1CEffectDataSource_1EVString_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong effectId_j, jlong effectDataSource_j, jstring exportPath_j, jboolean overrideFile_j)
			{
				ev_uint32 effectId = (ev_uint32) effectId_j;
				EarthView::World::Spatial3D::Dataset::CEffectDataSource *effectDataSource = (EarthView::World::Spatial3D::Dataset::CEffectDataSource*) effectDataSource_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* exportPath_ch = (const ev_char*)__env->GetStringUTFChars(exportPath_j,JNI_FALSE);
				const EVString exportPath = exportPath_ch;
				__env->ReleaseStringUTFChars(exportPath_j, (const char *)exportPath_ch);
				#else
				const ev_wchar* exportPath_ch = (const ev_wchar*)__env->GetStringChars(exportPath_j,JNI_FALSE);
				const EVString exportPath = exportPath_ch;
				__env->ReleaseStringChars(exportPath_j, (const jchar *)exportPath_ch);
				#endif
				bool overrideFile = (bool) overrideFile_j;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject *pObjectX = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjXXXX;
				bool __values1 = pObjectX->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::exportEffectToLocal(effectId, effectDataSource, exportPath, overrideFile);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_stopImportFromScript_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean val_j)
			{
				ev_bool val = (ev_bool) val_j;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject *pObjectX = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjXXXX;
				pObjectX->stopImportFromScript(val);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_onImportFromScript_1CEffectTreeviewEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
			{
				EarthView::World::Spatial3DProxy::CEffectTreeviewEvent *e = (EarthView::World::Spatial3DProxy::CEffectTreeviewEvent*) e_j;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject *pObjectX = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCEffectMgrEventObjectProxy))
				{
					pObjectX->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::onImportFromScript(e);
				}
				else
				{
					pObjectX->onImportFromScript(e);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_register_1onImportFromScript_1CEffectTreeviewEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCEffectMgrEventObjectProxy *pObjectX = (JCEffectMgrEventObjectProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_onImportFromScript_CEffectTreeviewEvent_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"onImportFromScript_CEffectTreeviewEvent_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_onImportFromScript_1CEffectTreeviewEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
			{
				EarthView::World::Spatial3DProxy::CEffectTreeviewEvent *e = (EarthView::World::Spatial3DProxy::CEffectTreeviewEvent*) e_j;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject *pObjectX = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjXXXX;
				pObjectX->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::onImportFromScript(e);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_onExportToTemplateDB_1CEffectTreeviewEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
			{
				EarthView::World::Spatial3DProxy::CEffectTreeviewEvent *e = (EarthView::World::Spatial3DProxy::CEffectTreeviewEvent*) e_j;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject *pObjectX = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCEffectMgrEventObjectProxy))
				{
					pObjectX->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::onExportToTemplateDB(e);
				}
				else
				{
					pObjectX->onExportToTemplateDB(e);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_register_1onExportToTemplateDB_1CEffectTreeviewEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCEffectMgrEventObjectProxy *pObjectX = (JCEffectMgrEventObjectProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_onExportToTemplateDB_CEffectTreeviewEvent_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"onExportToTemplateDB_CEffectTreeviewEvent_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_onExportToTemplateDB_1CEffectTreeviewEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
			{
				EarthView::World::Spatial3DProxy::CEffectTreeviewEvent *e = (EarthView::World::Spatial3DProxy::CEffectTreeviewEvent*) e_j;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject *pObjectX = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjXXXX;
				pObjectX->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::onExportToTemplateDB(e);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_createNewEffect_1EVString_1EVString_1EVString_1EffectType_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring datasourceName_j, jstring name_j, jstring userTypeCode_j, jint type_j, jlong parentEffectId_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* datasourceName_ch = (const ev_char*)__env->GetStringUTFChars(datasourceName_j,JNI_FALSE);
				const EVString datasourceName = datasourceName_ch;
				__env->ReleaseStringUTFChars(datasourceName_j, (const char *)datasourceName_ch);
				#else
				const ev_wchar* datasourceName_ch = (const ev_wchar*)__env->GetStringChars(datasourceName_j,JNI_FALSE);
				const EVString datasourceName = datasourceName_ch;
				__env->ReleaseStringChars(datasourceName_j, (const jchar *)datasourceName_ch);
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
				const ev_char* userTypeCode_ch = (const ev_char*)__env->GetStringUTFChars(userTypeCode_j,JNI_FALSE);
				const EVString userTypeCode = userTypeCode_ch;
				__env->ReleaseStringUTFChars(userTypeCode_j, (const char *)userTypeCode_ch);
				#else
				const ev_wchar* userTypeCode_ch = (const ev_wchar*)__env->GetStringChars(userTypeCode_j,JNI_FALSE);
				const EVString userTypeCode = userTypeCode_ch;
				__env->ReleaseStringChars(userTypeCode_j, (const jchar *)userTypeCode_ch);
				#endif
				EarthView::World::Spatial3D::Dataset::EffectType type = (EarthView::World::Spatial3D::Dataset::EffectType) type_j;
				ev_uint32 parentEffectId = (ev_uint32) parentEffectId_j;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject *pObjectX = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCEffectMgrEventObjectProxy))
				{
					pObjectX->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::createNewEffect(datasourceName, name, userTypeCode, type, parentEffectId);
				}
				else
				{
					pObjectX->createNewEffect(datasourceName, name, userTypeCode, type, parentEffectId);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_register_1createNewEffect_1EVString_1EVString_1EVString_1EffectType_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCEffectMgrEventObjectProxy *pObjectX = (JCEffectMgrEventObjectProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createNewEffect_EVString_EVString_EVString_EffectType_ev_uint32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createNewEffect_EVString_EVString_EVString_EffectType_ev_uint32_callback", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;IJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_createNewEffect_1EVString_1EVString_1EVString_1EffectType_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring datasourceName_j, jstring name_j, jstring userTypeCode_j, jint type_j, jlong parentEffectId_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* datasourceName_ch = (const ev_char*)__env->GetStringUTFChars(datasourceName_j,JNI_FALSE);
				const EVString datasourceName = datasourceName_ch;
				__env->ReleaseStringUTFChars(datasourceName_j, (const char *)datasourceName_ch);
				#else
				const ev_wchar* datasourceName_ch = (const ev_wchar*)__env->GetStringChars(datasourceName_j,JNI_FALSE);
				const EVString datasourceName = datasourceName_ch;
				__env->ReleaseStringChars(datasourceName_j, (const jchar *)datasourceName_ch);
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
				const ev_char* userTypeCode_ch = (const ev_char*)__env->GetStringUTFChars(userTypeCode_j,JNI_FALSE);
				const EVString userTypeCode = userTypeCode_ch;
				__env->ReleaseStringUTFChars(userTypeCode_j, (const char *)userTypeCode_ch);
				#else
				const ev_wchar* userTypeCode_ch = (const ev_wchar*)__env->GetStringChars(userTypeCode_j,JNI_FALSE);
				const EVString userTypeCode = userTypeCode_ch;
				__env->ReleaseStringChars(userTypeCode_j, (const jchar *)userTypeCode_ch);
				#endif
				EarthView::World::Spatial3D::Dataset::EffectType type = (EarthView::World::Spatial3D::Dataset::EffectType) type_j;
				ev_uint32 parentEffectId = (ev_uint32) parentEffectId_j;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject *pObjectX = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjXXXX;
				pObjectX->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::createNewEffect(datasourceName, name, userTypeCode, type, parentEffectId);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_createNewEffect_1IDataSource_1EVString_1EVString_1EffectType_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ds_j, jstring name_j, jstring userTypeCode_j, jint type_j, jlong parentEffectId_j)
			{
				const EarthView::World::Spatial::GeoDataset::IDataSource *ds = (const EarthView::World::Spatial::GeoDataset::IDataSource*) ds_j;
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
				const ev_char* userTypeCode_ch = (const ev_char*)__env->GetStringUTFChars(userTypeCode_j,JNI_FALSE);
				const EVString userTypeCode = userTypeCode_ch;
				__env->ReleaseStringUTFChars(userTypeCode_j, (const char *)userTypeCode_ch);
				#else
				const ev_wchar* userTypeCode_ch = (const ev_wchar*)__env->GetStringChars(userTypeCode_j,JNI_FALSE);
				const EVString userTypeCode = userTypeCode_ch;
				__env->ReleaseStringChars(userTypeCode_j, (const jchar *)userTypeCode_ch);
				#endif
				EarthView::World::Spatial3D::Dataset::EffectType type = (EarthView::World::Spatial3D::Dataset::EffectType) type_j;
				ev_uint32 parentEffectId = (ev_uint32) parentEffectId_j;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject *pObjectX = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCEffectMgrEventObjectProxy))
				{
					pObjectX->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::createNewEffect(ds, name, userTypeCode, type, parentEffectId);
				}
				else
				{
					pObjectX->createNewEffect(ds, name, userTypeCode, type, parentEffectId);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_register_1createNewEffect_1IDataSource_1EVString_1EVString_1EffectType_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCEffectMgrEventObjectProxy *pObjectX = (JCEffectMgrEventObjectProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createNewEffect_IDataSource_EVString_EVString_EffectType_ev_uint32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createNewEffect_IDataSource_EVString_EVString_EffectType_ev_uint32_callback", "(JLjava/lang/String;Ljava/lang/String;IJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_createNewEffect_1IDataSource_1EVString_1EVString_1EffectType_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ds_j, jstring name_j, jstring userTypeCode_j, jint type_j, jlong parentEffectId_j)
			{
				const EarthView::World::Spatial::GeoDataset::IDataSource *ds = (const EarthView::World::Spatial::GeoDataset::IDataSource*) ds_j;
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
				const ev_char* userTypeCode_ch = (const ev_char*)__env->GetStringUTFChars(userTypeCode_j,JNI_FALSE);
				const EVString userTypeCode = userTypeCode_ch;
				__env->ReleaseStringUTFChars(userTypeCode_j, (const char *)userTypeCode_ch);
				#else
				const ev_wchar* userTypeCode_ch = (const ev_wchar*)__env->GetStringChars(userTypeCode_j,JNI_FALSE);
				const EVString userTypeCode = userTypeCode_ch;
				__env->ReleaseStringChars(userTypeCode_j, (const jchar *)userTypeCode_ch);
				#endif
				EarthView::World::Spatial3D::Dataset::EffectType type = (EarthView::World::Spatial3D::Dataset::EffectType) type_j;
				ev_uint32 parentEffectId = (ev_uint32) parentEffectId_j;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject *pObjectX = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjXXXX;
				pObjectX->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::createNewEffect(ds, name, userTypeCode, type, parentEffectId);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_onCreateNewEffect_1CEffectTreeviewEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
			{
				EarthView::World::Spatial3DProxy::CEffectTreeviewEvent *e = (EarthView::World::Spatial3DProxy::CEffectTreeviewEvent*) e_j;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject *pObjectX = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCEffectMgrEventObjectProxy))
				{
					pObjectX->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::onCreateNewEffect(e);
				}
				else
				{
					pObjectX->onCreateNewEffect(e);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_register_1onCreateNewEffect_1CEffectTreeviewEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCEffectMgrEventObjectProxy *pObjectX = (JCEffectMgrEventObjectProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_onCreateNewEffect_CEffectTreeviewEvent_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"onCreateNewEffect_CEffectTreeviewEvent_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_onCreateNewEffect_1CEffectTreeviewEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
			{
				EarthView::World::Spatial3DProxy::CEffectTreeviewEvent *e = (EarthView::World::Spatial3DProxy::CEffectTreeviewEvent*) e_j;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject *pObjectX = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjXXXX;
				pObjectX->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::onCreateNewEffect(e);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_renameUserType_1EVString_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring datasourceName_j, jstring code_j, jstring newName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* datasourceName_ch = (const ev_char*)__env->GetStringUTFChars(datasourceName_j,JNI_FALSE);
				const EVString datasourceName = datasourceName_ch;
				__env->ReleaseStringUTFChars(datasourceName_j, (const char *)datasourceName_ch);
				#else
				const ev_wchar* datasourceName_ch = (const ev_wchar*)__env->GetStringChars(datasourceName_j,JNI_FALSE);
				const EVString datasourceName = datasourceName_ch;
				__env->ReleaseStringChars(datasourceName_j, (const jchar *)datasourceName_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* code_ch = (const ev_char*)__env->GetStringUTFChars(code_j,JNI_FALSE);
				const EVString code = code_ch;
				__env->ReleaseStringUTFChars(code_j, (const char *)code_ch);
				#else
				const ev_wchar* code_ch = (const ev_wchar*)__env->GetStringChars(code_j,JNI_FALSE);
				const EVString code = code_ch;
				__env->ReleaseStringChars(code_j, (const jchar *)code_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* newName_ch = (const ev_char*)__env->GetStringUTFChars(newName_j,JNI_FALSE);
				const EVString newName = newName_ch;
				__env->ReleaseStringUTFChars(newName_j, (const char *)newName_ch);
				#else
				const ev_wchar* newName_ch = (const ev_wchar*)__env->GetStringChars(newName_j,JNI_FALSE);
				const EVString newName = newName_ch;
				__env->ReleaseStringChars(newName_j, (const jchar *)newName_ch);
				#endif
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject *pObjectX = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCEffectMgrEventObjectProxy))
				{
					pObjectX->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::renameUserType(datasourceName, code, newName);
				}
				else
				{
					pObjectX->renameUserType(datasourceName, code, newName);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_register_1renameUserType_1EVString_1EVString_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCEffectMgrEventObjectProxy *pObjectX = (JCEffectMgrEventObjectProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_renameUserType_EVString_EVString_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"renameUserType_EVString_EVString_EVString_callback", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_renameUserType_1EVString_1EVString_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring datasourceName_j, jstring code_j, jstring newName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* datasourceName_ch = (const ev_char*)__env->GetStringUTFChars(datasourceName_j,JNI_FALSE);
				const EVString datasourceName = datasourceName_ch;
				__env->ReleaseStringUTFChars(datasourceName_j, (const char *)datasourceName_ch);
				#else
				const ev_wchar* datasourceName_ch = (const ev_wchar*)__env->GetStringChars(datasourceName_j,JNI_FALSE);
				const EVString datasourceName = datasourceName_ch;
				__env->ReleaseStringChars(datasourceName_j, (const jchar *)datasourceName_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* code_ch = (const ev_char*)__env->GetStringUTFChars(code_j,JNI_FALSE);
				const EVString code = code_ch;
				__env->ReleaseStringUTFChars(code_j, (const char *)code_ch);
				#else
				const ev_wchar* code_ch = (const ev_wchar*)__env->GetStringChars(code_j,JNI_FALSE);
				const EVString code = code_ch;
				__env->ReleaseStringChars(code_j, (const jchar *)code_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* newName_ch = (const ev_char*)__env->GetStringUTFChars(newName_j,JNI_FALSE);
				const EVString newName = newName_ch;
				__env->ReleaseStringUTFChars(newName_j, (const char *)newName_ch);
				#else
				const ev_wchar* newName_ch = (const ev_wchar*)__env->GetStringChars(newName_j,JNI_FALSE);
				const EVString newName = newName_ch;
				__env->ReleaseStringChars(newName_j, (const jchar *)newName_ch);
				#endif
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject *pObjectX = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjXXXX;
				pObjectX->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::renameUserType(datasourceName, code, newName);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_renameUserType_1IDataSource_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ds_j, jstring code_j, jstring newName_j)
			{
				const EarthView::World::Spatial::GeoDataset::IDataSource *ds = (const EarthView::World::Spatial::GeoDataset::IDataSource*) ds_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* code_ch = (const ev_char*)__env->GetStringUTFChars(code_j,JNI_FALSE);
				const EVString code = code_ch;
				__env->ReleaseStringUTFChars(code_j, (const char *)code_ch);
				#else
				const ev_wchar* code_ch = (const ev_wchar*)__env->GetStringChars(code_j,JNI_FALSE);
				const EVString code = code_ch;
				__env->ReleaseStringChars(code_j, (const jchar *)code_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* newName_ch = (const ev_char*)__env->GetStringUTFChars(newName_j,JNI_FALSE);
				const EVString newName = newName_ch;
				__env->ReleaseStringUTFChars(newName_j, (const char *)newName_ch);
				#else
				const ev_wchar* newName_ch = (const ev_wchar*)__env->GetStringChars(newName_j,JNI_FALSE);
				const EVString newName = newName_ch;
				__env->ReleaseStringChars(newName_j, (const jchar *)newName_ch);
				#endif
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject *pObjectX = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCEffectMgrEventObjectProxy))
				{
					pObjectX->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::renameUserType(ds, code, newName);
				}
				else
				{
					pObjectX->renameUserType(ds, code, newName);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_register_1renameUserType_1IDataSource_1EVString_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCEffectMgrEventObjectProxy *pObjectX = (JCEffectMgrEventObjectProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_renameUserType_IDataSource_EVString_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"renameUserType_IDataSource_EVString_EVString_callback", "(JLjava/lang/String;Ljava/lang/String;)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_renameUserType_1IDataSource_1EVString_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ds_j, jstring code_j, jstring newName_j)
			{
				const EarthView::World::Spatial::GeoDataset::IDataSource *ds = (const EarthView::World::Spatial::GeoDataset::IDataSource*) ds_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* code_ch = (const ev_char*)__env->GetStringUTFChars(code_j,JNI_FALSE);
				const EVString code = code_ch;
				__env->ReleaseStringUTFChars(code_j, (const char *)code_ch);
				#else
				const ev_wchar* code_ch = (const ev_wchar*)__env->GetStringChars(code_j,JNI_FALSE);
				const EVString code = code_ch;
				__env->ReleaseStringChars(code_j, (const jchar *)code_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* newName_ch = (const ev_char*)__env->GetStringUTFChars(newName_j,JNI_FALSE);
				const EVString newName = newName_ch;
				__env->ReleaseStringUTFChars(newName_j, (const char *)newName_ch);
				#else
				const ev_wchar* newName_ch = (const ev_wchar*)__env->GetStringChars(newName_j,JNI_FALSE);
				const EVString newName = newName_ch;
				__env->ReleaseStringChars(newName_j, (const jchar *)newName_ch);
				#endif
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject *pObjectX = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjXXXX;
				pObjectX->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::renameUserType(ds, code, newName);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_onRenameUserType_1CEffectTreeviewEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
			{
				EarthView::World::Spatial3DProxy::CEffectTreeviewEvent *e = (EarthView::World::Spatial3DProxy::CEffectTreeviewEvent*) e_j;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject *pObjectX = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCEffectMgrEventObjectProxy))
				{
					pObjectX->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::onRenameUserType(e);
				}
				else
				{
					pObjectX->onRenameUserType(e);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_register_1onRenameUserType_1CEffectTreeviewEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCEffectMgrEventObjectProxy *pObjectX = (JCEffectMgrEventObjectProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_onRenameUserType_CEffectTreeviewEvent_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"onRenameUserType_CEffectTreeviewEvent_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_onRenameUserType_1CEffectTreeviewEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
			{
				EarthView::World::Spatial3DProxy::CEffectTreeviewEvent *e = (EarthView::World::Spatial3DProxy::CEffectTreeviewEvent*) e_j;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject *pObjectX = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjXXXX;
				pObjectX->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::onRenameUserType(e);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_renameBlendEffect_1EVString_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring datasourceName_j, jstring code_j, jstring newName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* datasourceName_ch = (const ev_char*)__env->GetStringUTFChars(datasourceName_j,JNI_FALSE);
				const EVString datasourceName = datasourceName_ch;
				__env->ReleaseStringUTFChars(datasourceName_j, (const char *)datasourceName_ch);
				#else
				const ev_wchar* datasourceName_ch = (const ev_wchar*)__env->GetStringChars(datasourceName_j,JNI_FALSE);
				const EVString datasourceName = datasourceName_ch;
				__env->ReleaseStringChars(datasourceName_j, (const jchar *)datasourceName_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* code_ch = (const ev_char*)__env->GetStringUTFChars(code_j,JNI_FALSE);
				const EVString code = code_ch;
				__env->ReleaseStringUTFChars(code_j, (const char *)code_ch);
				#else
				const ev_wchar* code_ch = (const ev_wchar*)__env->GetStringChars(code_j,JNI_FALSE);
				const EVString code = code_ch;
				__env->ReleaseStringChars(code_j, (const jchar *)code_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* newName_ch = (const ev_char*)__env->GetStringUTFChars(newName_j,JNI_FALSE);
				const EVString newName = newName_ch;
				__env->ReleaseStringUTFChars(newName_j, (const char *)newName_ch);
				#else
				const ev_wchar* newName_ch = (const ev_wchar*)__env->GetStringChars(newName_j,JNI_FALSE);
				const EVString newName = newName_ch;
				__env->ReleaseStringChars(newName_j, (const jchar *)newName_ch);
				#endif
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject *pObjectX = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCEffectMgrEventObjectProxy))
				{
					pObjectX->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::renameBlendEffect(datasourceName, code, newName);
				}
				else
				{
					pObjectX->renameBlendEffect(datasourceName, code, newName);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_register_1renameBlendEffect_1EVString_1EVString_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCEffectMgrEventObjectProxy *pObjectX = (JCEffectMgrEventObjectProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_renameBlendEffect_EVString_EVString_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"renameBlendEffect_EVString_EVString_EVString_callback", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_renameBlendEffect_1EVString_1EVString_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring datasourceName_j, jstring code_j, jstring newName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* datasourceName_ch = (const ev_char*)__env->GetStringUTFChars(datasourceName_j,JNI_FALSE);
				const EVString datasourceName = datasourceName_ch;
				__env->ReleaseStringUTFChars(datasourceName_j, (const char *)datasourceName_ch);
				#else
				const ev_wchar* datasourceName_ch = (const ev_wchar*)__env->GetStringChars(datasourceName_j,JNI_FALSE);
				const EVString datasourceName = datasourceName_ch;
				__env->ReleaseStringChars(datasourceName_j, (const jchar *)datasourceName_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* code_ch = (const ev_char*)__env->GetStringUTFChars(code_j,JNI_FALSE);
				const EVString code = code_ch;
				__env->ReleaseStringUTFChars(code_j, (const char *)code_ch);
				#else
				const ev_wchar* code_ch = (const ev_wchar*)__env->GetStringChars(code_j,JNI_FALSE);
				const EVString code = code_ch;
				__env->ReleaseStringChars(code_j, (const jchar *)code_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* newName_ch = (const ev_char*)__env->GetStringUTFChars(newName_j,JNI_FALSE);
				const EVString newName = newName_ch;
				__env->ReleaseStringUTFChars(newName_j, (const char *)newName_ch);
				#else
				const ev_wchar* newName_ch = (const ev_wchar*)__env->GetStringChars(newName_j,JNI_FALSE);
				const EVString newName = newName_ch;
				__env->ReleaseStringChars(newName_j, (const jchar *)newName_ch);
				#endif
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject *pObjectX = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjXXXX;
				pObjectX->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::renameBlendEffect(datasourceName, code, newName);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_renameBlendEffect_1IDataSource_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ds_j, jstring code_j, jstring newName_j)
			{
				const EarthView::World::Spatial::GeoDataset::IDataSource *ds = (const EarthView::World::Spatial::GeoDataset::IDataSource*) ds_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* code_ch = (const ev_char*)__env->GetStringUTFChars(code_j,JNI_FALSE);
				const EVString code = code_ch;
				__env->ReleaseStringUTFChars(code_j, (const char *)code_ch);
				#else
				const ev_wchar* code_ch = (const ev_wchar*)__env->GetStringChars(code_j,JNI_FALSE);
				const EVString code = code_ch;
				__env->ReleaseStringChars(code_j, (const jchar *)code_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* newName_ch = (const ev_char*)__env->GetStringUTFChars(newName_j,JNI_FALSE);
				const EVString newName = newName_ch;
				__env->ReleaseStringUTFChars(newName_j, (const char *)newName_ch);
				#else
				const ev_wchar* newName_ch = (const ev_wchar*)__env->GetStringChars(newName_j,JNI_FALSE);
				const EVString newName = newName_ch;
				__env->ReleaseStringChars(newName_j, (const jchar *)newName_ch);
				#endif
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject *pObjectX = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCEffectMgrEventObjectProxy))
				{
					pObjectX->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::renameBlendEffect(ds, code, newName);
				}
				else
				{
					pObjectX->renameBlendEffect(ds, code, newName);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_register_1renameBlendEffect_1IDataSource_1EVString_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCEffectMgrEventObjectProxy *pObjectX = (JCEffectMgrEventObjectProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_renameBlendEffect_IDataSource_EVString_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"renameBlendEffect_IDataSource_EVString_EVString_callback", "(JLjava/lang/String;Ljava/lang/String;)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_renameBlendEffect_1IDataSource_1EVString_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ds_j, jstring code_j, jstring newName_j)
			{
				const EarthView::World::Spatial::GeoDataset::IDataSource *ds = (const EarthView::World::Spatial::GeoDataset::IDataSource*) ds_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* code_ch = (const ev_char*)__env->GetStringUTFChars(code_j,JNI_FALSE);
				const EVString code = code_ch;
				__env->ReleaseStringUTFChars(code_j, (const char *)code_ch);
				#else
				const ev_wchar* code_ch = (const ev_wchar*)__env->GetStringChars(code_j,JNI_FALSE);
				const EVString code = code_ch;
				__env->ReleaseStringChars(code_j, (const jchar *)code_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* newName_ch = (const ev_char*)__env->GetStringUTFChars(newName_j,JNI_FALSE);
				const EVString newName = newName_ch;
				__env->ReleaseStringUTFChars(newName_j, (const char *)newName_ch);
				#else
				const ev_wchar* newName_ch = (const ev_wchar*)__env->GetStringChars(newName_j,JNI_FALSE);
				const EVString newName = newName_ch;
				__env->ReleaseStringChars(newName_j, (const jchar *)newName_ch);
				#endif
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject *pObjectX = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjXXXX;
				pObjectX->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::renameBlendEffect(ds, code, newName);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_onRenameBlendEffect_1CEffectTreeviewEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
			{
				EarthView::World::Spatial3DProxy::CEffectTreeviewEvent *e = (EarthView::World::Spatial3DProxy::CEffectTreeviewEvent*) e_j;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject *pObjectX = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCEffectMgrEventObjectProxy))
				{
					pObjectX->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::onRenameBlendEffect(e);
				}
				else
				{
					pObjectX->onRenameBlendEffect(e);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_register_1onRenameBlendEffect_1CEffectTreeviewEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCEffectMgrEventObjectProxy *pObjectX = (JCEffectMgrEventObjectProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_onRenameBlendEffect_CEffectTreeviewEvent_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"onRenameBlendEffect_CEffectTreeviewEvent_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_onRenameBlendEffect_1CEffectTreeviewEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
			{
				EarthView::World::Spatial3DProxy::CEffectTreeviewEvent *e = (EarthView::World::Spatial3DProxy::CEffectTreeviewEvent*) e_j;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject *pObjectX = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjXXXX;
				pObjectX->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::onRenameBlendEffect(e);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_renameSingleEffect_1EVString_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring datasourceName_j, jstring code_j, jstring newName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* datasourceName_ch = (const ev_char*)__env->GetStringUTFChars(datasourceName_j,JNI_FALSE);
				const EVString datasourceName = datasourceName_ch;
				__env->ReleaseStringUTFChars(datasourceName_j, (const char *)datasourceName_ch);
				#else
				const ev_wchar* datasourceName_ch = (const ev_wchar*)__env->GetStringChars(datasourceName_j,JNI_FALSE);
				const EVString datasourceName = datasourceName_ch;
				__env->ReleaseStringChars(datasourceName_j, (const jchar *)datasourceName_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* code_ch = (const ev_char*)__env->GetStringUTFChars(code_j,JNI_FALSE);
				const EVString code = code_ch;
				__env->ReleaseStringUTFChars(code_j, (const char *)code_ch);
				#else
				const ev_wchar* code_ch = (const ev_wchar*)__env->GetStringChars(code_j,JNI_FALSE);
				const EVString code = code_ch;
				__env->ReleaseStringChars(code_j, (const jchar *)code_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* newName_ch = (const ev_char*)__env->GetStringUTFChars(newName_j,JNI_FALSE);
				const EVString newName = newName_ch;
				__env->ReleaseStringUTFChars(newName_j, (const char *)newName_ch);
				#else
				const ev_wchar* newName_ch = (const ev_wchar*)__env->GetStringChars(newName_j,JNI_FALSE);
				const EVString newName = newName_ch;
				__env->ReleaseStringChars(newName_j, (const jchar *)newName_ch);
				#endif
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject *pObjectX = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCEffectMgrEventObjectProxy))
				{
					pObjectX->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::renameSingleEffect(datasourceName, code, newName);
				}
				else
				{
					pObjectX->renameSingleEffect(datasourceName, code, newName);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_register_1renameSingleEffect_1EVString_1EVString_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCEffectMgrEventObjectProxy *pObjectX = (JCEffectMgrEventObjectProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_renameSingleEffect_EVString_EVString_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"renameSingleEffect_EVString_EVString_EVString_callback", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_renameSingleEffect_1EVString_1EVString_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring datasourceName_j, jstring code_j, jstring newName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* datasourceName_ch = (const ev_char*)__env->GetStringUTFChars(datasourceName_j,JNI_FALSE);
				const EVString datasourceName = datasourceName_ch;
				__env->ReleaseStringUTFChars(datasourceName_j, (const char *)datasourceName_ch);
				#else
				const ev_wchar* datasourceName_ch = (const ev_wchar*)__env->GetStringChars(datasourceName_j,JNI_FALSE);
				const EVString datasourceName = datasourceName_ch;
				__env->ReleaseStringChars(datasourceName_j, (const jchar *)datasourceName_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* code_ch = (const ev_char*)__env->GetStringUTFChars(code_j,JNI_FALSE);
				const EVString code = code_ch;
				__env->ReleaseStringUTFChars(code_j, (const char *)code_ch);
				#else
				const ev_wchar* code_ch = (const ev_wchar*)__env->GetStringChars(code_j,JNI_FALSE);
				const EVString code = code_ch;
				__env->ReleaseStringChars(code_j, (const jchar *)code_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* newName_ch = (const ev_char*)__env->GetStringUTFChars(newName_j,JNI_FALSE);
				const EVString newName = newName_ch;
				__env->ReleaseStringUTFChars(newName_j, (const char *)newName_ch);
				#else
				const ev_wchar* newName_ch = (const ev_wchar*)__env->GetStringChars(newName_j,JNI_FALSE);
				const EVString newName = newName_ch;
				__env->ReleaseStringChars(newName_j, (const jchar *)newName_ch);
				#endif
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject *pObjectX = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjXXXX;
				pObjectX->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::renameSingleEffect(datasourceName, code, newName);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_copyNewEffect_1EVString_1ev_1uint32_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring datasourceName_j, jlong effectId_j, jstring newName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* datasourceName_ch = (const ev_char*)__env->GetStringUTFChars(datasourceName_j,JNI_FALSE);
				const EVString datasourceName = datasourceName_ch;
				__env->ReleaseStringUTFChars(datasourceName_j, (const char *)datasourceName_ch);
				#else
				const ev_wchar* datasourceName_ch = (const ev_wchar*)__env->GetStringChars(datasourceName_j,JNI_FALSE);
				const EVString datasourceName = datasourceName_ch;
				__env->ReleaseStringChars(datasourceName_j, (const jchar *)datasourceName_ch);
				#endif
				ev_uint32 effectId = (ev_uint32) effectId_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* newName_ch = (const ev_char*)__env->GetStringUTFChars(newName_j,JNI_FALSE);
				const EVString newName = newName_ch;
				__env->ReleaseStringUTFChars(newName_j, (const char *)newName_ch);
				#else
				const ev_wchar* newName_ch = (const ev_wchar*)__env->GetStringChars(newName_j,JNI_FALSE);
				const EVString newName = newName_ch;
				__env->ReleaseStringChars(newName_j, (const jchar *)newName_ch);
				#endif
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject *pObjectX = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCEffectMgrEventObjectProxy))
				{
					pObjectX->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::copyNewEffect(datasourceName, effectId, newName);
				}
				else
				{
					pObjectX->copyNewEffect(datasourceName, effectId, newName);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_register_1copyNewEffect_1EVString_1ev_1uint32_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCEffectMgrEventObjectProxy *pObjectX = (JCEffectMgrEventObjectProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_copyNewEffect_EVString_ev_uint32_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"copyNewEffect_EVString_ev_uint32_EVString_callback", "(Ljava/lang/String;JLjava/lang/String;)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_copyNewEffect_1EVString_1ev_1uint32_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring datasourceName_j, jlong effectId_j, jstring newName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* datasourceName_ch = (const ev_char*)__env->GetStringUTFChars(datasourceName_j,JNI_FALSE);
				const EVString datasourceName = datasourceName_ch;
				__env->ReleaseStringUTFChars(datasourceName_j, (const char *)datasourceName_ch);
				#else
				const ev_wchar* datasourceName_ch = (const ev_wchar*)__env->GetStringChars(datasourceName_j,JNI_FALSE);
				const EVString datasourceName = datasourceName_ch;
				__env->ReleaseStringChars(datasourceName_j, (const jchar *)datasourceName_ch);
				#endif
				ev_uint32 effectId = (ev_uint32) effectId_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* newName_ch = (const ev_char*)__env->GetStringUTFChars(newName_j,JNI_FALSE);
				const EVString newName = newName_ch;
				__env->ReleaseStringUTFChars(newName_j, (const char *)newName_ch);
				#else
				const ev_wchar* newName_ch = (const ev_wchar*)__env->GetStringChars(newName_j,JNI_FALSE);
				const EVString newName = newName_ch;
				__env->ReleaseStringChars(newName_j, (const jchar *)newName_ch);
				#endif
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject *pObjectX = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjXXXX;
				pObjectX->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::copyNewEffect(datasourceName, effectId, newName);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_copyNewEffect_1IDataSource_1ev_1uint32_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ds_j, jlong effectId_j, jstring newName_j)
			{
				const EarthView::World::Spatial::GeoDataset::IDataSource *ds = (const EarthView::World::Spatial::GeoDataset::IDataSource*) ds_j;
				ev_uint32 effectId = (ev_uint32) effectId_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* newName_ch = (const ev_char*)__env->GetStringUTFChars(newName_j,JNI_FALSE);
				const EVString newName = newName_ch;
				__env->ReleaseStringUTFChars(newName_j, (const char *)newName_ch);
				#else
				const ev_wchar* newName_ch = (const ev_wchar*)__env->GetStringChars(newName_j,JNI_FALSE);
				const EVString newName = newName_ch;
				__env->ReleaseStringChars(newName_j, (const jchar *)newName_ch);
				#endif
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject *pObjectX = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCEffectMgrEventObjectProxy))
				{
					pObjectX->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::copyNewEffect(ds, effectId, newName);
				}
				else
				{
					pObjectX->copyNewEffect(ds, effectId, newName);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_register_1copyNewEffect_1IDataSource_1ev_1uint32_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCEffectMgrEventObjectProxy *pObjectX = (JCEffectMgrEventObjectProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_copyNewEffect_IDataSource_ev_uint32_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"copyNewEffect_IDataSource_ev_uint32_EVString_callback", "(JJLjava/lang/String;)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_copyNewEffect_1IDataSource_1ev_1uint32_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ds_j, jlong effectId_j, jstring newName_j)
			{
				const EarthView::World::Spatial::GeoDataset::IDataSource *ds = (const EarthView::World::Spatial::GeoDataset::IDataSource*) ds_j;
				ev_uint32 effectId = (ev_uint32) effectId_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* newName_ch = (const ev_char*)__env->GetStringUTFChars(newName_j,JNI_FALSE);
				const EVString newName = newName_ch;
				__env->ReleaseStringUTFChars(newName_j, (const char *)newName_ch);
				#else
				const ev_wchar* newName_ch = (const ev_wchar*)__env->GetStringChars(newName_j,JNI_FALSE);
				const EVString newName = newName_ch;
				__env->ReleaseStringChars(newName_j, (const jchar *)newName_ch);
				#endif
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject *pObjectX = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjXXXX;
				pObjectX->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::copyNewEffect(ds, effectId, newName);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_renameSingleEffect_1IDataSource_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ds_j, jstring code_j, jstring newName_j)
			{
				const EarthView::World::Spatial::GeoDataset::IDataSource *ds = (const EarthView::World::Spatial::GeoDataset::IDataSource*) ds_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* code_ch = (const ev_char*)__env->GetStringUTFChars(code_j,JNI_FALSE);
				const EVString code = code_ch;
				__env->ReleaseStringUTFChars(code_j, (const char *)code_ch);
				#else
				const ev_wchar* code_ch = (const ev_wchar*)__env->GetStringChars(code_j,JNI_FALSE);
				const EVString code = code_ch;
				__env->ReleaseStringChars(code_j, (const jchar *)code_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* newName_ch = (const ev_char*)__env->GetStringUTFChars(newName_j,JNI_FALSE);
				const EVString newName = newName_ch;
				__env->ReleaseStringUTFChars(newName_j, (const char *)newName_ch);
				#else
				const ev_wchar* newName_ch = (const ev_wchar*)__env->GetStringChars(newName_j,JNI_FALSE);
				const EVString newName = newName_ch;
				__env->ReleaseStringChars(newName_j, (const jchar *)newName_ch);
				#endif
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject *pObjectX = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCEffectMgrEventObjectProxy))
				{
					pObjectX->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::renameSingleEffect(ds, code, newName);
				}
				else
				{
					pObjectX->renameSingleEffect(ds, code, newName);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_register_1renameSingleEffect_1IDataSource_1EVString_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCEffectMgrEventObjectProxy *pObjectX = (JCEffectMgrEventObjectProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_renameSingleEffect_IDataSource_EVString_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"renameSingleEffect_IDataSource_EVString_EVString_callback", "(JLjava/lang/String;Ljava/lang/String;)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_renameSingleEffect_1IDataSource_1EVString_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ds_j, jstring code_j, jstring newName_j)
			{
				const EarthView::World::Spatial::GeoDataset::IDataSource *ds = (const EarthView::World::Spatial::GeoDataset::IDataSource*) ds_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* code_ch = (const ev_char*)__env->GetStringUTFChars(code_j,JNI_FALSE);
				const EVString code = code_ch;
				__env->ReleaseStringUTFChars(code_j, (const char *)code_ch);
				#else
				const ev_wchar* code_ch = (const ev_wchar*)__env->GetStringChars(code_j,JNI_FALSE);
				const EVString code = code_ch;
				__env->ReleaseStringChars(code_j, (const jchar *)code_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* newName_ch = (const ev_char*)__env->GetStringUTFChars(newName_j,JNI_FALSE);
				const EVString newName = newName_ch;
				__env->ReleaseStringUTFChars(newName_j, (const char *)newName_ch);
				#else
				const ev_wchar* newName_ch = (const ev_wchar*)__env->GetStringChars(newName_j,JNI_FALSE);
				const EVString newName = newName_ch;
				__env->ReleaseStringChars(newName_j, (const jchar *)newName_ch);
				#endif
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject *pObjectX = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjXXXX;
				pObjectX->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::renameSingleEffect(ds, code, newName);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_onRenameSingleEffect_1CEffectTreeviewEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
			{
				EarthView::World::Spatial3DProxy::CEffectTreeviewEvent *e = (EarthView::World::Spatial3DProxy::CEffectTreeviewEvent*) e_j;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject *pObjectX = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCEffectMgrEventObjectProxy))
				{
					pObjectX->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::onRenameSingleEffect(e);
				}
				else
				{
					pObjectX->onRenameSingleEffect(e);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_register_1onRenameSingleEffect_1CEffectTreeviewEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCEffectMgrEventObjectProxy *pObjectX = (JCEffectMgrEventObjectProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_onRenameSingleEffect_CEffectTreeviewEvent_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"onRenameSingleEffect_CEffectTreeviewEvent_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_onRenameSingleEffect_1CEffectTreeviewEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
			{
				EarthView::World::Spatial3DProxy::CEffectTreeviewEvent *e = (EarthView::World::Spatial3DProxy::CEffectTreeviewEvent*) e_j;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject *pObjectX = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjXXXX;
				pObjectX->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::onRenameSingleEffect(e);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_renameBEChild_1EVString_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring datasourceName_j, jstring code_j, jstring newName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* datasourceName_ch = (const ev_char*)__env->GetStringUTFChars(datasourceName_j,JNI_FALSE);
				const EVString datasourceName = datasourceName_ch;
				__env->ReleaseStringUTFChars(datasourceName_j, (const char *)datasourceName_ch);
				#else
				const ev_wchar* datasourceName_ch = (const ev_wchar*)__env->GetStringChars(datasourceName_j,JNI_FALSE);
				const EVString datasourceName = datasourceName_ch;
				__env->ReleaseStringChars(datasourceName_j, (const jchar *)datasourceName_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* code_ch = (const ev_char*)__env->GetStringUTFChars(code_j,JNI_FALSE);
				const EVString code = code_ch;
				__env->ReleaseStringUTFChars(code_j, (const char *)code_ch);
				#else
				const ev_wchar* code_ch = (const ev_wchar*)__env->GetStringChars(code_j,JNI_FALSE);
				const EVString code = code_ch;
				__env->ReleaseStringChars(code_j, (const jchar *)code_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* newName_ch = (const ev_char*)__env->GetStringUTFChars(newName_j,JNI_FALSE);
				const EVString newName = newName_ch;
				__env->ReleaseStringUTFChars(newName_j, (const char *)newName_ch);
				#else
				const ev_wchar* newName_ch = (const ev_wchar*)__env->GetStringChars(newName_j,JNI_FALSE);
				const EVString newName = newName_ch;
				__env->ReleaseStringChars(newName_j, (const jchar *)newName_ch);
				#endif
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject *pObjectX = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCEffectMgrEventObjectProxy))
				{
					pObjectX->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::renameBEChild(datasourceName, code, newName);
				}
				else
				{
					pObjectX->renameBEChild(datasourceName, code, newName);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_register_1renameBEChild_1EVString_1EVString_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCEffectMgrEventObjectProxy *pObjectX = (JCEffectMgrEventObjectProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_renameBEChild_EVString_EVString_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"renameBEChild_EVString_EVString_EVString_callback", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_renameBEChild_1EVString_1EVString_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring datasourceName_j, jstring code_j, jstring newName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* datasourceName_ch = (const ev_char*)__env->GetStringUTFChars(datasourceName_j,JNI_FALSE);
				const EVString datasourceName = datasourceName_ch;
				__env->ReleaseStringUTFChars(datasourceName_j, (const char *)datasourceName_ch);
				#else
				const ev_wchar* datasourceName_ch = (const ev_wchar*)__env->GetStringChars(datasourceName_j,JNI_FALSE);
				const EVString datasourceName = datasourceName_ch;
				__env->ReleaseStringChars(datasourceName_j, (const jchar *)datasourceName_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* code_ch = (const ev_char*)__env->GetStringUTFChars(code_j,JNI_FALSE);
				const EVString code = code_ch;
				__env->ReleaseStringUTFChars(code_j, (const char *)code_ch);
				#else
				const ev_wchar* code_ch = (const ev_wchar*)__env->GetStringChars(code_j,JNI_FALSE);
				const EVString code = code_ch;
				__env->ReleaseStringChars(code_j, (const jchar *)code_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* newName_ch = (const ev_char*)__env->GetStringUTFChars(newName_j,JNI_FALSE);
				const EVString newName = newName_ch;
				__env->ReleaseStringUTFChars(newName_j, (const char *)newName_ch);
				#else
				const ev_wchar* newName_ch = (const ev_wchar*)__env->GetStringChars(newName_j,JNI_FALSE);
				const EVString newName = newName_ch;
				__env->ReleaseStringChars(newName_j, (const jchar *)newName_ch);
				#endif
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject *pObjectX = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjXXXX;
				pObjectX->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::renameBEChild(datasourceName, code, newName);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_renameBEChild_1IDataSource_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ds_j, jstring code_j, jstring newName_j)
			{
				const EarthView::World::Spatial::GeoDataset::IDataSource *ds = (const EarthView::World::Spatial::GeoDataset::IDataSource*) ds_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* code_ch = (const ev_char*)__env->GetStringUTFChars(code_j,JNI_FALSE);
				const EVString code = code_ch;
				__env->ReleaseStringUTFChars(code_j, (const char *)code_ch);
				#else
				const ev_wchar* code_ch = (const ev_wchar*)__env->GetStringChars(code_j,JNI_FALSE);
				const EVString code = code_ch;
				__env->ReleaseStringChars(code_j, (const jchar *)code_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* newName_ch = (const ev_char*)__env->GetStringUTFChars(newName_j,JNI_FALSE);
				const EVString newName = newName_ch;
				__env->ReleaseStringUTFChars(newName_j, (const char *)newName_ch);
				#else
				const ev_wchar* newName_ch = (const ev_wchar*)__env->GetStringChars(newName_j,JNI_FALSE);
				const EVString newName = newName_ch;
				__env->ReleaseStringChars(newName_j, (const jchar *)newName_ch);
				#endif
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject *pObjectX = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCEffectMgrEventObjectProxy))
				{
					pObjectX->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::renameBEChild(ds, code, newName);
				}
				else
				{
					pObjectX->renameBEChild(ds, code, newName);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_register_1renameBEChild_1IDataSource_1EVString_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCEffectMgrEventObjectProxy *pObjectX = (JCEffectMgrEventObjectProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_renameBEChild_IDataSource_EVString_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"renameBEChild_IDataSource_EVString_EVString_callback", "(JLjava/lang/String;Ljava/lang/String;)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_renameBEChild_1IDataSource_1EVString_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ds_j, jstring code_j, jstring newName_j)
			{
				const EarthView::World::Spatial::GeoDataset::IDataSource *ds = (const EarthView::World::Spatial::GeoDataset::IDataSource*) ds_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* code_ch = (const ev_char*)__env->GetStringUTFChars(code_j,JNI_FALSE);
				const EVString code = code_ch;
				__env->ReleaseStringUTFChars(code_j, (const char *)code_ch);
				#else
				const ev_wchar* code_ch = (const ev_wchar*)__env->GetStringChars(code_j,JNI_FALSE);
				const EVString code = code_ch;
				__env->ReleaseStringChars(code_j, (const jchar *)code_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* newName_ch = (const ev_char*)__env->GetStringUTFChars(newName_j,JNI_FALSE);
				const EVString newName = newName_ch;
				__env->ReleaseStringUTFChars(newName_j, (const char *)newName_ch);
				#else
				const ev_wchar* newName_ch = (const ev_wchar*)__env->GetStringChars(newName_j,JNI_FALSE);
				const EVString newName = newName_ch;
				__env->ReleaseStringChars(newName_j, (const jchar *)newName_ch);
				#endif
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject *pObjectX = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjXXXX;
				pObjectX->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::renameBEChild(ds, code, newName);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_onRenameBEChildEffect_1CEffectTreeviewEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
			{
				EarthView::World::Spatial3DProxy::CEffectTreeviewEvent *e = (EarthView::World::Spatial3DProxy::CEffectTreeviewEvent*) e_j;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject *pObjectX = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCEffectMgrEventObjectProxy))
				{
					pObjectX->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::onRenameBEChildEffect(e);
				}
				else
				{
					pObjectX->onRenameBEChildEffect(e);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_register_1onRenameBEChildEffect_1CEffectTreeviewEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCEffectMgrEventObjectProxy *pObjectX = (JCEffectMgrEventObjectProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_onRenameBEChildEffect_CEffectTreeviewEvent_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"onRenameBEChildEffect_CEffectTreeviewEvent_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_onRenameBEChildEffect_1CEffectTreeviewEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
			{
				EarthView::World::Spatial3DProxy::CEffectTreeviewEvent *e = (EarthView::World::Spatial3DProxy::CEffectTreeviewEvent*) e_j;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject *pObjectX = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjXXXX;
				pObjectX->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::onRenameBEChildEffect(e);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_deleteUserType_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring datasourceName_j, jstring code_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* datasourceName_ch = (const ev_char*)__env->GetStringUTFChars(datasourceName_j,JNI_FALSE);
				const EVString datasourceName = datasourceName_ch;
				__env->ReleaseStringUTFChars(datasourceName_j, (const char *)datasourceName_ch);
				#else
				const ev_wchar* datasourceName_ch = (const ev_wchar*)__env->GetStringChars(datasourceName_j,JNI_FALSE);
				const EVString datasourceName = datasourceName_ch;
				__env->ReleaseStringChars(datasourceName_j, (const jchar *)datasourceName_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* code_ch = (const ev_char*)__env->GetStringUTFChars(code_j,JNI_FALSE);
				const EVString code = code_ch;
				__env->ReleaseStringUTFChars(code_j, (const char *)code_ch);
				#else
				const ev_wchar* code_ch = (const ev_wchar*)__env->GetStringChars(code_j,JNI_FALSE);
				const EVString code = code_ch;
				__env->ReleaseStringChars(code_j, (const jchar *)code_ch);
				#endif
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject *pObjectX = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCEffectMgrEventObjectProxy))
				{
					pObjectX->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::deleteUserType(datasourceName, code);
				}
				else
				{
					pObjectX->deleteUserType(datasourceName, code);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_register_1deleteUserType_1EVString_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCEffectMgrEventObjectProxy *pObjectX = (JCEffectMgrEventObjectProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_deleteUserType_EVString_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"deleteUserType_EVString_EVString_callback", "(Ljava/lang/String;Ljava/lang/String;)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_deleteUserType_1EVString_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring datasourceName_j, jstring code_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* datasourceName_ch = (const ev_char*)__env->GetStringUTFChars(datasourceName_j,JNI_FALSE);
				const EVString datasourceName = datasourceName_ch;
				__env->ReleaseStringUTFChars(datasourceName_j, (const char *)datasourceName_ch);
				#else
				const ev_wchar* datasourceName_ch = (const ev_wchar*)__env->GetStringChars(datasourceName_j,JNI_FALSE);
				const EVString datasourceName = datasourceName_ch;
				__env->ReleaseStringChars(datasourceName_j, (const jchar *)datasourceName_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* code_ch = (const ev_char*)__env->GetStringUTFChars(code_j,JNI_FALSE);
				const EVString code = code_ch;
				__env->ReleaseStringUTFChars(code_j, (const char *)code_ch);
				#else
				const ev_wchar* code_ch = (const ev_wchar*)__env->GetStringChars(code_j,JNI_FALSE);
				const EVString code = code_ch;
				__env->ReleaseStringChars(code_j, (const jchar *)code_ch);
				#endif
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject *pObjectX = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjXXXX;
				pObjectX->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::deleteUserType(datasourceName, code);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_deleteUserType_1IDataSource_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ds_j, jstring code_j)
			{
				const EarthView::World::Spatial::GeoDataset::IDataSource *ds = (const EarthView::World::Spatial::GeoDataset::IDataSource*) ds_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* code_ch = (const ev_char*)__env->GetStringUTFChars(code_j,JNI_FALSE);
				const EVString code = code_ch;
				__env->ReleaseStringUTFChars(code_j, (const char *)code_ch);
				#else
				const ev_wchar* code_ch = (const ev_wchar*)__env->GetStringChars(code_j,JNI_FALSE);
				const EVString code = code_ch;
				__env->ReleaseStringChars(code_j, (const jchar *)code_ch);
				#endif
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject *pObjectX = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCEffectMgrEventObjectProxy))
				{
					pObjectX->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::deleteUserType(ds, code);
				}
				else
				{
					pObjectX->deleteUserType(ds, code);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_register_1deleteUserType_1IDataSource_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCEffectMgrEventObjectProxy *pObjectX = (JCEffectMgrEventObjectProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_deleteUserType_IDataSource_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"deleteUserType_IDataSource_EVString_callback", "(JLjava/lang/String;)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_deleteUserType_1IDataSource_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ds_j, jstring code_j)
			{
				const EarthView::World::Spatial::GeoDataset::IDataSource *ds = (const EarthView::World::Spatial::GeoDataset::IDataSource*) ds_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* code_ch = (const ev_char*)__env->GetStringUTFChars(code_j,JNI_FALSE);
				const EVString code = code_ch;
				__env->ReleaseStringUTFChars(code_j, (const char *)code_ch);
				#else
				const ev_wchar* code_ch = (const ev_wchar*)__env->GetStringChars(code_j,JNI_FALSE);
				const EVString code = code_ch;
				__env->ReleaseStringChars(code_j, (const jchar *)code_ch);
				#endif
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject *pObjectX = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjXXXX;
				pObjectX->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::deleteUserType(ds, code);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_onDeleteUserType_1CEffectTreeviewEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
			{
				EarthView::World::Spatial3DProxy::CEffectTreeviewEvent *e = (EarthView::World::Spatial3DProxy::CEffectTreeviewEvent*) e_j;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject *pObjectX = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCEffectMgrEventObjectProxy))
				{
					pObjectX->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::onDeleteUserType(e);
				}
				else
				{
					pObjectX->onDeleteUserType(e);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_register_1onDeleteUserType_1CEffectTreeviewEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCEffectMgrEventObjectProxy *pObjectX = (JCEffectMgrEventObjectProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_onDeleteUserType_CEffectTreeviewEvent_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"onDeleteUserType_CEffectTreeviewEvent_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_onDeleteUserType_1CEffectTreeviewEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
			{
				EarthView::World::Spatial3DProxy::CEffectTreeviewEvent *e = (EarthView::World::Spatial3DProxy::CEffectTreeviewEvent*) e_j;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject *pObjectX = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjXXXX;
				pObjectX->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::onDeleteUserType(e);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_deleteEffect_1EVString_1ev_1uint32_1ev_1uint32_1EffectType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring datasourceName_j, jlong parentEffectId_j, jlong effectId_j, jint type_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* datasourceName_ch = (const ev_char*)__env->GetStringUTFChars(datasourceName_j,JNI_FALSE);
				const EVString datasourceName = datasourceName_ch;
				__env->ReleaseStringUTFChars(datasourceName_j, (const char *)datasourceName_ch);
				#else
				const ev_wchar* datasourceName_ch = (const ev_wchar*)__env->GetStringChars(datasourceName_j,JNI_FALSE);
				const EVString datasourceName = datasourceName_ch;
				__env->ReleaseStringChars(datasourceName_j, (const jchar *)datasourceName_ch);
				#endif
				ev_uint32 parentEffectId = (ev_uint32) parentEffectId_j;
				ev_uint32 effectId = (ev_uint32) effectId_j;
				EarthView::World::Spatial3D::Dataset::EffectType type = (EarthView::World::Spatial3D::Dataset::EffectType) type_j;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject *pObjectX = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCEffectMgrEventObjectProxy))
				{
					pObjectX->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::deleteEffect(datasourceName, parentEffectId, effectId, type);
				}
				else
				{
					pObjectX->deleteEffect(datasourceName, parentEffectId, effectId, type);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_register_1deleteEffect_1EVString_1ev_1uint32_1ev_1uint32_1EffectType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCEffectMgrEventObjectProxy *pObjectX = (JCEffectMgrEventObjectProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_deleteEffect_EVString_ev_uint32_ev_uint32_EffectType_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"deleteEffect_EVString_ev_uint32_ev_uint32_EffectType_callback", "(Ljava/lang/String;JJI)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_deleteEffect_1EVString_1ev_1uint32_1ev_1uint32_1EffectType_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring datasourceName_j, jlong parentEffectId_j, jlong effectId_j, jint type_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* datasourceName_ch = (const ev_char*)__env->GetStringUTFChars(datasourceName_j,JNI_FALSE);
				const EVString datasourceName = datasourceName_ch;
				__env->ReleaseStringUTFChars(datasourceName_j, (const char *)datasourceName_ch);
				#else
				const ev_wchar* datasourceName_ch = (const ev_wchar*)__env->GetStringChars(datasourceName_j,JNI_FALSE);
				const EVString datasourceName = datasourceName_ch;
				__env->ReleaseStringChars(datasourceName_j, (const jchar *)datasourceName_ch);
				#endif
				ev_uint32 parentEffectId = (ev_uint32) parentEffectId_j;
				ev_uint32 effectId = (ev_uint32) effectId_j;
				EarthView::World::Spatial3D::Dataset::EffectType type = (EarthView::World::Spatial3D::Dataset::EffectType) type_j;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject *pObjectX = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjXXXX;
				pObjectX->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::deleteEffect(datasourceName, parentEffectId, effectId, type);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_deleteEffect_1IDataSource_1ev_1uint32_1ev_1uint32_1EffectType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ds_j, jlong parentEffectId_j, jlong effectId_j, jint type_j)
			{
				const EarthView::World::Spatial::GeoDataset::IDataSource *ds = (const EarthView::World::Spatial::GeoDataset::IDataSource*) ds_j;
				ev_uint32 parentEffectId = (ev_uint32) parentEffectId_j;
				ev_uint32 effectId = (ev_uint32) effectId_j;
				EarthView::World::Spatial3D::Dataset::EffectType type = (EarthView::World::Spatial3D::Dataset::EffectType) type_j;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject *pObjectX = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCEffectMgrEventObjectProxy))
				{
					pObjectX->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::deleteEffect(ds, parentEffectId, effectId, type);
				}
				else
				{
					pObjectX->deleteEffect(ds, parentEffectId, effectId, type);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_register_1deleteEffect_1IDataSource_1ev_1uint32_1ev_1uint32_1EffectType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCEffectMgrEventObjectProxy *pObjectX = (JCEffectMgrEventObjectProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_deleteEffect_IDataSource_ev_uint32_ev_uint32_EffectType_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"deleteEffect_IDataSource_ev_uint32_ev_uint32_EffectType_callback", "(JJJI)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_deleteEffect_1IDataSource_1ev_1uint32_1ev_1uint32_1EffectType_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ds_j, jlong parentEffectId_j, jlong effectId_j, jint type_j)
			{
				const EarthView::World::Spatial::GeoDataset::IDataSource *ds = (const EarthView::World::Spatial::GeoDataset::IDataSource*) ds_j;
				ev_uint32 parentEffectId = (ev_uint32) parentEffectId_j;
				ev_uint32 effectId = (ev_uint32) effectId_j;
				EarthView::World::Spatial3D::Dataset::EffectType type = (EarthView::World::Spatial3D::Dataset::EffectType) type_j;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject *pObjectX = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjXXXX;
				pObjectX->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::deleteEffect(ds, parentEffectId, effectId, type);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_onDeleteEffect_1CEffectTreeviewEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
			{
				EarthView::World::Spatial3DProxy::CEffectTreeviewEvent *e = (EarthView::World::Spatial3DProxy::CEffectTreeviewEvent*) e_j;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject *pObjectX = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCEffectMgrEventObjectProxy))
				{
					pObjectX->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::onDeleteEffect(e);
				}
				else
				{
					pObjectX->onDeleteEffect(e);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_register_1onDeleteEffect_1CEffectTreeviewEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCEffectMgrEventObjectProxy *pObjectX = (JCEffectMgrEventObjectProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_onDeleteEffect_CEffectTreeviewEvent_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"onDeleteEffect_CEffectTreeviewEvent_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_onDeleteEffect_1CEffectTreeviewEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
			{
				EarthView::World::Spatial3DProxy::CEffectTreeviewEvent *e = (EarthView::World::Spatial3DProxy::CEffectTreeviewEvent*) e_j;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject *pObjectX = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjXXXX;
				pObjectX->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::onDeleteEffect(e);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_addEffectToBlendEffect_1EVString_1ev_1uint32_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring datasourceName_j, jlong editEffectId_j, jlong dragEffectId_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* datasourceName_ch = (const ev_char*)__env->GetStringUTFChars(datasourceName_j,JNI_FALSE);
				const EVString datasourceName = datasourceName_ch;
				__env->ReleaseStringUTFChars(datasourceName_j, (const char *)datasourceName_ch);
				#else
				const ev_wchar* datasourceName_ch = (const ev_wchar*)__env->GetStringChars(datasourceName_j,JNI_FALSE);
				const EVString datasourceName = datasourceName_ch;
				__env->ReleaseStringChars(datasourceName_j, (const jchar *)datasourceName_ch);
				#endif
				ev_uint32 editEffectId = (ev_uint32) editEffectId_j;
				ev_uint32 dragEffectId = (ev_uint32) dragEffectId_j;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject *pObjectX = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCEffectMgrEventObjectProxy))
				{
					pObjectX->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::addEffectToBlendEffect(datasourceName, editEffectId, dragEffectId);
				}
				else
				{
					pObjectX->addEffectToBlendEffect(datasourceName, editEffectId, dragEffectId);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_register_1addEffectToBlendEffect_1EVString_1ev_1uint32_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCEffectMgrEventObjectProxy *pObjectX = (JCEffectMgrEventObjectProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_addEffectToBlendEffect_EVString_ev_uint32_ev_uint32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"addEffectToBlendEffect_EVString_ev_uint32_ev_uint32_callback", "(Ljava/lang/String;JJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_addEffectToBlendEffect_1EVString_1ev_1uint32_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring datasourceName_j, jlong editEffectId_j, jlong dragEffectId_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* datasourceName_ch = (const ev_char*)__env->GetStringUTFChars(datasourceName_j,JNI_FALSE);
				const EVString datasourceName = datasourceName_ch;
				__env->ReleaseStringUTFChars(datasourceName_j, (const char *)datasourceName_ch);
				#else
				const ev_wchar* datasourceName_ch = (const ev_wchar*)__env->GetStringChars(datasourceName_j,JNI_FALSE);
				const EVString datasourceName = datasourceName_ch;
				__env->ReleaseStringChars(datasourceName_j, (const jchar *)datasourceName_ch);
				#endif
				ev_uint32 editEffectId = (ev_uint32) editEffectId_j;
				ev_uint32 dragEffectId = (ev_uint32) dragEffectId_j;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject *pObjectX = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjXXXX;
				pObjectX->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::addEffectToBlendEffect(datasourceName, editEffectId, dragEffectId);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_addEffectToBlendEffect_1IDataSource_1ev_1uint32_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ds_j, jlong editEffectId_j, jlong dragEffectId_j)
			{
				const EarthView::World::Spatial::GeoDataset::IDataSource *ds = (const EarthView::World::Spatial::GeoDataset::IDataSource*) ds_j;
				ev_uint32 editEffectId = (ev_uint32) editEffectId_j;
				ev_uint32 dragEffectId = (ev_uint32) dragEffectId_j;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject *pObjectX = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCEffectMgrEventObjectProxy))
				{
					pObjectX->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::addEffectToBlendEffect(ds, editEffectId, dragEffectId);
				}
				else
				{
					pObjectX->addEffectToBlendEffect(ds, editEffectId, dragEffectId);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_register_1addEffectToBlendEffect_1IDataSource_1ev_1uint32_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCEffectMgrEventObjectProxy *pObjectX = (JCEffectMgrEventObjectProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_addEffectToBlendEffect_IDataSource_ev_uint32_ev_uint32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"addEffectToBlendEffect_IDataSource_ev_uint32_ev_uint32_callback", "(JJJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_addEffectToBlendEffect_1IDataSource_1ev_1uint32_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ds_j, jlong editEffectId_j, jlong dragEffectId_j)
			{
				const EarthView::World::Spatial::GeoDataset::IDataSource *ds = (const EarthView::World::Spatial::GeoDataset::IDataSource*) ds_j;
				ev_uint32 editEffectId = (ev_uint32) editEffectId_j;
				ev_uint32 dragEffectId = (ev_uint32) dragEffectId_j;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject *pObjectX = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjXXXX;
				pObjectX->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::addEffectToBlendEffect(ds, editEffectId, dragEffectId);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_onAddEffectToBlendEffect_1CEffectTreeviewEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
			{
				EarthView::World::Spatial3DProxy::CEffectTreeviewEvent *e = (EarthView::World::Spatial3DProxy::CEffectTreeviewEvent*) e_j;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject *pObjectX = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCEffectMgrEventObjectProxy))
				{
					pObjectX->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::onAddEffectToBlendEffect(e);
				}
				else
				{
					pObjectX->onAddEffectToBlendEffect(e);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_register_1onAddEffectToBlendEffect_1CEffectTreeviewEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCEffectMgrEventObjectProxy *pObjectX = (JCEffectMgrEventObjectProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_onAddEffectToBlendEffect_CEffectTreeviewEvent_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"onAddEffectToBlendEffect_CEffectTreeviewEvent_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_onAddEffectToBlendEffect_1CEffectTreeviewEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
			{
				EarthView::World::Spatial3DProxy::CEffectTreeviewEvent *e = (EarthView::World::Spatial3DProxy::CEffectTreeviewEvent*) e_j;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject *pObjectX = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjXXXX;
				pObjectX->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::onAddEffectToBlendEffect(e);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_addEffectToBlendEffect_1IDataSource_1ev_1uint32_1CEffectInfo(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ds_j, jlong editEffectId_j, jlong info_j)
			{
				const EarthView::World::Spatial::GeoDataset::IDataSource *ds = (const EarthView::World::Spatial::GeoDataset::IDataSource*) ds_j;
				ev_uint32 editEffectId = (ev_uint32) editEffectId_j;
				EarthView::World::Spatial3D::Dataset::CEffectInfo &info = *(EarthView::World::Spatial3D::Dataset::CEffectInfo*) info_j;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject *pObjectX = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjXXXX;
				EarthView::World::Spatial3D::Dataset::CEffectInfo __values1 = pObjectX->addEffectToBlendEffect(ds, editEffectId, info);
				EarthView::World::Spatial3D::Dataset::CEffectInfo *returnvalues = new EarthView::World::Spatial3D::Dataset::CEffectInfo(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_isExistName_1EVString_1EVString_1EVString_1EffectType_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring dataSourceName_j, jstring effectName_j, jstring typeCode_j, jint effectType_j, jstring blendeffectName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* dataSourceName_ch = (const ev_char*)__env->GetStringUTFChars(dataSourceName_j,JNI_FALSE);
				const EVString dataSourceName = dataSourceName_ch;
				__env->ReleaseStringUTFChars(dataSourceName_j, (const char *)dataSourceName_ch);
				#else
				const ev_wchar* dataSourceName_ch = (const ev_wchar*)__env->GetStringChars(dataSourceName_j,JNI_FALSE);
				const EVString dataSourceName = dataSourceName_ch;
				__env->ReleaseStringChars(dataSourceName_j, (const jchar *)dataSourceName_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* effectName_ch = (const ev_char*)__env->GetStringUTFChars(effectName_j,JNI_FALSE);
				const EVString effectName = effectName_ch;
				__env->ReleaseStringUTFChars(effectName_j, (const char *)effectName_ch);
				#else
				const ev_wchar* effectName_ch = (const ev_wchar*)__env->GetStringChars(effectName_j,JNI_FALSE);
				const EVString effectName = effectName_ch;
				__env->ReleaseStringChars(effectName_j, (const jchar *)effectName_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* typeCode_ch = (const ev_char*)__env->GetStringUTFChars(typeCode_j,JNI_FALSE);
				const EVString typeCode = typeCode_ch;
				__env->ReleaseStringUTFChars(typeCode_j, (const char *)typeCode_ch);
				#else
				const ev_wchar* typeCode_ch = (const ev_wchar*)__env->GetStringChars(typeCode_j,JNI_FALSE);
				const EVString typeCode = typeCode_ch;
				__env->ReleaseStringChars(typeCode_j, (const jchar *)typeCode_ch);
				#endif
				EarthView::World::Spatial3D::Dataset::EffectType effectType = (EarthView::World::Spatial3D::Dataset::EffectType) effectType_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* blendeffectName_ch = (const ev_char*)__env->GetStringUTFChars(blendeffectName_j,JNI_FALSE);
				const EVString blendeffectName = blendeffectName_ch;
				__env->ReleaseStringUTFChars(blendeffectName_j, (const char *)blendeffectName_ch);
				#else
				const ev_wchar* blendeffectName_ch = (const ev_wchar*)__env->GetStringChars(blendeffectName_j,JNI_FALSE);
				const EVString blendeffectName = blendeffectName_ch;
				__env->ReleaseStringChars(blendeffectName_j, (const jchar *)blendeffectName_ch);
				#endif
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject *pObjectX = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCEffectMgrEventObjectProxy))
				{
					bool __values1 = pObjectX->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::isExistName(dataSourceName, effectName, typeCode, effectType, blendeffectName);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					bool __values1 = pObjectX->isExistName(dataSourceName, effectName, typeCode, effectType, blendeffectName);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_register_1isExistName_1EVString_1EVString_1EVString_1EffectType_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCEffectMgrEventObjectProxy *pObjectX = (JCEffectMgrEventObjectProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_isExistName_EVString_EVString_EVString_EffectType_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"isExistName_EVString_EVString_EVString_EffectType_EVString_callback", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_isExistName_1EVString_1EVString_1EVString_1EffectType_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring dataSourceName_j, jstring effectName_j, jstring typeCode_j, jint effectType_j, jstring blendeffectName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* dataSourceName_ch = (const ev_char*)__env->GetStringUTFChars(dataSourceName_j,JNI_FALSE);
				const EVString dataSourceName = dataSourceName_ch;
				__env->ReleaseStringUTFChars(dataSourceName_j, (const char *)dataSourceName_ch);
				#else
				const ev_wchar* dataSourceName_ch = (const ev_wchar*)__env->GetStringChars(dataSourceName_j,JNI_FALSE);
				const EVString dataSourceName = dataSourceName_ch;
				__env->ReleaseStringChars(dataSourceName_j, (const jchar *)dataSourceName_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* effectName_ch = (const ev_char*)__env->GetStringUTFChars(effectName_j,JNI_FALSE);
				const EVString effectName = effectName_ch;
				__env->ReleaseStringUTFChars(effectName_j, (const char *)effectName_ch);
				#else
				const ev_wchar* effectName_ch = (const ev_wchar*)__env->GetStringChars(effectName_j,JNI_FALSE);
				const EVString effectName = effectName_ch;
				__env->ReleaseStringChars(effectName_j, (const jchar *)effectName_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* typeCode_ch = (const ev_char*)__env->GetStringUTFChars(typeCode_j,JNI_FALSE);
				const EVString typeCode = typeCode_ch;
				__env->ReleaseStringUTFChars(typeCode_j, (const char *)typeCode_ch);
				#else
				const ev_wchar* typeCode_ch = (const ev_wchar*)__env->GetStringChars(typeCode_j,JNI_FALSE);
				const EVString typeCode = typeCode_ch;
				__env->ReleaseStringChars(typeCode_j, (const jchar *)typeCode_ch);
				#endif
				EarthView::World::Spatial3D::Dataset::EffectType effectType = (EarthView::World::Spatial3D::Dataset::EffectType) effectType_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* blendeffectName_ch = (const ev_char*)__env->GetStringUTFChars(blendeffectName_j,JNI_FALSE);
				const EVString blendeffectName = blendeffectName_ch;
				__env->ReleaseStringUTFChars(blendeffectName_j, (const char *)blendeffectName_ch);
				#else
				const ev_wchar* blendeffectName_ch = (const ev_wchar*)__env->GetStringChars(blendeffectName_j,JNI_FALSE);
				const EVString blendeffectName = blendeffectName_ch;
				__env->ReleaseStringChars(blendeffectName_j, (const jchar *)blendeffectName_ch);
				#endif
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject *pObjectX = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjXXXX;
				bool __values1 = pObjectX->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::isExistName(dataSourceName, effectName, typeCode, effectType, blendeffectName);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_isExistName_1IDataSource_1EVString_1EVString_1EffectType_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ds_j, jstring effectName_j, jstring typeCode_j, jint effectType_j, jstring blendeffectName_j)
			{
				const EarthView::World::Spatial::GeoDataset::IDataSource *ds = (const EarthView::World::Spatial::GeoDataset::IDataSource*) ds_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* effectName_ch = (const ev_char*)__env->GetStringUTFChars(effectName_j,JNI_FALSE);
				const EVString effectName = effectName_ch;
				__env->ReleaseStringUTFChars(effectName_j, (const char *)effectName_ch);
				#else
				const ev_wchar* effectName_ch = (const ev_wchar*)__env->GetStringChars(effectName_j,JNI_FALSE);
				const EVString effectName = effectName_ch;
				__env->ReleaseStringChars(effectName_j, (const jchar *)effectName_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* typeCode_ch = (const ev_char*)__env->GetStringUTFChars(typeCode_j,JNI_FALSE);
				const EVString typeCode = typeCode_ch;
				__env->ReleaseStringUTFChars(typeCode_j, (const char *)typeCode_ch);
				#else
				const ev_wchar* typeCode_ch = (const ev_wchar*)__env->GetStringChars(typeCode_j,JNI_FALSE);
				const EVString typeCode = typeCode_ch;
				__env->ReleaseStringChars(typeCode_j, (const jchar *)typeCode_ch);
				#endif
				EarthView::World::Spatial3D::Dataset::EffectType effectType = (EarthView::World::Spatial3D::Dataset::EffectType) effectType_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* blendeffectName_ch = (const ev_char*)__env->GetStringUTFChars(blendeffectName_j,JNI_FALSE);
				const EVString blendeffectName = blendeffectName_ch;
				__env->ReleaseStringUTFChars(blendeffectName_j, (const char *)blendeffectName_ch);
				#else
				const ev_wchar* blendeffectName_ch = (const ev_wchar*)__env->GetStringChars(blendeffectName_j,JNI_FALSE);
				const EVString blendeffectName = blendeffectName_ch;
				__env->ReleaseStringChars(blendeffectName_j, (const jchar *)blendeffectName_ch);
				#endif
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject *pObjectX = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCEffectMgrEventObjectProxy))
				{
					bool __values1 = pObjectX->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::isExistName(ds, effectName, typeCode, effectType, blendeffectName);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					bool __values1 = pObjectX->isExistName(ds, effectName, typeCode, effectType, blendeffectName);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_register_1isExistName_1IDataSource_1EVString_1EVString_1EffectType_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCEffectMgrEventObjectProxy *pObjectX = (JCEffectMgrEventObjectProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_isExistName_IDataSource_EVString_EVString_EffectType_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"isExistName_IDataSource_EVString_EVString_EffectType_EVString_callback", "(JLjava/lang/String;Ljava/lang/String;ILjava/lang/String;)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_isExistName_1IDataSource_1EVString_1EVString_1EffectType_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ds_j, jstring effectName_j, jstring typeCode_j, jint effectType_j, jstring blendeffectName_j)
			{
				const EarthView::World::Spatial::GeoDataset::IDataSource *ds = (const EarthView::World::Spatial::GeoDataset::IDataSource*) ds_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* effectName_ch = (const ev_char*)__env->GetStringUTFChars(effectName_j,JNI_FALSE);
				const EVString effectName = effectName_ch;
				__env->ReleaseStringUTFChars(effectName_j, (const char *)effectName_ch);
				#else
				const ev_wchar* effectName_ch = (const ev_wchar*)__env->GetStringChars(effectName_j,JNI_FALSE);
				const EVString effectName = effectName_ch;
				__env->ReleaseStringChars(effectName_j, (const jchar *)effectName_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* typeCode_ch = (const ev_char*)__env->GetStringUTFChars(typeCode_j,JNI_FALSE);
				const EVString typeCode = typeCode_ch;
				__env->ReleaseStringUTFChars(typeCode_j, (const char *)typeCode_ch);
				#else
				const ev_wchar* typeCode_ch = (const ev_wchar*)__env->GetStringChars(typeCode_j,JNI_FALSE);
				const EVString typeCode = typeCode_ch;
				__env->ReleaseStringChars(typeCode_j, (const jchar *)typeCode_ch);
				#endif
				EarthView::World::Spatial3D::Dataset::EffectType effectType = (EarthView::World::Spatial3D::Dataset::EffectType) effectType_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* blendeffectName_ch = (const ev_char*)__env->GetStringUTFChars(blendeffectName_j,JNI_FALSE);
				const EVString blendeffectName = blendeffectName_ch;
				__env->ReleaseStringUTFChars(blendeffectName_j, (const char *)blendeffectName_ch);
				#else
				const ev_wchar* blendeffectName_ch = (const ev_wchar*)__env->GetStringChars(blendeffectName_j,JNI_FALSE);
				const EVString blendeffectName = blendeffectName_ch;
				__env->ReleaseStringChars(blendeffectName_j, (const jchar *)blendeffectName_ch);
				#endif
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject *pObjectX = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjXXXX;
				bool __values1 = pObjectX->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::isExistName(ds, effectName, typeCode, effectType, blendeffectName);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_addEffectToUserType_1EVString_1ev_1uint32_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring datasourceName_j, jlong srcItemId_j, jstring dstUserTypeCode_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* datasourceName_ch = (const ev_char*)__env->GetStringUTFChars(datasourceName_j,JNI_FALSE);
				const EVString datasourceName = datasourceName_ch;
				__env->ReleaseStringUTFChars(datasourceName_j, (const char *)datasourceName_ch);
				#else
				const ev_wchar* datasourceName_ch = (const ev_wchar*)__env->GetStringChars(datasourceName_j,JNI_FALSE);
				const EVString datasourceName = datasourceName_ch;
				__env->ReleaseStringChars(datasourceName_j, (const jchar *)datasourceName_ch);
				#endif
				ev_uint32 srcItemId = (ev_uint32) srcItemId_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* dstUserTypeCode_ch = (const ev_char*)__env->GetStringUTFChars(dstUserTypeCode_j,JNI_FALSE);
				const EVString dstUserTypeCode = dstUserTypeCode_ch;
				__env->ReleaseStringUTFChars(dstUserTypeCode_j, (const char *)dstUserTypeCode_ch);
				#else
				const ev_wchar* dstUserTypeCode_ch = (const ev_wchar*)__env->GetStringChars(dstUserTypeCode_j,JNI_FALSE);
				const EVString dstUserTypeCode = dstUserTypeCode_ch;
				__env->ReleaseStringChars(dstUserTypeCode_j, (const jchar *)dstUserTypeCode_ch);
				#endif
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject *pObjectX = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCEffectMgrEventObjectProxy))
				{
					pObjectX->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::addEffectToUserType(datasourceName, srcItemId, dstUserTypeCode);
				}
				else
				{
					pObjectX->addEffectToUserType(datasourceName, srcItemId, dstUserTypeCode);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_register_1addEffectToUserType_1EVString_1ev_1uint32_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCEffectMgrEventObjectProxy *pObjectX = (JCEffectMgrEventObjectProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_addEffectToUserType_EVString_ev_uint32_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"addEffectToUserType_EVString_ev_uint32_EVString_callback", "(Ljava/lang/String;JLjava/lang/String;)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_addEffectToUserType_1EVString_1ev_1uint32_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring datasourceName_j, jlong srcItemId_j, jstring dstUserTypeCode_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* datasourceName_ch = (const ev_char*)__env->GetStringUTFChars(datasourceName_j,JNI_FALSE);
				const EVString datasourceName = datasourceName_ch;
				__env->ReleaseStringUTFChars(datasourceName_j, (const char *)datasourceName_ch);
				#else
				const ev_wchar* datasourceName_ch = (const ev_wchar*)__env->GetStringChars(datasourceName_j,JNI_FALSE);
				const EVString datasourceName = datasourceName_ch;
				__env->ReleaseStringChars(datasourceName_j, (const jchar *)datasourceName_ch);
				#endif
				ev_uint32 srcItemId = (ev_uint32) srcItemId_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* dstUserTypeCode_ch = (const ev_char*)__env->GetStringUTFChars(dstUserTypeCode_j,JNI_FALSE);
				const EVString dstUserTypeCode = dstUserTypeCode_ch;
				__env->ReleaseStringUTFChars(dstUserTypeCode_j, (const char *)dstUserTypeCode_ch);
				#else
				const ev_wchar* dstUserTypeCode_ch = (const ev_wchar*)__env->GetStringChars(dstUserTypeCode_j,JNI_FALSE);
				const EVString dstUserTypeCode = dstUserTypeCode_ch;
				__env->ReleaseStringChars(dstUserTypeCode_j, (const jchar *)dstUserTypeCode_ch);
				#endif
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject *pObjectX = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjXXXX;
				pObjectX->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::addEffectToUserType(datasourceName, srcItemId, dstUserTypeCode);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_addEffectToUserType_1IDataSource_1ev_1uint32_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ds_j, jlong srcItemId_j, jstring dstUserTypeCode_j)
			{
				const EarthView::World::Spatial::GeoDataset::IDataSource *ds = (const EarthView::World::Spatial::GeoDataset::IDataSource*) ds_j;
				ev_uint32 srcItemId = (ev_uint32) srcItemId_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* dstUserTypeCode_ch = (const ev_char*)__env->GetStringUTFChars(dstUserTypeCode_j,JNI_FALSE);
				const EVString dstUserTypeCode = dstUserTypeCode_ch;
				__env->ReleaseStringUTFChars(dstUserTypeCode_j, (const char *)dstUserTypeCode_ch);
				#else
				const ev_wchar* dstUserTypeCode_ch = (const ev_wchar*)__env->GetStringChars(dstUserTypeCode_j,JNI_FALSE);
				const EVString dstUserTypeCode = dstUserTypeCode_ch;
				__env->ReleaseStringChars(dstUserTypeCode_j, (const jchar *)dstUserTypeCode_ch);
				#endif
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject *pObjectX = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCEffectMgrEventObjectProxy))
				{
					pObjectX->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::addEffectToUserType(ds, srcItemId, dstUserTypeCode);
				}
				else
				{
					pObjectX->addEffectToUserType(ds, srcItemId, dstUserTypeCode);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_register_1addEffectToUserType_1IDataSource_1ev_1uint32_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCEffectMgrEventObjectProxy *pObjectX = (JCEffectMgrEventObjectProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_addEffectToUserType_IDataSource_ev_uint32_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"addEffectToUserType_IDataSource_ev_uint32_EVString_callback", "(JJLjava/lang/String;)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_addEffectToUserType_1IDataSource_1ev_1uint32_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ds_j, jlong srcItemId_j, jstring dstUserTypeCode_j)
			{
				const EarthView::World::Spatial::GeoDataset::IDataSource *ds = (const EarthView::World::Spatial::GeoDataset::IDataSource*) ds_j;
				ev_uint32 srcItemId = (ev_uint32) srcItemId_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* dstUserTypeCode_ch = (const ev_char*)__env->GetStringUTFChars(dstUserTypeCode_j,JNI_FALSE);
				const EVString dstUserTypeCode = dstUserTypeCode_ch;
				__env->ReleaseStringUTFChars(dstUserTypeCode_j, (const char *)dstUserTypeCode_ch);
				#else
				const ev_wchar* dstUserTypeCode_ch = (const ev_wchar*)__env->GetStringChars(dstUserTypeCode_j,JNI_FALSE);
				const EVString dstUserTypeCode = dstUserTypeCode_ch;
				__env->ReleaseStringChars(dstUserTypeCode_j, (const jchar *)dstUserTypeCode_ch);
				#endif
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject *pObjectX = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjXXXX;
				pObjectX->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::addEffectToUserType(ds, srcItemId, dstUserTypeCode);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_onAddEffectToUserType_1CEffectTreeviewEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
			{
				EarthView::World::Spatial3DProxy::CEffectTreeviewEvent *e = (EarthView::World::Spatial3DProxy::CEffectTreeviewEvent*) e_j;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject *pObjectX = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCEffectMgrEventObjectProxy))
				{
					pObjectX->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::onAddEffectToUserType(e);
				}
				else
				{
					pObjectX->onAddEffectToUserType(e);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_register_1onAddEffectToUserType_1CEffectTreeviewEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCEffectMgrEventObjectProxy *pObjectX = (JCEffectMgrEventObjectProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_onAddEffectToUserType_CEffectTreeviewEvent_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"onAddEffectToUserType_CEffectTreeviewEvent_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_onAddEffectToUserType_1CEffectTreeviewEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
			{
				EarthView::World::Spatial3DProxy::CEffectTreeviewEvent *e = (EarthView::World::Spatial3DProxy::CEffectTreeviewEvent*) e_j;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject *pObjectX = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjXXXX;
				pObjectX->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::onAddEffectToUserType(e);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_addUserTypeToUserType_1EVString_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring datasourceName_j, jstring srcUserTypeCode_j, jstring dstUserTypeCode_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* datasourceName_ch = (const ev_char*)__env->GetStringUTFChars(datasourceName_j,JNI_FALSE);
				const EVString datasourceName = datasourceName_ch;
				__env->ReleaseStringUTFChars(datasourceName_j, (const char *)datasourceName_ch);
				#else
				const ev_wchar* datasourceName_ch = (const ev_wchar*)__env->GetStringChars(datasourceName_j,JNI_FALSE);
				const EVString datasourceName = datasourceName_ch;
				__env->ReleaseStringChars(datasourceName_j, (const jchar *)datasourceName_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* srcUserTypeCode_ch = (const ev_char*)__env->GetStringUTFChars(srcUserTypeCode_j,JNI_FALSE);
				const EVString srcUserTypeCode = srcUserTypeCode_ch;
				__env->ReleaseStringUTFChars(srcUserTypeCode_j, (const char *)srcUserTypeCode_ch);
				#else
				const ev_wchar* srcUserTypeCode_ch = (const ev_wchar*)__env->GetStringChars(srcUserTypeCode_j,JNI_FALSE);
				const EVString srcUserTypeCode = srcUserTypeCode_ch;
				__env->ReleaseStringChars(srcUserTypeCode_j, (const jchar *)srcUserTypeCode_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* dstUserTypeCode_ch = (const ev_char*)__env->GetStringUTFChars(dstUserTypeCode_j,JNI_FALSE);
				const EVString dstUserTypeCode = dstUserTypeCode_ch;
				__env->ReleaseStringUTFChars(dstUserTypeCode_j, (const char *)dstUserTypeCode_ch);
				#else
				const ev_wchar* dstUserTypeCode_ch = (const ev_wchar*)__env->GetStringChars(dstUserTypeCode_j,JNI_FALSE);
				const EVString dstUserTypeCode = dstUserTypeCode_ch;
				__env->ReleaseStringChars(dstUserTypeCode_j, (const jchar *)dstUserTypeCode_ch);
				#endif
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject *pObjectX = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCEffectMgrEventObjectProxy))
				{
					pObjectX->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::addUserTypeToUserType(datasourceName, srcUserTypeCode, dstUserTypeCode);
				}
				else
				{
					pObjectX->addUserTypeToUserType(datasourceName, srcUserTypeCode, dstUserTypeCode);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_register_1addUserTypeToUserType_1EVString_1EVString_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCEffectMgrEventObjectProxy *pObjectX = (JCEffectMgrEventObjectProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_addUserTypeToUserType_EVString_EVString_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"addUserTypeToUserType_EVString_EVString_EVString_callback", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_addUserTypeToUserType_1EVString_1EVString_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring datasourceName_j, jstring srcUserTypeCode_j, jstring dstUserTypeCode_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* datasourceName_ch = (const ev_char*)__env->GetStringUTFChars(datasourceName_j,JNI_FALSE);
				const EVString datasourceName = datasourceName_ch;
				__env->ReleaseStringUTFChars(datasourceName_j, (const char *)datasourceName_ch);
				#else
				const ev_wchar* datasourceName_ch = (const ev_wchar*)__env->GetStringChars(datasourceName_j,JNI_FALSE);
				const EVString datasourceName = datasourceName_ch;
				__env->ReleaseStringChars(datasourceName_j, (const jchar *)datasourceName_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* srcUserTypeCode_ch = (const ev_char*)__env->GetStringUTFChars(srcUserTypeCode_j,JNI_FALSE);
				const EVString srcUserTypeCode = srcUserTypeCode_ch;
				__env->ReleaseStringUTFChars(srcUserTypeCode_j, (const char *)srcUserTypeCode_ch);
				#else
				const ev_wchar* srcUserTypeCode_ch = (const ev_wchar*)__env->GetStringChars(srcUserTypeCode_j,JNI_FALSE);
				const EVString srcUserTypeCode = srcUserTypeCode_ch;
				__env->ReleaseStringChars(srcUserTypeCode_j, (const jchar *)srcUserTypeCode_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* dstUserTypeCode_ch = (const ev_char*)__env->GetStringUTFChars(dstUserTypeCode_j,JNI_FALSE);
				const EVString dstUserTypeCode = dstUserTypeCode_ch;
				__env->ReleaseStringUTFChars(dstUserTypeCode_j, (const char *)dstUserTypeCode_ch);
				#else
				const ev_wchar* dstUserTypeCode_ch = (const ev_wchar*)__env->GetStringChars(dstUserTypeCode_j,JNI_FALSE);
				const EVString dstUserTypeCode = dstUserTypeCode_ch;
				__env->ReleaseStringChars(dstUserTypeCode_j, (const jchar *)dstUserTypeCode_ch);
				#endif
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject *pObjectX = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjXXXX;
				pObjectX->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::addUserTypeToUserType(datasourceName, srcUserTypeCode, dstUserTypeCode);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_addUserTypeToUserType_1IDataSource_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ds_j, jstring srcUserTypeCode_j, jstring dstUserTypeCode_j)
			{
				const EarthView::World::Spatial::GeoDataset::IDataSource *ds = (const EarthView::World::Spatial::GeoDataset::IDataSource*) ds_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* srcUserTypeCode_ch = (const ev_char*)__env->GetStringUTFChars(srcUserTypeCode_j,JNI_FALSE);
				const EVString srcUserTypeCode = srcUserTypeCode_ch;
				__env->ReleaseStringUTFChars(srcUserTypeCode_j, (const char *)srcUserTypeCode_ch);
				#else
				const ev_wchar* srcUserTypeCode_ch = (const ev_wchar*)__env->GetStringChars(srcUserTypeCode_j,JNI_FALSE);
				const EVString srcUserTypeCode = srcUserTypeCode_ch;
				__env->ReleaseStringChars(srcUserTypeCode_j, (const jchar *)srcUserTypeCode_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* dstUserTypeCode_ch = (const ev_char*)__env->GetStringUTFChars(dstUserTypeCode_j,JNI_FALSE);
				const EVString dstUserTypeCode = dstUserTypeCode_ch;
				__env->ReleaseStringUTFChars(dstUserTypeCode_j, (const char *)dstUserTypeCode_ch);
				#else
				const ev_wchar* dstUserTypeCode_ch = (const ev_wchar*)__env->GetStringChars(dstUserTypeCode_j,JNI_FALSE);
				const EVString dstUserTypeCode = dstUserTypeCode_ch;
				__env->ReleaseStringChars(dstUserTypeCode_j, (const jchar *)dstUserTypeCode_ch);
				#endif
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject *pObjectX = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCEffectMgrEventObjectProxy))
				{
					pObjectX->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::addUserTypeToUserType(ds, srcUserTypeCode, dstUserTypeCode);
				}
				else
				{
					pObjectX->addUserTypeToUserType(ds, srcUserTypeCode, dstUserTypeCode);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_register_1addUserTypeToUserType_1IDataSource_1EVString_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCEffectMgrEventObjectProxy *pObjectX = (JCEffectMgrEventObjectProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_addUserTypeToUserType_IDataSource_EVString_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"addUserTypeToUserType_IDataSource_EVString_EVString_callback", "(JLjava/lang/String;Ljava/lang/String;)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_addUserTypeToUserType_1IDataSource_1EVString_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ds_j, jstring srcUserTypeCode_j, jstring dstUserTypeCode_j)
			{
				const EarthView::World::Spatial::GeoDataset::IDataSource *ds = (const EarthView::World::Spatial::GeoDataset::IDataSource*) ds_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* srcUserTypeCode_ch = (const ev_char*)__env->GetStringUTFChars(srcUserTypeCode_j,JNI_FALSE);
				const EVString srcUserTypeCode = srcUserTypeCode_ch;
				__env->ReleaseStringUTFChars(srcUserTypeCode_j, (const char *)srcUserTypeCode_ch);
				#else
				const ev_wchar* srcUserTypeCode_ch = (const ev_wchar*)__env->GetStringChars(srcUserTypeCode_j,JNI_FALSE);
				const EVString srcUserTypeCode = srcUserTypeCode_ch;
				__env->ReleaseStringChars(srcUserTypeCode_j, (const jchar *)srcUserTypeCode_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* dstUserTypeCode_ch = (const ev_char*)__env->GetStringUTFChars(dstUserTypeCode_j,JNI_FALSE);
				const EVString dstUserTypeCode = dstUserTypeCode_ch;
				__env->ReleaseStringUTFChars(dstUserTypeCode_j, (const char *)dstUserTypeCode_ch);
				#else
				const ev_wchar* dstUserTypeCode_ch = (const ev_wchar*)__env->GetStringChars(dstUserTypeCode_j,JNI_FALSE);
				const EVString dstUserTypeCode = dstUserTypeCode_ch;
				__env->ReleaseStringChars(dstUserTypeCode_j, (const jchar *)dstUserTypeCode_ch);
				#endif
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject *pObjectX = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjXXXX;
				pObjectX->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::addUserTypeToUserType(ds, srcUserTypeCode, dstUserTypeCode);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_onAddUserTypeToUserType_1CEffectTreeviewEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
			{
				EarthView::World::Spatial3DProxy::CEffectTreeviewEvent *e = (EarthView::World::Spatial3DProxy::CEffectTreeviewEvent*) e_j;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject *pObjectX = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCEffectMgrEventObjectProxy))
				{
					pObjectX->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::onAddUserTypeToUserType(e);
				}
				else
				{
					pObjectX->onAddUserTypeToUserType(e);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_register_1onAddUserTypeToUserType_1CEffectTreeviewEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCEffectMgrEventObjectProxy *pObjectX = (JCEffectMgrEventObjectProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_onAddUserTypeToUserType_CEffectTreeviewEvent_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"onAddUserTypeToUserType_CEffectTreeviewEvent_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_onAddUserTypeToUserType_1CEffectTreeviewEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
			{
				EarthView::World::Spatial3DProxy::CEffectTreeviewEvent *e = (EarthView::World::Spatial3DProxy::CEffectTreeviewEvent*) e_j;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject *pObjectX = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjXXXX;
				pObjectX->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::onAddUserTypeToUserType(e);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_saveEffect_1EVString_1CEffect(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring datasourceName_j, jlong effect_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* datasourceName_ch = (const ev_char*)__env->GetStringUTFChars(datasourceName_j,JNI_FALSE);
				const EVString datasourceName = datasourceName_ch;
				__env->ReleaseStringUTFChars(datasourceName_j, (const char *)datasourceName_ch);
				#else
				const ev_wchar* datasourceName_ch = (const ev_wchar*)__env->GetStringChars(datasourceName_j,JNI_FALSE);
				const EVString datasourceName = datasourceName_ch;
				__env->ReleaseStringChars(datasourceName_j, (const jchar *)datasourceName_ch);
				#endif
				EarthView::World::Spatial3D::EffectManager::CEffect *effect = (EarthView::World::Spatial3D::EffectManager::CEffect*) effect_j;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject *pObjectX = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCEffectMgrEventObjectProxy))
				{
					pObjectX->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::saveEffect(datasourceName, effect);
				}
				else
				{
					pObjectX->saveEffect(datasourceName, effect);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_register_1saveEffect_1EVString_1CEffect(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCEffectMgrEventObjectProxy *pObjectX = (JCEffectMgrEventObjectProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_saveEffect_EVString_CEffect_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"saveEffect_EVString_CEffect_callback", "(Ljava/lang/String;J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_saveEffect_1EVString_1CEffect_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring datasourceName_j, jlong effect_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* datasourceName_ch = (const ev_char*)__env->GetStringUTFChars(datasourceName_j,JNI_FALSE);
				const EVString datasourceName = datasourceName_ch;
				__env->ReleaseStringUTFChars(datasourceName_j, (const char *)datasourceName_ch);
				#else
				const ev_wchar* datasourceName_ch = (const ev_wchar*)__env->GetStringChars(datasourceName_j,JNI_FALSE);
				const EVString datasourceName = datasourceName_ch;
				__env->ReleaseStringChars(datasourceName_j, (const jchar *)datasourceName_ch);
				#endif
				EarthView::World::Spatial3D::EffectManager::CEffect *effect = (EarthView::World::Spatial3D::EffectManager::CEffect*) effect_j;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject *pObjectX = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjXXXX;
				pObjectX->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::saveEffect(datasourceName, effect);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_saveEffect_1IDataSource_1CEffect(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ds_j, jlong effect_j)
			{
				const EarthView::World::Spatial::GeoDataset::IDataSource *ds = (const EarthView::World::Spatial::GeoDataset::IDataSource*) ds_j;
				EarthView::World::Spatial3D::EffectManager::CEffect *effect = (EarthView::World::Spatial3D::EffectManager::CEffect*) effect_j;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject *pObjectX = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCEffectMgrEventObjectProxy))
				{
					pObjectX->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::saveEffect(ds, effect);
				}
				else
				{
					pObjectX->saveEffect(ds, effect);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_register_1saveEffect_1IDataSource_1CEffect(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCEffectMgrEventObjectProxy *pObjectX = (JCEffectMgrEventObjectProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_saveEffect_IDataSource_CEffect_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"saveEffect_IDataSource_CEffect_callback", "(JJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_saveEffect_1IDataSource_1CEffect_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ds_j, jlong effect_j)
			{
				const EarthView::World::Spatial::GeoDataset::IDataSource *ds = (const EarthView::World::Spatial::GeoDataset::IDataSource*) ds_j;
				EarthView::World::Spatial3D::EffectManager::CEffect *effect = (EarthView::World::Spatial3D::EffectManager::CEffect*) effect_j;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject *pObjectX = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjXXXX;
				pObjectX->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::saveEffect(ds, effect);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_onSaveEffect_1CEffectTreeviewEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
			{
				EarthView::World::Spatial3DProxy::CEffectTreeviewEvent *e = (EarthView::World::Spatial3DProxy::CEffectTreeviewEvent*) e_j;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject *pObjectX = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCEffectMgrEventObjectProxy))
				{
					pObjectX->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::onSaveEffect(e);
				}
				else
				{
					pObjectX->onSaveEffect(e);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_register_1onSaveEffect_1CEffectTreeviewEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCEffectMgrEventObjectProxy *pObjectX = (JCEffectMgrEventObjectProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_onSaveEffect_CEffectTreeviewEvent_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"onSaveEffect_CEffectTreeviewEvent_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_onSaveEffect_1CEffectTreeviewEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
			{
				EarthView::World::Spatial3DProxy::CEffectTreeviewEvent *e = (EarthView::World::Spatial3DProxy::CEffectTreeviewEvent*) e_j;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject *pObjectX = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjXXXX;
				pObjectX->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::onSaveEffect(e);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_saveEffectMaterial_1IDataSource_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ds_j, jlong effectID_j)
			{
				const EarthView::World::Spatial::GeoDataset::IDataSource *ds = (const EarthView::World::Spatial::GeoDataset::IDataSource*) ds_j;
				ev_uint32 effectID = (ev_uint32) effectID_j;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject *pObjectX = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCEffectMgrEventObjectProxy))
				{
					pObjectX->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::saveEffectMaterial(ds, effectID);
				}
				else
				{
					pObjectX->saveEffectMaterial(ds, effectID);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_register_1saveEffectMaterial_1IDataSource_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCEffectMgrEventObjectProxy *pObjectX = (JCEffectMgrEventObjectProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_saveEffectMaterial_IDataSource_ev_uint32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"saveEffectMaterial_IDataSource_ev_uint32_callback", "(JJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_saveEffectMaterial_1IDataSource_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ds_j, jlong effectID_j)
			{
				const EarthView::World::Spatial::GeoDataset::IDataSource *ds = (const EarthView::World::Spatial::GeoDataset::IDataSource*) ds_j;
				ev_uint32 effectID = (ev_uint32) effectID_j;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject *pObjectX = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjXXXX;
				pObjectX->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::saveEffectMaterial(ds, effectID);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_saveEffectMaterial_1EVString_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring datasourceName_j, jlong effectID_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* datasourceName_ch = (const ev_char*)__env->GetStringUTFChars(datasourceName_j,JNI_FALSE);
				const EVString datasourceName = datasourceName_ch;
				__env->ReleaseStringUTFChars(datasourceName_j, (const char *)datasourceName_ch);
				#else
				const ev_wchar* datasourceName_ch = (const ev_wchar*)__env->GetStringChars(datasourceName_j,JNI_FALSE);
				const EVString datasourceName = datasourceName_ch;
				__env->ReleaseStringChars(datasourceName_j, (const jchar *)datasourceName_ch);
				#endif
				ev_uint32 effectID = (ev_uint32) effectID_j;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject *pObjectX = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCEffectMgrEventObjectProxy))
				{
					pObjectX->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::saveEffectMaterial(datasourceName, effectID);
				}
				else
				{
					pObjectX->saveEffectMaterial(datasourceName, effectID);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_register_1saveEffectMaterial_1EVString_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCEffectMgrEventObjectProxy *pObjectX = (JCEffectMgrEventObjectProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_saveEffectMaterial_EVString_ev_uint32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"saveEffectMaterial_EVString_ev_uint32_callback", "(Ljava/lang/String;J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_saveEffectMaterial_1EVString_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring datasourceName_j, jlong effectID_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* datasourceName_ch = (const ev_char*)__env->GetStringUTFChars(datasourceName_j,JNI_FALSE);
				const EVString datasourceName = datasourceName_ch;
				__env->ReleaseStringUTFChars(datasourceName_j, (const char *)datasourceName_ch);
				#else
				const ev_wchar* datasourceName_ch = (const ev_wchar*)__env->GetStringChars(datasourceName_j,JNI_FALSE);
				const EVString datasourceName = datasourceName_ch;
				__env->ReleaseStringChars(datasourceName_j, (const jchar *)datasourceName_ch);
				#endif
				ev_uint32 effectID = (ev_uint32) effectID_j;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject *pObjectX = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjXXXX;
				pObjectX->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::saveEffectMaterial(datasourceName, effectID);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_onSaveEffectMaterial_1CEffectTreeviewEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
			{
				EarthView::World::Spatial3DProxy::CEffectTreeviewEvent *e = (EarthView::World::Spatial3DProxy::CEffectTreeviewEvent*) e_j;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject *pObjectX = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCEffectMgrEventObjectProxy))
				{
					pObjectX->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::onSaveEffectMaterial(e);
				}
				else
				{
					pObjectX->onSaveEffectMaterial(e);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_register_1onSaveEffectMaterial_1CEffectTreeviewEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCEffectMgrEventObjectProxy *pObjectX = (JCEffectMgrEventObjectProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_onSaveEffectMaterial_CEffectTreeviewEvent_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"onSaveEffectMaterial_CEffectTreeviewEvent_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_onSaveEffectMaterial_1CEffectTreeviewEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
			{
				EarthView::World::Spatial3DProxy::CEffectTreeviewEvent *e = (EarthView::World::Spatial3DProxy::CEffectTreeviewEvent*) e_j;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject *pObjectX = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjXXXX;
				pObjectX->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::onSaveEffectMaterial(e);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_loadTree_1EVString_1CEffectUserTypeTree(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring datasourceName_j, jlong tree_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* datasourceName_ch = (const ev_char*)__env->GetStringUTFChars(datasourceName_j,JNI_FALSE);
				const EVString datasourceName = datasourceName_ch;
				__env->ReleaseStringUTFChars(datasourceName_j, (const char *)datasourceName_ch);
				#else
				const ev_wchar* datasourceName_ch = (const ev_wchar*)__env->GetStringChars(datasourceName_j,JNI_FALSE);
				const EVString datasourceName = datasourceName_ch;
				__env->ReleaseStringChars(datasourceName_j, (const jchar *)datasourceName_ch);
				#endif
				EarthView::World::Spatial3D::Dataset::CEffectUserTypeTree &tree = *(EarthView::World::Spatial3D::Dataset::CEffectUserTypeTree*) tree_j;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject *pObjectX = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCEffectMgrEventObjectProxy))
				{
					pObjectX->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::loadTree(datasourceName, tree);
				}
				else
				{
					pObjectX->loadTree(datasourceName, tree);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_register_1loadTree_1EVString_1CEffectUserTypeTree(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCEffectMgrEventObjectProxy *pObjectX = (JCEffectMgrEventObjectProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_loadTree_EVString_CEffectUserTypeTree_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"loadTree_EVString_CEffectUserTypeTree_callback", "(Ljava/lang/String;J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_loadTree_1EVString_1CEffectUserTypeTree_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring datasourceName_j, jlong tree_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* datasourceName_ch = (const ev_char*)__env->GetStringUTFChars(datasourceName_j,JNI_FALSE);
				const EVString datasourceName = datasourceName_ch;
				__env->ReleaseStringUTFChars(datasourceName_j, (const char *)datasourceName_ch);
				#else
				const ev_wchar* datasourceName_ch = (const ev_wchar*)__env->GetStringChars(datasourceName_j,JNI_FALSE);
				const EVString datasourceName = datasourceName_ch;
				__env->ReleaseStringChars(datasourceName_j, (const jchar *)datasourceName_ch);
				#endif
				EarthView::World::Spatial3D::Dataset::CEffectUserTypeTree &tree = *(EarthView::World::Spatial3D::Dataset::CEffectUserTypeTree*) tree_j;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject *pObjectX = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjXXXX;
				pObjectX->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::loadTree(datasourceName, tree);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_loadTree_1IDataSource_1CEffectUserTypeTree(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ds_j, jlong tree_j)
			{
				const EarthView::World::Spatial::GeoDataset::IDataSource *ds = (const EarthView::World::Spatial::GeoDataset::IDataSource*) ds_j;
				EarthView::World::Spatial3D::Dataset::CEffectUserTypeTree &tree = *(EarthView::World::Spatial3D::Dataset::CEffectUserTypeTree*) tree_j;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject *pObjectX = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCEffectMgrEventObjectProxy))
				{
					pObjectX->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::loadTree(ds, tree);
				}
				else
				{
					pObjectX->loadTree(ds, tree);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_register_1loadTree_1IDataSource_1CEffectUserTypeTree(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCEffectMgrEventObjectProxy *pObjectX = (JCEffectMgrEventObjectProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_loadTree_IDataSource_CEffectUserTypeTree_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"loadTree_IDataSource_CEffectUserTypeTree_callback", "(JJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_loadTree_1IDataSource_1CEffectUserTypeTree_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ds_j, jlong tree_j)
			{
				const EarthView::World::Spatial::GeoDataset::IDataSource *ds = (const EarthView::World::Spatial::GeoDataset::IDataSource*) ds_j;
				EarthView::World::Spatial3D::Dataset::CEffectUserTypeTree &tree = *(EarthView::World::Spatial3D::Dataset::CEffectUserTypeTree*) tree_j;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject *pObjectX = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjXXXX;
				pObjectX->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::loadTree(ds, tree);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_getBlendEffectInfos_1EVString_1ev_1uint32_1CEffectInfoVector(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring datasourceName_j, jlong effectId_j, jlong vec_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* datasourceName_ch = (const ev_char*)__env->GetStringUTFChars(datasourceName_j,JNI_FALSE);
				const EVString datasourceName = datasourceName_ch;
				__env->ReleaseStringUTFChars(datasourceName_j, (const char *)datasourceName_ch);
				#else
				const ev_wchar* datasourceName_ch = (const ev_wchar*)__env->GetStringChars(datasourceName_j,JNI_FALSE);
				const EVString datasourceName = datasourceName_ch;
				__env->ReleaseStringChars(datasourceName_j, (const jchar *)datasourceName_ch);
				#endif
				ev_uint32 effectId = (ev_uint32) effectId_j;
				EarthView::World::Spatial3D::Dataset::CEffectInfoVector &vec = *(EarthView::World::Spatial3D::Dataset::CEffectInfoVector*) vec_j;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject *pObjectX = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCEffectMgrEventObjectProxy))
				{
					pObjectX->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::getBlendEffectInfos(datasourceName, effectId, vec);
				}
				else
				{
					pObjectX->getBlendEffectInfos(datasourceName, effectId, vec);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_register_1getBlendEffectInfos_1EVString_1ev_1uint32_1CEffectInfoVector(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCEffectMgrEventObjectProxy *pObjectX = (JCEffectMgrEventObjectProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getBlendEffectInfos_EVString_ev_uint32_CEffectInfoVector_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getBlendEffectInfos_EVString_ev_uint32_CEffectInfoVector_callback", "(Ljava/lang/String;JJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_getBlendEffectInfos_1EVString_1ev_1uint32_1CEffectInfoVector_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring datasourceName_j, jlong effectId_j, jlong vec_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* datasourceName_ch = (const ev_char*)__env->GetStringUTFChars(datasourceName_j,JNI_FALSE);
				const EVString datasourceName = datasourceName_ch;
				__env->ReleaseStringUTFChars(datasourceName_j, (const char *)datasourceName_ch);
				#else
				const ev_wchar* datasourceName_ch = (const ev_wchar*)__env->GetStringChars(datasourceName_j,JNI_FALSE);
				const EVString datasourceName = datasourceName_ch;
				__env->ReleaseStringChars(datasourceName_j, (const jchar *)datasourceName_ch);
				#endif
				ev_uint32 effectId = (ev_uint32) effectId_j;
				EarthView::World::Spatial3D::Dataset::CEffectInfoVector &vec = *(EarthView::World::Spatial3D::Dataset::CEffectInfoVector*) vec_j;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject *pObjectX = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjXXXX;
				pObjectX->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::getBlendEffectInfos(datasourceName, effectId, vec);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_getBlendEffectInfos_1IDataSource_1ev_1uint32_1CEffectInfoVector(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ds_j, jlong effectId_j, jlong vec_j)
			{
				const EarthView::World::Spatial::GeoDataset::IDataSource *ds = (const EarthView::World::Spatial::GeoDataset::IDataSource*) ds_j;
				ev_uint32 effectId = (ev_uint32) effectId_j;
				EarthView::World::Spatial3D::Dataset::CEffectInfoVector &vec = *(EarthView::World::Spatial3D::Dataset::CEffectInfoVector*) vec_j;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject *pObjectX = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCEffectMgrEventObjectProxy))
				{
					pObjectX->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::getBlendEffectInfos(ds, effectId, vec);
				}
				else
				{
					pObjectX->getBlendEffectInfos(ds, effectId, vec);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_register_1getBlendEffectInfos_1IDataSource_1ev_1uint32_1CEffectInfoVector(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCEffectMgrEventObjectProxy *pObjectX = (JCEffectMgrEventObjectProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getBlendEffectInfos_IDataSource_ev_uint32_CEffectInfoVector_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getBlendEffectInfos_IDataSource_ev_uint32_CEffectInfoVector_callback", "(JJJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_getBlendEffectInfos_1IDataSource_1ev_1uint32_1CEffectInfoVector_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ds_j, jlong effectId_j, jlong vec_j)
			{
				const EarthView::World::Spatial::GeoDataset::IDataSource *ds = (const EarthView::World::Spatial::GeoDataset::IDataSource*) ds_j;
				ev_uint32 effectId = (ev_uint32) effectId_j;
				EarthView::World::Spatial3D::Dataset::CEffectInfoVector &vec = *(EarthView::World::Spatial3D::Dataset::CEffectInfoVector*) vec_j;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject *pObjectX = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjXXXX;
				pObjectX->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::getBlendEffectInfos(ds, effectId, vec);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_destoryScene_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject *pObjectX = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjXXXX;
				pObjectX->destoryScene();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_windowResized_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject *pObjectX = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjXXXX;
				pObjectX->windowResized();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_mouseButtonPress_1int_1int_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint x_j, jint y_j, jlong button_j)
			{
				int x = (int) x_j;
				int y = (int) y_j;
				ev_uint32 button = (ev_uint32) button_j;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject *pObjectX = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjXXXX;
				pObjectX->mouseButtonPress(x, y, button);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_mouseDoubleButtonPress_1int_1int_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint x_j, jint y_j, jlong button_j)
			{
				int x = (int) x_j;
				int y = (int) y_j;
				ev_uint32 button = (ev_uint32) button_j;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject *pObjectX = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjXXXX;
				pObjectX->mouseDoubleButtonPress(x, y, button);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_mouseButtonRelease_1int_1int_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint x_j, jint y_j, jlong button_j)
			{
				int x = (int) x_j;
				int y = (int) y_j;
				ev_uint32 button = (ev_uint32) button_j;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject *pObjectX = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjXXXX;
				pObjectX->mouseButtonRelease(x, y, button);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_mouseMove_1int_1int(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint x_j, jint y_j)
			{
				int x = (int) x_j;
				int y = (int) y_j;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject *pObjectX = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjXXXX;
				pObjectX->mouseMove(x, y);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_mouseWheel_1float(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jfloat delta_j)
			{
				float delta = (float) delta_j;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject *pObjectX = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjXXXX;
				pObjectX->mouseWheel(delta);
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_findDiscontinuousID_1CEffectDataSource_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong effectDatasource_j, jstring userTypeCode_j)
			{
				EarthView::World::Spatial3D::Dataset::CEffectDataSource *effectDatasource = (EarthView::World::Spatial3D::Dataset::CEffectDataSource*) effectDatasource_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* userTypeCode_ch = (const ev_char*)__env->GetStringUTFChars(userTypeCode_j,JNI_FALSE);
				const EVString userTypeCode = userTypeCode_ch;
				__env->ReleaseStringUTFChars(userTypeCode_j, (const char *)userTypeCode_ch);
				#else
				const ev_wchar* userTypeCode_ch = (const ev_wchar*)__env->GetStringChars(userTypeCode_j,JNI_FALSE);
				const EVString userTypeCode = userTypeCode_ch;
				__env->ReleaseStringChars(userTypeCode_j, (const jchar *)userTypeCode_ch);
				#endif
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject *pObjectX = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjXXXX;
				EVString __values1 = pObjectX->findDiscontinuousID(effectDatasource, userTypeCode);
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_onEvent_1CEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
			{
				EarthView::World::Core::CEvent *e = (EarthView::World::Core::CEvent*) e_j;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject *pObjectX = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCEffectMgrEventObjectProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::onEvent(e);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->onEvent(e);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_register_1onEvent_1CEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCEffectMgrEventObjectProxy *pObjectX = (JCEffectMgrEventObjectProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_onEvent_CEvent_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"onEvent_CEvent_callback", "(J)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_onEvent_1CEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
			{
				EarthView::World::Core::CEvent *e = (EarthView::World::Core::CEvent*) e_j;
				EarthView::World::Spatial3DProxy::CEffectMgrEventObject *pObjectX = (EarthView::World::Spatial3DProxy::CEffectMgrEventObject*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Spatial3DProxy::CEffectMgrEventObject::onEvent(e);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_register_1onTimerEvent_1CTimerEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCEffectMgrEventObjectProxy *pObjectX = (JCEffectMgrEventObjectProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_onTimerEvent_CTimerEvent_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"onTimerEvent_CTimerEvent_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectMgrEventObject_register_1onCustomEvent_1CEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCEffectMgrEventObjectProxy *pObjectX = (JCEffectMgrEventObjectProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_onCustomEvent_CEvent_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"onCustomEvent_CEvent_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
		}
	}
}
