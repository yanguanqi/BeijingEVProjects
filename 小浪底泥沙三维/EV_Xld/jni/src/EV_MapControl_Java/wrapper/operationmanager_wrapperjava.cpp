/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "mapcontrol/operationmanager.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Controls
			{
				class JIIndexObserverProxy : public EarthView::World::Spatial2D::Controls::IIndexObserver
				{
				 private:
					EarthView::World::Core::ev_string m_onIndexChanged_void_callback;
				public:
					JIIndexObserverProxy(EarthView::World::Core::CNameValuePairList *pList) : IIndexObserver(pList)
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
							return this->IIndexObserver::onIndexChanged();
						}
					}
				};
				REGISTER_FACTORY_CLASS(JIIndexObserverProxy);
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_Iindexobserver_onIndexChanged_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Controls::IIndexObserver *pObjectX = (EarthView::World::Spatial2D::Controls::IIndexObserver*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIIndexObserverProxy))
					{
						pObjectX->EarthView::World::Spatial2D::Controls::IIndexObserver::onIndexChanged();
					}
					else
					{
						pObjectX->onIndexChanged();
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_Iindexobserver_register_1onIndexChanged_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIIndexObserverProxy *pObjectX = (JIIndexObserverProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_Iindexobserver_onIndexChanged_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Controls::IIndexObserver *pObjectX = (EarthView::World::Spatial2D::Controls::IIndexObserver*) pObjXXXX;
					pObjectX->EarthView::World::Spatial2D::Controls::IIndexObserver::onIndexChanged();
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_controls_OperationManager_canRedo_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::COperationManager *pObjectX = (EarthView::World::Spatial2D::Controls::COperationManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->canRedo();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_controls_OperationManager_canUndo_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::COperationManager *pObjectX = (EarthView::World::Spatial2D::Controls::COperationManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->canUndo();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_controls_OperationManager_getCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::COperationManager *pObjectX = (EarthView::World::Spatial2D::Controls::COperationManager*) pObjXXXX;
					ev_int32 __values1 = pObjectX->getCount();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_controls_OperationManager_getOperation_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					EarthView::World::Spatial2D::Controls::COperationManager *pObjectX = (EarthView::World::Spatial2D::Controls::COperationManager*) pObjXXXX;
					EarthView::World::Spatial2D::Controls::COperation* __values1 = pObjectX->getOperation(index);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_controls_OperationManager_getUndoLimit_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::COperationManager *pObjectX = (EarthView::World::Spatial2D::Controls::COperationManager*) pObjXXXX;
					ev_int32 __values1 = pObjectX->getUndoLimit();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_OperationManager_setUndoLimit_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong limit_j)
				{
					ev_uint32 limit = (ev_uint32) limit_j;
					EarthView::World::Spatial2D::Controls::COperationManager *pObjectX = (EarthView::World::Spatial2D::Controls::COperationManager*) pObjXXXX;
					pObjectX->setUndoLimit(limit);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_OperationManager_redo_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Controls::COperationManager *pObjectX = (EarthView::World::Spatial2D::Controls::COperationManager*) pObjXXXX;
					pObjectX->redo();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_OperationManager_undo_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Controls::COperationManager *pObjectX = (EarthView::World::Spatial2D::Controls::COperationManager*) pObjXXXX;
					pObjectX->undo();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_OperationManager_beginMacro_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Controls::COperationManager *pObjectX = (EarthView::World::Spatial2D::Controls::COperationManager*) pObjXXXX;
					pObjectX->beginMacro();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_OperationManager_endMacro_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Controls::COperationManager *pObjectX = (EarthView::World::Spatial2D::Controls::COperationManager*) pObjXXXX;
					pObjectX->endMacro();
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_controls_OperationManager_isInMacro_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::COperationManager *pObjectX = (EarthView::World::Spatial2D::Controls::COperationManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->isInMacro();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_OperationManager_abortMacro_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Controls::COperationManager *pObjectX = (EarthView::World::Spatial2D::Controls::COperationManager*) pObjXXXX;
					pObjectX->abortMacro();
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_controls_OperationManager_getCurrentIndex_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::COperationManager *pObjectX = (EarthView::World::Spatial2D::Controls::COperationManager*) pObjXXXX;
					ev_int32 __values1 = pObjectX->getCurrentIndex();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_controls_OperationManager_push_1COperation(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong operation_j)
				{
					EarthView::World::Spatial2D::Controls::COperation *operation = (EarthView::World::Spatial2D::Controls::COperation*) operation_j;
					EarthView::World::Spatial2D::Controls::COperationManager *pObjectX = (EarthView::World::Spatial2D::Controls::COperationManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->push(operation);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_controls_OperationManager_isPushBlocked_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::COperationManager *pObjectX = (EarthView::World::Spatial2D::Controls::COperationManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->isPushBlocked();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_OperationManager_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Controls::COperationManager *pObjectX = (EarthView::World::Spatial2D::Controls::COperationManager*) pObjXXXX;
					pObjectX->clear();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_OperationManager_registerObserver_1IIndexObserver(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong observer_j)
				{
					EarthView::World::Spatial2D::Controls::IIndexObserver *observer = (EarthView::World::Spatial2D::Controls::IIndexObserver*) observer_j;
					EarthView::World::Spatial2D::Controls::COperationManager *pObjectX = (EarthView::World::Spatial2D::Controls::COperationManager*) pObjXXXX;
					pObjectX->registerObserver(observer);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_OperationManager_unregisterObserver_1IIndexObserver(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong observer_j)
				{
					EarthView::World::Spatial2D::Controls::IIndexObserver *observer = (EarthView::World::Spatial2D::Controls::IIndexObserver*) observer_j;
					EarthView::World::Spatial2D::Controls::COperationManager *pObjectX = (EarthView::World::Spatial2D::Controls::COperationManager*) pObjXXXX;
					pObjectX->unregisterObserver(observer);
				}
			}
		}
	}
}
