/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "layoutcontrol/layoutoperationmanager.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Layout
		{
			namespace Controls
			{
				class JILayoutIndexObserverProxy : public EarthView::World::Layout::Controls::ILayoutIndexObserver
				{
				 private:
					EarthView::World::Core::ev_string m_onIndexChanged_void_callback;
				public:
					JILayoutIndexObserverProxy(EarthView::World::Core::CNameValuePairList *pList) : ILayoutIndexObserver(pList)
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
					void register_onIndexChanged_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onIndexChanged_void_callback = __method;
					}
					virtual void onIndexChanged()
					{
						if (this->_gRef != NULL && this->m_onIndexChanged_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("onIndexChanged_void_callback");
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
							return this->ILayoutIndexObserver::onIndexChanged();
						}
					}
				};
				REGISTER_FACTORY_CLASS(JILayoutIndexObserverProxy);
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_layout_controls_Ilayoutindexobserver_onIndexChanged_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Layout::Controls::ILayoutIndexObserver *pObjectX = (EarthView::World::Layout::Controls::ILayoutIndexObserver*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JILayoutIndexObserverProxy))
					{
						pObjectX->EarthView::World::Layout::Controls::ILayoutIndexObserver::onIndexChanged();
					}
					else
					{
						pObjectX->onIndexChanged();
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_layout_controls_Ilayoutindexobserver_register_1onIndexChanged_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JILayoutIndexObserverProxy *pObjectX = (JILayoutIndexObserverProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onIndexChanged_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onIndexChanged_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_layout_controls_Ilayoutindexobserver_onIndexChanged_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Layout::Controls::ILayoutIndexObserver *pObjectX = (EarthView::World::Layout::Controls::ILayoutIndexObserver*) pObjXXXX;
					pObjectX->EarthView::World::Layout::Controls::ILayoutIndexObserver::onIndexChanged();
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_layout_controls_LayoutOperationManager_canRedo_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Layout::Controls::CLayoutOperationManager *pObjectX = (EarthView::World::Layout::Controls::CLayoutOperationManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->canRedo();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_layout_controls_LayoutOperationManager_canUndo_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Layout::Controls::CLayoutOperationManager *pObjectX = (EarthView::World::Layout::Controls::CLayoutOperationManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->canUndo();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_layout_controls_LayoutOperationManager_getCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Layout::Controls::CLayoutOperationManager *pObjectX = (EarthView::World::Layout::Controls::CLayoutOperationManager*) pObjXXXX;
					ev_int32 __values1 = pObjectX->getCount();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_layout_controls_LayoutOperationManager_getOperation_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					EarthView::World::Layout::Controls::CLayoutOperationManager *pObjectX = (EarthView::World::Layout::Controls::CLayoutOperationManager*) pObjXXXX;
					EarthView::World::Layout::Controls::CLayoutOperation* __values1 = pObjectX->getOperation(index);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_layout_controls_LayoutOperationManager_getUndoLimit_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Layout::Controls::CLayoutOperationManager *pObjectX = (EarthView::World::Layout::Controls::CLayoutOperationManager*) pObjXXXX;
					ev_int32 __values1 = pObjectX->getUndoLimit();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_layout_controls_LayoutOperationManager_setUndoLimit_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong limit_j)
				{
					ev_uint32 limit = (ev_uint32) limit_j;
					EarthView::World::Layout::Controls::CLayoutOperationManager *pObjectX = (EarthView::World::Layout::Controls::CLayoutOperationManager*) pObjXXXX;
					pObjectX->setUndoLimit(limit);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_layout_controls_LayoutOperationManager_redo_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Layout::Controls::CLayoutOperationManager *pObjectX = (EarthView::World::Layout::Controls::CLayoutOperationManager*) pObjXXXX;
					pObjectX->redo();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_layout_controls_LayoutOperationManager_undo_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Layout::Controls::CLayoutOperationManager *pObjectX = (EarthView::World::Layout::Controls::CLayoutOperationManager*) pObjXXXX;
					pObjectX->undo();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_layout_controls_LayoutOperationManager_beginMacro_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Layout::Controls::CLayoutOperationManager *pObjectX = (EarthView::World::Layout::Controls::CLayoutOperationManager*) pObjXXXX;
					pObjectX->beginMacro();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_layout_controls_LayoutOperationManager_endMacro_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Layout::Controls::CLayoutOperationManager *pObjectX = (EarthView::World::Layout::Controls::CLayoutOperationManager*) pObjXXXX;
					pObjectX->endMacro();
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_layout_controls_LayoutOperationManager_isInMacro_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Layout::Controls::CLayoutOperationManager *pObjectX = (EarthView::World::Layout::Controls::CLayoutOperationManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->isInMacro();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_layout_controls_LayoutOperationManager_abortMacro_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Layout::Controls::CLayoutOperationManager *pObjectX = (EarthView::World::Layout::Controls::CLayoutOperationManager*) pObjXXXX;
					pObjectX->abortMacro();
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_layout_controls_LayoutOperationManager_getCurrentIndex_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Layout::Controls::CLayoutOperationManager *pObjectX = (EarthView::World::Layout::Controls::CLayoutOperationManager*) pObjXXXX;
					ev_int32 __values1 = pObjectX->getCurrentIndex();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_layout_controls_LayoutOperationManager_push_1CLayoutOperation(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_operation_j)
				{
					EarthView::World::Layout::Controls::CLayoutOperation *ref_operation = (EarthView::World::Layout::Controls::CLayoutOperation*) ref_operation_j;
					EarthView::World::Layout::Controls::CLayoutOperationManager *pObjectX = (EarthView::World::Layout::Controls::CLayoutOperationManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->push(ref_operation);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_layout_controls_LayoutOperationManager_isPushBlocked_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Layout::Controls::CLayoutOperationManager *pObjectX = (EarthView::World::Layout::Controls::CLayoutOperationManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->isPushBlocked();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_layout_controls_LayoutOperationManager_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Layout::Controls::CLayoutOperationManager *pObjectX = (EarthView::World::Layout::Controls::CLayoutOperationManager*) pObjXXXX;
					pObjectX->clear();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_layout_controls_LayoutOperationManager_registerObserver_1ILayoutIndexObserver(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_observer_j)
				{
					EarthView::World::Layout::Controls::ILayoutIndexObserver *ref_observer = (EarthView::World::Layout::Controls::ILayoutIndexObserver*) ref_observer_j;
					EarthView::World::Layout::Controls::CLayoutOperationManager *pObjectX = (EarthView::World::Layout::Controls::CLayoutOperationManager*) pObjXXXX;
					pObjectX->registerObserver(ref_observer);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_layout_controls_LayoutOperationManager_unregisterObserver_1ILayoutIndexObserver(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong observer_j)
				{
					EarthView::World::Layout::Controls::ILayoutIndexObserver *observer = (EarthView::World::Layout::Controls::ILayoutIndexObserver*) observer_j;
					EarthView::World::Layout::Controls::CLayoutOperationManager *pObjectX = (EarthView::World::Layout::Controls::CLayoutOperationManager*) pObjXXXX;
					pObjectX->unregisterObserver(observer);
				}
			}
		}
	}
}
